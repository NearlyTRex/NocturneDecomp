// Name: core_fldnotes.cpp_SPageResourceMap_ctor_FUN_004bcb10
// Address: 004bcb10
// Address Range: [[004bcb10, 004bcb3a]]
// Convention: __cdecl
// Signature: SPageResourceMap * __cdecl core_fldnotes_cpp_SPageResourceMap_ctor_FUN_004bcb10(SPageResourceMap *this_ptr,SNotesMap *map)

#include "nocturne.h"

SPageResourceMap * __cdecl core_fldnotes_cpp_SPageResourceMap_ctor_FUN_004bcb10(SPageResourceMap *this_ptr,SNotesMap *map)

{
  SPageResourceMap *extraout_EAX;
  
  core_fldnotes_cpp_SPageResource_ctor_FUN_004ba730(&this_ptr->base);
  (extraout_EAX->base).vtable = &g_SPageResourceMapVTable;
  extraout_EAX->map = map;
  (extraout_EAX->base).width = map->width;
  (extraout_EAX->base).height = extraout_EAX->map->height;
  return extraout_EAX;
}
