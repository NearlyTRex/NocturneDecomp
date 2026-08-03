// Name: core_skeleton.cpp_CSkeleton_load_FUN_00517560
// Address: 00517560
// Address Range: [[00517560, 005175e6]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_load_FUN_00517560(CSkeleton *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CSkeleton_load_FUN_00517560(CSkeleton *this_ptr,char *filename)

{
  char cVar1;
  _FILE *file_handle;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = this_ptr->loaded_filename;
  pcVar2 = filename;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  file_handle = engine_dosio_cpp_getFile_FUN_00456a60("data",filename,"rt");
  if (file_handle == (_FILE *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\skeleton.cpp";
    g_INT_01cc4804 = 0xf6;
    core_main_c_FUN_004c8440("CSkeleton::load - Can't open %s",filename);
  }
  core_skeleton_cpp_CSkeleton_loadStream_FUN_005175f0(this_ptr,file_handle);
  _fclose(file_handle);
  return;
}
