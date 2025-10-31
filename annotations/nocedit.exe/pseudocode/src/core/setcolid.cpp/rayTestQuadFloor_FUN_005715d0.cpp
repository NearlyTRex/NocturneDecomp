// Name: core_setcolid.cpp_rayTestQuadFloor_FUN_005715d0
// Address: 005715d0
// Address Range: [[005715d0, 005716a0]]
// Convention: __cdecl
// Signature: int core_setcolid.cpp_rayTestQuadFloor_FUN_005715d0(float x, float z, CVector3f * out_height, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3, CVector3f * vertex4, CVector3f * out_transformed_normal)
// Function calls:
//   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0

#include "nocturne.h"

int __cdecl
core_setcolid_cpp_rayTestQuadFloor_FUN_005715d0
          (float x,float z,CVector3f *out_height,CVector3f *vertex1,CVector3f *vertex2,
          CVector3f *vertex3,CVector3f *vertex4,CVector3f *out_transformed_normal)

{
  uint uVar1;
  uint uVar2;
  BADSPACEBASE *in_ESP;
  CVector3f *in_stack_00000024;
  CDemonTriangle CStack_48;
  
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)&stack0xffffffac,vertex1,vertex2,vertex3);
  uVar1 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
                    ((CDemonTriangle *)&stack0xffffffb0,z,(float)out_height,&vertex1->x);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)&stack0xffffffb4,vertex3,out_transformed_normal,in_stack_00000024);
  uVar2 = core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0(&CStack_48,z,(float)vertex2,&vertex1->x);
  uVar1 = uVar1 | uVar2;
  if (uVar1 != 0) {
    if (out_transformed_normal != (CVector3f *)&stack0xfffffff4) {
      out_transformed_normal->x = -CStack_48.normal.y;
      out_transformed_normal->y = -CStack_48.normal.z;
      out_transformed_normal->z = -CStack_48.plane_distance;
      return uVar1;
    }
  }
  return uVar1;
}


// Assembly code:
// 005715d0: PUSH EBX
//   Label: core_setcolid.cpp_rayTestQuadFloor_FUN_005715d0
// 005715d1: PUSH ESI
// 005715d2: PUSH EDI
// 005715d3: PUSH EBP
// 005715d4: SUB ESP,0x44
// 005715d7: MOV ESI,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x20] (READ)
// 005715db: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x18] (READ)
// 005715df: PUSH EDX
// 005715e0: MOV ECX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x14] (READ)
// 005715e4: PUSH ECX
// 005715e5: MOV EBX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x10] (READ)
// 005715e9: PUSH EBX
// 005715ea: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x54] (DATA)
// 005715ee: PUSH EAX
// 005715ef: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 005715f4: ADD ESP,0x10
// 005715f7: MOV EDI,dword ptr [ESP + 0x60]
//   XREF to: Stack[0xc] (READ)
// 005715fb: PUSH EDI
// 005715fc: MOV EBP,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x4] (READ)
// 00571600: PUSH dword ptr [ESP + 0x60]
//   XREF to: Stack[0x8] (READ)
// 00571604: PUSH EBP
// 00571605: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x54] (DATA)
// 00571609: PUSH EAX
// 0057160a: CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
//   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)
// 0057160f: ADD ESP,0x10
// 00571612: MOV EBX,EAX
// 00571614: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x1c] (READ)
// 00571618: PUSH EAX
// 00571619: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x18] (READ)
// 0057161d: PUSH EDX
// 0057161e: MOV ECX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x10] (READ)
// 00571622: PUSH ECX
// 00571623: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x54] (DATA)
// 00571627: PUSH EAX
// 00571628: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 0057162d: ADD ESP,0x10
// 00571630: PUSH EDI
// 00571631: PUSH dword ptr [ESP + 0x60]
//   XREF to: Stack[0x8] (READ)
// 00571635: PUSH EBP
// 00571636: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x54] (DATA)
// 0057163a: PUSH EAX
// 0057163b: CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
//   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)
// 00571640: MOV EDX,EBX
// 00571642: ADD ESP,0x10
// 00571645: OR EDX,EAX
// 00571647: JZ 0x00571679
//   XREF to: 00571679 (CONDITIONAL_JUMP)
// 00571649: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x30] (READ)
// 0057164d: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x2c] (READ)
// 00571651: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x28] (READ)
// 00571655: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x1c] (DATA)
// 00571659: FXCH ST2
// 0057165b: FCHS
// 0057165d: FXCH
// 0057165f: FCHS
// 00571661: FXCH ST2
// 00571663: FCHS
// 00571665: FXCH ST2
// 00571667: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x18] (WRITE)
// 0057166b: FXCH
// 0057166d: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (WRITE)
// 00571671: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x1c] (WRITE)
// 00571675: CMP ESI,EAX
// 00571677: JNZ 0x00571683
//   XREF to: 00571683 (CONDITIONAL_JUMP)
// 00571679: MOV EAX,EDX
//   Label: LAB_00571679
// 0057167b: ADD ESP,0x44
// 0057167e: POP EBP
// 0057167f: POP EDI
// 00571680: POP ESI
// 00571681: POP EBX
// 00571682: RET
// 00571683: MOV EAX,dword ptr [ESP + 0x38]
//   Label: LAB_00571683
//   XREF to: Stack[-0x1c] (DATA)
// 00571687: MOV dword ptr [ESI],EAX
// 00571689: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x18] (READ)
// 0057168d: MOV dword ptr [ESI + 0x4],EAX
// 00571690: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (READ)
// 00571694: MOV dword ptr [ESI + 0x8],EAX
// 00571697: MOV EAX,EDX
// 00571699: ADD ESP,0x44
// 0057169c: POP EBP
// 0057169d: POP EDI
// 0057169e: POP ESI
// 0057169f: POP EBX
// 005716a0: RET
