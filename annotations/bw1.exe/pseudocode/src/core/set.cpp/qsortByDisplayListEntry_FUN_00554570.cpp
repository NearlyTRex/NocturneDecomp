// Name: core_set.cpp_qsortByDisplayListEntry_FUN_00554570
// Address: 00554570
// Address Range: [[00554570, 0055459c]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_qsortByDisplayListEntry_FUN_00554570(SDisplayListSortEntry *a,SDisplayListSortEntry *b)

#include "nocturne.h"

int __cdecl core_set_cpp_qsortByDisplayListEntry_FUN_00554570(SDisplayListSortEntry *a,SDisplayListSortEntry *b)

{
  if (b->distance_sq < a->distance_sq) {
    return 1;
  }
  if (a->distance_sq < b->distance_sq) {
    return -1;
  }
  return 0;
}
