// Name: core_actor.cpp_CActorPropertyList_calculateLayout_FUN_0040e770
// Address: 0040e770
// Address Range: [[0040e770, 0040e840]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CActorPropertyList_calculateLayout_FUN_0040e770(CActorPropertyList *this_ptr,int x,int y,int width)

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_calculateLayout_FUN_0040e770(CActorPropertyList *this_ptr,int x,int y,int width)

{
  int iVar1;
  int iVar4;
  int iVar5;
  CActorProperty *this_ptr_00;
  int iVar2;
  int iVar3;
  int local_14;
  
  iVar2 = 0;
  iVar3 = 0;
  local_14 = 0;
  if (0 < this_ptr->count) {
    this_ptr_00 = this_ptr->properties;
    do {
      iVar1 = core_actor_cpp_CActorProperty_getNameWidth_FUN_0040ee30(this_ptr_00);
      if (iVar2 < iVar1) {
        iVar2 = iVar1;
      }
      iVar4 = core_actor_cpp_CActorProperty_getValueWidth_FUN_0040ee50(this_ptr_00,this_ptr->owner);
      if (local_14 < iVar4) {
        local_14 = iVar4;
      }
      iVar3 = iVar3 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar3 < this_ptr->count);
  }
  iVar4 = engine_2d_c_getStringWidth_FUN_004018a0(": ");
  this_ptr->name_column_x = x + iVar2 + iVar4 + 2;
  iVar5 = engine_2d_c_getStringWidth_FUN_004018a0(": ");
  this_ptr->value_column_x = this_ptr->name_column_x + iVar5;
  this_ptr->left_x = x;
  this_ptr->right_x = width;
  this_ptr->top_y = y + 3;
  this_ptr->total_width = local_14 + iVar2 + iVar4;
  this_ptr->total_height = this_ptr->count * 0xe + 6;
  return;
}
