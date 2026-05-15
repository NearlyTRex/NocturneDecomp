// Name: engine_pod.cpp_CPod_dismount_FUN_00550b90
// Address: 00550b90
// MANUAL RECONSTRUCTION
// Address Range: [[00550b90, 00550c26]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_dismount_FUN_00550b90(CPod *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_dismount_FUN_00550b90(CPod *this_ptr,char *filename)

{
  int iVar2;
  int iVar3;
  int index;
  SFoundFileInfo local_224;

  strcpy(local_224.found_path,filename);
  iVar2 = engine_dosio_cpp_findFileNormally_FUN_004817c0(&local_224);
  if ((iVar2 != 0) && (index = 0, 0 < this_ptr->pod_file_count)) {
    do {
      while (iVar3 = _stricmp
                               (this_ptr->pod_files[index]->filename,local_224.target_path), iVar3 == 0) {
        engine_pod_cpp_CPod_dismountPod_FUN_005518c0(this_ptr,index);
        if (this_ptr->pod_file_count <= index) {
          return;
        }
      }
      index = index + 1;
    } while (index < this_ptr->pod_file_count);
  }
  return;
}
