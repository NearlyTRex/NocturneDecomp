// Name: FUN_10003a30
// Address: 10003a30
// Address Range: [[10003a30, 10003a73]]
// Convention: unknown
// Signature: undefined4 * FUN_10003a30(int param_1)

#include "nocturne.h"

uint * FUN_10003a30(int param_1)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = &DAT_101b88e0;
  iVar1 = *g_ExternalRendererBridge.texture_dimension;
  while (iVar1 != param_1) {
    puVar2 = puVar2 + iVar1 * iVar1;
    iVar1 = iVar1 / 2;
    if (iVar1 == 0) {
      FUN_10002340("Can't get source size");
    }
  }
  return puVar2;
}
