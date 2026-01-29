// Name: engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
// Address: 004ba6c0
// Address Range: [[004ba6c0, 004ba739]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0 (CFileManager *this_ptr,CStrList *pod_list,char *target_filename)

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
          (CFileManager *this_ptr,CStrList *pod_list,char *target_filename)

{
  char *input_path;
  int iVar1;
  int index;
  char local_210 [260];
  char local_10c [260];
  
  index = 0;
  engine_dosio_c_getFullPath_FUN_004820c0(local_10c,target_filename);
  while( true ) {
    if (pod_list->item_count <= index) {
      return -1;
    }
    input_path = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(pod_list,index);
    engine_dosio_c_getFullPath_FUN_004820c0(local_210,input_path);
    iVar1 = stricmp(local_10c,local_210);
    if (iVar1 == 0) break;
    index = index + 1;
  }
  return index;
}
