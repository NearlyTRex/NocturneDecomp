// Name: shape_superopt.cpp_CObj_FUN_005d2500
// Address: 005d2500
// Address Range: [[005d2500, 005d2577]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_FUN_005d2500(CObj * this_ptr)
// Globals:
//   TerminatedCString s_Unable_to_allocate_RAM_f_00654376
// Function calls:
//   crt_memory.c_free_FUN_00601cd0
//   crt_memory.c_malloc_FUN_00601bb0
//   crt_memory.c_memset_FUN_005fde40
//   shape_superopt.cpp_logToFile_FUN_005c7910

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_FUN_005d2500(CObj *this_ptr)

{
  void *pvVar1;
  int in_stack_00000008;
  
  this_ptr->field0_0x0 = in_stack_00000008;
  pvVar1 = crt_memory_c_malloc_FUN_00601bb0(in_stack_00000008 * 0x38);
  this_ptr->vertex_data = pvVar1;
  if (pvVar1 == (void *)0x0) {
    if (this_ptr->poly_array != (CPoly *)0x0) {
      crt_memory_c_free_FUN_00601cd0(this_ptr->poly_array);
    }
    this_ptr->poly_array = (CPoly *)0x0;
    shape_superopt_cpp_logToFile_FUN_005c7910("Unable to allocate RAM for object vertices");
    this_ptr->field5_0x14 = 0;
    return 0;
  }
  crt_memory_c_memset_FUN_005fde40(this_ptr->vertex_data,0,this_ptr->field0_0x0 * 0x38);
  return 1;
}


// Assembly code:
// 005d2500: PUSH EBX
//   Label: shape_superopt.cpp_CObj_FUN_005d2500
// 005d2501: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005d2505: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005d2509: MOV dword ptr [EBX],EAX
// 005d250b: SHL EAX,0x3
// 005d250e: MOV EDX,EAX
// 005d2510: SHL EAX,0x3
// 005d2513: SUB EAX,EDX
// 005d2515: PUSH EAX
// 005d2516: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 005d251b: ADD ESP,0x4
// 005d251e: MOV dword ptr [EBX + 0x4],EAX
// 005d2521: TEST EAX,EAX
// 005d2523: JNZ 0x005d2554
//   XREF to: 005d2554 (CONDITIONAL_JUMP)
// 005d2525: MOV ECX,dword ptr [EBX + 0xc]
// 005d2528: TEST ECX,ECX
// 005d252a: JZ 0x005d2535
//   XREF to: 005d2535 (CONDITIONAL_JUMP)
// 005d252c: PUSH ECX
// 005d252d: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 005d2532: ADD ESP,0x4
// 005d2535: PUSH 0x654376
//   Label: LAB_005d2535
//   XREF to: 00654376 (DATA)
// 005d253a: MOV dword ptr [EBX + 0xc],0x0
// 005d2541: CALL shape_superopt.cpp_logToFile_FUN_005c7910
//   XREF to: 005c7910 (UNCONDITIONAL_CALL)
// 005d2546: ADD ESP,0x4
// 005d2549: MOV dword ptr [EBX + 0x14],0x0
// 005d2550: XOR EAX,EAX
// 005d2552: POP EBX
// 005d2553: RET
// 005d2554: PUSH EDI
//   Label: LAB_005d2554
// 005d2555: MOV EAX,dword ptr [EBX]
// 005d2557: SHL EAX,0x3
// 005d255a: MOV EDX,EAX
// 005d255c: SHL EAX,0x3
// 005d255f: SUB EAX,EDX
// 005d2561: PUSH EAX
// 005d2562: PUSH 0x0
// 005d2564: MOV EDI,dword ptr [EBX + 0x4]
// 005d2567: PUSH EDI
// 005d2568: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005d256d: MOV EAX,0x1
// 005d2572: ADD ESP,0xc
// 005d2575: POP EDI
// 005d2576: POP EBX
// 005d2577: RET
