// Name: core_mirror.cpp_FUN_00519960
// Address: 00519960
// Address Range: [[00519960, 00519b9c]]
// Convention: __cdecl
// Signature: uint __cdecl core_mirror_cpp_FUN_00519960(CMirror *this_ptr,SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_mirror_cpp_FUN_00519960(CMirror *this_ptr,SMRGLHeaderPrimitive *primitive)

{
  SMRGLHeaderPrimitive *pSVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  SMRGLHeaderPrimitive *pSVar5;
  int iVar6;
  float *local_14;
  
  _DAT_01d2c5d0 = *(int *)(primitive + 4);
  iVar4 = 0;
  if (0 < _DAT_01d2c5d0) {
    pfVar3 = (float *)&DAT_01d2c5d4;
    pSVar5 = primitive;
    do {
      pSVar1 = pSVar5 + 0x18;
      pSVar5 = pSVar5 + 4;
      piVar2 = (int *)(*DAT_00612560 + *(int *)pSVar1 * 0x30);
      iVar4 = iVar4 + 1;
      *pfVar3 = (float)*piVar2 * _DAT_00603ce8;
      pfVar3[1] = (float)piVar2[1] * _DAT_00603ce8;
      pfVar3[2] = (float)piVar2[2] * _DAT_00603ce8;
      pfVar3 = pfVar3 + 3;
    } while (iVar4 < *(int *)(primitive + 4));
  }
  core_mirror_cpp_clipPolygonAgainstPlane_FUN_005186c0
            (this_ptr + 0x98,&DAT_01d2c5d4,_DAT_01d2c5d0,&DAT_01d2c758,&DAT_01d2c754);
  if ((((2 < _DAT_01d2c754) &&
       (core_mirror_cpp_clipPolygonAgainstPlane_FUN_005186c0
                  (this_ptr + 0xa8,&DAT_01d2c758,_DAT_01d2c754,&DAT_01d2c5d4,&DAT_01d2c5d0),
       2 < _DAT_01d2c5d0)) &&
      (core_mirror_cpp_clipPolygonAgainstPlane_FUN_005186c0
                 (this_ptr + 0xb8,&DAT_01d2c5d4,_DAT_01d2c5d0,&DAT_01d2c758,&DAT_01d2c754),
      2 < _DAT_01d2c754)) &&
     ((core_mirror_cpp_clipPolygonAgainstPlane_FUN_005186c0
                 (this_ptr + 200,&DAT_01d2c758,_DAT_01d2c754,&DAT_01d2c5d4,&DAT_01d2c5d0),
      2 < _DAT_01d2c5d0 &&
      (core_mirror_cpp_clipPolygonAgainstPlane_FUN_005186c0
                 (this_ptr + 0xd8,&DAT_01d2c5d4,_DAT_01d2c5d0,&DAT_01d2c758,&DAT_01d2c754),
      2 < _DAT_01d2c754)))) {
    *(int *)(this_ptr + 0xec) = _DAT_01d2c754;
    *(uint *)(this_ptr + 0xf0) = *(uint *)(primitive + 8);
    *(uint *)(this_ptr + 0xf4) = *(uint *)(primitive + 0xc);
    *(uint *)(this_ptr + 0xf8) = *(uint *)(primitive + 0x10);
    *(uint *)(this_ptr + 0xfc) = *(uint *)(primitive + 0x14);
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
        *(int *)(this_ptr + 0x100) = iVar4 + 0x4e00;
        engine_matrix_c_projectCachedPoint_FUN_00507b30(iVar4 + 0x4e00);
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 0x30;
        local_14 = local_14 + 3;
        this_ptr = this_ptr + 4;
      } while (iVar4 < _DAT_01d2c754);
    }
    return 1;
  }
  return 0;
}
