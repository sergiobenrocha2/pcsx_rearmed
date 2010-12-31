/***************************************************************************
                          stdafx.h  -  description
                             -------------------
    begin                : Sun Mar 08 2009
    copyright            : (C) 1999-2009 by Pete Bernert
    web                  : www.pbernert.com   
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version. See also the license.txt file for *
 *   additional informations.                                              *
 *                                                                         *
 ***************************************************************************/

//*************************************************************************// 
// History of changes:
//
// 2009/03/08 - Pete  
// - generic cleanup for the Peops release
//
//*************************************************************************// 

#ifndef __GPU_STDAFX__
#define __GPU_STDAFX__

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _GPU_API_
#define _GPU_API_ 1
#endif
	
	
	
	// maybe we should remove this? 
#ifdef _WINDOWS

#define _CRT_SECURE_NO_WARNINGS

#include <WINDOWS.H>
#include <WINDOWSX.H>
#include <Ts8.H>
#include "resource.h"

#pragma warning (disable:4244)

#include <gl/gl.h>

#else
/*
#define __X11_C_
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#ifdef __NANOGL__
#include <gl/gl.h>
#else
#ifdef SOFT_LINKAGE
#pragma softfp_linkage
#endif
#ifdef MAEMO_CHANGES

	//#include <GLES/glplatform.h>
	#include <GLES/gl.h>
	//#include <GLES/glext.h>
	#include <GLES/EGL/egl.h>
	//#include "../maemo/minimal.h"
	//#include <gdk/gdkx.h>
	//#include <gdk/gdk.h>


#else
	#include <gles/gl.h> // for opengl es types 
	#include <gles/egltypes.h>
#endif
#ifdef SOFT_LINKAGE
#pragma no_softfp_linkage
#endif
#endif
#include <math.h> 

#define __inline inline

#endif

#define SHADETEXBIT(x) ((x>>24) & 0x1)
#define SEMITRANSBIT(x) ((x>>25) & 0x1)

#ifndef _WINDOWS
#ifndef GL_BGRA_EXT
#define GL_BGRA_EXT GL_RGBA
#endif
#endif

#ifdef __cplusplus
}
#endif

#endif
