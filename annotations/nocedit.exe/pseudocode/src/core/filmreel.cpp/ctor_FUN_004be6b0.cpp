// Name: core_filmreel.cpp_ctor_FUN_004be6b0
// Address: 004be6b0
// Address Range: [[004be6b0, 004be71c]]
// Convention: __cdecl
// Signature: CFilmReel * core_filmreel.cpp_ctor_FUN_004be6b0(CFilmReel * this_ptr)
// Cross-references:
//   core_filmreel.cpp_FUN_004be670 (004be670) at 004be68a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_filmreel_kfm_00629ac3
//   TerminatedCString s_movie3_00629ad0
//   undefined4 s_ovie3_00629ad1
//   undefined4 s_vie3_00629ad2
//   undefined4 s_ie3_00629ad3
//   CDemonActor_vtable PTR_core_filmreel.cpp_FUN_0065da14
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CFilmReel * __cdecl core_filmreel_cpp_ctor_FUN_004be6b0(CFilmReel *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  int *piVar4;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&PTR_core_filmreel_cpp_FUN_0065da14;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"filmreel.kfm");
  pcVar3 = "movie3";
  piVar4 = this_ptr_00[1].part_visibility_flags + 1;
  do {
    cVar1 = *pcVar3;
    *(char *)piVar4 = cVar1;
    if (cVar1 == '\0') {
      return (CFilmReel *)(this_ptr_00[-1].part_visibility_flags + 9);
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)piVar4 + 1) = cVar1;
    piVar4 = (int *)((int)piVar4 + 2);
  } while (cVar1 != '\0');
  return (CFilmReel *)(this_ptr_00[-1].part_visibility_flags + 9);
}


// Assembly code:
// 004be6b0: PUSH EBX
//   Label: core_filmreel.cpp_ctor_FUN_004be6b0
// 004be6b1: PUSH ESI
// 004be6b2: PUSH EDI
// 004be6b3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004be6b7: PUSH EBX
// 004be6b8: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 004be6bd: ADD ESP,0x4
// 004be6c0: ADD EAX,0x158
// 004be6c5: PUSH EAX
// 004be6c6: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 004be6cb: ADD ESP,0x4
// 004be6ce: LEA EBX,[EAX + 0xfffffea8]
// 004be6d4: PUSH 0x629ac3
//   XREF to: 00629ac3 (DATA)
// 004be6d9: LEA EAX,[EBX + 0x158]
// 004be6df: PUSH EAX
// 004be6e0: MOV dword ptr [EBX + 0x154],0x65da14
//   XREF to: 0065da14 (DATA)
// 004be6ea: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004be6ef: ADD ESP,0x8
// 004be6f2: MOV ESI,0x629ad0
//   XREF to: 00629ad0 (DATA)
// 004be6f7: LEA EDI,[EBX + 0x2d8]
// 004be6fd: PUSH EDI
// 004be6fe: MOV AL,byte ptr [ESI]
//   Label: LAB_004be6fe
//   XREF to: 00629ad0 (READ)
//   XREF to: 00629ad2 (READ)
// 004be700: MOV byte ptr [EDI],AL
// 004be702: CMP AL,0x0
// 004be704: JZ 0x004be716
//   XREF to: 004be716 (CONDITIONAL_JUMP)
// 004be706: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00629ad1 (READ)
//   XREF to: 00629ad3 (READ)
// 004be709: ADD ESI,0x2
// 004be70c: MOV byte ptr [EDI + 0x1],AL
// 004be70f: ADD EDI,0x2
// 004be712: CMP AL,0x0
// 004be714: JNZ 0x004be6fe
//   XREF to: 004be6fe (CONDITIONAL_JUMP)
// 004be716: POP EDI
//   Label: LAB_004be716
// 004be717: MOV EAX,EBX
// 004be719: POP EDI
// 004be71a: POP ESI
// 004be71b: POP EBX
// 004be71c: RET
