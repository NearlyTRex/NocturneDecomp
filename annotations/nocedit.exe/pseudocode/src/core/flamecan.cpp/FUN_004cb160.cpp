// Name: core_flamecan.cpp_FUN_004cb160
// Address: 004cb160
// Address Range: [[004cb160, 004cb1f8]]
// Convention: __cdecl
// Signature: CFlameCan * core_flamecan.cpp_FUN_004cb160(CFlameCan * this_ptr)
// Cross-references:
//   core_flamecan.cpp_FUN_004cb120 (004cb120) at 004cb13a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_question_kfm_0062a2c7
//   TerminatedCString s_none_0062a2d4
//   undefined4 s_one_0062a2d5
//   undefined4 s_ne_0062a2d6
//   undefined4 s_e_0062a2d7
//   CDemonActor_vtable PTR_core_flamecan.cpp_FUN_0065e144
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_flame.cpp_CFlame_ctor_FUN_004c9aa0

#include "nocturne.h"

CFlameCan * __cdecl core_flamecan_cpp_FUN_004cb160(CFlameCan *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  CFlame *pCVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pCVar4 = core_flame_cpp_CFlame_ctor_FUN_004c9aa0
                     ((CFlame *)(pCVar3[1].part_visibility_flags + 0x1b));
  pcVar5 = "none";
  *(CDemonActor_vtable **)(pCVar4[-1].base_actor.create_event + 0x40) =
       &PTR_core_flamecan_cpp_FUN_0065e144;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)(pCVar4[-1].base_actor.create_event + 0x44),
             "question.kfm");
  pCVar4[-0xffffffff00000001].field7_0x1b8[0x80] = '\0';
  pCVar4[-0xffffffff00000001].field7_0x1b8[0x81] = '\0';
  pCVar4[-0xffffffff00000001].field7_0x1b8[0x82] = '\0';
  pCVar4[-0xffffffff00000001].field7_0x1b8[0x83] = '\0';
  pcVar6 = pCVar4[-1].field7_0x1b8 + 0x88;
  pCVar4[-0xffffffff00000001].field7_0x1b8[0x84] = '\0';
  pCVar4[-0xffffffff00000001].field7_0x1b8[0x85] = '\0';
  pCVar4[-0xffffffff00000001].field7_0x1b8[0x86] = ' ';
  pCVar4[-0xffffffff00000001].field7_0x1b8[0x87] = 'A';
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pCVar4[1].base_actor.actor_name[0] = '\0';
  pCVar4[1].base_actor.actor_name[1] = '\0';
  pCVar4[1].base_actor.actor_name[2] = '\0';
  pCVar4[1].base_actor.actor_name[3] = '\0';
  return (CFlameCan *)(pCVar4[-2].field7_0x1b8 + 0x50);
}


// Assembly code:
// 004cb160: PUSH EBX
//   Label: core_flamecan.cpp_FUN_004cb160
// 004cb161: PUSH ESI
// 004cb162: PUSH EDI
// 004cb163: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004cb167: PUSH EBX
// 004cb168: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 004cb16d: ADD ESP,0x4
// 004cb170: ADD EAX,0x158
// 004cb175: PUSH EAX
// 004cb176: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 004cb17b: ADD ESP,0x4
// 004cb17e: ADD EAX,0x1e8
// 004cb183: PUSH EAX
// 004cb184: CALL core_flame.cpp_CFlame_ctor_FUN_004c9aa0
//   XREF to: 004c9aa0 (UNCONDITIONAL_CALL)
// 004cb189: ADD ESP,0x4
// 004cb18c: LEA EBX,[EAX + 0xfffffcc0]
// 004cb192: PUSH 0x62a2c7
//   XREF to: 0062a2c7 (DATA)
// 004cb197: LEA EAX,[EBX + 0x158]
// 004cb19d: PUSH EAX
// 004cb19e: MOV ESI,0x62a2d4
//   XREF to: 0062a2d4 (DATA)
// 004cb1a3: MOV dword ptr [EBX + 0x154],0x65e144
//   XREF to: 0065e144 (DATA)
// 004cb1ad: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004cb1b2: ADD ESP,0x8
// 004cb1b5: MOV dword ptr [EBX + 0x2d4],0x0
// 004cb1bf: LEA EDI,[EBX + 0x2dc]
// 004cb1c5: MOV dword ptr [EBX + 0x2d8],0x41200000
// 004cb1cf: PUSH EDI
// 004cb1d0: MOV AL,byte ptr [ESI]
//   Label: LAB_004cb1d0
//   XREF to: 0062a2d4 (READ)
//   XREF to: 0062a2d6 (READ)
// 004cb1d2: MOV byte ptr [EDI],AL
// 004cb1d4: CMP AL,0x0
// 004cb1d6: JZ 0x004cb1e8
//   XREF to: 004cb1e8 (CONDITIONAL_JUMP)
// 004cb1d8: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062a2d5 (READ)
//   XREF to: 0062a2d7 (READ)
// 004cb1db: ADD ESI,0x2
// 004cb1de: MOV byte ptr [EDI + 0x1],AL
// 004cb1e1: ADD EDI,0x2
// 004cb1e4: CMP AL,0x0
// 004cb1e6: JNZ 0x004cb1d0
//   XREF to: 004cb1d0 (CONDITIONAL_JUMP)
// 004cb1e8: POP EDI
//   Label: LAB_004cb1e8
// 004cb1e9: MOV EAX,EBX
// 004cb1eb: MOV dword ptr [EBX + 0x5e4],0x0
// 004cb1f5: POP EDI
// 004cb1f6: POP ESI
// 004cb1f7: POP EBX
// 004cb1f8: RET
