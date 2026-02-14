// Name: core_actor.cpp_CActorPropertyList_hitTest_FUN_0040e9c0
// Address: 0040e9c0
// Address Range: [[0040e9c0, 0040e9fe]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CActorPropertyList_hitTest_FUN_0040e9c0(CActorPropertyList *this_ptr,int x,int y)

#include "nocturne.h"

int __cdecl core_actor_cpp_CActorPropertyList_hitTest_FUN_0040e9c0(CActorPropertyList *this_ptr,int x,int y)

{
  int iVar1;
  
  iVar1 = (y - this_ptr->top_y) / 0xe;
  if ((((iVar1 < 0) || (this_ptr->count <= iVar1)) || (x < this_ptr->left_x)) ||
     (this_ptr->right_x < x)) {
    iVar1 = -1;
  }
  return iVar1;
}
