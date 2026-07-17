// Name: dll_dx7.cpp_FUN_10003a30
// Address: 10003a30
// Address Range: [[10003a30, 10003a66] [10003a6a, 10003a73]]
// Convention: unknown
// Signature: uint * dll_dx7_cpp_FUN_10003a30(int param_1)

#include "nocturne.h"

uint * dll_dx7_cpp_FUN_10003a30(int param_1)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = g_ExpandedTexture;
  iVar1 = *g_ExternalRendererBridge.texture_dimension;
  do {
    if (iVar1 == param_1) {
      return puVar2;
    }
    puVar2 = puVar2 + iVar1 * iVar1;
    iVar1 = iVar1 / 2;
  } while (iVar1 != 0);
                    /* WARNING: Subroutine does not return */
  dll_dx7_cpp_fatalError_FUN_10002340("Can't get source size");
}
