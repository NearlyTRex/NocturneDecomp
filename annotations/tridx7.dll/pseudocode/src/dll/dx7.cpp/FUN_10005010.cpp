// Name: dll_dx7.cpp_FUN_10005010
// Address: 10005010
// Address Range: [[10005010, 1000511a] [1000511e, 1000512c]]
// Convention: unknown
// Signature: undefined4 dll_dx7_cpp_FUN_10005010(int *param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

uint dll_dx7_cpp_FUN_10005010(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SScreenVertex *pSVar6;
  SScreenVertex *pSVar7;
  char *message;
  
  iVar3 = g_PendingVertexCount;
  iVar1 = *param_1;
  param_2 = param_2 + iVar1 * 0x30;
  if (*(int *)(&DAT_10215e48 + iVar1 * 4) == DAT_10014234) {
    if ((*(int *)(param_2 + 0x18) != param_1[1]) || (param_1[2] != *(int *)(param_2 + 0x1c))) {
      iVar4 = param_1[2];
      *(int *)(param_2 + 0x18) = param_1[1];
      iVar2 = *(int *)(&DAT_10226f08 + iVar1 * 4);
      *(int *)(param_2 + 0x1c) = iVar4;
      pSVar6 = g_VertexBuffer + iVar2;
      pSVar7 = g_VertexBuffer + g_PendingVertexCount;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        pSVar7->x = pSVar6->x;
        pSVar6 = (SScreenVertex *)&pSVar6->y;
        pSVar7 = (SScreenVertex *)&pSVar7->y;
      }
      iVar4 = param_1[1];
      iVar2 = param_1[2];
      *(int *)(&DAT_10226f08 + iVar1 * 4) = g_PendingVertexCount;
      iVar5 = g_PendingVertexCount + 1;
      pSVar6 = g_VertexBuffer + g_PendingVertexCount;
      g_PendingVertexCount = iVar5;
      pSVar6->u = (float)iVar4 * 5.9604645e-08;
      g_VertexBuffer[iVar3].v = (float)iVar2 * 5.9604645e-08;
      if (0x3e76 < iVar5) {
        message = "You're shoving too many verticies";
        goto LAB_10005116;
      }
    }
  }
  else {
    iVar4 = param_1[2];
    *(int *)(&DAT_10215e48 + iVar1 * 4) = DAT_10014234;
    *(int *)(&DAT_10226f08 + iVar1 * 4) = iVar3;
    *(int *)(param_2 + 0x18) = param_1[1];
    *(int *)(param_2 + 0x1c) = iVar4;
    dll_dx7_cpp_FUN_100044b0(param_2,g_VertexBuffer + iVar3,param_3,0x100);
    g_PendingVertexCount = g_PendingVertexCount + 1;
    if (0x3e76 < g_PendingVertexCount) {
      message = "You're shoving too many verticies";
LAB_10005116:
                    /* WARNING: Subroutine does not return */
      dll_dx7_cpp_fatalError_FUN_10002340(message);
    }
  }
  return *(uint *)(&DAT_10226f08 + iVar1 * 4);
}
