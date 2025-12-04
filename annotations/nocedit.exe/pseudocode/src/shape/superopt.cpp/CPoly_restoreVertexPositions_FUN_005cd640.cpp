// Name: shape_superopt.cpp_CPoly_restoreVertexPositions_FUN_005cd640
// Address: 005cd640
// Address Range: [[005cd640, 005cd6e9]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_restoreVertexPositions_FUN_005cd640(CPoly * this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_restoreVertexPositions_FUN_005cd640(CPoly *this_ptr)

{
  CVert *pCVar1;
  CVert *pCVar2;
  
  pCVar2 = this_ptr->parent_obj->vertex_data;
  pCVar1 = pCVar2 + this_ptr->vertex_idx_0;
  *(undefined4 *)&(pCVar1->position).x = *(undefined4 *)&(pCVar1->orig_position).x;
  *(undefined4 *)((int)&(pCVar1->position).x + 4) =
       *(undefined4 *)((int)&(pCVar1->orig_position).x + 4);
  *(undefined4 *)&(pCVar1->position).y = *(undefined4 *)&(pCVar1->orig_position).y;
  *(undefined4 *)((int)&(pCVar1->position).y + 4) =
       *(undefined4 *)((int)&(pCVar1->orig_position).y + 4);
  *(undefined4 *)&(pCVar1->position).z = *(undefined4 *)&(pCVar1->orig_position).z;
  *(undefined4 *)((int)&(pCVar1->position).z + 4) =
       *(undefined4 *)((int)&(pCVar1->orig_position).z + 4);
  pCVar1 = pCVar2 + this_ptr->vertex_idx_1;
  *(undefined4 *)&(pCVar1->position).x = *(undefined4 *)&(pCVar1->orig_position).x;
  *(undefined4 *)((int)&(pCVar1->position).x + 4) =
       *(undefined4 *)((int)&(pCVar1->orig_position).x + 4);
  *(undefined4 *)&(pCVar1->position).y = *(undefined4 *)&(pCVar1->orig_position).y;
  *(undefined4 *)((int)&(pCVar1->position).y + 4) =
       *(undefined4 *)((int)&(pCVar1->orig_position).y + 4);
  *(undefined4 *)&(pCVar1->position).z = *(undefined4 *)&(pCVar1->orig_position).z;
  *(undefined4 *)((int)&(pCVar1->position).z + 4) =
       *(undefined4 *)((int)&(pCVar1->orig_position).z + 4);
  pCVar2 = pCVar2 + this_ptr->vertex_idx_2;
  *(undefined4 *)&(pCVar2->position).x = *(undefined4 *)&(pCVar2->orig_position).x;
  *(undefined4 *)((int)&(pCVar2->position).x + 4) =
       *(undefined4 *)((int)&(pCVar2->orig_position).x + 4);
  *(undefined4 *)&(pCVar2->position).y = *(undefined4 *)&(pCVar2->orig_position).y;
  *(undefined4 *)((int)&(pCVar2->position).y + 4) =
       *(undefined4 *)((int)&(pCVar2->orig_position).y + 4);
  *(undefined4 *)&(pCVar2->position).z = *(undefined4 *)&(pCVar2->orig_position).z;
  *(undefined4 *)((int)&(pCVar2->position).z + 4) =
       *(undefined4 *)((int)&(pCVar2->orig_position).z + 4);
  return;
}


// Assembly code:
// 005cd640: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_restoreVertexPositions_FUN_005cd640
// 005cd641: PUSH ESI
// 005cd642: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005cd646: MOV EAX,dword ptr [EBX + 0x4]
// 005cd649: SHL EAX,0x3
// 005cd64c: MOV ECX,dword ptr [EBX]
// 005cd64e: MOV EDX,EAX
// 005cd650: SHL EAX,0x3
// 005cd653: MOV ECX,dword ptr [ECX + 0x4]
// 005cd656: SUB EAX,EDX
// 005cd658: ADD EAX,ECX
// 005cd65a: LEA EDX,[EAX + 0x18]
// 005cd65d: MOV ESI,dword ptr [EDX]
// 005cd65f: MOV dword ptr [EAX],ESI
// 005cd661: MOV ESI,dword ptr [EDX + 0x4]
// 005cd664: MOV dword ptr [EAX + 0x4],ESI
// 005cd667: MOV ESI,dword ptr [EDX + 0x8]
// 005cd66a: MOV dword ptr [EAX + 0x8],ESI
// 005cd66d: MOV ESI,dword ptr [EDX + 0xc]
// 005cd670: MOV dword ptr [EAX + 0xc],ESI
// 005cd673: MOV ESI,dword ptr [EDX + 0x10]
// 005cd676: MOV dword ptr [EAX + 0x10],ESI
// 005cd679: MOV ESI,dword ptr [EDX + 0x14]
// 005cd67c: MOV dword ptr [EAX + 0x14],ESI
// 005cd67f: MOV EAX,dword ptr [EBX + 0x8]
// 005cd682: SHL EAX,0x3
// 005cd685: MOV EDX,EAX
// 005cd687: SHL EAX,0x3
// 005cd68a: SUB EAX,EDX
// 005cd68c: ADD EAX,ECX
// 005cd68e: LEA EDX,[EAX + 0x18]
// 005cd691: MOV ESI,dword ptr [EDX]
// 005cd693: MOV dword ptr [EAX],ESI
// 005cd695: MOV ESI,dword ptr [EDX + 0x4]
// 005cd698: MOV dword ptr [EAX + 0x4],ESI
// 005cd69b: MOV ESI,dword ptr [EDX + 0x8]
// 005cd69e: MOV dword ptr [EAX + 0x8],ESI
// 005cd6a1: MOV ESI,dword ptr [EDX + 0xc]
// 005cd6a4: MOV dword ptr [EAX + 0xc],ESI
// 005cd6a7: MOV ESI,dword ptr [EDX + 0x10]
// 005cd6aa: MOV dword ptr [EAX + 0x10],ESI
// 005cd6ad: MOV ESI,dword ptr [EDX + 0x14]
// 005cd6b0: MOV dword ptr [EAX + 0x14],ESI
// 005cd6b3: MOV EAX,dword ptr [EBX + 0xc]
// 005cd6b6: SHL EAX,0x3
// 005cd6b9: MOV EDX,EAX
// 005cd6bb: SHL EAX,0x3
// 005cd6be: SUB EAX,EDX
// 005cd6c0: ADD EAX,ECX
// 005cd6c2: LEA EDX,[EAX + 0x18]
// 005cd6c5: MOV ECX,dword ptr [EDX]
// 005cd6c7: MOV dword ptr [EAX],ECX
// 005cd6c9: MOV ECX,dword ptr [EDX + 0x4]
// 005cd6cc: MOV dword ptr [EAX + 0x4],ECX
// 005cd6cf: MOV ECX,dword ptr [EDX + 0x8]
// 005cd6d2: MOV dword ptr [EAX + 0x8],ECX
// 005cd6d5: MOV ECX,dword ptr [EDX + 0xc]
// 005cd6d8: MOV dword ptr [EAX + 0xc],ECX
// 005cd6db: MOV ECX,dword ptr [EDX + 0x10]
// 005cd6de: MOV dword ptr [EAX + 0x10],ECX
// 005cd6e1: MOV ECX,dword ptr [EDX + 0x14]
// 005cd6e4: MOV dword ptr [EAX + 0x14],ECX
// 005cd6e7: POP ESI
// 005cd6e8: POP EBX
// 005cd6e9: RET
