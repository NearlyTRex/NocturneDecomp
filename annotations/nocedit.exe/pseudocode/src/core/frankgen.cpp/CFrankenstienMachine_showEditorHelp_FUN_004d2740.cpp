// Name: core_frankgen.cpp_CFrankenstienMachine_showEditorHelp_FUN_004d2740
// Address: 004d2740
// Address Range: [[004d2740, 004d276e]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_showEditorHelp_FUN_004d2740(CFrankenstienMachine *this_ptr,int *y_pos)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_CFrankenstienMachine_showEditorHelp_FUN_004d2740(CFrankenstienMachine *this_ptr,int *y_pos)

{
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base,y_pos);
  *y_pos = *y_pos + 0xb;
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (y_pos,"</>","Move bat along course.");
  return;
}
