// Name: core_dtrace.cpp_FUN_00473670
// Address: 00473670
// Address Range: [[00473670, 004737e7]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_00473670(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_dtrace_cpp_FUN_00473670(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  int in_stack_00000004;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar9 = 0;
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_0047ed50
            (g_CEditorToolsPtr,"Consolidating raytrace geometry arrays...");
  core_dtrace_cpp_FUN_00473860();
  *(uint *)(in_stack_00000004 + 4) = 0;
  iVar5 = 0;
  for (iVar2 = 0;
      iVar2 < *(int *)(in_stack_00000004 + 0x48) *
              *(int *)(in_stack_00000004 + 0x40) * *(int *)(in_stack_00000004 + 0x44);
      iVar2 = iVar2 + 1) {
    piVar1 = (int *)(*(int *)(in_stack_00000004 + 0x4c) + iVar5);
    iVar5 = iVar5 + 0x58;
    *(int *)(in_stack_00000004 + 4) = *(int *)(in_stack_00000004 + 4) + *piVar1;
  }
  core_dtrace_cpp_FUN_004737f0();
  iStack_18 = 0;
  iStack_1c = 0;
  iStack_20 = 0;
  while (iVar2 = *(int *)(in_stack_00000004 + 0x40) * *(int *)(in_stack_00000004 + 0x44) *
                 *(int *)(in_stack_00000004 + 0x48), iVar2 - iStack_1c != 0 && iStack_1c <= iVar2) {
    puVar6 = (uint *)(*(int *)(in_stack_00000004 + 0x4c) + iStack_20);
    if (0 < (int)*puVar6) {
      puVar7 = (uint *)puVar6[1];
      puVar8 = (uint *)(*(int *)(in_stack_00000004 + 8) + iStack_18 * 0x38);
      for (uVar3 = *puVar6 * 0x38 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(byte *)puVar8 = *(byte *)puVar7;
        puVar7 = (uint *)((int)puVar7 + (uint)bVar9 * -2 + 1);
        puVar8 = (uint *)((int)puVar8 + (uint)bVar9 * -2 + 1);
      }
      uVar3 = *puVar6;
      puVar7 = (uint *)puVar6[0x15];
      puVar8 = (uint *)(*(int *)(in_stack_00000004 + 0xc) + iStack_18);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(byte *)puVar8 = *(byte *)puVar7;
        puVar7 = (uint *)((int)puVar7 + (uint)bVar9 * -2 + 1);
        puVar8 = (uint *)((int)puVar8 + (uint)bVar9 * -2 + 1);
      }
      FUN_005a30b6((void *)puVar6[1]);
      FUN_005a30b6((void *)puVar6[0x15]);
      puVar6[1] = iStack_18 * 0x38 + *(int *)(in_stack_00000004 + 8);
      uVar3 = iStack_18 + *(int *)(in_stack_00000004 + 0xc);
      iStack_18 = iStack_18 + *puVar6;
      puVar6[0x15] = uVar3;
    }
    iStack_1c = iStack_1c + 1;
    shape_edittool_cpp_FUN_0047ee50
              (g_CEditorToolsPtr,(float)iStack_1c,
               (float)(*(int *)(in_stack_00000004 + 0x40) * *(int *)(in_stack_00000004 + 0x44) *
                      *(int *)(in_stack_00000004 + 0x48)));
    iStack_20 = iStack_20 + 0x58;
  }
  shape_edittool_cpp_FUN_0047f970(g_CEditorToolsPtr);
  return;
}
