// Name: crt_unknown.c___arrdtor_FUN_00564915
// Address: 00564915
// Address Range: [[00564915, 0056494e]]
// Convention: __cdecl
// Signature: void * __cdecl crt_unknown_c___arrdtor_FUN_00564915(WatcomTypeArrayInfo *destroy_info)

#include "nocturne.h"

void * __cdecl __arrdtor(WatcomTypeArrayInfo *destroy_info)

{
  int iVar1;
  WATCOM_VIRTUAL_DESTRUCTOR_FUNC *pWVar2;
  void **object_ptr;
  
  iVar1 = destroy_info->type_info->instance_size;
  pWVar2 = destroy_info->type_info->dtor;
  object_ptr = (void **)(destroy_info->obj_count * iVar1 + (int)destroy_info->obj_array);
  while (destroy_info->obj_count != 0) {
    object_ptr = (void **)((int)object_ptr - iVar1);
    destroy_info->obj_count = destroy_info->obj_count + -1;
    (*pWVar2)(object_ptr,0);
  }
  return destroy_info->obj_array;
}
