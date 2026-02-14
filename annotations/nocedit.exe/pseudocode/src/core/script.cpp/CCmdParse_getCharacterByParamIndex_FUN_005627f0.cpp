// Name: core_script.cpp_CCmdParse_getCharacterByParamIndex_FUN_005627f0
// Address: 005627f0
// Address Range: [[005627f0, 0056285a]]
// Convention: __cdecl
// Signature: CCharacter * __cdecl core_script_cpp_CCmdParse_getCharacterByParamIndex_FUN_005627f0(CCmdParse *this_ptr,int param_index)

#include "nocturne.h"

CCharacter * __cdecl core_script_cpp_CCmdParse_getCharacterByParamIndex_FUN_005627f0(CCmdParse *this_ptr,int param_index)

{
  CCharacter *pCVar1;
  int local_4;
  
  local_4 = -1;
  sscanf(this_ptr->params[0].parsed_value + 0x128,"%d",&local_4);
  if ((-1 < local_4) && (local_4 < *(int *)(param_index + 0xcc))) {
    pCVar1 = (CCharacter *)
             core_script_cpp_getActor_FUN_005594e0
                       ((char *)(local_4 * 0x328 + param_index + 0x134),
                        g_CCharacterClassInfo.name_hash,&g_CCharacterClassInfo);
    return pCVar1;
  }
  return (CCharacter *)0x0;
}
