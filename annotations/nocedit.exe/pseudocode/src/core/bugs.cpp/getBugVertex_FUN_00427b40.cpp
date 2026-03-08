// Name: core_bugs.cpp_getBugVertex_FUN_00427b40
// Address: 00427b40
// Address Range: [[00427b40, 00427b50]]
// Convention: __cdecl
// Signature: int __cdecl core_bugs_cpp_getBugVertex_FUN_00427b40(SBug *bug_data,int bug_index)

#include "nocturne.h"

int __cdecl core_bugs_cpp_getBugVertex_FUN_00427b40(SBug *bug_data,int bug_index)

{
  return (&bug_data->current_vertex)[bug_index];
}
