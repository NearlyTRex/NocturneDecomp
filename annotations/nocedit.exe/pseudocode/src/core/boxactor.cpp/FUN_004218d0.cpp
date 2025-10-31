// Name: core_boxactor.cpp_FUN_004218d0
// Address: 004218d0
// Address Range: [[004218d0, 004219d6]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_004218d0()
// Cross-references:
//   core_boxactor.cpp_FUN_00422390 (00422390) at 0042248f [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_004224f0 (004224f0) at 00422503 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422640 (00422640) at 004226b7 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_004228e0 (004228e0) at 004228f2 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0061663f = 0.5
//   undefined4 DAT_0078a123
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_box.cpp_CBox_setupCorners_FUN_0041dd20

#include "nocturne.h"

/* Signature: undefined1 actors_other_boxactor.cpp_FUN_004218d0(undefined4 param_1) */

void core_boxactor_cpp_FUN_004218d0(void)

{
  float fVar1;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000010;
  float fStack_4c;
  float in_stack_ffffffc8;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CVector3f CStack_1c;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  fVar1 = in_stack_00000004[2].field_224.x;
  in_stack_00000004[4].create_event[0x10] = '\0';
  in_stack_00000004[4].create_event[0x11] = '\0';
  in_stack_00000004[4].create_event[0x12] = '\0';
  in_stack_00000004[4].create_event[0x13] = '\0';
  if ((0.0 < fVar1) && ((undefined *)in_stack_00000004->field6_0x68 == &DAT_0078a123)) {
    if (in_stack_00000004[2].location.position.x != 0.0) {
      (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
                (in_stack_00000004,(CBoundingBox3D *)&fStack_4c);
      fStack_8 = in_stack_ffffffc8 + fStack_2c;
      CStack_1c.z = fStack_8 * FLOAT_0061663f;
      fStack_10 = (fStack_34 + fStack_28) * FLOAT_0061663f;
      fStack_c = (fStack_30 + fStack_24) * FLOAT_0061663f;
      core_actor_cpp_CDemonActor_FUN_00408ec0(in_stack_00000004);
      in_stack_00000008 = fStack_28 - fStack_34;
      in_stack_0000000c = fStack_24 - fStack_30;
      in_stack_00000010 = fStack_20 - fStack_2c;
      fStack_4c = 6.070401e-39;
      core_box_cpp_CBox_setupCorners_FUN_0041dd20
                ((CBox *)&in_stack_00000004[2].field_224.y,&CStack_1c,
                 (CVector3f *)&in_stack_00000004->orient,(CVector3f *)&stack0x00000008,
                 in_stack_00000004[2].field_224.x);
      return;
    }
    in_stack_00000004[4].create_event[0x10] = -1;
    in_stack_00000004[4].create_event[0x11] = -1;
    in_stack_00000004[4].create_event[0x12] = -1;
    in_stack_00000004[4].create_event[0x13] = -1;
  }
  return;
}


// Assembly code:
// 004218d0: PUSH EBX
//   Label: core_boxactor.cpp_FUN_004218d0
// 004218d1: SUB ESP,0x48
// 004218d4: MOV EBX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 004218d8: FLD float ptr [EBX + 0x390]
// 004218de: FLDZ
// 004218e0: MOV dword ptr [EBX + 0x5e8],0x0
// 004218ea: FCOMPP
// 004218ec: FNSTSW AX
// 004218ee: SAHF
// 004218ef: JNC 0x00421913
//   XREF to: 00421913 (CONDITIONAL_JUMP)
// 004218f1: CMP dword ptr [EBX + 0x68],0x78a123
//   XREF to: 0078a123 (DATA)
// 004218f8: JNZ 0x00421913
//   XREF to: 00421913 (CONDITIONAL_JUMP)
// 004218fa: LEA EAX,[EBX + 0x158]
// 00421900: CMP dword ptr [EAX + 0x178],0x0
// 00421907: JNZ 0x00421918
//   XREF to: 00421918 (CONDITIONAL_JUMP)
// 00421909: MOV dword ptr [EBX + 0x5e8],0xffffffff
// 00421913: ADD ESP,0x48
//   Label: LAB_00421913
// 00421916: POP EBX
// 00421917: RET
// 00421918: MOV EAX,ESP
//   Label: LAB_00421918
// 0042191a: PUSH EAX
// 0042191b: MOV EDX,dword ptr [EBX + 0x154]
// 00421921: PUSH EBX
// 00421922: CALL dword ptr [EDX + 0x14]
// 00421925: ADD ESP,0x8
// 00421928: FLD float ptr [ESP + 0x4]
// 0042192c: FLD float ptr [ESP]
// 0042192f: FADD float ptr [ESP + 0xc]
// 00421933: FXCH
// 00421935: FADD float ptr [ESP + 0x10]
// 00421939: FXCH
// 0042193b: FST float ptr [ESP + 0x30]
// 0042193f: FLD float ptr [0x0061663f]
//   XREF to: 0061663f (READ)
// 00421945: FXCH
// 00421947: FMUL ST1
// 00421949: FXCH ST2
// 0042194b: FST float ptr [ESP + 0x34]
// 0042194f: FMUL ST1
// 00421951: LEA EAX,[ESP + 0x24]
// 00421955: FLD float ptr [ESP + 0x8]
// 00421959: PUSH EAX
// 0042195a: FADD float ptr [ESP + 0x18]
// 0042195e: LEA EAX,[ESP + 0x1c]
// 00421962: FST float ptr [ESP + 0x3c]
// 00421966: PUSH EAX
// 00421967: FMULP ST2
// 00421969: PUSH EBX
// 0042196a: FXCH ST2
// 0042196c: FSTP float ptr [ESP + 0x30]
// 00421970: FXCH
// 00421972: FSTP float ptr [ESP + 0x34]
// 00421976: FSTP float ptr [ESP + 0x38]
// 0042197a: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0042197f: ADD ESP,0xc
// 00421982: LEA EAX,[ESP + 0x3c]
// 00421986: FLD float ptr [ESP + 0xc]
// 0042198a: FLD float ptr [ESP + 0x10]
// 0042198e: FLD float ptr [ESP + 0x14]
// 00421992: FXCH ST2
// 00421994: FSUB float ptr [ESP]
// 00421997: FXCH
// 00421999: FSUB float ptr [ESP + 0x4]
// 0042199d: FXCH ST2
// 0042199f: FSUB float ptr [ESP + 0x8]
// 004219a3: FXCH
// 004219a5: FSTP float ptr [ESP + 0x3c]
// 004219a9: FXCH
// 004219ab: FSTP float ptr [ESP + 0x40]
// 004219af: FSTP float ptr [ESP + 0x44]
// 004219b3: PUSH dword ptr [EBX + 0x390]
// 004219b9: PUSH EAX
// 004219ba: LEA EAX,[EBX + 0x30]
// 004219bd: PUSH EAX
// 004219be: LEA EAX,[ESP + 0x24]
// 004219c2: PUSH EAX
// 004219c3: ADD EBX,0x394
// 004219c9: PUSH EBX
// 004219ca: CALL core_box.cpp_CBox_setupCorners_FUN_0041dd20
//   XREF to: 0041dd20 (UNCONDITIONAL_CALL)
// 004219cf: ADD ESP,0x14
// 004219d2: ADD ESP,0x48
// 004219d5: POP EBX
// 004219d6: RET
