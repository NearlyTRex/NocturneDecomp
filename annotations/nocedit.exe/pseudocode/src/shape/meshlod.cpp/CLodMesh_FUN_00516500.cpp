// Name: shape_meshlod.cpp_CLodMesh_FUN_00516500
// Address: 00516500
// Address Range: [[00516500, 0051656f]]
// Convention: __cdecl
// Signature: CBoundingBox3D * shape_meshlod.cpp_CLodMesh_FUN_00516500(CLodMesh * this_ptr)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_00516e10 (00516e10) at 00516e23 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_0051b330 (0051b330) at 0051b33c [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 (0051d990) at 0051d9e1 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 (0051b920) at 0051b9ef [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d520 (0051d520) at 0051d6ee [UNCONDITIONAL_CALL]
// Function calls:
//   core_box.cpp_CBoundingBox3D_expand_FUN_00420240

#include "nocturne.h"

CBoundingBox3D * __cdecl shape_meshlod_cpp_CLodMesh_FUN_00516500(CLodMesh *this_ptr)

{
  SLodVert *pSVar1;
  CVector3f *point;
  int iVar2;
  int iVar3;
  SLodVert *in_stack_00000008;
  
  pSVar1 = this_ptr->vertex_data;
  if (in_stack_00000008 != pSVar1) {
    *(undefined4 *)in_stack_00000008->field0_0x0 = *(undefined4 *)pSVar1->field0_0x0;
    *(undefined4 *)(in_stack_00000008->field0_0x0 + 4) = *(undefined4 *)(pSVar1->field0_0x0 + 4);
    *(undefined4 *)(in_stack_00000008->field0_0x0 + 8) = *(undefined4 *)(pSVar1->field0_0x0 + 8);
  }
  if ((SLodVert *)(in_stack_00000008->field0_0x0 + 0xc) != pSVar1) {
    *(undefined4 *)((SLodVert *)(in_stack_00000008->field0_0x0 + 0xc))->field0_0x0 =
         *(undefined4 *)pSVar1->field0_0x0;
    *(undefined4 *)(in_stack_00000008->field0_0x0 + 0x10) = *(undefined4 *)(pSVar1->field0_0x0 + 4);
    *(undefined4 *)(in_stack_00000008->field0_0x0 + 0x14) = *(undefined4 *)(pSVar1->field0_0x0 + 8);
  }
  iVar2 = 1;
  if (1 < this_ptr->vertex_count) {
    iVar3 = 0x4c4;
    do {
      point = (CVector3f *)(this_ptr->vertex_data->field0_0x0 + iVar3);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x4c4;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)in_stack_00000008,point);
    } while (iVar2 < this_ptr->vertex_count);
  }
  return (CBoundingBox3D *)in_stack_00000008;
}


// Assembly code:
// 00516500: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_FUN_00516500
// 00516501: PUSH EDI
// 00516502: PUSH EBP
// 00516503: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00516507: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0051650b: MOV EAX,dword ptr [EDI + 0x4]
// 0051650e: MOV EBX,EBP
// 00516510: CMP EBP,EAX
// 00516512: JNZ 0x0051655d
//   XREF to: 0051655d (CONDITIONAL_JUMP)
// 00516514: ADD EBX,0xc
//   Label: LAB_00516514
// 00516517: CMP EBX,EAX
// 00516519: JZ 0x0051652b
//   XREF to: 0051652b (CONDITIONAL_JUMP)
// 0051651b: MOV EDX,dword ptr [EAX]
// 0051651d: MOV dword ptr [EBX],EDX
// 0051651f: MOV EDX,dword ptr [EAX + 0x4]
// 00516522: MOV dword ptr [EBX + 0x4],EDX
// 00516525: MOV EDX,dword ptr [EAX + 0x8]
// 00516528: MOV dword ptr [EBX + 0x8],EDX
// 0051652b: MOV EBX,0x1
//   Label: LAB_0051652b
// 00516530: CMP EBX,dword ptr [EDI]
// 00516532: JGE 0x00516557
//   XREF to: 00516557 (CONDITIONAL_JUMP)
// 00516534: PUSH ESI
// 00516535: MOV ESI,0x4c4
// 0051653a: MOV EAX,dword ptr [EDI + 0x4]
//   Label: LAB_0051653a
// 0051653d: ADD EAX,ESI
// 0051653f: PUSH EAX
// 00516540: PUSH EBP
// 00516541: INC EBX
// 00516542: ADD ESI,0x4c4
// 00516548: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 0051654d: MOV ECX,dword ptr [EDI]
// 0051654f: ADD ESP,0x8
// 00516552: CMP EBX,ECX
// 00516554: JL 0x0051653a
//   XREF to: 0051653a (CONDITIONAL_JUMP)
// 00516556: POP ESI
// 00516557: MOV EAX,EBP
//   Label: LAB_00516557
// 00516559: POP EBP
// 0051655a: POP EDI
// 0051655b: POP EBX
// 0051655c: RET
// 0051655d: MOV EDX,dword ptr [EAX]
//   Label: LAB_0051655d
// 0051655f: MOV dword ptr [EBP],EDX
// 00516562: MOV EDX,dword ptr [EAX + 0x4]
// 00516565: MOV dword ptr [EBP + 0x4],EDX
// 00516568: MOV EDX,dword ptr [EAX + 0x8]
// 0051656b: MOV dword ptr [EBP + 0x8],EDX
// 0051656e: JMP 0x00516514
//   XREF to: 00516514 (UNCONDITIONAL_JUMP)
