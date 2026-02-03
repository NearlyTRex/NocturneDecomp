// Name: core_set.cpp_CDemonSet_dtor_FUN_00569350
// Address: 00569350
// Address Range: [[00569350, 005693b0]]
// Convention: __cdecl
// Signature: CDemonSet * __cdecl core_set_cpp_CDemonSet_dtor_FUN_00569350(CDemonSet *this_ptr)

#include "nocturne.h"

CDemonSet * __cdecl core_set_cpp_CDemonSet_dtor_FUN_00569350(CDemonSet *this_ptr)

{
  SVDBox *pSVar1;
  SRoom *pSVar2;
  C3DSLight *pCVar3;
  C3DSCamera *pCVar4;
  
  core_set_cpp_CDemonSet_clear_FUN_005693c0(this_ptr);
  pSVar1 = core_set_cpp_freeVDBoxes_FUN_00571590(this_ptr->vdir_boxes);
  pSVar2 = core_set_cpp_freeRooms_FUN_00571570((SRoom *)(pSVar1[-0x15].unk + 4));
  pCVar3 = core_set_cpp_free3DSLights_FUN_00571550((C3DSLight *)&pSVar2[-0x4b99].extents.z);
  pCVar4 = core_set_cpp_free3DSCameras_FUN_00571530((C3DSCamera *)(pCVar3[-0x11].unk1 + 0x5ce));
  return (CDemonSet *)&pCVar4[-1].unk4;
}
