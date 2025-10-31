// Name: core_platfrm.cpp_FUN_0054cab0
// Address: 0054cab0
// Address Range: [[0054cab0, 0054cc0d]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054cab0()
// Cross-references:
//   core_platfrm.cpp_FUN_0054cc30 (0054cc30) at 0054ce4d [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e760 (0054e760) at 0054e796 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054ea00 (0054ea00) at 0054ebf0 [UNCONDITIONAL_CALL]
// Function calls:
//   core_course.cpp_CCourse_FUN_00442710
//   core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
//   core_xform.cpp_slerpQuaternion_FUN_005f77e0

#include "nocturne.h"

/* Signature: undefined1 actors_other_platform.cpp_FUN_0054cab0(undefined4 param_1) */

void core_platfrm_cpp_FUN_0054cab0(void)

{
  float *pfVar1;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar3;
  byte bVar4;
  int in_stack_00000004;
  CQuaternion4f *apCStackY_1844 [1523];
  float in_stack_ffffff98;
  CQuaternion4f *quat_ptr;
  CQuaternion4f local_58;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  bVar4 = 0;
  if (*(float *)(in_stack_00000004 + 0x2dc) < 0.0) {
    *(undefined4 *)(in_stack_00000004 + 0x2dc) = 0;
  }
  if (1.0 < *(float *)(in_stack_00000004 + 0x2dc)) {
    *(undefined4 *)(in_stack_00000004 + 0x2dc) = 0x3f800000;
  }
  if (*(char *)(in_stack_00000004 + 0x2f0) == '\0') {
    pfVar1 = (float *)(in_stack_00000004 + 0x2dc);
    local_48 = *(float *)(in_stack_00000004 + 0x328) * *pfVar1;
    local_44 = *(float *)(in_stack_00000004 + 0x32c) * *pfVar1;
    local_40 = *(float *)(in_stack_00000004 + 0x330) * *pfVar1;
    local_18 = 1.0 - *(float *)(in_stack_00000004 + 0x2dc);
    local_24 = *(float *)(in_stack_00000004 + 0x31c) * local_18;
    local_20 = *(float *)(in_stack_00000004 + 800) * local_18;
    local_1c = *(float *)(in_stack_00000004 + 0x324) * local_18;
    local_3c = local_24 + local_48;
    local_38 = local_20 + local_44;
    local_34 = local_1c + local_40;
    *(float *)(in_stack_00000004 + 0x20) = local_3c;
    *(float *)(in_stack_00000004 + 0x24) = local_38;
    *(float *)(in_stack_00000004 + 0x28) = local_34;
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)(in_stack_00000004 + 0x334),
               (CQuaternion4f *)(in_stack_00000004 + 0x344),
               *(CQuaternion4f **)(in_stack_00000004 + 0x2dc),in_stack_ffffff98);
    quat_ptr = &local_58;
    pCVar2 = &local_30;
    local_58.w = (float)quat_ptr;
    puVar3 = (undefined4 *)((int)&local_58 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(undefined4 *)((int)&local_58 + (uint)bVar4 * -8 + 4) =
         *(undefined4 *)(&stack0xffffff9c + (uint)bVar4 * -8);
    *puVar3 = *(undefined4 *)(&stack0xffffffa0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    puVar3[(uint)bVar4 * -2 + 1] =
         *(undefined4 *)
          ((int)(&stack0xffffffa0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
          ((uint)bVar4 * -2 + 1) * 4);
    pCVar2 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(pCVar2,quat_ptr);
    if ((CVector3f *)(in_stack_00000004 + 0x30) != pCVar2) {
      ((CVector3f *)(in_stack_00000004 + 0x30))->x = pCVar2->x;
      *(float *)(in_stack_00000004 + 0x34) = pCVar2->y;
      *(float *)(in_stack_00000004 + 0x38) = pCVar2->z;
      return;
    }
  }
  else {
    local_14 = ((CCourse *)(in_stack_00000004 + 0x310))->len;
    core_course_cpp_CCourse_FUN_00442710((CCourse *)(in_stack_00000004 + 0x310));
  }
  return;
}


// Assembly code:
// 0054cab0: PUSH EBX
//   Label: core_platfrm.cpp_FUN_0054cab0
// 0054cab1: PUSH ESI
// 0054cab2: PUSH EDI
// 0054cab3: PUSH EBP
// 0054cab4: MOV EBP,ESP
// 0054cab6: SUB ESP,0x58
// 0054cab9: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054cabc: FLD float ptr [ESI + 0x2dc]
// 0054cac2: FLDZ
// 0054cac4: FCOMPP
// 0054cac6: FNSTSW AX
// 0054cac8: SAHF
// 0054cac9: JA 0x0054cbc1
//   XREF to: 0054cbc1 (CONDITIONAL_JUMP)
// 0054cacf: FLD float ptr [ESI + 0x2dc]
//   Label: LAB_0054cacf
// 0054cad5: FLD1
// 0054cad7: FCOMPP
// 0054cad9: FNSTSW AX
// 0054cadb: SAHF
// 0054cadc: JNC 0x0054cae8
//   XREF to: 0054cae8 (CONDITIONAL_JUMP)
// 0054cade: MOV dword ptr [ESI + 0x2dc],0x3f800000
// 0054cae8: LEA EDI,[ESI + 0x20]
//   Label: LAB_0054cae8
// 0054caeb: MOV AH,byte ptr [ESI + 0x2f0]
// 0054caf1: LEA EBX,[ESI + 0x30]
// 0054caf4: TEST AH,AH
// 0054caf6: JNZ 0x0054cbd0
//   XREF to: 0054cbd0 (CONDITIONAL_JUMP)
// 0054cafc: LEA EDX,[ESI + 0x328]
// 0054cb02: LEA EAX,[ESI + 0x2dc]
// 0054cb08: FLD float ptr [EDX]
// 0054cb0a: FMUL float ptr [EAX]
// 0054cb0c: FSTP float ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (WRITE)
// 0054cb0f: FLD float ptr [EDX + 0x4]
// 0054cb12: FMUL float ptr [EAX]
// 0054cb14: FSTP float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (WRITE)
// 0054cb17: FLD float ptr [EDX + 0x8]
// 0054cb1a: FMUL float ptr [EAX]
// 0054cb1c: FSTP float ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (WRITE)
// 0054cb1f: LEA EAX,[ESI + 0x31c]
// 0054cb25: FLD float ptr [ESI + 0x2dc]
// 0054cb2b: FLD1
// 0054cb2d: FSUBRP
// 0054cb2f: FLD float ptr [EAX]
// 0054cb31: FXCH
// 0054cb33: FSTP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 0054cb36: FMUL float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0054cb39: FSTP float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 0054cb3c: FLD float ptr [EAX + 0x4]
// 0054cb3f: FMUL float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0054cb42: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0054cb45: FLD float ptr [EAX + 0x8]
// 0054cb48: FMUL float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0054cb4b: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0054cb4e: FADD float ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 0054cb51: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0054cb54: FXCH
// 0054cb56: FSTP float ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (WRITE)
// 0054cb59: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0054cb5c: FADD float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0054cb5f: FXCH
// 0054cb61: FST float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0054cb64: FADD float ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0054cb67: FXCH
// 0054cb69: FSTP float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (WRITE)
// 0054cb6c: FSTP float ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 0054cb6f: MOV dword ptr [EDI],EAX
// 0054cb71: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0054cb74: MOV dword ptr [EDI + 0x4],EAX
// 0054cb77: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0054cb7a: MOV dword ptr [EDI + 0x8],EAX
// 0054cb7d: LEA EAX,[ESI + 0x344]
// 0054cb83: PUSH dword ptr [ESI + 0x2dc]
// 0054cb89: PUSH EAX
// 0054cb8a: ADD ESI,0x334
// 0054cb90: PUSH ESI
// 0054cb91: LEA ESI,[EBP + -0x58]
//   XREF to: Stack[-0x68] (DATA)
// 0054cb94: CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
// 0054cb99: ADD ESP,0xc
// 0054cb9c: LEA EAX,[EBP + -0x48]
//   XREF to: Stack[-0x58] (DATA)
// 0054cb9f: LEA EDI,[EBP + -0x48]
//   XREF to: Stack[-0x58] (DATA)
// 0054cba2: PUSH EAX
// 0054cba3: LEA EAX,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 0054cba6: LEA ESI,[EBP + -0x58]
//   XREF to: Stack[-0x68] (DATA)
// 0054cba9: PUSH EAX
// 0054cbaa: MOVSD ES:EDI,ESI
// 0054cbab: MOVSD ES:EDI,ESI
// 0054cbac: MOVSD ES:EDI,ESI
// 0054cbad: MOVSD ES:EDI,ESI
// 0054cbae: CALL core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
//   XREF to: 005f7ac0 (UNCONDITIONAL_CALL)
// 0054cbb3: ADD ESP,0x8
// 0054cbb6: CMP EBX,EAX
// 0054cbb8: JNZ 0x0054cbf7
//   XREF to: 0054cbf7 (CONDITIONAL_JUMP)
// 0054cbba: MOV ESP,EBP
//   Label: LAB_0054cbba
// 0054cbbc: POP EBP
// 0054cbbd: POP EDI
// 0054cbbe: POP ESI
// 0054cbbf: POP EBX
// 0054cbc0: RET
// 0054cbc1: MOV dword ptr [ESI + 0x2dc],0x0
//   Label: LAB_0054cbc1
// 0054cbcb: JMP 0x0054cacf
//   XREF to: 0054cacf (UNCONDITIONAL_JUMP)
// 0054cbd0: LEA EAX,[ESI + 0x310]
//   Label: LAB_0054cbd0
// 0054cbd6: MOV EDX,dword ptr [EAX]
// 0054cbd8: PUSH EBX
// 0054cbd9: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0054cbdc: PUSH EDI
// 0054cbdd: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0054cbe0: FMUL float ptr [ESI + 0x2dc]
// 0054cbe6: SUB ESP,0x4
// 0054cbe9: FSTP float ptr [ESP]
//   XREF to: Stack[-0x74] (DATA)
// 0054cbec: PUSH EAX
// 0054cbed: CALL core_course.cpp_CCourse_FUN_00442710
//   XREF to: 00442710 (UNCONDITIONAL_CALL)
// 0054cbf2: ADD ESP,0x10
// 0054cbf5: JMP 0x0054cbba
//   XREF to: 0054cbba (UNCONDITIONAL_JUMP)
// 0054cbf7: MOV EDX,dword ptr [EAX]
//   Label: LAB_0054cbf7
// 0054cbf9: MOV dword ptr [EBX],EDX
// 0054cbfb: MOV EDX,dword ptr [EAX + 0x4]
// 0054cbfe: MOV dword ptr [EBX + 0x4],EDX
// 0054cc01: MOV EDX,dword ptr [EAX + 0x8]
// 0054cc04: MOV dword ptr [EBX + 0x8],EDX
// 0054cc07: MOV ESP,EBP
// 0054cc09: POP EBP
// 0054cc0a: POP EDI
// 0054cc0b: POP ESI
// 0054cc0c: POP EBX
// 0054cc0d: RET
