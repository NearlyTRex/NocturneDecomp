// Name: core_tentacle.cpp_FUN_005db900
// Address: 005db900
// Address Range: [[005db900, 005db9ca]]
// Convention: unknown
// Signature: undefined core_tentacle.cpp_FUN_005db900()
// Cross-references:
//   core_tentacle.cpp_CTentacle_process_FUN_005db050 (005db050) at 005db133 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00654e8c
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.damage_listener_count
//   undefined4 g_CDemonSetInstance.damage_listeners
//   undefined4 DAT_03263318
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_tentacle.cpp_FUN_005db900(undefined4 param_1, undefined4
   param_2) */

undefined4 core_tentacle_cpp_FUN_005db900(void)

{
  CDemonActor *actor_ptr;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  CDemonActor *in_stack_00000004;
  char *in_stack_00000008;
  int local_14;
  
  iVar5 = 0;
  local_14 = 0;
  do {
    if (g_CDemonSetPtr->damage_listener_count <= local_14) {
      return 0;
    }
    actor_ptr = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar5 + -4);
    if (actor_ptr != in_stack_00000004) {
      iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,in_stack_00000008);
      if (iVar4 != 0) {
        fVar1 = (actor_ptr->location).position.x - (in_stack_00000004->location).position.x;
        fVar2 = ((actor_ptr->location).position.y - (in_stack_00000004->location).position.y) *
                (float)_DAT_00654e8c;
        fVar3 = (actor_ptr->location).position.z - (in_stack_00000004->location).position.z;
        if (SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) <
            *(float *)(in_stack_00000004[0x8d].create_event + 0x44)) {
          *(CDemonActor **)(in_stack_00000004[0x8d].create_event + 0x4c) = actor_ptr;
          return 1;
        }
      }
    }
    local_14 = local_14 + 1;
    iVar5 = iVar5 + 4;
  } while( true );
}


// Assembly code:
// 005db900: PUSH EBX
//   Label: core_tentacle.cpp_FUN_005db900
// 005db901: PUSH ESI
// 005db902: PUSH EDI
// 005db903: PUSH EBP
// 005db904: MOV EBP,ESP
// 005db906: SUB ESP,0x18
// 005db909: AND ESP,0xfffffff8
// 005db90c: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005db90f: XOR EDX,EDX
// 005db911: XOR EDI,EDI
// 005db913: ADD ESI,0x20
// 005db916: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005db91a: MOV EAX,[0x006810c8]
//   Label: LAB_005db91a
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005db91f: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 005db923: CMP EBX,dword ptr [EAX + 0x14f098]
//   XREF to: 03263310 (READ)
// 005db929: JGE 0x005db9c2
//   XREF to: 005db9c2 (CONDITIONAL_JUMP)
// 005db92f: MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14f09c]
//   XREF to: 03263314 (READ)
//   XREF to: 03263318 (READ)
// 005db936: CMP EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005db939: JNZ 0x005db949
//   XREF to: 005db949 (CONDITIONAL_JUMP)
// 005db93b: MOV ECX,dword ptr [ESP + 0x14]
//   Label: LAB_005db93b
//   XREF to: Stack[-0x14] (READ)
// 005db93f: INC ECX
// 005db940: ADD EDI,0x4
// 005db943: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005db947: JMP 0x005db91a
//   XREF to: 005db91a (UNCONDITIONAL_JUMP)
// 005db949: MOV EDX,dword ptr [EBP + 0x18]
//   Label: LAB_005db949
//   XREF to: Stack[0x8] (READ)
// 005db94c: PUSH EDX
// 005db94d: PUSH EBX
// 005db94e: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005db953: ADD ESP,0x8
// 005db956: TEST EAX,EAX
// 005db958: JZ 0x005db93b
//   XREF to: 005db93b (CONDITIONAL_JUMP)
// 005db95a: LEA EAX,[EBX + 0x20]
// 005db95d: FLD float ptr [EAX]
// 005db95f: FSUB float ptr [ESI]
// 005db961: FSTP float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 005db964: FLD float ptr [EAX + 0x4]
// 005db967: FSUB float ptr [ESI + 0x4]
// 005db96a: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (WRITE)
// 005db96e: FLD ST0
// 005db970: FMUL double ptr [0x00654e8c]
//   XREF to: 00654e8c (READ)
// 005db976: FLD float ptr [EAX + 0x8]
// 005db979: FSUB float ptr [ESI + 0x8]
// 005db97c: FXCH
// 005db97e: FSTP ST2
// 005db980: FXCH
// 005db982: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (WRITE)
// 005db986: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 005db98a: FLD float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 005db98d: FMUL ST0
// 005db98f: FADDP
// 005db991: FXCH
// 005db993: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 005db997: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 005db99b: FADDP
// 005db99d: FSQRT
// 005db99f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005db9a2: FCOMP float ptr [EAX + 0xbe34]
// 005db9a8: FNSTSW AX
// 005db9aa: SAHF
// 005db9ab: JNC 0x005db93b
//   XREF to: 005db93b (CONDITIONAL_JUMP)
// 005db9ad: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005db9b0: MOV dword ptr [EAX + 0xbe3c],EBX
// 005db9b6: MOV EAX,0x1
// 005db9bb: MOV ESP,EBP
// 005db9bd: POP EBP
// 005db9be: POP EDI
// 005db9bf: POP ESI
// 005db9c0: POP EBX
// 005db9c1: RET
// 005db9c2: XOR EAX,EAX
//   Label: LAB_005db9c2
// 005db9c4: MOV ESP,EBP
// 005db9c6: POP EBP
// 005db9c7: POP EDI
// 005db9c8: POP ESI
// 005db9c9: POP EBX
// 005db9ca: RET
