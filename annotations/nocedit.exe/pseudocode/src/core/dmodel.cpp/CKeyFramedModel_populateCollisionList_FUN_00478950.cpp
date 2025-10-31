// Name: core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950
// Address: 00478950
// Address Range: [[00478950, 00478bf9]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950(CKeyFramedModel * this_ptr, CVector3f * transform_vector)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830 (00478830) at 0047892b [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00478740 (00478740) at 004787a3 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00478650 (00478650) at 0047868e [UNCONDITIONAL_CALL]
// Globals:
//   float g_Fixed16ToFloat = 0.00390625
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_00478950
          (CKeyFramedModel *this_ptr,CVector3f *transform_vector)

{
  int *piVar1;
  CVector3f *pCVar2;
  CMatrix3x3f *pCVar3;
  BADSPACEBASE *in_ESP;
  CDemonTriangle *this_ptr_00;
  int unaff_ESI;
  int iVar4;
  int unaff_EDI;
  int iVar5;
  int unaff_retaddr;
  CVector3f local_60;
  undefined1 local_54 [8];
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  float local_3c;
  CVector3f CStack_38;
  int local_2c;
  CMatrix3x3f *local_28;
  CMatrix3x3f *local_24;
  int local_20;
  int local_1c;
  CMatrix3x3f *local_18;
  int local_14;
  
  if (&this_ptr->transform_vector != transform_vector) {
    (this_ptr->transform_vector).x = transform_vector->x;
    (this_ptr->transform_vector).y = transform_vector->y;
    (this_ptr->transform_vector).z = transform_vector->z;
  }
  pCVar3 = &this_ptr->rotation_matrix_workspace;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(pCVar3,&this_ptr->transform_vector);
  local_2c = 0;
  this_ptr_00 = (CDemonTriangle *)transform_vector[0x737].y;
  local_28 = pCVar3;
  local_24 = pCVar3;
  local_18 = pCVar3;
  if (0 < (int)transform_vector[0x15].y) {
    do {
      local_14 = (int)transform_vector[0x16].y + (int)transform_vector[0x15].z * local_2c * 0xc;
      local_1c = 0;
      if (0 < (int)transform_vector[0x16].z) {
        local_20 = 0;
        do {
          pCVar3 = (CMatrix3x3f *)(local_20 + (int)transform_vector[0x17].x);
          piVar1 = (int *)((int)pCVar3->m[2].x * 0xc + local_14);
          local_44._0_4_ = (float)*piVar1 * g_Fixed16ToFloat;
          local_44._4_4_ = (float)piVar1[1] * g_Fixed16ToFloat;
          local_3c = (float)piVar1[2] * g_Fixed16ToFloat;
          piVar1 = (int *)((int)pCVar3[1].m[0].x * 0xc + local_14);
          local_54._4_4_ = (float)*piVar1 * g_Fixed16ToFloat;
          local_4c._0_4_ = (float)piVar1[1] * g_Fixed16ToFloat;
          local_4c._4_4_ = (float)piVar1[2] * g_Fixed16ToFloat;
          pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (local_24,&CStack_38,(CVector3f *)local_44);
          if ((CVector3f *)(local_44 + 4) != pCVar2) {
            local_44._4_4_ = pCVar2->x;
            local_3c = pCVar2->y;
            CStack_38.x = pCVar2->z;
          }
          pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (local_24,(CVector3f *)&stack0xffffff90,(CVector3f *)local_4c);
          if ((CVector3f *)(local_4c + 4) != pCVar2) {
            local_4c._4_4_ = pCVar2->x;
            local_44._0_4_ = pCVar2->y;
            local_44._4_4_ = pCVar2->z;
          }
          iVar5 = 2;
          if (2 < *(int *)(unaff_ESI + 4)) {
            iVar4 = unaff_ESI + 0x18;
            do {
              piVar1 = (int *)(*(int *)(iVar4 + 0x18) * 0xc + unaff_EDI);
              local_54._0_4_ = (float)*piVar1 * g_Fixed16ToFloat;
              local_54._4_4_ = (float)piVar1[1] * g_Fixed16ToFloat;
              local_4c._0_4_ = (float)piVar1[2] * g_Fixed16ToFloat;
              pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                                 (pCVar3,&local_60,(CVector3f *)local_54);
              if ((CVector3f *)(local_54 + 4) != pCVar2) {
                local_54._4_4_ = pCVar2->x;
                local_4c._0_4_ = pCVar2->y;
                local_4c._4_4_ = pCVar2->z;
              }
              core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                        (this_ptr_00,&CStack_38,(CVector3f *)local_44,(CVector3f *)(local_54 + 4));
              this_ptr_00 = this_ptr_00 + 1;
              if (local_44 + 4 != local_4c) {
                local_44._4_4_ = local_4c._0_4_;
                local_3c = (float)local_4c._4_4_;
                CStack_38.x = (float)local_44._0_4_;
              }
              iVar5 = iVar5 + 1;
              iVar4 = iVar4 + 0xc;
            } while (iVar5 < *(int *)(unaff_retaddr + 4));
          }
          local_20 = local_20 + 0x48;
          local_1c = local_1c + 1;
        } while (local_1c < (int)transform_vector[0x16].z);
      }
      local_2c = local_2c + 1;
    } while (local_2c < (int)transform_vector[0x15].y);
  }
  return;
}


// Assembly code:
// 00478950: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950
// 00478951: PUSH ESI
// 00478952: PUSH EDI
// 00478953: PUSH EBP
// 00478954: SUB ESP,0x68
// 00478957: MOV EDX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x8] (READ)
// 0047895e: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 00478962: ADD EAX,0x56a4
// 00478967: CMP EAX,EDX
// 00478969: JZ 0x0047897b
//   XREF to: 0047897b (CONDITIONAL_JUMP)
// 0047896b: MOV ECX,dword ptr [EDX]
// 0047896d: MOV dword ptr [EAX],ECX
// 0047896f: MOV ECX,dword ptr [EDX + 0x4]
// 00478972: MOV dword ptr [EAX + 0x4],ECX
// 00478975: MOV ECX,dword ptr [EDX + 0x8]
// 00478978: MOV dword ptr [EAX + 0x8],ECX
// 0047897b: MOV EAX,dword ptr [ESP + 0x7c]
//   Label: LAB_0047897b
//   XREF to: Stack[0x4] (READ)
// 0047897f: ADD EAX,0x56a4
// 00478984: MOV EBX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 00478988: PUSH EAX
// 00478989: ADD EBX,0x56b0
// 0047898f: PUSH EBX
// 00478990: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 00478995: ADD ESP,0x8
// 00478998: XOR EDX,EDX
// 0047899a: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 0047899e: MOV EBP,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 004789a2: MOV dword ptr [ESP + 0x48],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 004789a6: MOV ECX,dword ptr [EAX + 0x100]
// 004789ac: MOV EBP,dword ptr [EBP + 0x5698]
// 004789b2: TEST ECX,ECX
// 004789b4: JLE 0x00478bf2
//   XREF to: 00478bf2 (CONDITIONAL_JUMP)
// 004789ba: MOV dword ptr [ESP + 0x4c],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 004789be: MOV dword ptr [ESP + 0x50],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 004789c2: MOV dword ptr [ESP + 0x5c],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 004789c6: MOV EAX,dword ptr [ESP + 0x7c]
//   Label: LAB_004789c6
//   XREF to: Stack[0x4] (READ)
// 004789ca: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x30] (READ)
// 004789ce: MOV EAX,dword ptr [EAX + 0x104]
// 004789d4: IMUL EAX,EDI
// 004789d7: IMUL EDX,EAX,0xc
// 004789da: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 004789de: MOV EAX,dword ptr [EAX + 0x10c]
// 004789e4: ADD EAX,EDX
// 004789e6: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004789ea: XOR EAX,EAX
// 004789ec: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004789f0: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 004789f4: CMP dword ptr [EAX + 0x110],0x0
// 004789fb: JLE 0x00478bd7
//   XREF to: 00478bd7 (CONDITIONAL_JUMP)
// 00478a01: XOR EDI,EDI
// 00478a03: MOV dword ptr [ESP + 0x54],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 00478a07: MOV EAX,dword ptr [ESP + 0x7c]
//   Label: LAB_00478a07
//   XREF to: Stack[0x4] (READ)
// 00478a0b: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x24] (READ)
// 00478a0f: MOV EAX,dword ptr [EAX + 0x114]
// 00478a15: ADD EDX,EAX
// 00478a17: MOV dword ptr [ESP + 0x64],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00478a1b: IMUL EAX,dword ptr [EDX + 0x18],0xc
// 00478a1f: MOV ECX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x18] (READ)
// 00478a23: LEA EBX,[ESP + 0x30]
//   XREF to: Stack[-0x48] (DATA)
// 00478a27: ADD EAX,ECX
// 00478a29: FILD dword ptr [EAX]
// 00478a2b: FMUL float ptr [0x0065c974]
//   XREF to: 0065c974 (READ)
// 00478a31: FSTP float ptr [EBX]
//   XREF to: Stack[-0x48] (DATA)
// 00478a33: FILD dword ptr [EAX + 0x4]
// 00478a36: FMUL float ptr [0x0065c974]
//   XREF to: 0065c974 (READ)
// 00478a3c: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x44] (WRITE)
// 00478a3f: FILD dword ptr [EAX + 0x8]
// 00478a42: FMUL float ptr [0x0065c974]
//   XREF to: 0065c974 (READ)
// 00478a48: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x40] (WRITE)
// 00478a4b: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x14] (READ)
// 00478a4f: IMUL EAX,dword ptr [EAX + 0x24],0xc
// 00478a53: LEA EBX,[ESP + 0x24]
//   XREF to: Stack[-0x54] (DATA)
// 00478a57: ADD EAX,ECX
// 00478a59: FILD dword ptr [EAX]
// 00478a5b: FMUL float ptr [0x0065c974]
//   XREF to: 0065c974 (READ)
// 00478a61: FSTP float ptr [EBX]
//   XREF to: Stack[-0x54] (DATA)
// 00478a63: FILD dword ptr [EAX + 0x4]
// 00478a66: FMUL float ptr [0x0065c974]
//   XREF to: 0065c974 (READ)
// 00478a6c: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x50] (WRITE)
// 00478a6f: FILD dword ptr [EAX + 0x8]
// 00478a72: FMUL float ptr [0x0065c974]
//   XREF to: 0065c974 (READ)
// 00478a78: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x4c] (WRITE)
// 00478a7b: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x48] (DATA)
// 00478a7f: PUSH EAX
// 00478a80: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x3c] (DATA)
// 00478a84: PUSH EAX
// 00478a85: MOV EDI,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x28] (READ)
// 00478a89: PUSH EDI
// 00478a8a: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 00478a8f: MOV EDX,EAX
// 00478a91: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x48] (DATA)
// 00478a95: ADD ESP,0xc
// 00478a98: CMP EAX,EDX
// 00478a9a: JZ 0x00478ab0
//   XREF to: 00478ab0 (CONDITIONAL_JUMP)
// 00478a9c: MOV EAX,dword ptr [EDX]
// 00478a9e: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00478aa2: MOV EAX,dword ptr [EDX + 0x4]
// 00478aa5: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00478aa9: MOV EAX,dword ptr [EDX + 0x8]
// 00478aac: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00478ab0: LEA EAX,[ESP + 0x24]
//   Label: LAB_00478ab0
//   XREF to: Stack[-0x54] (DATA)
// 00478ab4: PUSH EAX
// 00478ab5: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x78] (DATA)
// 00478ab9: PUSH EAX
// 00478aba: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x2c] (READ)
// 00478abe: PUSH EAX
// 00478abf: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 00478ac4: MOV EDX,EAX
// 00478ac6: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x54] (DATA)
// 00478aca: ADD ESP,0xc
// 00478acd: CMP EAX,EDX
// 00478acf: JZ 0x00478ae5
//   XREF to: 00478ae5 (CONDITIONAL_JUMP)
// 00478ad1: MOV EAX,dword ptr [EDX]
// 00478ad3: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00478ad7: MOV EAX,dword ptr [EDX + 0x4]
// 00478ada: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00478ade: MOV EAX,dword ptr [EDX + 0x8]
// 00478ae1: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00478ae5: MOV EAX,dword ptr [ESP + 0x64]
//   Label: LAB_00478ae5
//   XREF to: Stack[-0x14] (READ)
// 00478ae9: MOV EDI,0x2
// 00478aee: CMP EDI,dword ptr [EAX + 0x4]
// 00478af1: JGE 0x00478bb1
//   XREF to: 00478bb1 (CONDITIONAL_JUMP)
// 00478af7: LEA ESI,[EAX + 0x18]
// 00478afa: IMUL EAX,dword ptr [ESI + 0x18],0xc
//   Label: LAB_00478afa
// 00478afe: MOV EDX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x18] (READ)
// 00478b02: LEA EBX,[ESP + 0x18]
//   XREF to: Stack[-0x60] (DATA)
// 00478b06: ADD EAX,EDX
// 00478b08: FILD dword ptr [EAX]
// 00478b0a: FMUL float ptr [0x0065c974]
//   XREF to: 0065c974 (READ)
// 00478b10: FSTP float ptr [EBX]
//   XREF to: Stack[-0x60] (DATA)
// 00478b12: FILD dword ptr [EAX + 0x4]
// 00478b15: FMUL float ptr [0x0065c974]
//   XREF to: 0065c974 (READ)
// 00478b1b: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x5c] (WRITE)
// 00478b1e: FILD dword ptr [EAX + 0x8]
// 00478b21: FMUL float ptr [0x0065c974]
//   XREF to: 0065c974 (READ)
// 00478b27: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x58] (WRITE)
// 00478b2a: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x60] (DATA)
// 00478b2e: PUSH EAX
// 00478b2f: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x6c] (DATA)
// 00478b33: PUSH EAX
// 00478b34: MOV ECX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x1c] (READ)
// 00478b38: PUSH ECX
// 00478b39: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 00478b3e: MOV EDX,EAX
// 00478b40: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x60] (DATA)
// 00478b44: ADD ESP,0xc
// 00478b47: CMP EAX,EDX
// 00478b49: JZ 0x00478b5f
//   XREF to: 00478b5f (CONDITIONAL_JUMP)
// 00478b4b: MOV EAX,dword ptr [EDX]
// 00478b4d: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 00478b51: MOV EAX,dword ptr [EDX + 0x4]
// 00478b54: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00478b58: MOV EAX,dword ptr [EDX + 0x8]
// 00478b5b: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00478b5f: LEA EAX,[ESP + 0x18]
//   Label: LAB_00478b5f
//   XREF to: Stack[-0x60] (DATA)
// 00478b63: PUSH EAX
// 00478b64: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x54] (DATA)
// 00478b68: PUSH EAX
// 00478b69: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x48] (DATA)
// 00478b6d: PUSH EAX
// 00478b6e: PUSH EBP
// 00478b6f: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 00478b74: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x60] (DATA)
// 00478b78: LEA EDX,[ESP + 0x34]
//   XREF to: Stack[-0x54] (DATA)
// 00478b7c: ADD ESP,0x10
// 00478b7f: ADD EBP,0x38
// 00478b82: CMP EDX,EAX
// 00478b84: JZ 0x00478b9e
//   XREF to: 00478b9e (CONDITIONAL_JUMP)
// 00478b86: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x60] (DATA)
// 00478b8a: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00478b8e: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x5c] (READ)
// 00478b92: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00478b96: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x58] (READ)
// 00478b9a: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00478b9e: MOV EAX,dword ptr [ESP + 0x64]
//   Label: LAB_00478b9e
//   XREF to: Stack[-0x14] (READ)
// 00478ba2: INC EDI
// 00478ba3: MOV ECX,dword ptr [EAX + 0x4]
// 00478ba6: ADD ESI,0xc
// 00478ba9: CMP EDI,ECX
// 00478bab: JL 0x00478afa
//   XREF to: 00478afa (CONDITIONAL_JUMP)
// 00478bb1: MOV ECX,dword ptr [ESP + 0x54]
//   Label: LAB_00478bb1
//   XREF to: Stack[-0x24] (READ)
// 00478bb5: MOV EBX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x20] (READ)
// 00478bb9: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 00478bbd: ADD ECX,0x48
// 00478bc0: INC EBX
// 00478bc1: MOV ESI,dword ptr [EDX + 0x110]
// 00478bc7: MOV dword ptr [ESP + 0x54],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00478bcb: MOV dword ptr [ESP + 0x58],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 00478bcf: CMP EBX,ESI
// 00478bd1: JL 0x00478a07
//   XREF to: 00478a07 (CONDITIONAL_JUMP)
// 00478bd7: MOV EBX,dword ptr [ESP + 0x48]
//   Label: LAB_00478bd7
//   XREF to: Stack[-0x30] (READ)
// 00478bdb: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 00478bdf: INC EBX
// 00478be0: MOV ESI,dword ptr [EDX + 0x100]
// 00478be6: MOV dword ptr [ESP + 0x48],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 00478bea: CMP EBX,ESI
// 00478bec: JL 0x004789c6
//   XREF to: 004789c6 (CONDITIONAL_JUMP)
// 00478bf2: ADD ESP,0x68
//   Label: LAB_00478bf2
// 00478bf5: POP EBP
// 00478bf6: POP EDI
// 00478bf7: POP ESI
// 00478bf8: POP EBX
// 00478bf9: RET
