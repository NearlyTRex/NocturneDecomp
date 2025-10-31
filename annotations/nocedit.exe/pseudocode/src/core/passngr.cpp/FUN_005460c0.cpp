// Name: core_passngr.cpp_FUN_005460c0
// Address: 005460c0
// Address Range: [[005460c0, 0054618d]]
// Convention: unknown
// Signature: undefined core_passngr.cpp_FUN_005460c0()
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_charactr.cpp_CCharacter_FUN_00429aa0
//   core_morph.cpp_FUN_0052b600
//   core_morph.cpp_MorphModelRotatePointsTwice_FUN_0052bae0

#include "nocturne.h"

/* Signature: undefined1 actors_npc_passenger.cpp_FUN_005460c0(undefined4 param_1) */

int core_passngr_cpp_FUN_005460c0(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  char *pcStack_18;
  char *pcStack_14;
  
  if ((*(float *)(in_stack_00000004[2].cloth_data + 0x5d60) <= 1.0) &&
     (*(int *)in_stack_00000004->field2_0x240c == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&in_stack_00000004->base_actor);
    this_ptr = (*((in_stack_00000004->base_actor).metadata.vtable)->getBoundingBox)
                         (&in_stack_00000004->base_actor,(CBoundingBox3D *)&pcStack_18);
    pcStack_14 = (char *)0x54610a;
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
    if (iVar1 != 0) {
      if ((*(uint *)(in_stack_00000004[2].cloth_data + 0x5d60) & 0x7fffffff) != 0) {
        pcStack_14 = (char *)0x0;
        pcStack_18 = in_stack_00000004[2].cloth_data + 0x5134;
        core_morph_cpp_FUN_0052b600();
        pcStack_18 = (char *)0x54616a;
        pcStack_14 = in_stack_00000004[2].cloth_data + 0x5134;
        core_morph_cpp_FUN_0052b600();
        core_morph_cpp_MorphModelRotatePointsTwice_FUN_0052bae0();
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&in_stack_00000004->base_actor);
        return iVar1;
      }
      core_charactr_cpp_CCharacter_FUN_00429aa0(in_stack_00000004);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&in_stack_00000004->base_actor);
    return iVar1;
  }
  return 0;
}


// Assembly code:
// 005460c0: PUSH EBX
//   Label: core_passngr.cpp_FUN_005460c0
// 005460c1: SUB ESP,0x18
// 005460c4: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005460c8: FLD float ptr [EBX + 0x20440]
// 005460ce: FLD1
// 005460d0: FCOMPP
// 005460d2: FNSTSW AX
// 005460d4: SAHF
// 005460d5: JC 0x005460e0
//   XREF to: 005460e0 (CONDITIONAL_JUMP)
// 005460d7: CMP dword ptr [EBX + 0x240c],0x0
// 005460de: JZ 0x005460e7
//   XREF to: 005460e7 (CONDITIONAL_JUMP)
// 005460e0: XOR EAX,EAX
//   Label: LAB_005460e0
// 005460e2: ADD ESP,0x18
// 005460e5: POP EBX
// 005460e6: RET
// 005460e7: PUSH EDI
//   Label: LAB_005460e7
// 005460e8: PUSH ESI
// 005460e9: PUSH EBX
// 005460ea: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 005460ef: ADD ESP,0x4
// 005460f2: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1c] (DATA)
// 005460f6: PUSH EAX
// 005460f7: MOV ESI,dword ptr [EBX + 0x154]
// 005460fd: PUSH EBX
// 005460fe: CALL dword ptr [ESI + 0x14]
// 00546101: ADD ESP,0x8
// 00546104: PUSH EAX
// 00546105: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 0054610a: ADD ESP,0x4
// 0054610d: MOV EDI,EAX
// 0054610f: TEST EAX,EAX
// 00546111: JZ 0x00546128
//   XREF to: 00546128 (CONDITIONAL_JUMP)
// 00546113: TEST dword ptr [EBX + 0x20440],0x7fffffff
// 0054611d: JNZ 0x0054613a
//   XREF to: 0054613a (CONDITIONAL_JUMP)
// 0054611f: PUSH EBX
// 00546120: CALL core_charactr.cpp_CCharacter_FUN_00429aa0
//   XREF to: 00429aa0 (UNCONDITIONAL_CALL)
// 00546125: ADD ESP,0x4
// 00546128: PUSH EBX
//   Label: LAB_00546128
// 00546129: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0054612e: ADD ESP,0x4
// 00546131: MOV EAX,EDI
// 00546133: POP ESI
// 00546134: POP EDI
// 00546135: ADD ESP,0x18
// 00546138: POP EBX
// 00546139: RET
// 0054613a: PUSH 0x0
//   Label: LAB_0054613a
// 0054613c: LEA EAX,[EBX + 0x158]
// 00546142: PUSH EAX
// 00546143: PUSH 0x0
// 00546145: LEA ESI,[EBX + 0x1f814]
// 0054614b: PUSH ESI
// 0054614c: CALL core_morph.cpp_FUN_0052b600
//   XREF to: 0052b600 (UNCONDITIONAL_CALL)
// 00546151: ADD ESP,0x10
// 00546154: MOV EAX,dword ptr [EBX + 0x1f810]
// 0054615a: PUSH 0x0
// 0054615c: ADD EAX,0x158
// 00546161: PUSH EAX
// 00546162: PUSH 0x1
// 00546164: PUSH ESI
// 00546165: CALL core_morph.cpp_FUN_0052b600
//   XREF to: 0052b600 (UNCONDITIONAL_CALL)
// 0054616a: ADD ESP,0x10
// 0054616d: PUSH dword ptr [EBX + 0x20440]
// 00546173: PUSH ESI
// 00546174: CALL core_morph.cpp_MorphModelRotatePointsTwice_FUN_0052bae0
//   XREF to: 0052bae0 (UNCONDITIONAL_CALL)
// 00546179: ADD ESP,0x8
// 0054617c: PUSH EBX
// 0054617d: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00546182: ADD ESP,0x4
// 00546185: MOV EAX,EDI
// 00546187: POP ESI
// 00546188: POP EDI
// 00546189: ADD ESP,0x18
// 0054618c: POP EBX
// 0054618d: RET
