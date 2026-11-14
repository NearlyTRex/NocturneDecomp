// Name: shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_0049dbe0
// Address: 0049dbe0
// Address Range: [[0049dbe0, 0049dc19]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_0049dbe0(CEdCheck *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_0049dbe0(CEdCheck *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_0049dc20(this_ptr);
  iVar1 = iVar1 * DAT_0061b498 * 3;
  iVar2 = iVar1 >> 0x1f;
  return ((int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2) / DAT_0061b49c;
}
