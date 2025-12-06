// Name: engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
// Address: 004ba6c0
// Address Range: [[004ba6c0, 004ba739]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0(CFileManager * this_ptr, CStrList * pod_list, char * target_filename)

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0
          (CFileManager *this_ptr,CStrList *pod_list,char *target_filename)

{
  char *input_path;
  int iVar1;
  int index;
  BADSPACEBASE *in_ESP;
  char acStack_204 [248];
  char local_10c [12];
  char acStack_100 [248];
  
  index = 0;
  engine_dosio_c_getFullPath_FUN_004820c0(local_10c,target_filename);
  while( true ) {
    if (pod_list->item_count <= index) {
      return -1;
    }
    input_path = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(pod_list,index);
    engine_dosio_c_getFullPath_FUN_004820c0(&stack0xfffffdf8,input_path);
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0(acStack_100,acStack_204);
    if (iVar1 == 0) break;
    index = index + 1;
  }
  return index;
}
