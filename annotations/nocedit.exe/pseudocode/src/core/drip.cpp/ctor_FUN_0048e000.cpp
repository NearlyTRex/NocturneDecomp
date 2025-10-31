// Name: core_drip.cpp_ctor_FUN_0048e000
// Address: 0048e000
// Address Range: [[0048e000, 0048e0de]]
// Convention: __cdecl
// Signature: CDrip * core_drip.cpp_ctor_FUN_0048e000(CDrip * this_ptr)
// Cross-references:
//   core_drip.cpp_FUN_0048dfc0 (0048dfc0) at 0048dfda [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_stalag_kfm_00622216
//   TerminatedCString s_rock_x_wav_00622221
//   undefined4 s_ock-x.wav_00622222
//   undefined4 s_ck-x.wav_00622223
//   undefined4 s_k-x.wav_00622224
//   CDemonActor_vtable PTR_core_drip.cpp_FUN_0065cf84
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CDrip * __cdecl core_drip_cpp_ctor_FUN_0048e000(CDrip *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  int *piVar4;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&PTR_core_drip_cpp_FUN_0065cf84;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"stalag.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 2;
  this_ptr_00[1].part_visibility_flags[1] = 1;
  this_ptr_00[1].part_visibility_flags[0xe] = 0;
  this_ptr_00[1].part_visibility_flags[0xd] = this_ptr_00[1].part_visibility_flags[0xe];
  this_ptr_00[1].part_visibility_flags[0xc] = this_ptr_00[1].part_visibility_flags[0xd];
  this_ptr_00[1].part_visibility_flags[3] = 0x40a00000;
  this_ptr_00[1].part_visibility_flags[4] = 0x41200000;
  this_ptr_00[1].part_visibility_flags[2] = 0;
  pcVar3 = "rock-x.wav";
  this_ptr_00[1].part_visibility_flags[5] = 0;
  this_ptr_00[1].part_visibility_flags[0xf] = 0x41200000;
  piVar4 = this_ptr_00[1].part_visibility_flags + 0x10;
  this_ptr_00[1].part_visibility_flags[0x19] = 0;
  do {
    cVar1 = *pcVar3;
    *(char *)piVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)piVar4 + 1) = cVar1;
    piVar4 = (int *)((int)piVar4 + 2);
  } while (cVar1 != '\0');
  this_ptr_00[1].part_visibility_flags[0x18] = 0;
  return (CDrip *)(this_ptr_00[-1].part_visibility_flags + 9);
}


// Assembly code:
// 0048e000: PUSH EBX
//   Label: core_drip.cpp_ctor_FUN_0048e000
// 0048e001: PUSH ESI
// 0048e002: PUSH EDI
// 0048e003: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0048e007: PUSH EBX
// 0048e008: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 0048e00d: ADD ESP,0x4
// 0048e010: ADD EAX,0x158
// 0048e015: PUSH EAX
// 0048e016: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 0048e01b: ADD ESP,0x4
// 0048e01e: LEA EBX,[EAX + 0xfffffea8]
// 0048e024: PUSH 0x622216
//   XREF to: 00622216 (DATA)
// 0048e029: LEA EAX,[EBX + 0x158]
// 0048e02f: PUSH EAX
// 0048e030: MOV dword ptr [EBX + 0x154],0x65cf84
//   XREF to: 0065cf84 (DATA)
// 0048e03a: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 0048e03f: MOV dword ptr [EBX + 0x2d4],0x2
// 0048e049: LEA EAX,[EBX + 0x304]
// 0048e04f: MOV dword ptr [EBX + 0x2d8],0x1
// 0048e059: MOV dword ptr [EAX + 0x8],0x0
// 0048e060: MOV EDX,dword ptr [EAX + 0x8]
// 0048e063: MOV dword ptr [EAX + 0x4],EDX
// 0048e066: MOV EDX,dword ptr [EAX + 0x4]
// 0048e069: MOV dword ptr [EAX],EDX
// 0048e06b: MOV dword ptr [EBX + 0x2e0],0x40a00000
// 0048e075: MOV dword ptr [EBX + 0x2e4],0x41200000
// 0048e07f: MOV dword ptr [EBX + 0x2dc],0x0
// 0048e089: MOV ESI,0x622221
//   XREF to: 00622221 (DATA)
// 0048e08e: MOV dword ptr [EBX + 0x2e8],0x0
// 0048e098: ADD ESP,0x8
// 0048e09b: MOV dword ptr [EBX + 0x310],0x41200000
// 0048e0a5: LEA EDI,[EBX + 0x314]
// 0048e0ab: MOV dword ptr [EBX + 0x338],0x0
// 0048e0b5: PUSH EDI
// 0048e0b6: MOV AL,byte ptr [ESI]
//   Label: LAB_0048e0b6
//   XREF to: 00622221 (READ)
//   XREF to: 00622223 (READ)
// 0048e0b8: MOV byte ptr [EDI],AL
// 0048e0ba: CMP AL,0x0
// 0048e0bc: JZ 0x0048e0ce
//   XREF to: 0048e0ce (CONDITIONAL_JUMP)
// 0048e0be: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00622222 (READ)
//   XREF to: 00622224 (READ)
// 0048e0c1: ADD ESI,0x2
// 0048e0c4: MOV byte ptr [EDI + 0x1],AL
// 0048e0c7: ADD EDI,0x2
// 0048e0ca: CMP AL,0x0
// 0048e0cc: JNZ 0x0048e0b6
//   XREF to: 0048e0b6 (CONDITIONAL_JUMP)
// 0048e0ce: POP EDI
//   Label: LAB_0048e0ce
// 0048e0cf: MOV EAX,EBX
// 0048e0d1: MOV dword ptr [EBX + 0x334],0x0
// 0048e0db: POP EDI
// 0048e0dc: POP ESI
// 0048e0dd: POP EBX
// 0048e0de: RET
