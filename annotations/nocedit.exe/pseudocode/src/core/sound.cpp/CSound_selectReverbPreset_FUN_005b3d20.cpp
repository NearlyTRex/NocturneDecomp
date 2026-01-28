// Name: core_sound.cpp_CSound_selectReverbPreset_FUN_005b3d20
// Address: 005b3d20
// Address Range: [[005b3d20, 005b3db8]]
// Convention: __cdecl
// Signature: int __cdecl core_sound_cpp_CSound_selectReverbPreset_FUN_005b3d20 (CSound *this_ptr,char *title,int *selection_inout)

#include "nocturne.h"

int __cdecl
core_sound_cpp_CSound_selectReverbPreset_FUN_005b3d20
          (CSound *this_ptr,char *title,int *selection_inout)

{
  uint *puVar1;
  int iVar2;
  uint in_stack_fffffc54;
  uint in_stack_fffffc58;
  char **in_stack_fffffc5c;
  CStrList_vtable *in_stack_fffffc60;
  uint in_stack_fffffc64;
  
  iVar2 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc54);
  do {
    puVar1 = (uint *)((int)&g_SoundModeTable[0].name + iVar2);
    iVar2 = iVar2 + 0x10;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc54,(char *)*puVar1);
  } while (iVar2 != 0x1b0);
  iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffc54,title,*selection_inout,0);
  if (-1 < iVar2) {
    *selection_inout = iVar2;
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc54,0,in_stack_fffffc54,in_stack_fffffc58,
               (uint)in_stack_fffffc5c,(uint)in_stack_fffffc60,in_stack_fffffc64);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc54,0,in_stack_fffffc54,in_stack_fffffc58,
             (uint)in_stack_fffffc5c,(uint)in_stack_fffffc60,in_stack_fffffc64);
  return 0;
}
