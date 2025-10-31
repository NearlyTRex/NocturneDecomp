// Name: core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60
// Address: 00457b60
// Address Range: [[00457b60, 00457c9d]]
// Convention: __cdecl
// Signature: int core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60(CDemonCube * this_ptr, CVector3f * cylinder_position, float cylinder_radius, CVector3f * output_height, CVector3f * output_normal, uint * output_material)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950 (00496950) at 00496ac1 [UNCONDITIONAL_CALL]
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
//   core_dcube.cpp_triangleCylinderCollision_FUN_00456040

#include "nocturne.h"

int __cdecl
core_dcube_cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60
          (CDemonCube *this_ptr,CVector3f *cylinder_position,float cylinder_radius,
          CVector3f *output_height,CVector3f *output_normal,uint *output_material)

{
  float fVar1;
  float fVar2;
  CVector3f *pCVar3;
  CDemonCubeTriangle *pCVar4;
  uint uVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  int iVar8;
  CVector3f local_1c;
  
  iVar7 = -1;
  iVar6 = 0;
  if (0 < this_ptr->triangle_count) {
    iVar8 = 0;
    do {
      uVar5 = core_dcube_cpp_triangleCylinderCollision_FUN_00456040
                        ((CDemonCubeTriangle *)((int)this_ptr->triangle_buffer->vertices + iVar8),
                         cylinder_position,cylinder_radius,&output_height->x);
      if (uVar5 != 0) {
        iVar7 = iVar6;
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x20;
    } while (iVar6 < this_ptr->triangle_count);
  }
  if (-1 < iVar7) {
    pCVar3 = this_ptr->triangle_buffer[iVar7].vertices[0];
    if (pCVar3 != &g_TempNormal0) {
      g_TempNormal0.x = pCVar3->x;
      g_TempNormal0.z = pCVar3->z;
      g_TempNormal0.y = pCVar3->y;
    }
    pCVar3 = this_ptr->triangle_buffer[iVar7].vertices[1];
    if (pCVar3 != &g_TempNormal1) {
      g_TempNormal1.x = pCVar3->x;
      g_TempNormal1.z = pCVar3->z;
      g_TempNormal1.y = pCVar3->y;
    }
    pCVar3 = this_ptr->triangle_buffer[iVar7].vertices[2];
    if (pCVar3 != &g_TempNormal2) {
      g_TempNormal2.x = pCVar3->x;
      g_TempNormal2.z = pCVar3->z;
      g_TempNormal2.y = pCVar3->y;
    }
    *output_material = (uint)*(byte *)((int)this_ptr->ground_type_memory + iVar7);
    pCVar4 = this_ptr->triangle_buffer;
    fVar1 = pCVar4[iVar7].normal.y;
    fVar2 = pCVar4[iVar7].normal.z;
    if (&local_1c != output_normal) {
      output_normal->x = -pCVar4[iVar7].normal.x;
      output_normal->y = -fVar1;
      output_normal->z = -fVar2;
    }
    return 1;
  }
  return 0;
}


// Assembly code:
// 00457b60: PUSH EBX
//   Label: core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60
// 00457b61: PUSH ESI
// 00457b62: PUSH EDI
// 00457b63: PUSH EBP
// 00457b64: SUB ESP,0xc
// 00457b67: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00457b6b: MOV EBP,0xffffffff
// 00457b70: MOV EDX,dword ptr [EDI + 0x28]
// 00457b73: XOR EBX,EBX
// 00457b75: TEST EDX,EDX
// 00457b77: JLE 0x00457ba8
//   XREF to: 00457ba8 (CONDITIONAL_JUMP)
// 00457b79: XOR ESI,ESI
// 00457b7b: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_00457b7b
//   XREF to: Stack[0x10] (READ)
// 00457b7f: PUSH EAX
// 00457b80: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00457b84: PUSH dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 00457b88: MOV EAX,dword ptr [EDI + 0x2c]
// 00457b8b: PUSH EDX
// 00457b8c: ADD EAX,ESI
// 00457b8e: PUSH EAX
// 00457b8f: CALL core_dcube.cpp_triangleCylinderCollision_FUN_00456040
//   XREF to: 00456040 (UNCONDITIONAL_CALL)
// 00457b94: ADD ESP,0x10
// 00457b97: TEST EAX,EAX
// 00457b99: JZ 0x00457b9d
//   XREF to: 00457b9d (CONDITIONAL_JUMP)
// 00457b9b: MOV EBP,EBX
// 00457b9d: INC EBX
//   Label: LAB_00457b9d
// 00457b9e: MOV ECX,dword ptr [EDI + 0x28]
// 00457ba1: ADD ESI,0x20
// 00457ba4: CMP EBX,ECX
// 00457ba6: JL 0x00457b7b
//   XREF to: 00457b7b (CONDITIONAL_JUMP)
// 00457ba8: TEST EBP,EBP
//   Label: LAB_00457ba8
// 00457baa: JL 0x00457c94
//   XREF to: 00457c94 (CONDITIONAL_JUMP)
// 00457bb0: MOV EBX,EBP
// 00457bb2: MOV EAX,dword ptr [EDI + 0x2c]
// 00457bb5: SHL EBX,0x5
// 00457bb8: MOV EAX,dword ptr [EBX + EAX*0x1]
// 00457bbb: CMP EAX,0x15c4800
//   XREF to: 015c4800 (DATA)
// 00457bc0: JZ 0x00457bdc
//   XREF to: 00457bdc (CONDITIONAL_JUMP)
// 00457bc2: FLD float ptr [EAX]
// 00457bc4: FLD float ptr [EAX + 0x8]
// 00457bc7: MOV EDX,dword ptr [EAX + 0x4]
// 00457bca: MOV dword ptr [0x015c4804],EDX
//   XREF to: 015c4804 (WRITE)
// 00457bd0: FSTP float ptr [0x015c4808]
//   XREF to: 015c4808 (WRITE)
// 00457bd6: FSTP float ptr [0x015c4800]
//   XREF to: 015c4800 (WRITE)
// 00457bdc: MOV EAX,EBP
//   Label: LAB_00457bdc
// 00457bde: MOV EBX,dword ptr [EDI + 0x2c]
// 00457be1: SHL EAX,0x5
// 00457be4: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4]
// 00457be8: CMP EAX,0x15c480c
//   XREF to: 015c480c (DATA)
// 00457bed: JZ 0x00457c09
//   XREF to: 00457c09 (CONDITIONAL_JUMP)
// 00457bef: FLD float ptr [EAX]
// 00457bf1: FLD float ptr [EAX + 0x8]
// 00457bf4: MOV EDX,dword ptr [EAX + 0x4]
// 00457bf7: MOV dword ptr [0x015c4810],EDX
//   XREF to: 015c4810 (WRITE)
// 00457bfd: FSTP float ptr [0x015c4814]
//   XREF to: 015c4814 (WRITE)
// 00457c03: FSTP float ptr [0x015c480c]
//   XREF to: 015c480c (WRITE)
// 00457c09: MOV EBX,EBP
//   Label: LAB_00457c09
// 00457c0b: MOV EAX,dword ptr [EDI + 0x2c]
// 00457c0e: SHL EBX,0x5
// 00457c11: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8]
// 00457c15: CMP EAX,0x15c4818
//   XREF to: 015c4818 (DATA)
// 00457c1a: JZ 0x00457c36
//   XREF to: 00457c36 (CONDITIONAL_JUMP)
// 00457c1c: FLD float ptr [EAX]
// 00457c1e: FLD float ptr [EAX + 0x8]
// 00457c21: MOV EDX,dword ptr [EAX + 0x4]
// 00457c24: MOV dword ptr [0x015c481c],EDX
//   XREF to: 015c481c (WRITE)
// 00457c2a: FSTP float ptr [0x015c4820]
//   XREF to: 015c4820 (WRITE)
// 00457c30: FSTP float ptr [0x015c4818]
//   XREF to: 015c4818 (WRITE)
// 00457c36: MOV EAX,dword ptr [EDI + 0x30]
//   Label: LAB_00457c36
// 00457c39: MOV AL,byte ptr [EAX + EBP*0x1]
// 00457c3c: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x18] (READ)
// 00457c40: AND EAX,0xff
// 00457c45: MOV dword ptr [EBX],EAX
// 00457c47: MOV EAX,dword ptr [EDI + 0x2c]
// 00457c4a: SHL EBP,0x5
// 00457c4d: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x14] (READ)
// 00457c51: FLD float ptr [EAX + EBP*0x1 + 0xc]
// 00457c55: FCHS
// 00457c57: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00457c5a: FLD float ptr [EAX + EBP*0x1 + 0x10]
// 00457c5e: FCHS
// 00457c60: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (WRITE)
// 00457c64: FLD float ptr [EAX + EBP*0x1 + 0x14]
// 00457c68: FCHS
// 00457c6a: MOV EAX,ESP
// 00457c6c: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (WRITE)
// 00457c70: CMP EAX,EBX
// 00457c72: JZ 0x00457c87
//   XREF to: 00457c87 (CONDITIONAL_JUMP)
// 00457c74: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00457c77: MOV dword ptr [EBX],EAX
// 00457c79: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 00457c7d: MOV dword ptr [EBX + 0x4],EAX
// 00457c80: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 00457c84: MOV dword ptr [EBX + 0x8],EAX
// 00457c87: MOV EAX,0x1
//   Label: LAB_00457c87
// 00457c8c: ADD ESP,0xc
// 00457c8f: POP EBP
// 00457c90: POP EDI
// 00457c91: POP ESI
// 00457c92: POP EBX
// 00457c93: RET
// 00457c94: XOR EAX,EAX
//   Label: LAB_00457c94
// 00457c96: ADD ESP,0xc
// 00457c99: POP EBP
// 00457c9a: POP EDI
// 00457c9b: POP ESI
// 00457c9c: POP EBX
// 00457c9d: RET
