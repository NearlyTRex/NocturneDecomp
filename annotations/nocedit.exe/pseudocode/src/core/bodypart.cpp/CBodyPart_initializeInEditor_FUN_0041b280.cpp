// Name: core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280
// Address: 0041b280
// Address Range: [[0041b280, 0041b4de]]
// Convention: __cdecl
// Signature: int core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280(CBodyPart * this_ptr)
// Globals:
//   TerminatedCString s_dfm_00615ea0
//   TerminatedCString s_models_00615ea6
//   TerminatedCString s_Select_model_to_dismembe_00615ead
//   TerminatedCString s_No_00615ec7
//   TerminatedCString s_Yes_00615eca
//   TerminatedCString s_s_s_00615ece
//   TerminatedCString s_Done_00615ed4
//   TerminatedCString s_Select_which_part_s_to_d_00615edb
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   core_bodypart.cpp_FUN_0041a050
//   core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220
//   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040
//   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80

#include "nocturne.h"

int __cdecl core_bodypart_cpp_CBodyPart_initializeInEditor_FUN_0041b280(CBodyPart *this_ptr)

{
  bool bVar1;
  int iVar2;
  CDeformableModel *config_param1;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  CBodyPart *in_stack_00000024;
  float in_stack_ffffd7dc;
  CMotionList *in_stack_ffffd7e0;
  CMotionList *in_stack_ffffd7e4;
  float in_stack_ffffd7e8;
  float in_stack_ffffd7ec;
  uint auStack_6ec [93];
  undefined1 auStack_578 [8];
  CPickList CStack_570;
  char acStack_d0 [4];
  char acStack_cc [188];
  
  iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,"Select model to dismember","models",
                     "*.dfm",(bool)((char)&CStack_570 + -0x74));
  if (iVar2 == 0) {
    return 0;
  }
  core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
            ((CDeformableModelInstance *)&stack0xffffd7c4);
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)&stack0xffffd7c8,
             CStack_570.cancel_button.button_text + 0xb8);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
            ((CDeformableModelInstance *)&stack0xffffd7cc);
  config_param1 =
       core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                 ((CDeformableModelInstance *)&stack0xffffd7d0);
  iVar2 = config_param1->num_parts;
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      iVar3 = iVar4 + 4;
      *(undefined4 *)((int)auStack_6ec + iVar4) = 0;
      iVar4 = iVar3;
    } while (iVar3 < iVar2 * 4);
  }
  while( true ) {
    bVar1 = false;
    iVar4 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_578);
    if (0 < iVar2) {
      iVar3 = 0;
      do {
        if (*(int *)((int)auStack_6ec + iVar3 + 4) != 0) {
          bVar1 = true;
        }
        core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220
                  ((CDeformableModel *)this_ptr,iVar4);
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_d0,"%s\t%s");
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + 1;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_578,acStack_cc);
      } while (iVar4 < iVar2);
    }
    if (bVar1) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_578 + 4),"(Done)");
    }
    this_ptr = (CBodyPart *)
               shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         ((CPickList *)(auStack_578 + 4),"Select which part(s) to dismember",
                          (int)config_param1,0);
    if ((int)this_ptr < 0) break;
    if ((bVar1) &&
       (this_ptr ==
        (CBodyPart *)
        (((CDeformableModel *)(CStack_570.base_strlist.item_count + -0x9000))->model_filename + 0x4f
        ))) {
      iVar4 = 0;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&CStack_570,0,(uint)in_stack_ffffd7dc,(uint)in_stack_ffffd7e0,
                 (uint)in_stack_ffffd7e4,(uint)in_stack_ffffd7e8,(uint)in_stack_ffffd7ec);
      if (0 < iVar2) {
        iVar3 = 0;
        do {
          if (*(int *)((int)auStack_6ec + iVar3 + 0xc) != 0) {
            core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040
                      ((CDeformableModelInstance *)&stack0xffffd7e0,in_stack_00000024,iVar4);
          }
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar4 < iVar2);
      }
      core_bodypart_cpp_FUN_0041a050();
      core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                ((CDeformableModelInstance *)&stack0xffffd7e4,0,(uint)in_stack_ffffd7e4,
                 (uint)in_stack_ffffd7e8,(uint)in_stack_ffffd7ec);
      return 1;
    }
    auStack_6ec[(int)((this_ptr->base_actor).actor_name + 2)] =
         (uint)(auStack_6ec[(int)((this_ptr->base_actor).actor_name + 2)] == 0);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&CStack_570,0,(uint)in_stack_ffffd7dc,(uint)in_stack_ffffd7e0,(uint)in_stack_ffffd7e4
               ,(uint)in_stack_ffffd7e8,(uint)in_stack_ffffd7ec);
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&CStack_570,0,(uint)in_stack_ffffd7dc,(uint)in_stack_ffffd7e0,(uint)in_stack_ffffd7e4,
             (uint)in_stack_ffffd7e8,(uint)in_stack_ffffd7ec);
  core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
            ((CDeformableModelInstance *)&stack0xffffd7e0,0,(uint)in_stack_ffffd7e0,
             (uint)in_stack_ffffd7e4,(uint)in_stack_ffffd7e8);
  return 0;
}


// Assembly code:
// 0041b280: PUSH EBX
//   Label: core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280
// 0041b281: PUSH ESI
// 0041b282: PUSH EDI
// 0041b283: PUSH EBP
// 0041b284: SUB ESP,0x2830
// 0041b28a: PUSH 0x0
// 0041b28c: LEA EAX,[ESP + 0x2660]
//   XREF to: Stack[-0x1e4] (DATA)
// 0041b293: PUSH EAX
// 0041b294: PUSH 0x615ea0
//   XREF to: 00615ea0 (DATA)
// 0041b299: PUSH 0x615ea6
//   XREF to: 00615ea6 (DATA)
// 0041b29e: PUSH 0x615ead
//   XREF to: 00615ead (DATA)
// 0041b2a3: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0041b2a9: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0041b2aa: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 0041b2af: ADD ESP,0x18
// 0041b2b2: TEST EAX,EAX
// 0041b2b4: JNZ 0x0041b2c5
//   XREF to: 0041b2c5 (CONDITIONAL_JUMP)
// 0041b2b6: XOR EBX,EBX
// 0041b2b8: MOV EAX,EBX
// 0041b2ba: ADD ESP,0x2830
// 0041b2c0: POP EBP
// 0041b2c1: POP EDI
// 0041b2c2: POP ESI
// 0041b2c3: POP EBX
// 0041b2c4: RET
// 0041b2c5: MOV EAX,ESP
//   Label: LAB_0041b2c5
// 0041b2c7: PUSH EAX
// 0041b2c8: CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)
// 0041b2cd: ADD ESP,0x4
// 0041b2d0: LEA EAX,[ESP + 0x265c]
//   XREF to: Stack[-0x1e4] (DATA)
// 0041b2d7: PUSH EAX
// 0041b2d8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x2840] (DATA)
// 0041b2dc: PUSH EAX
// 0041b2dd: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 0041b2e2: ADD ESP,0x8
// 0041b2e5: MOV EAX,ESP
// 0041b2e7: PUSH EAX
// 0041b2e8: CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 0041b2ed: ADD ESP,0x4
// 0041b2f0: MOV EAX,ESP
// 0041b2f2: PUSH EAX
// 0041b2f3: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 0041b2f8: ADD ESP,0x4
// 0041b2fb: MOV EBX,dword ptr [EAX + 0x7140]
// 0041b301: MOV dword ptr [ESP + 0x282c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0041b308: MOV EBP,EBX
// 0041b30a: TEST EBX,EBX
// 0041b30c: JLE 0x0041b330
//   XREF to: 0041b330 (CONDITIONAL_JUMP)
// 0041b30e: SHL EBX,0x2
// 0041b311: XOR EAX,EAX
// 0041b313: ADD EAX,0x4
//   Label: LAB_0041b313
// 0041b316: XOR ECX,ECX
// 0041b318: MOV dword ptr [ESP + EAX*0x1 + 0x213c],ECX
// 0041b31f: CMP EAX,EBX
// 0041b321: JL 0x0041b313
//   XREF to: 0041b313 (CONDITIONAL_JUMP)
// 0041b323: LEA EAX,[EAX]
// 0041b329: LEA EDX,[EDX]
//   XREF to: 02cf1cd4 (DATA)
// 0041b32f: NOP
// 0041b330: XOR EBX,EBX
//   Label: LAB_0041b330
// 0041b332: MOV dword ptr [ESP + 0x2828],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0041b339: LEA EAX,[ESP + 0x22b4]
//   Label: LAB_0041b339
//   XREF to: Stack[-0x58c] (DATA)
// 0041b340: PUSH EAX
// 0041b341: XOR EDI,EDI
// 0041b343: XOR EBX,EBX
// 0041b345: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0041b34a: ADD ESP,0x4
// 0041b34d: TEST EBP,EBP
// 0041b34f: JLE 0x0041b3b5
//   XREF to: 0041b3b5 (CONDITIONAL_JUMP)
// 0041b351: XOR ESI,ESI
// 0041b353: MOV EDX,dword ptr [ESP + ESI*0x1 + 0x2140]
//   Label: LAB_0041b353
// 0041b35a: MOV EAX,0x615ec7
//   XREF to: 00615ec7 (DATA)
// 0041b35f: TEST EDX,EDX
// 0041b361: JZ 0x0041b36d
//   XREF to: 0041b36d (CONDITIONAL_JUMP)
// 0041b363: MOV EAX,0x615eca
//   XREF to: 00615eca (DATA)
// 0041b368: MOV EDI,0x1
// 0041b36d: PUSH EAX
//   Label: LAB_0041b36d
//   XREF to: 00615ec7 (DATA)
//   XREF to: 00615eca (DATA)
// 0041b36e: PUSH EBX
// 0041b36f: MOV EAX,dword ptr [ESP + 0x2834]
//   XREF to: Stack[-0x14] (READ)
// 0041b376: PUSH EAX
// 0041b377: CALL core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220
//   XREF to: 0059c220 (UNCONDITIONAL_CALL)
// 0041b37c: ADD ESP,0x8
// 0041b37f: PUSH EAX
// 0041b380: PUSH 0x615ece
//   XREF to: 00615ece (DATA)
// 0041b385: LEA EAX,[ESP + 0x276c]
//   XREF to: Stack[-0xe0] (DATA)
// 0041b38c: PUSH EAX
// 0041b38d: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0041b392: ADD ESP,0x10
// 0041b395: LEA EAX,[ESP + 0x2760]
//   XREF to: Stack[-0xe0] (DATA)
// 0041b39c: PUSH EAX
// 0041b39d: LEA EAX,[ESP + 0x22b8]
//   XREF to: Stack[-0x58c] (DATA)
// 0041b3a4: PUSH EAX
// 0041b3a5: ADD ESI,0x4
// 0041b3a8: INC EBX
// 0041b3a9: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0041b3ae: ADD ESP,0x8
// 0041b3b1: CMP EBX,EBP
// 0041b3b3: JL 0x0041b353
//   XREF to: 0041b353 (CONDITIONAL_JUMP)
// 0041b3b5: TEST EDI,EDI
//   Label: LAB_0041b3b5
// 0041b3b7: JZ 0x0041b3ce
//   XREF to: 0041b3ce (CONDITIONAL_JUMP)
// 0041b3b9: PUSH 0x615ed4
//   XREF to: 00615ed4 (DATA)
// 0041b3be: LEA EAX,[ESP + 0x22b8]
//   XREF to: Stack[-0x58c] (DATA)
// 0041b3c5: PUSH EAX
// 0041b3c6: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0041b3cb: ADD ESP,0x8
// 0041b3ce: PUSH 0x0
//   Label: LAB_0041b3ce
// 0041b3d0: MOV EDX,dword ptr [ESP + 0x282c]
//   XREF to: Stack[-0x18] (READ)
// 0041b3d7: PUSH EDX
// 0041b3d8: PUSH 0x615edb
//   XREF to: 00615edb (DATA)
// 0041b3dd: LEA EAX,[ESP + 0x22c0]
//   XREF to: Stack[-0x58c] (DATA)
// 0041b3e4: PUSH EAX
// 0041b3e5: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0041b3ea: ADD ESP,0x10
// 0041b3ed: MOV dword ptr [ESP + 0x2828],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0041b3f4: TEST EAX,EAX
// 0041b3f6: JL 0x0041b432
//   XREF to: 0041b432 (CONDITIONAL_JUMP)
// 0041b3f8: TEST EDI,EDI
// 0041b3fa: JNZ 0x0041b460
//   XREF to: 0041b460 (CONDITIONAL_JUMP)
// 0041b3fc: MOV EAX,dword ptr [ESP + 0x2828]
//   Label: LAB_0041b3fc
//   XREF to: Stack[-0x18] (READ)
// 0041b403: CMP dword ptr [ESP + EAX*0x4 + 0x2140],0x0
// 0041b40b: SETZ BL
// 0041b40e: AND EBX,0xff
// 0041b414: PUSH 0x0
// 0041b416: MOV dword ptr [ESP + EAX*0x4 + 0x2144],EBX
// 0041b41d: LEA EAX,[ESP + 0x22b8]
//   XREF to: Stack[-0x58c] (DATA)
// 0041b424: PUSH EAX
// 0041b425: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0041b42a: ADD ESP,0x8
// 0041b42d: JMP 0x0041b339
//   XREF to: 0041b339 (UNCONDITIONAL_JUMP)
// 0041b432: XOR EBX,EBX
//   Label: LAB_0041b432
// 0041b434: PUSH EBX
// 0041b435: LEA EAX,[ESP + 0x22b8]
//   XREF to: Stack[-0x58c] (DATA)
// 0041b43c: PUSH EAX
// 0041b43d: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0041b442: ADD ESP,0x8
// 0041b445: PUSH EBX
// 0041b446: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x2840] (DATA)
// 0041b44a: PUSH EAX
// 0041b44b: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 0041b450: ADD ESP,0x8
// 0041b453: MOV EAX,EBX
// 0041b455: ADD ESP,0x2830
// 0041b45b: POP EBP
// 0041b45c: POP EDI
// 0041b45d: POP ESI
// 0041b45e: POP EBX
// 0041b45f: RET
// 0041b460: MOV EBX,dword ptr [ESP + 0x22b4]
//   Label: LAB_0041b460
//   XREF to: Stack[-0x58c] (READ)
// 0041b467: DEC EBX
// 0041b468: CMP EAX,EBX
// 0041b46a: JNZ 0x0041b3fc
//   XREF to: 0041b3fc (CONDITIONAL_JUMP)
// 0041b46c: PUSH 0x0
// 0041b46e: LEA EAX,[ESP + 0x22b8]
//   XREF to: Stack[-0x58c] (DATA)
// 0041b475: PUSH EAX
// 0041b476: XOR ESI,ESI
// 0041b478: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0041b47d: ADD ESP,0x8
// 0041b480: TEST EBP,EBP
// 0041b482: JLE 0x0041b4ae
//   XREF to: 0041b4ae (CONDITIONAL_JUMP)
// 0041b484: XOR EBX,EBX
// 0041b486: CMP dword ptr [ESP + EBX*0x1 + 0x2140],0x0
//   Label: LAB_0041b486
// 0041b48e: JZ 0x0041b4a6
//   XREF to: 0041b4a6 (CONDITIONAL_JUMP)
// 0041b490: PUSH ESI
// 0041b491: MOV EAX,dword ptr [ESP + 0x2848]
//   XREF to: Stack[0x4] (READ)
// 0041b498: PUSH EAX
// 0041b499: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x2840] (DATA)
// 0041b49d: PUSH EAX
// 0041b49e: CALL core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040
//   XREF to: 005a1040 (UNCONDITIONAL_CALL)
// 0041b4a3: ADD ESP,0xc
// 0041b4a6: INC ESI
//   Label: LAB_0041b4a6
// 0041b4a7: ADD EBX,0x4
// 0041b4aa: CMP ESI,EBP
// 0041b4ac: JL 0x0041b486
//   XREF to: 0041b486 (CONDITIONAL_JUMP)
// 0041b4ae: MOV ECX,dword ptr [ESP + 0x2844]
//   Label: LAB_0041b4ae
//   XREF to: Stack[0x4] (READ)
// 0041b4b5: PUSH ECX
// 0041b4b6: CALL core_bodypart.cpp_FUN_0041a050
//   XREF to: 0041a050 (UNCONDITIONAL_CALL)
// 0041b4bb: ADD ESP,0x4
// 0041b4be: PUSH 0x0
// 0041b4c0: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x2840] (DATA)
// 0041b4c4: PUSH EAX
// 0041b4c5: MOV EBX,0x1
// 0041b4ca: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 0041b4cf: ADD ESP,0x8
// 0041b4d2: MOV EAX,EBX
// 0041b4d4: ADD ESP,0x2830
// 0041b4da: POP EBP
// 0041b4db: POP EDI
// 0041b4dc: POP ESI
// 0041b4dd: POP EBX
// 0041b4de: RET
