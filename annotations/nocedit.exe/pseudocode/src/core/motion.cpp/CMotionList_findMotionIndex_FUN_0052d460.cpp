// Name: core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
// Address: 0052d460
// Address Range: [[0052d460, 0052d4e2]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList *this_ptr)

#include "nocturne.h"

int __cdecl core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList *this_ptr)

{
  int iVar1;
  int iVar2;
  SMotion *str1;
  char *in_stack_00000008;
  int in_stack_0000000c;
  
  iVar2 = 0;
  if (0 < this_ptr->motion_count) {
    str1 = this_ptr->motions;
    do {
      iVar1 = stricmp(str1->motion_name,in_stack_00000008);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < this_ptr->motion_count);
  }
  if (in_stack_0000000c == 0) {
    return -1;
  }
  g_CurrentFilename = "..\\core\\motion.cpp";
  g_CurrentLineNumber = 0x100;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find motion \"%s\" in motion list");
  return -1;
}
