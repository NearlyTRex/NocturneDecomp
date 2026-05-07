// Name: core_netgame.cpp_findSimFrame_FUN_0053f550
// Address: 0053f550
// MANUAL RECONSTRUCTION
// Address Range: [[0053f550, 0053f592]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_findSimFrame_FUN_0053f550(int sequence_number)

#include "nocturne.h"

int __cdecl core_netgame_cpp_findSimFrame_FUN_0053f550(int sequence_number)

{
  int iVar2;

  for (iVar2 = 0; iVar2 < g_SimFrameCount; iVar2 = iVar2 + 1) {
    if (sequence_number == g_SimFrameHistory[iVar2].sequence_number) {
      return iVar2;
    }
  }
  return -1;
}
