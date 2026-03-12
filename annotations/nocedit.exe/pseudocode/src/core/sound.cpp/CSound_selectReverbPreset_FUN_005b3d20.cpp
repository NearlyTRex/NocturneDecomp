// Name: core_sound.cpp_CSound_selectReverbPreset_FUN_005b3d20
// Address: 005b3d20
// Address Range: [[005b3d20, 005b3db8]]
// Convention: __cdecl
// Signature: int __cdecl core_sound_cpp_CSound_selectReverbPreset_FUN_005b3d20(CSound *this_ptr,char *title,int *selection_inout)

#include "nocturne.h"

int __cdecl core_sound_cpp_CSound_selectReverbPreset_FUN_005b3d20(CSound *this_ptr,char *title,int *selection_inout)

{
  int iVar1;
  int iVar2;
  CPickList local_3ac;
  uint *puVar1;
  
  iVar2 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3ac);
  do {
    puVar1 = (uint *)((int)&g_SoundModeTable[0].name + iVar2);
    iVar2 = iVar2 + 0x10;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,(char *)*puVar1);
  } while (iVar2 != 0x1b0);
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    (&local_3ac,title,*selection_inout,0);
  if (-1 < iVar1) {
    *selection_inout = iVar1;
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3ac,0);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3ac,0);
  return 0;
}
