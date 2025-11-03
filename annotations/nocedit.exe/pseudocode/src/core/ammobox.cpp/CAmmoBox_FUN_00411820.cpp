// Name: core_ammobox.cpp_CAmmoBox_FUN_00411820
// Address: 00411820
// Address Range: [[00411820, 004118ab]]
// Convention: __cdecl
// Signature: int core_ammobox.cpp_CAmmoBox_FUN_00411820(CAmmoBox * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20

#include "nocturne.h"

int __cdecl core_ammobox_cpp_CAmmoBox_FUN_00411820(CAmmoBox *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CKeyFramedModel *pCVar2;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
  this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                          (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffd4);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
    return 0;
  }
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)this_ptr->model_name);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)this_ptr->model_name,
             (float)(pCVar2->frame_count + -1) * this_ptr->field5_0x31c,unaff_EBP);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
  return iVar1;
}


// Assembly code:
// 00411820: PUSH EBX
//   Label: core_ammobox.cpp_CAmmoBox_FUN_00411820
// 00411821: PUSH ESI
// 00411822: PUSH EDI
// 00411823: PUSH EBP
// 00411824: MOV EBP,ESP
// 00411826: SUB ESP,0x1c
// 00411829: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0041182c: PUSH EBX
// 0041182d: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 00411832: ADD ESP,0x4
// 00411835: LEA ESI,[EBP + -0x1c]
//   XREF to: Stack[-0x2c] (DATA)
// 00411838: PUSH ESI
// 00411839: MOV EAX,dword ptr [EBX + 0x154]
// 0041183f: PUSH EBX
// 00411840: CALL dword ptr [EAX + 0x14]
// 00411843: ADD ESP,0x8
// 00411846: PUSH EAX
// 00411847: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 0041184c: ADD ESP,0x4
// 0041184f: MOV EDI,EAX
// 00411851: TEST EAX,EAX
// 00411853: JNZ 0x00411867
//   XREF to: 00411867 (CONDITIONAL_JUMP)
// 00411855: PUSH EBX
// 00411856: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0041185b: ADD ESP,0x4
// 0041185e: MOV EAX,EDI
// 00411860: MOV ESP,EBP
// 00411862: POP EBP
// 00411863: POP EDI
// 00411864: POP ESI
// 00411865: POP EBX
// 00411866: RET
// 00411867: PUSH -0x1
//   Label: LAB_00411867
// 00411869: LEA ESI,[EBX + 0x158]
// 0041186f: PUSH ESI
// 00411870: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00411875: MOV EAX,dword ptr [EAX + 0x100]
// 0041187b: DEC EAX
// 0041187c: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0041187f: ADD ESP,0x4
// 00411882: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00411885: FMUL float ptr [EBX + 0x31c]
// 0041188b: SUB ESP,0x4
// 0041188e: FSTP float ptr [ESP]
// 00411891: PUSH ESI
// 00411892: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 00411897: ADD ESP,0xc
// 0041189a: PUSH EBX
// 0041189b: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 004118a0: ADD ESP,0x4
// 004118a3: MOV EAX,EDI
// 004118a5: MOV ESP,EBP
// 004118a7: POP EBP
// 004118a8: POP EDI
// 004118a9: POP ESI
// 004118aa: POP EBX
// 004118ab: RET
