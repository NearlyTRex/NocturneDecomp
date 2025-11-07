// Name: crt_memory.c_copyArrayWithFunction_FUN_006020c2
// Address: 006020c2
// Address Range: [[006020c2, 006020fa]]
// Convention: __cdecl
// Signature: void * crt_memory.c_copyArrayWithFunction_FUN_006020c2(void * dest, void * source, int count, int element_size, void * copy_func)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_0051b570 (0051b570) at 0051b6c1 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051bd30 (0051bd30) at 0051bf63 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051efe0 (0051efe0) at 0051f04a [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7b27 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void * __cdecl
crt_memory_c_copyArrayWithFunction_FUN_006020c2
          (void *dest,void *source,int count,int element_size,void *copy_func)

{
  for (; count != 0; count = count + -1) {
    (*(code *)copy_func)();
  }
  return dest;
}


// Assembly code:
// 006020c2: PUSH EBX
//   Label: crt_memory.c_copyArrayWithFunction_FUN_006020c2
// 006020c3: PUSH ESI
// 006020c4: PUSH EDI
// 006020c5: PUSH EBP
// 006020c6: SUB ESP,0x4
// 006020c9: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 006020cd: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 006020d1: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 006020d5: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 006020d9: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x14] (DATA)
// 006020dc: TEST EDI,EDI
//   Label: LAB_006020dc
// 006020de: JA 0x006020eb
//   XREF to: 006020eb (CONDITIONAL_JUMP)
// 006020e0: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 006020e3: ADD ESP,0x4
// 006020e6: POP EBP
// 006020e7: POP EDI
// 006020e8: POP ESI
// 006020e9: POP EBX
// 006020ea: RET
// 006020eb: PUSH ESI
//   Label: LAB_006020eb
// 006020ec: PUSH EBX
// 006020ed: DEC EDI
// 006020ee: CALL dword ptr [ESP + 0x30]
//   XREF to: Stack[0x14] (READ)
// 006020f2: ADD ESI,EBP
// 006020f4: ADD ESP,0x8
// 006020f7: ADD EBX,EBP
// 006020f9: JMP 0x006020dc
//   XREF to: 006020dc (UNCONDITIONAL_JUMP)
