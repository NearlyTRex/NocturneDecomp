// Name: core_xform.cpp_quaternionToAxisAngle_FUN_005f7730
// Address: 005f7730
// Address Range: [[005f7730, 005f77da]]
// Convention: __cdecl
// Signature: void core_xform.cpp_quaternionToAxisAngle_FUN_005f7730(CQuaternion4f * quat_ptr, float * angle_out, CVector3f * axis_out)
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 (0059ff20) at 0059ff5a [UNCONDITIONAL_CALL]
// Globals:
//   double g_QuaternionAxisAngleNegativeOne = -1
//   double g_QuaternionAxisAngleDoubler = 2
// Function calls:
//   crt_math.c_acos_FUN_00600162

#include "nocturne.h"

void __cdecl
core_xform_cpp_quaternionToAxisAngle_FUN_005f7730
          (CQuaternion4f *quat_ptr,float *angle_out,CVector3f *axis_out)

{
  float fVar1;
  CQuaternion4f *extraout_ECX;
  CVector3f *extraout_EDX;
  double dVar2;
  
  if (angle_out != (float *)0x0) {
    dVar2 = (double)quat_ptr->w;
    if ((float)g_QuaternionAxisAngleNegativeOne < quat_ptr->w) {
      if (dVar2 < 1.0) {
        dVar2 = crt_math_c_acos_FUN_00600162(dVar2);
        *angle_out = (float)((float10)dVar2 * (float10)g_QuaternionAxisAngleDoubler);
        quat_ptr = extraout_ECX;
        axis_out = extraout_EDX;
      }
      else {
        *angle_out = 0.0;
      }
    }
    else {
      *angle_out = 6.2831855;
    }
  }
  if (axis_out != (CVector3f *)0x0) {
    fVar1 = 1.0 - quat_ptr->w * quat_ptr->w;
    if (0.0 < fVar1) {
      fVar1 = 1.0 / SQRT(fVar1);
      axis_out->x = quat_ptr->x * fVar1;
      axis_out->y = quat_ptr->y * fVar1;
      axis_out->z = fVar1 * quat_ptr->z;
      return;
    }
    axis_out->z = 0.0;
    axis_out->y = axis_out->z;
    axis_out->x = axis_out->y;
  }
  return;
}


// Assembly code:
// 005f7730: PUSH EBX
//   Label: core_xform.cpp_quaternionToAxisAngle_FUN_005f7730
// 005f7731: PUSH EBP
// 005f7732: MOV EBP,ESP
// 005f7734: SUB ESP,0x18
// 005f7737: AND ESP,0xfffffff8
// 005f773a: MOV ECX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005f773d: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005f7740: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005f7743: TEST EBX,EBX
// 005f7745: JNZ 0x005f777b
//   XREF to: 005f777b (CONDITIONAL_JUMP)
// 005f7747: TEST EDX,EDX
//   Label: LAB_005f7747
// 005f7749: JZ 0x005f7776
//   XREF to: 005f7776 (CONDITIONAL_JUMP)
// 005f774b: FLD float ptr [ECX]
// 005f774d: FMUL ST0
// 005f774f: FLD1
// 005f7751: FSUBRP
// 005f7753: FLDZ
// 005f7755: FXCH
// 005f7757: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 005f775b: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005f775f: FNSTSW AX
// 005f7761: SAHF
// 005f7762: JC 0x005f77b7
//   XREF to: 005f77b7 (CONDITIONAL_JUMP)
// 005f7764: MOV dword ptr [EDX + 0x8],0x0
// 005f776b: MOV EAX,dword ptr [EDX + 0x8]
// 005f776e: MOV dword ptr [EDX + 0x4],EAX
// 005f7771: MOV EAX,dword ptr [EDX + 0x4]
// 005f7774: MOV dword ptr [EDX],EAX
// 005f7776: MOV ESP,EBP
//   Label: LAB_005f7776
// 005f7778: POP EBP
// 005f7779: POP EBX
// 005f777a: RET
// 005f777b: FLD float ptr [ECX]
//   Label: LAB_005f777b
// 005f777d: FST double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005f7780: FCOMP double ptr [0x006583ed]
//   XREF to: 006583ed (READ)
// 005f7786: FNSTSW AX
// 005f7788: SAHF
// 005f7789: JA 0x005f7793
//   XREF to: 005f7793 (CONDITIONAL_JUMP)
// 005f778b: MOV dword ptr [EBX],0x40c90fdb
// 005f7791: JMP 0x005f7747
//   XREF to: 005f7747 (UNCONDITIONAL_JUMP)
// 005f7793: FLD1
//   Label: LAB_005f7793
// 005f7795: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005f7798: FNSTSW AX
// 005f779a: SAHF
// 005f779b: JA 0x005f77a5
//   XREF to: 005f77a5 (CONDITIONAL_JUMP)
// 005f779d: MOV dword ptr [EBX],0x0
// 005f77a3: JMP 0x005f7747
//   XREF to: 005f7747 (UNCONDITIONAL_JUMP)
// 005f77a5: FLD double ptr [ESP]
//   Label: LAB_005f77a5
//   XREF to: Stack[-0x20] (DATA)
// 005f77a8: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 005f77ad: FMUL double ptr [0x006583f5]
//   XREF to: 006583f5 (READ)
// 005f77b3: FSTP float ptr [EBX]
// 005f77b5: JMP 0x005f7747
//   XREF to: 005f7747 (UNCONDITIONAL_JUMP)
// 005f77b7: FLD double ptr [ESP + 0x8]
//   Label: LAB_005f77b7
//   XREF to: Stack[-0x18] (READ)
// 005f77bb: FSQRT
// 005f77bd: FLD float ptr [ECX + 0x4]
// 005f77c0: FLD1
// 005f77c2: FDIVRP ST2,ST0
// 005f77c4: FMUL ST1
// 005f77c6: FSTP float ptr [EDX]
// 005f77c8: FLD float ptr [ECX + 0x8]
// 005f77cb: FMUL ST1
// 005f77cd: FSTP float ptr [EDX + 0x4]
// 005f77d0: FMUL float ptr [ECX + 0xc]
// 005f77d3: FSTP float ptr [EDX + 0x8]
// 005f77d6: MOV ESP,EBP
// 005f77d8: POP EBP
// 005f77d9: POP EBX
// 005f77da: RET
