// Name: engine_matrix.c_calculateTransformedZ_FUN_004e8e00
// Address: 004e8e00
// Address Range: [[004e8e00, 004e8e57]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_calculateTransformedZ_FUN_004e8e00(int *input_coords)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_matrix_c_calculateTransformedZ_FUN_004e8e00(int *input_coords)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = (longlong)_DAT_01c38ba4 * (longlong)(*input_coords - _DAT_01c38b6c);
  lVar2 = (longlong)_DAT_01c38bb0 * (longlong)(input_coords[1] - _DAT_01c38b70);
  lVar3 = (longlong)_DAT_01c38bbc * (longlong)(input_coords[2] - _DAT_01c38b74);
  return ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
}
