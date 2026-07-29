// Name: engine_3d.c_setVertexTextureU_FUN_00406840
// Address: 00406840
// Address Range: [[00406840, 0040687d]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_setVertexTextureU_FUN_00406840(SMRGLHeaderExtended *mrgl)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_setVertexTextureU_FUN_00406840(SMRGLHeaderExtended *mrgl)

{
  int iVar1;
  SMRGLHeaderExtended *pSVar2;
  
  pSVar2 = mrgl + 1;
  iVar1 = 0;
  if (0 < mrgl->child_count) {
    do {
      (&DAT_005c502c)[((mrgl->base).count + iVar1) * 0xc] = (pSVar2->base).type << 0x10;
      iVar1 = iVar1 + 1;
      pSVar2 = (SMRGLHeaderExtended *)&(pSVar2->base).count;
    } while (iVar1 < mrgl->child_count);
  }
  return (SMRGLHeaderExtended *)(&mrgl[1].base.type + mrgl->child_count);
}
