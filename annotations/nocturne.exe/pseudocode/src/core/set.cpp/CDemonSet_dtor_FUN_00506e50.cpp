// Name: core_set.cpp_CDemonSet_dtor_FUN_00506e50
// Address: 00506e50
// Address Range: [[00506e50, 00506eb0]]
// Convention: __cdecl
// Signature: CDemonSet * __cdecl core_set_cpp_CDemonSet_dtor_FUN_00506e50(CDemonSet *this_ptr,uint flags)

#include "nocturne.h"

CDemonSet * __cdecl core_set_cpp_CDemonSet_dtor_FUN_00506e50(CDemonSet *this_ptr,uint flags)

{
  SVDBox *pSVar1;
  SRoom *pSVar2;
  C3DSLight *pCVar3;
  C3DSCamera *pCVar4;
  
  core_set_cpp_CDemonSet_clear_FUN_00506ec0(this_ptr);
  pSVar1 = core_set_cpp_FUN_0050eb60(this_ptr->vdir_boxes,0);
  pSVar2 = core_set_cpp_FUN_0050eb40((SRoom *)&pSVar1[-0x15].parent_index,0);
  pCVar3 = core_set_cpp_FUN_0050eb20((C3DSLight *)&pSVar2[-0x4b99].extents.z,0);
  pCVar4 = core_set_cpp_FUN_0050eb00((C3DSCamera *)(pCVar3[-0x11].camera_light_bounds + 0x9b),0);
  return (CDemonSet *)&pCVar4[-1].enabled;
}
