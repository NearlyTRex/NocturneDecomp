// Name: core_fldnotes.cpp_SPageResourceMap_ctor_FUN_004aa780
// Address: 004aa780
// Address Range: [[004aa780, 004aa7aa]]
// Convention: __cdecl
// Signature: SPageResourceMap * __cdecl core_fldnotes_cpp_SPageResourceMap_ctor_FUN_004aa780(SPageResourceMap *this_ptr,SNotesMap *map)

#include "nocturne.h"

SPageResourceMap * __cdecl core_fldnotes_cpp_SPageResourceMap_ctor_FUN_004aa780(SPageResourceMap *this_ptr,SNotesMap *map)

{
  SPageResourceMap *extraout_EAX;
  
  core_fldnotes_cpp_SPageResource_ctor_FUN_004a8370(&this_ptr->base);
  (extraout_EAX->base).vtable = &g_SPageResourceMapVTable;
  extraout_EAX->map = map;
  (extraout_EAX->base).width = map->width;
  (extraout_EAX->base).height = extraout_EAX->map->height;
  return extraout_EAX;
}
