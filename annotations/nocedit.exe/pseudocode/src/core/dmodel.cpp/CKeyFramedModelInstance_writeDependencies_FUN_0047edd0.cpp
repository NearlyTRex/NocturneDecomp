// Name: core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
// Address: 0047edd0
// Address Range: [[0047edd0, 0047ee26]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, FILE * file_handle)
// Cross-references:
//   core_ammo.cpp_CAmmo_writeDependencies_FUN_004113e0 (004113e0) at 004114d3 [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_FUN_00411c00 (00411c00) at 00411c0f [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_FUN_00412ab0 (00412ab0) at 00412abf [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_FUN_00414ec0 (00414ec0) at 00414edc [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_writeDependencies_FUN_00481630 (00481630) at 0048163f [UNCONDITIONAL_CALL]
//   core_drip.cpp_FUN_0048ea60 (0048ea60) at 0048ea82 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a9390 (004a9390) at 004a93a9 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d2560 (004d2560) at 004d25ba [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004eeb10 (004eeb10) at 004eeb32 [UNCONDITIONAL_CALL]
//   core_health.cpp_FUN_004f20b0 (004f20b0) at 004f20bf [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_FUN_00501990 (00501990) at 0050199f [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502eb0 (00502eb0) at 00502ebf [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00505370 (00505370) at 0050537f [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b7d0 (0050b7d0) at 0050b7ec [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b810 (0050b810) at 0050b832 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_0054a7b0 (0054a7b0) at 0054a7bf [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054f2a0 (0054f2a0) at 0054f2b1 [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_FUN_005893c0 (005893c0) at 005893cf [UNCONDITIONAL_CALL]
//   core_spike.cpp_CSpike_FUN_005b9030 (005b9030) at 005b903f [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_FUN_005df720 (005df720) at 005df742 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005eea60 (005eea60) at 005eea6f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_MODELS_s_00620f23
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
          (CKeyFramedModelInstance *this_ptr,FILE *file_handle)

{
  CKeyFramedModel *pCVar1;
  FILE *dependency_file;
  FILE *in_stack_00000010;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(this_ptr);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr);
  if (pCVar1->poly_count < 1) {
    return;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"MODELS\\%s\n",this_ptr->model_name);
  dependency_file = (FILE *)0x0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr);
  core_dmodel_cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
            (pCVar1,dependency_file,(int)this_ptr);
  return;
}


// Assembly code:
// 0047edd0: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
// 0047edd1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0047edd5: PUSH EBX
// 0047edd6: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 0047eddb: ADD ESP,0x4
// 0047edde: PUSH EBX
// 0047eddf: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 0047ede4: MOV EDX,dword ptr [EAX + 0x110]
// 0047edea: ADD ESP,0x4
// 0047eded: CMP EDX,0x1
// 0047edf0: JGE 0x0047edf4
//   XREF to: 0047edf4 (CONDITIONAL_JUMP)
// 0047edf2: POP EBX
// 0047edf3: RET
// 0047edf4: PUSH ESI
//   Label: LAB_0047edf4
// 0047edf5: LEA EAX,[EBX + 0x78]
// 0047edf8: PUSH EAX
// 0047edf9: PUSH 0x620f23
//   XREF to: 00620f23 (DATA)
// 0047edfe: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0047ee02: PUSH ECX
// 0047ee03: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0047ee08: ADD ESP,0xc
// 0047ee0b: PUSH 0x0
// 0047ee0d: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0047ee11: PUSH ESI
// 0047ee12: PUSH EBX
// 0047ee13: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 0047ee18: ADD ESP,0x4
// 0047ee1b: PUSH EAX
// 0047ee1c: CALL core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
//   XREF to: 0047ed00 (UNCONDITIONAL_CALL)
// 0047ee21: ADD ESP,0xc
// 0047ee24: POP ESI
// 0047ee25: POP EBX
// 0047ee26: RET
