// Name: shape_design.c_displayHeapStatus_FUN_0046e760
// Address: 0046e760
// Address Range: [[0046e760, 0046e7d6] [0046e7e8, 0046e800]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_displayHeapStatus_FUN_0046e760(int line_number)

#include "nocturne.h"

void __cdecl shape_design_c_displayHeapStatus_FUN_0046e760(int line_number)

{
  uint uVar1;
  
  uVar1 = crt_watcom_c_heapchk_FUN_00600ad0();
  switch(uVar1) {
  case 0:
    engine_2d_c_drawText_FUN_00401fd0("OK - heap is good",0,line_number * 0xb);
    break;
  case 1:
    engine_2d_c_drawText_FUN_00401fd0("OK - heap is empty",0,line_number * 0xb);
    break;
  case 2:
    engine_2d_c_drawText_FUN_00401fd0("ERROR - heap is damaged",0,line_number * 0xb);
    break;
  case 3:
    engine_2d_c_drawText_FUN_00401fd0("ERROR - bad node in heap",0,line_number * 0xb);
  }
  return;
}
