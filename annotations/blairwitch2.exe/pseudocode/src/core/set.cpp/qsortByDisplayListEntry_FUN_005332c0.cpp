// Name: core_set.cpp_qsortByDisplayListEntry_FUN_005332c0
// Address: 005332c0
// Address Range: [[005332c0, 005332ec]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_qsortByDisplayListEntry_FUN_005332c0(SDisplayListSortEntry *a,SDisplayListSortEntry *b)

#include "nocturne.h"

int __cdecl core_set_cpp_qsortByDisplayListEntry_FUN_005332c0(SDisplayListSortEntry *a,SDisplayListSortEntry *b)

{
  if (b->distance_sq < a->distance_sq) {
    return 1;
  }
  if (a->distance_sq < b->distance_sq) {
    return -1;
  }
  return 0;
}
