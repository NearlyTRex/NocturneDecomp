// Name: engine_matrix.c_calculateTransformedZ_FUN_00507aa0
// Address: 00507aa0
// Address Range: [[00507aa0, 00507af7]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_calculateTransformedZ_FUN_00507aa0(int *input_coords)

#include "nocturne.h"

int __cdecl engine_matrix_c_calculateTransformedZ_FUN_00507aa0(int *input_coords)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = (longlong)g_INT_01c51d64 * (longlong)(*input_coords - g_RelativeX);
  lVar2 = (longlong)g_INT_01c51d70 * (longlong)(input_coords[1] - g_RelativeY);
  lVar3 = (longlong)g_INT_01c51d7c * (longlong)(input_coords[2] - g_RelativeZ);
  return ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
}
