// Name: core_set.cpp_CDemonSet_buildMirrorList_FUN_00570b70
// Address: 00570b70
// Address Range: [[00570b70, 00570c36] [00570c3a, 00570c53]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_buildMirrorList_FUN_00570b70(CDemonSet * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 (0056a190) at 0056a25c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_set_cpp_0064602b
//   TerminatedCString s_CDemonSet_buildMirrorLis_0064603b
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 g_CGlassClassInfo.name_hash
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_buildMirrorList_FUN_00570b70(CDemonSet *this_ptr)

{
  CDemonActor *actor;
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  CDemonSet *pCVar3;
  float fStack_14;
  
  this_ptr->actor_list_count = 0;
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < (int)this_ptr->actor_list_ptr) {
    do {
      actor = core_actor_cpp_castToClassHash_FUN_0040c790
                        (*(CDemonActor **)pCVar3->actor_list_data,g_CGlassClassInfo.name_hash);
      if ((actor != (CDemonActor *)0x0) && (*(int *)(actor[1].create_event + 0x18) != 0)) {
        core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(actor);
        this_ptr_00 = (*((actor->metadata).vtable)->getBoundingBox)
                                (actor,(CBoundingBox3D *)&stack0xffffffe0);
        fStack_14 = 7.993952e-39;
        iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
        if (iVar1 != 0) {
          this_ptr->actor_list_maybe[this_ptr->actor_list_count] = actor;
          iVar1 = this_ptr->actor_list_count + 1;
          this_ptr->actor_list_count = iVar1;
          if (99 < iVar1) {
            g_CurrentFilename = "..\\core\\set.cpp";
            g_CurrentLineNumber = 0x11d4;
            core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::buildMirrorList - Too many mirrors");
          }
        }
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CDemonSet *)pCVar3->cameras;
    } while (iVar2 < (int)this_ptr->actor_list_ptr);
  }
  return;
}


// Assembly code:
// 00570b70: PUSH EBX
//   Label: core_set.cpp_CDemonSet_buildMirrorList_FUN_00570b70
// 00570b71: PUSH ESI
// 00570b72: PUSH EDI
// 00570b73: PUSH EBP
// 00570b74: SUB ESP,0x18
// 00570b77: MOV ESI,dword ptr [ESP + 0x2c]
// 00570b7b: MOV EDX,dword ptr [ESI + 0x14d154]
// 00570b81: MOV dword ptr [ESI + 0x15acb4],0x0
// 00570b8b: XOR EBP,EBP
// 00570b8d: TEST EDX,EDX
// 00570b8f: JLE 0x00570c4c
//   XREF to: 00570c4c (CONDITIONAL_JUMP)
// 00570b95: MOV EDI,ESI
// 00570b97: MOV EBX,dword ptr [0x02d83360]
//   Label: LAB_00570b97
//   XREF to: 02d83360 (READ)
// 00570b9d: PUSH EBX
// 00570b9e: MOV EAX,dword ptr [EDI + 0x14d158]
// 00570ba4: PUSH EAX
// 00570ba5: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00570baa: MOV EBX,EAX
// 00570bac: ADD ESP,0x8
// 00570baf: TEST EAX,EAX
// 00570bb1: JZ 0x00570c3a
//   XREF to: 00570c3a (CONDITIONAL_JUMP)
// 00570bb7: CMP dword ptr [EAX + 0x1e8],0x0
// 00570bbe: JZ 0x00570c3a
//   XREF to: 00570c3a (CONDITIONAL_JUMP)
// 00570bc4: PUSH EBX
// 00570bc5: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 00570bca: ADD ESP,0x4
// 00570bcd: MOV EAX,ESP
// 00570bcf: PUSH EAX
// 00570bd0: MOV EDX,dword ptr [EBX + 0x154]
// 00570bd6: PUSH EBX
// 00570bd7: CALL dword ptr [EDX + 0x14]
// 00570bda: ADD ESP,0x8
// 00570bdd: PUSH EAX
// 00570bde: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00570be3: ADD ESP,0x4
// 00570be6: TEST EAX,EAX
// 00570be8: JZ 0x00570c2b
//   XREF to: 00570c2b (CONDITIONAL_JUMP)
// 00570bea: MOV EAX,dword ptr [ESI + 0x15acb4]
// 00570bf0: MOV dword ptr [ESI + EAX*0x4 + 0x15acb8],EBX
// 00570bf7: MOV EDX,dword ptr [ESI + 0x15acb4]
// 00570bfd: INC EDX
// 00570bfe: MOV dword ptr [ESI + 0x15acb4],EDX
// 00570c04: CMP EDX,0x64
// 00570c07: JL 0x00570c2b
//   XREF to: 00570c2b (CONDITIONAL_JUMP)
// 00570c09: MOV EBX,0x64602b
//   XREF to: 0064602b (DATA)
// 00570c0e: MOV EAX,0x11d4
// 00570c13: PUSH 0x64603b
//   XREF to: 0064603b (DATA)
// 00570c18: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 00570c1e: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00570c23: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00570c28: ADD ESP,0x4
// 00570c2b: MOV EDX,dword ptr [0x006703ec]
//   Label: LAB_00570c2b
//   XREF to: 006703ec (READ)
// 00570c31: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00570c32: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 00570c3a: INC EBP
//   Label: LAB_00570c3a
// 00570c3b: MOV ECX,dword ptr [ESI + 0x14d154]
// 00570c41: ADD EDI,0x4
// 00570c44: CMP EBP,ECX
// 00570c46: JL 0x00570b97
//   XREF to: 00570b97 (CONDITIONAL_JUMP)
// 00570c4c: ADD ESP,0x18
//   Label: LAB_00570c4c
// 00570c4f: POP EBP
// 00570c50: POP EDI
// 00570c51: POP ESI
// 00570c52: POP EBX
// 00570c53: RET
