// Name: shape_superopt.cpp_CPoly_FUN_005d1230
// Address: 005d1230
// Address Range: [[005d1230, 005d12c3]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CPoly_FUN_005d1230(CPoly * this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CPoly_FUN_005d1230(CPoly *this_ptr)

{
  CPoly_vtable *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  int in_stack_00000008;
  undefined4 local_74 [6];
  undefined4 auStack_5c [6];
  undefined4 local_44 [6];
  undefined4 auStack_2c [6];
  CPoly_vtable *local_14;
  
  bVar5 = 0;
  local_14 = this_ptr->vtable;
  (**(code **)(*(int *)(in_stack_00000008 + 100) + 0x6c))();
  pCVar1 = local_14;
  puVar3 = local_74;
  puVar4 = local_44;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = (*(code *)pCVar1->field25_0x64)();
  if (iVar2 == 0) {
    local_14 = *(CPoly_vtable **)(in_stack_00000008 + 100);
    (*(code *)this_ptr->vtable->field27_0x6c)();
    pCVar1 = local_14;
    puVar3 = auStack_5c;
    puVar4 = auStack_2c;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar2 = (**(code **)((int)pCVar1 + 100))();
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}


// Assembly code:
// 005d1230: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_FUN_005d1230
// 005d1231: PUSH ESI
// 005d1232: PUSH EDI
// 005d1233: PUSH EBP
// 005d1234: SUB ESP,0x64
// 005d1237: MOV EBX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x4] (READ)
// 005d123b: MOV EBP,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x8] (READ)
// 005d123f: MOV EAX,dword ptr [EBX + 0x64]
// 005d1242: PUSH EBP
// 005d1243: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005d1247: MOV EAX,dword ptr [EBP + 0x64]
// 005d124a: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x74] (DATA)
// 005d124e: LEA EDI,[ESP + 0x34]
//   XREF to: Stack[-0x44] (DATA)
// 005d1252: CALL dword ptr [EAX + 0x6c]
// 005d1255: ADD ESP,0x4
// 005d1258: LEA EAX,[ESP + 0x30]
// 005d125c: MOV ECX,0x6
// 005d1261: PUSH EAX
// 005d1262: LEA ESI,[ESP + 0x4]
// 005d1266: MOV EAX,dword ptr [ESP + 0x64]
// 005d126a: PUSH EBX
// 005d126b: MOVSD.REP ES:EDI,ESI
// 005d126d: CALL dword ptr [EAX + 0x64]
// 005d1270: ADD ESP,0x8
// 005d1273: TEST EAX,EAX
// 005d1275: JZ 0x005d1284
//   XREF to: 005d1284 (CONDITIONAL_JUMP)
// 005d1277: MOV EAX,0x1
//   Label: LAB_005d1277
// 005d127c: ADD ESP,0x64
// 005d127f: POP EBP
// 005d1280: POP EDI
// 005d1281: POP ESI
// 005d1282: POP EBX
// 005d1283: RET
// 005d1284: MOV EAX,dword ptr [EBP + 0x64]
//   Label: LAB_005d1284
// 005d1287: PUSH EBX
// 005d1288: MOV dword ptr [ESP + 0x64],EAX
// 005d128c: MOV EAX,dword ptr [EBX + 0x64]
// 005d128f: LEA ESI,[ESP + 0x1c]
// 005d1293: LEA EDI,[ESP + 0x4c]
// 005d1297: CALL dword ptr [EAX + 0x6c]
// 005d129a: ADD ESP,0x4
// 005d129d: LEA EAX,[ESP + 0x48]
// 005d12a1: MOV ECX,0x6
// 005d12a6: PUSH EAX
// 005d12a7: LEA ESI,[ESP + 0x1c]
// 005d12ab: MOV EAX,dword ptr [ESP + 0x64]
// 005d12af: PUSH EBP
// 005d12b0: MOVSD.REP ES:EDI,ESI
// 005d12b2: CALL dword ptr [EAX + 0x64]
// 005d12b5: ADD ESP,0x8
// 005d12b8: TEST EAX,EAX
// 005d12ba: JNZ 0x005d1277
//   XREF to: 005d1277 (CONDITIONAL_JUMP)
// 005d12bc: ADD ESP,0x64
// 005d12bf: POP EBP
// 005d12c0: POP EDI
// 005d12c1: POP ESI
// 005d12c2: POP EBX
// 005d12c3: RET
