// Name: shape_design.c_displayMemoryStatus_FUN_0046e6f0
// Address: 0046e6f0
// Address Range: [[0046e6f0, 0046e75b]]
// Convention: __cdecl
// Signature: void shape_design.c_displayMemoryStatus_FUN_0046e6f0(int line_number)

#include "nocturne.h"

void __cdecl shape_design_c_displayMemoryStatus_FUN_0046e6f0(int line_number)

{
  BADSPACEBASE *in_ESP;
  
  crt_watcom_c_memavl_FUN_006008f0();
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffa0,"Memory available: %d");
  engine_2d_c_drawText_FUN_00401fd0(&stack0xffffffa0,0,line_number * 0xb);
  crt_watcom_c_memmax_FUN_00600940();
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffa0,"Largest block: %d");
  engine_2d_c_drawText_FUN_00401fd0(&stack0xffffffa0,0,(line_number + 1) * 0xb);
  return;
}
