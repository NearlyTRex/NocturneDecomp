// Name: engine_3d.c_setVertexTextureU_FUN_004050c0
// Address: 004050c0
// Address Range: [[004050c0, 004050fd]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_setVertexTextureU_FUN_004050c0(SMRGLHeaderExtended *mrgl)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_setVertexTextureU_FUN_004050c0(SMRGLHeaderExtended *mrgl)

{
  int iVar1;
  SMRGLHeaderExtended *pSVar2;
  
  pSVar2 = mrgl + 1;
  iVar1 = 0;
  if (0 < mrgl->child_count) {
    do {
      (&DAT_0062902c)[((mrgl->base).count + iVar1) * 0xc] = (pSVar2->base).type << 0x10;
      iVar1 = iVar1 + 1;
      pSVar2 = (SMRGLHeaderExtended *)&(pSVar2->base).count;
    } while (iVar1 < mrgl->child_count);
  }
  return (SMRGLHeaderExtended *)(&mrgl[1].base.type + mrgl->child_count);
}
