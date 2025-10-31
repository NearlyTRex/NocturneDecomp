// Name: core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630
// Address: 00578630
// Address Range: [[00578630, 005789f5]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630(void)
// Cross-references:
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 005798ed [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584d34 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_No_ground_type_entries_i_00646953
//   TerminatedCString s_Editing_ground_types_pre_00646976
//   TerminatedCString s_Y_es_Accept_changes_and__006469a1
//   TerminatedCString s_N_o_Abort_changes_and_do_006469dd
//   TerminatedCString s_Save_changes_00646a16
//   TerminatedCString s_Saving_s_00646a24
//   TerminatedCString s_core_setedit_cpp_00646a31
//   TerminatedCString s_wt_00646a45
//   TerminatedCString s_core_setedit_cpp_00646a48
//   TerminatedCString s_Can_t_create_s_00646a5c
//   TerminatedCString s_core_setedit_cpp_00646a74
//   TerminatedCString s_core_setedit_cpp_00646a88
//   TerminatedCString s_Can_t_find_ground_textur_00646a9c
//   TerminatedCString s_Select_ground_type_for_s_00646abf
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_03654368
//   undefined4 DAT_03654370
//   undefined4 DAT_03654398
//   undefined1 DAT_0365918f
//   undefined1 DAT_03659190
//   undefined1 DAT_03659191
// Function calls:
//   core_ground.cpp_getGroundTypeName_FUN_004eed80
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_setedit.cpp_ImportingGroundTextures_FUN_00578420
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_splitPath_FUN_00481f20
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540
//   shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void __cdecl core_setedit_cpp_EditingGroundTypesAndSaving_FUN_00578630(void)

{
  char *pcVar1;
  int iVar2;
  FILE *file;
  int iVar3;
  BADSPACEBASE *in_ESP;
  undefined *puVar4;
  char *output_buffer;
  char *in_stack_00000004;
  CStrList_vtable *in_stack_fffff450;
  char **in_stack_fffff454;
  CStrList_vtable *in_stack_fffff458;
  char **in_stack_fffff45c;
  CStrList_vtable *in_stack_fffff460;
  uint in_stack_fffff464;
  uint in_stack_fffff468;
  uint in_stack_fffff46c;
  uint in_stack_fffff470;
  char **in_stack_fffff474;
  undefined1 auStack_81c [8];
  undefined1 auStack_814 [8];
  undefined1 auStack_80c [8];
  undefined1 auStack_804 [20];
  CPickList CStack_7f0;
  char acStack_2f4 [4];
  char acStack_2f0 [416];
  char acStack_150 [4];
  char acStack_14c [248];
  undefined1 auStack_54 [4];
  char acStack_50 [72];
  
  DAT_03654368 = 0;
  core_setedit_cpp_ImportingGroundTextures_FUN_00578420();
  if (DAT_03654368 < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"No ground type entries in %s");
    return;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff428);
  output_buffer = (char *)0x0;
  shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10((CPickList *)&stack0xfffff42c,1);
  do {
    while( true ) {
      iVar3 = 0;
      shape_edittool_cpp_CPickList_clear_FUN_004a5770((CPickList *)&stack0xfffff430);
      if (0 < DAT_03654368) {
        puVar4 = &DAT_03654370;
        do {
          pcVar1 = core_ground_cpp_getGroundTypeName_FUN_004eed80
                             ((uint)(byte)(&DAT_03659190)[iVar3]);
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_2f4,"%s\t%s",puVar4,pcVar1);
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 0x28;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff430,acStack_2f0);
        } while (iVar3 < DAT_03654368);
      }
      shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)&stack0xfffff434);
      output_buffer =
           (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                             ((CPickList *)&stack0xfffff438,"Editing ground types, press ESC when done.",
                              (int)output_buffer,0);
      if (-1 < (int)output_buffer) break;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_81c);
      shape_edittool_cpp_CPickList_clear_FUN_004a5770((CPickList *)(auStack_81c + 4));
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)auStack_814,"[Y]es, Accept changes and write changes to ground type file");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)(auStack_814 + 4),"[N]o, Abort changes and don't save anything I've changed");
      shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540((CPickList *)auStack_80c,0,0x15);
      shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540((CPickList *)(auStack_80c + 4),1,0x31)
      ;
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)auStack_804,"Save changes?",-1,0);
      if (-1 < iVar3) {
        if (iVar3 == 0) {
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Saving %s...");
          file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (in_stack_00000004,(char *)0x0,"wt","..\\core\\setedit.cpp",
                            0x326);
          if (file == (FILE *)0x0) {
            g_CurrentFilename = "..\\core\\setedit.cpp";
            g_CurrentLineNumber = 0x327;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create %s");
          }
          iVar3 = 0;
          if (0 < DAT_03654368) {
            do {
              core_ground_cpp_getGroundTypeName_FUN_004eed80((uint)(byte)(&DAT_03659190)[iVar3]);
              iVar3 = iVar3 + 1;
              crt_stdio_c_fprintf_FUN_005fe6d0(file,"%s, %s\n");
            } while (iVar3 < DAT_03654368);
          }
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\setedit.cpp",0x32b);
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&CStack_7f0,0,(uint)in_stack_fffff460,in_stack_fffff464,in_stack_fffff468,
                   in_stack_fffff46c,in_stack_fffff470);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff46c,0,in_stack_fffff464,in_stack_fffff468,
                   in_stack_fffff46c,in_stack_fffff470,(uint)in_stack_fffff474);
        return;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(auStack_804 + 4),0,(uint)in_stack_fffff450,(uint)in_stack_fffff454,
                 (uint)in_stack_fffff458,(uint)in_stack_fffff45c,(uint)in_stack_fffff460);
    }
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
              ((CStrList *)&stack0xfffff43c,(int)auStack_54,output_buffer,0);
    iVar3 = 0;
    engine_dosio_c_splitPath_FUN_00481f20
              (acStack_50,(char *)0x0,(char *)0x0,acStack_150,(char *)0x0);
    if (0 < DAT_03654368) {
      pcVar1 = &DAT_03654370;
      do {
        iVar2 = crt_string_c_stricmp_FUN_005fe7f0(pcVar1,acStack_14c);
        if (iVar2 == 0) goto LAB_00578779;
        iVar3 = iVar3 + 1;
        pcVar1 = pcVar1 + 0x28;
      } while (iVar3 < DAT_03654368);
    }
    iVar3 = -1;
LAB_00578779:
    if (iVar3 < 0) {
      g_CurrentFilename = "..\\core\\setedit.cpp";
      g_CurrentLineNumber = 0x332;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find ground texture in list!");
    }
    iVar2 = 0;
    shape_edittool_cpp_CPickList_clear_FUN_004a5770((CPickList *)&stack0xfffff444);
    do {
      pcVar1 = core_ground_cpp_getGroundTypeName_FUN_004eed80(iVar2);
      iVar2 = iVar2 + 1;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff44c,pcVar1);
    } while (iVar2 < 0xe);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (CStack_7f0.cancel_button.button_text + 0xb4,"Select ground type for %s");
    iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)&stack0xfffff454,CStack_7f0.cancel_button.button_text + 0xb8,
                       (uint)(byte)(&DAT_03659190)[iVar3],0);
    if (-1 < iVar2) {
      (&DAT_03659190)[iVar3] = (char)iVar2;
    }
  } while( true );
}


// Assembly code:
// 00578630: PUSH EBX
//   Label: core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630
// 00578631: PUSH EBP
// 00578632: SUB ESP,0xbd4
// 00578638: MOV EBP,dword ptr [ESP + 0xbe0]
//   XREF to: Stack[0x4] (READ)
// 0057863f: XOR EDX,EDX
// 00578641: PUSH EBP
// 00578642: MOV dword ptr [0x03654368],EDX
//   XREF to: 03654368 (WRITE)
// 00578648: CALL core_setedit.cpp_ImportingGroundTextures_FUN_00578420
//   XREF to: 00578420 (UNCONDITIONAL_CALL)
// 0057864d: MOV ECX,dword ptr [0x03654368]
//   XREF to: 03654368 (READ)
// 00578653: ADD ESP,0x4
// 00578656: CMP ECX,0x1
// 00578659: JL 0x00578801
//   XREF to: 00578801 (CONDITIONAL_JUMP)
// 0057865f: PUSH EDI
// 00578660: PUSH ESI
// 00578661: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xbdc] (DATA)
// 00578665: PUSH EAX
// 00578666: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0057866b: ADD ESP,0x4
// 0057866e: PUSH 0x1
// 00578670: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xbdc] (DATA)
// 00578674: PUSH EAX
// 00578675: XOR EDI,EDI
// 00578677: CALL shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
//   XREF to: 004a3e10 (UNCONDITIONAL_CALL)
// 0057867c: ADD ESP,0x8
//   Label: LAB_0057867c
// 0057867f: LEA EAX,[ESP + 0x8]
//   Label: LAB_0057867f
//   XREF to: Stack[-0xbdc] (DATA)
// 00578683: PUSH EAX
// 00578684: XOR EBX,EBX
// 00578686: CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   XREF to: 004a5770 (UNCONDITIONAL_CALL)
// 0057868b: MOV ESI,dword ptr [0x03654368]
//   XREF to: 03654368 (READ)
// 00578691: ADD ESP,0x4
// 00578694: TEST ESI,ESI
// 00578696: JLE 0x005786e7
//   XREF to: 005786e7 (CONDITIONAL_JUMP)
// 00578698: MOV ESI,0x3654370
//   XREF to: 03654370 (DATA)
// 0057869d: XOR EAX,EAX
//   Label: LAB_0057869d
// 0057869f: MOV AL,byte ptr [EBX + 0x3659190]
//   XREF to: 03659190 (READ)
//   XREF to: 03659191 (READ)
// 005786a5: PUSH EAX
// 005786a6: CALL core_ground.cpp_getGroundTypeName_FUN_004eed80
//   XREF to: 004eed80 (UNCONDITIONAL_CALL)
// 005786ab: ADD ESP,0x4
// 005786ae: PUSH EAX
// 005786af: PUSH ESI
//   XREF to: 03654370 (DATA)
// 005786b0: PUSH 0x646970
//   XREF to: 00646970 (DATA)
// 005786b5: LEA EAX,[ESP + 0x8f4]
//   XREF to: Stack[-0x2fc] (DATA)
// 005786bc: PUSH EAX
// 005786bd: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005786c2: ADD ESP,0x10
// 005786c5: LEA EAX,[ESP + 0x8e8]
//   XREF to: Stack[-0x2fc] (DATA)
// 005786cc: PUSH EAX
// 005786cd: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xbdc] (DATA)
// 005786d1: PUSH EAX
// 005786d2: INC EBX
// 005786d3: ADD ESI,0x28
// 005786d6: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005786db: MOV EAX,[0x03654368]
//   XREF to: 03654368 (READ)
// 005786e0: ADD ESP,0x8
// 005786e3: CMP EBX,EAX
// 005786e5: JL 0x0057869d
//   XREF to: 0057869d (CONDITIONAL_JUMP)
// 005786e7: LEA EAX,[ESP + 0x8]
//   Label: LAB_005786e7
//   XREF to: Stack[-0xbdc] (DATA)
// 005786eb: PUSH EAX
// 005786ec: CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)
// 005786f1: ADD ESP,0x4
// 005786f4: PUSH 0x0
// 005786f6: PUSH EDI
// 005786f7: PUSH 0x646976
//   XREF to: 00646976 (DATA)
// 005786fc: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0xbdc] (DATA)
// 00578700: PUSH EAX
// 00578701: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00578706: ADD ESP,0x10
// 00578709: MOV EDI,EAX
// 0057870b: TEST EAX,EAX
// 0057870d: JL 0x0057881f
//   XREF to: 0057881f (CONDITIONAL_JUMP)
// 00578713: PUSH 0x0
// 00578715: PUSH EAX
// 00578716: LEA EAX,[ESP + 0xb80]
//   XREF to: Stack[-0x6c] (DATA)
// 0057871d: PUSH EAX
// 0057871e: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0xbdc] (DATA)
// 00578722: PUSH EAX
// 00578723: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 00578728: ADD ESP,0x10
// 0057872b: PUSH 0x0
// 0057872d: LEA EAX,[ESP + 0xa7c]
//   XREF to: Stack[-0x16c] (DATA)
// 00578734: PUSH EAX
// 00578735: PUSH 0x0
// 00578737: PUSH 0x0
// 00578739: LEA EAX,[ESP + 0xb88]
//   XREF to: Stack[-0x6c] (DATA)
// 00578740: PUSH EAX
// 00578741: XOR EBX,EBX
// 00578743: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 00578748: MOV EDX,dword ptr [0x03654368]
//   XREF to: 03654368 (READ)
// 0057874e: ADD ESP,0x14
// 00578751: TEST EDX,EDX
// 00578753: JLE 0x005789c4
//   XREF to: 005789c4 (CONDITIONAL_JUMP)
// 00578759: MOV ESI,0x3654370
//   XREF to: 03654370 (DATA)
// 0057875e: LEA EAX,[ESP + 0xa78]
//   Label: LAB_0057875e
//   XREF to: Stack[-0x16c] (DATA)
// 00578765: PUSH EAX
// 00578766: PUSH ESI
//   XREF to: 03654370 (DATA)
//   XREF to: 03654398 (DATA)
// 00578767: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0057876c: ADD ESP,0x8
// 0057876f: TEST EAX,EAX
// 00578771: JNZ 0x005789b3
//   XREF to: 005789b3 (CONDITIONAL_JUMP)
// 00578777: MOV EAX,EBX
// 00578779: MOV ESI,EAX
//   Label: LAB_00578779
// 0057877b: TEST EAX,EAX
// 0057877d: JL 0x005789ce
//   XREF to: 005789ce (CONDITIONAL_JUMP)
// 00578783: LEA EAX,[ESP + 0x8]
//   Label: LAB_00578783
//   XREF to: Stack[-0xbdc] (DATA)
// 00578787: PUSH EAX
// 00578788: XOR EBX,EBX
// 0057878a: CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   XREF to: 004a5770 (UNCONDITIONAL_CALL)
// 0057878f: ADD ESP,0x4
// 00578792: PUSH EBX
//   Label: LAB_00578792
// 00578793: CALL core_ground.cpp_getGroundTypeName_FUN_004eed80
//   XREF to: 004eed80 (UNCONDITIONAL_CALL)
// 00578798: ADD ESP,0x4
// 0057879b: PUSH EAX
// 0057879c: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xbdc] (DATA)
// 005787a0: PUSH EAX
// 005787a1: INC EBX
// 005787a2: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005787a7: ADD ESP,0x8
// 005787aa: CMP EBX,0xe
// 005787ad: JL 0x00578792
//   XREF to: 00578792 (CONDITIONAL_JUMP)
// 005787af: LEA EAX,[ESP + 0xb78]
//   XREF to: Stack[-0x6c] (DATA)
// 005787b6: PUSH EAX
// 005787b7: PUSH 0x646abf
//   XREF to: 00646abf (DATA)
// 005787bc: LEA EAX,[ESP + 0x760]
//   XREF to: Stack[-0x48c] (DATA)
// 005787c3: PUSH EAX
// 005787c4: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005787c9: ADD ESP,0xc
// 005787cc: XOR EAX,EAX
// 005787ce: PUSH 0x0
// 005787d0: MOV AL,byte ptr [ESI + 0x3659190]
//   XREF to: 0365918f (READ)
// 005787d6: PUSH EAX
// 005787d7: LEA EAX,[ESP + 0x760]
//   XREF to: Stack[-0x48c] (DATA)
// 005787de: PUSH EAX
// 005787df: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0xbdc] (DATA)
// 005787e3: PUSH EAX
// 005787e4: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 005787e9: ADD ESP,0x10
// 005787ec: MOV EBX,EAX
// 005787ee: TEST EAX,EAX
// 005787f0: JL 0x0057867f
//   XREF to: 0057867f (CONDITIONAL_JUMP)
// 005787f6: MOV byte ptr [ESI + 0x3659190],AL
//   XREF to: 0365918f (WRITE)
// 005787fc: JMP 0x0057867f
//   XREF to: 0057867f (UNCONDITIONAL_JUMP)
// 00578801: PUSH EBP
//   Label: LAB_00578801
// 00578802: PUSH 0x646953
//   XREF to: 00646953 (DATA)
// 00578807: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0057880d: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0057880e: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00578813: ADD ESP,0xc
// 00578816: ADD ESP,0xbd4
// 0057881c: POP EBP
// 0057881d: POP EBX
// 0057881e: RET
// 0057881f: LEA EAX,[ESP + 0x3b0]
//   Label: LAB_0057881f
//   XREF to: Stack[-0x834] (DATA)
// 00578826: PUSH EAX
// 00578827: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0057882c: ADD ESP,0x4
// 0057882f: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x834] (DATA)
// 00578836: PUSH EAX
// 00578837: CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   XREF to: 004a5770 (UNCONDITIONAL_CALL)
// 0057883c: ADD ESP,0x4
// 0057883f: PUSH 0x6469a1
//   XREF to: 006469a1 (DATA)
// 00578844: LEA EAX,[ESP + 0x3b4]
//   XREF to: Stack[-0x834] (DATA)
// 0057884b: PUSH EAX
// 0057884c: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00578851: ADD ESP,0x8
// 00578854: PUSH 0x6469dd
//   XREF to: 006469dd (DATA)
// 00578859: LEA EAX,[ESP + 0x3b4]
//   XREF to: Stack[-0x834] (DATA)
// 00578860: PUSH EAX
// 00578861: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00578866: ADD ESP,0x8
// 00578869: PUSH 0x15
// 0057886b: PUSH 0x0
// 0057886d: LEA EAX,[ESP + 0x3b8]
//   XREF to: Stack[-0x834] (DATA)
// 00578874: PUSH EAX
// 00578875: CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540
//   XREF to: 004a5540 (UNCONDITIONAL_CALL)
// 0057887a: ADD ESP,0xc
// 0057887d: PUSH 0x31
// 0057887f: PUSH 0x1
// 00578881: LEA EAX,[ESP + 0x3b8]
//   XREF to: Stack[-0x834] (DATA)
// 00578888: PUSH EAX
// 00578889: CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540
//   XREF to: 004a5540 (UNCONDITIONAL_CALL)
// 0057888e: ADD ESP,0xc
// 00578891: PUSH 0x0
// 00578893: PUSH -0x1
// 00578895: PUSH 0x646a16
//   XREF to: 00646a16 (DATA)
// 0057889a: LEA EAX,[ESP + 0x3bc]
//   XREF to: Stack[-0x834] (DATA)
// 005788a1: PUSH EAX
// 005788a2: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 005788a7: ADD ESP,0x10
// 005788aa: TEST EAX,EAX
// 005788ac: JL 0x0057899f
//   XREF to: 0057899f (CONDITIONAL_JUMP)
// 005788b2: JNZ 0x00578973
//   XREF to: 00578973 (CONDITIONAL_JUMP)
// 005788b8: PUSH EBP
// 005788b9: PUSH 0x646a24
//   XREF to: 00646a24 (DATA)
// 005788be: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005788c4: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 005788c5: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 005788ca: ADD ESP,0xc
// 005788cd: PUSH 0x326
// 005788d2: PUSH 0x646a31
//   XREF to: 00646a31 (DATA)
// 005788d7: PUSH 0x646a45
//   XREF to: 00646a45 (DATA)
// 005788dc: PUSH 0x0
// 005788de: PUSH EBP
// 005788df: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 005788e4: ADD ESP,0x14
// 005788e7: MOV EDI,EAX
// 005788e9: TEST EAX,EAX
// 005788eb: JNZ 0x00578911
//   XREF to: 00578911 (CONDITIONAL_JUMP)
// 005788ed: PUSH EBP
// 005788ee: MOV EBX,0x646a48
//   XREF to: 00646a48 (PARAM)
// 005788f3: MOV ESI,0x327
// 005788f8: PUSH 0x646a5c
//   XREF to: 00646a5c (DATA)
// 005788fd: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 00578903: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00578909: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057890e: ADD ESP,0x8
// 00578911: MOV EBP,dword ptr [0x03654368]
//   Label: LAB_00578911
//   XREF to: 03654368 (READ)
// 00578917: XOR EBX,EBX
// 00578919: TEST EBP,EBP
// 0057891b: JLE 0x00578960
//   XREF to: 00578960 (CONDITIONAL_JUMP)
// 0057891d: MOV ESI,0x3654370
//   XREF to: 03654370 (DATA)
// 00578922: XOR EAX,EAX
//   Label: LAB_00578922
// 00578924: MOV AL,byte ptr [EBX + 0x3659190]
//   XREF to: 03659190 (READ)
//   XREF to: 03659191 (READ)
// 0057892a: PUSH EAX
// 0057892b: CALL core_ground.cpp_getGroundTypeName_FUN_004eed80
//   XREF to: 004eed80 (UNCONDITIONAL_CALL)
// 00578930: ADD ESP,0x4
// 00578933: PUSH EAX
// 00578934: PUSH ESI
//   XREF to: 03654370 (DATA)
// 00578935: PUSH 0x646a6c
//   XREF to: 00646a6c (DATA)
// 0057893a: PUSH EDI
// 0057893b: INC EBX
// 0057893c: ADD ESI,0x28
// 0057893f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00578944: MOV EBP,dword ptr [0x03654368]
//   XREF to: 03654368 (READ)
// 0057894a: ADD ESP,0x10
// 0057894d: CMP EBX,EBP
// 0057894f: JL 0x00578922
//   XREF to: 00578922 (CONDITIONAL_JUMP)
// 00578951: LEA EAX,[EAX]
// 00578957: LEA EDX,[EDX]
// 0057895d: LEA EAX,[EAX]
// 00578960: PUSH 0x32b
//   Label: LAB_00578960
// 00578965: PUSH 0x646a74
//   XREF to: 00646a74 (DATA)
// 0057896a: PUSH EDI
// 0057896b: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00578970: ADD ESP,0xc
// 00578973: PUSH 0x0
//   Label: LAB_00578973
// 00578975: LEA EAX,[ESP + 0x3b4]
//   XREF to: Stack[-0x834] (DATA)
// 0057897c: PUSH EAX
// 0057897d: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00578982: ADD ESP,0x8
// 00578985: PUSH 0x0
// 00578987: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xbdc] (DATA)
// 0057898b: PUSH EAX
// 0057898c: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00578991: ADD ESP,0x8
// 00578994: POP ESI
// 00578995: POP EDI
// 00578996: ADD ESP,0xbd4
// 0057899c: POP EBP
// 0057899d: POP EBX
// 0057899e: RET
// 0057899f: PUSH 0x0
//   Label: LAB_0057899f
// 005789a1: LEA EAX,[ESP + 0x3b4]
//   XREF to: Stack[-0x834] (DATA)
// 005789a8: PUSH EAX
// 005789a9: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 005789ae: JMP 0x0057867c
//   XREF to: 0057867c (UNCONDITIONAL_JUMP)
// 005789b3: MOV EAX,[0x03654368]
//   Label: LAB_005789b3
//   XREF to: 03654368 (READ)
// 005789b8: INC EBX
// 005789b9: ADD ESI,0x28
// 005789bc: CMP EBX,EAX
// 005789be: JL 0x0057875e
//   XREF to: 0057875e (CONDITIONAL_JUMP)
// 005789c4: MOV EAX,0xffffffff
//   Label: LAB_005789c4
// 005789c9: JMP 0x00578779
//   XREF to: 00578779 (UNCONDITIONAL_JUMP)
// 005789ce: MOV EDX,0x646a88
//   Label: LAB_005789ce
//   XREF to: 00646a88 (PARAM)
// 005789d3: MOV ECX,0x332
// 005789d8: PUSH 0x646a9c
//   XREF to: 00646a9c (DATA)
// 005789dd: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005789e3: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005789e9: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005789ee: ADD ESP,0x4
// 005789f1: JMP 0x00578783
//   XREF to: 00578783 (UNCONDITIONAL_JUMP)
