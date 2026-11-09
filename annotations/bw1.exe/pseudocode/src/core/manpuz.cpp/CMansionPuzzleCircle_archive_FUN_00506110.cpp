// Name: core_manpuz.cpp_CMansionPuzzleCircle_archive_FUN_00506110
// Address: 00506110
// Address Range: [[00506110, 005061f2]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_archive_FUN_00506110(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_archive_FUN_00506110(CMansionPuzzleCircle *this_ptr)

{
  int iVar1;
  int *int_ptr;
  int *int_ptr_00;
  int *int_ptr_01;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  if (1 < g_CMansionPuzzleCircleClassVersion) {
    core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->field_0x5cc,"pGemPos");
    core_actor_cpp_archiveOrientation_FUN_0040b260(&this_ptr->field_0x5d8,"pGemOrient");
    core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->field_0x5e4,"pEmitterPos");
  }
  if (2 < g_CMansionPuzzleCircleClassVersion) {
    int_ptr = (int *)&this_ptr->field_0x644;
    iVar1 = 0;
    int_ptr_01 = (int *)&this_ptr->field_0x640;
    int_ptr_00 = (int *)&this_ptr->field_0x63c;
    do {
      core_actor_cpp_archiveInteger_FUN_0040b670
                ((int *)(&this_ptr->field_0x5f0 + iVar1 * 100),"exists");
      core_actor_cpp_archiveInteger_FUN_0040b670(int_ptr_00,"r");
      core_actor_cpp_archiveInteger_FUN_0040b670(int_ptr_01,"g");
      iVar1 = iVar1 + 1;
      int_ptr_00 = int_ptr_00 + 0x19;
      int_ptr_01 = int_ptr_01 + 0x19;
      core_actor_cpp_archiveInteger_FUN_0040b670(int_ptr,"b");
      int_ptr = int_ptr + 0x19;
    } while (iVar1 < 0xc);
  }
  return;
}
