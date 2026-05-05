// Name: core_sound.cpp_CSound_selectReverbPreset_FUN_005b3d20
// Address: 005b3d20
// MANUAL RECONSTRUCTION
// Address Range: [[005b3d20, 005b3db8]]
// Convention: __cdecl
// Signature: int __cdecl core_sound_cpp_CSound_selectReverbPreset_FUN_005b3d20(CSound *this_ptr,char *title,int *selection_inout)

#include "nocturne.h"

int __cdecl core_sound_cpp_CSound_selectReverbPreset_FUN_005b3d20(CSound *this_ptr,char *title,int *selection_inout)

{
  int iVar1;
  int iVar2;
  CPickList local_3ac;

  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3ac);
  for (iVar2 = 0; iVar2 < 27; iVar2 = iVar2 + 1) {
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,g_SoundModeTable[iVar2].name);
  }
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
