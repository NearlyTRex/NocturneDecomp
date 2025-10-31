// Name: core_vehicle.cpp_CVehicle_FUN_005e88c0
// Address: 005e88c0
// Address Range: [[005e88c0, 005e8a11] [005e8a57, 005e8b2a]]
// Convention: __cdecl
// Signature: int core_vehicle.cpp_CVehicle_FUN_005e88c0(CVehicle * this_ptr)
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 g_CGameInstance.block_auto_save
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_box.cpp_CBoundingBox3D_render_FUN_004210b0
//   core_dlight.cpp_renderConeLightGeometry_FUN_004760d0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_vehicle_cpp_CVehicle_FUN_005e88c0(CVehicle *this_ptr)

{
  CVector3f *pCVar1;
  CBoundingBox3D *pCVar2;
  int iVar3;
  CVector3i *rotation;
  BADSPACEBASE *in_ESP;
  CKeyFramedModelInstance *this_ptr_00;
  CDemonActor *in_stack_00000008;
  undefined4 uStack0000000c;
  CVector3i *in_stack_00000014;
  int in_stack_00000020;
  CDemonActor *in_stack_00000024;
  CDemonActor *in_stack_00000028;
  int in_stack_0000002c;
  CDemonActor *in_stack_00000030;
  int in_stack_0000003c;
  float in_stack_ffffffa8;
  float in_stack_ffffffac;
  float in_stack_ffffffb0;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
  pCVar2 = (*((in_stack_00000008->metadata).vtable)->getBoundingBox)
                     (in_stack_00000008,(CBoundingBox3D *)&stack0xffffffa4);
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(pCVar2);
  *(int *)(in_stack_00000020 + 0x106c) = iVar3;
  if (iVar3 != 0) {
    iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if ((iVar3 == 0) || (g_CGamePtr->block_auto_save != 0)) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                ((CKeyFramedModelInstance *)(in_stack_00000024 + 1),0.0,-1);
      iVar3 = 0;
      if (0 < (int)in_stack_00000028[6].metadata.runtime_vector1.x) {
        this_ptr_00 = (CKeyFramedModelInstance *)&in_stack_00000028[6].metadata.runtime_flags;
        pCVar1 = &in_stack_00000028[8].location.position;
        rotation = (CVector3i *)(in_stack_00000028[8].actor_name + 0x18);
        do {
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                    (g_CDemonRendererPtr,(CVector3i *)&pCVar1->y,rotation);
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                    (g_CDemonRendererPtr,in_stack_00000014,(CVector3i *)0x0);
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                    (this_ptr_00,0.0,-1);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
          in_stack_00000024 = (CDemonActor *)&in_stack_00000024[1].orient_matrix.m[2].z;
          iVar3 = iVar3 + 1;
          rotation = (CVector3i *)&rotation[0x24].y;
          pCVar1 = (CVector3f *)(&pCVar1->y + 0x6c);
          this_ptr_00 = (CKeyFramedModelInstance *)(this_ptr_00[1].part_visibility_flags + 0xe);
        } while (iVar3 < *(int *)(in_stack_0000003c + 0x938));
      }
    }
    else {
      pCVar2 = (*((in_stack_00000024->metadata).vtable)->getBoundingBox)
                         (in_stack_00000024,(CBoundingBox3D *)&stack0xffffffa8);
      core_box_cpp_CBoundingBox3D_render_FUN_004210b0
                (pCVar2,(int)in_stack_ffffffa8,(int)in_stack_ffffffac,(int)in_stack_ffffffb0);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000028);
  if ((*(int *)(in_stack_0000002c + 0x106c) != 0) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar3 == 0)) {
    uStack0000000c = 0xbe27ef9e;
    core_actor_cpp_CDemonActor_FUN_00408ec0(in_stack_00000030);
    core_dlight_cpp_renderConeLightGeometry_FUN_004760d0
              ((CVector3f *)&stack0xffffffe8,(CVector3i *)&in_stack_00000030->orient,56.0,10.0);
    core_actor_cpp_CDemonActor_FUN_00408ec0(in_stack_00000030);
    core_dlight_cpp_renderConeLightGeometry_FUN_004760d0
              ((CVector3f *)&stack0xfffffff0,(CVector3i *)(in_stack_0000003c + 0x30),56.0,10.0);
    return (int)in_stack_00000024;
  }
  return (int)in_stack_00000014;
}


// Assembly code:
// 005e88c0: PUSH EBX
//   Label: core_vehicle.cpp_CVehicle_FUN_005e88c0
// 005e88c1: PUSH ESI
// 005e88c2: PUSH EDI
// 005e88c3: PUSH EBP
// 005e88c4: SUB ESP,0x68
// 005e88c7: MOV EDX,dword ptr [ESP + 0x7c]
// 005e88cb: PUSH EDX
// 005e88cc: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 005e88d1: ADD ESP,0x4
// 005e88d4: LEA EAX,[ESP + 0x18]
// 005e88d8: PUSH EAX
// 005e88d9: MOV ECX,dword ptr [ESP + 0x80]
// 005e88e0: MOV EBX,dword ptr [ESP + 0x80]
// 005e88e7: PUSH ECX
// 005e88e8: MOV EBX,dword ptr [EBX + 0x154]
// 005e88ee: CALL dword ptr [EBX + 0x14]
// 005e88f1: ADD ESP,0x8
// 005e88f4: PUSH EAX
// 005e88f5: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 005e88fa: ADD ESP,0x4
// 005e88fd: MOV EBX,dword ptr [ESP + 0x7c]
// 005e8901: MOV dword ptr [ESP + 0x60],EAX
// 005e8905: MOV dword ptr [EBX + 0x106c],EAX
// 005e890b: TEST EAX,EAX
// 005e890d: JZ 0x005e8960
//   XREF to: 005e8960 (CONDITIONAL_JUMP)
// 005e890f: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e8915: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 005e8916: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 005e891b: ADD ESP,0x4
// 005e891e: TEST EAX,EAX
// 005e8920: JZ 0x005e898a
//   XREF to: 005e898a (CONDITIONAL_JUMP)
// 005e8922: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005e8927: CMP dword ptr [EAX + 0x240],0x0
//   XREF to: 02d81cdc (READ)
// 005e892e: JNZ 0x005e898a
//   XREF to: 005e898a (CONDITIONAL_JUMP)
// 005e8930: MOV EAX,ESP
// 005e8932: MOV EBX,dword ptr [ESP + 0x7c]
// 005e8936: PUSH EAX
// 005e8937: MOV EAX,dword ptr [ESP + 0x80]
// 005e893e: MOV EBX,dword ptr [EBX + 0x154]
// 005e8944: PUSH EAX
// 005e8945: CALL dword ptr [EBX + 0x14]
// 005e8948: ADD ESP,0x8
// 005e894b: PUSH EAX
// 005e894c: CALL core_box.cpp_CBoundingBox3D_render_FUN_004210b0
//   XREF to: 004210b0 (UNCONDITIONAL_CALL)
// 005e8951: ADD ESP,0x4
// 005e8954: LEA EAX,[EAX]
// 005e895a: LEA EDX,[EDX]
// 005e8960: MOV ECX,dword ptr [ESP + 0x7c]
//   Label: LAB_005e8960
// 005e8964: PUSH ECX
// 005e8965: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 005e896a: ADD ESP,0x4
// 005e896d: MOV EAX,dword ptr [ESP + 0x7c]
// 005e8971: CMP dword ptr [EAX + 0x106c],0x0
// 005e8978: JNZ 0x005e8a57
//   XREF to: 005e8a57 (CONDITIONAL_JUMP)
// 005e897e: MOV EAX,dword ptr [ESP + 0x60]
//   Label: LAB_005e897e
// 005e8982: ADD ESP,0x68
// 005e8985: POP EBP
// 005e8986: POP EDI
// 005e8987: POP ESI
// 005e8988: POP EBX
// 005e8989: RET
// 005e898a: MOV EAX,dword ptr [ESP + 0x7c]
//   Label: LAB_005e898a
// 005e898e: PUSH -0x1
// 005e8990: ADD EAX,0x158
// 005e8995: PUSH 0x0
// 005e8997: PUSH EAX
// 005e8998: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 005e899d: ADD ESP,0xc
// 005e89a0: MOV EAX,dword ptr [ESP + 0x7c]
// 005e89a4: MOV EBP,dword ptr [EAX + 0x938]
// 005e89aa: XOR EDI,EDI
// 005e89ac: TEST EBP,EBP
// 005e89ae: JLE 0x005e8960
//   XREF to: 005e8960 (CONDITIONAL_JUMP)
// 005e89b0: MOV ESI,dword ptr [ESP + 0x7c]
// 005e89b4: LEA EBP,[EAX + 0x950]
// 005e89ba: MOV EBX,dword ptr [ESP + 0x7c]
// 005e89be: ADD EAX,0xacc
// 005e89c3: ADD ESI,0xae4
// 005e89c9: ADD EBX,0xad8
// 005e89cf: MOV dword ptr [ESP + 0x64],EAX
// 005e89d3: PUSH EBX
//   Label: LAB_005e89d3
// 005e89d4: PUSH ESI
// 005e89d5: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e89db: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005e89dc: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 005e89e1: ADD ESP,0xc
// 005e89e4: PUSH 0x0
// 005e89e6: MOV ECX,dword ptr [ESP + 0x68]
// 005e89ea: PUSH ECX
// 005e89eb: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005e89f0: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 005e89f1: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 005e89f6: ADD ESP,0xc
// 005e89f9: PUSH -0x1
// 005e89fb: PUSH 0x0
// 005e89fd: PUSH EBP
// 005e89fe: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 005e8a03: ADD ESP,0xc
// 005e8a06: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e8a0c: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005e8a0d: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 005e8a57: MOV ESI,dword ptr [0x006703ec]
//   Label: LAB_005e8a57
//   XREF to: 006703ec (READ)
// 005e8a5d: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 005e8a5e: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 005e8a63: ADD ESP,0x4
// 005e8a66: TEST EAX,EAX
// 005e8a68: JNZ 0x005e897e
//   XREF to: 005e897e (CONDITIONAL_JUMP)
// 005e8a6e: MOV EDI,0x3f91eb85
// 005e8a73: MOV EAX,0x40c00000
// 005e8a78: MOV EBP,0xbe27ef9e
// 005e8a7d: MOV dword ptr [ESP + 0x50],EAX
// 005e8a81: MOV dword ptr [ESP + 0x5c],EAX
// 005e8a85: LEA EAX,[ESP + 0x48]
// 005e8a89: MOV EDX,0xbf91eb85
// 005e8a8e: PUSH EAX
// 005e8a8f: LEA EAX,[ESP + 0x34]
// 005e8a93: MOV ESI,dword ptr [ESP + 0x80]
// 005e8a9a: PUSH EAX
// 005e8a9b: MOV dword ptr [ESP + 0x50],EDI
// 005e8a9f: MOV dword ptr [ESP + 0x54],EBP
// 005e8aa3: PUSH ESI
// 005e8aa4: MOV dword ptr [ESP + 0x60],EDX
// 005e8aa8: MOV dword ptr [ESP + 0x64],EBP
// 005e8aac: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005e8ab1: ADD ESP,0xc
// 005e8ab4: PUSH 0x41200000
// 005e8ab9: LEA EAX,[ESI + 0x30]
// 005e8abc: PUSH 0x42600000
// 005e8ac1: PUSH EAX
// 005e8ac2: LEA EAX,[ESP + 0x3c]
// 005e8ac6: PUSH EAX
// 005e8ac7: CALL core_dlight.cpp_renderConeLightGeometry_FUN_004760d0
//   XREF to: 004760d0 (UNCONDITIONAL_CALL)
// 005e8acc: ADD ESP,0x10
// 005e8acf: LEA EAX,[ESP + 0x54]
// 005e8ad3: PUSH EAX
// 005e8ad4: LEA EAX,[ESP + 0x40]
// 005e8ad8: PUSH EAX
// 005e8ad9: PUSH ESI
// 005e8ada: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005e8adf: MOV EBX,EAX
// 005e8ae1: LEA EAX,[ESP + 0x3c]
// 005e8ae5: ADD ESP,0xc
// 005e8ae8: CMP EAX,EBX
// 005e8aea: JZ 0x005e8b00
//   XREF to: 005e8b00 (CONDITIONAL_JUMP)
// 005e8aec: MOV EAX,dword ptr [EBX]
// 005e8aee: MOV dword ptr [ESP + 0x30],EAX
// 005e8af2: MOV EAX,dword ptr [EBX + 0x4]
// 005e8af5: MOV dword ptr [ESP + 0x34],EAX
// 005e8af9: MOV EAX,dword ptr [EBX + 0x8]
// 005e8afc: MOV dword ptr [ESP + 0x38],EAX
// 005e8b00: MOV EAX,dword ptr [ESP + 0x7c]
//   Label: LAB_005e8b00
// 005e8b04: PUSH 0x41200000
// 005e8b09: ADD EAX,0x30
// 005e8b0c: PUSH 0x42600000
// 005e8b11: PUSH EAX
// 005e8b12: LEA EAX,[ESP + 0x3c]
// 005e8b16: PUSH EAX
// 005e8b17: CALL core_dlight.cpp_renderConeLightGeometry_FUN_004760d0
//   XREF to: 004760d0 (UNCONDITIONAL_CALL)
// 005e8b1c: ADD ESP,0x10
// 005e8b1f: MOV EAX,dword ptr [ESP + 0x60]
// 005e8b23: ADD ESP,0x68
// 005e8b26: POP EBP
// 005e8b27: POP EDI
// 005e8b28: POP ESI
// 005e8b29: POP EBX
// 005e8b2a: RET
