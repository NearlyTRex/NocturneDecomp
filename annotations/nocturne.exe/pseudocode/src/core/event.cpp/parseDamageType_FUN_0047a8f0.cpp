// Name: core_event.cpp_parseDamageType_FUN_0047a8f0
// Address: 0047a8f0
// Address Range: [[0047a8f0, 0047a9de]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_parseDamageType_FUN_0047a8f0(char *type_name,int *out_type_id)

#include "nocturne.h"

int __cdecl core_event_cpp_parseDamageType_FUN_0047a8f0(char *type_name,int *out_type_id)

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
  iVar1 = _stricmp(type_name,"Fire");
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
  iVar1 = _stricmp(type_name,"Gas");
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
