// Name: core_setdir.cpp_copySet_FUN_005768c0
// Address: 005768c0
// Address Range: [[005768c0, 005768ce]]
// Convention: __cdecl
// Signature: CDemonSet * core_setdir.cpp_copySet_FUN_005768c0(CDemonSet * * set1, CDemonSet * * set2)

#include "nocturne.h"

CDemonSet * __cdecl core_setdir_cpp_copySet_FUN_005768c0(CDemonSet **set1,CDemonSet **set2)

{
  *set1 = *set2;
  return (CDemonSet *)set1;
}
