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
#ifndef GL_HALF_FLOAT
#define GL_HALF_FLOAT 0x140B
#endif
#ifndef GL_CLAMP_TO_BORDER
#define GL_CLAMP_TO_BORDER 0x812D
#endif
#ifndef GL_CLAMP_TO_BORDER_OES
#define GL_CLAMP_TO_BORDER_OES GL_CLAMP_TO_BORDER
#endif
#ifndef GL_TEXTURE_BORDER_COLOR
#define GL_TEXTURE_BORDER_COLOR 0x1004
#endif
#ifndef GL_TEXTURE_LOD_BIAS
#define GL_TEXTURE_LOD_BIAS 0x8501
#endif
#ifndef GL_FRAMEBUFFER_EXT
#define GL_FRAMEBUFFER_EXT GL_FRAMEBUFFER
#endif
#ifndef GL_TEXTURE_COMPARE_MODE_ARB
#define GL_TEXTURE_COMPARE_MODE_ARB GL_COMPARE_REF_TO_TEXTURE
#endif
#ifndef GL_COMPARE_R_TO_TEXTURE_ARB
#define GL_COMPARE_R_TO_TEXTURE_ARB GL_COMPARE_REF_TO_TEXTURE
#endif
#ifndef GL_TEXTURE_COMPARE_FUNC_ARB
#define GL_TEXTURE_COMPARE_FUNC_ARB GL_TEXTURE_COMPARE_FUNC
#endif
#else
#include "SDL_opengl.h"
#endif
#endif

#endif
