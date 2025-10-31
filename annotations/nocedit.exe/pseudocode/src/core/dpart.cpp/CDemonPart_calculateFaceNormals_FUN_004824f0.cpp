// Name: core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_004824f0
// Address: 004824f0
// Address Range: [[004824f0, 004825b8]]
// Convention: __cdecl
// Signature: void core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_004824f0(CDemonPart * this_ptr)
// Cross-references:
//   core_dpart.cpp_CDemonPart_loadFromFile_FUN_004825c0 (004825c0) at 00482811 [UNCONDITIONAL_CALL]
//   core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40 (00482e40) at 00482f6e [UNCONDITIONAL_CALL]
// Function calls:
//   engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_004824f0(CDemonPart *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  SSurfaceNormal local_48;
  
  iVar2 = 0;
  if (0 < this_ptr->face_count) {
    iVar1 = 0;
    do {
      local_48.vertex_count = 3;
      local_48.normal_x = *(int *)((int)&(this_ptr->face_data->plane).A + iVar1);
      local_48.normal_y = *(int *)((int)&(this_ptr->face_data->plane).B + iVar1);
      local_48.normal_z = *(int *)((int)&(this_ptr->face_data->plane).C + iVar1);
      local_48.dot_product = *(int *)((int)&(this_ptr->face_data->plane).D + iVar1);
      local_48.vertex_index_1 = *(int *)((int)&this_ptr->face_data->vertex_index_1 + iVar1);
      local_48.vertex_index_2 = *(int *)((int)&this_ptr->face_data->vertex_index_2 + iVar1);
      local_48.vertex_index_3 = *(int *)((int)&this_ptr->face_data->vertex_index_3 + iVar1);
      engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(this_ptr->vertex_positions,&local_48);
      *(int *)((int)&(this_ptr->face_data->plane).A + iVar1) = local_48.normal_y;
      *(int *)((int)&(this_ptr->face_data->plane).B + iVar1) = local_48.normal_z;
      *(int *)((int)&(this_ptr->face_data->plane).C + iVar1) = local_48.dot_product;
      *(int *)((int)&(this_ptr->face_data->plane).D + iVar1) = local_48.vertex_index_1;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x20;
    } while (iVar2 < this_ptr->face_count);
  }
  return;
}


// Assembly code:
// 004824f0: PUSH ESI
//   Label: core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_004824f0
// 004824f1: PUSH EDI
// 004824f2: PUSH EBP
// 004824f3: SUB ESP,0x3c
// 004824f6: MOV ESI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 004824fa: MOV EDX,dword ptr [ESI + 0x24]
// 004824fd: XOR EDI,EDI
// 004824ff: TEST EDX,EDX
// 00482501: JLE 0x004825b2
//   XREF to: 004825b2 (CONDITIONAL_JUMP)
// 00482507: PUSH EBX
// 00482508: XOR EBX,EBX
// 0048250a: MOV dword ptr [ESP + 0x8],0x3
//   Label: LAB_0048250a
//   XREF to: Stack[-0x44] (WRITE)
// 00482512: MOV EAX,dword ptr [ESI + 0x34]
// 00482515: MOV EAX,dword ptr [EBX + EAX*0x1]
// 00482518: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0048251c: MOV EAX,dword ptr [ESI + 0x34]
// 0048251f: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4]
// 00482523: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00482527: MOV EAX,dword ptr [ESI + 0x34]
// 0048252a: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8]
// 0048252e: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00482532: MOV EAX,dword ptr [ESI + 0x34]
// 00482535: MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc]
// 00482539: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0048253d: MOV EAX,dword ptr [ESI + 0x34]
// 00482540: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x10]
// 00482544: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00482548: MOV EAX,dword ptr [ESI + 0x34]
// 0048254b: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x14]
// 0048254f: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00482553: MOV EAX,dword ptr [ESI + 0x34]
// 00482556: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x18]
// 0048255a: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0048255e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x48] (DATA)
// 00482562: PUSH EAX
// 00482563: MOV EBP,dword ptr [ESI + 0x2c]
// 00482566: PUSH EBP
// 00482567: CALL engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0
//   XREF to: 00501bc0 (UNCONDITIONAL_CALL)
// 0048256c: MOV EAX,dword ptr [ESI + 0x34]
// 0048256f: ADD ESP,0x8
// 00482572: LEA EDX,[EAX + EBX*0x1]
// 00482575: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x40] (READ)
// 00482579: MOV dword ptr [EDX],EAX
// 0048257b: MOV EAX,dword ptr [ESI + 0x34]
// 0048257e: LEA EDX,[EAX + EBX*0x1]
// 00482581: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x3c] (READ)
// 00482585: MOV dword ptr [EDX + 0x4],EAX
// 00482588: MOV EAX,dword ptr [ESI + 0x34]
// 0048258b: LEA EDX,[EAX + EBX*0x1]
// 0048258e: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x38] (READ)
// 00482592: MOV dword ptr [EDX + 0x8],EAX
// 00482595: MOV EAX,dword ptr [ESI + 0x34]
// 00482598: LEA EDX,[EAX + EBX*0x1]
// 0048259b: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x34] (READ)
// 0048259f: MOV dword ptr [EDX + 0xc],EAX
// 004825a2: INC EDI
// 004825a3: MOV EAX,dword ptr [ESI + 0x24]
// 004825a6: ADD EBX,0x20
// 004825a9: CMP EDI,EAX
// 004825ab: JL 0x0048250a
//   XREF to: 0048250a (CONDITIONAL_JUMP)
// 004825b1: POP EBX
// 004825b2: ADD ESP,0x3c
//   Label: LAB_004825b2
// 004825b5: POP EBP
// 004825b6: POP EDI
// 004825b7: POP ESI
// 004825b8: RET
