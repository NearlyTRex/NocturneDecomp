// Name: core_set.cpp_CDemonSet_restoreCameraView_FUN_0050e310
// Address: 0050e310
// Address Range: [[0050e310, 0050e33e]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_restoreCameraView_FUN_0050e310(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_restoreCameraView_FUN_0050e310(CDemonSet *this_ptr)

{
  CDemonActor *pCVar1;
  
  pCVar1 = this_ptr->renderable_actors[0x774];
  core_set_cpp_CDemonSet_setCameraView_FUN_005088f0
            (this_ptr,(int)this_ptr->renderable_actors[0x773]);
  this_ptr->renderable_actors[0x775] = (CDemonActor *)0x0;
  this_ptr->renderable_actors[0x774] = pCVar1;
  return;
}
