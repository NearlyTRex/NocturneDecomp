// Name: core_mirror.cpp_FUN_004faa10
// Address: 004faa10
// Address Range: [[004faa10, 004fac4c]]
// Convention: __cdecl
// Signature: uint __cdecl core_mirror_cpp_FUN_004faa10(CMirror *this_ptr,SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_mirror_cpp_FUN_004faa10(CMirror *this_ptr,SMRGLHeaderPrimitive *primitive)

{
  SMRGLHeaderPrimitive *pSVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  SMRGLHeaderPrimitive *pSVar5;
  int iVar6;
  float *local_14;
  
  _DAT_01d17fc0 = *(int *)(primitive + 4);
  iVar4 = 0;
  if (0 < _DAT_01d17fc0) {
    pfVar3 = (float *)&DAT_01d17fc4;
    pSVar5 = primitive;
    do {
      pSVar1 = pSVar5 + 0x18;
      pSVar5 = pSVar5 + 4;
      piVar2 = (int *)(*DAT_0060b280 + *(int *)pSVar1 * 0x30);
      iVar4 = iVar4 + 1;
      *pfVar3 = (float)*piVar2 * _DAT_005fa1b8;
      pfVar3[1] = (float)piVar2[1] * _DAT_005fa1b8;
      pfVar3[2] = (float)piVar2[2] * _DAT_005fa1b8;
      pfVar3 = pfVar3 + 3;
    } while (iVar4 < *(int *)(primitive + 4));
  }
  core_mirror_cpp_clipPolygonAgainstPlane_FUN_004f9770
            (this_ptr + 0x98,&DAT_01d17fc4,_DAT_01d17fc0,&DAT_01d18148,&DAT_01d18144);
  if ((((2 < _DAT_01d18144) &&
       (core_mirror_cpp_clipPolygonAgainstPlane_FUN_004f9770
                  (this_ptr + 0xa8,&DAT_01d18148,_DAT_01d18144,&DAT_01d17fc4,&DAT_01d17fc0),
       2 < _DAT_01d17fc0)) &&
      (core_mirror_cpp_clipPolygonAgainstPlane_FUN_004f9770
                 (this_ptr + 0xb8,&DAT_01d17fc4,_DAT_01d17fc0,&DAT_01d18148,&DAT_01d18144),
      2 < _DAT_01d18144)) &&
     ((core_mirror_cpp_clipPolygonAgainstPlane_FUN_004f9770
                 (this_ptr + 200,&DAT_01d18148,_DAT_01d18144,&DAT_01d17fc4,&DAT_01d17fc0),
      2 < _DAT_01d17fc0 &&
      (core_mirror_cpp_clipPolygonAgainstPlane_FUN_004f9770
                 (this_ptr + 0xd8,&DAT_01d17fc4,_DAT_01d17fc0,&DAT_01d18148,&DAT_01d18144),
      2 < _DAT_01d18144)))) {
    *(int *)(this_ptr + 0xec) = _DAT_01d18144;
    *(uint *)(this_ptr + 0xf0) = *(uint *)(primitive + 8);
    *(uint *)(this_ptr + 0xf4) = *(uint *)(primitive + 0xc);
    *(uint *)(this_ptr + 0xf8) = *(uint *)(primitive + 0x10);
    *(uint *)(this_ptr + 0xfc) = *(uint *)(primitive + 0x14);
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
        *(int *)(this_ptr + 0x100) = iVar4 + 0x4e00;
        engine_matrix_c_projectCachedPoint_FUN_004e8e90(iVar4 + 0x4e00);
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 0x30;
        local_14 = local_14 + 3;
        this_ptr = this_ptr + 4;
      } while (iVar4 < _DAT_01d18144);
    }
    return 1;
  }
  return 0;
}
