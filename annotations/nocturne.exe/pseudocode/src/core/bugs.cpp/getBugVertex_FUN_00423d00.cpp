// Name: core_bugs.cpp_getBugVertex_FUN_00423d00
// Address: 00423d00
// Address Range: [[00423d00, 00423d10]]
// Convention: __cdecl
// Signature: int __cdecl core_bugs_cpp_getBugVertex_FUN_00423d00(SBug *bug_data,int bug_index)

#include "nocturne.h"

int __cdecl core_bugs_cpp_getBugVertex_FUN_00423d00(SBug *bug_data,int bug_index)

{
  return (&bug_data->current_vertex)[bug_index];
}
