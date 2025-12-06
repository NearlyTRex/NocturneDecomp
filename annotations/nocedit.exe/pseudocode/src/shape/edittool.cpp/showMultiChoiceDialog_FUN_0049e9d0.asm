; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0(CStrList * str_list, char * dialog_title, int dialog_mode)
;
; Parameters:
; CStrList *       Stack[0x4]:4   str_list
; char *           Stack[0x8]:4   dialog_title
; int              Stack[0xc]:4   dialog_mode
; Local Variables:
; undefined1       Stack[-0x150]:1  local_150
; undefined1       Stack[-0x14f]:1  local_14f
; undefined1       Stack[-0x14d]:1  local_14d
; undefined1       Stack[-0x14c]:1  local_14c
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 at 0049f0c4
;   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f180 at 0049f208
;   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 at 0049f154
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00622eae
;   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
;   TerminatedCString s_shape_edittool_cpp_0062301e
;   TerminatedCString s_Cancel_00623034
;   TerminatedCString s_Cancel_0062303b
;   TerminatedCString s_shape_edittool_cpp_00623042
;   WatcomTypeInfo g_CEdButtonTypeInfo
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_InputKeyMask = 0x7f
;   CKeys* g_CKeysPtr = 02dcd7d4
;   char* g_CurrentDebugFilename = 0067d200
;   CBitFont* g_EditorFont
;   CEditorTools g_CEditorToolsPtr
;   ... and 11 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_memory.c_constructTypedObjectArray_FUN_00601272
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
;   shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
;   shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
;   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
;   shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590
;   shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e9d0
        ;   Label: shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0
    PUSH ESI                            ; 0049e9d1
    PUSH EBP                            ; 0049e9d2
    SUB ESP,0x144                       ; 0049e9d3
    CMP dword ptr [0x02cf1cd0],0x0      ; 0049e9d9 | CBitFont * g_EditorFont
    JNZ 0x0049ea05                      ; 0049e9e0 | LAB_0049ea05
        ;   XREF to: 0049ea05 (CONDITIONAL_JUMP)
    MOV ECX,0x622eae                    ; 0049e9e2 | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_00622eae = ..\shape\edittool.cpp
    MOV EBX,0x8d                        ; 0049e9e7
    PUSH 0x622ec4                       ; 0049e9ec | = "gEdFont must be set by the application." | s_gEdFont_must_be_set_by_t_00622ec4 = gEdFont must be set by the application.
    MOV dword ptr [0x02f0ca48],ECX      ; 0049e9f1 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0049e9f7 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0049e9fd | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0049ea02
    MOV EAX,[0x02cf1cd0]                ; 0049ea05 | CBitFont * g_EditorFont
        ;   Label: LAB_0049ea05
    PUSH 0x6a                           ; 0049ea0a
    MOV EDX,dword ptr [EAX + 0x3168]    ; 0049ea0c
    PUSH EAX                            ; 0049ea12
    MOV dword ptr [0x02cf2668],EDX      ; 0049ea13 | int g_FontCharacterHeight
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 0049ea19 | int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0049ea1e
    MOV ESI,dword ptr [ESP + 0x158]     ; 0049ea21
    MOV [0x02cf266c],EAX                ; 0049ea28 | int g_FontCharacterWidth
    TEST ESI,ESI                        ; 0049ea2d
    JZ 0x0049ee8e                       ; 0049ea2f | LAB_0049ee8e
        ;   XREF to: 0049ee8e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI]             ; 0049ea35
    CMP EAX,0x1                         ; 0049ea37
    JL 0x0049ee8e                       ; 0049ea3a | LAB_0049ee8e
        ;   XREF to: 0049ee8e (CONDITIONAL_JUMP)
    PUSH 0x65d4d0                       ; 0049ea40 | WatcomTypeInfo g_CEdButtonTypeInfo
    MOV EBP,EAX                         ; 0049ea45
    PUSH EAX                            ; 0049ea47
    SHL EAX,0x3                         ; 0049ea48
    SUB EAX,EBP                         ; 0049ea4b
    SHL EAX,0x3                         ; 0049ea4d
    ADD EAX,EBP                         ; 0049ea50
    PUSH 0x412                          ; 0049ea52
    SHL EAX,0x2                         ; 0049ea57
    PUSH 0x62301e                       ; 0049ea5a | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_0062301e = ..\shape\edittool.cpp
    ADD EAX,0x4                         ; 0049ea5f
    PUSH EAX                            ; 0049ea62
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 0049ea63 | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0049ea68
    PUSH EAX                            ; 0049ea6b
    CALL crt_memory.c_constructTypedObjectArray_FUN_00601272 ; 0049ea6c | void * crt_memory.c_constructTypedObjectArray_FUN_00601272(void * array_memory, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 00601272 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0049ea71
    TEST EAX,EAX                        ; 0049ea74
    PUSH EDI                            ; 0049ea76
    MOV dword ptr [ESP + 0x13c],EAX     ; 0049ea77
    XOR EDI,EDI                         ; 0049ea7e
    XOR EBX,EBX                         ; 0049ea80
    MOV dword ptr [ESP + 0x10c],EDI     ; 0049ea82
    TEST EBP,EBP                        ; 0049ea89
    JLE 0x0049eb64                      ; 0049ea8b | LAB_0049eb64
        ;   XREF to: 0049eb64 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x118],EAX     ; 0049ea91
    PUSH EBX                            ; 0049ea98
        ;   Label: LAB_0049ea98
    MOV ECX,dword ptr [ESP + 0x160]     ; 0049ea99
    PUSH ECX                            ; 0049eaa0
    LEA EDI,[ESP + 0xc]                 ; 0049eaa1
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0049eaa5 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0049eaaa
    MOV ESI,EAX                         ; 0049eaad
    MOV DL,0x5e                         ; 0049eaaf
    PUSH EDI                            ; 0049eab1
    MOV AL,byte ptr [ESI]               ; 0049eab2
        ;   Label: LAB_0049eab2
    MOV byte ptr [EDI],AL               ; 0049eab4
    CMP AL,0x0                          ; 0049eab6
    JZ 0x0049eaca                       ; 0049eab8 | LAB_0049eaca
        ;   XREF to: 0049eaca (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0049eaba
    ADD ESI,0x2                         ; 0049eabd
    MOV byte ptr [EDI + 0x1],AL         ; 0049eac0
    ADD EDI,0x2                         ; 0049eac3
    CMP AL,0x0                          ; 0049eac6
    JNZ 0x0049eab2                      ; 0049eac8 | LAB_0049eab2
        ;   XREF to: 0049eab2 (CONDITIONAL_JUMP)
    POP EDI                             ; 0049eaca
        ;   Label: LAB_0049eaca
    LEA ESI,[ESP + 0x4]                 ; 0049eacb
    MOV AL,byte ptr [ESI]               ; 0049eacf
        ;   Label: LAB_0049eacf
    CMP AL,DL                           ; 0049ead1
    JZ 0x0049eae7                       ; 0049ead3 | LAB_0049eae7
        ;   XREF to: 0049eae7 (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 0049ead5
    JZ 0x0049eae5                       ; 0049ead7 | LAB_0049eae5
        ;   XREF to: 0049eae5 (CONDITIONAL_JUMP)
    INC ESI                             ; 0049ead9
    MOV AL,byte ptr [ESI]               ; 0049eada
    CMP AL,DL                           ; 0049eadc
    JZ 0x0049eae7                       ; 0049eade | LAB_0049eae7
        ;   XREF to: 0049eae7 (CONDITIONAL_JUMP)
    INC ESI                             ; 0049eae0
    CMP AL,0x0                          ; 0049eae1
    JNZ 0x0049eacf                      ; 0049eae3 | LAB_0049eacf
        ;   XREF to: 0049eacf (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 0049eae5
        ;   Label: LAB_0049eae5
    MOV EDI,ESI                         ; 0049eae7
        ;   Label: LAB_0049eae7
    TEST ESI,ESI                        ; 0049eae9
    JZ 0x0049eb2b                       ; 0049eaeb | LAB_0049eb2b
        ;   XREF to: 0049eb2b (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x118]     ; 0049eaed
    MOV AL,byte ptr [ESI + 0x1]         ; 0049eaf4
    INC ESI                             ; 0049eaf7
    MOV byte ptr [EDX + 0x4],AL         ; 0049eaf8
    PUSH EDI                            ; 0049eafb
    MOV AL,byte ptr [ESI]               ; 0049eafc
        ;   Label: LAB_0049eafc
    MOV byte ptr [EDI],AL               ; 0049eafe
    CMP AL,0x0                          ; 0049eb00
    JZ 0x0049eb14                       ; 0049eb02 | LAB_0049eb14
        ;   XREF to: 0049eb14 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0049eb04
    ADD ESI,0x2                         ; 0049eb07
    MOV byte ptr [EDI + 0x1],AL         ; 0049eb0a
    ADD EDI,0x2                         ; 0049eb0d
    CMP AL,0x0                          ; 0049eb10
    JNZ 0x0049eafc                      ; 0049eb12 | LAB_0049eafc
        ;   XREF to: 0049eafc (CONDITIONAL_JUMP)
    POP EDI                             ; 0049eb14
        ;   Label: LAB_0049eb14
    LEA EAX,[ESP + 0x4]                 ; 0049eb15
    PUSH EAX                            ; 0049eb19
    PUSH EBX                            ; 0049eb1a
    MOV ESI,dword ptr [ESP + 0x164]     ; 0049eb1b
    PUSH ESI                            ; 0049eb22
    CALL shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120 ; 0049eb23 | void shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120(CStrList * this_ptr, int index, char * new_string)
        ;   XREF to: 004a3120 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0049eb28
    LEA EAX,[ESP + 0x4]                 ; 0049eb2b
        ;   Label: LAB_0049eb2b
    PUSH EAX                            ; 0049eb2f
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0 ; 0049eb30 | int shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0(char * button_text)
        ;   XREF to: 004a68e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0049eb35
    CMP EAX,dword ptr [ESP + 0x10c]     ; 0049eb38
    JLE 0x0049eb48                      ; 0049eb3f | LAB_0049eb48
        ;   XREF to: 0049eb48 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x10c],EAX     ; 0049eb41
    MOV EAX,dword ptr [ESP + 0x118]     ; 0049eb48
        ;   Label: LAB_0049eb48
    ADD EAX,0xe4                        ; 0049eb4f
    INC EBX                             ; 0049eb54
    MOV dword ptr [ESP + 0x118],EAX     ; 0049eb55
    CMP EBX,EBP                         ; 0049eb5c
    JL 0x0049ea98                       ; 0049eb5e | LAB_0049ea98
        ;   XREF to: 0049ea98 (CONDITIONAL_JUMP)
    PUSH 0x623034                       ; 0049eb64 | = "Cancel" | s_Cancel_00623034 = Cancel
        ;   Label: LAB_0049eb64
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0 ; 0049eb69 | int shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0(char * button_text)
        ;   XREF to: 004a68e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0049eb6e
    CMP EAX,dword ptr [ESP + 0x10c]     ; 0049eb71
    JLE 0x0049eb8e                      ; 0049eb78 | LAB_0049eb8e
        ;   XREF to: 0049eb8e (CONDITIONAL_JUMP)
    PUSH 0x62303b                       ; 0049eb7a | = "Cancel" | s_Cancel_0062303b = Cancel
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0 ; 0049eb7f | int shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0(char * button_text)
        ;   XREF to: 004a68e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0049eb84
    MOV dword ptr [ESP + 0x10c],EAX     ; 0049eb87
    MOV EAX,[0x00679394]                ; 0049eb8e | int g_WindowWidth
        ;   Label: LAB_0049eb8e
    MOV EDX,EAX                         ; 0049eb93
    SAR EDX,0x1f                        ; 0049eb95
    SHL EDX,0x7                         ; 0049eb98
    SBB EAX,EDX                         ; 0049eb9b
    SAR EAX,0x7                         ; 0049eb9d
    MOV ESI,EAX                         ; 0049eba0
    MOV EAX,[0x00679398]                ; 0049eba2 | int g_WindowHeight
    MOV EDX,EAX                         ; 0049eba7
    MOV EBX,0x60                        ; 0049eba9
    SAR EDX,0x1f                        ; 0049ebae
    IDIV EBX                            ; 0049ebb1
    MOV ECX,dword ptr [ESP + 0x160]     ; 0049ebb3
    MOV dword ptr [ESP + 0x114],EAX     ; 0049ebba
    LEA EAX,[EBP + -0x1]                ; 0049ebc1
    TEST ECX,ECX                        ; 0049ebc4
    JNZ 0x0049ee9d                      ; 0049ebc6 | LAB_0049ee9d
        ;   XREF to: 0049ee9d (CONDITIONAL_JUMP)
    LEA EDX,[ESI + -0x2]                ; 0049ebcc
    IMUL EAX,EDX                        ; 0049ebcf
    MOV EDX,dword ptr [ESP + 0x10c]     ; 0049ebd2
    IMUL EDX,EBP                        ; 0049ebd9
    ADD EAX,EDX                         ; 0049ebdc
    PUSH ECX                            ; 0049ebde
    LEA EBX,[EAX + 0x1]                 ; 0049ebdf
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970 ; 0049ebe2 | int shape_edittool.cpp_calculateButtonHeight_FUN_004a6970(char * button_text)
        ;   XREF to: 004a6970 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0049ebe7
    LEA EDI,[EAX + -0x1]                ; 0049ebea
    MOV EAX,dword ptr [ESP + 0x158]     ; 0049ebed
        ;   Label: LAB_0049ebed
    PUSH EAX                            ; 0049ebf4
    MOV EDX,dword ptr [0x02cf1cd0]      ; 0049ebf5 | CBitFont * g_EditorFont
    PUSH EDX                            ; 0049ebfb
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 0049ebfc | int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0049ec01
    MOV EDX,EAX                         ; 0049ec04
    CMP EBX,EAX                         ; 0049ec06
    JLE 0x0049ec0c                      ; 0049ec08 | LAB_0049ec0c
        ;   XREF to: 0049ec0c (CONDITIONAL_JUMP)
    MOV EDX,EBX                         ; 0049ec0a
    PUSH 0x0                            ; 0049ec0c
        ;   Label: LAB_0049ec0c
    MOV ECX,dword ptr [ESP + 0x15c]     ; 0049ec0e
    PUSH ECX                            ; 0049ec15
    PUSH EDI                            ; 0049ec16
    PUSH EDX                            ; 0049ec17
    MOV EDI,dword ptr [0x00678a60]      ; 0049ec18 | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 0049ec1e | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890 ; 0049ec1f | void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
        ;   XREF to: 004a0890 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d02560]                ; 0049ec24 | int g_ClipRight
    SUB EAX,dword ptr [0x02d02558]      ; 0049ec29 | int g_ClipLeft
    LEA EDX,[EAX + 0x1]                 ; 0049ec2f
    SUB EDX,EBX                         ; 0049ec32
    MOV EAX,EDX                         ; 0049ec34
    SAR EDX,0x1f                        ; 0049ec36
    SUB EAX,EDX                         ; 0049ec39
    SAR EAX,0x1                         ; 0049ec3b
    ADD ESP,0x14                        ; 0049ec3d
    XOR EDI,EDI                         ; 0049ec40
    MOV dword ptr [ESP + 0x120],EAX     ; 0049ec42
    TEST EBP,EBP                        ; 0049ec49
    JLE 0x0049ed70                      ; 0049ec4b | LAB_0049ed70
        ;   XREF to: 0049ed70 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x114]     ; 0049ec51
    DEC EAX                             ; 0049ec58
    MOV dword ptr [ESP + 0x124],EAX     ; 0049ec59
    IMUL EAX,EDI                        ; 0049ec60
    DEC ESI                             ; 0049ec63
    MOV dword ptr [ESP + 0x11c],ESI     ; 0049ec64
    MOV dword ptr [ESP + 0x138],EAX     ; 0049ec6b
    IMUL EAX,ESI,0x0                    ; 0049ec72
    MOV dword ptr [ESP + 0x134],EAX     ; 0049ec75
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0049ec7c
    MOV dword ptr [ESP + 0x128],EAX     ; 0049ec83
    IMUL EAX,EDI                        ; 0049ec8a
    MOV EBX,dword ptr [ESP + 0x13c]     ; 0049ec8d
    MOV dword ptr [ESP + 0x130],EAX     ; 0049ec94
    MOV ECX,dword ptr [ESP + 0x120]     ; 0049ec9b
        ;   Label: LAB_0049ec9b
    MOV ESI,dword ptr [0x02d02558]      ; 0049eca2 | int g_ClipLeft
    MOV EAX,dword ptr [ESP + 0x160]     ; 0049eca8
    ADD ESI,ECX                         ; 0049ecaf
    TEST EAX,EAX                        ; 0049ecb1
    JNZ 0x0049eec5                      ; 0049ecb3 | LAB_0049eec5
        ;   XREF to: 0049eec5 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x130]     ; 0049ecb9
    MOV EDX,dword ptr [ESP + 0x134]     ; 0049ecc0
    ADD ESI,EAX                         ; 0049ecc7
    PUSH 0x0                            ; 0049ecc9
    ADD ESI,EDX                         ; 0049eccb
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970 ; 0049eccd | int shape_edittool.cpp_calculateButtonHeight_FUN_004a6970(char * button_text)
        ;   XREF to: 004a6970 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0049ecd2
    MOV EDX,dword ptr [0x02d02564]      ; 0049ecd5 | int g_ClipBottom
    PUSH EDI                            ; 0049ecdb
    SUB EDX,EAX                         ; 0049ecdc
    MOV ECX,dword ptr [ESP + 0x160]     ; 0049ecde
    LEA EAX,[EDX + 0x1]                 ; 0049ece5
    PUSH ECX                            ; 0049ece8
    MOV dword ptr [ESP + 0x10c],EAX     ; 0049ece9
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0049ecf0 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0049ecf5
    PUSH EAX                            ; 0049ecf8
    MOV EAX,[0x02d02564]                ; 0049ecf9 | int g_ClipBottom
    PUSH EAX                            ; 0049ecfe
    MOV EAX,dword ptr [ESP + 0x114]     ; 0049ecff
    ADD EAX,ESI                         ; 0049ed06
    DEC EAX                             ; 0049ed08
    PUSH EAX                            ; 0049ed09
    MOV EDX,dword ptr [ESP + 0x110]     ; 0049ed0a
    PUSH EDX                            ; 0049ed11
        ;   Label: LAB_0049ed11
    PUSH ESI                            ; 0049ed12
    PUSH EBX                            ; 0049ed13
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590 ; 0049ed14 | void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590(CEdButton * this_ptr, int left, int top, int right, ...)
        ;   XREF to: 004a6590 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0049ed19
    MOV EAX,dword ptr [ESP + 0x124]     ; 0049ed1c
    MOV EDX,dword ptr [ESP + 0x138]     ; 0049ed23
    MOV ECX,dword ptr [ESP + 0x134]     ; 0049ed2a
    MOV ESI,dword ptr [ESP + 0x130]     ; 0049ed31
    ADD EBX,0xe4                        ; 0049ed38
    ADD EDX,EAX                         ; 0049ed3e
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0049ed40
    INC EDI                             ; 0049ed47
    ADD ECX,EAX                         ; 0049ed48
    MOV EAX,dword ptr [ESP + 0x128]     ; 0049ed4a
    MOV dword ptr [ESP + 0x138],EDX     ; 0049ed51
    ADD ESI,EAX                         ; 0049ed58
    MOV dword ptr [ESP + 0x134],ECX     ; 0049ed5a
    MOV dword ptr [ESP + 0x130],ESI     ; 0049ed61
    CMP EDI,EBP                         ; 0049ed68
    JL 0x0049ec9b                       ; 0049ed6a | LAB_0049ec9b
        ;   XREF to: 0049ec9b (CONDITIONAL_JUMP)
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0049ed70 | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_0049ed70
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    MOV EAX,[0x006793a8]                ; 0049ed75 | int g_InputKeyMask
    MOV EDI,0x7f                        ; 0049ed7a
    MOV dword ptr [ESP + 0x110],EAX     ; 0049ed7f
    XOR EAX,EAX                         ; 0049ed86
    MOV dword ptr [0x006793a8],EDI      ; 0049ed88 | int g_InputKeyMask
    MOV dword ptr [ESP + 0x140],EAX     ; 0049ed8e
    LEA EAX,[EBP + -0x1]                ; 0049ed95
    MOV EDI,0xfffffffe                  ; 0049ed98
    MOV dword ptr [ESP + 0x12c],EAX     ; 0049ed9d
    PUSH 0x1c                           ; 0049eda4
        ;   Label: LAB_0049eda4
    MOV EAX,[0x0067cf44]                ; 0049eda6 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 0049edab | void * g_CKeysPtr
    MOV EBX,dword ptr [EAX]             ; 0049edac | void * g_CKeysPtr
    CALL dword ptr [EBX + 0x4]          ; 0049edae
    ADD ESP,0x8                         ; 0049edb1
    TEST EAX,EAX                        ; 0049edb4
    JZ 0x0049edbf                       ; 0049edb6 | LAB_0049edbf
        ;   XREF to: 0049edbf (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x140]     ; 0049edb8
    PUSH 0x2a                           ; 0049edbf
        ;   Label: LAB_0049edbf
    MOV EAX,[0x0067cf44]                ; 0049edc1 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 0049edc6 | void * g_CKeysPtr
    MOV EBX,dword ptr [EAX]             ; 0049edc7 | void * g_CKeysPtr
    CALL dword ptr [EBX]                ; 0049edc9
    ADD ESP,0x8                         ; 0049edcb
    TEST EAX,EAX                        ; 0049edce
    JZ 0x0049ef22                       ; 0049edd0 | LAB_0049ef22
        ;   XREF to: 0049ef22 (CONDITIONAL_JUMP)
    PUSH 0x2a                           ; 0049edd6
        ;   Label: LAB_0049edd6
    MOV EAX,[0x0067cf44]                ; 0049edd8 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 0049eddd | void * g_CKeysPtr
    MOV EBX,dword ptr [EAX]             ; 0049edde | void * g_CKeysPtr
    CALL dword ptr [EBX]                ; 0049ede0
    ADD ESP,0x8                         ; 0049ede2
    TEST EAX,EAX                        ; 0049ede5
    JZ 0x0049ee04                       ; 0049ede7 | LAB_0049ee04
        ;   XREF to: 0049ee04 (CONDITIONAL_JUMP)
    PUSH 0xf                            ; 0049ede9
    MOV EAX,[0x0067cf44]                ; 0049edeb | CKeys * g_CKeysPtr
    PUSH EAX                            ; 0049edf0 | void * g_CKeysPtr
    MOV EBX,dword ptr [EAX]             ; 0049edf1 | void * g_CKeysPtr
    CALL dword ptr [EBX + 0x4]          ; 0049edf3
    ADD ESP,0x8                         ; 0049edf6
    TEST EAX,EAX                        ; 0049edf9
    JZ 0x0049ee04                       ; 0049edfb | LAB_0049ee04
        ;   XREF to: 0049ee04 (CONDITIONAL_JUMP)
    DEC dword ptr [ESP + 0x140]         ; 0049edfd
    MOV ESI,dword ptr [ESP + 0x140]     ; 0049ee04
        ;   Label: LAB_0049ee04
    CMP EBP,ESI                         ; 0049ee0b
    JG 0x0049ef46                       ; 0049ee0d | LAB_0049ef46
        ;   XREF to: 0049ef46 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 0049ee13
    MOV dword ptr [ESP + 0x140],EDX     ; 0049ee15
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00 ; 0049ee1c | bool wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00()
        ;   Label: LAB_0049ee1c
        ;   XREF to: 005f2f00 (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 0049ee21
    JZ 0x0049ef61                       ; 0049ee23 | LAB_0049ef61
        ;   XREF to: 0049ef61 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x0067cf44]      ; 0049ee29 | void * g_CKeysPtr | CKeys * g_CKeysPtr
    PUSH ECX                            ; 0049ee2f | void * g_CKeysPtr
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470 ; 0049ee30 | int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys * this)
        ;   XREF to: 00502470 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0049ee35
    MOV EBX,dword ptr [ESP + 0x13c]     ; 0049ee38
    XOR ESI,ESI                         ; 0049ee3f
    MOV DL,byte ptr [EBX + 0x4]         ; 0049ee41
    MOV dword ptr [ESP + 0x144],EAX     ; 0049ee44
    TEST DL,DL                          ; 0049ee4b
    JZ 0x0049ee7d                       ; 0049ee4d | LAB_0049ee7d
        ;   XREF to: 0049ee7d (CONDITIONAL_JUMP)
    CMP ESI,EBP                         ; 0049ee4f
        ;   Label: LAB_0049ee4f
    JGE 0x0049ee7d                      ; 0049ee51 | LAB_0049ee7d
        ;   XREF to: 0049ee7d (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0049ee53
    MOV AL,byte ptr [EBX + 0x4]         ; 0049ee55
    PUSH EAX                            ; 0049ee58
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 0049ee59 | int crt_ctype.c_toupper_FUN_005ff9e0(int c)
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0049ee5e
    CMP EAX,dword ptr [ESP + 0x144]     ; 0049ee61
    JNZ 0x0049ee6c                      ; 0049ee68 | LAB_0049ee6c
        ;   XREF to: 0049ee6c (CONDITIONAL_JUMP)
    MOV EDI,ESI                         ; 0049ee6a
    MOV DH,byte ptr [EBX + 0xe8]        ; 0049ee6c
        ;   Label: LAB_0049ee6c
    ADD EBX,0xe4                        ; 0049ee72
    INC ESI                             ; 0049ee78
    TEST DH,DH                          ; 0049ee79
    JNZ 0x0049ee4f                      ; 0049ee7b | LAB_0049ee4f
        ;   XREF to: 0049ee4f (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x144],0x1b    ; 0049ee7d
        ;   Label: LAB_0049ee7d
    JNZ 0x0049ee1c                      ; 0049ee85 | LAB_0049ee1c
        ;   XREF to: 0049ee1c (CONDITIONAL_JUMP)
    MOV EDI,0xffffffff                  ; 0049ee87
    JMP 0x0049ee1c                      ; 0049ee8c | LAB_0049ee1c
        ;   XREF to: 0049ee1c (UNCONDITIONAL_JUMP)
    MOV EAX,0xffffffff                  ; 0049ee8e
        ;   Label: LAB_0049ee8e
    ADD ESP,0x144                       ; 0049ee93
    POP EBP                             ; 0049ee99
    POP ESI                             ; 0049ee9a
    POP EBX                             ; 0049ee9b
    RET                                 ; 0049ee9c
    MOV EDI,dword ptr [ESP + 0x114]     ; 0049ee9d
        ;   Label: LAB_0049ee9d
    SUB EDI,0x2                         ; 0049eea4
    IMUL EDI,EAX                        ; 0049eea7
    PUSH 0x0                            ; 0049eeaa
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970 ; 0049eeac | int shape_edittool.cpp_calculateButtonHeight_FUN_004a6970(char * button_text)
        ;   XREF to: 004a6970 (UNCONDITIONAL_CALL)
    IMUL EAX,EBP                        ; 0049eeb1
    MOV EBX,dword ptr [ESP + 0x110]     ; 0049eeb4
    ADD ESP,0x4                         ; 0049eebb
    ADD EDI,EAX                         ; 0049eebe
    JMP 0x0049ebed                      ; 0049eec0 | LAB_0049ebed
        ;   XREF to: 0049ebed (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 0049eec5
        ;   Label: LAB_0049eec5
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970 ; 0049eec7 | int shape_edittool.cpp_calculateButtonHeight_FUN_004a6970(char * button_text)
        ;   XREF to: 004a6970 (UNCONDITIONAL_CALL)
    IMUL EAX,EDI                        ; 0049eecc
    ADD ESP,0x4                         ; 0049eecf
    MOV EDX,dword ptr [0x02d0255c]      ; 0049eed2 | int g_ClipTop
    MOV ECX,dword ptr [ESP + 0x138]     ; 0049eed8
    ADD EAX,EDX                         ; 0049eedf
    ADD EAX,ECX                         ; 0049eee1
    DEC EAX                             ; 0049eee3
    PUSH EDI                            ; 0049eee4
    MOV dword ptr [ESP + 0x10c],EAX     ; 0049eee5
    MOV EAX,dword ptr [ESP + 0x160]     ; 0049eeec
    PUSH EAX                            ; 0049eef3
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0049eef4 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0049eef9
    PUSH EAX                            ; 0049eefc
    PUSH 0x0                            ; 0049eefd
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970 ; 0049eeff | int shape_edittool.cpp_calculateButtonHeight_FUN_004a6970(char * button_text)
        ;   XREF to: 004a6970 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0049ef04
    MOV EDX,dword ptr [ESP + 0x10c]     ; 0049ef07
    ADD EAX,EDX                         ; 0049ef0e
    DEC EAX                             ; 0049ef10
    PUSH EAX                            ; 0049ef11
    MOV EAX,dword ptr [ESP + 0x114]     ; 0049ef12
    ADD EAX,ESI                         ; 0049ef19
    DEC EAX                             ; 0049ef1b
    PUSH EAX                            ; 0049ef1c
    JMP 0x0049ed11                      ; 0049ef1d | LAB_0049ed11
        ;   XREF to: 0049ed11 (UNCONDITIONAL_JUMP)
    PUSH 0xf                            ; 0049ef22
        ;   Label: LAB_0049ef22
    MOV EAX,[0x0067cf44]                ; 0049ef24 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 0049ef29 | void * g_CKeysPtr
    MOV EBX,dword ptr [EAX]             ; 0049ef2a | void * g_CKeysPtr
    CALL dword ptr [EBX + 0x4]          ; 0049ef2c
    ADD ESP,0x8                         ; 0049ef2f
    TEST EAX,EAX                        ; 0049ef32
    JZ 0x0049edd6                       ; 0049ef34 | LAB_0049edd6
        ;   XREF to: 0049edd6 (CONDITIONAL_JUMP)
    INC dword ptr [ESP + 0x140]         ; 0049ef3a
    JMP 0x0049edd6                      ; 0049ef41 | LAB_0049edd6
        ;   XREF to: 0049edd6 (UNCONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 0049ef46
        ;   Label: LAB_0049ef46
    JGE 0x0049ee1c                      ; 0049ef48 | LAB_0049ee1c
        ;   XREF to: 0049ee1c (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0049ef4e
    MOV dword ptr [ESP + 0x140],EAX     ; 0049ef55
    JMP 0x0049ee1c                      ; 0049ef5c | LAB_0049ee1c
        ;   XREF to: 0049ee1c (UNCONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 0049ef61
        ;   Label: LAB_0049ef61
    TEST EBP,EBP                        ; 0049ef63
    JLE 0x0049ef97                      ; 0049ef65 | LAB_0049ef97
        ;   XREF to: 0049ef97 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x13c]     ; 0049ef67
    PUSH ESI                            ; 0049ef6e
        ;   Label: LAB_0049ef6e
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830 ; 0049ef6f | int shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830(CEdButton * this_ptr)
        ;   XREF to: 004a6830 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0049ef74
    TEST EAX,EAX                        ; 0049ef77
    JZ 0x0049ef7d                       ; 0049ef79 | LAB_0049ef7d
        ;   XREF to: 0049ef7d (CONDITIONAL_JUMP)
    MOV EDI,EBX                         ; 0049ef7b
    CMP ESI,dword ptr [0x02cf2b00]      ; 0049ef7d | CEdButton * g_ActiveButton
        ;   Label: LAB_0049ef7d
    JNZ 0x0049ef8c                      ; 0049ef83 | LAB_0049ef8c
        ;   XREF to: 0049ef8c (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x140],EBX     ; 0049ef85
    INC EBX                             ; 0049ef8c
        ;   Label: LAB_0049ef8c
    ADD ESI,0xe4                        ; 0049ef8d
    CMP EBX,EBP                         ; 0049ef93
    JL 0x0049ef6e                       ; 0049ef95 | LAB_0049ef6e
        ;   XREF to: 0049ef6e (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x00678a60]      ; 0049ef97 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
        ;   Label: LAB_0049ef97
    PUSH EBX                            ; 0049ef9d | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 ; 0049ef9e | void shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(CEditorTools * this_ptr)
        ;   XREF to: 004a0f80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0049efa3
    XOR EBX,EBX                         ; 0049efa6
    TEST EBP,EBP                        ; 0049efa8
    JLE 0x0049efd7                      ; 0049efaa | LAB_0049efd7
        ;   XREF to: 0049efd7 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x13c]     ; 0049efac
    CMP EBX,dword ptr [ESP + 0x140]     ; 0049efb3
        ;   Label: LAB_0049efb3
    SETZ AL                             ; 0049efba
    AND EAX,0xff                        ; 0049efbd
    PUSH EAX                            ; 0049efc2
    PUSH ESI                            ; 0049efc3
    INC EBX                             ; 0049efc4
    CALL shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 ; 0049efc5 | void shape_edittool.cpp_CEdButton_paint_FUN_004a65e0(CEdButton * this_ptr, int draw_border_flag)
        ;   XREF to: 004a65e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0049efca
    ADD ESI,0xe4                        ; 0049efcd
    CMP EBX,EBP                         ; 0049efd3
    JL 0x0049efb3                       ; 0049efd5 | LAB_0049efb3
        ;   XREF to: 0049efb3 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0049efd7
        ;   Label: LAB_0049efd7
    MOV ECX,dword ptr [0x00678a60]      ; 0049efd9 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 0049efdf | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380 ; 0049efe0 | void shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380(CEditorTools * this_ptr, bool use_clipping)
        ;   XREF to: 004a1380 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0049efe5
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0049efe8 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CMP EDI,-0x2                        ; 0049efed
    JZ 0x0049eda4                       ; 0049eff0 | LAB_0049eda4
        ;   XREF to: 0049eda4 (CONDITIONAL_JUMP)
    MOV EBX,0x623042                    ; 0049eff6 | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_00623042 = ..\shape\edittool.cpp
    PUSH 0x65d4d0                       ; 0049effb | WatcomTypeInfo g_CEdButtonTypeInfo
    MOV EBP,dword ptr [ESP + 0x140]     ; 0049f000
    MOV ESI,0x49d                       ; 0049f007
    PUSH EBP                            ; 0049f00c
    MOV dword ptr [0x0067d20c],EBX      ; 0049f00d | char * g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ESI      ; 0049f013 | int g_CurrentDebugLine
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 0049f019 | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0049f01e
    PUSH EAX                            ; 0049f021
    CALL crt_memory.c_free_FUN_005fe659 ; 0049f022 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0049f027
    MOV EAX,dword ptr [ESP + 0x110]     ; 0049f02a
    MOV [0x006793a8],EAX                ; 0049f031 | int g_InputKeyMask
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0049f036 | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00678a60]                ; 0049f03b | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 0049f040 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 0049f041 | void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0049f046
    MOV EAX,EDI                         ; 0049f049
    POP EDI                             ; 0049f04b
    ADD ESP,0x144                       ; 0049f04c
    POP EBP                             ; 0049f052
    POP ESI                             ; 0049f053
    POP EBX                             ; 0049f054
    RET                                 ; 0049f055

