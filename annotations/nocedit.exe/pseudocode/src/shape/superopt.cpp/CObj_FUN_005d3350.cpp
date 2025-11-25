// Name: shape_superopt.cpp_CObj_FUN_005d3350
// Address: 005d3350
// Address Range: [[005d3350, 005d337d]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_FUN_005d3350(CObj * this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_FUN_005d3350(CObj *this_ptr)

{
  void *in_stack_00000008;
  
  if ((this_ptr->vertex_data <= in_stack_00000008) &&
     (in_stack_00000008 < (void *)((int)this_ptr->vertex_data + this_ptr->field0_0x0 * 0x38))) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 005d3350: MOV ECX,dword ptr [ESP + 0x4]
//   Label: shape_superopt.cpp_CObj_FUN_005d3350
//   XREF to: Stack[0x4] (READ)
// 005d3354: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d3358: CMP EAX,dword ptr [ECX + 0x4]
// 005d335b: JC 0x005d332c
//   XREF to: 005d332c (CONDITIONAL_JUMP)
// 005d335d: MOV EAX,dword ptr [ECX]
// 005d335f: SHL EAX,0x3
// 005d3362: MOV EDX,EAX
// 005d3364: SHL EAX,0x3
// 005d3367: SUB EAX,EDX
// 005d3369: MOV EDX,EAX
// 005d336b: MOV EAX,dword ptr [ECX + 0x4]
// 005d336e: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005d3372: ADD EAX,EDX
// 005d3374: CMP EAX,ECX
// 005d3376: JBE 0x005d332c
//   XREF to: 005d332c (CONDITIONAL_JUMP)
// 005d3378: MOV EAX,0x1
// 005d337d: RET
