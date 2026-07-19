// Name: dll_dx7.cpp_getMipLevelPtr_FUN_10003a30
// Address: 10003a30
// MANUAL RECONSTRUCTION
// Address Range: [[10003a30, 10003a66] [10003a6a, 10003a73]]
// Convention: __cdecl
// Signature: uint * __cdecl dll_dx7_cpp_getMipLevelPtr_FUN_10003a30(int mip_size)

#include "nocturne.h"

uint * __cdecl dll_dx7_cpp_getMipLevelPtr_FUN_10003a30(int mip_size)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = g_ExpandedTexture;
  iVar1 = *g_ExternalRendererBridge.texture_dimension;
  do {
    if (iVar1 == mip_size) {
      return puVar2;
    }
    puVar2 = puVar2 + iVar1 * iVar1;
    iVar1 = iVar1 / 2;
  } while (iVar1 != 0);
  dll_dx7_cpp_fatalError_FUN_10002340("Can't get source size");
}
