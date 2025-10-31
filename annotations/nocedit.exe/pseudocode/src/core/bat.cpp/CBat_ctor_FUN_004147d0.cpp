// Name: core_bat.cpp_CBat_ctor_FUN_004147d0
// Address: 004147d0
// Address Range: [[004147d0, 0041489f]]
// Convention: __cdecl
// Signature: CBat * core_bat.cpp_CBat_ctor_FUN_004147d0(CBat * this_ptr)
// Cross-references:
//   core_bat.cpp_FUN_00414790 (00414790) at 004147aa [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_batpath_pth_006152db
//   undefined4 s_atpath.pth_006152dc
//   undefined4 s_tpath.pth_006152dd
//   undefined4 s_path.pth_006152de
//   TerminatedCString s_bat_kfm_006152e7
//   CDemonActor_vtable g_CBatVTable
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_course.cpp_CCourse_ctor_FUN_004424c0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CBat * __cdecl core_bat_cpp_CBat_ctor_FUN_004147d0(CBat *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CCourse *pCVar3;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar4;
  char *pcVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pCVar3 = core_course_cpp_CCourse_ctor_FUN_004424c0((CCourse *)&pCVar2[1].location);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)&pCVar3[1].frame_list);
  *(CDemonActor_vtable **)(this_ptr_00[-1].animation_state + 0x6c) = &g_CBatVTable;
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)0x0;
  this_ptr_00[1].part_visibility_flags[0] = 0;
  pcVar4 = "batpath.pth";
  this_ptr_00[1].part_visibility_flags[1] = 0x41f00000;
  this_ptr_00[1].part_visibility_flags[2] = 0x3f800000;
  pcVar5 = this_ptr_00[-1].animation_state + 0x70;
  this_ptr_00[1].part_visibility_flags[3] = 0x41f00000;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(this_ptr_00,"bat.kfm");
  *(undefined1 *)(this_ptr_00[1].part_visibility_flags + 4) = 0;
  this_ptr_00[1].part_visibility_flags[0x1d] = 0x41700000;
  this_ptr_00[1].model_name[0] = '\0';
  this_ptr_00[1].model_name[1] = '\0';
  this_ptr_00[1].model_name[2] = -0x10;
  this_ptr_00[1].model_name[3] = 'A';
  this_ptr_00[1].model_name[8] = '\0';
  this_ptr_00[1].model_name[9] = '\0';
  this_ptr_00[1].model_name[10] = '\0';
  this_ptr_00[1].model_name[0xb] = '\0';
  return (CBat *)(this_ptr_00[-2].animation_state + 0x94);
}


// Assembly code:
// 004147d0: PUSH EBX
//   Label: core_bat.cpp_CBat_ctor_FUN_004147d0
// 004147d1: PUSH ESI
// 004147d2: PUSH EDI
// 004147d3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004147d7: PUSH EBX
// 004147d8: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 004147dd: ADD ESP,0x4
// 004147e0: ADD EAX,0x178
// 004147e5: PUSH EAX
// 004147e6: CALL core_course.cpp_CCourse_ctor_FUN_004424c0
//   XREF to: 004424c0 (UNCONDITIONAL_CALL)
// 004147eb: ADD ESP,0x4
// 004147ee: ADD EAX,0x10
// 004147f1: PUSH EAX
// 004147f2: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 004147f7: LEA EBX,[EAX + 0xfffffe78]
// 004147fd: MOV dword ptr [EBX + 0x154],0x65a484
//   XREF to: 0065a484 (DATA)
// 00414807: MOV dword ptr [EBX + 0x184],0x0
// 00414811: MOV dword ptr [EBX + 0x304],0x0
// 0041481b: MOV ESI,0x6152db
//   XREF to: 006152db (DATA)
// 00414820: MOV dword ptr [EBX + 0x308],0x41f00000
// 0041482a: ADD ESP,0x4
// 0041482d: MOV dword ptr [EBX + 0x30c],0x3f800000
// 00414837: LEA EDI,[EBX + 0x158]
// 0041483d: MOV dword ptr [EBX + 0x310],0x41f00000
// 00414847: PUSH EDI
// 00414848: MOV AL,byte ptr [ESI]
//   Label: LAB_00414848
//   XREF to: 006152db (READ)
//   XREF to: 006152dd (READ)
// 0041484a: MOV byte ptr [EDI],AL
// 0041484c: CMP AL,0x0
// 0041484e: JZ 0x00414860
//   XREF to: 00414860 (CONDITIONAL_JUMP)
// 00414850: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006152dc (READ)
//   XREF to: 006152de (READ)
// 00414853: ADD ESI,0x2
// 00414856: MOV byte ptr [EDI + 0x1],AL
// 00414859: ADD EDI,0x2
// 0041485c: CMP AL,0x0
// 0041485e: JNZ 0x00414848
//   XREF to: 00414848 (CONDITIONAL_JUMP)
// 00414860: POP EDI
//   Label: LAB_00414860
// 00414861: PUSH 0x6152e7
//   XREF to: 006152e7 (DATA)
// 00414866: LEA EAX,[EBX + 0x188]
// 0041486c: PUSH EAX
// 0041486d: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 00414872: MOV byte ptr [EBX + 0x314],0x0
// 00414879: MOV dword ptr [EBX + 0x378],0x41700000
// 00414883: ADD ESP,0x8
// 00414886: MOV dword ptr [EBX + 0x37c],0x41f00000
// 00414890: MOV EAX,EBX
// 00414892: MOV dword ptr [EBX + 0x384],0x0
// 0041489c: POP EDI
// 0041489d: POP ESI
// 0041489e: POP EBX
// 0041489f: RET
