// Name: core_sound.cpp_CSound_selectReverbPreset_FUN_0057db60
// Address: 0057db60
// Address Range: [[0057db60, 0057dbf8]]
// Convention: __cdecl
// Signature: int __cdecl core_sound_cpp_CSound_selectReverbPreset_FUN_0057db60(CSound *this_ptr,char *title,int *selection_inout)

#include "nocturne.h"

int __cdecl core_sound_cpp_CSound_selectReverbPreset_FUN_0057db60(CSound *this_ptr,char *title,int *selection_inout)

{
  uint *puVar1;
  int iVar2;
  CPickList CStack_3c4;
  
  iVar2 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_0049a620(&CStack_3c4);
  do {
    puVar1 = (uint *)(iVar2 + 0x6236bc);
    iVar2 = iVar2 + 0x10;
    shape_edittool_cpp_CStrList_add_FUN_004994d0(&CStack_3c4.base,(char *)*puVar1);
  } while (iVar2 != 0x1b0);
  iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0
                    (&CStack_3c4,title,*selection_inout,0);
  if (-1 < iVar2) {
    *selection_inout = iVar2;
    shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&CStack_3c4,0);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&CStack_3c4,0);
  return 0;
}
