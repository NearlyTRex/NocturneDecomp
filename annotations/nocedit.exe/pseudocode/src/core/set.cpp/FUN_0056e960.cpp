// Name: core_set.cpp_FUN_0056e960
// Address: 0056e960
// Address Range: [[0056e960, 0056eab0]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_0056e960(void)

#include "nocturne.h"

void core_set_cpp_FUN_0056e960(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int *unaff_ESI;
  int iVar7;
  int iVar8;
  int iVar9;
  int *in_stack_00000004;
  
  iVar7 = ((uint)((longlong)g_TransformMatrix.m[0].x * (longlong)*in_stack_00000004) >> 0x10 |
          (int)((ulonglong)((longlong)g_TransformMatrix.m[0].x * (longlong)*in_stack_00000004) >>
               0x20) << 0x10) +
          ((uint)((longlong)g_TransformMatrix.m[1].x * (longlong)in_stack_00000004[1]) >> 0x10 |
          (int)((ulonglong)((longlong)g_TransformMatrix.m[1].x * (longlong)in_stack_00000004[1]) >>
               0x20) << 0x10) +
          ((uint)((longlong)g_TransformMatrix.m[2].x * (longlong)in_stack_00000004[2]) >> 0x10 |
          (int)((ulonglong)((longlong)g_TransformMatrix.m[2].x * (longlong)in_stack_00000004[2]) >>
               0x20) << 0x10);
  iVar8 = ((uint)((longlong)g_TransformMatrix.m[0].y * (longlong)*in_stack_00000004) >> 0x10 |
          (int)((ulonglong)((longlong)g_TransformMatrix.m[0].y * (longlong)*in_stack_00000004) >>
               0x20) << 0x10) +
          ((uint)((longlong)g_TransformMatrix.m[1].y * (longlong)in_stack_00000004[1]) >> 0x10 |
          (int)((ulonglong)((longlong)g_TransformMatrix.m[1].y * (longlong)in_stack_00000004[1]) >>
               0x20) << 0x10) +
          ((uint)((longlong)g_TransformMatrix.m[2].y * (longlong)in_stack_00000004[2]) >> 0x10 |
          (int)((ulonglong)((longlong)g_TransformMatrix.m[2].y * (longlong)in_stack_00000004[2]) >>
               0x20) << 0x10);
  iVar9 = ((uint)((longlong)g_TransformMatrix.m[0].z * (longlong)*in_stack_00000004) >> 0x10 |
          (int)((ulonglong)((longlong)g_TransformMatrix.m[0].z * (longlong)*in_stack_00000004) >>
               0x20) << 0x10) +
          ((uint)((longlong)g_TransformMatrix.m[1].z * (longlong)in_stack_00000004[1]) >> 0x10 |
          (int)((ulonglong)((longlong)g_TransformMatrix.m[1].z * (longlong)in_stack_00000004[1]) >>
               0x20) << 0x10) +
          ((uint)((longlong)g_TransformMatrix.m[2].z * (longlong)in_stack_00000004[2]) >> 0x10 |
          (int)((ulonglong)((longlong)g_TransformMatrix.m[2].z * (longlong)in_stack_00000004[2]) >>
               0x20) << 0x10);
  lVar1 = (longlong)g_InverseMatrix.m[0].y;
  lVar2 = (longlong)g_InverseMatrix.m[1].y;
  lVar3 = (longlong)g_InverseMatrix.m[2].y;
  lVar4 = (longlong)g_InverseMatrix.m[0].z;
  lVar5 = (longlong)g_InverseMatrix.m[1].z;
  lVar6 = (longlong)g_InverseMatrix.m[2].z;
  *unaff_ESI = ((uint)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar7) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[0].x * (longlong)iVar7) >> 0x20) <<
               0x10) + ((uint)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar8) >> 0x10 |
                       (int)((ulonglong)((longlong)g_InverseMatrix.m[1].x * (longlong)iVar8) >> 0x20
                            ) << 0x10) +
               ((uint)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar9) >> 0x10 |
               (int)((ulonglong)((longlong)g_InverseMatrix.m[2].x * (longlong)iVar9) >> 0x20) <<
               0x10);
  unaff_ESI[1] = ((uint)(lVar1 * iVar7) >> 0x10 | (int)((ulonglong)(lVar1 * iVar7) >> 0x20) << 0x10)
                 + ((uint)(lVar2 * iVar8) >> 0x10 |
                   (int)((ulonglong)(lVar2 * iVar8) >> 0x20) << 0x10) +
                 ((uint)(lVar3 * iVar9) >> 0x10 | (int)((ulonglong)(lVar3 * iVar9) >> 0x20) << 0x10)
  ;
  unaff_ESI[2] = ((uint)(lVar4 * iVar7) >> 0x10 | (int)((ulonglong)(lVar4 * iVar7) >> 0x20) << 0x10)
                 + ((uint)(lVar5 * iVar8) >> 0x10 |
                   (int)((ulonglong)(lVar5 * iVar8) >> 0x20) << 0x10) +
                 ((uint)(lVar6 * iVar9) >> 0x10 | (int)((ulonglong)(lVar6 * iVar9) >> 0x20) << 0x10)
  ;
  return;
}
