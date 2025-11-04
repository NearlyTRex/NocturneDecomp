// Name: core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
// Address: 005f7280
// Address Range: [[005f7280, 005f73d4]]
// Convention: __cdecl
// Signature: void core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280(CMatrix3x3f * matrix_ptr, CQuaternion4f * quat_ptr)
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 (0059fb40) at 0059fba8 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820 (0059f820) at 0059f8f5 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_005a1950 (005a1950) at 005a19c3 [UNCONDITIONAL_CALL]
//   core_xform.cpp_lerpMatrix3x4_FUN_005f7140 (005f7140) at 005f721c [UNCONDITIONAL_CALL]
//   core_xform.cpp_quaternionToEulerAnglesZYX_FUN_005f7af0 (005f7af0) at 005f7b02 [UNCONDITIONAL_CALL]
//   core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0 (005f7ac0) at 005f7ad2 [UNCONDITIONAL_CALL]
//   core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0 (005f73e0) at 005f73f1 [UNCONDITIONAL_CALL]
// Globals:
//   double g_QuaternionToMatrixScaleFactor = 2

#include "nocturne.h"

void __cdecl
core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280(CMatrix3x3f *matrix_ptr,CQuaternion4f *quat_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = quat_ptr->x;
  fVar4 = (float)g_QuaternionToMatrixScaleFactor /
          (quat_ptr->z * quat_ptr->z +
          quat_ptr->y * quat_ptr->y + quat_ptr->w * quat_ptr->w + quat_ptr->x * quat_ptr->x);
  fVar2 = quat_ptr->y;
  fVar5 = fVar2 * fVar4;
  fVar6 = quat_ptr->z * fVar4;
  fVar3 = quat_ptr->w;
  fVar7 = fVar3 * fVar1 * fVar4;
  fVar4 = fVar1 * fVar1 * fVar4;
  fVar8 = quat_ptr->z * fVar6;
  matrix_ptr->m[1].y = fVar1 * fVar5 + fVar3 * fVar6;
  matrix_ptr->m[2].z = fVar1 * fVar6 - fVar3 * fVar5;
  matrix_ptr->m[0].y = fVar1 * fVar5 - fVar3 * fVar6;
  matrix_ptr[1].m[0].x = fVar2 * fVar6 + fVar7;
  matrix_ptr->m[0].z = fVar1 * fVar6 + fVar3 * fVar5;
  matrix_ptr->m[2].x = fVar2 * fVar6 - fVar7;
  matrix_ptr->m[0].x = 1.0 - (fVar2 * fVar5 + fVar8);
  matrix_ptr->m[1].z = 1.0 - (fVar4 + fVar8);
  matrix_ptr[1].m[0].y = 1.0 - (fVar4 + fVar2 * fVar5);
  return;
}


// Assembly code:
// 005f7280: SUB ESP,0x88
//   Label: core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
// 005f7286: MOV EDX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[0x4] (READ)
// 005f728d: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[0x8] (READ)
// 005f7294: FLD float ptr [EAX + 0x4]
// 005f7297: FMUL ST0
// 005f7299: FLD float ptr [EAX]
// 005f729b: FMUL ST0
// 005f729d: FADDP
// 005f729f: FLD float ptr [EAX + 0x8]
// 005f72a2: FMUL ST0
// 005f72a4: FADDP
// 005f72a6: FLD float ptr [EAX + 0xc]
// 005f72a9: FMUL ST0
// 005f72ab: FLD float ptr [EAX + 0x4]
// 005f72ae: FXCH
// 005f72b0: FADDP ST2,ST0
// 005f72b2: FLD ST0
// 005f72b4: FXCH ST2
// 005f72b6: FDIVR double ptr [0x006583dd]
//   XREF to: 006583dd (READ)
// 005f72bc: FXCH ST2
// 005f72be: FMUL ST2
// 005f72c0: FLD float ptr [EAX + 0x8]
// 005f72c3: FST double ptr [ESP + 0x70]
//   XREF to: Stack[-0x18] (WRITE)
// 005f72c7: FMUL ST3
// 005f72c9: FLD float ptr [EAX + 0xc]
// 005f72cc: FST double ptr [ESP + 0x78]
//   XREF to: Stack[-0x10] (WRITE)
// 005f72d0: FMULP ST4
// 005f72d2: FLD float ptr [EAX]
// 005f72d4: FLD ST0
// 005f72d6: FMUL ST3
// 005f72d8: FLD ST1
// 005f72da: FXCH ST3
// 005f72dc: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x70] (WRITE)
// 005f72e0: FXCH ST2
// 005f72e2: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0x70] (READ)
// 005f72e6: FXCH ST5
// 005f72e8: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x68] (WRITE)
// 005f72ec: FMUL double ptr [ESP + 0x20]
//   XREF to: Stack[-0x68] (READ)
// 005f72f0: FLD ST3
// 005f72f2: FMULP ST3
// 005f72f4: FLD ST3
// 005f72f6: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0x70] (READ)
// 005f72fa: FXCH ST4
// 005f72fc: FMUL double ptr [ESP + 0x20]
//   XREF to: Stack[-0x68] (READ)
// 005f7300: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0x18] (READ)
// 005f7304: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0x70] (READ)
// 005f7308: FXCH ST6
// 005f730a: FSTP double ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (WRITE)
// 005f730e: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0x18] (READ)
// 005f7312: FMUL double ptr [ESP + 0x20]
//   XREF to: Stack[-0x68] (READ)
// 005f7316: FXCH ST2
// 005f7318: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (WRITE)
// 005f731c: FLD double ptr [ESP + 0x78]
//   XREF to: Stack[-0x10] (READ)
// 005f7320: FMUL double ptr [ESP + 0x20]
//   XREF to: Stack[-0x68] (READ)
// 005f7324: FXCH ST5
// 005f7326: FSTP double ptr [ESP + 0x48]
//   XREF to: Stack[-0x40] (WRITE)
// 005f732a: FXCH ST5
// 005f732c: FST double ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (WRITE)
// 005f7330: FXCH ST2
// 005f7332: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x60] (WRITE)
// 005f7336: FLD double ptr [ESP + 0x48]
//   XREF to: Stack[-0x40] (READ)
// 005f733a: FXCH ST5
// 005f733c: FST double ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (WRITE)
// 005f7340: FXCH ST3
// 005f7342: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (WRITE)
// 005f7346: FLD double ptr [ESP + 0x48]
//   XREF to: Stack[-0x40] (READ)
// 005f734a: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 005f734e: FXCH ST2
// 005f7350: FST double ptr [ESP + 0x60]
//   XREF to: Stack[-0x28] (WRITE)
// 005f7354: FXCH ST5
// 005f7356: FSTP double ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (WRITE)
// 005f735a: FXCH ST2
// 005f735c: FADD double ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 005f7360: FXCH ST5
// 005f7362: FADD double ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (READ)
// 005f7366: FXCH ST3
// 005f7368: FSUB double ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (READ)
// 005f736c: FXCH ST2
// 005f736e: FSUB double ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (READ)
// 005f7372: FXCH
// 005f7374: FADD double ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 005f7378: FXCH ST4
// 005f737a: FADD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x60] (READ)
// 005f737e: FLD1
// 005f7380: FXCH ST4
// 005f7382: FSTP float ptr [EDX + 0x10]
// 005f7385: FLD double ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (READ)
// 005f7389: FADD double ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (READ)
// 005f738d: FXCH ST3
// 005f738f: FSTP float ptr [EDX + 0x20]
// 005f7392: FLD double ptr [ESP + 0x60]
//   XREF to: Stack[-0x28] (READ)
// 005f7396: FSUB double ptr [ESP + 0x28]
//   XREF to: Stack[-0x60] (READ)
// 005f739a: FXCH ST2
// 005f739c: FSTP float ptr [EDX + 0x4]
// 005f739f: FLD1
// 005f73a1: FXCH
// 005f73a3: FSTP float ptr [EDX + 0x24]
// 005f73a6: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 005f73aa: FADD double ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (READ)
// 005f73ae: FXCH ST3
// 005f73b0: FSTP float ptr [EDX + 0x8]
// 005f73b3: FLD1
// 005f73b5: FXCH ST2
// 005f73b7: FSTP float ptr [EDX + 0x18]
// 005f73ba: FXCH ST3
// 005f73bc: FSUBRP ST5,ST0
// 005f73be: FXCH ST2
// 005f73c0: FSUBRP ST3,ST0
// 005f73c2: FSUBP
// 005f73c4: FXCH ST2
// 005f73c6: FSTP float ptr [EDX]
// 005f73c8: FSTP float ptr [EDX + 0x14]
// 005f73cb: FSTP float ptr [EDX + 0x28]
// 005f73ce: ADD ESP,0x88
// 005f73d4: RET
