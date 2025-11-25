// Name: shape_quantize.cpp_CColorQuantizer_ctor_FUN_00554900
// Address: 00554900
// Address Range: [[00554900, 00554936]]
// Convention: __cdecl
// Signature: CColorQuantizer * shape_quantize.cpp_CColorQuantizer_ctor_FUN_00554900(CColorQuantizer * this_ptr)
// Cross-references:
//   shape_quantize.cpp_quantizeRawPixelData_FUN_00556490 (00556490) at 005565b2 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_memset_FUN_005fde40
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

CColorQuantizer * __cdecl
shape_quantize_cpp_CColorQuantizer_ctor_FUN_00554900(CColorQuantizer *this_ptr)

{
  CColorQuantizer *in_stack_0000000c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x14);
  crt_memory_c_memset_FUN_005fde40(in_stack_0000000c,0,0x4b44);
  in_stack_0000000c->num_colors = 0x100;
  in_stack_0000000c->status = -1;
  return in_stack_0000000c;
}


// Assembly code:
// 00554900: PUSH 0x14
//   Label: shape_quantize.cpp_CColorQuantizer_ctor_FUN_00554900
// 00554905: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0055490a: PUSH EBX
// 0055490b: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0055490f: PUSH 0x4b44
// 00554914: PUSH 0x0
// 00554916: PUSH EBX
// 00554917: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0055491c: ADD ESP,0xc
// 0055491f: MOV dword ptr [EBX + 0x4b40],0x100
// 00554929: MOV EAX,EBX
// 0055492b: MOV dword ptr [EBX + 0x4b34],0xffffffff
// 00554935: POP EBX
// 00554936: RET
