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
  int iVar1;
  int iVar2;
  CActorProperty *this_ptr_00;
  int y;
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
    this_ptr_00 = this_ptr->properties;
    y = iVar1 + 2;
    local_18 = iVar1;
    do {
      local_1c = this_ptr_00;
      core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50(this_ptr_00,this_ptr->owner,local_ec);
      local_20 = core_actor_cpp_CActorProperty_getNameWidth_FUN_0040ee30(this_ptr_00);
      local_20 = this_ptr->name_column_x - local_20;
      if (iVar2 == selected_index) {
        iVar1 = 0xfa;
        if (this_ptr_00->enabled_flag == 0) {
          iVar1 = 7;
        }
        engine_2d_c_fillRectWithBorder_FUN_00403200
                  (this_ptr->left_x + 1,local_18,this_ptr->right_x + -1,local_14,0,iVar1);
      }
      engine_2d_c_drawText_FUN_00401fd0(local_1c->name,local_20,y);
      engine_2d_c_drawText_FUN_00401fd0(": ",this_ptr->name_column_x,y);
      this_ptr_00 = this_ptr_00 + 1;
      iVar2 = iVar2 + 1;
      engine_2d_c_drawText_FUN_00401fd0(local_ec,this_ptr->value_column_x,y);
      local_18 = local_18 + 0xe;
      local_14 = local_14 + 0xe;
      y = y + 0xe;
    } while (iVar2 < this_ptr->count);
  }
  engine_2d_c_setTextWrapEnabled_FUN_00402800(local_24);
  return;
}
