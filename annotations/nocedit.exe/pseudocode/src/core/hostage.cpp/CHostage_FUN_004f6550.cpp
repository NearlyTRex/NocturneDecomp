// Name: core_hostage.cpp_CHostage_FUN_004f6550
// Address: 004f6550
// Address Range: [[004f6550, 004f69b8]]
// Convention: __cdecl
// Signature: void core_hostage.cpp_CHostage_FUN_004f6550(CHostage * this_ptr)
// Globals:
//   TerminatedCString s_CShotgun_0062f224
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_charactr.cpp_CCharacter_FUN_0042d300
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

void __cdecl core_hostage_cpp_CHostage_FUN_004f6550(CHostage *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  int in_stack_00000008;
  CMatrix3x4f *in_stack_fffffd74;
  CMatrix3x4f *in_stack_fffffd78;
  undefined4 auStack_254 [12];
  undefined4 auStack_224 [9];
  undefined1 auStack_200 [56];
  undefined4 auStack_1c8 [11];
  undefined1 auStack_19c [56];
  undefined4 auStack_164 [11];
  undefined4 auStack_138 [11];
  undefined1 auStack_10c [48];
  undefined1 auStack_dc [48];
  CVector3f local_ac;
  CVector3f local_a0;
  CVector3f local_94;
  float local_88 [2];
  CVector3f local_80;
  CVector3f local_70;
  CVector3f local_64;
  undefined1 local_58 [12];
  undefined4 local_4c;
  undefined4 local_48;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  float local_10;
  
  bVar4 = 0;
  if (*(int *)this_ptr->field4_0x1fab8 == 1) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0
                      ((this_ptr->base_npc).base_character.carry_hands[in_stack_00000008].
                       carry_actor,"CShotgun");
    if (iVar1 != 0) {
      local_80.x = 0.269;
      local_80.y = -0.012;
      local_58._8_4_ = -0.287;
      local_80.z = 0.092;
      local_48 = 0x3f9ac083;
      local_4c = 0x3ecf5c29;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                ((CMatrix3x4f *)auStack_200,&local_80,(CVector3f *)(local_58 + 8));
      puVar3 = (undefined4 *)&stack0xfffffd74;
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                ((CMatrix3x4f *)(auStack_200 + 4),
                 (CMatrix3x4f *)
                 ((this_ptr->base_npc).base_character.model.field3_0x508 +
                 *(int *)(this_ptr->base_npc).base_character.carry_hands[in_stack_00000008].
                         field0_0x0 * 0x30 + 0x978),in_stack_fffffd74);
      puVar2 = auStack_1c8;
      goto LAB_004f6696;
    }
  }
  puVar3 = (undefined4 *)&stack0xfffffd74;
  iVar1 = *(int *)this_ptr->field4_0x1fab8;
  if (iVar1 == 3) {
    local_34.x = 0.265971;
    local_34.y = -0.200311;
    local_34.z = 0.0324051;
    if (&local_a0 != &local_34) {
      local_a0.y = -0.200311;
      local_a0.z = 0.0324051;
      local_a0.x = 0.265971;
    }
    local_1c.z = 0.13687;
    local_1c.y = 0.13687;
    local_1c.x = -0.480625;
    if (&local_94 != &local_1c) {
      local_94.x = -0.480625;
      local_94.y = 0.13687;
      local_94.z = 0.13687;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              ((CMatrix3x4f *)auStack_dc,&local_a0,&local_94);
    puVar3 = (undefined4 *)&stack0xfffffd78;
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              ((CMatrix3x4f *)(auStack_dc + 4),
               (CMatrix3x4f *)
               ((this_ptr->base_npc).base_character.model.field3_0x508 +
               *(int *)(this_ptr->base_npc).base_character.carry_hands[in_stack_00000008].field0_0x0
               * 0x30 + 0x978),in_stack_fffffd78);
    puVar2 = auStack_254;
  }
  else if (iVar1 != 5) {
    if (iVar1 != 5) {
      core_charactr_cpp_CCharacter_FUN_0042d300((CCharacter *)this_ptr);
      puVar2 = auStack_138;
    }
    else {
      local_ac.x = 0.265971;
      local_ac.y = -0.200311;
      local_ac.z = 0.0324051;
      if (&local_64 != &local_ac) {
        local_64.y = -0.200311;
        local_64.z = 0.0324051;
        local_64.x = 0.265971;
      }
      local_80.x = 0.13687;
      local_88[1] = 0.13687;
      local_88[0] = -0.480625;
      if (&local_10 != local_88) {
        local_10 = -0.480625;
      }
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                ((CMatrix3x4f *)auStack_19c,&local_64,(CVector3f *)&local_10);
      puVar3 = (undefined4 *)&stack0xfffffd78;
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                ((CMatrix3x4f *)(auStack_19c + 4),
                 (CMatrix3x4f *)
                 ((this_ptr->base_npc).base_character.model.field3_0x508 +
                 *(int *)(this_ptr->base_npc).base_character.carry_hands[in_stack_00000008].
                         field0_0x0 * 0x30 + 0x978),in_stack_fffffd78);
      puVar2 = auStack_224;
    }
  }
  else {
    local_70.x = 0.265971;
    local_70.y = -0.200311;
    local_70.z = 0.0324051;
    if (&local_28 != &local_70) {
      local_28.y = -0.200311;
      local_28.z = 0.0324051;
      local_28.x = 0.265971;
    }
    local_58._8_4_ = 0.13687;
    local_58._4_4_ = 0.13687;
    local_58._0_4_ = -0.480625;
    if (&local_40 != (CVector3f *)local_58) {
      local_40.x = -0.480625;
      local_40.y = 0.13687;
      local_40.z = 0.13687;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              ((CMatrix3x4f *)auStack_10c,&local_28,&local_40);
    puVar3 = (undefined4 *)&stack0xfffffd78;
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              ((CMatrix3x4f *)(auStack_10c + 4),
               (CMatrix3x4f *)
               ((this_ptr->base_npc).base_character.model.field3_0x508 +
               *(int *)(this_ptr->base_npc).base_character.carry_hands[in_stack_00000008].field0_0x0
               * 0x30 + 0x978),in_stack_fffffd78);
    puVar2 = auStack_164;
  }
LAB_004f6696:
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  puVar3 = (undefined4 *)&stack0xfffffd78;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar4 * -2 + 1;
  }
  return;
}


// Assembly code:
// 004f6550: PUSH EBX
//   Label: core_hostage.cpp_CHostage_FUN_004f6550
// 004f6551: PUSH EDI
// 004f6552: PUSH EBP
// 004f6553: SUB ESP,0x288
// 004f6559: MOV EDI,dword ptr [ESP + 0x29c]
//   XREF to: Stack[0x8] (READ)
// 004f6560: MOV EBX,ESI
// 004f6562: MOV ESI,dword ptr [ESP + 0x298]
//   XREF to: Stack[0x4] (READ)
// 004f6569: MOV EAX,EDI
// 004f656b: SHL EAX,0x4
// 004f656e: ADD EAX,EDI
// 004f6570: SHL EAX,0x2
// 004f6573: LEA EBP,[ESI + EAX*0x1]
// 004f6576: MOV EDX,dword ptr [ESI + 0x1fab8]
// 004f657c: MOV EAX,dword ptr [EBP + 0x24b4]
// 004f6582: CMP EDX,0x1
// 004f6585: JZ 0x004f66b2
//   XREF to: 004f66b2 (CONDITIONAL_JUMP)
// 004f658b: MOV ECX,dword ptr [ESI + 0x1fab8]
//   Label: LAB_004f658b
// 004f6591: CMP ECX,0x3
// 004f6594: JNZ 0x004f6776
//   XREF to: 004f6776 (CONDITIONAL_JUMP)
// 004f659a: MOV EDX,0x3e882d5a
// 004f659f: MOV ECX,0xbe4d1e54
// 004f65a4: MOV EBP,0x3d04bb36
// 004f65a9: LEA EAX,[ESP + 0x258]
//   XREF to: Stack[-0x3c] (DATA)
// 004f65b0: MOV dword ptr [ESP + 0x258],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 004f65b7: MOV dword ptr [ESP + 0x25c],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 004f65be: LEA EDX,[ESP + 0x1ec]
//   XREF to: Stack[-0xa8] (DATA)
// 004f65c5: MOV dword ptr [ESP + 0x260],EBP
//   XREF to: Stack[-0x34] (WRITE)
// 004f65cc: CMP EDX,EAX
// 004f65ce: JZ 0x004f65ea
//   XREF to: 004f65ea (CONDITIONAL_JUMP)
// 004f65d0: MOV EAX,0x3e882d5a
// 004f65d5: MOV dword ptr [ESP + 0x1f0],ECX
//   XREF to: Stack[-0xa4] (WRITE)
// 004f65dc: MOV dword ptr [ESP + 0x1f4],EBP
//   XREF to: Stack[-0xa0] (WRITE)
// 004f65e3: MOV dword ptr [ESP + 0x1ec],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 004f65ea: MOV EAX,0x3e0c27a6
//   Label: LAB_004f65ea
// 004f65ef: MOV EBP,0xbef6147b
// 004f65f4: LEA EDX,[ESP + 0x1f8]
//   XREF to: Stack[-0x9c] (DATA)
// 004f65fb: MOV dword ptr [ESP + 0x278],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004f6602: MOV dword ptr [ESP + 0x274],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004f6609: LEA EAX,[ESP + 0x270]
//   XREF to: Stack[-0x24] (DATA)
// 004f6610: MOV dword ptr [ESP + 0x270],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 004f6617: CMP EDX,EAX
// 004f6619: JZ 0x004f6635
//   XREF to: 004f6635 (CONDITIONAL_JUMP)
// 004f661b: MOV dword ptr [ESP + 0x1f8],EBP
//   XREF to: Stack[-0x9c] (WRITE)
// 004f6622: MOV EBP,0x3e0c27a6
// 004f6627: MOV dword ptr [ESP + 0x1fc],EBP
//   XREF to: Stack[-0x98] (WRITE)
// 004f662e: MOV dword ptr [ESP + 0x200],EBP
//   XREF to: Stack[-0x94] (WRITE)
// 004f6635: LEA EAX,[ESP + 0x1f8]
//   Label: LAB_004f6635
//   XREF to: Stack[-0x9c] (DATA)
// 004f663c: PUSH EAX
// 004f663d: LEA EAX,[ESP + 0x1f0]
//   XREF to: Stack[-0xa8] (DATA)
// 004f6644: PUSH EAX
// 004f6645: LEA EAX,[ESP + 0x1b8]
//   XREF to: Stack[-0xe4] (DATA)
// 004f664c: PUSH EAX
// 004f664d: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 004f6652: MOV EAX,EDI
// 004f6654: SHL EAX,0x4
// 004f6657: ADD EAX,EDI
// 004f6659: MOV EDX,dword ptr [ESI + EAX*0x4 + 0x24ac]
// 004f6660: LEA EAX,[EDX*0x4 + 0x0]
// 004f6667: SUB EAX,EDX
// 004f6669: ADD ESI,0xfd8
// 004f666f: SHL EAX,0x4
// 004f6672: ADD ESP,0xc
// 004f6675: ADD ESI,EAX
// 004f6677: PUSH ESI
// 004f6678: LEA EAX,[ESP + 0x1b4]
//   XREF to: Stack[-0xe4] (DATA)
// 004f667f: PUSH EAX
// 004f6680: LEA ESI,[ESP + 0x38]
//   XREF to: Stack[-0x264] (DATA)
// 004f6684: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x294] (DATA)
// 004f6688: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 004f668d: MOV ECX,0xc
// 004f6692: LEA ESI,[ESP + 0x38]
//   XREF to: Stack[-0x264] (DATA)
// 004f6696: ADD ESP,0x8
//   Label: LAB_004f6696
// 004f6699: MOVSD.REP ES:EDI,ESI
// 004f669b: MOV ECX,0xc
// 004f66a0: MOV ESI,ESP
// 004f66a2: MOV EDI,EBX
// 004f66a4: MOVSD.REP ES:EDI,ESI
// 004f66a6: MOV EAX,EBX
// 004f66a8: ADD ESP,0x288
// 004f66ae: POP EBP
// 004f66af: POP EDI
// 004f66b0: POP EBX
// 004f66b1: RET
// 004f66b2: PUSH 0x62f224
//   Label: LAB_004f66b2
//   XREF to: 0062f224 (DATA)
// 004f66b7: PUSH EAX
// 004f66b8: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004f66bd: ADD ESP,0x8
// 004f66c0: TEST EAX,EAX
// 004f66c2: JZ 0x004f658b
//   XREF to: 004f658b (CONDITIONAL_JUMP)
// 004f66c8: MOV EDX,0x3e89ba5e
// 004f66cd: MOV ECX,0xbc449ba6
// 004f66d2: MOV EDI,0x3dbc6a7f
// 004f66d7: MOV EAX,0xbe92f1aa
// 004f66dc: MOV dword ptr [ESP + 0x210],EDX
//   XREF to: Stack[-0x84] (WRITE)
// 004f66e3: MOV dword ptr [ESP + 0x214],ECX
//   XREF to: Stack[-0x80] (WRITE)
// 004f66ea: MOV dword ptr [ESP + 0x240],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 004f66f1: LEA EAX,[ESP + 0x240]
//   XREF to: Stack[-0x54] (DATA)
// 004f66f8: MOV dword ptr [ESP + 0x218],EDI
//   XREF to: Stack[-0x7c] (WRITE)
// 004f66ff: PUSH EAX
// 004f6700: LEA EAX,[ESP + 0x214]
//   XREF to: Stack[-0x84] (DATA)
// 004f6707: MOV EDX,0x3f9ac083
// 004f670c: PUSH EAX
// 004f670d: LEA EAX,[ESP + 0x98]
//   XREF to: Stack[-0x204] (DATA)
// 004f6714: MOV ECX,0x3ecf5c29
// 004f6719: PUSH EAX
// 004f671a: MOV dword ptr [ESP + 0x254],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 004f6721: MOV dword ptr [ESP + 0x250],ECX
//   XREF to: Stack[-0x50] (WRITE)
// 004f6728: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 004f672d: MOV EDX,dword ptr [EBP + 0x24ac]
// 004f6733: LEA EAX,[EDX*0x4 + 0x0]
// 004f673a: SUB EAX,EDX
// 004f673c: MOV EDX,EAX
// 004f673e: SHL EDX,0x4
// 004f6741: LEA EAX,[ESI + 0xfd8]
// 004f6747: ADD ESP,0xc
// 004f674a: ADD EAX,EDX
// 004f674c: PUSH EAX
// 004f674d: LEA EAX,[ESP + 0x94]
//   XREF to: Stack[-0x204] (DATA)
// 004f6754: PUSH EAX
// 004f6755: LEA ESI,[ESP + 0xc8]
//   XREF to: Stack[-0x1d4] (DATA)
// 004f675c: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x294] (DATA)
// 004f6760: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 004f6765: MOV ECX,0xc
// 004f676a: LEA ESI,[ESP + 0xc8]
//   XREF to: Stack[-0x1d4] (DATA)
// 004f6771: JMP 0x004f6696
//   XREF to: 004f6696 (UNCONDITIONAL_JUMP)
// 004f6776: CMP ECX,0x5
//   Label: LAB_004f6776
// 004f6779: JNZ 0x004f6886
//   XREF to: 004f6886 (CONDITIONAL_JUMP)
// 004f677f: MOV EDX,0x3e882d5a
// 004f6784: MOV ECX,0xbe4d1e54
// 004f6789: MOV EBP,0x3d04bb36
// 004f678e: LEA EAX,[ESP + 0x21c]
//   XREF to: Stack[-0x78] (DATA)
// 004f6795: MOV dword ptr [ESP + 0x21c],EDX
//   XREF to: Stack[-0x78] (WRITE)
// 004f679c: MOV dword ptr [ESP + 0x220],ECX
//   XREF to: Stack[-0x74] (WRITE)
// 004f67a3: LEA EDX,[ESP + 0x264]
//   XREF to: Stack[-0x30] (DATA)
// 004f67aa: MOV dword ptr [ESP + 0x224],EBP
//   XREF to: Stack[-0x70] (WRITE)
// 004f67b1: CMP EDX,EAX
// 004f67b3: JZ 0x004f67cf
//   XREF to: 004f67cf (CONDITIONAL_JUMP)
// 004f67b5: MOV EAX,0x3e882d5a
// 004f67ba: MOV dword ptr [ESP + 0x268],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 004f67c1: MOV dword ptr [ESP + 0x26c],EBP
//   XREF to: Stack[-0x28] (WRITE)
// 004f67c8: MOV dword ptr [ESP + 0x264],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004f67cf: MOV EAX,0x3e0c27a6
//   Label: LAB_004f67cf
// 004f67d4: MOV EBP,0xbef6147b
// 004f67d9: LEA EDX,[ESP + 0x24c]
//   XREF to: Stack[-0x48] (DATA)
// 004f67e0: MOV dword ptr [ESP + 0x23c],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 004f67e7: MOV dword ptr [ESP + 0x238],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 004f67ee: LEA EAX,[ESP + 0x234]
//   XREF to: Stack[-0x60] (DATA)
// 004f67f5: MOV dword ptr [ESP + 0x234],EBP
//   XREF to: Stack[-0x60] (WRITE)
// 004f67fc: CMP EDX,EAX
// 004f67fe: JZ 0x004f681a
//   XREF to: 004f681a (CONDITIONAL_JUMP)
// 004f6800: MOV dword ptr [ESP + 0x24c],EBP
//   XREF to: Stack[-0x48] (WRITE)
// 004f6807: MOV EBP,0x3e0c27a6
// 004f680c: MOV dword ptr [ESP + 0x250],EBP
//   XREF to: Stack[-0x44] (WRITE)
// 004f6813: MOV dword ptr [ESP + 0x254],EBP
//   XREF to: Stack[-0x40] (WRITE)
// 004f681a: LEA EAX,[ESP + 0x24c]
//   Label: LAB_004f681a
//   XREF to: Stack[-0x48] (DATA)
// 004f6821: PUSH EAX
// 004f6822: LEA EAX,[ESP + 0x268]
//   XREF to: Stack[-0x30] (DATA)
// 004f6829: PUSH EAX
// 004f682a: LEA EAX,[ESP + 0x188]
//   XREF to: Stack[-0x114] (DATA)
// 004f6831: PUSH EAX
// 004f6832: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 004f6837: MOV EAX,EDI
// 004f6839: SHL EAX,0x4
// 004f683c: ADD EAX,EDI
// 004f683e: MOV EDI,dword ptr [ESI + EAX*0x4 + 0x24ac]
// 004f6845: LEA EAX,[EDI*0x4 + 0x0]
// 004f684c: SUB EAX,EDI
// 004f684e: ADD ESI,0xfd8
// 004f6854: SHL EAX,0x4
// 004f6857: ADD ESP,0xc
// 004f685a: ADD ESI,EAX
// 004f685c: PUSH ESI
// 004f685d: LEA EAX,[ESP + 0x184]
//   XREF to: Stack[-0x114] (DATA)
// 004f6864: PUSH EAX
// 004f6865: LEA ESI,[ESP + 0x128]
//   XREF to: Stack[-0x174] (DATA)
// 004f686c: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x294] (DATA)
// 004f6870: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 004f6875: MOV ECX,0xc
// 004f687a: LEA ESI,[ESP + 0x128]
//   XREF to: Stack[-0x174] (DATA)
// 004f6881: JMP 0x004f6696
//   XREF to: 004f6696 (UNCONDITIONAL_JUMP)
// 004f6886: JNZ 0x004f6996
//   Label: LAB_004f6886
//   XREF to: 004f6996 (CONDITIONAL_JUMP)
// 004f688c: MOV EDX,0x3e882d5a
// 004f6891: MOV ECX,0xbe4d1e54
// 004f6896: MOV EBP,0x3d04bb36
// 004f689b: LEA EAX,[ESP + 0x1e0]
//   XREF to: Stack[-0xb4] (DATA)
// 004f68a2: MOV dword ptr [ESP + 0x1e0],EDX
//   XREF to: Stack[-0xb4] (WRITE)
// 004f68a9: MOV dword ptr [ESP + 0x1e4],ECX
//   XREF to: Stack[-0xb0] (WRITE)
// 004f68b0: LEA EDX,[ESP + 0x228]
//   XREF to: Stack[-0x6c] (DATA)
// 004f68b7: MOV dword ptr [ESP + 0x1e8],EBP
//   XREF to: Stack[-0xac] (WRITE)
// 004f68be: CMP EDX,EAX
// 004f68c0: JNZ 0x004f6977
//   XREF to: 004f6977 (CONDITIONAL_JUMP)
// 004f68c6: MOV EAX,0x3e0c27a6
//   Label: LAB_004f68c6
// 004f68cb: MOV EBP,0xbef6147b
// 004f68d0: LEA EDX,[ESP + 0x27c]
//   XREF to: Stack[-0x18] (DATA)
// 004f68d7: MOV dword ptr [ESP + 0x20c],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 004f68de: MOV dword ptr [ESP + 0x208],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 004f68e5: LEA EAX,[ESP + 0x204]
//   XREF to: Stack[-0x90] (DATA)
// 004f68ec: MOV dword ptr [ESP + 0x204],EBP
//   XREF to: Stack[-0x90] (WRITE)
// 004f68f3: CMP EDX,EAX
// 004f68f5: JZ 0x004f6911
//   XREF to: 004f6911 (CONDITIONAL_JUMP)
// 004f68f7: MOV dword ptr [ESP + 0x27c],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 004f68fe: MOV EBP,0x3e0c27a6
// 004f6903: MOV dword ptr [ESP + 0x280],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 004f690a: MOV dword ptr [ESP + 0x284],EBP
//   XREF to: Stack[-0x10] (WRITE)
// 004f6911: LEA EAX,[ESP + 0x27c]
//   Label: LAB_004f6911
//   XREF to: Stack[-0x18] (DATA)
// 004f6918: PUSH EAX
// 004f6919: LEA EAX,[ESP + 0x22c]
//   XREF to: Stack[-0x6c] (DATA)
// 004f6920: PUSH EAX
// 004f6921: LEA EAX,[ESP + 0xf8]
//   XREF to: Stack[-0x1a4] (DATA)
// 004f6928: PUSH EAX
// 004f6929: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 004f692e: MOV EAX,EDI
// 004f6930: SHL EAX,0x4
// 004f6933: ADD EAX,EDI
// 004f6935: MOV EDX,dword ptr [ESI + EAX*0x4 + 0x24ac]
// 004f693c: LEA EAX,[EDX*0x4 + 0x0]
// 004f6943: SUB EAX,EDX
// 004f6945: ADD ESI,0xfd8
// 004f694b: SHL EAX,0x4
// 004f694e: ADD ESP,0xc
// 004f6951: ADD ESI,EAX
// 004f6953: PUSH ESI
// 004f6954: LEA EAX,[ESP + 0xf4]
//   XREF to: Stack[-0x1a4] (DATA)
// 004f695b: PUSH EAX
// 004f695c: LEA ESI,[ESP + 0x68]
//   XREF to: Stack[-0x234] (DATA)
// 004f6960: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x294] (DATA)
// 004f6964: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 004f6969: MOV ECX,0xc
// 004f696e: LEA ESI,[ESP + 0x68]
//   XREF to: Stack[-0x234] (DATA)
// 004f6972: JMP 0x004f6696
//   XREF to: 004f6696 (UNCONDITIONAL_JUMP)
// 004f6977: MOV EAX,0x3e882d5a
//   Label: LAB_004f6977
// 004f697c: MOV dword ptr [ESP + 0x22c],ECX
//   XREF to: Stack[-0x68] (WRITE)
// 004f6983: MOV dword ptr [ESP + 0x230],EBP
//   XREF to: Stack[-0x64] (WRITE)
// 004f698a: MOV dword ptr [ESP + 0x228],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 004f6991: JMP 0x004f68c6
//   XREF to: 004f68c6 (UNCONDITIONAL_JUMP)
// 004f6996: PUSH EDI
//   Label: LAB_004f6996
// 004f6997: PUSH ESI
// 004f6998: LEA ESI,[ESP + 0x158]
//   XREF to: Stack[-0x144] (DATA)
// 004f699f: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x294] (DATA)
// 004f69a3: CALL core_charactr.cpp_CCharacter_FUN_0042d300
//   XREF to: 0042d300 (UNCONDITIONAL_CALL)
// 004f69a8: MOV ECX,0xc
// 004f69ad: LEA ESI,[ESP + 0x158]
//   XREF to: Stack[-0x144] (DATA)
// 004f69b4: JMP 0x004f6696
//   XREF to: 004f6696 (UNCONDITIONAL_JUMP)
