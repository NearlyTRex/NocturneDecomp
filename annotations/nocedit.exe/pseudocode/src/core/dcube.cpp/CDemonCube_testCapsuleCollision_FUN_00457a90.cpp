// Name: core_dcube.cpp_CDemonCube_testCapsuleCollision_FUN_00457a90
// Address: 00457a90
// Address Range: [[00457a90, 00457b5f]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_CDemonCube_testCapsuleCollision_FUN_00457a90(CDemonCube * this_ptr, SIntersectXZCylinder * capsule_data)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60 (00496c60) at 00496dda [UNCONDITIONAL_CALL]
// Globals:
//   CVector3f g_TempNormal0
//   undefined4 g_TempNormal0.y
//   undefined4 g_TempNormal0.z
//   CVector3f g_TempNormal1
//   undefined4 g_TempNormal1.y
//   undefined4 g_TempNormal1.z
//   CVector3f g_TempNormal2
//   undefined4 g_TempNormal2.y
//   undefined4 g_TempNormal2.z
// Function calls:
//   core_dcube.cpp_intersectTriangleWithXZCapsule_FUN_00455a30

#include "nocturne.h"

void __cdecl
core_dcube_cpp_CDemonCube_testCapsuleCollision_FUN_00457a90
          (CDemonCube *this_ptr,SIntersectXZCylinder *capsule_data)

{
  CVector3f *pCVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = -1;
  iVar3 = 0;
  if (0 < this_ptr->triangle_count) {
    iVar5 = 0;
    do {
      uVar2 = core_dcube_cpp_intersectTriangleWithXZCapsule_FUN_00455a30
                        ((CVector3f **)((int)this_ptr->triangle_buffer->vertices + iVar5),
                         capsule_data);
      if (uVar2 != 0) {
        iVar4 = iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x20;
    } while (iVar3 < this_ptr->triangle_count);
  }
  if (-1 < iVar4) {
    pCVar1 = this_ptr->triangle_buffer[iVar4].vertices[0];
    if (pCVar1 != &g_TempNormal0) {
      g_TempNormal0.x = pCVar1->x;
      g_TempNormal0.z = pCVar1->z;
      g_TempNormal0.y = pCVar1->y;
    }
    pCVar1 = this_ptr->triangle_buffer[iVar4].vertices[1];
    if (pCVar1 != &g_TempNormal1) {
      g_TempNormal1.x = pCVar1->x;
      g_TempNormal1.z = pCVar1->z;
      g_TempNormal1.y = pCVar1->y;
    }
    pCVar1 = this_ptr->triangle_buffer[iVar4].vertices[2];
    if (pCVar1 != &g_TempNormal2) {
      g_TempNormal2.y = pCVar1->y;
      g_TempNormal2.z = pCVar1->z;
      g_TempNormal2.x = pCVar1->x;
      return;
    }
  }
  return;
}


// Assembly code:
// 00457a90: PUSH EBX
//   Label: core_dcube.cpp_CDemonCube_testCapsuleCollision_FUN_00457a90
// 00457a91: PUSH ESI
// 00457a92: PUSH EDI
// 00457a93: PUSH EBP
// 00457a94: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00457a98: MOV EBP,0xffffffff
// 00457a9d: MOV EDX,dword ptr [EDI + 0x28]
// 00457aa0: XOR EBX,EBX
// 00457aa2: TEST EDX,EDX
// 00457aa4: JLE 0x00457acc
//   XREF to: 00457acc (CONDITIONAL_JUMP)
// 00457aa6: XOR ESI,ESI
// 00457aa8: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_00457aa8
//   XREF to: Stack[0x8] (READ)
// 00457aac: PUSH EAX
// 00457aad: MOV EAX,dword ptr [EDI + 0x2c]
// 00457ab0: ADD EAX,ESI
// 00457ab2: PUSH EAX
// 00457ab3: CALL core_dcube.cpp_intersectTriangleWithXZCapsule_FUN_00455a30
//   XREF to: 00455a30 (UNCONDITIONAL_CALL)
// 00457ab8: ADD ESP,0x8
// 00457abb: TEST EAX,EAX
// 00457abd: JZ 0x00457ac1
//   XREF to: 00457ac1 (CONDITIONAL_JUMP)
// 00457abf: MOV EBP,EBX
// 00457ac1: INC EBX
//   Label: LAB_00457ac1
// 00457ac2: MOV ECX,dword ptr [EDI + 0x28]
// 00457ac5: ADD ESI,0x20
// 00457ac8: CMP EBX,ECX
// 00457aca: JL 0x00457aa8
//   XREF to: 00457aa8 (CONDITIONAL_JUMP)
// 00457acc: TEST EBP,EBP
//   Label: LAB_00457acc
// 00457ace: JL 0x00457b20
//   XREF to: 00457b20 (CONDITIONAL_JUMP)
// 00457ad0: MOV EBX,EBP
// 00457ad2: MOV EAX,dword ptr [EDI + 0x2c]
// 00457ad5: SHL EBX,0x5
// 00457ad8: MOV EAX,dword ptr [EBX + EAX*0x1]
// 00457adb: CMP EAX,0x15c4800
//   XREF to: 015c4800 (DATA)
// 00457ae0: JNZ 0x00457b25
//   XREF to: 00457b25 (CONDITIONAL_JUMP)
// 00457ae2: MOV EBX,EBP
//   Label: LAB_00457ae2
// 00457ae4: MOV EAX,dword ptr [EDI + 0x2c]
// 00457ae7: SHL EBX,0x5
// 00457aea: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4]
// 00457aee: CMP EAX,0x15c480c
//   XREF to: 015c480c (DATA)
// 00457af3: JZ 0x00457b0f
//   XREF to: 00457b0f (CONDITIONAL_JUMP)
// 00457af5: FLD float ptr [EAX]
// 00457af7: FLD float ptr [EAX + 0x8]
// 00457afa: MOV EDX,dword ptr [EAX + 0x4]
// 00457afd: MOV dword ptr [0x015c4810],EDX
//   XREF to: 015c4810 (WRITE)
// 00457b03: FSTP float ptr [0x015c4814]
//   XREF to: 015c4814 (WRITE)
// 00457b09: FSTP float ptr [0x015c480c]
//   XREF to: 015c480c (WRITE)
// 00457b0f: SHL EBP,0x5
//   Label: LAB_00457b0f
// 00457b12: MOV EAX,dword ptr [EDI + 0x2c]
// 00457b15: MOV EAX,dword ptr [EAX + EBP*0x1 + 0x8]
// 00457b19: CMP EAX,0x15c4818
//   XREF to: 015c4818 (DATA)
// 00457b1e: JNZ 0x00457b41
//   XREF to: 00457b41 (CONDITIONAL_JUMP)
// 00457b20: POP EBP
//   Label: LAB_00457b20
// 00457b21: POP EDI
// 00457b22: POP ESI
// 00457b23: POP EBX
// 00457b24: RET
// 00457b25: FLD float ptr [EAX]
//   Label: LAB_00457b25
// 00457b27: FLD float ptr [EAX + 0x8]
// 00457b2a: MOV EDX,dword ptr [EAX + 0x4]
// 00457b2d: MOV dword ptr [0x015c4804],EDX
//   XREF to: 015c4804 (WRITE)
// 00457b33: FSTP float ptr [0x015c4808]
//   XREF to: 015c4808 (WRITE)
// 00457b39: FSTP float ptr [0x015c4800]
//   XREF to: 015c4800 (WRITE)
// 00457b3f: JMP 0x00457ae2
//   XREF to: 00457ae2 (UNCONDITIONAL_JUMP)
// 00457b41: FLD float ptr [EAX]
//   Label: LAB_00457b41
// 00457b43: FLD float ptr [EAX + 0x8]
// 00457b46: MOV EDX,dword ptr [EAX + 0x4]
// 00457b49: MOV dword ptr [0x015c481c],EDX
//   XREF to: 015c481c (WRITE)
// 00457b4f: FSTP float ptr [0x015c4820]
//   XREF to: 015c4820 (WRITE)
// 00457b55: FSTP float ptr [0x015c4818]
//   XREF to: 015c4818 (WRITE)
// 00457b5b: POP EBP
// 00457b5c: POP EDI
// 00457b5d: POP ESI
// 00457b5e: POP EBX
// 00457b5f: RET
