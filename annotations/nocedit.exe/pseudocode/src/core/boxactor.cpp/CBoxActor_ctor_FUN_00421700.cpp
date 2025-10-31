// Name: core_boxactor.cpp_CBoxActor_ctor_FUN_00421700
// Address: 00421700
// Address Range: [[00421700, 00421825]]
// Convention: __cdecl
// Signature: CBoxActor * core_boxactor.cpp_CBoxActor_ctor_FUN_00421700(CBoxActor * this_ptr)
// Cross-references:
//   core_boxactor.cpp_CLightActor_ctor_FUN_00422990 (00422990) at 00422995 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_004216c0 (004216c0) at 004216da [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e8fc [UNCONDITIONAL_CALL]
//   core_stone.cpp_CTempleStone_ctor_FUN_005bad10 (005bad10) at 005bad15 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_question_kfm_00616630
//   CDemonActor_vtable g_CBoxActorVTable
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_box.cpp_CBox_ctor_FUN_0041dc50
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_ctor_FUN_00421700(CBoxActor *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *pCVar2;
  CBox *pCVar3;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(pCVar1 + 1));
  pCVar3 = core_box_cpp_CBox_ctor_FUN_0041dc50((CBox *)(pCVar2[1].model_name + 0x48));
  pCVar3[-1].rotation_matrix.m[0].x = (float)&g_CBoxActorVTable;
  pCVar3[-1].is_valid = 0;
  pCVar3[-1].scrape_points[5].previous_position.x = 20.0;
  pCVar3[-1].scrape_points[5].previous_position.y = 0.0;
  pCVar3[-1].scrape_points[5].transformed_position.z = 0.0;
  pCVar3[-1].scrape_points[5].transformed_position.y =
       pCVar3[-1].scrape_points[5].transformed_position.z;
  pCVar3[-1].scrape_points[5].transformed_position.x =
       pCVar3[-1].scrape_points[5].transformed_position.y;
  *(undefined1 *)&pCVar3[-1].scrape_points[4].transformed_position.z = 0;
  *(undefined1 *)&pCVar3[-1].scrape_points[4].raytrace_normal.x = 0;
  pCVar3[-1].scrape_points[5].local_position.z = 0.0;
  pCVar3[-1].scrape_points[5].previous_position.z = 0.0;
  pCVar3[-1].scrape_points[5].raytrace_normal.x = 0.0;
  pCVar3[-1].scrape_points[5].raytrace_intersection = 0.0;
  pCVar3[-1].scrape_points[5].raytrace_normal.y = 0.0;
  *(undefined1 *)&pCVar3[-1].scrape_points[6].local_position.y = 0;
  pCVar3[-1].scrape_points[5].raytrace_normal.z = 0.0;
  pCVar3[1].position.y = 0.0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)&pCVar3[-1].rotation_matrix.m[0].y,"question.kfm");
  pCVar3->is_valid = -1;
  pCVar3[1].position.z = 1.4013e-45;
  pCVar3[1].orientation.x = 1.4013e-45;
  pCVar3[1].orientation.y = 0.0;
  *(undefined1 *)&pCVar3[1].orientation.z = 0;
  pCVar3[1].angular_velocity.z = 0.0;
  pCVar3[1].angular_velocity_temp.x = 0.0;
  return (CBoxActor *)(pCVar3[-2].scrape_points + 2);
}


// Assembly code:
// 00421700: PUSH EBX
//   Label: core_boxactor.cpp_CBoxActor_ctor_FUN_00421700
// 00421701: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00421705: PUSH EBX
// 00421706: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 0042170b: ADD ESP,0x4
// 0042170e: ADD EAX,0x158
// 00421713: PUSH EAX
// 00421714: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 00421719: ADD ESP,0x4
// 0042171c: ADD EAX,0x23c
// 00421721: PUSH EAX
// 00421722: CALL core_box.cpp_CBox_ctor_FUN_0041dc50
//   XREF to: 0041dc50 (UNCONDITIONAL_CALL)
// 00421727: LEA EBX,[EAX + 0xfffffc6c]
// 0042172d: MOV dword ptr [EBX + 0x154],0x65b1b4
//   XREF to: 0065b1b4 (DATA)
// 00421737: MOV dword ptr [EBX + 0x390],0x0
// 00421741: MOV dword ptr [EBX + 0x30c],0x41a00000
// 0042174b: LEA EAX,[EBX + 0x300]
// 00421751: MOV dword ptr [EBX + 0x310],0x0
// 0042175b: MOV dword ptr [EAX + 0x8],0x0
// 00421762: MOV EDX,dword ptr [EAX + 0x8]
// 00421765: MOV dword ptr [EAX + 0x4],EDX
// 00421768: MOV EDX,dword ptr [EAX + 0x4]
// 0042176b: MOV dword ptr [EAX],EDX
// 0042176d: MOV byte ptr [EBX + 0x2d4],0x0
// 00421774: MOV byte ptr [EBX + 0x2e8],0x0
// 0042177b: MOV dword ptr [EBX + 0x2fc],0x0
// 00421785: MOV dword ptr [EBX + 0x314],0x0
// 0042178f: MOV dword ptr [EBX + 0x31c],0x0
// 00421799: MOV dword ptr [EBX + 0x318],0x0
// 004217a3: ADD ESP,0x4
// 004217a6: MOV dword ptr [EBX + 0x320],0x0
// 004217b0: PUSH 0x616630
//   XREF to: 00616630 (DATA)
// 004217b5: MOV byte ptr [EBX + 0x32c],0x0
// 004217bc: LEA EAX,[EBX + 0x158]
// 004217c2: MOV dword ptr [EBX + 0x324],0x0
// 004217cc: PUSH EAX
// 004217cd: MOV dword ptr [EBX + 0x5f0],0x0
// 004217d7: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004217dc: MOV dword ptr [EBX + 0x5e8],0xffffffff
// 004217e6: MOV dword ptr [EBX + 0x5f4],0x1
// 004217f0: MOV dword ptr [EBX + 0x5f8],0x1
// 004217fa: MOV dword ptr [EBX + 0x5fc],0x0
// 00421804: MOV byte ptr [EBX + 0x600],0x0
// 0042180b: ADD ESP,0x8
// 0042180e: MOV dword ptr [EBX + 0x664],0x0
// 00421818: MOV EAX,EBX
// 0042181a: MOV dword ptr [EBX + 0x668],0x0
// 00421824: POP EBX
// 00421825: RET
