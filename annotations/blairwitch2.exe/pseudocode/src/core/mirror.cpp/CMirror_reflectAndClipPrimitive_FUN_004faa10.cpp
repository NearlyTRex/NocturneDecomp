// Name: core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004faa10
// Address: 004faa10
// Address Range: [[004faa10, 004fac4c]]
// Convention: __cdecl
// Signature: uint __cdecl core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_004faa10(CMirror *this_ptr,SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_004faa10(CMirror *this_ptr,SMRGLHeaderPrimitive *primitive)

{
  SMRGLHeaderPrimitive *pSVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  SMRGLHeaderPrimitive *pSVar5;
  int iVar6;
  float *local_14;
  
  _DAT_01d17fc0 = (primitive->base).count;
  iVar4 = 0;
  if (0 < _DAT_01d17fc0) {
    pfVar3 = (float *)&DAT_01d17fc4;
    pSVar5 = primitive;
    do {
      pSVar1 = pSVar5 + 1;
      pSVar5 = (SMRGLHeaderPrimitive *)&(pSVar5->base).count;
      piVar2 = (int *)(*DAT_0060b280 + (pSVar1->base).type * 0x30);
      iVar4 = iVar4 + 1;
      *pfVar3 = (float)*piVar2 * _DAT_005fa1b8;
      pfVar3[1] = (float)piVar2[1] * _DAT_005fa1b8;
      pfVar3[2] = (float)piVar2[2] * _DAT_005fa1b8;
      pfVar3 = pfVar3 + 3;
    } while (iVar4 < (primitive->base).count);
  }
  core_mirror_cpp_clipPolygonAgainstPlane_FUN_004f9770
            (this_ptr->clip_planes,(CVector3f *)&DAT_01d17fc4,_DAT_01d17fc0,
             (CVector3f *)&DAT_01d18148,(int *)&DAT_01d18144);
  if ((((2 < _DAT_01d18144) &&
       (core_mirror_cpp_clipPolygonAgainstPlane_FUN_004f9770
                  (this_ptr->clip_planes + 1,(CVector3f *)&DAT_01d18148,_DAT_01d18144,
                   (CVector3f *)&DAT_01d17fc4,(int *)&DAT_01d17fc0), 2 < _DAT_01d17fc0)) &&
      (core_mirror_cpp_clipPolygonAgainstPlane_FUN_004f9770
                 (this_ptr->clip_planes + 2,(CVector3f *)&DAT_01d17fc4,_DAT_01d17fc0,
                  (CVector3f *)&DAT_01d18148,(int *)&DAT_01d18144), 2 < _DAT_01d18144)) &&
     ((core_mirror_cpp_clipPolygonAgainstPlane_FUN_004f9770
                 (this_ptr->clip_planes + 3,(CVector3f *)&DAT_01d18148,_DAT_01d18144,
                  (CVector3f *)&DAT_01d17fc4,(int *)&DAT_01d17fc0), 2 < _DAT_01d17fc0 &&
      (core_mirror_cpp_clipPolygonAgainstPlane_FUN_004f9770
                 (this_ptr->clip_planes + 4,(CVector3f *)&DAT_01d17fc4,_DAT_01d17fc0,
                  (CVector3f *)&DAT_01d18148,(int *)&DAT_01d18144), 2 < _DAT_01d18144)))) {
    (this_ptr->clip_primitive).base.base.count = _DAT_01d18144;
    (this_ptr->clip_primitive).base.surface_normal.A = (primitive->surface_normal).A;
    (this_ptr->clip_primitive).base.surface_normal.B = (primitive->surface_normal).B;
    (this_ptr->clip_primitive).base.surface_normal.C = (primitive->surface_normal).C;
    (this_ptr->clip_primitive).base.surface_normal.D = (primitive->surface_normal).D;
    iVar4 = 0;
    if (0 < _DAT_01d18144) {
      local_14 = (float *)&DAT_01d18148;
      iVar6 = 0xea000;
      do {
        piVar2 = (int *)(*DAT_0060b280 + iVar6);
        *piVar2 = (int)ROUND(*local_14 * _DAT_005fa1b0);
        piVar2[1] = (int)ROUND(local_14[1] * _DAT_005fa1b0);
        piVar2[2] = (int)ROUND(local_14[2] * _DAT_005fa1b0);
        *(uint *)(iVar6 + 0x10 + *DAT_0060b280) = 0xffffffff;
        (this_ptr->clip_primitive).vertices[0] = iVar4 + 0x4e00;
        engine_matrix_c_projectCachedPoint_FUN_004e8e90(iVar4 + 0x4e00);
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 0x30;
        local_14 = local_14 + 3;
        this_ptr = (CMirror *)&(this_ptr->reflection).corner1.y;
      } while (iVar4 < _DAT_01d18144);
    }
    return 1;
  }
  return 0;
}
