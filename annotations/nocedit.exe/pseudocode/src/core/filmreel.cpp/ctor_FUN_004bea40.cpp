// Name: core_filmreel.cpp_ctor_FUN_004bea40
// Address: 004bea40
// Address Range: [[004bea40, 004beaf9]]
// Convention: __cdecl
// Signature: CFilmProjector * core_filmreel.cpp_ctor_FUN_004bea40(CFilmProjector * this_ptr)
// Cross-references:
//   core_filmreel.cpp_FUN_004bea00 (004bea00) at 004bea1d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_filmreel_kfm_00629b3c
//   TerminatedCString s_CFilmReel_00629b49
//   undefined4 s_FilmReel_00629b4a
//   undefined4 s_ilmReel_00629b4b
//   undefined4 s_lmReel_00629b4c
//   TerminatedCString s_none_00629b53
//   undefined4 s_one_00629b54
//   undefined4 s_ne_00629b55
//   undefined4 s_e_00629b56
//   CDemonActor_vtable PTR_core_filmreel.cpp_FUN_0065db04
// Function calls:
//   core_dest.cpp_FUN_0046f900
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CFilmProjector * __cdecl core_filmreel_cpp_ctor_FUN_004bea40(CFilmProjector *this_ptr)

{
  char cVar1;
  CActorDestination *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  
  pCVar2 = core_dest_cpp_FUN_0046f900(&this_ptr->base_actor_destination);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pcVar3 = "CFilmReel";
  *(CDemonActor_vtable **)this_ptr_00[-1].animation_state = &PTR_core_filmreel_cpp_FUN_0065db04;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"filmreel.kfm");
  pcVar4 = this_ptr_00[-1].animation_state + 8;
  this_ptr_00[1].part_visibility_flags[0x1a] = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "none";
  this_ptr_00[1].part_visibility_flags[0x1b] = 0;
  piVar5 = this_ptr_00[1].part_visibility_flags + 1;
  this_ptr_00[1].part_visibility_flags[0] = 0;
  do {
    cVar1 = *pcVar4;
    *(char *)piVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    *(char *)((int)piVar5 + 1) = cVar1;
    piVar5 = (int *)((int)piVar5 + 2);
  } while (cVar1 != '\0');
  this_ptr_00[1].part_visibility_flags[0x1c] = 0;
  return (CFilmProjector *)(this_ptr_00[-2].animation_state + 0x28);
}


// Assembly code:
// 004bea40: PUSH EBX
//   Label: core_filmreel.cpp_ctor_FUN_004bea40
// 004bea41: PUSH ESI
// 004bea42: PUSH EDI
// 004bea43: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004bea47: PUSH EBX
// 004bea48: CALL core_dest.cpp_FUN_0046f900
//   XREF to: 0046f900 (UNCONDITIONAL_CALL)
// 004bea4d: ADD ESP,0x4
// 004bea50: ADD EAX,0x1f4
// 004bea55: PUSH EAX
// 004bea56: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 004bea5b: ADD ESP,0x4
// 004bea5e: LEA EBX,[EAX + 0xfffffe0c]
// 004bea64: PUSH 0x629b3c
//   XREF to: 00629b3c (DATA)
// 004bea69: LEA EAX,[EBX + 0x1f4]
// 004bea6f: PUSH EAX
// 004bea70: MOV ESI,0x629b49
//   XREF to: 00629b49 (DATA)
// 004bea75: MOV dword ptr [EBX + 0x154],0x65db04
//   XREF to: 0065db04 (DATA)
// 004bea7f: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004bea84: ADD ESP,0x8
// 004bea87: LEA EDI,[EBX + 0x15c]
// 004bea8d: MOV dword ptr [EBX + 0x3d8],0x0
// 004bea97: PUSH EDI
// 004bea98: MOV AL,byte ptr [ESI]
//   Label: LAB_004bea98
//   XREF to: 00629b49 (READ)
//   XREF to: 00629b4b (READ)
// 004bea9a: MOV byte ptr [EDI],AL
// 004bea9c: CMP AL,0x0
// 004bea9e: JZ 0x004beab0
//   XREF to: 004beab0 (CONDITIONAL_JUMP)
// 004beaa0: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00629b4a (READ)
//   XREF to: 00629b4c (READ)
// 004beaa3: ADD ESI,0x2
// 004beaa6: MOV byte ptr [EDI + 0x1],AL
// 004beaa9: ADD EDI,0x2
// 004beaac: CMP AL,0x0
// 004beaae: JNZ 0x004bea98
//   XREF to: 004bea98 (CONDITIONAL_JUMP)
// 004beab0: POP EDI
//   Label: LAB_004beab0
// 004beab1: MOV ESI,0x629b53
//   XREF to: 00629b53 (DATA)
// 004beab6: MOV dword ptr [EBX + 0x3dc],0x0
// 004beac0: LEA EDI,[EBX + 0x374]
// 004beac6: MOV dword ptr [EBX + 0x370],0x0
// 004bead0: PUSH EDI
// 004bead1: MOV AL,byte ptr [ESI]
//   Label: LAB_004bead1
//   XREF to: 00629b53 (READ)
//   XREF to: 00629b55 (READ)
// 004bead3: MOV byte ptr [EDI],AL
// 004bead5: CMP AL,0x0
// 004bead7: JZ 0x004beae9
//   XREF to: 004beae9 (CONDITIONAL_JUMP)
// 004bead9: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00629b54 (READ)
//   XREF to: 00629b56 (READ)
// 004beadc: ADD ESI,0x2
// 004beadf: MOV byte ptr [EDI + 0x1],AL
// 004beae2: ADD EDI,0x2
// 004beae5: CMP AL,0x0
// 004beae7: JNZ 0x004bead1
//   XREF to: 004bead1 (CONDITIONAL_JUMP)
// 004beae9: POP EDI
//   Label: LAB_004beae9
// 004beaea: MOV EAX,EBX
// 004beaec: MOV dword ptr [EBX + 0x3e0],0x0
// 004beaf6: POP EDI
// 004beaf7: POP ESI
// 004beaf8: POP EBX
// 004beaf9: RET
