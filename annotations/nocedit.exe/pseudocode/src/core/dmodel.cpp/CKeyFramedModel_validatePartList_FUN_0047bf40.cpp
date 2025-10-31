// Name: core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
// Address: 0047bf40
// Address Range: [[0047bf40, 0047c078]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(CKeyFramedModel * this_ptr)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 00479efb [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0 (0047b1e0) at 0047b490 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0 (0047bdb0) at 0047bdbc [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0 (0047bbc0) at 0047bbcc [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30 (0047aa30) at 0047aa4f [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820 (0047a820) at 0047a9eb [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0 (0047ada0) at 0047b021 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dmodel_cpp_006204cb
//   TerminatedCString s_CKeyFramedModel_part_ver_006204de
//   TerminatedCString s_core_dmodel_cpp_0062050c
//   TerminatedCString s_CKeyFramedModel_partList_0062051f
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(CKeyFramedModel *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_28;
  CKeyFramedModel *local_20;
  int local_18;
  
  iVar4 = 0;
  iVar2 = 0;
  local_28 = 0;
  if (0 < this_ptr->part_count) {
    local_20 = this_ptr;
    local_18 = iVar2;
    iVar5 = iVar4;
    do {
      iVar4 = local_20->part_list[0].vertex_count + iVar5;
      iVar2 = local_20->part_list[0].poly_count + local_18;
      if (local_18 < iVar2) {
        local_18 = local_18 * 0x48;
        do {
          iVar6 = 0;
          iVar3 = 0;
          while (iVar3 < *(int *)((int)this_ptr->poly_vert_list + local_18 + 4)) {
            iVar1 = *(int *)((int)this_ptr->poly_vert_list + iVar6 + 0x18 + local_18);
            if ((iVar1 < iVar5) || (iVar4 <= iVar1)) {
              g_CurrentFilename = "..\\core\\dmodel.cpp";
              g_CurrentLineNumber = 0xab6;
              core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel part vertex overlap detected!");
              iVar3 = iVar3 + 1;
              iVar6 = iVar6 + 0xc;
            }
            else {
              iVar3 = iVar3 + 1;
              iVar6 = iVar6 + 0xc;
            }
          }
          local_18 = local_18 + 0x48;
        } while (local_18 < iVar2 * 0x48);
      }
      local_20 = (CKeyFramedModel *)(local_20->model_filename + 8);
      local_28 = local_28 + 1;
      local_18 = iVar2;
      iVar5 = iVar4;
    } while (local_28 < this_ptr->part_count);
  }
  if ((iVar4 == this_ptr->vertex_count) && (iVar2 == this_ptr->poly_count)) {
    return;
  }
  g_CurrentFilename = "..\\core\\dmodel.cpp";
  g_CurrentLineNumber = 0xabf;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel partList/mastercount mismatch detected.");
  return;
}


// Assembly code:
// 0047bf40: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
// 0047bf41: PUSH ESI
// 0047bf42: PUSH EDI
// 0047bf43: PUSH EBP
// 0047bf44: SUB ESP,0x18
// 0047bf47: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0047bf4b: XOR EBP,EBP
// 0047bf4d: XOR EAX,EAX
// 0047bf4f: MOV ECX,dword ptr [EBX + 0x5584]
// 0047bf55: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x28] (DATA)
// 0047bf58: TEST ECX,ECX
// 0047bf5a: JLE 0x0047bfb2
//   XREF to: 0047bfb2 (CONDITIONAL_JUMP)
// 0047bf5c: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0047bf60: MOV EBX,dword ptr [ESP + 0x8]
//   Label: LAB_0047bf60
//   XREF to: Stack[-0x20] (READ)
// 0047bf64: MOV EBX,dword ptr [EBX + 0x5588]
// 0047bf6a: ADD EBX,EBP
// 0047bf6c: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0047bf70: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0047bf74: MOV EBX,dword ptr [EBX + 0x558c]
// 0047bf7a: ADD EBX,EAX
// 0047bf7c: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0047bf80: CMP EAX,EBX
// 0047bf82: JL 0x0047c032
//   XREF to: 0047c032 (CONDITIONAL_JUMP)
// 0047bf88: MOV EBX,dword ptr [ESP + 0x8]
//   Label: LAB_0047bf88
//   XREF to: Stack[-0x20] (READ)
// 0047bf8c: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0047bf8f: ADD EBX,0x8
// 0047bf92: INC ESI
// 0047bf93: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0047bf97: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x28] (DATA)
// 0047bf9a: MOV EBX,ESI
// 0047bf9c: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0047bfa0: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0047bfa4: MOV EDI,dword ptr [ESI + 0x5584]
// 0047bfaa: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0047bfae: CMP EBX,EDI
// 0047bfb0: JL 0x0047bf60
//   XREF to: 0047bf60 (CONDITIONAL_JUMP)
// 0047bfb2: MOV EBX,dword ptr [ESP + 0x2c]
//   Label: LAB_0047bfb2
//   XREF to: Stack[0x4] (READ)
// 0047bfb6: CMP EBP,dword ptr [EBX + 0x104]
// 0047bfbc: JNZ 0x0047c04e
//   XREF to: 0047c04e (CONDITIONAL_JUMP)
// 0047bfc2: CMP EAX,dword ptr [EBX + 0x110]
// 0047bfc8: JNZ 0x0047c04e
//   XREF to: 0047c04e (CONDITIONAL_JUMP)
// 0047bfce: ADD ESP,0x18
// 0047bfd1: POP EBP
// 0047bfd2: POP EDI
// 0047bfd3: POP ESI
// 0047bfd4: POP EBX
// 0047bfd5: RET
// 0047bfd6: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_0047bfd6
//   XREF to: Stack[-0x18] (READ)
// 0047bfda: ADD EAX,0x48
// 0047bfdd: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0047bfe1: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0047bfe5: CMP EAX,EDX
// 0047bfe7: JGE 0x0047bf88
//   XREF to: 0047bf88 (CONDITIONAL_JUMP)
// 0047bfe9: MOV EDI,dword ptr [ESP + 0x10]
//   Label: LAB_0047bfe9
//   XREF to: Stack[-0x18] (READ)
// 0047bfed: XOR ESI,ESI
// 0047bfef: XOR EBX,EBX
// 0047bff1: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_0047bff1
//   XREF to: Stack[0x4] (READ)
// 0047bff5: MOV EAX,dword ptr [EAX + 0x114]
// 0047bffb: ADD EAX,EDI
// 0047bffd: CMP EBX,dword ptr [EAX + 0x4]
// 0047c000: JGE 0x0047bfd6
//   XREF to: 0047bfd6 (CONDITIONAL_JUMP)
// 0047c002: MOV EAX,dword ptr [ESI + EAX*0x1 + 0x18]
// 0047c006: CMP EAX,EBP
// 0047c008: JGE 0x0047c042
//   XREF to: 0047c042 (CONDITIONAL_JUMP)
// 0047c00a: MOV EAX,0x6204cb
//   Label: LAB_0047c00a
//   XREF to: 006204cb (PARAM)
// 0047c00f: MOV EDX,0xab6
// 0047c014: PUSH 0x6204de
//   XREF to: 006204de (DATA)
// 0047c019: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0047c01e: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0047c024: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0047c029: ADD ESP,0x4
// 0047c02c: INC EBX
// 0047c02d: ADD ESI,0xc
// 0047c030: JMP 0x0047bff1
//   XREF to: 0047bff1 (UNCONDITIONAL_JUMP)
// 0047c032: IMUL EAX,EAX,0x48
//   Label: LAB_0047c032
// 0047c035: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0047c039: IMUL EAX,EBX,0x48
// 0047c03c: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047c040: JMP 0x0047bfe9
//   XREF to: 0047bfe9 (UNCONDITIONAL_JUMP)
// 0047c042: CMP EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0047c042
//   XREF to: Stack[-0x14] (READ)
// 0047c046: JGE 0x0047c00a
//   XREF to: 0047c00a (CONDITIONAL_JUMP)
// 0047c048: INC EBX
// 0047c049: ADD ESI,0xc
// 0047c04c: JMP 0x0047bff1
//   XREF to: 0047bff1 (UNCONDITIONAL_JUMP)
// 0047c04e: MOV EBX,0x62050c
//   Label: LAB_0047c04e
//   XREF to: 0062050c (PARAM)
// 0047c053: MOV ESI,0xabf
// 0047c058: PUSH 0x62051f
//   XREF to: 0062051f (DATA)
// 0047c05d: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0047c063: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0047c069: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0047c06e: ADD ESP,0x4
// 0047c071: ADD ESP,0x18
// 0047c074: POP EBP
// 0047c075: POP EDI
// 0047c076: POP ESI
// 0047c077: POP EBX
// 0047c078: RET
