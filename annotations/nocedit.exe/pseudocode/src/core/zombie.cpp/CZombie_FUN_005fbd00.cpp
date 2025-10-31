// Name: core_zombie.cpp_CZombie_FUN_005fbd00
// Address: 005fbd00
// Address Range: [[005fbd00, 005fbd9c]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_CZombie_FUN_005fbd00()
// Cross-references:
//   core_zombie.cpp_CZombie_FUN_005fbda0 (005fbda0) at 005fbdab [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530 (005fb530) at 005fb6de [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f992d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_jeff_dfm_00658919
//   TerminatedCString s_new_00658922
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0
//   crt_string.c_strnicmp_FUN_005ff070

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_zombie.cpp_CZombie_FUN_005fbd00(CZombie* param_1, undefined4
   param_2) */

undefined4 core_zombie_cpp_CZombie_FUN_005fbd00(void)

{
  int iVar1;
  int in_stack_00000004;
  uint in_stack_00000008;
  
  if ((in_stack_00000008 != 2) &&
     (iVar1 = crt_string_c_stricmp_FUN_005fe7f0
                        ((char *)(in_stack_00000004 + 0x23b8),"jeff.dfm"), iVar1 == 0)) {
    return 0xffffffff;
  }
  iVar1 = crt_string_c_strnicmp_FUN_005ff070((char *)(in_stack_00000004 + 0x23b8),"new",3);
  if (iVar1 == 0) {
    if (in_stack_00000008 < 2) {
      if (in_stack_00000008 != 1) {
        return 0xffffffff;
      }
    }
    else if ((2 < in_stack_00000008) && (in_stack_00000008 != 3)) {
      return 0xffffffff;
    }
  }
  else if (in_stack_00000008 < 2) {
    if (in_stack_00000008 != 1) {
      return 0xffffffff;
    }
  }
  else {
    if (in_stack_00000008 < 3) {
      return 0;
    }
    if (in_stack_00000008 != 3) {
      return 0xffffffff;
    }
  }
  return 1;
}


// Assembly code:
// 005fbd00: PUSH EBX
//   Label: core_zombie.cpp_CZombie_FUN_005fbd00
// 005fbd01: PUSH EBP
// 005fbd02: MOV EBP,ESP
// 005fbd04: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005fbd07: CMP EBX,0x2
// 005fbd0a: JZ 0x005fbd26
//   XREF to: 005fbd26 (CONDITIONAL_JUMP)
// 005fbd0c: MOV EAX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005fbd0f: PUSH 0x658919
//   XREF to: 00658919 (DATA)
// 005fbd14: ADD EAX,0x23b8
// 005fbd19: PUSH EAX
// 005fbd1a: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005fbd1f: ADD ESP,0x8
// 005fbd22: TEST EAX,EAX
// 005fbd24: JZ 0x005fbd56
//   XREF to: 005fbd56 (CONDITIONAL_JUMP)
// 005fbd26: PUSH 0x3
//   Label: LAB_005fbd26
// 005fbd28: MOV EAX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005fbd2b: PUSH 0x658922
//   XREF to: 00658922 (DATA)
// 005fbd30: ADD EAX,0x23b8
// 005fbd35: PUSH EAX
// 005fbd36: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 005fbd3b: ADD ESP,0xc
// 005fbd3e: TEST EAX,EAX
// 005fbd40: JNZ 0x005fbd78
//   XREF to: 005fbd78 (CONDITIONAL_JUMP)
// 005fbd42: CMP EBX,0x2
// 005fbd45: JNC 0x005fbd60
//   XREF to: 005fbd60 (CONDITIONAL_JUMP)
// 005fbd47: CMP EBX,0x1
// 005fbd4a: JNZ 0x005fbd67
//   XREF to: 005fbd67 (CONDITIONAL_JUMP)
// 005fbd4c: MOV EBX,0x1
//   Label: LAB_005fbd4c
// 005fbd51: MOV EAX,EBX
// 005fbd53: POP EBP
// 005fbd54: POP EBX
// 005fbd55: RET
// 005fbd56: MOV EBX,0xffffffff
//   Label: LAB_005fbd56
// 005fbd5b: MOV EAX,EBX
// 005fbd5d: POP EBP
// 005fbd5e: POP EBX
// 005fbd5f: RET
// 005fbd60: JBE 0x005fbd4c
//   Label: LAB_005fbd60
//   XREF to: 005fbd4c (CONDITIONAL_JUMP)
// 005fbd62: CMP EBX,0x3
// 005fbd65: JZ 0x005fbd4c
//   XREF to: 005fbd4c (CONDITIONAL_JUMP)
// 005fbd67: MOV EBX,0xffffffff
//   Label: LAB_005fbd67
// 005fbd6c: MOV EAX,EBX
// 005fbd6e: POP EBP
// 005fbd6f: POP EBX
// 005fbd70: RET
// 005fbd71: XOR EBX,EBX
//   Label: LAB_005fbd71
// 005fbd73: MOV EAX,EBX
// 005fbd75: POP EBP
// 005fbd76: POP EBX
// 005fbd77: RET
// 005fbd78: CMP EBX,0x2
//   Label: LAB_005fbd78
// 005fbd7b: JNC 0x005fbd8c
//   XREF to: 005fbd8c (CONDITIONAL_JUMP)
// 005fbd7d: CMP EBX,0x1
// 005fbd80: JZ 0x005fbd4c
//   XREF to: 005fbd4c (CONDITIONAL_JUMP)
// 005fbd82: MOV EBX,0xffffffff
// 005fbd87: MOV EAX,EBX
// 005fbd89: POP EBP
// 005fbd8a: POP EBX
// 005fbd8b: RET
// 005fbd8c: JBE 0x005fbd71
//   Label: LAB_005fbd8c
//   XREF to: 005fbd71 (CONDITIONAL_JUMP)
// 005fbd8e: CMP EBX,0x3
// 005fbd91: JZ 0x005fbd4c
//   XREF to: 005fbd4c (CONDITIONAL_JUMP)
// 005fbd93: MOV EBX,0xffffffff
// 005fbd98: MOV EAX,EBX
// 005fbd9a: POP EBP
// 005fbd9b: POP EBX
// 005fbd9c: RET
