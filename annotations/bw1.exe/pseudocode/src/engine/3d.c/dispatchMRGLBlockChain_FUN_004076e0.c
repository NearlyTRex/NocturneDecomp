// Name: engine_3d.c_dispatchMRGLBlockChain_FUN_004076e0
// Address: 004076e0
// Address Range: [[004076e0, 00407714]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_dispatchMRGLBlockChain_FUN_004076e0(SMRGLHeaderExtended *chain)

#include "nocturne.h"

void __cdecl engine_3d_c_dispatchMRGLBlockChain_FUN_004076e0(SMRGLHeaderExtended *chain)

{
  int iVar1;
  
  if (chain != (SMRGLHeaderExtended *)0x0) {
    do {
      iVar1 = (chain->base).type;
      if (((iVar1 == 0) || (iVar1 < 0)) || (0x42 < iVar1)) break;
      chain = (SMRGLHeaderExtended *)(*(code *)g_ARRAY_PTR_006104f4[iVar1])(chain);
    } while (chain != (SMRGLHeaderExtended *)0x0);
    g_VertexProcessingEnabled = 1;
  }
  return;
}
