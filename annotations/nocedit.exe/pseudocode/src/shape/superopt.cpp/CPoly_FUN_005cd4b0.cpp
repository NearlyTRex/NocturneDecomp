// Name: shape_superopt.cpp_CPoly_FUN_005cd4b0
// Address: 005cd4b0
// Address Range: [[005cd4b0, 005cd559]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_FUN_005cd4b0(CPoly * this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_FUN_005cd4b0(CPoly *this_ptr)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  pvVar1 = this_ptr->parent_obj->vertex_data;
  puVar2 = (undefined4 *)(this_ptr->vertex_idx_0 * 0x38 + (int)pvVar1);
  puVar2[6] = *puVar2;
  puVar2[7] = puVar2[1];
  puVar2[8] = puVar2[2];
  puVar2[9] = puVar2[3];
  puVar2[10] = puVar2[4];
  puVar2[0xb] = puVar2[5];
  puVar2 = (undefined4 *)(this_ptr->vertex_idx_1 * 0x38 + (int)pvVar1);
  puVar2[6] = *puVar2;
  puVar2[7] = puVar2[1];
  puVar2[8] = puVar2[2];
  puVar2[9] = puVar2[3];
  puVar2[10] = puVar2[4];
  puVar2[0xb] = puVar2[5];
  puVar2 = (undefined4 *)(this_ptr->vertex_idx_2 * 0x38 + (int)pvVar1);
  puVar2[6] = *puVar2;
  puVar2[7] = puVar2[1];
  puVar2[8] = puVar2[2];
  puVar2[9] = puVar2[3];
  puVar2[10] = puVar2[4];
  puVar2[0xb] = puVar2[5];
  return;
}


// Assembly code:
// 005cd4b0: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_FUN_005cd4b0
// 005cd4b1: PUSH ESI
// 005cd4b2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005cd4b6: MOV EAX,dword ptr [EBX + 0x4]
// 005cd4b9: SHL EAX,0x3
// 005cd4bc: MOV ECX,dword ptr [EBX]
// 005cd4be: MOV EDX,EAX
// 005cd4c0: SHL EAX,0x3
// 005cd4c3: MOV ECX,dword ptr [ECX + 0x4]
// 005cd4c6: SUB EAX,EDX
// 005cd4c8: ADD EAX,ECX
// 005cd4ca: LEA EDX,[EAX + 0x18]
// 005cd4cd: MOV ESI,dword ptr [EAX]
// 005cd4cf: MOV dword ptr [EDX],ESI
// 005cd4d1: MOV ESI,dword ptr [EAX + 0x4]
// 005cd4d4: MOV dword ptr [EDX + 0x4],ESI
// 005cd4d7: MOV ESI,dword ptr [EAX + 0x8]
// 005cd4da: MOV dword ptr [EDX + 0x8],ESI
// 005cd4dd: MOV ESI,dword ptr [EAX + 0xc]
// 005cd4e0: MOV dword ptr [EDX + 0xc],ESI
// 005cd4e3: MOV ESI,dword ptr [EAX + 0x10]
// 005cd4e6: MOV dword ptr [EDX + 0x10],ESI
// 005cd4e9: MOV ESI,dword ptr [EAX + 0x14]
// 005cd4ec: MOV dword ptr [EDX + 0x14],ESI
// 005cd4ef: MOV EAX,dword ptr [EBX + 0x8]
// 005cd4f2: SHL EAX,0x3
// 005cd4f5: MOV EDX,EAX
// 005cd4f7: SHL EAX,0x3
// 005cd4fa: SUB EAX,EDX
// 005cd4fc: ADD EAX,ECX
// 005cd4fe: LEA EDX,[EAX + 0x18]
// 005cd501: MOV ESI,dword ptr [EAX]
// 005cd503: MOV dword ptr [EDX],ESI
// 005cd505: MOV ESI,dword ptr [EAX + 0x4]
// 005cd508: MOV dword ptr [EDX + 0x4],ESI
// 005cd50b: MOV ESI,dword ptr [EAX + 0x8]
// 005cd50e: MOV dword ptr [EDX + 0x8],ESI
// 005cd511: MOV ESI,dword ptr [EAX + 0xc]
// 005cd514: MOV dword ptr [EDX + 0xc],ESI
// 005cd517: MOV ESI,dword ptr [EAX + 0x10]
// 005cd51a: MOV dword ptr [EDX + 0x10],ESI
// 005cd51d: MOV ESI,dword ptr [EAX + 0x14]
// 005cd520: MOV dword ptr [EDX + 0x14],ESI
// 005cd523: MOV EAX,dword ptr [EBX + 0xc]
// 005cd526: SHL EAX,0x3
// 005cd529: MOV EDX,EAX
// 005cd52b: SHL EAX,0x3
// 005cd52e: SUB EAX,EDX
// 005cd530: ADD EAX,ECX
// 005cd532: LEA EDX,[EAX + 0x18]
// 005cd535: MOV ECX,dword ptr [EAX]
// 005cd537: MOV dword ptr [EDX],ECX
// 005cd539: MOV ECX,dword ptr [EAX + 0x4]
// 005cd53c: MOV dword ptr [EDX + 0x4],ECX
// 005cd53f: MOV ECX,dword ptr [EAX + 0x8]
// 005cd542: MOV dword ptr [EDX + 0x8],ECX
// 005cd545: MOV ECX,dword ptr [EAX + 0xc]
// 005cd548: MOV dword ptr [EDX + 0xc],ECX
// 005cd54b: MOV ECX,dword ptr [EAX + 0x10]
// 005cd54e: MOV dword ptr [EDX + 0x10],ECX
// 005cd551: MOV ECX,dword ptr [EAX + 0x14]
// 005cd554: MOV dword ptr [EDX + 0x14],ECX
// 005cd557: POP ESI
// 005cd558: POP EBX
// 005cd559: RET
