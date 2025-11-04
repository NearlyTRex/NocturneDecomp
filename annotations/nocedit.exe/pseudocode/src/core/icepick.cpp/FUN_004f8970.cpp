// Name: core_icepick.cpp_FUN_004f8970
// Address: 004f8970
// Address Range: [[004f8970, 004f8ac6]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f8970()
// Cross-references:
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f8579 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062f753 = 2
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 g_CTommyGunClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00

#include "nocturne.h"

/* Signature: undefined1 actors_hero_icepick.cpp_FUN_004f8970(undefined4 param_1) */

undefined4 core_icepick_cpp_FUN_004f8970(void)

{
  CDemonActor *this_ptr;
  float fVar1;
  CDemonActor *pCVar2;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  int iVar3;
  int iVar4;
  CDemonActor *in_stack_00000004;
  float fStack_30;
  CVector3f local_28;
  float local_1c;
  float fStack_18;
  
  in_stack_00000004[0x17a].actor_name[8] = '\0';
  in_stack_00000004[0x17a].actor_name[9] = '\0';
  in_stack_00000004[0x17a].actor_name[10] = '\0';
  in_stack_00000004[0x17a].actor_name[0xb] = '\0';
  local_1c = 4.0;
  local_28.x = 1.0;
  local_28.y = 0.0;
  local_28.z = 2.0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)&stack0xffffffcc,&local_28);
  iVar4 = 0;
  for (iVar3 = 0; iVar3 < (int)g_CDemonSetPtr->actor_list_ptr; iVar3 = iVar3 + 1) {
    this_ptr = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar4);
    pCVar2 = (*this_ptr->vtable->getCarrier)(this_ptr);
    if (pCVar2 == (CDemonActor *)0x0) {
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790(this_ptr,g_CTommyGunClassInfo.name_hash);
      if (pCVar2 != (CDemonActor *)0x0) {
        fVar1 = (this_ptr->location).position.x - local_28.z;
        local_28.x = (this_ptr->location).position.y - local_1c;
        local_28.y = (this_ptr->location).position.z - fStack_18;
        if ((ABS(local_28.x) <= (float)DOUBLE_0062f753) &&
           (fVar1 = fVar1 * fVar1 + local_28.y * local_28.y, fVar1 <= unaff_ESI)) {
          *(CDemonActor **)(in_stack_00000004[0x17a].actor_name + 8) = this_ptr;
          unaff_ESI = fVar1;
        }
      }
    }
    iVar4 = iVar4 + 4;
  }
  if (*(int *)(in_stack_00000004[0x17a].actor_name + 8) == 0) {
    return 0;
  }
  (in_stack_00000004->location).position.x =
       (*(float *)(*(int *)(in_stack_00000004[0x17a].actor_name + 8) + 0x20) - fStack_30) +
       (in_stack_00000004->location).position.x;
  (in_stack_00000004->location).position.z =
       (*(float *)(*(int *)(in_stack_00000004[0x17a].actor_name + 8) + 0x28) - local_28.x) +
       (in_stack_00000004->location).position.z;
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)(in_stack_00000004 + 1),0x13,1);
  return 1;
}


// Assembly code:
// 004f8970: PUSH EBX
//   Label: core_icepick.cpp_FUN_004f8970
// 004f8971: PUSH ESI
// 004f8972: PUSH EDI
// 004f8973: PUSH EBP
// 004f8974: MOV EBP,ESP
// 004f8976: SUB ESP,0x2c
// 004f8979: AND ESP,0xfffffff8
// 004f897c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f897f: MOV EDX,0x40800000
// 004f8984: MOV ECX,0x3f800000
// 004f8989: MOV ESI,0x40000000
// 004f898e: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f8991: MOV dword ptr [EAX + 0x1fbf8],0x0
// 004f899b: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x28] (DATA)
// 004f899f: XOR EBX,EBX
// 004f89a1: PUSH EAX
// 004f89a2: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x34] (DATA)
// 004f89a6: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004f89aa: PUSH EAX
// 004f89ab: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 004f89af: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 004f89b3: PUSH EDI
// 004f89b4: MOV dword ptr [ESP + 0x2c],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 004f89b8: XOR ESI,ESI
// 004f89ba: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004f89bf: ADD ESP,0xc
// 004f89c2: XOR EDI,EDI
// 004f89c4: MOV EAX,[0x006810c8]
//   Label: LAB_004f89c4
//   XREF to: 006810c8 (READ)
// 004f89c9: CMP ESI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 004f89cf: JL 0x004f89eb
//   XREF to: 004f89eb (CONDITIONAL_JUMP)
// 004f89d1: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f89d4: MOV ECX,dword ptr [EAX + 0x1fbf8]
// 004f89da: TEST ECX,ECX
// 004f89dc: JNZ 0x004f8a80
//   XREF to: 004f8a80 (CONDITIONAL_JUMP)
// 004f89e2: XOR EAX,EAX
// 004f89e4: MOV ESP,EBP
// 004f89e6: POP EBP
// 004f89e7: POP EDI
// 004f89e8: POP ESI
// 004f89e9: POP EBX
// 004f89ea: RET
// 004f89eb: MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14d158]
//   Label: LAB_004f89eb
//   XREF to: 032613d0 (READ)
// 004f89f2: PUSH EBX
// 004f89f3: MOV EAX,dword ptr [EBX + 0x154]
// 004f89f9: CALL dword ptr [EAX + 0x8c]
// 004f89ff: ADD ESP,0x4
// 004f8a02: TEST EAX,EAX
// 004f8a04: JNZ 0x004f8a77
//   XREF to: 004f8a77 (CONDITIONAL_JUMP)
// 004f8a06: MOV EAX,[0x03f873dc]
//   XREF to: 03f873dc (READ)
// 004f8a0b: PUSH EAX
// 004f8a0c: PUSH EBX
// 004f8a0d: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f8a12: ADD ESP,0x8
// 004f8a15: TEST EAX,EAX
// 004f8a17: JZ 0x004f8a77
//   XREF to: 004f8a77 (CONDITIONAL_JUMP)
// 004f8a19: LEA EAX,[EBX + 0x20]
// 004f8a1c: FLD float ptr [EAX]
// 004f8a1e: FSUB float ptr [ESP + 0xc]
// 004f8a22: FSTP float ptr [ESP]
// 004f8a25: FLD float ptr [EAX + 0x4]
// 004f8a28: FSUB float ptr [ESP + 0x10]
// 004f8a2c: FST float ptr [ESP + 0x4]
// 004f8a30: FLD float ptr [EAX + 0x8]
// 004f8a33: FXCH
// 004f8a35: FABS
// 004f8a37: FXCH
// 004f8a39: FSUB float ptr [ESP + 0x14]
// 004f8a3d: FSTP float ptr [ESP + 0x8]
// 004f8a41: FCOMP double ptr [0x0062f753]
//   XREF to: 0062f753 (READ)
// 004f8a47: FNSTSW AX
// 004f8a49: SAHF
// 004f8a4a: JA 0x004f8a77
//   XREF to: 004f8a77 (CONDITIONAL_JUMP)
// 004f8a4c: FLD float ptr [ESP + 0x8]
// 004f8a50: FMUL ST0
// 004f8a52: FLD float ptr [ESP]
// 004f8a55: FMUL ST0
// 004f8a57: FADDP
// 004f8a59: FST float ptr [ESP + 0x28]
// 004f8a5d: FCOMP float ptr [ESP + 0x24]
// 004f8a61: FNSTSW AX
// 004f8a63: SAHF
// 004f8a64: JA 0x004f8a77
//   XREF to: 004f8a77 (CONDITIONAL_JUMP)
// 004f8a66: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f8a69: MOV dword ptr [EAX + 0x1fbf8],EBX
// 004f8a6f: MOV EAX,dword ptr [ESP + 0x28]
// 004f8a73: MOV dword ptr [ESP + 0x24],EAX
// 004f8a77: INC ESI
//   Label: LAB_004f8a77
// 004f8a78: ADD EDI,0x4
// 004f8a7b: JMP 0x004f89c4
//   XREF to: 004f89c4 (UNCONDITIONAL_JUMP)
// 004f8a80: FLD float ptr [ECX + 0x20]
//   Label: LAB_004f8a80
// 004f8a83: FSUB float ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 004f8a87: FADD float ptr [EAX + 0x20]
// 004f8a8a: FSTP float ptr [EAX + 0x20]
// 004f8a8d: MOV EAX,dword ptr [EAX + 0x1fbf8]
// 004f8a93: FLD float ptr [EAX + 0x28]
// 004f8a96: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f8a99: PUSH 0x1
// 004f8a9b: ADD EAX,0x158
// 004f8aa0: FSUB float ptr [ESP + 0x18]
//   XREF to: Stack[-0x2c] (READ)
// 004f8aa4: PUSH 0x13
// 004f8aa6: FADD float ptr [EAX + 0xfffffed0]
// 004f8aac: PUSH EAX
// 004f8aad: FSTP float ptr [EAX + 0xfffffed0]
// 004f8ab3: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f8ab8: MOV EAX,0x1
// 004f8abd: ADD ESP,0xc
// 004f8ac0: MOV ESP,EBP
// 004f8ac2: POP EBP
// 004f8ac3: POP EDI
// 004f8ac4: POP ESI
// 004f8ac5: POP EBX
// 004f8ac6: RET
