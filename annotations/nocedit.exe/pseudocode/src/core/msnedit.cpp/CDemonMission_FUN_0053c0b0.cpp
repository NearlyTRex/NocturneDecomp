// Name: core_msnedit.cpp_CDemonMission_FUN_0053c0b0
// Address: 0053c0b0
// Address Range: [[0053c0b0, 0053c135]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c0b0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c0b0(CDemonMission *this_ptr)

{
  _FILE *file_handle;
  
  if (*(int *)(this_ptr->unk2 + 0x1c) == 0) {
    return;
  }
  core_actor_cpp_syncActorTypeIDs_FUN_0040c7c0();
  file_handle = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("$$UNDO$$.TMP",(char *)0x0,"rt","..\\core\\msnedit.cpp"
                           ,0x9ca);
  if (file_handle == (_FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s.","$$UNDO$$.TMP");
    return;
  }
  core_actor_cpp_CDemonActor_load_FUN_0040b050(*(CDemonActor **)(this_ptr->unk2 + 0x1c),file_handle)
  ;
  (*(code *)**(uint **)(*(int *)(this_ptr->unk2 + 0x1c) + 0x154))();
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\msnedit.cpp",0x9d1);
  return;
}
