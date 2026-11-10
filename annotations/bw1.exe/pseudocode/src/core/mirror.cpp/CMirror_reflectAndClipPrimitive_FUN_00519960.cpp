// Name: core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00519960
// Address: 00519960
// Address Range: [[00519960, 00519b9c]]
// Convention: __cdecl
// Signature: uint __cdecl core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_00519960(CMirror *this_ptr,SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_00519960(CMirror *this_ptr,SMRGLHeaderPrimitive *primitive)

{
  SMRGLHeaderPrimitive *pSVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  SMRGLHeaderPrimitive *pSVar5;
  int iVar6;
  float *local_14;
  
  _DAT_01d2c5d0 = (primitive->base).count;
  iVar4 = 0;
  if (0 < _DAT_01d2c5d0) {
    pfVar3 = (float *)&DAT_01d2c5d4;
    pSVar5 = primitive;
    do {
      pSVar1 = pSVar5 + 1;
      pSVar5 = (SMRGLHeaderPrimitive *)&(pSVar5->base).count;
      piVar2 = (int *)(*DAT_00612560 + (pSVar1->base).type * 0x30);
      iVar4 = iVar4 + 1;
      *pfVar3 = (float)*piVar2 * _DAT_00603ce8;
      pfVar3[1] = (float)piVar2[1] * _DAT_00603ce8;
      pfVar3[2] = (float)piVar2[2] * _DAT_00603ce8;
      pfVar3 = pfVar3 + 3;
    } while (iVar4 < (primitive->base).count);
  }
  core_mirror_cpp_clipPolygonAgainstPlane_FUN_005186c0
            (this_ptr->clip_planes,&DAT_01d2c5d4,_DAT_01d2c5d0,&DAT_01d2c758,&DAT_01d2c754);
  if ((((2 < _DAT_01d2c754) &&
       (core_mirror_cpp_clipPolygonAgainstPlane_FUN_005186c0
                  (this_ptr->clip_planes + 1,&DAT_01d2c758,_DAT_01d2c754,&DAT_01d2c5d4,&DAT_01d2c5d0
                  ), 2 < _DAT_01d2c5d0)) &&
      (core_mirror_cpp_clipPolygonAgainstPlane_FUN_005186c0
                 (this_ptr->clip_planes + 2,&DAT_01d2c5d4,_DAT_01d2c5d0,&DAT_01d2c758,&DAT_01d2c754)
      , 2 < _DAT_01d2c754)) &&
     ((core_mirror_cpp_clipPolygonAgainstPlane_FUN_005186c0
                 (this_ptr->clip_planes + 3,&DAT_01d2c758,_DAT_01d2c754,&DAT_01d2c5d4,&DAT_01d2c5d0)
      , 2 < _DAT_01d2c5d0 &&
      (core_mirror_cpp_clipPolygonAgainstPlane_FUN_005186c0
                 (this_ptr->clip_planes + 4,&DAT_01d2c5d4,_DAT_01d2c5d0,&DAT_01d2c758,&DAT_01d2c754)
      , 2 < _DAT_01d2c754)))) {
    (this_ptr->clip_primitive).base.base.count = _DAT_01d2c754;
    (this_ptr->clip_primitive).base.surface_normal.A = (primitive->surface_normal).A;
    (this_ptr->clip_primitive).base.surface_normal.B = (primitive->surface_normal).B;
    (this_ptr->clip_primitive).base.surface_normal.C = (primitive->surface_normal).C;
    (this_ptr->clip_primitive).base.surface_normal.D = (primitive->surface_normal).D;
    iVar4 = 0;
    if (0 < _DAT_01d2c754) {
      local_14 = (float *)&DAT_01d2c758;
      iVar6 = 0xea000;
      do {
        piVar2 = (int *)(*DAT_00612560 + iVar6);
        *piVar2 = (int)ROUND(*local_14 * _DAT_00603ce0);
        piVar2[1] = (int)ROUND(local_14[1] * _DAT_00603ce0);
        piVar2[2] = (int)ROUND(local_14[2] * _DAT_00603ce0);
        *(uint *)(iVar6 + 0x10 + *DAT_00612560) = 0xffffffff;
        (this_ptr->clip_primitive).vertices[0] = iVar4 + 0x4e00;
        engine_matrix_c_projectCachedPoint_FUN_00507b30(iVar4 + 0x4e00);
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 0x30;
        local_14 = local_14 + 3;
        this_ptr = (CMirror *)&(this_ptr->reflection).corner1.y;
      } while (iVar4 < _DAT_01d2c754);
    }
    return 1;
  }
  return 0;
}
