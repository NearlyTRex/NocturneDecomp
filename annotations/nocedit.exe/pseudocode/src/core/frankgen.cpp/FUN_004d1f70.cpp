// Name: core_frankgen.cpp_FUN_004d1f70
// Address: 004d1f70
// Address Range: [[004d1f70, 004d20e4]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_FUN_004d1f70()
// Globals:
//   float FLOAT_0062ab09 = -2000
//   double DOUBLE_0062ab0d = 3
//   float FLOAT_0062ab15 = 0.005000000
//   double DOUBLE_0062ab1d = 200
//   float FLOAT_0062ab25 = 100
//   float FLOAT_0062ab29 = 200
//   float FLOAT_0062ab2d = 99
//   float FLOAT_0062ab31 = -1800
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   core_frankgen.cpp_CFrankenstienMachine_findLeader_FUN_004d2330
//   core_frankgen.cpp_LoadModel_FUN_004d2190
//   crt_math.c_floor_FUN_005feb90

#include "nocturne.h"

/* Signature: undefined1 actors_other_frankgen.cpp_FUN_004d1f70(undefined4 param_1) */

int core_frankgen_cpp_FUN_004d1f70(void)

{
  int iVar1;
  int iVar2;
  CBoundingBox3D *this_ptr;
  undefined4 extraout_EAX;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  float10 in_ST0;
  float10 fVar3;
  CDemonActor *in_stack_00000004;
  float fStack_24;
  undefined8 in_stack_ffffffe8;
  float fVar4;
  
  fVar4 = SUB84(in_stack_ffffffe8,4);
  if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) {
    iVar2 = core_frankgen_cpp_CFrankenstienMachine_findLeader_FUN_004d2330();
    *(undefined4 *)(in_stack_00000004[1].actor_name + 4) = *(undefined4 *)(iVar2 + 0x15c);
    in_ST0 = (float10)core_frankgen_cpp_LoadModel_FUN_004d2190();
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffd8);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (iVar2 != 0) {
    fStack_24 = 7.082796e-39;
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,
               in_stack_00000004[1].location.position.z,-1);
    if (in_stack_00000004[2].create_event[0x5c] != '\0') {
      iVar1 = *(int *)(in_stack_00000004[1].actor_name + 4);
      if ((((0x4400bfff < iVar1) && (0x44e0ffff < iVar1)) && (0x44ed7fff < iVar1)) &&
         (0x44f9ffff < iVar1)) {
        fVar4 = (float)((ulonglong)
                        (double)((*(float *)(in_stack_00000004[1].actor_name + 4) + FLOAT_0062ab09)
                                 * (float)DOUBLE_0062ab0d * FLOAT_0062ab15) >> 0x20);
        crt_math_c_floor_FUN_005feb90((double)in_ST0);
        fVar3 = (float10)fVar4 -
                (float10)(double)CONCAT44(extraout_EDX,extraout_EAX) * (float10)DOUBLE_0062ab1d;
        fVar4 = (float)fVar3;
        if ((float10)FLOAT_0062ab25 < fVar3) {
          fVar4 = FLOAT_0062ab29 - fVar4;
        }
        fVar4 = fVar4 + FLOAT_0062ab2d;
      }
      fStack_24 = 7.08288e-39;
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                ((CKeyFramedModelInstance *)&in_stack_00000004[2].orient_matrix.m[2].z,fVar4,-1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
      return iVar2;
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return iVar2;
}


// Assembly code:
// 004d1f70: PUSH EBX
//   Label: core_frankgen.cpp_FUN_004d1f70
// 004d1f71: PUSH ESI
// 004d1f72: PUSH EDI
// 004d1f73: PUSH EBP
// 004d1f74: MOV EBP,ESP
// 004d1f76: SUB ESP,0x24
// 004d1f79: AND ESP,0xfffffff8
// 004d1f7c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d1f7f: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 004d1f84: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 004d1f88: JZ 0x004d1fa4
//   XREF to: 004d1fa4 (CONDITIONAL_JUMP)
// 004d1f8a: CALL core_frankgen.cpp_CFrankenstienMachine_findLeader_FUN_004d2330
//   XREF to: 004d2330 (UNCONDITIONAL_CALL)
// 004d1f8f: FLD float ptr [EAX + 0x15c]
// 004d1f95: PUSH EBX
// 004d1f96: FSTP float ptr [EBX + 0x15c]
// 004d1f9c: CALL core_frankgen.cpp_LoadModel_FUN_004d2190
//   XREF to: 004d2190 (UNCONDITIONAL_CALL)
// 004d1fa1: ADD ESP,0x4
// 004d1fa4: PUSH EBX
//   Label: LAB_004d1fa4
// 004d1fa5: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 004d1faa: ADD ESP,0x4
// 004d1fad: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x34] (DATA)
// 004d1fb1: PUSH ESI
// 004d1fb2: MOV EAX,dword ptr [EBX + 0x154]
// 004d1fb8: PUSH EBX
// 004d1fb9: CALL dword ptr [EAX + 0x14]
// 004d1fbc: ADD ESP,0x8
// 004d1fbf: PUSH EAX
// 004d1fc0: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 004d1fc5: ADD ESP,0x4
// 004d1fc8: MOV ESI,EAX
// 004d1fca: TEST EAX,EAX
// 004d1fcc: JNZ 0x004d1fe0
//   XREF to: 004d1fe0 (CONDITIONAL_JUMP)
// 004d1fce: PUSH EBX
//   Label: LAB_004d1fce
// 004d1fcf: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 004d1fd4: ADD ESP,0x4
// 004d1fd7: MOV EAX,ESI
// 004d1fd9: MOV ESP,EBP
// 004d1fdb: POP EBP
// 004d1fdc: POP EDI
// 004d1fdd: POP ESI
// 004d1fde: POP EBX
// 004d1fdf: RET
// 004d1fe0: PUSH -0x1
//   Label: LAB_004d1fe0
// 004d1fe2: LEA EAX,[EBX + 0x184]
// 004d1fe8: PUSH dword ptr [EBX + 0x180]
// 004d1fee: PUSH EAX
// 004d1fef: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 004d1ff4: LEA EAX,[EBX + 0x384]
// 004d1ffa: MOV DL,byte ptr [EAX]
// 004d1ffc: ADD ESP,0xc
// 004d1fff: TEST DL,DL
// 004d2001: JZ 0x004d1fce
//   XREF to: 004d1fce (CONDITIONAL_JUMP)
// 004d2003: MOV ECX,dword ptr [EBX + 0x15c]
// 004d2009: CMP ECX,0x4400c000
// 004d200f: JL 0x004d2045
//   XREF to: 004d2045 (CONDITIONAL_JUMP)
// 004d2011: CMP ECX,0x44e10000
// 004d2017: JGE 0x004d204e
//   XREF to: 004d204e (CONDITIONAL_JUMP)
// 004d2019: XOR EDI,EDI
// 004d201b: MOV dword ptr [ESP],EDI
// 004d201e: PUSH -0x1
//   Label: LAB_004d201e
// 004d2020: LEA EAX,[EBX + 0x30c]
// 004d2026: PUSH dword ptr [ESP + 0x4]
// 004d202a: PUSH EAX
// 004d202b: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 004d2030: ADD ESP,0xc
// 004d2033: PUSH EBX
// 004d2034: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 004d2039: ADD ESP,0x4
// 004d203c: MOV EAX,ESI
// 004d203e: MOV ESP,EBP
// 004d2040: POP EBP
// 004d2041: POP EDI
// 004d2042: POP ESI
// 004d2043: POP EBX
// 004d2044: RET
// 004d2045: MOV dword ptr [ESP],0x43490000
//   Label: LAB_004d2045
// 004d204c: JMP 0x004d201e
//   XREF to: 004d201e (UNCONDITIONAL_JUMP)
// 004d204e: CMP ECX,0x44ed8000
//   Label: LAB_004d204e
// 004d2054: JGE 0x004d2067
//   XREF to: 004d2067 (CONDITIONAL_JUMP)
// 004d2056: FLD float ptr [EBX + 0x15c]
// 004d205c: FADD float ptr [0x0062ab31]
//   XREF to: 0062ab31 (READ)
// 004d2062: FSTP float ptr [ESP]
// 004d2065: JMP 0x004d201e
//   XREF to: 004d201e (UNCONDITIONAL_JUMP)
// 004d2067: CMP ECX,0x44fa0000
//   Label: LAB_004d2067
// 004d206d: JGE 0x004d2078
//   XREF to: 004d2078 (CONDITIONAL_JUMP)
// 004d206f: MOV dword ptr [ESP],0x42c80000
// 004d2076: JMP 0x004d201e
//   XREF to: 004d201e (UNCONDITIONAL_JUMP)
// 004d2078: FLD float ptr [EBX + 0x15c]
//   Label: LAB_004d2078
// 004d207e: FADD float ptr [0x0062ab09]
//   XREF to: 0062ab09 (READ)
// 004d2084: FLD ST0
// 004d2086: FMUL double ptr [0x0062ab0d]
//   XREF to: 0062ab0d (READ)
// 004d208c: FSTP ST1
// 004d208e: FST float ptr [ESP]
// 004d2091: FMUL float ptr [0x0062ab15]
//   XREF to: 0062ab15 (READ)
// 004d2097: SUB ESP,0x8
// 004d209a: FSTP double ptr [ESP]
// 004d209d: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 004d20a2: MOV dword ptr [ESP + 0x24],EAX
// 004d20a6: MOV dword ptr [ESP + 0x28],EDX
// 004d20aa: FLD double ptr [ESP + 0x24]
// 004d20ae: FMUL double ptr [0x0062ab1d]
//   XREF to: 0062ab1d (READ)
// 004d20b4: ADD ESP,0x8
// 004d20b7: FSUBR float ptr [ESP]
// 004d20ba: FST float ptr [ESP]
// 004d20bd: FCOMP float ptr [0x0062ab25]
//   XREF to: 0062ab25 (READ)
// 004d20c3: FNSTSW AX
// 004d20c5: SAHF
// 004d20c6: JBE 0x004d20d4
//   XREF to: 004d20d4 (CONDITIONAL_JUMP)
// 004d20c8: FLD float ptr [0x0062ab29]
//   XREF to: 0062ab29 (READ)
// 004d20ce: FSUB float ptr [ESP]
// 004d20d1: FSTP float ptr [ESP]
// 004d20d4: FLD float ptr [ESP]
//   Label: LAB_004d20d4
// 004d20d7: FADD float ptr [0x0062ab2d]
//   XREF to: 0062ab2d (READ)
// 004d20dd: FSTP float ptr [ESP]
// 004d20e0: JMP 0x004d201e
//   XREF to: 004d201e (UNCONDITIONAL_JUMP)
