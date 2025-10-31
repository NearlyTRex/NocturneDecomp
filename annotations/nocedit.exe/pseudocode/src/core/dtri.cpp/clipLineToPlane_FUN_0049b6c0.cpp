// Name: core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
// Address: 0049b6c0
// Address Range: [[0049b6c0, 0049b84e]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_clipLineToPlane_FUN_0049b6c0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, double plane_ny, double plane_nz, double plane_d)
// Cross-references:
//   core_dtri.cpp_clipPolygonToBottom_FUN_0049b9c0 (0049b9c0) at 0049baa2 [UNCONDITIONAL_CALL]
//   core_dtri.cpp_clipPolygonToFar_FUN_0049bf60 (0049bf60) at 0049c042 [UNCONDITIONAL_CALL]
//   core_dtri.cpp_clipPolygonToLeft_FUN_0049bc90 (0049bc90) at 0049bd70 [UNCONDITIONAL_CALL]
//   core_dtri.cpp_clipPolygonToNear_FUN_0049bdf0 (0049bdf0) at 0049bed2 [UNCONDITIONAL_CALL]
//   core_dtri.cpp_clipPolygonToRight_FUN_0049bb30 (0049bb30) at 0049bc0a [UNCONDITIONAL_CALL]
//   core_dtri.cpp_clipPolygonToTop_FUN_0049b860 (0049b860) at 0049b93c [UNCONDITIONAL_CALL]
//   core_dtri.cpp_clipTriangleToBounds_FUN_0049c120 (0049c120) at 0049c733 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dtri_cpp_00622e2a
//   TerminatedCString s_Bad_clip_00622e3b
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
core_dtri_cpp_clipLineToPlane_FUN_0049b6c0
          (CVector3f *point1_ptr,CVector3f *point2_ptr,CVector3f *result_ptr,double plane_nx,
          double plane_ny,double plane_nz,double plane_d)

{
  double dVar1;
  float fVar2;
  int local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  dVar1 = (double)((point2_ptr->z - point1_ptr->z) * (float)plane_nz +
                  (point2_ptr->x - point1_ptr->x) * (float)plane_nx +
                  (point2_ptr->y - point1_ptr->y) * (float)plane_ny);
  local_28 = SUB84(dVar1,0);
  uStack_24 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if ((((ulonglong)dVar1 & 0x7fffffff00000000) == 0) && (local_28 == 0)) {
    g_CurrentFilename = "..\\core\\dtri.cpp";
    g_CurrentLineNumber = 0x457;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bad clip!");
  }
  fVar2 = -(point1_ptr->z * (float)plane_nz +
           point1_ptr->y * (float)plane_ny + (float)plane_nx * point1_ptr->x + (float)plane_d) /
          (float)(double)CONCAT44(uStack_20,uStack_24);
  result_ptr->x = (point2_ptr->x - point1_ptr->x) * fVar2 + point1_ptr->x;
  result_ptr->y = (point2_ptr->y - point1_ptr->y) * fVar2 + point1_ptr->y;
  result_ptr->z = (point2_ptr->z - point1_ptr->z) * fVar2 + point1_ptr->z;
  if ((((((ulonglong)plane_nx & 0x7fffffff00000000) != 0) || (plane_nx._0_4_ != 0)) &&
      (((ulonglong)plane_ny & 0x7fffffff00000000) == 0)) &&
     (((plane_ny._0_4_ == 0 && (((ulonglong)plane_nz & 0x7fffffff00000000) == 0)) &&
      (plane_nz._0_4_ == 0)))) {
    result_ptr->x = (float)(-(float10)plane_nx * (float10)plane_d);
  }
  if (((((ulonglong)plane_nx & 0x7fffffff00000000) == 0) && (plane_nx._0_4_ == 0)) &&
     (((((ulonglong)plane_ny & 0x7fffffff00000000) != 0 || (plane_ny._0_4_ != 0)) &&
      ((((ulonglong)plane_nz & 0x7fffffff00000000) == 0 && (plane_nz._0_4_ == 0)))))) {
    result_ptr->y = (float)(-(float10)plane_ny * (float10)plane_d);
  }
  if (((((((ulonglong)plane_nx & 0x7fffffff00000000) == 0) && (plane_nx._0_4_ == 0)) &&
       (((ulonglong)plane_ny & 0x7fffffff00000000) == 0)) && (plane_ny._0_4_ == 0)) &&
     ((((ulonglong)plane_nz & 0x7fffffff00000000) != 0 || (plane_nz._0_4_ != 0)))) {
    result_ptr->z = (float)(-(float10)plane_nz * (float10)plane_d);
    return;
  }
  return;
}


// Assembly code:
// 0049b6c0: PUSH EBX
//   Label: core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
// 0049b6c1: PUSH ESI
// 0049b6c2: PUSH EDI
// 0049b6c3: PUSH EBP
// 0049b6c4: MOV EBP,ESP
// 0049b6c6: SUB ESP,0x18
// 0049b6c9: AND ESP,0xfffffff8
// 0049b6cc: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0049b6cf: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0049b6d2: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0049b6d5: FLD float ptr [EDI + 0x4]
// 0049b6d8: FSUB float ptr [EBX + 0x4]
// 0049b6db: FMUL double ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0049b6de: FLD float ptr [EDI]
// 0049b6e0: FSUB float ptr [EBX]
// 0049b6e2: FMUL double ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0049b6e5: FADDP
// 0049b6e7: FLD float ptr [EDI + 0x8]
// 0049b6ea: FSUB float ptr [EBX + 0x8]
// 0049b6ed: FMUL double ptr [EBP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 0049b6f0: FADDP
// 0049b6f2: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0049b6f5: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0049b6f9: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0049b6fc: TEST EDX,0x7fffffff
// 0049b702: JNZ 0x0049b70c
//   XREF to: 0049b70c (CONDITIONAL_JUMP)
// 0049b704: TEST ECX,ECX
// 0049b706: JZ 0x0049b816
//   XREF to: 0049b816 (CONDITIONAL_JUMP)
// 0049b70c: FLD float ptr [EBX]
//   Label: LAB_0049b70c
// 0049b70e: FLD double ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0049b711: FMUL ST1
// 0049b713: FADD double ptr [EBP + 0x38]
//   XREF to: Stack[0x28] (READ)
// 0049b716: FLD float ptr [EBX + 0x4]
// 0049b719: FMUL double ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0049b71c: FADDP
// 0049b71e: FLD float ptr [EBX + 0x8]
// 0049b721: FMUL double ptr [EBP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 0049b724: FADDP
// 0049b726: FLD ST0
// 0049b728: FCHS
// 0049b72a: FDIV double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0049b72d: FLD float ptr [EDI]
// 0049b72f: FSUB float ptr [EBX]
// 0049b731: FXCH
// 0049b733: FSTP ST2
// 0049b735: FMUL ST1
// 0049b737: FADDP ST2,ST0
// 0049b739: FXCH
// 0049b73b: FSTP float ptr [ESI]
// 0049b73d: FLD float ptr [EDI + 0x4]
// 0049b740: FSUB float ptr [EBX + 0x4]
// 0049b743: FMUL ST1
// 0049b745: FADD float ptr [EBX + 0x4]
// 0049b748: FSTP float ptr [ESI + 0x4]
// 0049b74b: FLD float ptr [EDI + 0x8]
// 0049b74e: FSUB float ptr [EBX + 0x8]
// 0049b751: FMULP
// 0049b753: MOV ECX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0049b756: FADD float ptr [EBX + 0x8]
// 0049b759: MOV EBX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0049b75c: FSTP float ptr [ESI + 0x8]
// 0049b75f: TEST ECX,0x7fffffff
// 0049b765: JNZ 0x0049b76b
//   XREF to: 0049b76b (CONDITIONAL_JUMP)
// 0049b767: TEST EBX,EBX
// 0049b769: JZ 0x0049b799
//   XREF to: 0049b799 (CONDITIONAL_JUMP)
// 0049b76b: MOV EDI,dword ptr [EBP + 0x2c]
//   Label: LAB_0049b76b
//   XREF to: Stack[0x1c] (READ)
// 0049b76e: MOV EAX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0049b771: TEST EDI,0x7fffffff
// 0049b777: JNZ 0x0049b799
//   XREF to: 0049b799 (CONDITIONAL_JUMP)
// 0049b779: TEST EAX,EAX
// 0049b77b: JNZ 0x0049b799
//   XREF to: 0049b799 (CONDITIONAL_JUMP)
// 0049b77d: MOV EDX,dword ptr [EBP + 0x34]
//   XREF to: Stack[0x24] (READ)
// 0049b780: MOV ECX,dword ptr [EBP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 0049b783: TEST EDX,0x7fffffff
// 0049b789: JNZ 0x0049b799
//   XREF to: 0049b799 (CONDITIONAL_JUMP)
// 0049b78b: TEST ECX,ECX
// 0049b78d: JNZ 0x0049b799
//   XREF to: 0049b799 (CONDITIONAL_JUMP)
// 0049b78f: FLD double ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0049b792: FCHS
// 0049b794: FMUL double ptr [EBP + 0x38]
//   XREF to: Stack[0x28] (READ)
// 0049b797: FSTP float ptr [ESI]
// 0049b799: MOV EBX,dword ptr [EBP + 0x24]
//   Label: LAB_0049b799
//   XREF to: Stack[0x14] (READ)
// 0049b79c: MOV EDI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0049b79f: TEST EBX,0x7fffffff
// 0049b7a5: JNZ 0x0049b7d9
//   XREF to: 0049b7d9 (CONDITIONAL_JUMP)
// 0049b7a7: TEST EDI,EDI
// 0049b7a9: JNZ 0x0049b7d9
//   XREF to: 0049b7d9 (CONDITIONAL_JUMP)
// 0049b7ab: MOV EAX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 0049b7ae: MOV EDX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0049b7b1: TEST EAX,0x7fffffff
// 0049b7b6: JNZ 0x0049b7bc
//   XREF to: 0049b7bc (CONDITIONAL_JUMP)
// 0049b7b8: TEST EDX,EDX
// 0049b7ba: JZ 0x0049b7d9
//   XREF to: 0049b7d9 (CONDITIONAL_JUMP)
// 0049b7bc: MOV ECX,dword ptr [EBP + 0x34]
//   Label: LAB_0049b7bc
//   XREF to: Stack[0x24] (READ)
// 0049b7bf: MOV EBX,dword ptr [EBP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 0049b7c2: TEST ECX,0x7fffffff
// 0049b7c8: JNZ 0x0049b7d9
//   XREF to: 0049b7d9 (CONDITIONAL_JUMP)
// 0049b7ca: TEST EBX,EBX
// 0049b7cc: JNZ 0x0049b7d9
//   XREF to: 0049b7d9 (CONDITIONAL_JUMP)
// 0049b7ce: FLD double ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0049b7d1: FCHS
// 0049b7d3: FMUL double ptr [EBP + 0x38]
//   XREF to: Stack[0x28] (READ)
// 0049b7d6: FSTP float ptr [ESI + 0x4]
// 0049b7d9: MOV EDI,dword ptr [EBP + 0x24]
//   Label: LAB_0049b7d9
//   XREF to: Stack[0x14] (READ)
// 0049b7dc: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0049b7df: TEST EDI,0x7fffffff
// 0049b7e5: JNZ 0x0049b80f
//   XREF to: 0049b80f (CONDITIONAL_JUMP)
// 0049b7e7: TEST EAX,EAX
// 0049b7e9: JNZ 0x0049b80f
//   XREF to: 0049b80f (CONDITIONAL_JUMP)
// 0049b7eb: MOV EDX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 0049b7ee: MOV ECX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0049b7f1: TEST EDX,0x7fffffff
// 0049b7f7: JNZ 0x0049b80f
//   XREF to: 0049b80f (CONDITIONAL_JUMP)
// 0049b7f9: TEST ECX,ECX
// 0049b7fb: JNZ 0x0049b80f
//   XREF to: 0049b80f (CONDITIONAL_JUMP)
// 0049b7fd: MOV EBX,dword ptr [EBP + 0x34]
//   XREF to: Stack[0x24] (READ)
// 0049b800: MOV EDI,dword ptr [EBP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 0049b803: TEST EBX,0x7fffffff
// 0049b809: JNZ 0x0049b83d
//   XREF to: 0049b83d (CONDITIONAL_JUMP)
// 0049b80b: TEST EDI,EDI
// 0049b80d: JNZ 0x0049b83d
//   XREF to: 0049b83d (CONDITIONAL_JUMP)
// 0049b80f: MOV ESP,EBP
//   Label: LAB_0049b80f
// 0049b811: POP EBP
// 0049b812: POP EDI
// 0049b813: POP ESI
// 0049b814: POP EBX
// 0049b815: RET
// 0049b816: MOV EAX,0x622e2a
//   Label: LAB_0049b816
//   XREF to: 00622e2a (DATA)
// 0049b81b: MOV EDX,0x457
// 0049b820: PUSH 0x622e3b
//   XREF to: 00622e3b (DATA)
// 0049b825: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0049b82a: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0049b830: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0049b835: ADD ESP,0x4
// 0049b838: JMP 0x0049b70c
//   XREF to: 0049b70c (UNCONDITIONAL_JUMP)
// 0049b83d: FLD double ptr [EBP + 0x30]
//   Label: LAB_0049b83d
//   XREF to: Stack[0x20] (READ)
// 0049b840: FCHS
// 0049b842: FMUL double ptr [EBP + 0x38]
//   XREF to: Stack[0x28] (READ)
// 0049b845: FSTP float ptr [ESI + 0x8]
// 0049b848: MOV ESP,EBP
// 0049b84a: POP EBP
// 0049b84b: POP EDI
// 0049b84c: POP ESI
// 0049b84d: POP EBX
// 0049b84e: RET
