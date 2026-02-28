// Name: core_event.cpp_parseDeathType_FUN_004aa7d0
// Address: 004aa7d0
// Address Range: [[004aa7d0, 004aa95a]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_parseDeathType_FUN_004aa7d0(char *type_name,int *out_type_id)

#include "nocturne.h"

int __cdecl core_event_cpp_parseDeathType_FUN_004aa7d0(char *type_name,int *out_type_id)

{
  int iVar1;
  
  iVar1 = _stricmp(type_name,"generic");
  if (iVar1 == 0) {
    *out_type_id = 0;
    return 1;
  }
  iVar1 = _stricmp(type_name,"drown");
  if (iVar1 == 0) {
    *out_type_id = 1;
    return 1;
  }
  iVar1 = _stricmp(type_name,"fall");
  if (iVar1 == 0) {
    *out_type_id = 2;
    return 1;
  }
  iVar1 = _stricmp(type_name,"explode");
  if (iVar1 == 0) {
    *out_type_id = 3;
    return 1;
  }
  iVar1 = _stricmp(type_name,"fallApart");
  if (iVar1 == 0) {
    *out_type_id = 4;
    return 1;
  }
  iVar1 = _stricmp(type_name,"shatter");
  if (iVar1 == 0) {
    *out_type_id = 5;
    return 1;
  }
  iVar1 = _stricmp(type_name,"electrocute");
  if (iVar1 == 0) {
    *out_type_id = 6;
    return 1;
  }
  iVar1 = _stricmp(type_name,"gas");
  if (iVar1 == 0) {
    *out_type_id = 0x69;
    return 1;
  }
  iVar1 = _stricmp(type_name,"Chopped");
  if (iVar1 == 0) {
    *out_type_id = 7;
    return 1;
  }
  iVar1 = _stricmp(type_name,"Crushed");
  if (iVar1 == 0) {
    *out_type_id = 8;
    return 1;
  }
  iVar1 = _stricmp(type_name,"Impale");
  if (iVar1 == 0) {
    *out_type_id = 9;
    return 1;
  }
  iVar1 = _stricmp(type_name,"Fire");
  if (iVar1 == 0) {
    *out_type_id = 10;
    return 1;
  }
  return 0;
}
