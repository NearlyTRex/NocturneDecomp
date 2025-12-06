// Name: core_set.cpp_freeRooms_FUN_00571570
// Address: 00571570
// Address Range: [[00571570, 00571584]]
// Convention: __cdecl
// Signature: void core_set.cpp_freeRooms_FUN_00571570(SRoom * * array)

#include "nocturne.h"

void __cdecl core_set_cpp_freeRooms_FUN_00571570(SRoom **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x14,&g_SRoomTypeInfo);
  return;
}
