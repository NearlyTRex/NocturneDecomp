// Name: core_skeleton.cpp_CDeformableModel_skinVertices_FUN_0059a880
// Address: 0059a880
// Address Range: [[0059a880, 0059a9f5]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModel_skinVertices_FUN_0059a880(CDeformableModel * this_ptr, int lod_index, CMatrix3x4f * bone_matrices, int * output_buffer)
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0 (005a01d0) at 005a01f9 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00662e98 = 256
// Function calls:
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_skinVertices_FUN_0059a880
          (CDeformableModel *this_ptr,int lod_index,CMatrix3x4f *bone_matrices,int *output_buffer)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  float *pfVar3;
  float *pfVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  CVector3f local_54;
  float local_44;
  float local_40;
  CVector3f local_3c;
  float local_30;
  CVector3f local_2c;
  int local_20;
  int local_1c;
  int *local_18;
  float *local_14;
  
  local_18 = output_buffer;
  local_2c.z = (float)(lod_index << 2);
  local_1c = 0;
  for (local_20 = 0; local_20 < *(int *)((int)this_ptr->vertex_count + (int)local_2c.z);
      local_20 = local_20 + 1) {
    pfVar3 = (float *)(local_1c + *(int *)((int)this_ptr->vertex_data_ptr + (int)local_2c.z));
    pCVar2 = (CVector3f *)(pfVar3 + 4);
    local_14 = pfVar3;
    if (*(char *)pfVar3 == '\x01') {
      pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_3c,pCVar2,bone_matrices + *(byte *)((int)pfVar3 + 1));
      if (&local_2c != pCVar2) {
        local_2c.x = pCVar2->x;
        local_2c.y = pCVar2->y;
        local_2c.z = pCVar2->z;
      }
    }
    else {
      iVar5 = 0;
      local_2c.x = 0.0;
      local_30 = 0.0;
      local_2c.y = 0.0;
      pfVar4 = pfVar3;
      while( true ) {
        pfVar4 = pfVar4 + 1;
        if ((int)(uint)*(byte *)local_14 <= iVar5) break;
        pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                           (&local_54,pCVar2,bone_matrices + *(byte *)((int)pfVar3 + 1));
        local_44 = pCVar1->x * *pfVar4;
        local_40 = pCVar1->y * *pfVar4;
        local_3c.x = pCVar1->z * *pfVar4;
        pfVar3 = (float *)((int)pfVar3 + 1);
        iVar5 = iVar5 + 1;
        pCVar2 = pCVar2 + 1;
        local_2c.x = local_2c.x + local_44;
        local_2c.y = local_2c.y + local_40;
        local_2c.z = local_2c.z + local_3c.x;
      }
    }
    *local_18 = (int)ROUND(local_30 * FLOAT_00662e98);
    local_18[1] = (int)ROUND(local_2c.x * FLOAT_00662e98);
    local_18[2] = (int)ROUND(local_2c.y * FLOAT_00662e98);
    local_18 = local_18 + 3;
    local_1c = local_1c + 0x34;
  }
  return;
}


// Assembly code:
// 0059a880: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_skinVertices_FUN_0059a880
// 0059a881: PUSH ESI
// 0059a882: PUSH EDI
// 0059a883: PUSH EBP
// 0059a884: SUB ESP,0x44
// 0059a887: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x10] (READ)
// 0059a88b: XOR EDX,EDX
// 0059a88d: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0059a891: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x8] (READ)
// 0059a895: MOV dword ptr [ESP + 0x34],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0059a899: SHL EAX,0x2
// 0059a89c: MOV dword ptr [ESP + 0x38],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059a8a0: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0059a8a4: MOV EAX,dword ptr [ESP + 0x58]
//   Label: LAB_0059a8a4
//   XREF to: Stack[0x4] (READ)
// 0059a8a8: ADD EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (READ)
// 0059a8ac: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x20] (READ)
// 0059a8b0: CMP EBX,dword ptr [EAX + 0x2c]
// 0059a8b3: JGE 0x0059a9ee
//   XREF to: 0059a9ee (CONDITIONAL_JUMP)
// 0059a8b9: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x1c] (READ)
// 0059a8bd: MOV EAX,dword ptr [EAX + 0x40]
// 0059a8c0: ADD EDX,EAX
// 0059a8c2: MOV dword ptr [ESP + 0x40],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0059a8c6: LEA EBP,[EDX + 0x10]
// 0059a8c9: CMP byte ptr [EDX],0x1
// 0059a8cc: JZ 0x0059a9ac
//   XREF to: 0059a9ac (CONDITIONAL_JUMP)
// 0059a8d2: MOV EBX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (READ)
// 0059a8d6: XOR EDI,EDI
// 0059a8d8: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (READ)
// 0059a8dc: MOV dword ptr [ESP + 0x28],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 0059a8e0: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 0059a8e4: ADD EBX,0x4
// 0059a8e7: MOV dword ptr [ESP + 0x2c],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 0059a8eb: MOV EDX,dword ptr [ESP + 0x40]
//   Label: LAB_0059a8eb
//   XREF to: Stack[-0x14] (READ)
// 0059a8ef: XOR EAX,EAX
// 0059a8f1: MOV AL,byte ptr [EDX]
// 0059a8f3: CMP EDI,EAX
// 0059a8f5: JGE 0x0059a962
//   XREF to: 0059a962 (CONDITIONAL_JUMP)
// 0059a8f7: XOR EAX,EAX
// 0059a8f9: MOV AL,byte ptr [ESI + 0x1]
// 0059a8fc: IMUL EAX,EAX,0x30
// 0059a8ff: ADD EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0xc] (READ)
// 0059a903: PUSH EAX
// 0059a904: PUSH EBP
// 0059a905: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x54] (DATA)
// 0059a909: PUSH EAX
// 0059a90a: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0059a90f: FLD float ptr [EAX]
// 0059a911: FMUL float ptr [EBX]
// 0059a913: ADD ESP,0xc
// 0059a916: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x48] (WRITE)
// 0059a91a: FLD float ptr [EAX + 0x4]
// 0059a91d: FMUL float ptr [EBX]
// 0059a91f: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x44] (WRITE)
// 0059a923: FLD float ptr [EAX + 0x8]
// 0059a926: FMUL float ptr [EBX]
// 0059a928: INC ESI
// 0059a929: ADD EBX,0x4
// 0059a92c: INC EDI
// 0059a92d: ADD EBP,0xc
// 0059a930: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x30] (READ)
// 0059a934: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x2c] (READ)
// 0059a938: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x28] (READ)
// 0059a93c: FXCH ST2
// 0059a93e: FADD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x48] (READ)
// 0059a942: FXCH
// 0059a944: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x44] (READ)
// 0059a948: FXCH ST3
// 0059a94a: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x40] (WRITE)
// 0059a94e: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x30] (WRITE)
// 0059a952: FADD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x40] (READ)
// 0059a956: FXCH
// 0059a958: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x2c] (WRITE)
// 0059a95c: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x28] (WRITE)
// 0059a960: JMP 0x0059a8eb
//   XREF to: 0059a8eb (UNCONDITIONAL_JUMP)
// 0059a962: MOV EBX,dword ptr [ESP + 0x3c]
//   Label: LAB_0059a962
//   XREF to: Stack[-0x18] (READ)
// 0059a966: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x30] (DATA)
// 0059a96a: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x20] (READ)
// 0059a96e: FLD float ptr [EAX]
//   XREF to: Stack[-0x30] (DATA)
// 0059a970: FMUL float ptr [0x00662e98]
//   XREF to: 00662e98 (READ)
// 0059a976: FISTP dword ptr [EBX]
// 0059a978: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 0059a97b: FMUL float ptr [0x00662e98]
//   XREF to: 00662e98 (READ)
// 0059a981: FISTP dword ptr [EBX + 0x4]
// 0059a984: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 0059a987: FMUL float ptr [0x00662e98]
//   XREF to: 00662e98 (READ)
// 0059a98d: FISTP dword ptr [EBX + 0x8]
// 0059a990: LEA ECX,[EBX + 0xc]
// 0059a993: INC ESI
// 0059a994: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x1c] (READ)
// 0059a998: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0059a99c: ADD EBX,0x34
// 0059a99f: MOV dword ptr [ESP + 0x34],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 0059a9a3: MOV dword ptr [ESP + 0x38],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059a9a7: JMP 0x0059a8a4
//   XREF to: 0059a8a4 (UNCONDITIONAL_JUMP)
// 0059a9ac: MOV EDX,dword ptr [ESP + 0x40]
//   Label: LAB_0059a9ac
//   XREF to: Stack[-0x14] (READ)
// 0059a9b0: XOR EAX,EAX
// 0059a9b2: MOV AL,byte ptr [EDX + 0x1]
// 0059a9b5: IMUL EAX,EAX,0x30
// 0059a9b8: ADD EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0xc] (READ)
// 0059a9bc: PUSH EAX
// 0059a9bd: PUSH EBP
// 0059a9be: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x3c] (DATA)
// 0059a9c2: PUSH EAX
// 0059a9c3: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0059a9c8: MOV EBX,EAX
// 0059a9ca: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x30] (DATA)
// 0059a9ce: ADD ESP,0xc
// 0059a9d1: CMP EAX,EBX
// 0059a9d3: JZ 0x0059a962
//   XREF to: 0059a962 (CONDITIONAL_JUMP)
// 0059a9d5: MOV EAX,dword ptr [EBX]
// 0059a9d7: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0059a9db: MOV EAX,dword ptr [EBX + 0x4]
// 0059a9de: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0059a9e2: MOV EAX,dword ptr [EBX + 0x8]
// 0059a9e5: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0059a9e9: JMP 0x0059a962
//   XREF to: 0059a962 (UNCONDITIONAL_JUMP)
// 0059a9ee: ADD ESP,0x44
//   Label: LAB_0059a9ee
// 0059a9f1: POP EBP
// 0059a9f2: POP EDI
// 0059a9f3: POP ESI
// 0059a9f4: POP EBX
// 0059a9f5: RET
