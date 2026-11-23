// Name: core_fldnotes.cpp_SNotesMap_paginate_FUN_004a4070
// Address: 004a4070
// Address Range: [[004a4070, 004a411d]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_SNotesMap_paginate_FUN_004a4070(SNotesMap *this_ptr,STextView *view)

#include "nocturne.h"

int __cdecl core_fldnotes_cpp_SNotesMap_paginate_FUN_004a4070(SNotesMap *this_ptr,STextView *view)

{
  SPageResourceMap *this_ptr_00;
  int iVar1;
  SPageResourceMap *resource;
  
  this_ptr_00 = operator_new(0x1c);
  resource = (SPageResourceMap *)0x0;
  if (this_ptr_00 != (SPageResourceMap *)0x0) {
    resource = core_fldnotes_cpp_SPageResourceMap_ctor_FUN_004a4120(this_ptr_00,this_ptr);
  }
  if (resource == (SPageResourceMap *)0x0) {
    g_CurrentFilename = "..\\core\\fldnotes.cpp";
    g_CurrentLineNumber = 2095;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Out of memory");
  }
  iVar1 = core_fldnotes_cpp_STextView_placeResource_FUN_004a2ad0(view,&resource->base);
  if (iVar1 == 0) {
    core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0(view,"<pg>");
    iVar1 = core_fldnotes_cpp_STextView_placeResource_FUN_004a2ad0(view,&resource->base);
    if (iVar1 == 0) {
      g_CurrentFilename = "..\\core\\fldnotes.cpp";
      g_CurrentLineNumber = 2102;
      core_main_c_displayErrorAndQuit_FUN_004e4500("NotesMap::paginate - unable to add resource?!");
      return 1;
    }
  }
  return 1;
}
