#ifndef TOGL_SDL_GL_H
#define TOGL_SDL_GL_H

#ifdef USE_SDL
#if defined( IOS ) || defined( _IOS ) || defined( __IPHONEOS__ )
#include <OpenGLES/ES3/gl.h>
#include <OpenGLES/ES3/glext.h>
#ifndef APIENTRY
#define APIENTRY
#endif
#ifndef _APIENTRY
#define _APIENTRY APIENTRY
#endif
#ifndef GLAPI
#define GLAPI extern
#endif
#ifndef GLclampf
typedef float GLclampf;
#endif
#ifndef GLclampd
typedef double GLclampd;
#endif
#include "togl_gles_desktop_enums.h"
#else
#include "SDL_opengl.h"
#endif
#endif

#endif
