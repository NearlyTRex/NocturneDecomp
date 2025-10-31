// Name: core_script.cpp_FUN_005606e0
// Address: 005606e0
// Address Range: [[005606e0, 00560756]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005606e0()
// Cross-references:
//   core_script.cpp_CScript_dbLoad_FUN_005603c0 (005603c0) at 00560562 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055c462 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_splitpath_FUN_005ff178
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_005606e0(CScript* param_1, undefined4 param_2) */

int core_script_cpp_FUN_005606e0(void)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  int in_stack_00000004;
  char *in_stack_00000008;
  char acStack_10c [252];
  
  iVar2 = 0;
  crt_string_c_splitpath_FUN_005ff178
            (in_stack_00000008,(char *)0x0,(char *)0x0,&stack0xfffffef0,(char *)0x0);
  if (0 < *(int *)(in_stack_00000004 + 0x1c)) {
    iVar3 = 0;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0
                        ((char *)(*(int *)(in_stack_00000004 + 0x20) + iVar3),acStack_10c);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x226;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x1c));
  }
  return -1;
}


// Assembly code:
// 005606e0: PUSH EBX
//   Label: core_script.cpp_FUN_005606e0
// 005606e1: PUSH ESI
// 005606e2: PUSH EDI
// 005606e3: PUSH EBP
// 005606e4: SUB ESP,0x100
// 005606ea: MOV EDI,dword ptr [ESP + 0x114]
//   XREF to: Stack[0x4] (READ)
// 005606f1: PUSH 0x0
// 005606f3: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x110] (DATA)
// 005606f7: PUSH EAX
// 005606f8: PUSH 0x0
// 005606fa: PUSH 0x0
// 005606fc: MOV EDX,dword ptr [ESP + 0x128]
//   XREF to: Stack[0x8] (READ)
// 00560703: PUSH EDX
// 00560704: XOR EBX,EBX
// 00560706: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 0056070b: MOV ECX,dword ptr [EDI + 0x1c]
// 0056070e: ADD ESP,0x14
// 00560711: TEST ECX,ECX
// 00560713: JLE 0x0056073a
//   XREF to: 0056073a (CONDITIONAL_JUMP)
// 00560715: XOR ESI,ESI
// 00560717: MOV EAX,ESP
//   Label: LAB_00560717
// 00560719: PUSH EAX
// 0056071a: MOV EAX,dword ptr [EDI + 0x20]
// 0056071d: ADD EAX,ESI
// 0056071f: PUSH EAX
// 00560720: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00560725: ADD ESP,0x8
// 00560728: TEST EAX,EAX
// 0056072a: JZ 0x0056074a
//   XREF to: 0056074a (CONDITIONAL_JUMP)
// 0056072c: INC EBX
// 0056072d: MOV EBP,dword ptr [EDI + 0x1c]
// 00560730: ADD ESI,0x226
// 00560736: CMP EBX,EBP
// 00560738: JL 0x00560717
//   XREF to: 00560717 (CONDITIONAL_JUMP)
// 0056073a: MOV EAX,0xffffffff
//   Label: LAB_0056073a
// 0056073f: ADD ESP,0x100
// 00560745: POP EBP
// 00560746: POP EDI
// 00560747: POP ESI
// 00560748: POP EBX
// 00560749: RET
// 0056074a: MOV EAX,EBX
//   Label: LAB_0056074a
// 0056074c: ADD ESP,0x100
// 00560752: POP EBP
// 00560753: POP EDI
// 00560754: POP ESI
// 00560755: POP EBX
// 00560756: RET
