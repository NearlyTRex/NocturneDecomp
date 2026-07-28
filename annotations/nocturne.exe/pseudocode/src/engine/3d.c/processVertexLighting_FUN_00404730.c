// Name: engine_3d.c_processVertexLighting_FUN_00404730
// Address: 00404730
// Address Range: [[00404730, 0040478c]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_processVertexLighting_FUN_00404730(SMRGLHeaderExtended *mrgl)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_processVertexLighting_FUN_00404730(SMRGLHeaderExtended *mrgl)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderExtended *pSVar3;
  
  iVar2 = 0;
  pSVar3 = mrgl;
  if (0 < mrgl->child_count) {
    do {
      pSVar3 = pSVar3 + 1;
      iVar1 = (mrgl->base).count + iVar2;
      iVar2 = iVar2 + 1;
      engine_light_cpp_calculateAndStoreVertexLight_FUN_004c6d90(iVar1 + DAT_006b0264,pSVar3);
    } while (iVar2 < mrgl->child_count);
  }
  return mrgl + mrgl->child_count + 1;
}
