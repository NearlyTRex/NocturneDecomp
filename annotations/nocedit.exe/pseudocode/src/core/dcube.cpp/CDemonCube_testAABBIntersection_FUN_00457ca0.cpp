// Name: core_dcube.cpp_CDemonCube_testAABBIntersection_FUN_00457ca0
// Address: 00457ca0
// Address Range: [[00457ca0, 00457cea]]
// Convention: __cdecl
// Signature: int core_dcube.cpp_CDemonCube_testAABBIntersection_FUN_00457ca0(CDemonCube * this_ptr, CVector3f * aabb_min, CVector3f * aabb_max)
// Cross-references:
//   core_dcube.cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0 (00457cf0) at 00457df7 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dcube.cpp_clipTriangleToAABB_FUN_00456400

#include "nocturne.h"

int __cdecl
core_dcube_cpp_CDemonCube_testAABBIntersection_FUN_00457ca0
          (CDemonCube *this_ptr,CVector3f *aabb_min,CVector3f *aabb_max)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < this_ptr->triangle_count) {
    iVar2 = 0;
    do {
      uVar1 = core_dcube_cpp_clipTriangleToAABB_FUN_00456400
                        ((CVector3f **)((int)this_ptr->triangle_buffer->vertices + iVar2),aabb_min,
                         aabb_max);
      if (uVar1 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x20;
    } while (iVar3 < this_ptr->triangle_count);
  }
  return 0;
}


// Assembly code:
// 00457ca0: PUSH EBX
//   Label: core_dcube.cpp_CDemonCube_testAABBIntersection_FUN_00457ca0
// 00457ca1: PUSH ESI
// 00457ca2: PUSH EDI
// 00457ca3: PUSH EBP
// 00457ca4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00457ca8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00457cac: MOV EDX,dword ptr [EDI + 0x28]
// 00457caf: XOR ESI,ESI
// 00457cb1: TEST EDX,EDX
// 00457cb3: JLE 0x00457cda
//   XREF to: 00457cda (CONDITIONAL_JUMP)
// 00457cb5: XOR EBX,EBX
// 00457cb7: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00457cb7
//   XREF to: Stack[0xc] (READ)
// 00457cbb: PUSH EAX
// 00457cbc: MOV EAX,dword ptr [EDI + 0x2c]
// 00457cbf: PUSH EBP
// 00457cc0: ADD EAX,EBX
// 00457cc2: PUSH EAX
// 00457cc3: CALL core_dcube.cpp_clipTriangleToAABB_FUN_00456400
//   XREF to: 00456400 (UNCONDITIONAL_CALL)
// 00457cc8: ADD ESP,0xc
// 00457ccb: TEST EAX,EAX
// 00457ccd: JNZ 0x00457ce1
//   XREF to: 00457ce1 (CONDITIONAL_JUMP)
// 00457ccf: INC ESI
// 00457cd0: MOV ECX,dword ptr [EDI + 0x28]
// 00457cd3: ADD EBX,0x20
// 00457cd6: CMP ESI,ECX
// 00457cd8: JL 0x00457cb7
//   XREF to: 00457cb7 (CONDITIONAL_JUMP)
// 00457cda: XOR EAX,EAX
//   Label: LAB_00457cda
// 00457cdc: POP EBP
// 00457cdd: POP EDI
// 00457cde: POP ESI
// 00457cdf: POP EBX
// 00457ce0: RET
// 00457ce1: MOV EAX,0x1
//   Label: LAB_00457ce1
// 00457ce6: POP EBP
// 00457ce7: POP EDI
// 00457ce8: POP ESI
// 00457ce9: POP EBX
// 00457cea: RET
