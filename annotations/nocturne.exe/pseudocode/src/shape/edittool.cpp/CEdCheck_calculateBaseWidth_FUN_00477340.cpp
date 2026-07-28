// Name: shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_00477340
// Address: 00477340
// Address Range: [[00477340, 00477360]]
// Convention: unknown
// Signature: int shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_00477340(int param_1)

#include "nocturne.h"

int shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_00477340(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) * 7;
  iVar2 = iVar1 >> 0x1f;
  return (int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3;
}
