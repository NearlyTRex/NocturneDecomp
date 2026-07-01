// Name: core_msnedit.cpp_CDemonMission_undoActorChanges_FUN_0053c0b0
// Address: 0053c0b0
// Address Range: [[0053c0b0, 0053c135]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_undoActorChanges_FUN_0053c0b0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_undoActorChanges_FUN_0053c0b0(CDemonMission *this_ptr)

{
  _FILE *file_handle;
  
  if (this_ptr->selected_actor == (CDemonActor *)0x0) {
    return;
  }
  core_actor_cpp_syncActorTypeIDs_FUN_0040c7c0();
  file_handle = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("$$UNDO$$.TMP",(char *)0x0,"rt","..\\core\\msnedit.cpp"
                           ,2506);
  if (file_handle == (_FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s.","$$UNDO$$.TMP");
    return;
  }
  core_actor_cpp_CDemonActor_load_FUN_0040b050(this_ptr->selected_actor,file_handle);
  (*((this_ptr->selected_actor->vtable)._ub)->setup)(this_ptr->selected_actor);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\msnedit.cpp",2513);
  return;
}
