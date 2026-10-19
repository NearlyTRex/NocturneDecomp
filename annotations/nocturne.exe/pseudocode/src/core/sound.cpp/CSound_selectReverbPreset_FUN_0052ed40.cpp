// Name: core_sound.cpp_CSound_selectReverbPreset_FUN_0052ed40
// Address: 0052ed40
// Address Range: [[0052ed40, 0052edd6]]
// Convention: __cdecl
// Signature: int __cdecl core_sound_cpp_CSound_selectReverbPreset_FUN_0052ed40(CSound *this_ptr,char *title,int *selection_inout)

#include "nocturne.h"

int __cdecl core_sound_cpp_CSound_selectReverbPreset_FUN_0052ed40(CSound *this_ptr,char *title,int *selection_inout)

{
  uint *puVar1;
  int iVar2;
  CPickList CStack_174;
  
  iVar2 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_00474c90(&CStack_174);
  do {
    puVar1 = (uint *)((int)&PTR_s_OFF_00594c3d_005bed6c + iVar2);
    iVar2 = iVar2 + 0x10;
    shape_edittool_cpp_CStrList_add_FUN_00473cb0(&CStack_174.base,(char *)*puVar1);
  } while (iVar2 != 0x1b0);
  iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                    (&CStack_174,title,*selection_inout);
  if (-1 < iVar2) {
    *selection_inout = iVar2;
    shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(&CStack_174,0);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(&CStack_174,0);
  return 0;
}
