// Name: core_script.cpp_CCmdParm_getCharacterByContext_FUN_005627f0
// Address: 005627f0
// Address Range: [[005627f0, 0056285a]]
// Convention: __cdecl
// Signature: CCharacter * __cdecl core_script_cpp_CCmdParm_getCharacterByContext_FUN_005627f0(CCmdParm *this_ptr,CCmdParse *context)

#include "nocturne.h"

CCharacter * __cdecl core_script_cpp_CCmdParm_getCharacterByContext_FUN_005627f0(CCmdParm *this_ptr,CCmdParse *context)

{
  CCharacter *pCVar1;
  int local_4;
  
  local_4 = -1;
  sscanf(this_ptr->modifier_string,"%d",&local_4);
  if ((-1 < local_4) && (local_4 < context->param_count)) {
    pCVar1 = (CCharacter *)
             core_script_cpp_getActor_FUN_005594e0
                       (context->params[local_4].parsed_value,g_CCharacterClassInfo.name_hash,
                        &g_CCharacterClassInfo);
    return pCVar1;
  }
  return (CCharacter *)0x0;
}
