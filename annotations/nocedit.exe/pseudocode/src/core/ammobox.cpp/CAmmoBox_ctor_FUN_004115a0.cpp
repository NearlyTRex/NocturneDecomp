// Name: core_ammobox.cpp_CAmmoBox_ctor_FUN_004115a0
// Address: 004115a0
// Address Range: [[004115a0, 0041164f]]
// Convention: __cdecl
// Signature: CAmmoBox * core_ammobox.cpp_CAmmoBox_ctor_FUN_004115a0(CAmmoBox * this_ptr)
// Cross-references:
//   core_ammobox.cpp_constructor_FUN_00411560 (00411560) at 0041157a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_ammobag_kfm_00614bc0
//   TerminatedCString s_CGun_00614bcc
//   undefined4 s_Gun_00614bcd
//   undefined4 s_un_00614bce
//   undefined4 s_n_00614bcf
//   CDemonActor_vtable g_CAmmoBoxVTable
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_ctor_FUN_004115a0(CAmmoBox *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  CKeyFramedModelInstance *pCVar4;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CAmmoBoxVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"ammobag.kfm");
  pcVar3 = "CGun";
  pCVar4 = this_ptr_00 + 1;
  do {
    cVar1 = *pcVar3;
    *(char *)pCVar4->part_visibility_flags = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)pCVar4->part_visibility_flags + 1) = cVar1;
    pCVar4 = (CKeyFramedModelInstance *)((int)pCVar4->part_visibility_flags + 2);
  } while (cVar1 != '\0');
  this_ptr_00[1].part_visibility_flags[0x10] = 0x14;
  this_ptr_00[1].part_visibility_flags[0x11] = 0;
  this_ptr_00[1].part_visibility_flags[0x12] = 0;
  this_ptr_00[1].part_visibility_flags[0x13] = 0;
  this_ptr_00[1].part_visibility_flags[0x14] = 0;
  *(undefined1 *)(this_ptr_00[1].part_visibility_flags + 0x15) = 0;
  this_ptr_00[1].part_visibility_flags[0x1d] = 0;
  return (CAmmoBox *)(this_ptr_00[-1].part_visibility_flags + 9);
}


// Assembly code:
// 004115a0: PUSH EBX
//   Label: core_ammobox.cpp_CAmmoBox_ctor_FUN_004115a0
// 004115a1: PUSH ESI
// 004115a2: PUSH EDI
// 004115a3: MOV EBX,dword ptr [ESP + 0x10]
// 004115a7: PUSH EBX
// 004115a8: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 004115ad: ADD ESP,0x4
// 004115b0: ADD EAX,0x158
// 004115b5: PUSH EAX
// 004115b6: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 004115bb: ADD ESP,0x4
// 004115be: LEA EBX,[EAX + 0xfffffea8]
// 004115c4: PUSH 0x614bc0
//   XREF to: 00614bc0 (DATA)
// 004115c9: LEA EAX,[EBX + 0x158]
// 004115cf: PUSH EAX
// 004115d0: MOV dword ptr [EBX + 0x154],0x659ad4
//   XREF to: 00659ad4 (DATA)
// 004115da: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004115df: ADD ESP,0x8
// 004115e2: MOV ESI,0x614bcc
//   XREF to: 00614bcc (DATA)
// 004115e7: LEA EDI,[EBX + 0x2d4]
// 004115ed: PUSH EDI
// 004115ee: MOV AL,byte ptr [ESI]
//   Label: LAB_004115ee
//   XREF to: 00614bcc (READ)
//   XREF to: 00614bce (READ)
// 004115f0: MOV byte ptr [EDI],AL
// 004115f2: CMP AL,0x0
// 004115f4: JZ 0x00411606
//   XREF to: 00411606 (CONDITIONAL_JUMP)
// 004115f6: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00614bcd (READ)
//   XREF to: 00614bcf (READ)
// 004115f9: ADD ESI,0x2
// 004115fc: MOV byte ptr [EDI + 0x1],AL
// 004115ff: ADD EDI,0x2
// 00411602: CMP AL,0x0
// 00411604: JNZ 0x004115ee
//   XREF to: 004115ee (CONDITIONAL_JUMP)
// 00411606: POP EDI
//   Label: LAB_00411606
// 00411607: MOV dword ptr [EBX + 0x314],0x14
// 00411611: MOV dword ptr [EBX + 0x318],0x0
// 0041161b: MOV dword ptr [EBX + 0x31c],0x0
// 00411625: MOV dword ptr [EBX + 0x320],0x0
// 0041162f: MOV dword ptr [EBX + 0x324],0x0
// 00411639: MOV byte ptr [EBX + 0x328],0x0
// 00411640: MOV EAX,EBX
// 00411642: MOV dword ptr [EBX + 0x348],0x0
// 0041164c: POP EDI
// 0041164d: POP ESI
// 0041164e: POP EBX
// 0041164f: RET
