// Name: core_stranger.cpp_CStranger_FUN_005c4c20
// Address: 005c4c20
// Address Range: [[005c4c20, 005c516b]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c4c20()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc3a6 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00653d74 = 0.400000000000000
//   double DOUBLE_00653d7c = 1.5
//   double DOUBLE_00653d84 = 4
//   double DOUBLE_00653d8c = -1.5
//   undefined4 DAT_0066373c
//   undefined4 DAT_00663740
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.damage_listener_count
//   undefined4 g_CDemonSetInstance.damage_listeners
//   undefined4 DAT_03263318
//   undefined4 DAT_03f6bad0
//   undefined4 DAT_03f6bad4
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005c4c20(undefined4 param_1,
   undefined4 param_2, undefined4 param_3) */

void core_stranger_cpp_CStranger_FUN_005c4c20(void)

{
  float fVar1;
  CDemonActor *this_ptr;
  int iVar2;
  CVector3f *pCVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  int iVar5;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  int in_stack_0000000c;
  SCollisionInfo *in_stack_fffffef4;
  float local_f4;
  undefined1 auStack_d8 [12];
  undefined1 auStack_cc [8];
  CVector3f aCStack_c4 [2];
  undefined1 auStack_ac [8];
  float local_a4;
  undefined1 local_a0 [12];
  float local_94;
  float local_90;
  float local_8c;
  void *local_88;
  void *local_84;
  float local_80;
  undefined1 local_70 [12];
  undefined1 local_64 [8];
  float local_5c;
  CVector3f local_50;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_1c;
  
  fVar1 = in_stack_00000004[0x17a].orient_matrix.m[0].x;
  if ((fVar1 == 0.0) || (*(int *)((int)fVar1 + 0x2e0) != 0)) {
    in_stack_0000000c = 0;
  }
  iVar4 = 0;
  local_f4 = 0.0;
  if (in_stack_0000000c != 0) {
    iVar5 = 0;
    while (iVar4 < g_CDemonSetPtr->damage_listener_count) {
      this_ptr = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar5 + -4);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                (in_stack_00000004,(CVector3f *)(local_70 + 8),&(this_ptr->location).position);
      if ((((((float)DOUBLE_00653d7c < ABS((float)local_64._0_4_)) ||
            ((float)DOUBLE_00653d84 < ABS((float)local_64._4_4_))) || (local_5c < 0.0)) ||
          ((0x40c00000 < (int)local_5c || (this_ptr == in_stack_00000004)))) ||
         (iVar2 = (*this_ptr->vtable[1].hasCollision)(this_ptr,in_stack_fffffef4), iVar2 != 0)) {
LAB_005c4c95:
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 4;
      }
      else {
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)auStack_cc);
        iVar2 = (*this_ptr->vtable->hasCollision)(this_ptr,(SCollisionInfo *)(auStack_cc + 4));
        if ((iVar2 != 2) ||
           (aCStack_c4[0].y =
                 1.0 - ((local_30 - (float)local_a0._8_4_) + (float)DOUBLE_00653d8c) *
                       (float)DOUBLE_00653d74, aCStack_c4[0].y < (float)auStack_cc._4_4_))
        goto LAB_005c4c95;
        if (aCStack_c4[0].y < 0.0) {
          aCStack_c4[0].y = 0.0;
        }
        auStack_cc._4_4_ = aCStack_c4[0].y;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 4;
      }
    }
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
    aCStack_c4[0].x = 0.0;
    aCStack_c4[0].y = 0.0;
    fStack_40 = 3.5;
    fStack_3c = 1.5;
    aCStack_c4[0].z = 3.5;
    pCVar3 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (in_stack_00000004,(CVector3f *)(auStack_d8 + 8),aCStack_c4);
    if ((CVector3f *)(auStack_ac + 4) != pCVar3) {
      auStack_ac._4_4_ = pCVar3->x;
      local_a4 = pCVar3->y;
      local_a0._0_4_ = pCVar3->z;
    }
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                       ((CDeformableModelInstance *)(in_stack_00000004 + 1),(CVector3f *)auStack_d8,
                        DAT_03f6bad0);
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (in_stack_00000004,(CVector3f *)(local_a0 + 8),pCVar3);
    if ((CVector3f *)local_70 != pCVar3) {
      local_70._0_4_ = pCVar3->x;
      local_70._4_4_ = pCVar3->y;
      local_70._8_4_ = pCVar3->z;
    }
    local_88 = (void *)((float)local_70._0_4_ + (float)local_a0._0_4_);
    local_84 = (void *)((float)local_70._4_4_ + (float)local_a0._4_4_);
    local_80 = (float)local_70._8_4_ + (float)local_a0._8_4_;
    if ((void **)auStack_ac != &local_88) {
      auStack_ac._0_4_ = local_88;
      auStack_ac._4_4_ = local_84;
      local_a4 = local_80;
    }
    local_28 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                         (g_CDemonSetPtr,(CVector3f *)local_70,(CVector3f *)auStack_ac);
    local_f4 = local_28;
    if ((0.0 <= local_28) && (local_28 < 1.0)) {
      local_f4 = 1.0 - (local_28 * local_30 - local_2c) / (local_30 - local_2c);
    }
    pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                       ((CDeformableModelInstance *)(in_stack_00000004 + 1),
                        (CVector3f *)(local_64 + 4),DAT_03f6bad4);
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (in_stack_00000004,&local_50,pCVar3);
    if ((CVector3f *)local_64 != pCVar3) {
      local_64._0_4_ = pCVar3->x;
      local_64._4_4_ = pCVar3->y;
      local_5c = pCVar3->z;
    }
    fStack_40 = (float)local_64._0_4_ + local_94;
    fStack_3c = (float)local_64._4_4_ + local_90;
    local_38 = local_5c + local_8c;
    if ((float *)local_a0 != &fStack_40) {
      local_a0._0_4_ = fStack_40;
      local_a0._4_4_ = fStack_3c;
      local_a0._8_4_ = local_38;
    }
    local_1c = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                         (g_CDemonSetPtr,(CVector3f *)local_64,(CVector3f *)local_a0);
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  }
  if (1.0 < local_f4) {
    local_f4 = 1.0;
  }
  local_f4 = local_f4 - *(float *)(in_stack_00000004[0x17a].create_event + 0x24);
  if (0.0 <= local_f4) {
    if ((0.0 < local_f4) && (in_stack_00000008 / _DAT_0066373c < local_f4)) {
      local_f4 = in_stack_00000008 / _DAT_0066373c;
    }
  }
  else {
    fVar1 = -in_stack_00000008 * (1.0 / _DAT_00663740);
    if (local_f4 < fVar1) {
      local_f4 = fVar1;
    }
  }
  *(float *)(in_stack_00000004[0x17a].create_event + 0x24) =
       *(float *)(in_stack_00000004[0x17a].create_event + 0x24) + local_f4;
  return;
}


// Assembly code:
// 005c4c20: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c4c20
// 005c4c21: PUSH ESI
// 005c4c22: PUSH EDI
// 005c4c23: PUSH EBP
// 005c4c24: MOV EBP,ESP
// 005c4c26: SUB ESP,0xfc
// 005c4c2c: AND ESP,0xfffffff8
// 005c4c2f: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005c4c32: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c4c35: MOV ECX,dword ptr [EDX + 0x1fc2c]
// 005c4c3b: TEST ECX,ECX
// 005c4c3d: JNZ 0x005c4c9b
//   XREF to: 005c4c9b (CONDITIONAL_JUMP)
// 005c4c3f: XOR EAX,EAX
//   Label: LAB_005c4c3f
// 005c4c41: XOR ESI,ESI
//   Label: LAB_005c4c41
// 005c4c43: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0xf8] (WRITE)
// 005c4c47: TEST EAX,EAX
// 005c4c49: JZ 0x005c50a7
//   XREF to: 005c50a7 (CONDITIONAL_JUMP)
// 005c4c4f: XOR EDI,EDI
// 005c4c51: MOV EAX,[0x006810c8]
//   Label: LAB_005c4c51
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005c4c56: CMP ESI,dword ptr [EAX + 0x14f098]
//   XREF to: 03263310 (READ)
// 005c4c5c: JGE 0x005c4d62
//   XREF to: 005c4d62 (CONDITIONAL_JUMP)
// 005c4c62: MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14f09c]
//   XREF to: 03263314 (READ)
//   XREF to: 03263318 (READ)
// 005c4c69: LEA EAX,[EBX + 0x20]
// 005c4c6c: PUSH EAX
// 005c4c6d: LEA EAX,[ESP + 0xac]
//   XREF to: Stack[-0x68] (DATA)
// 005c4c74: PUSH EAX
// 005c4c75: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c4c78: PUSH EAX
// 005c4c79: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005c4c7e: ADD ESP,0xc
// 005c4c81: FLD float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x68] (READ)
// 005c4c88: FABS
// 005c4c8a: FCOMP double ptr [0x00653d7c]
//   XREF to: 00653d7c (READ)
// 005c4c90: FNSTSW AX
// 005c4c92: SAHF
// 005c4c93: JBE 0x005c4ca6
//   XREF to: 005c4ca6 (CONDITIONAL_JUMP)
// 005c4c95: INC ESI
//   Label: LAB_005c4c95
// 005c4c96: ADD EDI,0x4
// 005c4c99: JMP 0x005c4c51
//   XREF to: 005c4c51 (UNCONDITIONAL_JUMP)
// 005c4c9b: CMP dword ptr [ECX + 0x2e0],0x0
//   Label: LAB_005c4c9b
// 005c4ca2: JZ 0x005c4c41
//   XREF to: 005c4c41 (CONDITIONAL_JUMP)
// 005c4ca4: JMP 0x005c4c3f
//   XREF to: 005c4c3f (UNCONDITIONAL_JUMP)
// 005c4ca6: FLD float ptr [ESP + 0xac]
//   Label: LAB_005c4ca6
//   XREF to: Stack[-0x64] (READ)
// 005c4cad: FABS
// 005c4caf: FCOMP double ptr [0x00653d84]
//   XREF to: 00653d84 (READ)
// 005c4cb5: FNSTSW AX
// 005c4cb7: SAHF
// 005c4cb8: JA 0x005c4c95
//   XREF to: 005c4c95 (CONDITIONAL_JUMP)
// 005c4cba: FLDZ
// 005c4cbc: FCOMP float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x60] (READ)
// 005c4cc3: FNSTSW AX
// 005c4cc5: SAHF
// 005c4cc6: JA 0x005c4c95
//   XREF to: 005c4c95 (CONDITIONAL_JUMP)
// 005c4cc8: CMP dword ptr [ESP + 0xb0],0x40c00000
//   XREF to: Stack[-0x60] (READ)
// 005c4cd3: JG 0x005c4c95
//   XREF to: 005c4c95 (CONDITIONAL_JUMP)
// 005c4cd5: CMP EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c4cd8: JZ 0x005c4c95
//   XREF to: 005c4c95 (CONDITIONAL_JUMP)
// 005c4cda: PUSH EBX
// 005c4cdb: MOV EAX,dword ptr [EBX + 0x154]
// 005c4ce1: CALL dword ptr [EAX + 0x120]
// 005c4ce7: ADD ESP,0x4
// 005c4cea: TEST EAX,EAX
// 005c4cec: JNZ 0x005c4c95
//   XREF to: 005c4c95 (CONDITIONAL_JUMP)
// 005c4cee: LEA EAX,[ESP + 0x2c]
// 005c4cf2: PUSH EAX
// 005c4cf3: CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   XREF to: 005743c0 (UNCONDITIONAL_CALL)
// 005c4cf8: ADD ESP,0x4
// 005c4cfb: LEA EAX,[ESP + 0x2c]
// 005c4cff: PUSH EAX
// 005c4d00: MOV EDX,dword ptr [EBX + 0x154]
// 005c4d06: PUSH EBX
// 005c4d07: CALL dword ptr [EDX + 0x34]
// 005c4d0a: ADD ESP,0x8
// 005c4d0d: CMP EAX,0x2
// 005c4d10: JNZ 0x005c4c95
//   XREF to: 005c4c95 (CONDITIONAL_JUMP)
// 005c4d12: FLD float ptr [ESP + 0xb0]
// 005c4d19: FSUB float ptr [ESP + 0x48]
// 005c4d1d: FADD double ptr [0x00653d8c]
//   XREF to: 00653d8c (READ)
// 005c4d23: FMUL double ptr [0x00653d74]
//   XREF to: 00653d74 (READ)
// 005c4d29: FLD1
// 005c4d2b: FSUBRP
// 005c4d2d: FST float ptr [ESP + 0x20]
// 005c4d31: FCOMP float ptr [ESP + 0x18]
// 005c4d35: FNSTSW AX
// 005c4d37: SAHF
// 005c4d38: JC 0x005c4c95
//   XREF to: 005c4c95 (CONDITIONAL_JUMP)
// 005c4d3e: FLD float ptr [ESP + 0x20]
// 005c4d42: FLDZ
// 005c4d44: FCOMPP
// 005c4d46: FNSTSW AX
// 005c4d48: SAHF
// 005c4d49: JBE 0x005c4d51
//   XREF to: 005c4d51 (CONDITIONAL_JUMP)
// 005c4d4b: XOR EBX,EBX
// 005c4d4d: MOV dword ptr [ESP + 0x20],EBX
// 005c4d51: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_005c4d51
// 005c4d55: MOV dword ptr [ESP + 0x18],EAX
// 005c4d59: INC ESI
// 005c4d5a: ADD EDI,0x4
// 005c4d5d: JMP 0x005c4c51
//   XREF to: 005c4c51 (UNCONDITIONAL_JUMP)
// 005c4d62: PUSH EAX
//   Label: LAB_005c4d62
//   XREF to: 03114278 (DATA)
// 005c4d63: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005c4d68: ADD ESP,0x4
// 005c4d6b: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c4d6e: PUSH ECX
// 005c4d6f: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005c4d75: PUSH EBX
//   XREF to: 03114278 (DATA)
// 005c4d76: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005c4d7b: ADD ESP,0x8
// 005c4d7e: XOR EAX,EAX
// 005c4d80: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 005c4d84: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 005c4d88: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0xa4] (DATA)
// 005c4d8c: MOV ESI,0x40600000
// 005c4d91: PUSH EAX
// 005c4d92: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0xb0] (DATA)
// 005c4d96: MOV EDI,0x3fc00000
// 005c4d9b: PUSH EAX
// 005c4d9c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c4d9f: MOV dword ptr [ESP + 0xf8],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 005c4da6: PUSH EBX
// 005c4da7: MOV dword ptr [ESP + 0x100],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 005c4dae: MOV dword ptr [ESP + 0x80],ESI
//   XREF to: Stack[-0x9c] (WRITE)
// 005c4db5: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 005c4dba: MOV EDX,EAX
// 005c4dbc: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x8c] (DATA)
// 005c4dc3: ADD ESP,0xc
// 005c4dc6: CMP EAX,EDX
// 005c4dc8: JZ 0x005c4de7
//   XREF to: 005c4de7 (CONDITIONAL_JUMP)
// 005c4dca: MOV EAX,dword ptr [EDX]
// 005c4dcc: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 005c4dd3: MOV EAX,dword ptr [EDX + 0x4]
// 005c4dd6: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 005c4ddd: MOV EAX,dword ptr [EDX + 0x8]
// 005c4de0: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 005c4de7: MOV ESI,dword ptr [0x03f6bad0]
//   Label: LAB_005c4de7
//   XREF to: 03f6bad0 (READ)
// 005c4ded: PUSH ESI
// 005c4dee: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0xbc] (DATA)
// 005c4df2: PUSH EAX
// 005c4df3: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c4df6: ADD EAX,0x158
// 005c4dfb: PUSH EAX
// 005c4dfc: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005c4e01: ADD ESP,0xc
// 005c4e04: PUSH EAX
// 005c4e05: LEA EAX,[ESP + 0x94]
//   XREF to: Stack[-0x80] (DATA)
// 005c4e0c: PUSH EAX
// 005c4e0d: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c4e10: PUSH EDI
// 005c4e11: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005c4e16: MOV EDX,EAX
// 005c4e18: LEA EAX,[ESP + 0xc0]
//   XREF to: Stack[-0x5c] (DATA)
// 005c4e1f: ADD ESP,0xc
// 005c4e22: CMP EAX,EDX
// 005c4e24: JZ 0x005c4e43
//   XREF to: 005c4e43 (CONDITIONAL_JUMP)
// 005c4e26: MOV EAX,dword ptr [EDX]
// 005c4e28: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005c4e2f: MOV EAX,dword ptr [EDX + 0x4]
// 005c4e32: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005c4e39: MOV EAX,dword ptr [EDX + 0x8]
// 005c4e3c: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005c4e43: FLD float ptr [ESP + 0xb4]
//   Label: LAB_005c4e43
//   XREF to: Stack[-0x5c] (READ)
// 005c4e4a: FLD float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x58] (READ)
// 005c4e51: FLD float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x54] (READ)
// 005c4e58: LEA EAX,[ESP + 0x9c]
//   XREF to: Stack[-0x74] (DATA)
// 005c4e5f: LEA EDX,[ESP + 0x78]
//   XREF to: Stack[-0x98] (DATA)
// 005c4e63: FXCH ST2
// 005c4e65: FADD float ptr [ESP + 0x84]
//   XREF to: Stack[-0x8c] (READ)
// 005c4e6c: FXCH
// 005c4e6e: FADD float ptr [ESP + 0x88]
//   XREF to: Stack[-0x88] (READ)
// 005c4e75: FXCH ST2
// 005c4e77: FADD float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x84] (READ)
// 005c4e7e: FXCH ST2
// 005c4e80: FSTP float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x70] (WRITE)
// 005c4e87: FXCH
// 005c4e89: FSTP float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x6c] (WRITE)
// 005c4e90: FSTP float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x74] (WRITE)
// 005c4e97: CMP EDX,EAX
// 005c4e99: JZ 0x005c4ebf
//   XREF to: 005c4ebf (CONDITIONAL_JUMP)
// 005c4e9b: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x74] (DATA)
// 005c4ea2: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 005c4ea6: MOV EAX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x70] (READ)
// 005c4ead: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 005c4eb1: MOV EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x6c] (READ)
// 005c4eb8: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 005c4ebf: LEA EAX,[ESP + 0x78]
//   Label: LAB_005c4ebf
//   XREF to: Stack[-0x98] (DATA)
// 005c4ec3: PUSH EAX
// 005c4ec4: LEA EAX,[ESP + 0xb8]
//   XREF to: Stack[-0x5c] (DATA)
// 005c4ecb: PUSH EAX
// 005c4ecc: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005c4ed1: PUSH EAX
//   XREF to: 03114278 (DATA)
// 005c4ed2: CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   XREF to: 00572530 (UNCONDITIONAL_CALL)
// 005c4ed7: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005c4ede: FLD float ptr [ESP + 0x104]
//   XREF to: Stack[-0x18] (READ)
// 005c4ee5: ADD ESP,0xc
// 005c4ee8: FLDZ
// 005c4eea: FXCH
// 005c4eec: FST float ptr [ESP + 0x28]
//   XREF to: Stack[-0xe8] (WRITE)
// 005c4ef0: FSTP double ptr [ESP]
//   XREF to: Stack[-0x110] (DATA)
// 005c4ef3: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x110] (DATA)
// 005c4ef6: FNSTSW AX
// 005c4ef8: SAHF
// 005c4ef9: JA 0x005c4f3c
//   XREF to: 005c4f3c (CONDITIONAL_JUMP)
// 005c4efb: FLD1
// 005c4efd: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x110] (DATA)
// 005c4f00: FNSTSW AX
// 005c4f02: SAHF
// 005c4f03: JBE 0x005c4f3c
//   XREF to: 005c4f3c (CONDITIONAL_JUMP)
// 005c4f05: FLD float ptr [ESP + 0xf0]
//   XREF to: Stack[-0x20] (READ)
// 005c4f0c: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0xe8] (READ)
// 005c4f10: FMUL ST1
// 005c4f12: FLD float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x1c] (READ)
// 005c4f19: FXCH
// 005c4f1b: FSUB ST0,ST1
// 005c4f1d: FXCH ST2
// 005c4f1f: FSUBRP
// 005c4f21: FDIVP
// 005c4f23: FLD1
// 005c4f25: FSUBRP
// 005c4f27: FST float ptr [ESP + 0x28]
//   XREF to: Stack[-0xe8] (WRITE)
// 005c4f2b: FCOMP float ptr [ESP + 0x18]
//   XREF to: Stack[-0xf8] (READ)
// 005c4f2f: FNSTSW AX
// 005c4f31: SAHF
// 005c4f32: JBE 0x005c4f3c
//   XREF to: 005c4f3c (CONDITIONAL_JUMP)
// 005c4f34: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0xe8] (READ)
// 005c4f38: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 005c4f3c: MOV EDX,dword ptr [0x03f6bad4]
//   Label: LAB_005c4f3c
//   XREF to: 03f6bad4 (READ)
// 005c4f42: PUSH EDX
// 005c4f43: LEA EAX,[ESP + 0xc4]
//   XREF to: Stack[-0x50] (DATA)
// 005c4f4a: PUSH EAX
// 005c4f4b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c4f4e: ADD EAX,0x158
// 005c4f53: PUSH EAX
// 005c4f54: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005c4f59: ADD ESP,0xc
// 005c4f5c: PUSH EAX
// 005c4f5d: LEA EAX,[ESP + 0xd0]
//   XREF to: Stack[-0x44] (DATA)
// 005c4f64: PUSH EAX
// 005c4f65: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c4f68: PUSH ECX
// 005c4f69: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005c4f6e: MOV EDX,EAX
// 005c4f70: LEA EAX,[ESP + 0xc0]
//   XREF to: Stack[-0x5c] (DATA)
// 005c4f77: ADD ESP,0xc
// 005c4f7a: CMP EAX,EDX
// 005c4f7c: JZ 0x005c4f9b
//   XREF to: 005c4f9b (CONDITIONAL_JUMP)
// 005c4f7e: MOV EAX,dword ptr [EDX]
// 005c4f80: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005c4f87: MOV EAX,dword ptr [EDX + 0x4]
// 005c4f8a: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005c4f91: MOV EAX,dword ptr [EDX + 0x8]
// 005c4f94: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005c4f9b: FLD float ptr [ESP + 0xb4]
//   Label: LAB_005c4f9b
//   XREF to: Stack[-0x5c] (READ)
// 005c4fa2: FLD float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x58] (READ)
// 005c4fa9: FLD float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x54] (READ)
// 005c4fb0: LEA EAX,[ESP + 0xd8]
//   XREF to: Stack[-0x38] (DATA)
// 005c4fb7: LEA EDX,[ESP + 0x78]
//   XREF to: Stack[-0x98] (DATA)
// 005c4fbb: FXCH ST2
// 005c4fbd: FADD float ptr [ESP + 0x84]
//   XREF to: Stack[-0x8c] (READ)
// 005c4fc4: FXCH
// 005c4fc6: FADD float ptr [ESP + 0x88]
//   XREF to: Stack[-0x88] (READ)
// 005c4fcd: FXCH ST2
// 005c4fcf: FADD float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x84] (READ)
// 005c4fd6: FXCH ST2
// 005c4fd8: FSTP float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x34] (WRITE)
// 005c4fdf: FXCH
// 005c4fe1: FSTP float ptr [ESP + 0xe0]
//   XREF to: Stack[-0x30] (WRITE)
// 005c4fe8: FSTP float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x38] (WRITE)
// 005c4fef: CMP EDX,EAX
// 005c4ff1: JZ 0x005c5017
//   XREF to: 005c5017 (CONDITIONAL_JUMP)
// 005c4ff3: MOV EAX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x38] (DATA)
// 005c4ffa: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 005c4ffe: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x34] (READ)
// 005c5005: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 005c5009: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x30] (READ)
// 005c5010: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 005c5017: LEA EAX,[ESP + 0x78]
//   Label: LAB_005c5017
//   XREF to: Stack[-0x98] (DATA)
// 005c501b: PUSH EAX
// 005c501c: LEA EAX,[ESP + 0xb8]
//   XREF to: Stack[-0x5c] (DATA)
// 005c5023: PUSH EAX
// 005c5024: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005c502a: PUSH EBX
//   XREF to: 03114278 (DATA)
// 005c502b: CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   XREF to: 00572530 (UNCONDITIONAL_CALL)
// 005c5030: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005c5037: FLD float ptr [ESP + 0x104]
//   XREF to: Stack[-0x18] (READ)
// 005c503e: ADD ESP,0xc
// 005c5041: FLDZ
// 005c5043: FXCH
// 005c5045: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0xec] (WRITE)
// 005c5049: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x100] (WRITE)
// 005c504d: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x100] (READ)
// 005c5051: FNSTSW AX
// 005c5053: SAHF
// 005c5054: JA 0x005c5098
//   XREF to: 005c5098 (CONDITIONAL_JUMP)
// 005c5056: FLD1
// 005c5058: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x100] (READ)
// 005c505c: FNSTSW AX
// 005c505e: SAHF
// 005c505f: JBE 0x005c5098
//   XREF to: 005c5098 (CONDITIONAL_JUMP)
// 005c5061: FLD float ptr [ESP + 0xf0]
//   XREF to: Stack[-0x20] (READ)
// 005c5068: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0xec] (READ)
// 005c506c: FMUL ST1
// 005c506e: FLD float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x1c] (READ)
// 005c5075: FXCH
// 005c5077: FSUB ST0,ST1
// 005c5079: FXCH ST2
// 005c507b: FSUBRP
// 005c507d: FDIVP
// 005c507f: FLD1
// 005c5081: FSUBRP
// 005c5083: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0xec] (WRITE)
// 005c5087: FCOMP float ptr [ESP + 0x18]
//   XREF to: Stack[-0xf8] (READ)
// 005c508b: FNSTSW AX
// 005c508d: SAHF
// 005c508e: JBE 0x005c5098
//   XREF to: 005c5098 (CONDITIONAL_JUMP)
// 005c5090: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0xec] (READ)
// 005c5094: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 005c5098: MOV ESI,dword ptr [0x006810c8]
//   Label: LAB_005c5098
//   XREF to: 006810c8 (READ)
// 005c509e: PUSH ESI
//   XREF to: 03114278 (DATA)
// 005c509f: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005c50a4: ADD ESP,0x4
// 005c50a7: FLD float ptr [ESP + 0x18]
//   Label: LAB_005c50a7
//   XREF to: Stack[-0xf8] (READ)
// 005c50ab: FLD1
// 005c50ad: FCOMPP
// 005c50af: FNSTSW AX
// 005c50b1: SAHF
// 005c50b2: JNC 0x005c50bc
//   XREF to: 005c50bc (CONDITIONAL_JUMP)
// 005c50b4: MOV dword ptr [ESP + 0x18],0x3f800000
//   XREF to: Stack[-0xf8] (WRITE)
// 005c50bc: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005c50bc
//   XREF to: Stack[0x4] (READ)
// 005c50bf: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0xf8] (READ)
// 005c50c3: FSUB float ptr [EAX + 0x1fc8c]
// 005c50c9: FLDZ
// 005c50cb: FXCH
// 005c50cd: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xf4] (WRITE)
// 005c50d1: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x108] (WRITE)
// 005c50d5: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x108] (READ)
// 005c50d9: FNSTSW AX
// 005c50db: SAHF
// 005c50dc: JBE 0x005c513b
//   XREF to: 005c513b (CONDITIONAL_JUMP)
// 005c50de: FLD1
// 005c50e0: FDIV float ptr [0x00663740]
//   XREF to: 00663740 (READ)
// 005c50e6: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005c50e9: FCHS
// 005c50eb: FXCH
// 005c50ed: FSTP float ptr [ESP + 0xe4]
//   XREF to: Stack[-0x2c] (WRITE)
// 005c50f4: FMUL float ptr [ESP + 0xe4]
//   XREF to: Stack[-0x2c] (READ)
// 005c50fb: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xf4] (READ)
// 005c50ff: FXCH
// 005c5101: FSTP float ptr [ESP + 0xec]
//   XREF to: Stack[-0x24] (WRITE)
// 005c5108: FCOMP float ptr [ESP + 0xec]
//   XREF to: Stack[-0x24] (READ)
// 005c510f: FNSTSW AX
// 005c5111: SAHF
// 005c5112: JC 0x005c512e
//   XREF to: 005c512e (CONDITIONAL_JUMP)
// 005c5114: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005c5114
//   XREF to: Stack[0x4] (READ)
// 005c5117: FLD float ptr [EAX + 0x1fc8c]
// 005c511d: FADD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xf4] (READ)
// 005c5121: FSTP float ptr [EAX + 0x1fc8c]
// 005c5127: MOV ESP,EBP
// 005c5129: POP EBP
// 005c512a: POP EDI
// 005c512b: POP ESI
// 005c512c: POP EBX
// 005c512d: RET
// 005c512e: MOV EAX,dword ptr [ESP + 0xec]
//   Label: LAB_005c512e
//   XREF to: Stack[-0x24] (READ)
// 005c5135: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 005c5139: JMP 0x005c5114
//   XREF to: 005c5114 (UNCONDITIONAL_JUMP)
// 005c513b: JNC 0x005c5114
//   Label: LAB_005c513b
//   XREF to: 005c5114 (CONDITIONAL_JUMP)
// 005c513d: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005c5140: FDIV float ptr [0x0066373c]
//   XREF to: 0066373c (READ)
// 005c5146: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xf4] (READ)
// 005c514a: FXCH
// 005c514c: FSTP float ptr [ESP + 0xe8]
//   XREF to: Stack[-0x28] (WRITE)
// 005c5153: FCOMP float ptr [ESP + 0xe8]
//   XREF to: Stack[-0x28] (READ)
// 005c515a: FNSTSW AX
// 005c515c: SAHF
// 005c515d: JBE 0x005c5114
//   XREF to: 005c5114 (CONDITIONAL_JUMP)
// 005c515f: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[-0x28] (READ)
// 005c5166: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 005c516a: JMP 0x005c5114
//   XREF to: 005c5114 (UNCONDITIONAL_JUMP)
