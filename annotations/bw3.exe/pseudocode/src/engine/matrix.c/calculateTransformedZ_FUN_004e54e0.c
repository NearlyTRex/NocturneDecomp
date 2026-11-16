// Name: engine_matrix.c_calculateTransformedZ_FUN_004e54e0
// Address: 004e54e0
// Address Range: [[004e54e0, 004e5537]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_calculateTransformedZ_FUN_004e54e0(int *input_coords)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_matrix_c_calculateTransformedZ_FUN_004e54e0(int *input_coords)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = (longlong)_DAT_01c6e304 * (longlong)(*input_coords - _DAT_01c6e2cc);
  lVar2 = (longlong)_DAT_01c6e310 * (longlong)(input_coords[1] - _DAT_01c6e2d0);
  lVar3 = (longlong)_DAT_01c6e31c * (longlong)(input_coords[2] - _DAT_01c6e2d4);
  return ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
}
