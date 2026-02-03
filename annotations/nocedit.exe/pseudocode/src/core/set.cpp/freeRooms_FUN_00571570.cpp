// Name: core_set.cpp_freeRooms_FUN_00571570
// Address: 00571570
// Address Range: [[00571570, 00571584]]
// Convention: __cdecl
// Signature: SRoom * __cdecl core_set_cpp_freeRooms_FUN_00571570(SRoom *objs)

#include "nocturne.h"

SRoom * __cdecl core_set_cpp_freeRooms_FUN_00571570(SRoom *objs)

{
  SRoom *pSVar1;
  
  pSVar1 = __arrfini(objs,0x14,&g_SRoomTypeInfo);
  return pSVar1;
}
