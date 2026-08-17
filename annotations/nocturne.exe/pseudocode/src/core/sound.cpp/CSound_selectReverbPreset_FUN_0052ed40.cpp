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
  uint in_stack_fffffe8c;
  
  iVar2 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_00474c90((CPickList *)&stack0xfffffe8c);
  do {
    puVar1 = (uint *)((int)&PTR_s_OFF_00594c3d_005bed6c + iVar2);
    iVar2 = iVar2 + 0x10;
    shape_edittool_cpp_CStrList_add_FUN_00473cb0((CStrList *)&stack0xfffffe8c,(char *)*puVar1);
  } while (iVar2 != 0x1b0);
  iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                    ((CPickList *)&stack0xfffffe8c,title,*selection_inout,in_stack_fffffe8c);
  if (-1 < iVar2) {
    *selection_inout = iVar2;
    shape_edittool_cpp_CPickList_dtor_FUN_00474cf0((CPickList *)&stack0xfffffe8c,0);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_00474cf0((CPickList *)&stack0xfffffe8c,0);
  return 0;
}
