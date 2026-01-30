// Name: core_set.cpp_FUN_0056e890
// Address: 0056e890
// Address Range: [[0056e890, 0056e959]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_0056e890(void)

#include "nocturne.h"

void __cdecl core_set_cpp_FUN_0056e890(void)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  int *in_stack_00000004;
  
  iVar1 = g_CameraOriginY +
          ((uint)((longlong)g_InverseMatrix.m[2].y * (longlong)in_stack_00000004[2]) >> 0x10 |
          (int)((ulonglong)((longlong)g_InverseMatrix.m[2].y * (longlong)in_stack_00000004[2]) >>
               0x20) << 0x10) +
          ((uint)((longlong)g_InverseMatrix.m[0].y * (longlong)*in_stack_00000004) >> 0x10 |
          (int)((ulonglong)((longlong)g_InverseMatrix.m[0].y * (longlong)*in_stack_00000004) >> 0x20
               ) << 0x10) +
          ((uint)((longlong)g_InverseMatrix.m[1].y * (longlong)in_stack_00000004[1]) >> 0x10 |
          (int)((ulonglong)((longlong)g_InverseMatrix.m[1].y * (longlong)in_stack_00000004[1]) >>
               0x20) << 0x10);
  iVar2 = g_CameraOriginZ +
          ((uint)((longlong)g_InverseMatrix.m[2].z * (longlong)in_stack_00000004[2]) >> 0x10 |
          (int)((ulonglong)((longlong)g_InverseMatrix.m[2].z * (longlong)in_stack_00000004[2]) >>
               0x20) << 0x10) +
          ((uint)((longlong)g_InverseMatrix.m[0].z * (longlong)*in_stack_00000004) >> 0x10 |
          (int)((ulonglong)((longlong)g_InverseMatrix.m[0].z * (longlong)*in_stack_00000004) >> 0x20
               ) << 0x10) +
          ((uint)((longlong)g_InverseMatrix.m[1].z * (longlong)in_stack_00000004[1]) >> 0x10 |
          (int)((ulonglong)((longlong)g_InverseMatrix.m[1].z * (longlong)in_stack_00000004[1]) >>
               0x20) << 0x10);
  *unaff_ESI = g_CameraOriginX +
               ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)in_stack_00000004[2]) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)in_stack_00000004[2])
                    >> 0x20) << 0x10) +
               ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)*in_stack_00000004) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)*in_stack_00000004) >>
                    0x20) << 0x10) +
               ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)in_stack_00000004[1]) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)in_stack_00000004[1])
                    >> 0x20) << 0x10);
  unaff_ESI[1] = iVar1;
  unaff_ESI[2] = iVar2;
  return;
}
