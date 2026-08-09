// Name: engine_3d.c_dispatchMRGLBlockChain_FUN_00408e80
// Address: 00408e80
// Address Range: [[00408e80, 00408eb0]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_dispatchMRGLBlockChain_FUN_00408e80(SMRGLHeaderExtended *chain)

#include "nocturne.h"

void __cdecl engine_3d_c_dispatchMRGLBlockChain_FUN_00408e80(SMRGLHeaderExtended *chain)

{
  int iVar1;
  
  if (chain != (SMRGLHeaderExtended *)0x0) {
    while( true ) {
      iVar1 = (chain->base).type;
      if (((iVar1 == 0) || (iVar1 < 0)) || (0x42 < iVar1)) break;
      chain = (SMRGLHeaderExtended *)(*(code *)(&g_MRGLBlockHandlerTable)[iVar1])(chain);
    }
    INT_005b7644 = 1;
  }
  return;
}
