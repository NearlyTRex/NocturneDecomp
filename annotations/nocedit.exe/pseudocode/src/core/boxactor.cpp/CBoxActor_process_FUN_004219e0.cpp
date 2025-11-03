// Name: core_boxactor.cpp_CBoxActor_process_FUN_004219e0
// Address: 004219e0
// Address Range: [[004219e0, 00421c06] [00421c4a, 00421dfd]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_CBoxActor_process_FUN_004219e0()
// Cross-references:
//   core_boxactor.cpp_FUN_00422a50 (00422a50) at 00422a67 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00616643 = 0.1047198
//   float FLOAT_00616647 = 0.5
//   double DOUBLE_0061664f = 3
//   float FLOAT_00616657 = 0.2000000
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CSound* g_CSoundPtr = 03f6af64
//   CDemonSet g_CDemonSetInstance
//   CSound g_CSoundInstance
// Function calls:
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_box.cpp_CBox_process_FUN_0041e2f0
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
//   core_sound.cpp_FUN_005b3b80
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30

#include "nocturne.h"

/* Signature: undefined1 actors_other_boxactor.cpp_FUN_004219e0(undefined4 param_1, undefined4
   param_2) */

void core_boxactor_cpp_CBoxActor_process_FUN_004219e0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  CKeyFramedModel *pCVar6;
  undefined4 extraout_EAX;
  float fVar7;
  int iVar8;
  CBoundingBox3D *pCVar9;
  CVector3f *pCVar10;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  float10 in_ST0;
  float10 fVar11;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  undefined1 local_84 [56];
  CDemonActor *pCStack_4c;
  CDemonActor *pCStack_48;
  float fStack_38;
  float local_34;
  float local_30;
  float local_2c;
  CVector3f local_28;
  float local_1c;
  int local_18;
  int local_14;
  
  pCVar6 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  iVar8 = pCVar6->frame_count;
  in_stack_00000004[2].runtime_state =
       (int)(in_stack_00000004[2].orient_matrix.m[2].z + (float)in_stack_00000004[2].runtime_state);
  crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar11 = (float10)(double)CONCAT44(extraout_EDX,extraout_EAX);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
  local_18 = (int)ROUND(fVar11);
  local_1c = (float)in_stack_00000004[2].runtime_state - (float)local_18;
  if (local_18 < 0) {
    local_18 = iVar8 - -local_18 % iVar8;
  }
  else {
    local_18 = local_18 % iVar8;
  }
  local_14 = local_18;
  in_stack_00000004[2].runtime_state = (int)((float)local_18 + local_1c);
  if ((float)iVar8 <= (float)in_stack_00000004[2].runtime_state) {
    in_stack_00000004[2].runtime_state = 0;
  }
  local_30 = in_stack_00000004[2].orient_matrix.m[1].z * in_stack_00000008;
  local_2c = in_stack_00000004[2].orient_matrix.m[2].x * in_stack_00000008;
  local_84._0_4_ = local_30 * FLOAT_00616643;
  local_28.x = in_stack_00000004[2].orient_matrix.m[2].y * in_stack_00000008;
  local_84._4_4_ = local_2c * FLOAT_00616643;
  local_84._8_4_ = local_28.x * FLOAT_00616643;
  (in_stack_00000004->orient).pitch = (in_stack_00000004->orient).pitch + (float)local_84._0_4_;
  (in_stack_00000004->orient).bank = (in_stack_00000004->orient).bank + (float)local_84._4_4_;
  (in_stack_00000004->orient).heading = (in_stack_00000004->orient).heading + (float)local_84._8_4_;
  fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((in_stack_00000004->orient).pitch);
  (in_stack_00000004->orient).pitch = fVar7;
  fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((in_stack_00000004->orient).heading);
  (in_stack_00000004->orient).heading = fVar7;
  fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((in_stack_00000004->orient).bank);
  cVar5 = *(char *)&in_stack_00000004[2].location.position.y;
  (in_stack_00000004->orient).bank = fVar7;
  if (cVar5 != '\0') {
    iVar8 = core_sound_cpp_FUN_005b3b80();
    if (iVar8 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      in_stack_00000008 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      sound_sndmain_cpp_FUN_005a8be0();
      fVar7 = (float)(*in_stack_00000004->vtable->playSound)
                               (in_stack_00000004,(char *)&in_stack_00000004[2].location.position.y)
      ;
      in_stack_00000004[2].orient_matrix.m[1].y = fVar7;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
  }
  if ((in_stack_00000004[2].field6_0x68 == 0) && (0.0 < in_stack_00000004[2].field12_0xe0.x)) {
    fStack_38 = (in_stack_00000004->location).position.x;
    local_34 = (in_stack_00000004->location).position.y;
    local_30 = (in_stack_00000004->location).position.z;
    core_box_cpp_CBox_process_FUN_0041e2f0
              ((CBox *)&in_stack_00000004[2].field12_0xe0.y,in_stack_00000008);
    pfVar1 = &in_stack_00000004[2].field13_0xec.y;
    if (&in_stack_00000004->orient != (COrientation *)pfVar1) {
      (in_stack_00000004->orient).pitch = *pfVar1;
      (in_stack_00000004->orient).bank = in_stack_00000004[2].field13_0xec.z;
      (in_stack_00000004->orient).heading = (float)in_stack_00000004[2].field14_0xf8;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
    pCVar9 = (*in_stack_00000004->vtable->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)(local_84 + 0x24));
    local_28.x = -(((pCVar9->min).x + (pCVar9->max).x) * FLOAT_00616647);
    local_28.y = -(((pCVar9->min).y + (pCVar9->max).y) * FLOAT_00616647);
    local_28.z = -(((pCVar9->min).z + (pCVar9->max).z) * FLOAT_00616647);
    pCVar10 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        (in_stack_00000004,(CVector3f *)&stack0x00000014,&local_28);
    fVar7 = in_stack_00000004[2].field12_0xe0.z;
    fVar2 = pCVar10->y;
    fVar3 = in_stack_00000004[2].field13_0xec.x;
    fVar4 = pCVar10->z;
    (in_stack_00000004->location).position.x = in_stack_00000004[2].field12_0xe0.y + pCVar10->x;
    (in_stack_00000004->location).position.y = fVar7 + fVar2;
    (in_stack_00000004->location).position.z = fVar3 + fVar4;
    fVar7 = in_stack_00000004[2].previous_transform_state.position.x;
    fVar2 = in_stack_00000004[2].previous_transform_state.position.y;
    if ((float)DOUBLE_0061664f <
        SQRT(fVar2 * fVar2 +
             (float)in_stack_00000004[2].field23_0x124 * (float)in_stack_00000004[2].field23_0x124 +
             fVar7 * fVar7)) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)local_84);
      local_84._8_4_ = (float)local_84._0_4_ * in_stack_00000004[2].field12_0xe0.x * FLOAT_00616657;
      pCStack_4c = in_stack_00000004;
      pCStack_48 = in_stack_00000004;
      core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
                (g_CDemonSetPtr,(SDamageInfo *)&local_14,&(in_stack_00000004->location).position,
                 local_84 + 4);
      return;
    }
  }
  return;
}


// Assembly code:
// 004219e0: PUSH EBX
//   Label: core_boxactor.cpp_CBoxActor_process_FUN_004219e0
// 004219e1: PUSH ESI
// 004219e2: PUSH EDI
// 004219e3: PUSH EBP
// 004219e4: MOV EBP,ESP
// 004219e6: SUB ESP,0xd0
// 004219ec: AND ESP,0xfffffff8
// 004219ef: MOV EBX,dword ptr [EBP + 0x14]
// 004219f2: LEA EAX,[EBX + 0x158]
// 004219f8: PUSH EAX
// 004219f9: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004219fe: FLD float ptr [EBX + 0x30c]
// 00421a04: ADD ESP,0x4
// 00421a07: MOV ESI,dword ptr [EAX + 0x100]
// 00421a0d: FADD float ptr [EBX + 0x310]
// 00421a13: SUB ESP,0x8
// 00421a16: FST float ptr [EBX + 0x310]
// 00421a1c: FSTP double ptr [ESP]
// 00421a1f: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 00421a24: MOV dword ptr [ESP + 0xc0],EAX
// 00421a2b: MOV dword ptr [ESP + 0xc4],EDX
// 00421a32: FLD double ptr [ESP + 0xc0]
// 00421a39: ADD ESP,0x8
// 00421a3c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00421a41: FISTP dword ptr [ESP + 0xc4]
// 00421a48: MOV EAX,dword ptr [ESP + 0xc4]
// 00421a4f: MOV dword ptr [ESP + 0xc8],EAX
// 00421a56: FILD dword ptr [ESP + 0xc8]
// 00421a5d: FSUBR float ptr [EBX + 0x310]
// 00421a63: MOV EDI,ESI
// 00421a65: FSTP float ptr [ESP + 0xc0]
// 00421a6c: TEST EAX,EAX
// 00421a6e: JL 0x00421bdd
//   XREF to: 00421bdd (CONDITIONAL_JUMP)
// 00421a74: MOV EDX,EAX
// 00421a76: SAR EDX,0x1f
// 00421a79: IDIV ESI
// 00421a7b: MOV dword ptr [ESP + 0xc4],EDX
// 00421a82: MOV EAX,dword ptr [ESP + 0xc4]
//   Label: LAB_00421a82
// 00421a89: MOV dword ptr [ESP + 0xc8],EAX
// 00421a90: MOV dword ptr [ESP + 0xcc],EDI
// 00421a97: FILD dword ptr [ESP + 0xc8]
// 00421a9e: FADD float ptr [ESP + 0xc0]
// 00421aa5: FILD dword ptr [ESP + 0xcc]
// 00421aac: FXCH
// 00421aae: FSTP float ptr [EBX + 0x310]
// 00421ab4: FCOMP float ptr [EBX + 0x310]
// 00421aba: FNSTSW AX
// 00421abc: SAHF
// 00421abd: JA 0x00421ac9
//   XREF to: 00421ac9 (CONDITIONAL_JUMP)
// 00421abf: MOV dword ptr [EBX + 0x310],0x0
// 00421ac9: LEA EAX,[EBX + 0x300]
//   Label: LAB_00421ac9
// 00421acf: FLD float ptr [EBP + 0x18]
// 00421ad2: FLD float ptr [EAX]
// 00421ad4: FMUL ST1
// 00421ad6: FSTP float ptr [ESP + 0xac]
// 00421add: FLD float ptr [EAX + 0x4]
// 00421ae0: FMUL ST1
// 00421ae2: FLD float ptr [0x00616643]
//   XREF to: 00616643 (READ)
// 00421ae8: FLD float ptr [ESP + 0xac]
// 00421aef: FMUL ST1
// 00421af1: FXCH ST2
// 00421af3: FSTP float ptr [ESP + 0xb0]
// 00421afa: FLD float ptr [EAX + 0x8]
// 00421afd: FMULP ST3
// 00421aff: FLD float ptr [ESP + 0xb0]
// 00421b06: FMUL ST1
// 00421b08: FXCH ST3
// 00421b0a: FST float ptr [ESP + 0xb4]
// 00421b11: FMULP
// 00421b13: FXCH
// 00421b15: FSTP float ptr [ESP + 0x58]
// 00421b19: LEA EAX,[EBX + 0x30]
// 00421b1c: FXCH
// 00421b1e: FSTP float ptr [ESP + 0x5c]
// 00421b22: FSTP float ptr [ESP + 0x60]
// 00421b26: FLD float ptr [EAX]
// 00421b28: FADD float ptr [ESP + 0x58]
// 00421b2c: FLD float ptr [EAX + 0x4]
// 00421b2f: FXCH
// 00421b31: FSTP float ptr [EAX]
// 00421b33: FADD float ptr [ESP + 0x5c]
// 00421b37: FLD float ptr [EAX + 0x8]
// 00421b3a: FXCH
// 00421b3c: FSTP float ptr [EAX + 0x4]
// 00421b3f: FADD float ptr [ESP + 0x60]
// 00421b43: FSTP float ptr [EAX + 0x8]
// 00421b46: PUSH dword ptr [EBX + 0x30]
// 00421b49: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00421b4e: MOV dword ptr [ESP + 0xd0],EAX
// 00421b55: FLD float ptr [ESP + 0xd0]
// 00421b5c: ADD ESP,0x4
// 00421b5f: PUSH dword ptr [EBX + 0x38]
// 00421b62: FSTP float ptr [EBX + 0x30]
// 00421b65: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00421b6a: MOV dword ptr [ESP + 0xd0],EAX
// 00421b71: FLD float ptr [ESP + 0xd0]
// 00421b78: ADD ESP,0x4
// 00421b7b: PUSH dword ptr [EBX + 0x34]
// 00421b7e: FSTP float ptr [EBX + 0x38]
// 00421b81: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00421b86: MOV dword ptr [ESP + 0xd0],EAX
// 00421b8d: FLD float ptr [ESP + 0xd0]
// 00421b94: MOV AH,byte ptr [EBX + 0x2d4]
// 00421b9a: FSTP float ptr [EBX + 0x34]
// 00421b9d: ADD ESP,0x4
// 00421ba0: TEST AH,AH
// 00421ba2: JZ 0x00421bbe
//   XREF to: 00421bbe (CONDITIONAL_JUMP)
// 00421ba4: MOV ECX,dword ptr [EBX + 0x2fc]
// 00421baa: PUSH ECX
// 00421bab: MOV ESI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 00421bb1: PUSH ESI
//   XREF to: 03f6af64 (DATA)
// 00421bb2: CALL core_sound.cpp_FUN_005b3b80
//   XREF to: 005b3b80 (UNCONDITIONAL_CALL)
// 00421bb7: ADD ESP,0x8
// 00421bba: TEST EAX,EAX
// 00421bbc: JZ 0x00421bf4
//   XREF to: 00421bf4 (CONDITIONAL_JUMP)
// 00421bbe: CMP dword ptr [EBX + 0x318],0x0
//   Label: LAB_00421bbe
// 00421bc5: JNZ 0x00421bd6
//   XREF to: 00421bd6 (CONDITIONAL_JUMP)
// 00421bc7: FLD float ptr [EBX + 0x390]
// 00421bcd: FLDZ
// 00421bcf: FCOMPP
// 00421bd1: FNSTSW AX
// 00421bd3: SAHF
// 00421bd4: JC 0x00421c4a
//   XREF to: 00421c4a (CONDITIONAL_JUMP)
// 00421bd6: MOV ESP,EBP
//   Label: LAB_00421bd6
// 00421bd8: POP EBP
// 00421bd9: POP EDI
// 00421bda: POP ESI
// 00421bdb: POP EBX
// 00421bdc: RET
// 00421bdd: NEG EAX
//   Label: LAB_00421bdd
// 00421bdf: MOV EDX,EAX
// 00421be1: SAR EDX,0x1f
// 00421be4: IDIV ESI
// 00421be6: SUB ESI,EDX
// 00421be8: MOV dword ptr [ESP + 0xc4],ESI
// 00421bef: JMP 0x00421a82
//   XREF to: 00421a82 (UNCONDITIONAL_JUMP)
// 00421bf4: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   Label: LAB_00421bf4
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 00421bf9: PUSH 0x2
// 00421bfb: PUSH 0x3f800000
// 00421c00: PUSH 0x0
// 00421c02: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00421c4a: LEA EDX,[EBX + 0x20]
//   Label: LAB_00421c4a
// 00421c4d: MOV EAX,dword ptr [EDX]
// 00421c4f: MOV dword ptr [ESP + 0x70],EAX
// 00421c53: LEA EAX,[EDX + 0x4]
// 00421c56: MOV EAX,dword ptr [EAX]
// 00421c58: MOV dword ptr [ESP + 0x74],EAX
// 00421c5c: LEA EAX,[EDX + 0x8]
// 00421c5f: MOV EAX,dword ptr [EAX]
// 00421c61: MOV dword ptr [ESP + 0x78],EAX
// 00421c65: LEA EAX,[EBX + 0x394]
// 00421c6b: PUSH dword ptr [EBP + 0x18]
// 00421c6e: PUSH EAX
// 00421c6f: CALL core_box.cpp_CBox_process_FUN_0041e2f0
//   XREF to: 0041e2f0 (UNCONDITIONAL_CALL)
// 00421c74: LEA EDX,[EBX + 0x30]
// 00421c77: LEA EAX,[EBX + 0x3a0]
// 00421c7d: ADD ESP,0x8
// 00421c80: CMP EDX,EAX
// 00421c82: JZ 0x00421c94
//   XREF to: 00421c94 (CONDITIONAL_JUMP)
// 00421c84: MOV ECX,dword ptr [EAX]
// 00421c86: MOV dword ptr [EDX],ECX
// 00421c88: MOV ECX,dword ptr [EAX + 0x4]
// 00421c8b: MOV dword ptr [EDX + 0x4],ECX
// 00421c8e: MOV ECX,dword ptr [EAX + 0x8]
// 00421c91: MOV dword ptr [EDX + 0x8],ECX
// 00421c94: PUSH EBX
//   Label: LAB_00421c94
// 00421c95: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 00421c9a: ADD ESP,0x4
// 00421c9d: LEA EDX,[ESP + 0x40]
// 00421ca1: PUSH EDX
// 00421ca2: MOV EAX,dword ptr [EBX + 0x154]
// 00421ca8: PUSH EBX
// 00421ca9: CALL dword ptr [EAX + 0x14]
// 00421cac: LEA EDX,[EAX + 0xc]
// 00421caf: FLD float ptr [EAX]
// 00421cb1: FADD float ptr [EDX]
// 00421cb3: ADD ESP,0x8
// 00421cb6: FST float ptr [ESP + 0x94]
// 00421cbd: FLD float ptr [EAX + 0x4]
// 00421cc0: FADD float ptr [EDX + 0x4]
// 00421cc3: FXCH
// 00421cc5: FLD float ptr [0x00616647]
//   XREF to: 00616647 (READ)
// 00421ccb: FXCH
// 00421ccd: FMUL ST1
// 00421ccf: FXCH ST2
// 00421cd1: FST float ptr [ESP + 0x98]
// 00421cd8: FLD float ptr [EAX + 0x8]
// 00421cdb: FADD float ptr [EDX + 0x8]
// 00421cde: FXCH
// 00421ce0: FMUL ST2
// 00421ce2: FXCH
// 00421ce4: FST float ptr [ESP + 0x9c]
// 00421ceb: FMULP ST2
// 00421ced: LEA EAX,[ESP + 0x64]
// 00421cf1: FXCH ST2
// 00421cf3: FSTP float ptr [ESP + 0x7c]
// 00421cf7: FXCH
// 00421cf9: FSTP float ptr [ESP + 0x80]
// 00421d00: PUSH EAX
// 00421d01: FLD float ptr [ESP + 0x80]
// 00421d08: FLD float ptr [ESP + 0x84]
// 00421d0f: LEA EAX,[ESP + 0xa4]
// 00421d16: FXCH
// 00421d18: FCHS
// 00421d1a: FXCH
// 00421d1c: FCHS
// 00421d1e: FXCH
// 00421d20: FSTP float ptr [ESP + 0x68]
// 00421d24: FSTP float ptr [ESP + 0x6c]
// 00421d28: PUSH EAX
// 00421d29: FST float ptr [ESP + 0x8c]
// 00421d30: PUSH EBX
// 00421d31: FCHS
// 00421d33: FSTP float ptr [ESP + 0x78]
// 00421d37: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 00421d3c: LEA EDX,[EBX + 0x394]
// 00421d42: FLD float ptr [EDX]
// 00421d44: FADD float ptr [EAX]
// 00421d46: ADD ESP,0xc
// 00421d49: FSTP float ptr [ESP + 0x88]
// 00421d50: FLD float ptr [EDX + 0x4]
// 00421d53: FADD float ptr [EAX + 0x4]
// 00421d56: LEA ESI,[EBX + 0x20]
// 00421d59: FSTP float ptr [ESP + 0x8c]
// 00421d60: FLD float ptr [EDX + 0x8]
// 00421d63: FADD float ptr [EAX + 0x8]
// 00421d66: MOV EAX,dword ptr [ESP + 0x88]
// 00421d6d: FSTP float ptr [ESP + 0x90]
// 00421d74: MOV dword ptr [ESI],EAX
// 00421d76: MOV EAX,dword ptr [ESP + 0x8c]
// 00421d7d: MOV dword ptr [ESI + 0x4],EAX
// 00421d80: MOV EAX,dword ptr [ESP + 0x90]
// 00421d87: MOV dword ptr [ESI + 0x8],EAX
// 00421d8a: LEA EAX,[EBX + 0x3d4]
// 00421d90: FLD float ptr [EAX + 0x4]
// 00421d93: FMUL ST0
// 00421d95: FLD float ptr [EAX]
// 00421d97: FMUL ST0
// 00421d99: FADDP
// 00421d9b: FLD float ptr [EAX + 0x8]
// 00421d9e: FMUL ST0
// 00421da0: FADDP
// 00421da2: FSQRT
// 00421da4: FST float ptr [ESP]
// 00421da7: FCOMP double ptr [0x0061664f]
//   XREF to: 0061664f (READ)
// 00421dad: FNSTSW AX
// 00421daf: SAHF
// 00421db0: JBE 0x00421bd6
//   XREF to: 00421bd6 (CONDITIONAL_JUMP)
// 00421db6: LEA EAX,[ESP + 0x4]
// 00421dba: PUSH EAX
// 00421dbb: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 00421dc0: ADD ESP,0x4
// 00421dc3: LEA EAX,[ESP + 0x4]
// 00421dc7: FLD float ptr [ESP]
// 00421dca: FMUL float ptr [EBX + 0x390]
// 00421dd0: PUSH EAX
// 00421dd1: FMUL float ptr [0x00616657]
//   XREF to: 00616657 (READ)
// 00421dd7: PUSH ESI
// 00421dd8: LEA EAX,[ESP + 0x78]
// 00421ddc: MOV dword ptr [ESP + 0x40],EBX
// 00421de0: PUSH EAX
// 00421de1: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 00421de6: MOV dword ptr [ESP + 0x48],EBX
// 00421dea: PUSH EAX
//   XREF to: 03114278 (DATA)
// 00421deb: FSTP float ptr [ESP + 0x18]
// 00421def: CALL core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
//   XREF to: 005742b0 (UNCONDITIONAL_CALL)
// 00421df4: ADD ESP,0x10
// 00421df7: MOV ESP,EBP
// 00421df9: POP EBP
// 00421dfa: POP EDI
// 00421dfb: POP ESI
// 00421dfc: POP EBX
// 00421dfd: RET
