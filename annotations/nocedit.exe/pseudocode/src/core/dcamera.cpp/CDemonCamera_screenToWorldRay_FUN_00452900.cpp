// Name: core_dcamera.cpp_CDemonCamera_screenToWorldRay_FUN_00452900
// Address: 00452900
// Address Range: [[00452900, 00452994]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_screenToWorldRay_FUN_00452900(CDemonCamera * this_ptr, CVector3f * output_ray, CVector3i * screen_coords, int depth)
// Globals:
//   double g_CameraFixedPointToFloatScale = 0.00390625
// Function calls:
//   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
//   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_screenToWorldRay_FUN_00452900
          (CDemonCamera *this_ptr,CVector3f *output_ray,CVector3i *screen_coords,int depth)

{
  float fVar1;
  BADSPACEBASE *in_ESP;
  byte bVar2;
  int aiStackY_1020 [1013];
  int in_stack_ffffffc0;
  CVector3i *in_stack_ffffffc4;
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_20;
  int local_1c;
  CVector3i CStack_18;
  
  bVar2 = 0;
  core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
            (this_ptr,screen_coords,depth,in_stack_ffffffc0);
  local_1c = iStack_30;
  *(undefined4 *)((int)&CStack_18 + (uint)bVar2 * -8) =
       *(undefined4 *)(&stack0xffffffd4 + (uint)bVar2 * -8);
  *(undefined4 *)((int)&CStack_18 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 4) =
       *(undefined4 *)(&stack0xffffffd8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
            ((CDemonCamera *)output_ray,&CStack_18,in_stack_ffffffc4);
  local_38 = iStack_20;
  *(undefined4 *)((int)&stack0xffffffcc + (uint)bVar2 * -8) =
       *(undefined4 *)((int)&stack0xffffffe4 + (uint)bVar2 * -8);
  *(undefined4 *)((int)&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(undefined4 *)((int)&CStack_18 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  fVar1 = (float)g_CameraFixedPointToFloatScale;
  output_ray->x = (float)local_38 * fVar1;
  output_ray->y = (float)local_34 * fVar1;
  output_ray->z = (float)iStack_30 * fVar1;
  return;
}


// Assembly code:
// 00452900: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_screenToWorldRay_FUN_00452900
// 00452901: PUSH ESI
// 00452902: PUSH EDI
// 00452903: SUB ESP,0x34
// 00452906: MOV EBX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 0045290a: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x10] (READ)
// 0045290e: PUSH EDX
// 0045290f: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0xc] (READ)
// 00452913: PUSH ECX
// 00452914: MOV ESI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 00452918: PUSH ESI
// 00452919: LEA ESI,[ESP + 0x18]
//   XREF to: Stack[-0x34] (DATA)
// 0045291d: LEA EDI,[ESP + 0x30]
//   XREF to: Stack[-0x1c] (DATA)
// 00452921: CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
//   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)
// 00452926: LEA ESI,[ESP + 0x18]
//   XREF to: Stack[-0x34] (DATA)
// 0045292a: ADD ESP,0xc
// 0045292d: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x1c] (DATA)
// 00452931: MOVSD ES:EDI,ESI
// 00452932: MOVSD ES:EDI,ESI
// 00452933: MOVSD ES:EDI,ESI
// 00452934: PUSH EAX
// 00452935: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 00452939: PUSH EDI
// 0045293a: LEA ESI,[ESP + 0x20]
//   XREF to: Stack[-0x28] (DATA)
// 0045293e: CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
//   XREF to: 0044d370 (UNCONDITIONAL_CALL)
// 00452943: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x40] (DATA)
// 00452947: LEA ESI,[ESP + 0x20]
//   XREF to: Stack[-0x28] (DATA)
// 0045294b: ADD ESP,0x8
// 0045294e: MOVSD ES:EDI,ESI
// 0045294f: MOVSD ES:EDI,ESI
// 00452950: MOVSD ES:EDI,ESI
// 00452951: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00452954: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00452958: FILD dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x10] (READ)
// 0045295c: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 00452960: FLD double ptr [0x0061a342]
//   XREF to: 0061a342 (READ)
// 00452966: FXCH
// 00452968: FMUL ST1
// 0045296a: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0045296e: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 00452972: FILD dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x10] (READ)
// 00452976: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0045297a: FMUL ST2
// 0045297c: FILD dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x10] (READ)
// 00452980: FMULP ST3
// 00452982: FXCH
// 00452984: FSTP float ptr [EBX]
// 00452986: FSTP float ptr [EBX + 0x4]
// 00452989: MOV EAX,EBX
// 0045298b: FSTP float ptr [EBX + 0x8]
// 0045298e: ADD ESP,0x34
// 00452991: POP EDI
// 00452992: POP ESI
// 00452993: POP EBX
// 00452994: RET
