// Name: core_sound.cpp_CSound_selectReverbPreset_FUN_005b3d20
// Address: 005b3d20
// Address Range: [[005b3d20, 005b3db8]]
// Convention: __cdecl
// Signature: int core_sound.cpp_CSound_selectReverbPreset_FUN_005b3d20(CSound * this_ptr, char * title, int * selection_inout)

#include "nocturne.h"

int __cdecl
core_sound_cpp_CSound_selectReverbPreset_FUN_005b3d20
          (CSound *this_ptr,char *title,int *selection_inout)

{
  uint *puVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *in_stack_00000010;
  int *in_stack_00000014;
  int *in_stack_00000018;
  CStrList_vtable *in_stack_fffffc60;
  CStrList_vtable *in_stack_fffffc64;
  CStrList_vtable *in_stack_fffffc68;
  CStrList_vtable *in_stack_fffffc6c;
  uint in_stack_fffffc70;
  
  iVar2 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc54);
  do {
    puVar1 = (uint *)((int)&g_SoundModeTable[0].name + iVar2);
    iVar2 = iVar2 + 0x10;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc58,(char *)*puVar1);
  } while (iVar2 != 0x1b0);
  iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffc5c,in_stack_00000010,*in_stack_00000014,0);
  if (-1 < iVar2) {
    *in_stack_00000018 = iVar2;
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc60,0,(uint)in_stack_fffffc60,(uint)in_stack_fffffc64,
               (uint)in_stack_fffffc68,(uint)in_stack_fffffc6c,in_stack_fffffc70);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc60,0,(uint)in_stack_fffffc60,(uint)in_stack_fffffc64,
             (uint)in_stack_fffffc68,(uint)in_stack_fffffc6c,in_stack_fffffc70);
  return 0;
}
