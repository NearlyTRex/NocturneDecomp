// Name: engine_3d.c_dispatchMRGLBlockChain_FUN_00407720
// Address: 00407720
// Address Range: [[00407720, 00407754]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_dispatchMRGLBlockChain_FUN_00407720(SMRGLHeaderExtended *chain)

#include "nocturne.h"

void __cdecl engine_3d_c_dispatchMRGLBlockChain_FUN_00407720(SMRGLHeaderExtended *chain)

{
  int iVar1;
  
  if (chain != (SMRGLHeaderExtended *)0x0) {
    do {
      iVar1 = (chain->base).type;
      if (((iVar1 == 0) || (iVar1 < 0)) || (0x42 < iVar1)) break;
      chain = (SMRGLHeaderExtended *)
              (*(code *)(&PTR_engine_3d_c_badMRGLStruct_FUN_004037b0_005f07c4)[iVar1])(chain);
    } while (chain != (SMRGLHeaderExtended *)0x0);
    DAT_005fba40 = 1;
  }
  return;
}
