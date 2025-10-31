// Name: core_mobster.cpp_FUN_005278d0
// Address: 005278d0
// Address Range: [[005278d0, 005279c8]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_005278d0()
// Globals:
//   undefined4 DAT_02f37ec8
//   undefined4 DAT_02f37eec
//   undefined4 DAT_02f37ef4
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mobster.cpp_FUN_005278d0(undefined4 param_1, undefined4
   param_2) */

int core_mobster_cpp_FUN_005278d0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  iVar2 = 1;
  puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
  if (in_stack_00000008 != puVar1) {
    *in_stack_00000008 = *puVar1;
    in_stack_00000008[1] = puVar1[1];
    in_stack_00000008[2] = puVar1[2];
  }
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbf80) * 4) != 0) {
    puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
    if (in_stack_00000008 + 3 != puVar1) {
      in_stack_00000008[3] = *puVar1;
      in_stack_00000008[4] = puVar1[1];
      in_stack_00000008[5] = puVar1[2];
    }
    iVar2 = 2;
  }
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbf84) * 4) == 0) {
    return iVar2;
  }
  puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
  in_stack_00000008 = in_stack_00000008 + iVar2 * 3;
  if (in_stack_00000008 != puVar1) {
    *in_stack_00000008 = *puVar1;
    in_stack_00000008[1] = puVar1[1];
    in_stack_00000008[2] = puVar1[2];
  }
  return iVar2 + 1;
}


// Assembly code:
// 005278d0: PUSH EBX
//   Label: core_mobster.cpp_FUN_005278d0
// 005278d1: PUSH ESI
// 005278d2: PUSH EDI
// 005278d3: PUSH EBP
// 005278d4: SUB ESP,0x24
// 005278d7: MOV ESI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 005278db: MOV EDI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 005278df: MOV EDX,dword ptr [0x02f37ec8]
//   XREF to: 02f37ec8 (READ)
// 005278e5: PUSH EDX
// 005278e6: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x1c] (DATA)
// 005278ea: PUSH EAX
// 005278eb: LEA EAX,[ESI + 0x158]
// 005278f1: PUSH EAX
// 005278f2: MOV EBX,0x1
// 005278f7: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 005278fc: ADD ESP,0xc
// 005278ff: CMP EDI,EAX
// 00527901: JNZ 0x0052796d
//   XREF to: 0052796d (CONDITIONAL_JUMP)
// 00527903: MOV EAX,dword ptr [ESI + 0xbf80]
//   Label: LAB_00527903
// 00527909: CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0
// 00527911: JZ 0x00527953
//   XREF to: 00527953 (CONDITIONAL_JUMP)
// 00527913: MOV EBP,dword ptr [0x02f37eec]
//   XREF to: 02f37eec (READ)
// 00527919: PUSH EBP
// 0052791a: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x28] (DATA)
// 0052791e: PUSH EAX
// 0052791f: LEA EAX,[ESI + 0x158]
// 00527925: PUSH EAX
// 00527926: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 0052792b: MOV EDX,EAX
// 0052792d: LEA EAX,[EBX*0x4 + 0x0]
// 00527934: SUB EAX,EBX
// 00527936: SHL EAX,0x2
// 00527939: ADD EAX,EDI
// 0052793b: ADD ESP,0xc
// 0052793e: CMP EAX,EDX
// 00527940: JZ 0x00527952
//   XREF to: 00527952 (CONDITIONAL_JUMP)
// 00527942: MOV ECX,dword ptr [EDX]
// 00527944: MOV dword ptr [EAX],ECX
// 00527946: MOV ECX,dword ptr [EDX + 0x4]
// 00527949: MOV dword ptr [EAX + 0x4],ECX
// 0052794c: MOV ECX,dword ptr [EDX + 0x8]
// 0052794f: MOV dword ptr [EAX + 0x8],ECX
// 00527952: INC EBX
//   Label: LAB_00527952
// 00527953: MOV EAX,dword ptr [ESI + 0xbf84]
//   Label: LAB_00527953
// 00527959: CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0
// 00527961: JNZ 0x0052797f
//   XREF to: 0052797f (CONDITIONAL_JUMP)
// 00527963: MOV EAX,EBX
// 00527965: ADD ESP,0x24
// 00527968: POP EBP
// 00527969: POP EDI
// 0052796a: POP ESI
// 0052796b: POP EBX
// 0052796c: RET
// 0052796d: MOV EDX,dword ptr [EAX]
//   Label: LAB_0052796d
// 0052796f: MOV dword ptr [EDI],EDX
// 00527971: MOV EDX,dword ptr [EAX + 0x4]
// 00527974: MOV dword ptr [EDI + 0x4],EDX
// 00527977: MOV EDX,dword ptr [EAX + 0x8]
// 0052797a: MOV dword ptr [EDI + 0x8],EDX
// 0052797d: JMP 0x00527903
//   XREF to: 00527903 (UNCONDITIONAL_JUMP)
// 0052797f: MOV ECX,dword ptr [0x02f37ef4]
//   Label: LAB_0052797f
//   XREF to: 02f37ef4 (READ)
// 00527985: PUSH ECX
// 00527986: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x34] (DATA)
// 0052798a: PUSH EAX
// 0052798b: ADD ESI,0x158
// 00527991: PUSH ESI
// 00527992: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00527997: MOV ESI,EAX
// 00527999: LEA EAX,[EBX*0x4 + 0x0]
// 005279a0: SUB EAX,EBX
// 005279a2: SHL EAX,0x2
// 005279a5: ADD EDI,EAX
// 005279a7: ADD ESP,0xc
// 005279aa: CMP EDI,ESI
// 005279ac: JZ 0x005279be
//   XREF to: 005279be (CONDITIONAL_JUMP)
// 005279ae: MOV EAX,dword ptr [ESI]
// 005279b0: MOV dword ptr [EDI],EAX
// 005279b2: MOV EAX,dword ptr [ESI + 0x4]
// 005279b5: MOV dword ptr [EDI + 0x4],EAX
// 005279b8: MOV EAX,dword ptr [ESI + 0x8]
// 005279bb: MOV dword ptr [EDI + 0x8],EAX
// 005279be: INC EBX
//   Label: LAB_005279be
// 005279bf: MOV EAX,EBX
// 005279c1: ADD ESP,0x24
// 005279c4: POP EBP
// 005279c5: POP EDI
// 005279c6: POP ESI
// 005279c7: POP EBX
// 005279c8: RET
