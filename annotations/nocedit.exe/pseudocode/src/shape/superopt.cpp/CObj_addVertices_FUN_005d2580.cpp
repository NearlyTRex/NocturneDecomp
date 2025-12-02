// Name: shape_superopt.cpp_CObj_addVertices_FUN_005d2580
// Address: 005d2580
// Address Range: [[005d2580, 005d25f8]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_addVertices_FUN_005d2580(CObj * this_ptr, int add_count)
// Globals:
//   TerminatedCString s_Unable_to_add_verts_to_o_006543a1
// Function calls:
//   crt_memory.c_memset_FUN_005fde40
//   crt_memory.c_realloc_FUN_00601df0
//   shape_superopt.cpp_logToFile_FUN_005c7910

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_addVertices_FUN_005d2580(CObj *this_ptr,int add_count)

{
  CVert *pCVar1;
  
  pCVar1 = (CVert *)crt_memory_c_realloc_FUN_00601df0
                              (this_ptr->vertex_data,(this_ptr->vertex_count + add_count) * 0x38);
  if (pCVar1 != (CVert *)0x0) {
    this_ptr->vertex_data = pCVar1;
    crt_memory_c_memset_FUN_005fde40
              (this_ptr->vertex_data + this_ptr->vertex_count,0,add_count * 0x38);
    this_ptr->vertex_count = this_ptr->vertex_count + add_count;
    return 1;
  }
  shape_superopt_cpp_logToFile_FUN_005c7910("Unable to add verts to object");
  return 0;
}


// Assembly code:
// 005d2580: PUSH EBX
//   Label: shape_superopt.cpp_CObj_addVertices_FUN_005d2580
// 005d2581: PUSH ESI
// 005d2582: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d2586: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005d258a: MOV EAX,dword ptr [EBX]
// 005d258c: ADD EAX,ESI
// 005d258e: SHL EAX,0x3
// 005d2591: MOV EDX,EAX
// 005d2593: SHL EAX,0x3
// 005d2596: SUB EAX,EDX
// 005d2598: PUSH EAX
// 005d2599: MOV EDX,dword ptr [EBX + 0x4]
// 005d259c: PUSH EDX
// 005d259d: CALL crt_memory.c_realloc_FUN_00601df0
//   XREF to: 00601df0 (UNCONDITIONAL_CALL)
// 005d25a2: ADD ESP,0x8
// 005d25a5: TEST EAX,EAX
// 005d25a7: JZ 0x005d25e7
//   XREF to: 005d25e7 (CONDITIONAL_JUMP)
// 005d25a9: MOV dword ptr [EBX + 0x4],EAX
// 005d25ac: LEA EAX,[ESI*0x8 + 0x0]
// 005d25b3: MOV EDX,EAX
// 005d25b5: SHL EAX,0x3
// 005d25b8: SUB EAX,EDX
// 005d25ba: PUSH EAX
// 005d25bb: MOV EAX,dword ptr [EBX]
// 005d25bd: SHL EAX,0x3
// 005d25c0: MOV EDX,EAX
// 005d25c2: SHL EAX,0x3
// 005d25c5: SUB EAX,EDX
// 005d25c7: MOV EDX,EAX
// 005d25c9: MOV EAX,dword ptr [EBX + 0x4]
// 005d25cc: PUSH 0x0
// 005d25ce: ADD EAX,EDX
// 005d25d0: PUSH EAX
// 005d25d1: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005d25d6: MOV ECX,dword ptr [EBX]
// 005d25d8: MOV EAX,0x1
// 005d25dd: ADD ECX,ESI
// 005d25df: ADD ESP,0xc
// 005d25e2: MOV dword ptr [EBX],ECX
// 005d25e4: POP ESI
// 005d25e5: POP EBX
// 005d25e6: RET
// 005d25e7: PUSH 0x6543a1
//   Label: LAB_005d25e7
//   XREF to: 006543a1 (DATA)
// 005d25ec: CALL shape_superopt.cpp_logToFile_FUN_005c7910
//   XREF to: 005c7910 (UNCONDITIONAL_CALL)
// 005d25f1: ADD ESP,0x4
// 005d25f4: XOR EAX,EAX
// 005d25f6: POP ESI
// 005d25f7: POP EBX
// 005d25f8: RET
