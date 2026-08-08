// Name: engine_matrix.c_calculateTransformedZ_FUN_004cd1b0
// Address: 004cd1b0
// Address Range: [[004cd1b0, 004cd207]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_calculateTransformedZ_FUN_004cd1b0(int *input_coords)

#include "nocturne.h"

int __cdecl engine_matrix_c_calculateTransformedZ_FUN_004cd1b0(int *input_coords)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = (longlong)g_TransformMatrix.m[0].z * (longlong)(*input_coords - g_RelativeX);
  lVar2 = (longlong)g_TransformMatrix.m[1].z * (longlong)(input_coords[1] - g_RelativeY);
  lVar3 = (longlong)g_TransformMatrix.m[2].z * (longlong)(input_coords[2] - g_RelativeZ);
  return ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
}
