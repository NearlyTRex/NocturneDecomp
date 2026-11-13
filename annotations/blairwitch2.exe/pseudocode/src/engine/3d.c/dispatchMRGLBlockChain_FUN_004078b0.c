// Name: engine_3d.c_dispatchMRGLBlockChain_FUN_004078b0
// Address: 004078b0
// Address Range: [[004078b0, 004078e0]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_dispatchMRGLBlockChain_FUN_004078b0(SMRGLHeaderExtended *chain)

#include "nocturne.h"

void __cdecl engine_3d_c_dispatchMRGLBlockChain_FUN_004078b0(SMRGLHeaderExtended *chain)

{
  int iVar1;
  
  if (chain != (SMRGLHeaderExtended *)0x0) {
    while( true ) {
      iVar1 = (chain->base).type;
      if (((iVar1 == 0) || (iVar1 < 0)) || (0x42 < iVar1)) break;
      chain = (SMRGLHeaderExtended *)
              (*(code *)(&PTR_engine_3d_c_badMRGLStruct_FUN_00403800_006093c4)[iVar1])(chain);
    }
    DAT_006141e0 = 1;
  }
  return;
}
