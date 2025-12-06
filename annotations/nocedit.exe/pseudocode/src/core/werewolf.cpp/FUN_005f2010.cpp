// Name: core_werewolf.cpp_FUN_005f2010
// Address: 005f2010
// Address Range: [[005f2010, 005f2061]]
// Convention: unknown
// Signature: undefined core_werewolf.cpp_FUN_005f2010()

#include "nocturne.h"

void core_werewolf_cpp_FUN_005f2010
               (uint param_1,uint param_2,uint unaff_EBX,uint param_4,
               CDemonActor *param_5,uint param_6,char *param_7)

{
  CDemonActor *pCVar1;
  char *format;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(param_5,g_CWerewolfClassInfo.name_hash);
  if (pCVar1[0x8d].field25_0x144 == 0) {
    format = "@Train" + 1;
  }
  else {
    if (pCVar1[0x8d].field25_0x144 != 1) {
      crt_stdio_c_sprintf_FUN_005fdbd0(param_7,"Train Alpha",unaff_EBX);
      return;
    }
    format = "Forest";
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(param_7,format,unaff_EBX);
  return;
}
