// Name: core_script.cpp_CCmdParm_getMotionListByContext_FUN_00562860
// Address: 00562860
// Address Range: [[00562860, 00562885]]
// Convention: __cdecl
// Signature: CMotionList * __cdecl core_script_cpp_CCmdParm_getMotionListByContext_FUN_00562860(CCmdParm *this_ptr,CCmdParse *context)

#include "nocturne.h"

CMotionList * __cdecl core_script_cpp_CCmdParm_getMotionListByContext_FUN_00562860(CCmdParm *this_ptr,CCmdParse *context)

{
  CCharacter *pCVar1;
  CMotionList *pCVar2;
  
  pCVar1 = core_script_cpp_CCmdParm_getCharacterByContext_FUN_005627f0(this_ptr,context);
  if (pCVar1 == (CCharacter *)0x0) {
    return (CMotionList *)0x0;
  }
  pCVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&(pCVar1->model).motion_controller);
  return pCVar2;
}
