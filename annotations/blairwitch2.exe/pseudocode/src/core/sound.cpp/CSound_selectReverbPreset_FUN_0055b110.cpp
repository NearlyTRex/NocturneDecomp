// Name: core_sound.cpp_CSound_selectReverbPreset_FUN_0055b110
// Address: 0055b110
// Address Range: [[0055b110, 0055b1a8]]
// Convention: __cdecl
// Signature: int __cdecl core_sound_cpp_CSound_selectReverbPreset_FUN_0055b110(CSound *this_ptr,char *title,int *selection_inout)

#include "nocturne.h"

int __cdecl core_sound_cpp_CSound_selectReverbPreset_FUN_0055b110(CSound *this_ptr,char *title,int *selection_inout)

{
  uint *puVar1;
  int iVar2;
  CPickList CStack_3c4;
  
  iVar2 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_00481fc0(&CStack_3c4);
  do {
    puVar1 = (uint *)(iVar2 + 0x61c06c);
    iVar2 = iVar2 + 0x10;
    shape_edittool_cpp_CStrList_add_FUN_00480e70(&CStack_3c4.base,(char *)*puVar1);
  } while (iVar2 != 0x1b0);
  iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250
                    (&CStack_3c4,title,*selection_inout,0);
  if (-1 < iVar2) {
    *selection_inout = iVar2;
    shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&CStack_3c4,0);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&CStack_3c4,0);
  return 0;
}
