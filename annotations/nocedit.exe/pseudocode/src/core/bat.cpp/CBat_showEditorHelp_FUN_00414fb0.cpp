// Name: core_bat.cpp_CBat_showEditorHelp_FUN_00414fb0
// Address: 00414fb0
// Address Range: [[00414fb0, 00414fde]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_showEditorHelp_FUN_00414fb0(CBat *this_ptr,int *y_pos)

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_showEditorHelp_FUN_00414fb0(CBat *this_ptr,int *y_pos)

{
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base,y_pos);
  *y_pos = *y_pos + 0xb;
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (y_pos,"</>","Move bat along course.");
  return;
}
