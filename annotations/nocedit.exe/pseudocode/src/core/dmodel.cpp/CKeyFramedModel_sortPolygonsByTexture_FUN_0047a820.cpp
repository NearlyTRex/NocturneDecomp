// Name: core_dmodel.cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820
// Address: 0047a820
// Address Range: [[0047a820, 0047a9fa]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820(CKeyFramedModel * model_ptr)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 (0047a3e0) at 0047a7f4 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_RA4HQPointTypeInfo
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
//   crt_unknown.c_FUN_00600bc2

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047a8bc) */
/* WARNING: Removing unreachable block (ram,0x0047a929) */
/* WARNING: Removing unreachable block (ram,0x0047a92b) */
/* WARNING: Removing unreachable block (ram,0x0047a936) */
/* WARNING: Removing unreachable block (ram,0x0047a938) */
/* WARNING: Removing unreachable block (ram,0x0047a965) */

void __cdecl
core_dmodel_cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820(CKeyFramedModel *model_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CKeyFramedModel *in_stack_00000008;
  CKeyFramedModel *local_28;
  int local_24;
  int local_20;
  
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(model_ptr);
  local_20 = 0;
  local_24 = 0;
  if (0 < in_stack_00000008->part_count) {
    local_28 = in_stack_00000008;
    do {
      iVar3 = local_20 + local_28->part_list[0].poly_count;
      iVar1 = iVar3;
      while (iVar1 = iVar1 + -1, iVar2 = local_20, local_20 < iVar1) {
        for (; iVar2 < iVar1; iVar2 = iVar2 + 1) {
        }
      }
      local_28 = (CKeyFramedModel *)(local_28->model_filename + 8);
      local_24 = local_24 + 1;
      local_20 = iVar3;
    } while (local_24 < in_stack_00000008->part_count);
  }
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(in_stack_00000008);
  return;
}


// Assembly code:
// 0047a820: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820
// 0047a821: PUSH ESI
// 0047a822: PUSH EDI
// 0047a823: PUSH EBP
// 0047a824: SUB ESP,0x6c
// 0047a827: MOV EDX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x4] (READ)
// 0047a82e: PUSH EDX
// 0047a82f: CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
//   XREF to: 0047bf40 (UNCONDITIONAL_CALL)
// 0047a834: ADD ESP,0x4
// 0047a837: XOR ECX,ECX
// 0047a839: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x4] (READ)
// 0047a840: MOV dword ptr [ESP + 0x58],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0047a844: MOV ESI,dword ptr [EAX + 0x5584]
// 0047a84a: MOV dword ptr [ESP + 0x54],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0047a84e: TEST ESI,ESI
// 0047a850: JLE 0x0047a9e3
//   XREF to: 0047a9e3 (CONDITIONAL_JUMP)
// 0047a856: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0047a85a: MOV EDX,dword ptr [ESP + 0x50]
//   Label: LAB_0047a85a
//   XREF to: Stack[-0x2c] (READ)
// 0047a85e: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x24] (READ)
// 0047a862: MOV EBX,dword ptr [EDX + 0x558c]
// 0047a868: ADD EAX,EBX
// 0047a86a: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0047a86e: DEC EAX
// 0047a86f: MOV ESI,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x24] (READ)
// 0047a873: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0047a877: CMP EAX,ESI
// 0047a879: JLE 0x0047a9b2
//   XREF to: 0047a9b2 (CONDITIONAL_JUMP)
// 0047a87f: MOV EDX,dword ptr [ESP + 0x5c]
//   Label: LAB_0047a87f
//   XREF to: Stack[-0x20] (READ)
// 0047a883: MOV EBP,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x24] (READ)
// 0047a887: CMP EBP,EDX
// 0047a889: JGE 0x0047a99d
//   XREF to: 0047a99d (CONDITIONAL_JUMP)
// 0047a88f: LEA EBX,[EBP*0x4 + 0x0]
// 0047a896: IMUL EAX,EBP,0x48
// 0047a899: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0047a89d: ADD EAX,0x48
// 0047a8a0: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0047a8a4: MOV EDI,dword ptr [ESP + 0x80]
//   Label: LAB_0047a8a4
//   XREF to: Stack[0x4] (READ)
// 0047a8ab: MOV EDI,dword ptr [EDI + 0x118]
// 0047a8b1: MOV EAX,dword ptr [EDI + EBX*0x1]
// 0047a8b4: CMP EAX,EAX
// 0047a8b6: JLE 0x0047a977
//   XREF to: 0047a977 (CONDITIONAL_JUMP)
// 0047a8bc: LEA EAX,[EBP + 0x1]
// 0047a8bf: MOV EDI,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x4] (READ)
// 0047a8c6: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047a8ca: MOV EDI,dword ptr [EDI + 0x114]
// 0047a8d0: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x18] (READ)
// 0047a8d4: MOV ESI,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x14] (READ)
// 0047a8d8: ADD EAX,EDI
// 0047a8da: ADD EDI,ESI
// 0047a8dc: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0047a8e0: MOV EAX,dword ptr [EDI]
// 0047a8e2: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x7c] (DATA)
// 0047a8e5: MOV EAX,dword ptr [EDI + 0x4]
// 0047a8e8: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 0047a8ec: MOV EAX,dword ptr [EDI + 0x8]
// 0047a8ef: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 0047a8f3: MOV EAX,dword ptr [EDI + 0xc]
// 0047a8f6: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0047a8fa: MOV EAX,dword ptr [EDI + 0x10]
// 0047a8fd: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0047a901: PUSH 0x65c9f0
//   XREF to: 0065c9f0 (DATA)
// 0047a906: MOV EAX,dword ptr [EDI + 0x14]
// 0047a909: PUSH 0x4
// 0047a90b: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 0047a90f: LEA EAX,[EDI + 0x18]
// 0047a912: PUSH EAX
// 0047a913: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x64] (DATA)
// 0047a917: PUSH EAX
// 0047a918: CALL crt_unknown.c_FUN_00600bc2
//   XREF to: 00600bc2 (UNCONDITIONAL_CALL)
// 0047a91d: ADD ESP,0x10
// 0047a920: MOV ECX,0x12
// 0047a925: MOV ESI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x34] (READ)
// 0047a929: MOVSD.REP ES:EDI,ESI
// 0047a92b: MOV ECX,0x12
// 0047a930: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x34] (READ)
// 0047a934: MOV ESI,ESP
// 0047a936: MOVSD.REP ES:EDI,ESI
// 0047a938: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x4] (READ)
// 0047a93f: LEA EDI,[EBX + 0x4]
// 0047a942: MOV EAX,dword ptr [EAX + 0x118]
// 0047a948: MOV EDX,dword ptr [EDI + EAX*0x1]
// 0047a94b: MOV ECX,dword ptr [EBX + EAX*0x1]
// 0047a94e: MOV dword ptr [EBX + EAX*0x1],EDX
// 0047a951: MOV dword ptr [EDI + EAX*0x1],ECX
// 0047a954: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x4] (READ)
// 0047a95b: MOV EDI,dword ptr [EAX + 0x11c]
// 0047a961: TEST EDI,EDI
// 0047a963: JZ 0x0047a977
//   XREF to: 0047a977 (CONDITIONAL_JUMP)
// 0047a965: MOV EAX,EDI
// 0047a967: MOV EDI,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x1c] (READ)
// 0047a96b: MOV DH,byte ptr [EAX + EBP*0x1]
// 0047a96e: MOV DL,byte ptr [EDI + EAX*0x1]
// 0047a971: MOV byte ptr [EAX + EBP*0x1],DL
// 0047a974: MOV byte ptr [EDI + EAX*0x1],DH
// 0047a977: MOV ECX,dword ptr [ESP + 0x68]
//   Label: LAB_0047a977
//   XREF to: Stack[-0x14] (READ)
// 0047a97b: MOV ESI,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x18] (READ)
// 0047a97f: MOV EDI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x20] (READ)
// 0047a983: ADD EBX,0x4
// 0047a986: INC EBP
// 0047a987: ADD ECX,0x48
// 0047a98a: ADD ESI,0x48
// 0047a98d: MOV dword ptr [ESP + 0x68],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0047a991: MOV dword ptr [ESP + 0x64],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0047a995: CMP EBP,EDI
// 0047a997: JL 0x0047a8a4
//   XREF to: 0047a8a4 (CONDITIONAL_JUMP)
// 0047a99d: MOV EDI,dword ptr [ESP + 0x5c]
//   Label: LAB_0047a99d
//   XREF to: Stack[-0x20] (READ)
// 0047a9a1: DEC EDI
// 0047a9a2: MOV EBP,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x24] (READ)
// 0047a9a6: MOV dword ptr [ESP + 0x5c],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0047a9aa: CMP EDI,EBP
// 0047a9ac: JG 0x0047a87f
//   XREF to: 0047a87f (CONDITIONAL_JUMP)
// 0047a9b2: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_0047a9b2
//   XREF to: Stack[-0x30] (READ)
// 0047a9b6: MOV EDI,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x2c] (READ)
// 0047a9ba: MOV EBP,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x28] (READ)
// 0047a9be: MOV EDX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x4] (READ)
// 0047a9c5: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0047a9c9: ADD EDI,0x8
// 0047a9cc: INC EBP
// 0047a9cd: MOV ECX,dword ptr [EDX + 0x5584]
// 0047a9d3: MOV dword ptr [ESP + 0x50],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 0047a9d7: MOV dword ptr [ESP + 0x54],EBP
//   XREF to: Stack[-0x28] (WRITE)
// 0047a9db: CMP EBP,ECX
// 0047a9dd: JL 0x0047a85a
//   XREF to: 0047a85a (CONDITIONAL_JUMP)
// 0047a9e3: MOV EBP,dword ptr [ESP + 0x80]
//   Label: LAB_0047a9e3
//   XREF to: Stack[0x4] (READ)
// 0047a9ea: PUSH EBP
// 0047a9eb: CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
//   XREF to: 0047bf40 (UNCONDITIONAL_CALL)
// 0047a9f0: ADD ESP,0x4
// 0047a9f3: ADD ESP,0x6c
// 0047a9f6: POP EBP
// 0047a9f7: POP EDI
// 0047a9f8: POP ESI
// 0047a9f9: POP EBX
// 0047a9fa: RET
