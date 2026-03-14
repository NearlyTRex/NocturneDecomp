; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_editorAction_FUN_00564820(CScript *this_ptr,EEditorActionType action_type,int action_parm)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; EEditorActionType Stack[0x8]:4   action_type
; int              Stack[0xc]:4   action_parm
; Local Variables:
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; char *           Stack[-0x1c]:4  local_1c
; CStrList *       Stack[-0x18]:4  local_18
; char *           Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_CScript_processEditorInput_FUN_00565130 at 00565722
;
; Referenced Globals:
;   void* switchdataD_005647d0 = 0056483f
;   TerminatedCString s_core_script_cpp_00643d82
;   TerminatedCString s_Hell_froze_00643d95
;   TerminatedCString s_core_script_cpp_00643da0
;   TerminatedCString s_core_script_cpp_00643db3
;   TerminatedCString s_Out_of_memory_00643dc6
;   TerminatedCString s_core_script_cpp_00643dd5
;   char s_EmptyChar_00643de8 = \x00
;   TerminatedCString s_core_script_cpp_00643de9
;   TerminatedCString s_Hell_froze_00643dfc
;   char s_EmptyChar_00643e07 = \x00
;   char s_EmptyChar_00643e08 = \x00
;   TerminatedCString s_core_script_cpp_00643e09
;   TerminatedCString s_CScript_editorAction_unk_00643e1c
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   ... and 19 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_script.cpp_clearSelections_FUN_005644e0
;   core_script.cpp_CScript_editorIndex2X_FUN_00566b30
;   core_script.cpp_CScript_editorPutLine_FUN_005662a0
;   core_script.cpp_CScript_editorX2Index_FUN_00566a90
;   core_script.cpp_CScript_insertText_FUN_00566390
;   core_script.cpp_CScript_loadLineToBuffer_FUN_00566230
;   core_script.cpp_CScript_updateCursorBounds_FUN_00566910
;   core_script.cpp_CScript_updateScrollPosition_FUN_005669a0
;   core_script.cpp_getSelectionRangeForLine_FUN_00564560
;   core_script.cpp_updateSelection_FUN_00564500
;   crt_string.c_memmove_FUN_005fe5e0
;   shape_edittool.cpp_CEditorTools_getClipboardText_FUN_004a1b30
;   shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564820
        ;   Label: core_script.cpp_CScript_editorAction_FUN_00564820
    PUSH ESI                            ; 00564821
    PUSH EDI                            ; 00564822
    PUSH EBP                            ; 00564823
    SUB ESP,0x1c                        ; 00564824
    MOV EBP,dword ptr [ESP + 0x30]      ; 00564827
    MOV EAX,dword ptr [ESP + 0x34]      ; 0056482b
    CMP EAX,0x12                        ; 0056482f
    JA 0x005650f2                       ; 00564832
        ;   XREF to: 005650f2 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5647d0]  ; 00564838 | caseD_0 | caseD_a | caseD_1
        ;   Label: switchD
    MOV EDI,dword ptr [0x0310fd44]      ; 0056483f | g_CurrentEditingColumn
        ;   Label: caseD_0
    TEST EDI,EDI                        ; 00564845
    JLE 0x005648c7                      ; 00564847
        ;   XREF to: 005648c7 (CONDITIONAL_JUMP)  ; LAB_005648c7
    PUSH EDI                            ; 0056484d
    MOV EDX,dword ptr [0x0310fd48]      ; 0056484e | g_CurrentEditingLine
    PUSH EDX                            ; 00564854
    PUSH EBP                            ; 00564855
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00564856
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_editorX2Index_FUN_00566a90(CScript * this_ptr, int line_number, int visual_column)
    ADD ESP,0xc                         ; 0056485b
    MOV EBX,EAX                         ; 0056485e
    CMP EAX,0x1                         ; 00564860
    JGE 0x00564889                      ; 00564863
        ;   XREF to: 00564889 (CONDITIONAL_JUMP)  ; LAB_00564889
    MOV ECX,0x643d82                    ; 00564865 | = "..\\core\\script.cpp"
    MOV EAX,0x643d95                    ; 0056486a | = "Hell froze"
    MOV ESI,0x16c1                      ; 0056486f
    PUSH EAX                            ; 00564874 | = "Hell froze"
    MOV dword ptr [0x02f0ca48],ECX      ; 00564875 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0056487b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00564881
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00564886
    MOV EDI,dword ptr [0x0310fd48]      ; 00564889 | g_CurrentEditingLine
        ;   Label: LAB_00564889
    PUSH EDI                            ; 0056488f
    PUSH EBP                            ; 00564890
    CALL core_script.cpp_CScript_loadLineToBuffer_FUN_00566230 ; 00564891
        ;   XREF to: 00566230 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_loadLineToBuffer_FUN_00566230(CScript * this_ptr, int line_number)
    MOV EAX,[0x0310fd44]                ; 00564896 | g_CurrentEditingColumn
    ADD ESP,0x8                         ; 0056489b
    DEC EAX                             ; 0056489e
    MOV EDI,0x31101c0                   ; 0056489f | g_CurrentLineBuffer
    MOV [0x0310fd44],EAX                ; 005648a4 | g_CurrentEditingColumn
    SUB ECX,ECX                         ; 005648a9
    DEC ECX                             ; 005648ab
    XOR EAX,EAX                         ; 005648ac
    SCASB.REPNE ES:EDI                  ; 005648ae | g_CurrentLineBuffer | DAT_031101c1
    NOT ECX                             ; 005648b0
    DEC ECX                             ; 005648b2
    CMP EBX,ECX                         ; 005648b3
    JA 0x005648c7                       ; 005648b5
        ;   XREF to: 005648c7 (CONDITIONAL_JUMP)  ; LAB_005648c7
    CMP byte ptr [EBX + 0x31101bf],0x9  ; 005648b7 | g_CurrentLineBuffer
    JNZ 0x005648c7                      ; 005648be
        ;   XREF to: 005648c7 (CONDITIONAL_JUMP)  ; LAB_005648c7
    AND byte ptr [0x0310fd44],0xf8      ; 005648c0 | g_CurrentEditingColumn
    PUSH EBP                            ; 005648c7
        ;   Label: LAB_005648c7
    CALL core_script.cpp_CScript_updateCursorBounds_FUN_00566910 ; 005648c8
        ;   XREF to: 00566910 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_updateCursorBounds_FUN_00566910(CScript * this_ptr)
        ;   Label: LAB_005648c8
    ADD ESP,0x4                         ; 005648cd
    PUSH EBP                            ; 005648d0
    CALL core_script.cpp_CScript_updateScrollPosition_FUN_005669a0 ; 005648d1
        ;   XREF to: 005669a0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_updateScrollPosition_FUN_005669a0(CScript * this_ptr)
    ADD ESP,0x4                         ; 005648d6
    ADD ESP,0x1c                        ; 005648d9
        ;   Label: caseD_b
    POP EBP                             ; 005648dc
    POP EDI                             ; 005648dd
    POP ESI                             ; 005648de
    POP EBX                             ; 005648df
    RET                                 ; 005648e0
    MOV ESI,dword ptr [0x0310fd44]      ; 005648e1 | g_CurrentEditingColumn
        ;   Label: caseD_1
    INC ESI                             ; 005648e7
    PUSH EBP                            ; 005648e8
    MOV dword ptr [0x0310fd44],ESI      ; 005648e9 | g_CurrentEditingColumn
    JMP 0x005648c8                      ; 005648ef
        ;   XREF to: 005648c8 (UNCONDITIONAL_JUMP)  ; LAB_005648c8
    MOV EBX,dword ptr [0x0310fd48]      ; 005648f1 | g_CurrentEditingLine
        ;   Label: caseD_2
    DEC EBX                             ; 005648f7
    PUSH EBP                            ; 005648f8
    MOV dword ptr [0x0310fd48],EBX      ; 005648f9 | g_CurrentEditingLine
    JMP 0x005648c8                      ; 005648ff
        ;   XREF to: 005648c8 (UNCONDITIONAL_JUMP)  ; LAB_005648c8
    MOV ECX,dword ptr [0x0310fd48]      ; 00564901 | g_CurrentEditingLine
        ;   Label: caseD_3
    INC ECX                             ; 00564907
    PUSH EBP                            ; 00564908
    MOV dword ptr [0x0310fd48],ECX      ; 00564909 | g_CurrentEditingLine
    JMP 0x005648c8                      ; 0056490f
        ;   XREF to: 005648c8 (UNCONDITIONAL_JUMP)  ; LAB_005648c8
    MOV EAX,[0x0310fce0]                ; 00564911 | g_ScriptEditorVScrollBar.max_value
        ;   Label: caseD_4
    MOV EDI,dword ptr [0x0310fd48]      ; 00564916 | g_CurrentEditingLine
    MOV EDX,dword ptr [0x0310fcd8]      ; 0056491c | g_ScriptEditorVScrollBar
    PUSH EBP                            ; 00564922
    SUB EDI,EAX                         ; 00564923
    SUB EDX,EAX                         ; 00564925
    MOV dword ptr [0x0310fd48],EDI      ; 00564927 | g_CurrentEditingLine
    MOV dword ptr [0x0310fcd8],EDX      ; 0056492d | g_ScriptEditorVScrollBar
    JMP 0x005648c8                      ; 00564933
        ;   XREF to: 005648c8 (UNCONDITIONAL_JUMP)  ; LAB_005648c8
    MOV EAX,[0x0310fce0]                ; 00564935 | g_ScriptEditorVScrollBar.max_value
        ;   Label: caseD_5
    MOV EBX,dword ptr [0x0310fd48]      ; 0056493a | g_CurrentEditingLine
    MOV ESI,dword ptr [0x0310fcd8]      ; 00564940 | g_ScriptEditorVScrollBar
    PUSH EBP                            ; 00564946
    ADD EBX,EAX                         ; 00564947
    ADD ESI,EAX                         ; 00564949
    MOV dword ptr [0x0310fd48],EBX      ; 0056494b | g_CurrentEditingLine
    MOV dword ptr [0x0310fcd8],ESI      ; 00564951 | g_ScriptEditorVScrollBar
    JMP 0x005648c8                      ; 00564957
        ;   XREF to: 005648c8 (UNCONDITIONAL_JUMP)  ; LAB_005648c8
    XOR ECX,ECX                         ; 0056495c
        ;   Label: caseD_6
    PUSH EBP                            ; 0056495e
    MOV dword ptr [0x0310fd44],ECX      ; 0056495f | g_CurrentEditingColumn
    JMP 0x005648c8                      ; 00564965
        ;   XREF to: 005648c8 (UNCONDITIONAL_JUMP)  ; LAB_005648c8
    CMP dword ptr [0x0310fd48],0x0      ; 0056496a | g_CurrentEditingLine
        ;   Label: caseD_7
    JGE 0x00564980                      ; 00564971
        ;   XREF to: 00564980 (CONDITIONAL_JUMP)  ; LAB_00564980
    XOR EDX,EDX                         ; 00564973
        ;   Label: LAB_00564973
    MOV dword ptr [0x0310fd44],EDX      ; 00564975 | g_CurrentEditingColumn
    JMP 0x005648c7                      ; 0056497b
        ;   XREF to: 005648c7 (UNCONDITIONAL_JUMP)  ; LAB_005648c7
    LEA EBX,[EBP + 0x38]                ; 00564980
        ;   Label: LAB_00564980
    PUSH EBX                            ; 00564983
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00564984
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    MOV ESI,dword ptr [0x0310fd48]      ; 00564989 | g_CurrentEditingLine
    ADD ESP,0x4                         ; 0056498f
    CMP EAX,ESI                         ; 00564992
    JLE 0x00564973                      ; 00564994
        ;   XREF to: 00564973 (CONDITIONAL_JUMP)  ; LAB_00564973
    PUSH ESI                            ; 00564996
    PUSH EBX                            ; 00564997
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00564998
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0056499d
    MOV EDI,EAX                         ; 005649a0
    SUB ECX,ECX                         ; 005649a2
    DEC ECX                             ; 005649a4
    XOR EAX,EAX                         ; 005649a5
    SCASB.REPNE ES:EDI                  ; 005649a7
    NOT ECX                             ; 005649a9
    DEC ECX                             ; 005649ab
    PUSH ECX                            ; 005649ac
    MOV EAX,[0x0310fd48]                ; 005649ad | g_CurrentEditingLine
    PUSH EAX                            ; 005649b2
    PUSH EBP                            ; 005649b3
    CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30 ; 005649b4
        ;   XREF to: 00566b30 (UNCONDITIONAL_CALL)  ; uint core_script.cpp_CScript_editorIndex2X_FUN_00566b30(CScript * this_ptr, int line_number, uint buffer_index)
    ADD ESP,0xc                         ; 005649b9
    MOV [0x0310fd44],EAX                ; 005649bc | g_CurrentEditingColumn
    JMP 0x005648c7                      ; 005649c1
        ;   XREF to: 005648c7 (UNCONDITIONAL_JUMP)  ; LAB_005648c7
    XOR EDX,EDX                         ; 005649c6
        ;   Label: caseD_8
    PUSH EBP                            ; 005649c8
    MOV dword ptr [0x0310fd48],EDX      ; 005649c9 | g_CurrentEditingLine
    MOV dword ptr [0x0310fd44],EDX      ; 005649cf | g_CurrentEditingColumn
    JMP 0x005648c8                      ; 005649d5
        ;   XREF to: 005648c8 (UNCONDITIONAL_JUMP)  ; LAB_005648c8
    LEA EAX,[EBP + 0x38]                ; 005649da
        ;   Label: caseD_9
    PUSH EAX                            ; 005649dd
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 005649de
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    INC EAX                             ; 005649e3
    ADD ESP,0x4                         ; 005649e4
    MOV [0x0310fd48],EAX                ; 005649e7 | g_CurrentEditingLine
    XOR EAX,EAX                         ; 005649ec
    PUSH EBP                            ; 005649ee
    MOV [0x0310fd44],EAX                ; 005649ef | g_CurrentEditingColumn
    JMP 0x005648c8                      ; 005649f4
        ;   XREF to: 005648c8 (UNCONDITIONAL_JUMP)  ; LAB_005648c8
    PUSH 0x0                            ; 005649f9
        ;   Label: caseD_c
    PUSH 0xd                            ; 005649fb
    PUSH EBP                            ; 005649fd
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 005649fe
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_editorAction_FUN_00564820(CScript * this_ptr, EEditorActionType action_type, int action_parm)
    ADD ESP,0xc                         ; 00564a03
    PUSH 0x0                            ; 00564a06
    PUSH 0xf                            ; 00564a08
    PUSH EBP                            ; 00564a0a
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 00564a0b
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_editorAction_FUN_00564820(CScript * this_ptr, EEditorActionType action_type, int action_parm)
    ADD ESP,0xc                         ; 00564a10
    ADD ESP,0x1c                        ; 00564a13
    POP EBP                             ; 00564a16
    POP EDI                             ; 00564a17
    POP ESI                             ; 00564a18
    POP EBX                             ; 00564a19
    RET                                 ; 00564a1a
    CALL core_script.cpp_updateSelection_FUN_00564500 ; 00564a1b
        ;   XREF to: 00564500 (UNCONDITIONAL_CALL)  ; void core_script.cpp_updateSelection_FUN_00564500()
        ;   Label: caseD_d
    MOV EDX,dword ptr [0x031141c4]      ; 00564a20 | g_SelectionStartLine
    TEST EDX,EDX                        ; 00564a26
    JL 0x005648d9                       ; 00564a28
        ;   XREF to: 005648d9 (CONDITIONAL_JUMP)  ; caseD_a
    CMP dword ptr [0x031141c0],0x0      ; 00564a2e | g_SelectionStartColumn
    JL 0x005648d9                       ; 00564a35
        ;   XREF to: 005648d9 (CONDITIONAL_JUMP)  ; caseD_a
    MOV EDI,dword ptr [0x031141cc]      ; 00564a3b | g_SelectionEndLine
    XOR EBX,EBX                         ; 00564a41
    XOR ESI,ESI                         ; 00564a43
    MOV dword ptr [ESP + 0x18],EBX      ; 00564a45
    MOV EBX,EDX                         ; 00564a49
    CMP EDX,EDI                         ; 00564a4b
    JG 0x00564b4e                       ; 00564a4d
        ;   XREF to: 00564b4e (CONDITIONAL_JUMP)  ; LAB_00564b4e
    LEA EAX,[ESP + 0x4]                 ; 00564a53
        ;   Label: LAB_00564a53
    PUSH EAX                            ; 00564a57
    LEA EAX,[ESP + 0x4]                 ; 00564a58
    PUSH EAX                            ; 00564a5c
    PUSH EBX                            ; 00564a5d
    CALL core_script.cpp_getSelectionRangeForLine_FUN_00564560 ; 00564a5e
        ;   XREF to: 00564560 (UNCONDITIONAL_CALL)  ; void core_script.cpp_getSelectionRangeForLine_FUN_00564560(int line, int * sel_start_col_out, int * sel_end_col_out)
    ADD ESP,0xc                         ; 00564a63
    MOV EDI,dword ptr [ESP]             ; 00564a66
    PUSH EDI                            ; 00564a69
    PUSH EBX                            ; 00564a6a
    PUSH EBP                            ; 00564a6b
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00564a6c
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_editorX2Index_FUN_00566a90(CScript * this_ptr, int line_number, int visual_column)
    ADD ESP,0xc                         ; 00564a71
    MOV dword ptr [ESP],EAX             ; 00564a74
    MOV EAX,dword ptr [ESP + 0x4]       ; 00564a77
    PUSH EAX                            ; 00564a7b
    PUSH EBX                            ; 00564a7c
    PUSH EBP                            ; 00564a7d
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00564a7e
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_editorX2Index_FUN_00566a90(CScript * this_ptr, int line_number, int visual_column)
    ADD ESP,0xc                         ; 00564a83
    PUSH EBX                            ; 00564a86
    PUSH EBP                            ; 00564a87
    MOV dword ptr [ESP + 0xc],EAX       ; 00564a88
    CALL core_script.cpp_CScript_loadLineToBuffer_FUN_00566230 ; 00564a8c
        ;   XREF to: 00566230 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_loadLineToBuffer_FUN_00566230(CScript * this_ptr, int line_number)
    ADD ESP,0x8                         ; 00564a91
    MOV EDI,0x31101c0                   ; 00564a94 | g_CurrentLineBuffer
    SUB ECX,ECX                         ; 00564a99
    DEC ECX                             ; 00564a9b
    XOR EAX,EAX                         ; 00564a9c
    SCASB.REPNE ES:EDI                  ; 00564a9e | g_CurrentLineBuffer | DAT_031101c1
    NOT ECX                             ; 00564aa0
    DEC ECX                             ; 00564aa2
    CMP dword ptr [ESP],0x0             ; 00564aa3
    JL 0x00564b97                       ; 00564aa7
        ;   XREF to: 00564b97 (CONDITIONAL_JUMP)  ; LAB_00564b97
    CMP ECX,dword ptr [ESP + 0x4]       ; 00564aad
        ;   Label: LAB_00564aad
    JGE 0x00564ab7                      ; 00564ab1
        ;   XREF to: 00564ab7 (CONDITIONAL_JUMP)  ; LAB_00564ab7
    MOV dword ptr [ESP + 0x4],ECX       ; 00564ab3
    MOV EAX,dword ptr [ESP + 0x4]       ; 00564ab7
        ;   Label: LAB_00564ab7
    MOV EDX,dword ptr [ESP]             ; 00564abb
    ADD EAX,ESI                         ; 00564abe
    PUSH 0x172e                         ; 00564ac0
    SUB EAX,EDX                         ; 00564ac5
    PUSH 0x643da0                       ; 00564ac7 | = "..\\core\\script.cpp"
    INC EAX                             ; 00564acc
    PUSH EAX                            ; 00564acd
    MOV EDI,dword ptr [ESP + 0x24]      ; 00564ace
    PUSH EDI                            ; 00564ad2
    MOV dword ptr [ESP + 0x1c],EAX      ; 00564ad3
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 00564ad7
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 00564adc
    MOV dword ptr [ESP + 0x18],EAX      ; 00564adf
    TEST EAX,EAX                        ; 00564ae3
    JNZ 0x00564b09                      ; 00564ae5
        ;   XREF to: 00564b09 (CONDITIONAL_JUMP)  ; LAB_00564b09
    MOV EAX,0x643db3                    ; 00564ae7 | = "..\\core\\script.cpp"
    MOV EDX,0x172f                      ; 00564aec
    PUSH 0x643dc6                       ; 00564af1 | = "Out of memory!"
    MOV [0x02f0ca48],EAX                ; 00564af6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00564afb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00564b01
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00564b06
    MOV ECX,dword ptr [ESP + 0x4]       ; 00564b09
        ;   Label: LAB_00564b09
    MOV EDI,dword ptr [ESP]             ; 00564b0d
    MOV EAX,0x31101c0                   ; 00564b10 | g_CurrentLineBuffer
    SUB ECX,EDI                         ; 00564b15
    ADD EAX,EDI                         ; 00564b17
    MOV EDI,dword ptr [ESP + 0x18]      ; 00564b19
    ADD EDI,ESI                         ; 00564b1d
    MOV ESI,EAX                         ; 00564b1f
    PUSH EDI                            ; 00564b21
    MOV EAX,ECX                         ; 00564b22
    SHR ECX,0x2                         ; 00564b24
    MOVSD.REP ES:EDI,ESI                ; 00564b27 | g_CurrentLineBuffer | DAT_031101c4
    MOV CL,AL                           ; 00564b29
    AND CL,0x3                          ; 00564b2b
    MOVSB.REP ES:EDI,ESI                ; 00564b2e | g_CurrentLineBuffer | DAT_031101c4 | DAT_031101c5
    POP EDI                             ; 00564b30
    MOV ESI,dword ptr [ESP + 0xc]       ; 00564b31
    MOV EAX,dword ptr [ESP + 0x18]      ; 00564b35
    ADD EAX,ESI                         ; 00564b39
    INC EBX                             ; 00564b3b
    MOV EDI,dword ptr [0x031141cc]      ; 00564b3c | g_SelectionEndLine
    MOV byte ptr [EAX + -0x1],0xa       ; 00564b42
    CMP EBX,EDI                         ; 00564b46
    JLE 0x00564a53                      ; 00564b48
        ;   XREF to: 00564a53 (CONDITIONAL_JUMP)  ; LAB_00564a53
    MOV EBP,dword ptr [ESP + 0x18]      ; 00564b4e
        ;   Label: LAB_00564b4e
    TEST EBP,EBP                        ; 00564b52
    JZ 0x00564b5c                       ; 00564b54
        ;   XREF to: 00564b5c (CONDITIONAL_JUMP)  ; LAB_00564b5c
    ADD ESI,EBP                         ; 00564b56
    MOV byte ptr [ESI + -0x1],0x0       ; 00564b58
    MOV EDX,dword ptr [ESP + 0x18]      ; 00564b5c
        ;   Label: LAB_00564b5c
    PUSH EDX                            ; 00564b60
    MOV ECX,dword ptr [0x00678a60]      ; 00564b61 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 00564b67 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0 ; 00564b68
        ;   XREF to: 004a1bc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0(CEditorTools * this_ptr, char * text_data)
    ADD ESP,0x8                         ; 00564b6d
    MOV EBX,dword ptr [ESP + 0x18]      ; 00564b70
    TEST EBX,EBX                        ; 00564b74
    JZ 0x005648d9                       ; 00564b76
        ;   XREF to: 005648d9 (CONDITIONAL_JUMP)  ; caseD_a
    PUSH 0x173c                         ; 00564b7c
    PUSH 0x643dd5                       ; 00564b81 | = "..\\core\\script.cpp"
    PUSH EBX                            ; 00564b86
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00564b87
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00564b8c
    ADD ESP,0x1c                        ; 00564b8f
    POP EBP                             ; 00564b92
    POP EDI                             ; 00564b93
    POP ESI                             ; 00564b94
    POP EBX                             ; 00564b95
    RET                                 ; 00564b96
    XOR EDI,EDI                         ; 00564b97
        ;   Label: LAB_00564b97
    MOV dword ptr [ESP],EDI             ; 00564b99
    JMP 0x00564aad                      ; 00564b9c
        ;   XREF to: 00564aad (UNCONDITIONAL_JUMP)  ; LAB_00564aad
    PUSH 0x0                            ; 00564ba1
        ;   Label: caseD_e
    PUSH 0xf                            ; 00564ba3
    PUSH EBP                            ; 00564ba5
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 00564ba6
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_editorAction_FUN_00564820(CScript * this_ptr, EEditorActionType action_type, int action_parm)
    ADD ESP,0xc                         ; 00564bab
    PUSH 0x1                            ; 00564bae
    MOV EAX,[0x00678a60]                ; 00564bb0 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 00564bb5 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_getClipboardText_FUN_004a1b30 ; 00564bb6
        ;   XREF to: 004a1b30 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CEditorTools_getClipboardText_FUN_004a1b30(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 00564bbb
    PUSH EAX                            ; 00564bbe
    PUSH EBP                            ; 00564bbf
    CALL core_script.cpp_CScript_insertText_FUN_00566390 ; 00564bc0
        ;   XREF to: 00566390 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_insertText_FUN_00566390(CScript * this_ptr, char * text, int update_cursor)
    ADD ESP,0xc                         ; 00564bc5
    ADD ESP,0x1c                        ; 00564bc8
    POP EBP                             ; 00564bcb
    POP EDI                             ; 00564bcc
    POP ESI                             ; 00564bcd
    POP EBX                             ; 00564bce
    RET                                 ; 00564bcf
    CALL core_script.cpp_updateSelection_FUN_00564500 ; 00564bd0
        ;   XREF to: 00564500 (UNCONDITIONAL_CALL)  ; void core_script.cpp_updateSelection_FUN_00564500()
        ;   Label: caseD_f
    MOV ESI,dword ptr [0x031141c4]      ; 00564bd5 | g_SelectionStartLine
    TEST ESI,ESI                        ; 00564bdb
    JL 0x005648d9                       ; 00564bdd
        ;   XREF to: 005648d9 (CONDITIONAL_JUMP)  ; caseD_a
    MOV EDI,dword ptr [0x031141c0]      ; 00564be3 | g_SelectionStartColumn
    TEST EDI,EDI                        ; 00564be9
    JL 0x005648d9                       ; 00564beb
        ;   XREF to: 005648d9 (CONDITIONAL_JUMP)  ; caseD_a
    PUSH EDI                            ; 00564bf1
    PUSH ESI                            ; 00564bf2
    PUSH EBP                            ; 00564bf3
    MOV dword ptr [0x0310fd48],ESI      ; 00564bf4 | g_CurrentEditingLine
    MOV dword ptr [0x0310fd44],EDI      ; 00564bfa | g_CurrentEditingColumn
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00564c00
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_editorX2Index_FUN_00566a90(CScript * this_ptr, int line_number, int visual_column)
    ADD ESP,0xc                         ; 00564c05
    MOV ECX,dword ptr [0x031141c8]      ; 00564c08 | g_SelectionEndColumn
    PUSH ECX                            ; 00564c0e
    MOV EBX,dword ptr [0x031141cc]      ; 00564c0f | g_SelectionEndLine
    PUSH EBX                            ; 00564c15
    PUSH EBP                            ; 00564c16
    MOV [0x031141c0],EAX                ; 00564c17 | g_SelectionStartColumn
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00564c1c
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_editorX2Index_FUN_00566a90(CScript * this_ptr, int line_number, int visual_column)
    ADD ESP,0xc                         ; 00564c21
    MOV ESI,dword ptr [0x031141c4]      ; 00564c24 | g_SelectionStartLine
    PUSH ESI                            ; 00564c2a
    PUSH EBP                            ; 00564c2b
    MOV [0x031141c8],EAX                ; 00564c2c | g_SelectionEndColumn
    CALL core_script.cpp_CScript_loadLineToBuffer_FUN_00566230 ; 00564c31
        ;   XREF to: 00566230 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_loadLineToBuffer_FUN_00566230(CScript * this_ptr, int line_number)
    ADD ESP,0x8                         ; 00564c36
    MOV EDI,0x31101c0                   ; 00564c39 | g_CurrentLineBuffer
    SUB ECX,ECX                         ; 00564c3e
    DEC ECX                             ; 00564c40
    XOR EAX,EAX                         ; 00564c41
    SCASB.REPNE ES:EDI                  ; 00564c43 | g_CurrentLineBuffer | DAT_031101c1
    NOT ECX                             ; 00564c45
    DEC ECX                             ; 00564c47
    MOV EDI,dword ptr [0x031141c0]      ; 00564c48 | g_SelectionStartColumn
    MOV EAX,ECX                         ; 00564c4e
    CMP ECX,EDI                         ; 00564c50
    JGE 0x00564c70                      ; 00564c52
        ;   XREF to: 00564c70 (CONDITIONAL_JUMP)  ; LAB_00564c70
    MOV DL,0x20                         ; 00564c54
    MOV EBX,dword ptr [0x031141c0]      ; 00564c56 | g_SelectionStartColumn
    INC EAX                             ; 00564c5c
        ;   Label: LAB_00564c5c
    MOV byte ptr [EAX + 0x31101bf],DL   ; 00564c5d | g_CurrentLineBuffer | DAT_031101c1
    CMP EAX,EBX                         ; 00564c63
    JL 0x00564c5c                       ; 00564c65
        ;   XREF to: 00564c5c (CONDITIONAL_JUMP)  ; LAB_00564c5c
    LEA EAX,[EAX]                       ; 00564c67
    LEA EDX,[EDX]                       ; 00564c6d
    LEA ESI,[EBP + 0x38]                ; 00564c70
        ;   Label: LAB_00564c70
    PUSH ESI                            ; 00564c73
    MOV EBX,0x643de8                    ; 00564c74 | s_EmptyChar_00643de8
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00564c79
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    MOV EDI,dword ptr [0x031141cc]      ; 00564c7e | g_SelectionEndLine
    ADD ESP,0x4                         ; 00564c84
    CMP EAX,EDI                         ; 00564c87
    JLE 0x00564c97                      ; 00564c89
        ;   XREF to: 00564c97 (CONDITIONAL_JUMP)  ; LAB_00564c97
    PUSH EDI                            ; 00564c8b
    PUSH ESI                            ; 00564c8c
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00564c8d
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00564c92
    MOV EBX,EAX                         ; 00564c95
    MOV EDI,EBX                         ; 00564c97
        ;   Label: LAB_00564c97
    SUB ECX,ECX                         ; 00564c99
    DEC ECX                             ; 00564c9b
    XOR EAX,EAX                         ; 00564c9c
    SCASB.REPNE ES:EDI                  ; 00564c9e | s_EmptyChar_00643de8
    NOT ECX                             ; 00564ca0
    DEC ECX                             ; 00564ca2
    MOV EDX,dword ptr [0x031141c8]      ; 00564ca3 | g_SelectionEndColumn
    MOV EAX,ECX                         ; 00564ca9
    CMP ECX,EDX                         ; 00564cab
    JGE 0x00564cb5                      ; 00564cad
        ;   XREF to: 00564cb5 (CONDITIONAL_JUMP)  ; LAB_00564cb5
    MOV dword ptr [0x031141c8],ECX      ; 00564caf | g_SelectionEndColumn
    MOV ECX,dword ptr [0x031141c8]      ; 00564cb5 | g_SelectionEndColumn
        ;   Label: LAB_00564cb5
    SUB EAX,ECX                         ; 00564cbb
    INC EAX                             ; 00564cbd
    MOV EDI,dword ptr [0x031141c0]      ; 00564cbe | g_SelectionStartColumn
    PUSH EAX                            ; 00564cc4
    ADD EBX,ECX                         ; 00564cc5
    MOV EAX,0x31101c0                   ; 00564cc7 | g_CurrentLineBuffer
    PUSH EBX                            ; 00564ccc
    ADD EAX,EDI                         ; 00564ccd
    PUSH EAX                            ; 00564ccf
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 00564cd0
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00564cd5
    MOV EAX,[0x031141c4]                ; 00564cd8 | g_SelectionStartLine
    PUSH EAX                            ; 00564cdd
    PUSH EBP                            ; 00564cde
    CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0 ; 00564cdf
        ;   XREF to: 005662a0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_editorPutLine_FUN_005662a0(CScript * this_ptr, int line_number)
    ADD ESP,0x8                         ; 00564ce4
    LEA EBX,[EBP + 0x38]                ; 00564ce7
    PUSH EBX                            ; 00564cea
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00564ceb
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    MOV EDX,dword ptr [0x031141cc]      ; 00564cf0 | g_SelectionEndLine
    ADD ESP,0x4                         ; 00564cf6
    CMP EAX,EDX                         ; 00564cf9
    JG 0x00564d0c                       ; 00564cfb
        ;   XREF to: 00564d0c (CONDITIONAL_JUMP)  ; LAB_00564d0c
    PUSH EBX                            ; 00564cfd
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00564cfe
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    DEC EAX                             ; 00564d03
    ADD ESP,0x4                         ; 00564d04
    MOV [0x031141cc],EAX                ; 00564d07 | g_SelectionEndLine
    MOV ECX,dword ptr [0x031141cc]      ; 00564d0c | g_SelectionEndLine
        ;   Label: LAB_00564d0c
    MOV EAX,[0x031141c4]                ; 00564d12 | g_SelectionStartLine
    CMP EAX,ECX                         ; 00564d17
    JGE 0x00564d2a                      ; 00564d19
        ;   XREF to: 00564d2a (CONDITIONAL_JUMP)  ; LAB_00564d2a
    PUSH ECX                            ; 00564d1b
    INC EAX                             ; 00564d1c
    PUSH EAX                            ; 00564d1d
    LEA EAX,[EBP + 0x38]                ; 00564d1e
    PUSH EAX                            ; 00564d21
    CALL shape_edittool.cpp_CStrList_remove_FUN_004a2e00 ; 00564d22
        ;   XREF to: 004a2e00 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_remove_FUN_004a2e00(CStrList * this_ptr, int start_index, int end_index)
    ADD ESP,0xc                         ; 00564d27
    CALL core_script.cpp_clearSelections_FUN_005644e0 ; 00564d2a
        ;   XREF to: 005644e0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_clearSelections_FUN_005644e0()
        ;   Label: LAB_00564d2a
    JMP 0x005648c7                      ; 00564d2f
        ;   XREF to: 005648c7 (UNCONDITIONAL_JUMP)  ; LAB_005648c7
    MOV ECX,dword ptr [0x0310fd44]      ; 00564d34 | g_CurrentEditingColumn
        ;   Label: caseD_10
    TEST ECX,ECX                        ; 00564d3a
    JG 0x00564e46                       ; 00564d3c
        ;   XREF to: 00564e46 (CONDITIONAL_JUMP)  ; LAB_00564e46
    CMP dword ptr [0x0310fd48],0x0      ; 00564d42 | g_CurrentEditingLine
    JLE 0x005648c7                      ; 00564d49
        ;   XREF to: 005648c7 (CONDITIONAL_JUMP)  ; LAB_005648c7
    LEA EAX,[EBP + 0x38]                ; 00564d4f
    PUSH EAX                            ; 00564d52
    XOR EBX,EBX                         ; 00564d53
    MOV dword ptr [ESP + 0x18],EAX      ; 00564d55
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00564d59
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    MOV EDI,dword ptr [0x0310fd48]      ; 00564d5e | g_CurrentEditingLine
    ADD ESP,0x4                         ; 00564d64
    CMP EAX,EDI                         ; 00564d67
    JL 0x00564e24                       ; 00564d69
        ;   XREF to: 00564e24 (CONDITIONAL_JUMP)  ; LAB_00564e24
    LEA EAX,[EDI + -0x1]                ; 00564d6f
    PUSH EAX                            ; 00564d72
    PUSH EBP                            ; 00564d73
    CALL core_script.cpp_CScript_loadLineToBuffer_FUN_00566230 ; 00564d74
        ;   XREF to: 00566230 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_loadLineToBuffer_FUN_00566230(CScript * this_ptr, int line_number)
    ADD ESP,0x8                         ; 00564d79
    MOV EDI,0x31101c0                   ; 00564d7c | g_CurrentLineBuffer
    SUB ECX,ECX                         ; 00564d81
    DEC ECX                             ; 00564d83
    XOR EAX,EAX                         ; 00564d84
    SCASB.REPNE ES:EDI                  ; 00564d86 | g_CurrentLineBuffer | DAT_031101c1
    NOT ECX                             ; 00564d88
    DEC ECX                             ; 00564d8a
    MOV EAX,dword ptr [ESP + 0x14]      ; 00564d8b
    PUSH EAX                            ; 00564d8f
    MOV ESI,ECX                         ; 00564d90
    MOV EBX,ECX                         ; 00564d92
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00564d94
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    MOV EDX,dword ptr [0x0310fd48]      ; 00564d99 | g_CurrentEditingLine
    ADD ESP,0x4                         ; 00564d9f
    CMP EAX,EDX                         ; 00564da2
    JLE 0x00564e24                      ; 00564da4
        ;   XREF to: 00564e24 (CONDITIONAL_JUMP)  ; LAB_00564e24
    PUSH EDX                            ; 00564daa
    MOV EDI,dword ptr [ESP + 0x18]      ; 00564dab
    PUSH EDI                            ; 00564daf
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00564db0
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00564db5
    MOV EDI,EAX                         ; 00564db8
    MOV dword ptr [ESP + 0x10],EAX      ; 00564dba
    SUB ECX,ECX                         ; 00564dbe
    DEC ECX                             ; 00564dc0
    XOR EAX,EAX                         ; 00564dc1
    SCASB.REPNE ES:EDI                  ; 00564dc3
    NOT ECX                             ; 00564dc5
    DEC ECX                             ; 00564dc7
    MOV EDX,ECX                         ; 00564dc8
    ADD ECX,ESI                         ; 00564dca
    CMP ECX,0x4000                      ; 00564dcc
    JL 0x00564ddc                       ; 00564dd2
        ;   XREF to: 00564ddc (CONDITIONAL_JUMP)  ; LAB_00564ddc
    MOV EDX,0x4000                      ; 00564dd4
    SUB EDX,ESI                         ; 00564dd9
    DEC EDX                             ; 00564ddb
    MOV EDI,0x31101c0                   ; 00564ddc | g_CurrentLineBuffer
        ;   Label: LAB_00564ddc
    MOV ESI,dword ptr [ESP + 0x10]      ; 00564de1
    MOV ECX,EDX                         ; 00564de5
    ADD EDI,EBX                         ; 00564de7
    PUSH EDI                            ; 00564de9 | g_CurrentLineBuffer
    MOV EAX,ECX                         ; 00564dea
    SHR ECX,0x2                         ; 00564dec
    MOVSD.REP ES:EDI,ESI                ; 00564def | g_CurrentLineBuffer
    MOV CL,AL                           ; 00564df1
    AND CL,0x3                          ; 00564df3
    MOVSB.REP ES:EDI,ESI                ; 00564df6 | g_CurrentLineBuffer | DAT_031101c1
    POP EDI                             ; 00564df8
    XOR AH,AH                           ; 00564df9
    MOV byte ptr [EDX + EBX*0x1 + 0x31101c0],AH ; 00564dfb | g_CurrentLineBuffer
    MOV EAX,[0x0310fd48]                ; 00564e02 | g_CurrentEditingLine
    DEC EAX                             ; 00564e07
    PUSH EAX                            ; 00564e08
    PUSH EBP                            ; 00564e09
    CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0 ; 00564e0a
        ;   XREF to: 005662a0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_editorPutLine_FUN_005662a0(CScript * this_ptr, int line_number)
    ADD ESP,0x8                         ; 00564e0f
    MOV EAX,[0x0310fd48]                ; 00564e12 | g_CurrentEditingLine
    PUSH EAX                            ; 00564e17
    LEA EAX,[EBP + 0x38]                ; 00564e18
    PUSH EAX                            ; 00564e1b
    CALL shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0 ; 00564e1c
        ;   XREF to: 004a2de0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00564e21
    MOV EDX,dword ptr [0x0310fd48]      ; 00564e24 | g_CurrentEditingLine
        ;   Label: LAB_00564e24
    PUSH EBX                            ; 00564e2a
    DEC EDX                             ; 00564e2b
    PUSH EDX                            ; 00564e2c
    PUSH EBP                            ; 00564e2d
    MOV dword ptr [0x0310fd48],EDX      ; 00564e2e | g_CurrentEditingLine
    CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30 ; 00564e34
        ;   XREF to: 00566b30 (UNCONDITIONAL_CALL)  ; uint core_script.cpp_CScript_editorIndex2X_FUN_00566b30(CScript * this_ptr, int line_number, uint buffer_index)
    ADD ESP,0xc                         ; 00564e39
    MOV [0x0310fd44],EAX                ; 00564e3c | g_CurrentEditingColumn
    JMP 0x005648c7                      ; 00564e41
        ;   XREF to: 005648c7 (UNCONDITIONAL_JUMP)  ; LAB_005648c7
    PUSH ECX                            ; 00564e46
        ;   Label: LAB_00564e46
    MOV ESI,dword ptr [0x0310fd48]      ; 00564e47 | g_CurrentEditingLine
    PUSH ESI                            ; 00564e4d
    PUSH EBP                            ; 00564e4e
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00564e4f
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_editorX2Index_FUN_00566a90(CScript * this_ptr, int line_number, int visual_column)
    ADD ESP,0xc                         ; 00564e54
    MOV EBX,EAX                         ; 00564e57
    CMP EAX,0x1                         ; 00564e59
    JGE 0x00564e80                      ; 00564e5c
        ;   XREF to: 00564e80 (CONDITIONAL_JUMP)  ; LAB_00564e80
    MOV EDI,0x643de9                    ; 00564e5e | = "..\\core\\script.cpp"
    MOV EAX,0x177c                      ; 00564e63
    PUSH 0x643dfc                       ; 00564e68 | = "Hell froze"
    MOV dword ptr [0x02f0ca48],EDI      ; 00564e6d | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00564e73 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00564e78
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00564e7d
    MOV EDX,dword ptr [0x0310fd48]      ; 00564e80 | g_CurrentEditingLine
        ;   Label: LAB_00564e80
    PUSH EDX                            ; 00564e86
    PUSH EBP                            ; 00564e87
    CALL core_script.cpp_CScript_loadLineToBuffer_FUN_00566230 ; 00564e88
        ;   XREF to: 00566230 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_loadLineToBuffer_FUN_00566230(CScript * this_ptr, int line_number)
    ADD ESP,0x8                         ; 00564e8d
    MOV EDI,0x31101c0                   ; 00564e90 | g_CurrentLineBuffer
    DEC EBX                             ; 00564e95
    SUB ECX,ECX                         ; 00564e96
    DEC ECX                             ; 00564e98
    XOR EAX,EAX                         ; 00564e99
    SCASB.REPNE ES:EDI                  ; 00564e9b | g_CurrentLineBuffer | DAT_031101c1
    NOT ECX                             ; 00564e9d
    DEC ECX                             ; 00564e9f
    CMP EBX,ECX                         ; 00564ea0
    JGE 0x00564ed0                      ; 00564ea2
        ;   XREF to: 00564ed0 (CONDITIONAL_JUMP)  ; LAB_00564ed0
    SUB ECX,EBX                         ; 00564ea4
    LEA EAX,[EBX + 0x1]                 ; 00564ea6
    PUSH ECX                            ; 00564ea9
    ADD EAX,0x31101c0                   ; 00564eaa | g_CurrentLineBuffer
    PUSH EAX                            ; 00564eaf
    MOV EAX,0x31101c0                   ; 00564eb0 | g_CurrentLineBuffer
    ADD EAX,EBX                         ; 00564eb5
    PUSH EAX                            ; 00564eb7
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 00564eb8
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00564ebd
    MOV ECX,dword ptr [0x0310fd48]      ; 00564ec0 | g_CurrentEditingLine
    PUSH ECX                            ; 00564ec6
    PUSH EBP                            ; 00564ec7
    CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0 ; 00564ec8
        ;   XREF to: 005662a0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_editorPutLine_FUN_005662a0(CScript * this_ptr, int line_number)
    ADD ESP,0x8                         ; 00564ecd
    PUSH EBX                            ; 00564ed0
        ;   Label: LAB_00564ed0
    MOV EBX,dword ptr [0x0310fd48]      ; 00564ed1 | g_CurrentEditingLine
    PUSH EBX                            ; 00564ed7
    PUSH EBP                            ; 00564ed8
    CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30 ; 00564ed9
        ;   XREF to: 00566b30 (UNCONDITIONAL_CALL)  ; uint core_script.cpp_CScript_editorIndex2X_FUN_00566b30(CScript * this_ptr, int line_number, uint buffer_index)
    ADD ESP,0xc                         ; 00564ede
    MOV [0x0310fd44],EAX                ; 00564ee1 | g_CurrentEditingColumn
    JMP 0x005648c7                      ; 00564ee6
        ;   XREF to: 005648c7 (UNCONDITIONAL_JUMP)  ; LAB_005648c7
    LEA EAX,[EBP + 0x38]                ; 00564eeb
        ;   Label: caseD_11
    PUSH EAX                            ; 00564eee
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00564eef
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    MOV EDX,dword ptr [0x0310fd48]      ; 00564ef4 | g_CurrentEditingLine
    ADD ESP,0x4                         ; 00564efa
    CMP EAX,EDX                         ; 00564efd
    JLE 0x005648d9                      ; 00564eff
        ;   XREF to: 005648d9 (CONDITIONAL_JUMP)  ; caseD_a
    PUSH EDX                            ; 00564f05
    PUSH EBP                            ; 00564f06
    CALL core_script.cpp_CScript_loadLineToBuffer_FUN_00566230 ; 00564f07
        ;   XREF to: 00566230 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_loadLineToBuffer_FUN_00566230(CScript * this_ptr, int line_number)
    ADD ESP,0x8                         ; 00564f0c
    MOV EDI,0x31101c0                   ; 00564f0f | g_CurrentLineBuffer
    SUB ECX,ECX                         ; 00564f14
    DEC ECX                             ; 00564f16
    XOR EAX,EAX                         ; 00564f17
    SCASB.REPNE ES:EDI                  ; 00564f19 | g_CurrentLineBuffer | DAT_031101c1
    NOT ECX                             ; 00564f1b
    DEC ECX                             ; 00564f1d
    MOV ESI,dword ptr [0x0310fd44]      ; 00564f1e | g_CurrentEditingColumn
    PUSH ESI                            ; 00564f24
    MOV EAX,[0x0310fd48]                ; 00564f25 | g_CurrentEditingLine
    PUSH EAX                            ; 00564f2a
    PUSH EBP                            ; 00564f2b
    MOV EBX,ECX                         ; 00564f2c
    MOV EDI,ECX                         ; 00564f2e
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00564f30
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_editorX2Index_FUN_00566a90(CScript * this_ptr, int line_number, int visual_column)
    MOV ECX,EAX                         ; 00564f35
    ADD ESP,0xc                         ; 00564f37
    CMP EAX,EBX                         ; 00564f3a
    JL 0x00564fe6                       ; 00564f3c
        ;   XREF to: 00564fe6 (CONDITIONAL_JUMP)  ; LAB_00564fe6
    MOV CH,0x20                         ; 00564f42
    CMP EDI,EAX                         ; 00564f44
        ;   Label: LAB_00564f44
    JGE 0x00564f51                      ; 00564f46
        ;   XREF to: 00564f51 (CONDITIONAL_JUMP)  ; LAB_00564f51
    INC EDI                             ; 00564f48
    MOV byte ptr [EDI + 0x31101bf],CH   ; 00564f49 | g_CurrentLineBuffer | DAT_031101c1
    JMP 0x00564f44                      ; 00564f4f
        ;   XREF to: 00564f44 (UNCONDITIONAL_JUMP)  ; LAB_00564f44
    MOV EAX,[0x0310fd48]                ; 00564f51 | g_CurrentEditingLine
        ;   Label: LAB_00564f51
    LEA EBX,[EBP + 0x38]                ; 00564f56
    INC EAX                             ; 00564f59
    PUSH EBX                            ; 00564f5a
    MOV dword ptr [ESP + 0xc],EAX       ; 00564f5b
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00564f5f
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00564f64
    MOV EDX,dword ptr [ESP + 0x8]       ; 00564f67
    MOV ESI,0x643e07                    ; 00564f6b | s_EmptyChar_00643e07
    CMP EAX,EDX                         ; 00564f70
    JLE 0x00564f86                      ; 00564f72
        ;   XREF to: 00564f86 (CONDITIONAL_JUMP)  ; LAB_00564f86
    MOV EAX,[0x0310fd48]                ; 00564f74 | g_CurrentEditingLine
    INC EAX                             ; 00564f79
    PUSH EAX                            ; 00564f7a
    PUSH EBX                            ; 00564f7b
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00564f7c
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00564f81
    MOV ESI,EAX                         ; 00564f84
    ADD EDI,0x31101c0                   ; 00564f86 | g_CurrentLineBuffer
        ;   Label: LAB_00564f86
    PUSH EDI                            ; 00564f8c | g_CurrentLineBuffer | DAT_031101c1
    MOV AL,byte ptr [ESI]               ; 00564f8d | s_EmptyChar_00643e07
        ;   Label: LAB_00564f8d
    MOV byte ptr [EDI],AL               ; 00564f8f | g_CurrentLineBuffer | DAT_031101c1 | DAT_031101c3
    CMP AL,0x0                          ; 00564f91
    JZ 0x00564fa5                       ; 00564f93
        ;   XREF to: 00564fa5 (CONDITIONAL_JUMP)  ; LAB_00564fa5
    MOV AL,byte ptr [ESI + 0x1]         ; 00564f95 | s_EmptyChar_00643e08
    ADD ESI,0x2                         ; 00564f98
    MOV byte ptr [EDI + 0x1],AL         ; 00564f9b | DAT_031101c2 | DAT_031101c4
    ADD EDI,0x2                         ; 00564f9e
    CMP AL,0x0                          ; 00564fa1
    JNZ 0x00564f8d                      ; 00564fa3
        ;   XREF to: 00564f8d (CONDITIONAL_JUMP)  ; LAB_00564f8d
    POP EDI                             ; 00564fa5
        ;   Label: LAB_00564fa5
    MOV ECX,dword ptr [0x0310fd48]      ; 00564fa6 | g_CurrentEditingLine
    PUSH ECX                            ; 00564fac
    PUSH EBP                            ; 00564fad
    CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0 ; 00564fae
        ;   XREF to: 005662a0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_editorPutLine_FUN_005662a0(CScript * this_ptr, int line_number)
    ADD ESP,0x8                         ; 00564fb3
    LEA EBX,[EBP + 0x38]                ; 00564fb6
    MOV ESI,dword ptr [0x0310fd48]      ; 00564fb9 | g_CurrentEditingLine
    PUSH EBX                            ; 00564fbf
    INC ESI                             ; 00564fc0
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00564fc1
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00564fc6
    CMP ESI,EAX                         ; 00564fc9
    JGE 0x005648c7                      ; 00564fcb
        ;   XREF to: 005648c7 (CONDITIONAL_JUMP)  ; LAB_005648c7
    MOV EAX,[0x0310fd48]                ; 00564fd1 | g_CurrentEditingLine
    INC EAX                             ; 00564fd6
    PUSH EAX                            ; 00564fd7
    PUSH EBX                            ; 00564fd8
    CALL shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0 ; 00564fd9
        ;   XREF to: 004a2de0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00564fde
    JMP 0x005648c7                      ; 00564fe1
        ;   XREF to: 005648c7 (UNCONDITIONAL_JUMP)  ; LAB_005648c7
    SUB EBX,EAX                         ; 00564fe6
        ;   Label: LAB_00564fe6
    INC EAX                             ; 00564fe8
    PUSH EBX                            ; 00564fe9
    ADD EAX,0x31101c0                   ; 00564fea | g_CurrentLineBuffer
    PUSH EAX                            ; 00564fef
    ADD ECX,0x31101c0                   ; 00564ff0 | g_CurrentLineBuffer
    PUSH ECX                            ; 00564ff6
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 00564ff7
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00564ffc
    MOV EDX,dword ptr [0x0310fd48]      ; 00564fff | g_CurrentEditingLine
    PUSH EDX                            ; 00565005
    PUSH EBP                            ; 00565006
    CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0 ; 00565007
        ;   XREF to: 005662a0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_editorPutLine_FUN_005662a0(CScript * this_ptr, int line_number)
    ADD ESP,0x8                         ; 0056500c
    JMP 0x005648c7                      ; 0056500f
        ;   XREF to: 005648c7 (UNCONDITIONAL_JUMP)  ; LAB_005648c7
    MOV ESI,dword ptr [0x0068105c]      ; 00565014 | g_AutoIndentEnabled
        ;   Label: caseD_12
    TEST ESI,ESI                        ; 0056501a
    JNZ 0x00565039                      ; 0056501c
        ;   XREF to: 00565039 (CONDITIONAL_JUMP)  ; LAB_00565039
    CALL core_script.cpp_clearSelections_FUN_005644e0 ; 0056501e
        ;   XREF to: 005644e0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_clearSelections_FUN_005644e0()
    MOV EAX,[0x0310fd48]                ; 00565023 | g_CurrentEditingLine
    INC EAX                             ; 00565028
    MOV dword ptr [0x0310fd44],ESI      ; 00565029 | g_CurrentEditingColumn
    MOV [0x0310fd48],EAX                ; 0056502f | g_CurrentEditingLine
    JMP 0x005648c7                      ; 00565034
        ;   XREF to: 005648c7 (UNCONDITIONAL_JUMP)  ; LAB_005648c7
    PUSH 0x0                            ; 00565039
        ;   Label: LAB_00565039
    PUSH 0xf                            ; 0056503b
    PUSH EBP                            ; 0056503d
    CALL core_script.cpp_CScript_editorAction_FUN_00564820 ; 0056503e
        ;   XREF to: 00564820 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_editorAction_FUN_00564820(CScript * this_ptr, EEditorActionType action_type, int action_parm)
    ADD ESP,0xc                         ; 00565043
    LEA EDI,[EBP + 0x38]                ; 00565046
    PUSH EDI                            ; 00565049
        ;   Label: LAB_00565049
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 0056504a
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    MOV EDX,dword ptr [0x0310fd48]      ; 0056504f | g_CurrentEditingLine
    ADD ESP,0x4                         ; 00565055
    CMP EAX,EDX                         ; 00565058
    JG 0x0056506c                       ; 0056505a
        ;   XREF to: 0056506c (CONDITIONAL_JUMP)  ; LAB_0056506c
    PUSH 0x643e08                       ; 0056505c | s_EmptyChar_00643e08
    PUSH EDI                            ; 00565061
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00565062
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00565067
    JMP 0x00565049                      ; 0056506a
        ;   XREF to: 00565049 (UNCONDITIONAL_JUMP)  ; LAB_00565049
    PUSH EDX                            ; 0056506c
        ;   Label: LAB_0056506c
    PUSH EBP                            ; 0056506d
    CALL core_script.cpp_CScript_loadLineToBuffer_FUN_00566230 ; 0056506e
        ;   XREF to: 00566230 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_loadLineToBuffer_FUN_00566230(CScript * this_ptr, int line_number)
    ADD ESP,0x8                         ; 00565073
    MOV EDI,0x31101c0                   ; 00565076 | g_CurrentLineBuffer
    SUB ECX,ECX                         ; 0056507b
    DEC ECX                             ; 0056507d
    XOR EAX,EAX                         ; 0056507e
    SCASB.REPNE ES:EDI                  ; 00565080 | g_CurrentLineBuffer | DAT_031101c1
    NOT ECX                             ; 00565082
    DEC ECX                             ; 00565084
    MOV EBX,dword ptr [0x0310fd44]      ; 00565085 | g_CurrentEditingColumn
    PUSH EBX                            ; 0056508b
    MOV EDI,dword ptr [0x0310fd48]      ; 0056508c | g_CurrentEditingLine
    PUSH EDI                            ; 00565092
    PUSH EBP                            ; 00565093
    MOV ESI,ECX                         ; 00565094
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00565096
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_editorX2Index_FUN_00566a90(CScript * this_ptr, int line_number, int visual_column)
    ADD ESP,0xc                         ; 0056509b
    MOV EBX,EAX                         ; 0056509e
    CMP EAX,ESI                         ; 005650a0
    JLE 0x005650a6                      ; 005650a2
        ;   XREF to: 005650a6 (CONDITIONAL_JUMP)  ; LAB_005650a6
    MOV EBX,ESI                         ; 005650a4
    MOV EAX,0x31101c0                   ; 005650a6 | g_CurrentLineBuffer
        ;   Label: LAB_005650a6
    ADD EAX,EBX                         ; 005650ab
    PUSH EAX                            ; 005650ad | g_CurrentLineBuffer
    MOV EAX,[0x0310fd48]                ; 005650ae | g_CurrentEditingLine
    INC EAX                             ; 005650b3
    PUSH EAX                            ; 005650b4
    LEA EAX,[EBP + 0x38]                ; 005650b5
    PUSH EAX                            ; 005650b8
    CALL shape_edittool.cpp_CStrList_insert_FUN_004a2bc0 ; 005650b9
        ;   XREF to: 004a2bc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_insert_FUN_004a2bc0(CStrList * this_ptr, int insert_index, char * string_data)
    ADD ESP,0xc                         ; 005650be
    MOV EAX,[0x0310fd48]                ; 005650c1 | g_CurrentEditingLine
    PUSH EAX                            ; 005650c6
    XOR CL,CL                           ; 005650c7
    PUSH EBP                            ; 005650c9
    MOV byte ptr [EBX + 0x31101c0],CL   ; 005650ca | g_CurrentLineBuffer
    CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0 ; 005650d0
        ;   XREF to: 005662a0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_editorPutLine_FUN_005662a0(CScript * this_ptr, int line_number)
    MOV ECX,dword ptr [0x0310fd48]      ; 005650d5 | g_CurrentEditingLine
    ADD ESP,0x8                         ; 005650db
    XOR EDX,EDX                         ; 005650de
    INC ECX                             ; 005650e0
    MOV dword ptr [0x0310fd44],EDX      ; 005650e1 | g_CurrentEditingColumn
    MOV dword ptr [0x0310fd48],ECX      ; 005650e7 | g_CurrentEditingLine
    JMP 0x005648c7                      ; 005650ed
        ;   XREF to: 005648c7 (UNCONDITIONAL_JUMP)  ; LAB_005648c7
    MOV EBX,dword ptr [ESP + 0x38]      ; 005650f2
        ;   Label: default
    PUSH EBX                            ; 005650f6
    PUSH EAX                            ; 005650f7
    MOV EDX,0x643e09                    ; 005650f8 | = "..\\core\\script.cpp"
    MOV ECX,0x180d                      ; 005650fd
    PUSH 0x643e1c                       ; 00565102 | = "CScript::editorAction - unknown actio..."
    MOV dword ptr [0x02f0ca48],EDX      ; 00565107 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0056510d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00565113
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 00565118
    ADD ESP,0x1c                        ; 0056511b
    POP EBP                             ; 0056511e
    POP EDI                             ; 0056511f
    POP ESI                             ; 00565120
    POP EBX                             ; 00565121
    RET                                 ; 00565122

