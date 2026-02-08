// Name: shape_design.c_displayMemoryStatus_FUN_0046e6f0
// Address: 0046e6f0
// Address Range: [[0046e6f0, 0046e75b]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_displayMemoryStatus_FUN_0046e6f0(int line_number)

#include "nocturne.h"

void __cdecl shape_design_c_displayMemoryStatus_FUN_0046e6f0(int line_number)

{
  uint uVar1;
  uint uVar2;
  char local_60 [80];
  
  uVar1 = memavl();
  _sprintf(local_60,"Memory available: %d",uVar1);
  engine_2d_c_drawText_FUN_00401fd0(local_60,0,line_number * 0xb);
  uVar2 = _memmax();
  _sprintf(local_60,"Largest block: %d",uVar2);
  engine_2d_c_drawText_FUN_00401fd0(local_60,0,(line_number + 1) * 0xb);
  return;
}
