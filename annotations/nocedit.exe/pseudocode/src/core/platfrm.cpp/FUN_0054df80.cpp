// Name: core_platfrm.cpp_FUN_0054df80
// Address: 0054df80
// Address Range: [[0054df80, 0054e178]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054df80()
// Cross-references:
//   core_platfrm.cpp_FUN_0054cc30 (0054cc30) at 0054d4ce [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0063f97e = 0.0100000000000000
//   float FLOAT_0063f986 = -1
// Function calls:
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0

#include "nocturne.h"

/* Signature: undefined1 actors_other_platform.cpp_FUN_0054df80(undefined4 param_1, undefined4
   param_2) */

undefined4 core_platfrm_cpp_FUN_0054df80(void)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  float fVar3;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  CVector3f *ray_origin;
  CVector3f *ray_direction;
  CVector3f *output_normal;
  SCollisionInfo local_88;
  CBoundingBox3D CStack_60;
  float fStack_48;
  float fStack_44;
  CVector3f CStack_40;
  CVector3f CStack_34;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  if (in_stack_00000008 != 0) {
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&local_88);
    local_88._0_8_ = (ulonglong)(uint)local_88.field1_0x4 << 0x20;
    iVar1 = (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x34))();
    if (iVar1 == 2) {
      CStack_1c.y = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                              ((in_stack_00000004->orient).pitch);
      (in_stack_00000004->orient).pitch = CStack_1c.y;
      CStack_1c.y = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                              ((in_stack_00000004->orient).heading);
      (in_stack_00000004->orient).heading = CStack_1c.y;
      if ((ABS((in_stack_00000004->orient).pitch) <= (float)DOUBLE_0063f97e) &&
         (ABS((in_stack_00000004->orient).heading) <= (float)DOUBLE_0063f97e)) {
        (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,&CStack_60);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (in_stack_00000004,&CStack_1c,(CVector3f *)(in_stack_00000008 + 0x20));
        if (((CStack_60.min.z <= CStack_1c.x + (float)local_88.field9_0x24) &&
            (((CStack_1c.x - (float)local_88.field9_0x24 <= CStack_60.max.z &&
              (CStack_60.max.y <= CStack_1c.z + (float)local_88.field9_0x24)) &&
             (CStack_1c.z - (float)local_88.field9_0x24 <= fStack_44)))) &&
           ((CStack_60.max.x <= CStack_1c.y + (float)local_88.result_ptr &&
            (CStack_1c.y + local_88.cylinder_radius <= fStack_48)))) {
          pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                             ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
          if (pCVar2->collision_triangle_list != (CDemonTriangle *)0x0) {
            CStack_40.x = CStack_1c.x;
            CStack_40.z = CStack_1c.z;
            output_normal = &CStack_34;
            CStack_28.x = 0.0;
            ray_direction = &CStack_28;
            CStack_28.y = 1.0;
            ray_origin = &CStack_40;
            CStack_28.z = 0.0;
            iVar1 = 0;
            CStack_40.y = (float)local_88.result_ptr + FLOAT_0063f986 + CStack_1c.y;
            pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                               ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
            fVar3 = core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_004781d0
                              (pCVar2,iVar1,ray_origin,ray_direction,output_normal);
            if (fVar3 < 0.0) {
              return 0;
            }
            if (1.0 < fVar3) {
              return 0;
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}


// Assembly code:
// 0054df80: PUSH EBX
//   Label: core_platfrm.cpp_FUN_0054df80
// 0054df81: PUSH ESI
// 0054df82: PUSH EDI
// 0054df83: PUSH EBP
// 0054df84: MOV EBP,ESP
// 0054df86: SUB ESP,0x7c
// 0054df89: AND ESP,0xfffffff8
// 0054df8c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054df8f: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0054df92: TEST ESI,ESI
// 0054df94: JNZ 0x0054df9f
//   XREF to: 0054df9f (CONDITIONAL_JUMP)
// 0054df96: XOR EAX,EAX
//   Label: LAB_0054df96
// 0054df98: MOV ESP,EBP
// 0054df9a: POP EBP
// 0054df9b: POP EDI
// 0054df9c: POP ESI
// 0054df9d: POP EBX
// 0054df9e: RET
// 0054df9f: LEA EAX,[ESP + 0x8]
//   Label: LAB_0054df9f
//   XREF to: Stack[-0x88] (DATA)
// 0054dfa3: PUSH EAX
// 0054dfa4: CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   XREF to: 005743c0 (UNCONDITIONAL_CALL)
// 0054dfa9: ADD ESP,0x4
// 0054dfac: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x88] (DATA)
// 0054dfb0: XOR EDX,EDX
// 0054dfb2: PUSH EAX
// 0054dfb3: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x88] (WRITE)
// 0054dfb7: PUSH ESI
// 0054dfb8: MOV EDX,dword ptr [ESI + 0x154]
// 0054dfbe: CALL dword ptr [EDX + 0x34]
// 0054dfc1: ADD ESP,0x8
// 0054dfc4: CMP EAX,0x2
// 0054dfc7: JNZ 0x0054df96
//   XREF to: 0054df96 (CONDITIONAL_JUMP)
// 0054dfc9: PUSH dword ptr [EBX + 0x30]
// 0054dfcc: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 0054dfd1: MOV dword ptr [ESP + 0x7c],EAX
// 0054dfd5: FLD float ptr [ESP + 0x7c]
// 0054dfd9: ADD ESP,0x4
// 0054dfdc: PUSH dword ptr [EBX + 0x38]
// 0054dfdf: FSTP float ptr [EBX + 0x30]
// 0054dfe2: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 0054dfe7: FLD float ptr [EBX + 0x30]
// 0054dfea: MOV dword ptr [ESP + 0x7c],EAX
// 0054dfee: FABS
// 0054dff0: MOV EAX,dword ptr [ESP + 0x7c]
// 0054dff4: MOV dword ptr [EBX + 0x38],EAX
// 0054dff7: ADD ESP,0x4
// 0054dffa: FCOMP double ptr [0x0063f97e]
//   XREF to: 0063f97e (READ)
// 0054e000: FNSTSW AX
// 0054e002: SAHF
// 0054e003: JA 0x0054df96
//   XREF to: 0054df96 (CONDITIONAL_JUMP)
// 0054e005: FLD float ptr [EBX + 0x38]
// 0054e008: FABS
// 0054e00a: FCOMP double ptr [0x0063f97e]
//   XREF to: 0063f97e (READ)
// 0054e010: FNSTSW AX
// 0054e012: SAHF
// 0054e013: JA 0x0054df96
//   XREF to: 0054df96 (CONDITIONAL_JUMP)
// 0054e015: LEA EAX,[ESP + 0x30]
// 0054e019: PUSH EAX
// 0054e01a: MOV EDX,dword ptr [EBX + 0x154]
// 0054e020: PUSH EBX
// 0054e021: CALL dword ptr [EDX + 0x14]
// 0054e024: ADD ESP,0x8
// 0054e027: ADD ESI,0x20
// 0054e02a: PUSH ESI
// 0054e02b: LEA EAX,[ESP + 0x70]
// 0054e02f: PUSH EAX
// 0054e030: PUSH EBX
// 0054e031: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 0054e036: ADD ESP,0xc
// 0054e039: FLD float ptr [ESP + 0x6c]
// 0054e03d: FADD float ptr [ESP + 0x24]
// 0054e041: FCOMP float ptr [ESP + 0x30]
// 0054e045: FNSTSW AX
// 0054e047: SAHF
// 0054e048: JC 0x0054df96
//   XREF to: 0054df96 (CONDITIONAL_JUMP)
// 0054e04e: FLD float ptr [ESP + 0x6c]
// 0054e052: FSUB float ptr [ESP + 0x24]
// 0054e056: FCOMP float ptr [ESP + 0x3c]
// 0054e05a: FNSTSW AX
// 0054e05c: SAHF
// 0054e05d: JA 0x0054df96
//   XREF to: 0054df96 (CONDITIONAL_JUMP)
// 0054e063: FLD float ptr [ESP + 0x74]
// 0054e067: FADD float ptr [ESP + 0x24]
// 0054e06b: FCOMP float ptr [ESP + 0x38]
// 0054e06f: FNSTSW AX
// 0054e071: SAHF
// 0054e072: JC 0x0054df96
//   XREF to: 0054df96 (CONDITIONAL_JUMP)
// 0054e078: FLD float ptr [ESP + 0x74]
// 0054e07c: FSUB float ptr [ESP + 0x24]
// 0054e080: FCOMP float ptr [ESP + 0x44]
// 0054e084: FNSTSW AX
// 0054e086: SAHF
// 0054e087: JA 0x0054df96
//   XREF to: 0054df96 (CONDITIONAL_JUMP)
// 0054e08d: FLD float ptr [ESP + 0x70]
// 0054e091: FADD float ptr [ESP + 0x20]
// 0054e095: FCOMP float ptr [ESP + 0x34]
// 0054e099: FNSTSW AX
// 0054e09b: SAHF
// 0054e09c: JC 0x0054df96
//   XREF to: 0054df96 (CONDITIONAL_JUMP)
// 0054e0a2: FLD float ptr [ESP + 0x70]
// 0054e0a6: FADD float ptr [ESP + 0x1c]
// 0054e0aa: FCOMP float ptr [ESP + 0x40]
// 0054e0ae: FNSTSW AX
// 0054e0b0: SAHF
// 0054e0b1: JA 0x0054df96
//   XREF to: 0054df96 (CONDITIONAL_JUMP)
// 0054e0b7: LEA EAX,[EBX + 0x158]
// 0054e0bd: PUSH EAX
// 0054e0be: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 0054e0c3: MOV ECX,dword ptr [EAX + 0x5698]
// 0054e0c9: ADD ESP,0x4
// 0054e0cc: TEST ECX,ECX
// 0054e0ce: JNZ 0x0054e0dc
//   XREF to: 0054e0dc (CONDITIONAL_JUMP)
// 0054e0d0: MOV EAX,0x1
//   Label: LAB_0054e0d0
// 0054e0d5: MOV ESP,EBP
// 0054e0d7: POP EBP
// 0054e0d8: POP EDI
// 0054e0d9: POP ESI
// 0054e0da: POP EBX
// 0054e0db: RET
// 0054e0dc: FLD float ptr [ESP + 0x20]
//   Label: LAB_0054e0dc
// 0054e0e0: MOV EAX,dword ptr [ESP + 0x6c]
// 0054e0e4: MOV EDI,0x3f800000
// 0054e0e9: MOV dword ptr [ESP + 0x48],EAX
// 0054e0ed: MOV EAX,dword ptr [ESP + 0x70]
// 0054e0f1: ADD EBX,0x158
// 0054e0f7: MOV dword ptr [ESP + 0x4c],EAX
// 0054e0fb: MOV EAX,dword ptr [ESP + 0x74]
// 0054e0ff: XOR ESI,ESI
// 0054e101: MOV dword ptr [ESP + 0x50],EAX
// 0054e105: LEA EAX,[ESP + 0x54]
// 0054e109: MOV dword ptr [ESP + 0x60],ESI
// 0054e10d: PUSH EAX
// 0054e10e: LEA EAX,[ESP + 0x64]
// 0054e112: MOV dword ptr [ESP + 0x68],EDI
// 0054e116: PUSH EAX
// 0054e117: LEA EAX,[ESP + 0x50]
// 0054e11b: MOV dword ptr [ESP + 0x70],ESI
// 0054e11f: PUSH EAX
// 0054e120: FADD float ptr [0x0063f986]
//   XREF to: 0063f986 (READ)
// 0054e126: PUSH ESI
// 0054e127: FADD float ptr [ESP + 0x5c]
// 0054e12b: PUSH EBX
// 0054e12c: FSTP float ptr [ESP + 0x60]
// 0054e130: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 0054e135: ADD ESP,0x4
// 0054e138: PUSH EAX
// 0054e139: CALL core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0
//   XREF to: 004781d0 (UNCONDITIONAL_CALL)
// 0054e13e: MOV dword ptr [ESP + 0x8c],EAX
// 0054e145: FLD float ptr [ESP + 0x8c]
// 0054e14c: ADD ESP,0x14
// 0054e14f: FLDZ
// 0054e151: FXCH
// 0054e153: FSTP double ptr [ESP]
// 0054e156: FCOMP double ptr [ESP]
// 0054e159: FNSTSW AX
// 0054e15b: SAHF
// 0054e15c: JA 0x0054df96
//   XREF to: 0054df96 (CONDITIONAL_JUMP)
// 0054e162: FLD1
// 0054e164: FCOMP double ptr [ESP]
// 0054e167: FNSTSW AX
// 0054e169: SAHF
// 0054e16a: JNC 0x0054e0d0
//   XREF to: 0054e0d0 (CONDITIONAL_JUMP)
// 0054e170: XOR EAX,EAX
// 0054e172: MOV ESP,EBP
// 0054e174: POP EBP
// 0054e175: POP EDI
// 0054e176: POP ESI
// 0054e177: POP EBX
// 0054e178: RET
