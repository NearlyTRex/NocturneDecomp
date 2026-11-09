// Name: core_event.cpp_parseDamageType_FUN_00489270
// Address: 00489270
// Address Range: [[00489270, 0048935e]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_parseDamageType_FUN_00489270(char *type_name,int *out_type_id)

#include "nocturne.h"

int __cdecl core_event_cpp_parseDamageType_FUN_00489270(char *type_name,int *out_type_id)

{
  int iVar1;
  
  iVar1 = _stricmp(type_name,"generic");
  if (iVar1 == 0) {
    *out_type_id = 100;
    return 1;
  }
  iVar1 = _stricmp(type_name,"bullet");
  if (iVar1 == 0) {
    *out_type_id = 0x65;
    return 1;
  }
  iVar1 = _stricmp(type_name,&DAT_005d2fd4);
  if (iVar1 == 0) {
    *out_type_id = 0x66;
    return 1;
  }
  iVar1 = _stricmp(type_name,"Blade");
  if (iVar1 == 0) {
    *out_type_id = 0x67;
    return 1;
  }
  iVar1 = _stricmp(type_name,"Stake");
  if (iVar1 == 0) {
    *out_type_id = 0x68;
    return 1;
  }
  iVar1 = _stricmp(type_name,&DAT_005d2fe5);
  if (iVar1 == 0) {
    *out_type_id = 0x69;
    return 1;
  }
  iVar1 = _stricmp(type_name,"electrocute");
  if (iVar1 == 0) {
    *out_type_id = 0x6a;
    return 1;
  }
  return 0;
}
