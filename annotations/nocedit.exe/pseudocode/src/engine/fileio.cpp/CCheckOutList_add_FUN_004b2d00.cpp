// Name: engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00
// Address: 004b2d00
// Address Range: [[004b2d00, 004b2d6c]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00(CCheckOutList * this_ptr, CCheckOutItem * new_entry)
// Cross-references:
//   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 (004b3920) at 004b3df8 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60 (004b2a60) at 004b2cb8 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004bacaf [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_fileio_cpp_00626417
// Function calls:
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CCheckOutList_add_FUN_004b2d00(CCheckOutList *this_ptr,CCheckOutItem *new_entry)

{
  CCheckOutItem *pCVar1;
  int iVar2;
  byte bVar3;
  undefined4 *in_stack_0000000c;
  
  bVar3 = 0;
  pCVar1 = (CCheckOutItem *)
           shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->items,(this_ptr->count + 1) * 0x168,"..\\engine\\fileio.cpp",
                      0x2e7);
  this_ptr->items = pCVar1;
  if (pCVar1 == (CCheckOutItem *)0x0) {
    return 0;
  }
  pCVar1 = this_ptr->items + this_ptr->count;
  for (iVar2 = 0x5a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar1->name = *in_stack_0000000c;
    in_stack_0000000c = in_stack_0000000c + (uint)bVar3 * -2 + 1;
    pCVar1 = (CCheckOutItem *)((int)pCVar1 + (uint)bVar3 * -8 + 4);
  }
  this_ptr->count = this_ptr->count + 1;
  return 1;
}


// Assembly code:
// 004b2d00: PUSH EBX
//   Label: engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00
// 004b2d01: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004b2d05: MOV EDX,dword ptr [EBX]
// 004b2d07: INC EDX
// 004b2d08: LEA EAX,[EDX*0x4 + 0x0]
// 004b2d0f: SUB EAX,EDX
// 004b2d11: SHL EAX,0x3
// 004b2d14: PUSH 0x2e7
// 004b2d19: MOV EDX,EAX
// 004b2d1b: SHL EAX,0x4
// 004b2d1e: PUSH 0x626417
//   XREF to: 00626417 (DATA)
// 004b2d23: SUB EAX,EDX
// 004b2d25: PUSH EAX
// 004b2d26: MOV EDX,dword ptr [EBX + 0x4]
// 004b2d29: PUSH EDX
// 004b2d2a: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 004b2d2f: ADD ESP,0x10
// 004b2d32: MOV dword ptr [EBX + 0x4],EAX
// 004b2d35: TEST EAX,EAX
// 004b2d37: JNZ 0x004b2d3b
//   XREF to: 004b2d3b (CONDITIONAL_JUMP)
// 004b2d39: POP EBX
// 004b2d3a: RET
// 004b2d3b: PUSH EDI
//   Label: LAB_004b2d3b
// 004b2d3c: PUSH ESI
// 004b2d3d: MOV EDX,dword ptr [EBX]
// 004b2d3f: LEA EAX,[EDX*0x4 + 0x0]
// 004b2d46: SUB EAX,EDX
// 004b2d48: SHL EAX,0x3
// 004b2d4b: MOV ECX,0x5a
// 004b2d50: MOV EDX,EAX
// 004b2d52: SHL EAX,0x4
// 004b2d55: MOV EDI,dword ptr [EBX + 0x4]
// 004b2d58: SUB EAX,EDX
// 004b2d5a: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004b2d5e: ADD EDI,EAX
// 004b2d60: MOVSD.REP ES:EDI,ESI
// 004b2d62: MOV EAX,0x1
// 004b2d67: ADD dword ptr [EBX],EAX
// 004b2d69: POP ESI
// 004b2d6a: POP EDI
// 004b2d6b: POP EBX
// 004b2d6c: RET
