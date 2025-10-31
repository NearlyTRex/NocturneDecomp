// Name: core_weapon.cpp_FUN_005ee740
// Address: 005ee740
// Address Range: [[005ee740, 005ee823]]
// Convention: unknown
// Signature: undefined core_weapon.cpp_FUN_005ee740()
// Cross-references:
//   core_weapon.cpp_CWeapon_FUN_005ee3f0 (005ee3f0) at 005ee408 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00657b2d = 0.5
//   undefined4 DAT_0078a123
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_box.cpp_CBox_setupCorners_FUN_0041dd20

#include "nocturne.h"

void core_weapon_cpp_FUN_005ee740(void)

{
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float fStack_4c;
  float in_stack_ffffffc8;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CVector3f CStack_1c;
  CVector3f CStack_10;
  
  if ((in_stack_00000004[2].location.position.x != 0.0) &&
     ((undefined *)in_stack_00000004->field6_0x68 == &DAT_0078a123)) {
    (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
              (in_stack_00000004,(CBoundingBox3D *)&fStack_4c);
    CStack_10.z = (in_stack_ffffffc8 + fStack_2c) * FLOAT_00657b2d;
    core_actor_cpp_CDemonActor_FUN_00408ec0(in_stack_00000004);
    CStack_10.x = fStack_28 - fStack_34;
    CStack_10.y = fStack_24 - fStack_30;
    CStack_10.z = fStack_20 - fStack_2c;
    fStack_4c = 8.715802e-39;
    core_box_cpp_CBox_setupCorners_FUN_0041dd20
              ((CBox *)&in_stack_00000004[2].orient_matrix.m[2].y,&CStack_1c,
               (CVector3f *)&in_stack_00000004->orient,&CStack_10,
               *(float *)(in_stack_00000004[4].actor_name + 4));
    return;
  }
  return;
}


// Assembly code:
// 005ee740: PUSH EBX
//   Label: core_weapon.cpp_FUN_005ee740
// 005ee741: SUB ESP,0x48
// 005ee744: MOV EBX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 005ee748: LEA EAX,[EBX + 0x158]
// 005ee74e: CMP dword ptr [EAX + 0x178],0x0
// 005ee755: JZ 0x005ee760
//   XREF to: 005ee760 (CONDITIONAL_JUMP)
// 005ee757: CMP dword ptr [EBX + 0x68],0x78a123
//   XREF to: 0078a123 (DATA)
// 005ee75e: JZ 0x005ee765
//   XREF to: 005ee765 (CONDITIONAL_JUMP)
// 005ee760: ADD ESP,0x48
//   Label: LAB_005ee760
// 005ee763: POP EBX
// 005ee764: RET
// 005ee765: MOV EAX,ESP
//   Label: LAB_005ee765
// 005ee767: PUSH EAX
// 005ee768: MOV EDX,dword ptr [EBX + 0x154]
// 005ee76e: PUSH EBX
// 005ee76f: CALL dword ptr [EDX + 0x14]
// 005ee772: ADD ESP,0x8
// 005ee775: FLD float ptr [ESP + 0x4]
// 005ee779: FLD float ptr [ESP]
// 005ee77c: FADD float ptr [ESP + 0xc]
// 005ee780: FXCH
// 005ee782: FADD float ptr [ESP + 0x10]
// 005ee786: FXCH
// 005ee788: FST float ptr [ESP + 0x3c]
// 005ee78c: FLD float ptr [0x00657b2d]
//   XREF to: 00657b2d (READ)
// 005ee792: FXCH
// 005ee794: FMUL ST1
// 005ee796: FXCH ST2
// 005ee798: FST float ptr [ESP + 0x40]
// 005ee79c: FMUL ST1
// 005ee79e: LEA EAX,[ESP + 0x30]
// 005ee7a2: FLD float ptr [ESP + 0x8]
// 005ee7a6: PUSH EAX
// 005ee7a7: FADD float ptr [ESP + 0x18]
// 005ee7ab: LEA EAX,[ESP + 0x1c]
// 005ee7af: FST float ptr [ESP + 0x48]
// 005ee7b3: PUSH EAX
// 005ee7b4: FMULP ST2
// 005ee7b6: PUSH EBX
// 005ee7b7: FXCH ST2
// 005ee7b9: FSTP float ptr [ESP + 0x3c]
// 005ee7bd: FXCH
// 005ee7bf: FSTP float ptr [ESP + 0x40]
// 005ee7c3: FSTP float ptr [ESP + 0x44]
// 005ee7c7: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005ee7cc: ADD ESP,0xc
// 005ee7cf: LEA EAX,[ESP + 0x24]
// 005ee7d3: FLD float ptr [ESP + 0xc]
// 005ee7d7: FLD float ptr [ESP + 0x10]
// 005ee7db: FLD float ptr [ESP + 0x14]
// 005ee7df: FXCH ST2
// 005ee7e1: FSUB float ptr [ESP]
// 005ee7e4: FXCH
// 005ee7e6: FSUB float ptr [ESP + 0x4]
// 005ee7ea: FXCH ST2
// 005ee7ec: FSUB float ptr [ESP + 0x8]
// 005ee7f0: FXCH
// 005ee7f2: FSTP float ptr [ESP + 0x24]
// 005ee7f6: FXCH
// 005ee7f8: FSTP float ptr [ESP + 0x28]
// 005ee7fc: FSTP float ptr [ESP + 0x2c]
// 005ee800: PUSH dword ptr [EBX + 0x564]
// 005ee806: PUSH EAX
// 005ee807: LEA EAX,[EBX + 0x30]
// 005ee80a: PUSH EAX
// 005ee80b: LEA EAX,[ESP + 0x24]
// 005ee80f: PUSH EAX
// 005ee810: ADD EBX,0x308
// 005ee816: PUSH EBX
// 005ee817: CALL core_box.cpp_CBox_setupCorners_FUN_0041dd20
//   XREF to: 0041dd20 (UNCONDITIONAL_CALL)
// 005ee81c: ADD ESP,0x14
// 005ee81f: ADD ESP,0x48
// 005ee822: POP EBX
// 005ee823: RET
