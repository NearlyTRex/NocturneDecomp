// Name: core_simbox.cpp_CSimBox_ctor_FUN_00588d40
// Address: 00588d40
// Address Range: [[00588d40, 00588dfe]]
// Convention: __cdecl
// Signature: CSimBox * core_simbox.cpp_CSimBox_ctor_FUN_00588d40(CSimBox * this_ptr)
// Cross-references:
//   core_simbox.cpp_CSimBox_FUN_00588d00 (00588d00) at 00588d1a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_question_kfm_00649bed
//   TerminatedCString s_none_00649bfa
//   undefined4 s_one_00649bfb
//   undefined4 s_ne_00649bfc
//   undefined4 s_e_00649bfd
//   CDemonActor_vtable g_CSimBoxVTable
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_box.cpp_CBox_ctor_FUN_0041dc50
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CSimBox * __cdecl core_simbox_cpp_CSimBox_ctor_FUN_00588d40(CSimBox *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  CBox *pCVar4;
  char *pcVar5;
  float *pfVar6;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pCVar4 = core_box_cpp_CBox_ctor_FUN_0041dc50((CBox *)(pCVar3[1].model_name + 0xc));
  pCVar4[-1].external_force.z = (float)&g_CSimBoxVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)&pCVar4[-1].linear_velocity_temp,"question.kfm");
  pcVar5 = "none";
  pfVar6 = &pCVar4[-1].scrape_points[5].raytrace_intersection;
  do {
    cVar1 = *pcVar5;
    *(char *)pfVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    *(char *)((int)pfVar6 + 1) = cVar1;
    pfVar6 = (float *)((int)pfVar6 + 2);
  } while (cVar1 != '\0');
  pCVar4[-1].scrape_points[7].raytrace_normal.x = 0.0;
  pCVar4[-1].scrape_points[7].raytrace_intersection = pCVar4[-1].scrape_points[7].raytrace_normal.x;
  pCVar4[-1].scrape_points[7].previous_position.z =
       pCVar4[-1].scrape_points[7].raytrace_intersection;
  pCVar4[-1].is_valid = 0;
  pCVar4[-1].scrape_points[7].raytrace_normal.z = (float)pCVar4[-1].is_valid;
  pCVar4[-1].scrape_points[7].raytrace_normal.y = pCVar4[-1].scrape_points[7].raytrace_normal.z;
  pCVar4[-1].scrape_points[5].previous_position.y = 0.0;
  pCVar4[-1].scrape_points[5].previous_position.z = 100.0;
  return (CSimBox *)&pCVar4[-2].scrape_points[3].local_position.z;
}


// Assembly code:
// 00588d40: PUSH EBX
//   Label: core_simbox.cpp_CSimBox_ctor_FUN_00588d40
// 00588d41: PUSH ESI
// 00588d42: PUSH EDI
// 00588d43: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00588d47: PUSH EBX
// 00588d48: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 00588d4d: ADD ESP,0x4
// 00588d50: ADD EAX,0x158
// 00588d55: PUSH EAX
// 00588d56: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 00588d5b: ADD ESP,0x4
// 00588d5e: ADD EAX,0x200
// 00588d63: PUSH EAX
// 00588d64: CALL core_box.cpp_CBox_ctor_FUN_0041dc50
//   XREF to: 0041dc50 (UNCONDITIONAL_CALL)
// 00588d69: ADD ESP,0x4
// 00588d6c: LEA EBX,[EAX + 0xfffffca8]
// 00588d72: PUSH 0x649bed
//   XREF to: 00649bed (DATA)
// 00588d77: LEA EAX,[EBX + 0x158]
// 00588d7d: PUSH EAX
// 00588d7e: MOV dword ptr [EBX + 0x154],0x662d24
//   XREF to: 00662d24 (DATA)
// 00588d88: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 00588d8d: ADD ESP,0x8
// 00588d90: MOV ESI,0x649bfa
//   XREF to: 00649bfa (DATA)
// 00588d95: LEA EDI,[EBX + 0x2dc]
// 00588d9b: PUSH EDI
// 00588d9c: MOV AL,byte ptr [ESI]
//   Label: LAB_00588d9c
//   XREF to: 00649bfa (READ)
//   XREF to: 00649bfc (READ)
// 00588d9e: MOV byte ptr [EDI],AL
// 00588da0: CMP AL,0x0
// 00588da2: JZ 0x00588db4
//   XREF to: 00588db4 (CONDITIONAL_JUMP)
// 00588da4: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00649bfb (READ)
//   XREF to: 00649bfd (READ)
// 00588da7: ADD ESI,0x2
// 00588daa: MOV byte ptr [EDI + 0x1],AL
// 00588dad: ADD EDI,0x2
// 00588db0: CMP AL,0x0
// 00588db2: JNZ 0x00588d9c
//   XREF to: 00588d9c (CONDITIONAL_JUMP)
// 00588db4: POP EDI
//   Label: LAB_00588db4
// 00588db5: LEA EAX,[EBX + 0x340]
// 00588dbb: MOV dword ptr [EAX + 0x8],0x0
// 00588dc2: MOV EDX,dword ptr [EAX + 0x8]
// 00588dc5: MOV dword ptr [EAX + 0x4],EDX
// 00588dc8: MOV EDX,dword ptr [EAX + 0x4]
// 00588dcb: MOV dword ptr [EAX],EDX
// 00588dcd: LEA EAX,[EBX + 0x34c]
// 00588dd3: MOV dword ptr [EAX + 0x8],0x0
// 00588dda: MOV EDX,dword ptr [EAX + 0x8]
// 00588ddd: MOV dword ptr [EAX + 0x4],EDX
// 00588de0: MOV EDX,dword ptr [EAX + 0x4]
// 00588de3: MOV dword ptr [EAX],EDX
// 00588de5: MOV dword ptr [EBX + 0x2d4],0x0
// 00588def: MOV EAX,EBX
// 00588df1: MOV dword ptr [EBX + 0x2d8],0x42c80000
// 00588dfb: POP EDI
// 00588dfc: POP ESI
// 00588dfd: POP EBX
// 00588dfe: RET
