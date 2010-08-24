/*
Bullet Continuous Collision Detection and Physics Library, http://bulletphysics.org
Copyright (C) 2006 - 2010 Sony Computer Entertainment Inc. 

This software is provided 'as-is', without any express or implied warranty.
In no event will the authors be held liable for any damages arising from the use of this software.
Permission is granted to anyone to use this software for any purpose, 
including commercial applications, and to alter it and redistribute it freely, 
subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.
*/

#ifndef BTOCLCOMMON_H
#define BTOCLCOMMON_H

#ifdef __APPLE__
#ifdef USE_MINICL
	#include <MiniCL/cl.h>
#else
	#include <MiniCL/cl.h>
#endif
#else
	#ifdef USE_MINICL
		#include <MiniCL/cl.h>
	#else
		#include <CL/cl.h>
	#endif
#endif //__APPLE__


class btOclCommon
{
public:
	static cl_context createContextFromType(cl_device_type deviceType, cl_int* pErrNum);
};



#endif // BTOCLCOMMON_H