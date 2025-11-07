// Name: shape_meshlod.cpp_FUN_00517530
// Address: 00517530
// Address Range: [[00517530, 0051762a]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_00517530()
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_00516000 (00516000) at 0051622f [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_00517630 (00517630) at 00517b87 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   shape_meshlod.cpp_FUN_005151e0

#include "nocturne.h"

void shape_meshlod_cpp_FUN_00517530(void)

{
  undefined4 *puVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar2 = *(int *)(in_stack_00000004 + 0xc) + in_stack_00000008 * 0x8c;
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&local_38,3,&g_CVectorTypeInfo);
  puVar1 = (undefined4 *)(*(int *)(iVar2 + 0x10) * 0x4c4 + *(int *)(in_stack_00000004 + 4));
  if (&local_34 != puVar1) {
    local_34 = *puVar1;
    local_30 = puVar1[1];
    local_2c = puVar1[2];
  }
  puVar1 = (undefined4 *)(*(int *)(iVar2 + 0x14) * 0x4c4 + *(int *)(in_stack_00000004 + 4));
  if (&local_28 != puVar1) {
    local_28 = *puVar1;
    local_24 = puVar1[1];
    local_20 = puVar1[2];
  }
  puVar1 = (undefined4 *)(*(int *)(in_stack_00000004 + 4) + *(int *)(iVar2 + 0x18) * 0x4c4);
  if (&local_1c != puVar1) {
    local_1c = *puVar1;
    local_18 = puVar1[1];
    local_14 = puVar1[2];
  }
  local_10 = *(undefined4 *)(iVar2 + 0x1c + in_stack_00000010 * 4);
  local_c = *(undefined4 *)(iVar2 + 0x24 + in_stack_00000010 * 4);
  local_38 = in_stack_00000018;
  shape_meshlod_cpp_FUN_005151e0();
  return;
}


// Assembly code:
// 00517530: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_00517530
// 00517531: PUSH ESI
// 00517532: SUB ESP,0x30
// 00517535: MOV ESI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 00517539: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 0051753d: LEA EAX,[EDX*0x8 + 0x0]
// 00517544: ADD EAX,EDX
// 00517546: SHL EAX,0x2
// 00517549: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 0051754e: SUB EAX,EDX
// 00517550: MOV EBX,dword ptr [ESI + 0xc]
// 00517553: SHL EAX,0x2
// 00517556: PUSH 0x3
// 00517558: ADD EBX,EAX
// 0051755a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x38] (DATA)
// 0051755e: PUSH EAX
// 0051755f: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00517564: IMUL EDX,dword ptr [EBX + 0x10],0x4c4
// 0051756b: MOV EAX,dword ptr [ESI + 0x4]
// 0051756e: ADD EDX,EAX
// 00517570: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x38] (DATA)
// 00517574: ADD ESP,0xc
// 00517577: CMP EAX,EDX
// 00517579: JNZ 0x00517613
//   XREF to: 00517613 (CONDITIONAL_JUMP)
// 0051757f: IMUL EDX,dword ptr [EBX + 0x14],0x4c4
//   Label: LAB_0051757f
// 00517586: MOV EAX,dword ptr [ESI + 0x4]
// 00517589: ADD EDX,EAX
// 0051758b: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x2c] (DATA)
// 0051758f: CMP EAX,EDX
// 00517591: JZ 0x005175a7
//   XREF to: 005175a7 (CONDITIONAL_JUMP)
// 00517593: MOV EAX,dword ptr [EDX]
// 00517595: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00517599: MOV EAX,dword ptr [EDX + 0x4]
// 0051759c: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005175a0: MOV EAX,dword ptr [EDX + 0x8]
// 005175a3: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005175a7: IMUL EAX,dword ptr [EBX + 0x18],0x4c4
//   Label: LAB_005175a7
// 005175ae: MOV EDX,dword ptr [ESI + 0x4]
// 005175b1: ADD EDX,EAX
// 005175b3: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x20] (DATA)
// 005175b7: CMP EAX,EDX
// 005175b9: JZ 0x005175cf
//   XREF to: 005175cf (CONDITIONAL_JUMP)
// 005175bb: MOV EAX,dword ptr [EDX]
// 005175bd: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005175c1: MOV EAX,dword ptr [EDX + 0x4]
// 005175c4: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005175c8: MOV EAX,dword ptr [EDX + 0x8]
// 005175cb: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005175cf: MOV EDX,dword ptr [ESP + 0x44]
//   Label: LAB_005175cf
//   XREF to: Stack[0xc] (READ)
// 005175d3: MOV EAX,dword ptr [EBX + EDX*0x4 + 0x1c]
// 005175d7: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005175db: MOV EAX,dword ptr [EBX + EDX*0x4 + 0x24]
// 005175df: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005175e3: MOV EAX,dword ptr [EBX + EDX*0x4 + 0x2c]
// 005175e7: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005175eb: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x14] (READ)
// 005175ef: PUSH EAX
// 005175f0: MOV EDX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x10] (READ)
// 005175f4: PUSH EDX
// 005175f5: ADD EBX,0x44
// 005175f8: PUSH EBX
// 005175f9: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x14] (DATA)
// 005175fd: PUSH EAX
// 005175fe: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x38] (DATA)
// 00517602: PUSH EAX
// 00517603: PUSH 0x3
// 00517605: CALL shape_meshlod.cpp_FUN_005151e0
//   XREF to: 005151e0 (UNCONDITIONAL_CALL)
// 0051760a: ADD ESP,0x18
// 0051760d: ADD ESP,0x30
// 00517610: POP ESI
// 00517611: POP EBX
// 00517612: RET
// 00517613: MOV EAX,dword ptr [EDX]
//   Label: LAB_00517613
// 00517615: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x38] (DATA)
// 00517618: MOV EAX,dword ptr [EDX + 0x4]
// 0051761b: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0051761f: MOV EAX,dword ptr [EDX + 0x8]
// 00517622: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00517626: JMP 0x0051757f
//   XREF to: 0051757f (UNCONDITIONAL_JUMP)
