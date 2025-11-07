// Name: engine_keys.cpp_CKeys_getInputKey_FUN_00502460
// Address: 00502460
// Address Range: [[00502460, 0050246a]]
// Convention: __cdecl
// Signature: int engine_keys.cpp_CKeys_getInputKey_FUN_00502460(CKeys * this)
// Cross-references:
//   core_setedit.cpp_BackdropMaybe_FUN_005805a0 (005805a0) at 005806cc [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00582479 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 00583f4b [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20 (00578a20) at 00578be6 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50 (0057ae50) at 0057b260 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00581590 (00581590) at 005817bc [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00582f30 (00582f30) at 0058315c [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 00598de0 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 (0049fb70) at 0049fe5c [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049ddba [UNCONDITIONAL_CALL]
// Function calls:
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

int __cdecl engine_keys_cpp_CKeys_getInputKey_FUN_00502460(CKeys *this)

{
  uint uVar1;
  
  uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  return uVar1 & 0xff;
}


// Assembly code:
// 00502460: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   Label: engine_keys.cpp_CKeys_getInputKey_FUN_00502460
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00502465: AND EAX,0xff
// 0050246a: RET
