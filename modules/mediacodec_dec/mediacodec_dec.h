/*
 *			GPAC - Multimedia Framework C SDK
 *
 *			Authors: Jean Le Feuvre
 *			Copyright (c) Telecom ParisTech 2000-2012
 *					All rights reserved
 *
 *  This file is part of GPAC / codec pack module
 *
 *  GPAC is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  GPAC is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#ifndef _MEDIACODEC_DEC_H_
#define _MEDIACODEC_DEC_H_
#include <gpac/modules/codec.h>

GF_Err MCDec_CreateSurface (ANativeWindow ** window, u32 *gl_tex_id, Bool * surface_rendering);
GF_Err MCFrame_UpdateTexImage();
GF_Err MCFrame_GetTransformMatrix(GF_CodecMatrix * mx);
GF_Err MCDec_DeleteSurface();
#endif //_MEDIACODEC_DEC_H_

