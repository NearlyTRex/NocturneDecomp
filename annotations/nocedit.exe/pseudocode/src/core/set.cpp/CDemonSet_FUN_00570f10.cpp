// Name: core_set.cpp_CDemonSet_FUN_00570f10
// Address: 00570f10
// Address Range: [[00570f10, 00570f9e]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_00570f10(CDemonSet * this_ptr)
// Cross-references:
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004aaf08 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004ae140 (004ae140) at 004af998 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055bd84 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonLight*[96] g_MasterLightList
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00570f10(CDemonSet *this_ptr)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  
  iVar3 = 0;
  iVar5 = 0;
  if (0 < this_ptr->light_count) {
    iVar4 = 0;
    do {
      pcVar1 = this_ptr->lights[0].name + iVar4 + -4;
      *in_stack_0000000c = pcVar1;
      if (*(int *)pcVar1 == 0) {
        iVar2 = crt_string_c_stricmp_FUN_005fe7f0(pcVar1 + 4,in_stack_00000008);
        if (iVar2 == 0) {
          *in_stack_00000010 = g_MasterLightList[iVar5];
          return;
        }
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x1898;
    } while (iVar3 < this_ptr->light_count);
  }
  *in_stack_0000000c = 0;
  *in_stack_00000010 = 0;
  return;
}


// Assembly code:
// 00570f10: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_00570f10
// 00570f11: PUSH ESI
// 00570f12: PUSH EDI
// 00570f13: PUSH EBP
// 00570f14: SUB ESP,0x4
// 00570f17: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00570f1b: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00570f1f: XOR EBX,EBX
// 00570f21: MOV EDX,dword ptr [EAX + 0x19a2c]
// 00570f27: XOR EDI,EDI
// 00570f29: TEST EDX,EDX
// 00570f2b: JLE 0x00570f59
//   XREF to: 00570f59 (CONDITIONAL_JUMP)
// 00570f2d: ADD EAX,0x19a30
// 00570f32: XOR ESI,ESI
// 00570f34: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00570f37: MOV EAX,dword ptr [ESP]
//   Label: LAB_00570f37
//   XREF to: Stack[-0x14] (DATA)
// 00570f3a: ADD EAX,ESI
// 00570f3c: MOV dword ptr [EBP],EAX
// 00570f3f: CMP dword ptr [EAX],0x0
// 00570f42: JZ 0x00570f72
//   XREF to: 00570f72 (CONDITIONAL_JUMP)
// 00570f44: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_00570f44
//   XREF to: Stack[0x4] (READ)
// 00570f48: INC EBX
// 00570f49: MOV ECX,dword ptr [EAX + 0x19a2c]
// 00570f4f: ADD ESI,0x1898
// 00570f55: CMP EBX,ECX
// 00570f57: JL 0x00570f37
//   XREF to: 00570f37 (CONDITIONAL_JUMP)
// 00570f59: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00570f59
//   XREF to: Stack[0x10] (READ)
// 00570f5d: MOV dword ptr [EBP],0x0
// 00570f64: MOV dword ptr [EAX],0x0
// 00570f6a: ADD ESP,0x4
// 00570f6d: POP EBP
// 00570f6e: POP EDI
// 00570f6f: POP ESI
// 00570f70: POP EBX
// 00570f71: RET
// 00570f72: MOV ECX,dword ptr [ESP + 0x1c]
//   Label: LAB_00570f72
//   XREF to: Stack[0x8] (READ)
// 00570f76: PUSH ECX
// 00570f77: ADD EAX,0x4
// 00570f7a: PUSH EAX
// 00570f7b: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00570f80: ADD ESP,0x8
// 00570f83: TEST EAX,EAX
// 00570f85: JZ 0x00570f8a
//   XREF to: 00570f8a (CONDITIONAL_JUMP)
// 00570f87: INC EDI
// 00570f88: JMP 0x00570f44
//   XREF to: 00570f44 (UNCONDITIONAL_JUMP)
// 00570f8a: MOV EBX,dword ptr [ESP + 0x24]
//   Label: LAB_00570f8a
//   XREF to: Stack[0x10] (READ)
// 00570f8e: MOV EAX,dword ptr [EDI*0x4 + 0x3276db0]
//   XREF to: 03276db0 (READ)
// 00570f95: MOV dword ptr [EBX],EAX
// 00570f97: ADD ESP,0x4
// 00570f9a: POP EBP
// 00570f9b: POP EDI
// 00570f9c: POP ESI
// 00570f9d: POP EBX
// 00570f9e: RET
