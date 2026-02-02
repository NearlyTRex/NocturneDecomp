// Name: core_actor.cpp_CActorPropertyList_render_FUN_0040e850
// Address: 0040e850
// Address Range: [[0040e850, 0040e9b9]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CActorPropertyList_render_FUN_0040e850 (CActorPropertyList *this_ptr,int selected_index)

#include "nocturne.h"

void __cdecl
core_actor_cpp_CActorPropertyList_render_FUN_0040e850
          (CActorPropertyList *this_ptr,int selected_index)

{
  int extraout_EAX;
  int iVar1;
  int iVar2;
  CActorProperty *pCVar3;
  int y_pos;
  char local_ec [200];
  int local_24;
  int local_20;
  CActorProperty *local_1c;
  int local_18;
  int local_14;
  
  local_24 = engine_2d_c_getTextWrapEnabled_FUN_004027f0();
  engine_2d_c_setTextWrapEnabled_FUN_00402800(0);
  iVar2 = 0;
  iVar1 = this_ptr->top_y;
  if (0 < this_ptr->count) {
    local_14 = iVar1 + 0xd;
    pCVar3 = this_ptr->properties;
    y_pos = iVar1 + 2;
    local_18 = iVar1;
    do {
      local_1c = pCVar3;
      core_actor_cpp_CActorProperty_FUN_0040ea50();
      core_actor_cpp_FUN_0040ee30();
      local_20 = this_ptr->name_column_x - extraout_EAX;
      if (iVar2 == selected_index) {
        iVar1 = 0xfa;
        if (pCVar3->enabled_flag == 0) {
          iVar1 = 7;
        }
        engine_2d_c_fillRectWithBorder_FUN_00403200
                  (this_ptr->left_x + 1,local_18,this_ptr->right_x + -1,local_14,0,iVar1);
      }
      engine_2d_c_drawText_FUN_00401fd0(local_1c->name,local_20,y_pos);
      engine_2d_c_drawText_FUN_00401fd0(": ",this_ptr->name_column_x,y_pos);
      pCVar3 = pCVar3 + 1;
      iVar2 = iVar2 + 1;
      engine_2d_c_drawText_FUN_00401fd0(local_ec,this_ptr->value_column_x,y_pos);
      local_18 = local_18 + 0xe;
      local_14 = local_14 + 0xe;
      y_pos = y_pos + 0xe;
    } while (iVar2 < this_ptr->count);
  }
  engine_2d_c_setTextWrapEnabled_FUN_00402800(local_24);
  return;
}
