// Name: engine_pod.cpp_CPod_remount_FUN_00550af0
// Address: 00550af0
// MANUAL RECONSTRUCTION
// Address Range: [[00550af0, 00550b82]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_remount_FUN_00550af0(CPod *this_ptr)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_remount_FUN_00550af0(CPod *this_ptr)

{
  int iVar2;
  int iVar4;
  char local_110 [256];

  for (iVar4 = 0; iVar4 < this_ptr->pod_file_count; iVar4 = iVar4 + 1) {
    strcpy(local_110,this_ptr->pod_files[iVar4]->filename);
    iVar2 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(this_ptr->pod_files[iVar4],local_110);
    if (iVar2 == 0) {
      g_CurrentLineNumber = 947;
      g_CurrentFilename = "..\\engine\\pod.cpp";
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't re-mount %s",local_110);
    }
  }
  return;
}
