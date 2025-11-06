// Name: core_bodypart.cpp_CBodyPart_renderBackground_FUN_00419610
// Address: 00419610
// Address Range: [[00419610, 004196c6] [004196e0, 00419737]]
// Convention: __cdecl
// Signature: void core_bodypart.cpp_CBodyPart_renderBackground_FUN_00419610(CBodyPart * this_ptr, int layer_flag)
// Globals:
//   TerminatedCString s_s_going_into_background_00615cdf
//   CConsole* g_CConsolePtr = 0083b1a4
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CConsole g_ConsolePtr
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_0326ef00
// Function calls:
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_bodypart.cpp_FUN_00419340
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720

#include "nocturne.h"

void __cdecl
core_bodypart_cpp_CBodyPart_renderBackground_FUN_00419610(CBodyPart *this_ptr,int layer_flag)

{
  CConsole *this_ptr_00;
  CBoundingBox3D *this_ptr_01;
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  
  if (*(int *)this_ptr->field1_0x158 == 0) {
    if ((((layer_flag != 0) && (*(int *)(this_ptr->field1_0x158 + 0xdd0) == 0)) &&
        (*(int *)(this_ptr->field1_0x158 + 0xdc8) == 0)) &&
       (iVar1 = (*((this_ptr->base_actor).vtable)->getAllowedMeleeAttackTypes)
                          (&this_ptr->base_actor), this_ptr_00 = g_CConsolePtr, iVar1 == 0)) {
      this_ptr->field1_0x158[0] = '\x01';
      this_ptr->field1_0x158[1] = '\0';
      this_ptr->field1_0x158[2] = '\0';
      this_ptr->field1_0x158[3] = '\0';
      engine_console_cpp_CConsole_printf_FUN_00441890
                (this_ptr_00,"%s going into background\n",this_ptr);
    }
    if (*(int *)this_ptr->field1_0x158 == 0) {
      return;
    }
  }
  if ((*(int *)this_ptr->field1_0x158 != 1) || (*(int *)(this_ptr->field1_0x158 + 0xdc8) == 0)) {
    this_ptr->field1_0x158[0] = '\x02';
    this_ptr->field1_0x158[1] = '\0';
    this_ptr->field1_0x158[2] = '\0';
    this_ptr->field1_0x158[3] = '\0';
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
    g_CDemonSetPtr->unk_lighting_param2 = *(int *)(this_ptr->field1_0x158 + 0xb58);
    this_ptr_01 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                            (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xfffffff4);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
    if ((iVar1 != 0) &&
       ((*(int *)(this_ptr->field1_0x158 + 0xb5c) == 0 ||
        (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
        iVar2 != 0)))) {
      core_bodypart_cpp_FUN_00419340();
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    g_CDemonSetPtr->unk_lighting_param2 = 0;
    *(int *)(this_ptr->field1_0x158 + 0xdd4) = iVar1;
  }
  return;
}


// Assembly code:
// 00419610: PUSH EBX
//   Label: core_bodypart.cpp_CBodyPart_renderBackground_FUN_00419610
// 00419611: PUSH EBP
// 00419612: SUB ESP,0x18
// 00419615: MOV EBX,dword ptr [ESP + 0x24]
// 00419619: CMP dword ptr [EBX + 0x158],0x0
// 00419620: JNZ 0x0041964c
//   XREF to: 0041964c (CONDITIONAL_JUMP)
// 00419622: CMP dword ptr [ESP + 0x28],0x0
// 00419627: JZ 0x0041963f
//   XREF to: 0041963f (CONDITIONAL_JUMP)
// 00419629: CMP dword ptr [EBX + 0xf28],0x0
// 00419630: JNZ 0x0041963f
//   XREF to: 0041963f (CONDITIONAL_JUMP)
// 00419632: CMP dword ptr [EBX + 0xf20],0x0
// 00419639: JZ 0x004196e6
//   XREF to: 004196e6 (CONDITIONAL_JUMP)
// 0041963f: CMP dword ptr [EBX + 0x158],0x0
//   Label: LAB_0041963f
// 00419646: JZ 0x004196e0
//   XREF to: 004196e0 (CONDITIONAL_JUMP)
// 0041964c: CMP dword ptr [EBX + 0x158],0x1
//   Label: LAB_0041964c
// 00419653: JNZ 0x00419662
//   XREF to: 00419662 (CONDITIONAL_JUMP)
// 00419655: CMP dword ptr [EBX + 0xf20],0x0
// 0041965c: JNZ 0x004196e0
//   XREF to: 004196e0 (CONDITIONAL_JUMP)
// 00419662: PUSH ESI
//   Label: LAB_00419662
// 00419663: PUSH EBX
// 00419664: MOV dword ptr [EBX + 0x158],0x2
// 0041966e: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 00419673: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 00419678: MOV EDX,dword ptr [EBX + 0xcb0]
// 0041967e: ADD ESP,0x4
// 00419681: MOV dword ptr [EAX + 0x15ac88],EDX
//   XREF to: 0326ef00 (WRITE)
// 00419687: LEA EAX,[ESP + 0x4]
// 0041968b: PUSH EAX
// 0041968c: MOV EDX,dword ptr [EBX + 0x154]
// 00419692: PUSH EBX
// 00419693: CALL dword ptr [EDX + 0x14]
// 00419696: ADD ESP,0x8
// 00419699: PUSH EAX
// 0041969a: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 0041969f: ADD ESP,0x4
// 004196a2: MOV ESI,EAX
// 004196a4: TEST EAX,EAX
// 004196a6: JZ 0x004196bc
//   XREF to: 004196bc (CONDITIONAL_JUMP)
// 004196a8: CMP dword ptr [EBX + 0xcb4],0x0
// 004196af: JNZ 0x0041971f
//   XREF to: 0041971f (CONDITIONAL_JUMP)
// 004196b1: PUSH -0x1
//   Label: LAB_004196b1
// 004196b3: PUSH EBX
// 004196b4: CALL core_bodypart.cpp_FUN_00419340
//   XREF to: 00419340 (UNCONDITIONAL_CALL)
// 004196b9: ADD ESP,0x8
// 004196bc: MOV EAX,[0x006703ec]
//   Label: LAB_004196bc
//   XREF to: 006703ec (READ)
// 004196c1: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004196c2: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004196e0: ADD ESP,0x18
//   Label: LAB_004196e0
// 004196e3: POP EBP
// 004196e4: POP EBX
// 004196e5: RET
// 004196e6: PUSH EBX
//   Label: LAB_004196e6
// 004196e7: MOV EAX,dword ptr [EBX + 0x154]
// 004196ed: CALL dword ptr [EAX + 0x6c]
// 004196f0: ADD ESP,0x4
// 004196f3: TEST EAX,EAX
// 004196f5: JNZ 0x0041963f
//   XREF to: 0041963f (CONDITIONAL_JUMP)
// 004196fb: PUSH EBX
// 004196fc: PUSH 0x615cdf
//   XREF to: 00615cdf (DATA)
// 00419701: MOV EBP,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 00419707: PUSH EBP
//   XREF to: 0083b1a4 (DATA)
// 00419708: MOV dword ptr [EBX + 0x158],0x1
// 00419712: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 00419717: ADD ESP,0xc
// 0041971a: JMP 0x0041963f
//   XREF to: 0041963f (UNCONDITIONAL_JUMP)
// 0041971f: MOV EBP,dword ptr [0x006703ec]
//   Label: LAB_0041971f
//   XREF to: 006703ec (READ)
// 00419725: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 00419726: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0041972b: ADD ESP,0x4
// 0041972e: TEST EAX,EAX
// 00419730: JNZ 0x004196b1
//   XREF to: 004196b1 (CONDITIONAL_JUMP)
// 00419736: JMP 0x004196bc
//   XREF to: 004196bc (UNCONDITIONAL_JUMP)
