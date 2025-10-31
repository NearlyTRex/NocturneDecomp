// Name: core_script.cpp_FUN_00564560
// Address: 00564560
// Address Range: [[00564560, 005645c0]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00564560()
// Cross-references:
//   core_script.cpp_CScript_editorAction_FUN_00564820 (00564820) at 00564a5e [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005664d0 (005664d0) at 00566543 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_031141c0
//   undefined4 DAT_031141c4
//   undefined4 DAT_031141c8
//   undefined4 DAT_031141cc

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00564560(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_script_cpp_FUN_00564560(void)

{
  int iVar1;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  
  iVar1 = DAT_031141c4;
  if ((DAT_031141c4 <= in_stack_00000004) && (in_stack_00000004 <= DAT_031141cc)) {
    *in_stack_00000008 = 0;
    *in_stack_0000000c = 9999;
    if (in_stack_00000004 == iVar1) {
      *in_stack_00000008 = DAT_031141c0;
      if (in_stack_00000004 != DAT_031141cc) {
        return;
      }
    }
    else if (in_stack_00000004 != DAT_031141cc) {
      return;
    }
    *in_stack_0000000c = DAT_031141c8;
    return;
  }
  *in_stack_0000000c = 0xffffffff;
  *in_stack_00000008 = *in_stack_0000000c;
  return;
}


// Assembly code:
// 00564560: PUSH EBX
//   Label: core_script.cpp_FUN_00564560
// 00564561: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00564565: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00564569: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0056456d: MOV ECX,dword ptr [0x031141c4]
//   XREF to: 031141c4 (READ)
// 00564573: CMP EDX,ECX
// 00564575: JL 0x00564599
//   XREF to: 00564599 (CONDITIONAL_JUMP)
// 00564577: CMP EDX,dword ptr [0x031141cc]
//   XREF to: 031141cc (READ)
// 0056457d: JG 0x00564599
//   XREF to: 00564599 (CONDITIONAL_JUMP)
// 0056457f: MOV dword ptr [EBX],0x0
// 00564585: MOV dword ptr [EAX],0x270f
// 0056458b: CMP EDX,ECX
// 0056458d: JZ 0x005645a5
//   XREF to: 005645a5 (CONDITIONAL_JUMP)
// 0056458f: CMP EDX,dword ptr [0x031141cc]
//   XREF to: 031141cc (READ)
// 00564595: JZ 0x005645b7
//   XREF to: 005645b7 (CONDITIONAL_JUMP)
// 00564597: POP EBX
// 00564598: RET
// 00564599: MOV dword ptr [EAX],0xffffffff
//   Label: LAB_00564599
// 0056459f: MOV EAX,dword ptr [EAX]
// 005645a1: MOV dword ptr [EBX],EAX
// 005645a3: POP EBX
// 005645a4: RET
// 005645a5: MOV ECX,dword ptr [0x031141c0]
//   Label: LAB_005645a5
//   XREF to: 031141c0 (READ)
// 005645ab: MOV dword ptr [EBX],ECX
// 005645ad: CMP EDX,dword ptr [0x031141cc]
//   XREF to: 031141cc (READ)
// 005645b3: JZ 0x005645b7
//   XREF to: 005645b7 (CONDITIONAL_JUMP)
// 005645b5: POP EBX
// 005645b6: RET
// 005645b7: MOV EDX,dword ptr [0x031141c8]
//   Label: LAB_005645b7
//   XREF to: 031141c8 (READ)
// 005645bd: MOV dword ptr [EAX],EDX
// 005645bf: POP EBX
// 005645c0: RET
