; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_showTextInputDialog_FUN_0049db10(char *dialog_title,char *input_buffer,int max_length,int flags,int dialog_mode)
;
; Parameters:
; char *           Stack[0x4]:4   dialog_title
; char *           Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   max_length
; int              Stack[0x10]:4   flags
; int              Stack[0x14]:4   dialog_mode
; Local Variables:
; CInputString     Stack[-0x320]:320  local_320
; CEdButton        Stack[-0x1e0]:228  local_1e0
; CEdButton        Stack[-0xfc]:228  local_fc
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_004a0400 at 004a0418
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 at 004a03e8
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00622eae
;   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
;   TerminatedCString s_Cancel_00622f83
;   TerminatedCString s_OK_00622f8a
;   TerminatedCString s_Cancel_00622f8d
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_InputKeyMask = 0x7f
;   CKeys* g_CKeysPtr = 02dcd7d4
;   uchar[257] g_CharacterClassificationTable
;   CBitFont* g_EditorFont
;   CEditorTools g_CEditorToolsInstance
;   int g_FontCharacterHeight
;   int g_FontCharacterWidth
;   ... and 8 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0
;   engine_keys.cpp_CKeys_getInputKey_FUN_00502460
;   shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
;   shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
;   shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
;   shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
;   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
;   shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590
;   shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
;   shape_edittool.cpp_CEditorTools_drawMousePointer_FUN_004a1380
;   shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230
;   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049db10
        ;   Label: shape_edittool.cpp_showTextInputDialog_FUN_0049db10
    PUSH ESI                            ; 0049db11
    PUSH EDI                            ; 0049db12
    PUSH EBP                            ; 0049db13
    SUB ESP,0x310                       ; 0049db14
    MOV EBP,dword ptr [ESP + 0x328]     ; 0049db1a
    MOV ESI,dword ptr [ESP + 0x32c]     ; 0049db21
    MOV EBX,dword ptr [ESP + 0x334]     ; 0049db28
    CMP dword ptr [0x02cf1cd0],0x0      ; 0049db2f | g_EditorFont
    JZ 0x0049de2d                       ; 0049db36
        ;   XREF to: 0049de2d (CONDITIONAL_JUMP)  ; LAB_0049de2d
    MOV EAX,[0x02cf1cd0]                ; 0049db3c | g_EditorFont
        ;   Label: LAB_0049db3c
    PUSH 0x6a                           ; 0049db41
    MOV EDX,dword ptr [EAX + 0x3168]    ; 0049db43
    PUSH EAX                            ; 0049db49
    MOV dword ptr [0x02cf2668],EDX      ; 0049db4a | g_FontCharacterHeight
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0 ; 0049db50
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0049db55
    MOV [0x02cf266c],EAX                ; 0049db58 | g_FontCharacterWidth
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0049db5d
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    TEST byte ptr [ESP + 0x330],0x1     ; 0049db62
    JZ 0x0049de55                       ; 0049db6a
        ;   XREF to: 0049de55 (CONDITIONAL_JUMP)  ; LAB_0049de55
    PUSH EBX                            ; 0049db70
    PUSH ESI                            ; 0049db71
    PUSH EBP                            ; 0049db72
    LEA EAX,[ESP + 0xc]                 ; 0049db73
        ;   Label: LAB_0049db73
    PUSH EAX                            ; 0049db77
    CALL shape_edittool.cpp_CInputString_init_FUN_0049d3d0 ; 0049db78
        ;   XREF to: 0049d3d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_init_FUN_0049d3d0(CInputString * this_ptr, char * source_string, int max_length, int mask_mode)
    ADD ESP,0x10                        ; 0049db7d
    MOV EAX,[0x00679394]                ; 0049db80 | g_WindowWidth
    MOV EDX,EAX                         ; 0049db85
    SAR EDX,0x1f                        ; 0049db87
    SHL EDX,0x7                         ; 0049db8a
    SBB EAX,EDX                         ; 0049db8d
    SAR EAX,0x7                         ; 0049db8f
    MOV ESI,EAX                         ; 0049db92
    MOV EAX,[0x00679398]                ; 0049db94 | g_WindowHeight
    MOV EDX,EAX                         ; 0049db99
    MOV ECX,0x60                        ; 0049db9b
    SAR EDX,0x1f                        ; 0049dba0
    IDIV ECX                            ; 0049dba3
    PUSH 0x0                            ; 0049dba5
    MOV EBX,EAX                         ; 0049dba7
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970 ; 0049dba9
        ;   XREF to: 004a6970 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonHeight_FUN_004a6970(char * button_text)
    ADD ESP,0x4                         ; 0049dbae
    MOV ECX,dword ptr [0x02cf266c]      ; 0049dbb1 | g_FontCharacterWidth
    ADD EBX,EBX                         ; 0049dbb7
    PUSH 0x0                            ; 0049dbb9
    MOV EDX,dword ptr [ESP + 0x328]     ; 0049dbbb
    ADD EAX,EBX                         ; 0049dbc2
    PUSH EDX                            ; 0049dbc4
    ADD EAX,ECX                         ; 0049dbc5
    MOV EDX,dword ptr [0x00679394]      ; 0049dbc7 | g_WindowWidth
    MOV ECX,0x5                         ; 0049dbcd
    SHL EDX,0x2                         ; 0049dbd2
    PUSH EAX                            ; 0049dbd5
    MOV EAX,EDX                         ; 0049dbd6
    SAR EDX,0x1f                        ; 0049dbd8
    IDIV ECX                            ; 0049dbdb
    PUSH EAX                            ; 0049dbdd
    MOV EBX,dword ptr [0x00678a60]      ; 0049dbde | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 0049dbe4 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890 ; 0049dbe5
        ;   XREF to: 004a0890 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 0049dbea
    PUSH 0x622f83                       ; 0049dbed | = "Cancel"
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0 ; 0049dbf2
        ;   XREF to: 004a68e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0(char * button_text)
    MOV ECX,dword ptr [0x02d02558]      ; 0049dbf7 | g_ClipLeft
    MOV EDI,dword ptr [0x02d02560]      ; 0049dbfd | g_ClipRight
    ADD ECX,EDI                         ; 0049dc03
    MOV EDX,ECX                         ; 0049dc05
    SUB EDX,ESI                         ; 0049dc07
    MOV EBX,EAX                         ; 0049dc09
    MOV EAX,EDX                         ; 0049dc0b
    SAR EDX,0x1f                        ; 0049dc0d
    SUB EAX,EDX                         ; 0049dc10
    SAR EAX,0x1                         ; 0049dc12
    SUB EAX,EBX                         ; 0049dc14
    LEA EDX,[ECX + ESI*0x1]             ; 0049dc16
    LEA EDI,[EAX + 0x1]                 ; 0049dc19
    MOV EAX,EDX                         ; 0049dc1c
    SAR EDX,0x1f                        ; 0049dc1e
    SUB EAX,EDX                         ; 0049dc21
    SAR EAX,0x1                         ; 0049dc23
    ADD ESP,0x4                         ; 0049dc25
    PUSH 0x0                            ; 0049dc28
    MOV ESI,EAX                         ; 0049dc2a
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970 ; 0049dc2c
        ;   XREF to: 004a6970 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonHeight_FUN_004a6970(char * button_text)
    MOV EDX,dword ptr [0x02d02564]      ; 0049dc31 | g_ClipBottom
    SUB EDX,EAX                         ; 0049dc37
    ADD ESP,0x4                         ; 0049dc39
    LEA EAX,[EDX + 0x1]                 ; 0049dc3c
    MOV dword ptr [ESP + 0x308],EAX     ; 0049dc3f
    LEA EAX,[ESP + 0x224]               ; 0049dc46
    PUSH EAX                            ; 0049dc4d
    CALL shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0 ; 0049dc4e
        ;   XREF to: 004a64e0 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0049dc53
    LEA EAX,[ESP + 0x140]               ; 0049dc56
    PUSH EAX                            ; 0049dc5d
    CALL shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0 ; 0049dc5e
        ;   XREF to: 004a64e0 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0049dc63
    PUSH 0x622f8a                       ; 0049dc66 | = "OK"
    MOV EAX,[0x02d02564]                ; 0049dc6b | g_ClipBottom
    PUSH EAX                            ; 0049dc70
    LEA EAX,[EDI + EBX*0x1 + -0x1]      ; 0049dc71
    PUSH EAX                            ; 0049dc75
    MOV EDX,dword ptr [ESP + 0x314]     ; 0049dc76
    PUSH EDX                            ; 0049dc7d
    PUSH EDI                            ; 0049dc7e
    LEA EAX,[ESP + 0x238]               ; 0049dc7f
    PUSH EAX                            ; 0049dc86
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590 ; 0049dc87
        ;   XREF to: 004a6590 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590(CEdButton * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x18                        ; 0049dc8c
    PUSH 0x622f8d                       ; 0049dc8f | = "Cancel"
    MOV ECX,dword ptr [0x02d02564]      ; 0049dc94 | g_ClipBottom
    ADD EBX,ESI                         ; 0049dc9a
    PUSH ECX                            ; 0049dc9c
    DEC EBX                             ; 0049dc9d
    PUSH EBX                            ; 0049dc9e
    MOV EBX,dword ptr [ESP + 0x314]     ; 0049dc9f
    PUSH EBX                            ; 0049dca6
    PUSH ESI                            ; 0049dca7
    LEA EAX,[ESP + 0x154]               ; 0049dca8
    PUSH EAX                            ; 0049dcaf
    MOV EDI,0x1                         ; 0049dcb0
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590 ; 0049dcb5
        ;   XREF to: 004a6590 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590(CEdButton * this_ptr, int left, int top, int right, ...)
    MOV EAX,[0x006793a8]                ; 0049dcba | g_InputKeyMask
    ADD ESP,0x18                        ; 0049dcbf
    MOV ESI,0x7f                        ; 0049dcc2
    MOV dword ptr [ESP + 0x30c],EAX     ; 0049dcc7
    MOV dword ptr [0x006793a8],ESI      ; 0049dcce | g_InputKeyMask
    XOR ESI,ESI                         ; 0049dcd4
    MOV EAX,[0x00678a60]                ; 0049dcd6 | g_CEditorToolsInstance | g_CEditorToolsPtr
        ;   Label: LAB_0049dcd6
    PUSH EAX                            ; 0049dcdb | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 ; 0049dcdc
        ;   XREF to: 004a0f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0049dce1
    PUSH 0x1                            ; 0049dce4
    MOV EDX,dword ptr [0x00678a60]      ; 0049dce6 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0049dcec | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230 ; 0049dced
        ;   XREF to: 004a1230 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230(CEditorTools * editor_tools, int line_position)
    ADD ESP,0x8                         ; 0049dcf2
    MOV ECX,dword ptr [0x02d0255c]      ; 0049dcf5 | g_ClipTop
    PUSH ECX                            ; 0049dcfb
    MOV EBX,dword ptr [0x02d02558]      ; 0049dcfc | g_ClipLeft
    PUSH EBX                            ; 0049dd02
    LEA EAX,[ESP + 0x8]                 ; 0049dd03
    PUSH EAX                            ; 0049dd07
    CALL shape_edittool.cpp_CInputString_draw_FUN_0049d9b0 ; 0049dd08
        ;   XREF to: 0049d9b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_draw_FUN_0049d9b0(CInputString * this_ptr, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0049dd0d
    TEST ESI,ESI                        ; 0049dd10
    SETZ AL                             ; 0049dd12
    AND EAX,0xff                        ; 0049dd15
    PUSH EAX                            ; 0049dd1a
    LEA EAX,[ESP + 0x228]               ; 0049dd1b
    PUSH EAX                            ; 0049dd22
    CALL shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 ; 0049dd23
        ;   XREF to: 004a65e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_paint_FUN_004a65e0(CEdButton * this_ptr, int draw_border_flag)
    ADD ESP,0x8                         ; 0049dd28
    CMP ESI,0x1                         ; 0049dd2b
    SETZ AL                             ; 0049dd2e
    AND EAX,0xff                        ; 0049dd31
    PUSH EAX                            ; 0049dd36
    LEA EAX,[ESP + 0x144]               ; 0049dd37
    PUSH EAX                            ; 0049dd3e
    CALL shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 ; 0049dd3f
        ;   XREF to: 004a65e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_paint_FUN_004a65e0(CEdButton * this_ptr, int draw_border_flag)
    ADD ESP,0x8                         ; 0049dd44
    PUSH 0x0                            ; 0049dd47
    MOV EAX,[0x00678a60]                ; 0049dd49 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 0049dd4e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_drawMousePointer_FUN_004a1380 ; 0049dd4f
        ;   XREF to: 004a1380 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_drawMousePointer_FUN_004a1380(CEditorTools * this_ptr, int use_clipping)
    ADD ESP,0x8                         ; 0049dd54
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0049dd57
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    PUSH 0x2a                           ; 0049dd5c
    MOV EAX,[0x0067cf44]                ; 0049dd5e | g_CKeysPtr
    PUSH EAX                            ; 0049dd63 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0049dd64 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0049dd66
    ADD ESP,0x8                         ; 0049dd68
    TEST EAX,EAX                        ; 0049dd6b
    JZ 0x0049de5e                       ; 0049dd6d
        ;   XREF to: 0049de5e (CONDITIONAL_JUMP)  ; LAB_0049de5e
    PUSH 0x2a                           ; 0049dd73
        ;   Label: LAB_0049dd73
    MOV EAX,[0x0067cf44]                ; 0049dd75 | g_CKeysPtr
    PUSH EAX                            ; 0049dd7a | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0049dd7b | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0049dd7d
    ADD ESP,0x8                         ; 0049dd7f
    TEST EAX,EAX                        ; 0049dd82
    JZ 0x0049dd9b                       ; 0049dd84
        ;   XREF to: 0049dd9b (CONDITIONAL_JUMP)  ; LAB_0049dd9b
    PUSH 0xf                            ; 0049dd86
    MOV EAX,[0x0067cf44]                ; 0049dd88 | g_CKeysPtr
    PUSH EAX                            ; 0049dd8d | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0049dd8e | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0049dd90
    ADD ESP,0x8                         ; 0049dd93
    TEST EAX,EAX                        ; 0049dd96
    JZ 0x0049dd9b                       ; 0049dd98
        ;   XREF to: 0049dd9b (CONDITIONAL_JUMP)  ; LAB_0049dd9b
    DEC ESI                             ; 0049dd9a
    CMP ESI,0x2                         ; 0049dd9b
        ;   Label: LAB_0049dd9b
    JL 0x0049de7c                       ; 0049dd9e
        ;   XREF to: 0049de7c (CONDITIONAL_JUMP)  ; LAB_0049de7c
    XOR ESI,ESI                         ; 0049dda4
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00 ; 0049dda6
        ;   XREF to: 005f2f00 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00()
        ;   Label: LAB_0049dda6
    TEST EAX,EAX                        ; 0049ddab
    JZ 0x0049df07                       ; 0049ddad
        ;   XREF to: 0049df07 (CONDITIONAL_JUMP)  ; LAB_0049df07
    MOV EBX,dword ptr [0x0067cf44]      ; 0049ddb3 | g_CKeysInstance | g_CKeysPtr
    PUSH EBX                            ; 0049ddb9 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_getInputKey_FUN_00502460 ; 0049ddba
        ;   XREF to: 00502460 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getInputKey_FUN_00502460(CKeys * this_ptr)
    MOV EBX,EAX                         ; 0049ddbf
    ADD ESP,0x4                         ; 0049ddc1
    CMP EAX,0x1b                        ; 0049ddc4
    JZ 0x0049ddda                       ; 0049ddc7
        ;   XREF to: 0049ddda (CONDITIONAL_JUMP)  ; LAB_0049ddda
    CMP EAX,0xd                         ; 0049ddc9
    JNZ 0x0049deb3                      ; 0049ddcc
        ;   XREF to: 0049deb3 (CONDITIONAL_JUMP)  ; LAB_0049deb3
    TEST ESI,ESI                        ; 0049ddd2
    JZ 0x0049de8b                       ; 0049ddd4
        ;   XREF to: 0049de8b (CONDITIONAL_JUMP)  ; LAB_0049de8b
    XOR EBX,EAX                         ; 0049ddda
        ;   Label: LAB_0049ddda
    MOV ESI,dword ptr [0x00678a60]      ; 0049dddc | g_CEditorToolsPtr
        ;   Label: LAB_0049dddc
    PUSH ESI                            ; 0049dde2 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 0049dde3
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0049dde8
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0049ddeb
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EAX,dword ptr [ESP + 0x30c]     ; 0049ddf0
    PUSH 0x0                            ; 0049ddf7
    MOV [0x006793a8],EAX                ; 0049ddf9 | g_InputKeyMask
    LEA EAX,[ESP + 0x144]               ; 0049ddfe
    PUSH EAX                            ; 0049de05
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510 ; 0049de06
        ;   XREF to: 004a6510 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_004a6510(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049de0b
    PUSH 0x0                            ; 0049de0e
    LEA EAX,[ESP + 0x228]               ; 0049de10
    PUSH EAX                            ; 0049de17
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510 ; 0049de18
        ;   XREF to: 004a6510 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_004a6510(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049de1d
    MOV EAX,EBX                         ; 0049de20
    ADD ESP,0x310                       ; 0049de22
    POP EBP                             ; 0049de28
    POP EDI                             ; 0049de29
    POP ESI                             ; 0049de2a
    POP EBX                             ; 0049de2b
    RET                                 ; 0049de2c
    MOV ECX,0x622eae                    ; 0049de2d | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0049de2d
    MOV EDI,0x8d                        ; 0049de32
    PUSH 0x622ec4                       ; 0049de37 | = "gEdFont must be set by the application."
    MOV dword ptr [0x02f0ca48],ECX      ; 0049de3c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0049de42 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0049de48
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0049de4d
    JMP 0x0049db3c                      ; 0049de50
        ;   XREF to: 0049db3c (UNCONDITIONAL_JUMP)  ; LAB_0049db3c
    PUSH EBX                            ; 0049de55
        ;   Label: LAB_0049de55
    PUSH ESI                            ; 0049de56
    PUSH 0x0                            ; 0049de57
    JMP 0x0049db73                      ; 0049de59
        ;   XREF to: 0049db73 (UNCONDITIONAL_JUMP)  ; LAB_0049db73
    PUSH 0xf                            ; 0049de5e
        ;   Label: LAB_0049de5e
    MOV EAX,[0x0067cf44]                ; 0049de60 | g_CKeysPtr
    PUSH EAX                            ; 0049de65 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0049de66 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0049de68
    ADD ESP,0x8                         ; 0049de6b
    TEST EAX,EAX                        ; 0049de6e
    JZ 0x0049dd73                       ; 0049de70
        ;   XREF to: 0049dd73 (CONDITIONAL_JUMP)  ; LAB_0049dd73
    INC ESI                             ; 0049de76
    JMP 0x0049dd73                      ; 0049de77
        ;   XREF to: 0049dd73 (UNCONDITIONAL_JUMP)  ; LAB_0049dd73
    TEST ESI,ESI                        ; 0049de7c
        ;   Label: LAB_0049de7c
    JGE 0x0049dda6                      ; 0049de7e
        ;   XREF to: 0049dda6 (CONDITIONAL_JUMP)  ; LAB_0049dda6
    MOV ESI,EDI                         ; 0049de84
    JMP 0x0049dda6                      ; 0049de86
        ;   XREF to: 0049dda6 (UNCONDITIONAL_JUMP)  ; LAB_0049dda6
    MOV ESI,ESP                         ; 0049de8b
        ;   Label: LAB_0049de8b
    MOV EDI,EBP                         ; 0049de8d
    MOV EBX,0x1                         ; 0049de8f
    PUSH EDI                            ; 0049de94
    MOV AL,byte ptr [ESI]               ; 0049de95
        ;   Label: LAB_0049de95
    MOV byte ptr [EDI],AL               ; 0049de97
    CMP AL,0x0                          ; 0049de99
    JZ 0x0049dead                       ; 0049de9b
        ;   XREF to: 0049dead (CONDITIONAL_JUMP)  ; LAB_0049dead
    MOV AL,byte ptr [ESI + 0x1]         ; 0049de9d
    ADD ESI,0x2                         ; 0049dea0
    MOV byte ptr [EDI + 0x1],AL         ; 0049dea3
    ADD EDI,0x2                         ; 0049dea6
    CMP AL,0x0                          ; 0049dea9
    JNZ 0x0049de95                      ; 0049deab
        ;   XREF to: 0049de95 (CONDITIONAL_JUMP)  ; LAB_0049de95
    POP EDI                             ; 0049dead
        ;   Label: LAB_0049dead
    JMP 0x0049dddc                      ; 0049deae
        ;   XREF to: 0049dddc (UNCONDITIONAL_JUMP)  ; LAB_0049dddc
    CMP EAX,0x8                         ; 0049deb3
        ;   Label: LAB_0049deb3
    JZ 0x0049def7                       ; 0049deb6
        ;   XREF to: 0049def7 (CONDITIONAL_JUMP)  ; LAB_0049def7
    INC AL                              ; 0049deb8
    AND EAX,0xff                        ; 0049deba
    TEST byte ptr [EAX + 0x6849c4],0x8  ; 0049debf | g_CharacterClassificationTable
    JZ 0x0049dda6                       ; 0049dec6
        ;   XREF to: 0049dda6 (CONDITIONAL_JUMP)  ; LAB_0049dda6
    MOV EAX,ESP                         ; 0049decc
    PUSH EAX                            ; 0049dece
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580 ; 0049decf
        ;   XREF to: 0049d580 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049ded4
    PUSH 0x1                            ; 0049ded7
    PUSH EBX                            ; 0049ded9
    LEA EAX,[ESP + 0x8]                 ; 0049deda
    PUSH EAX                            ; 0049dede
    CALL shape_edittool.cpp_CInputString_insertChar_FUN_0049d480 ; 0049dedf
        ;   XREF to: 0049d480 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_insertChar_FUN_0049d480(CInputString * this_ptr, char character, int advance_cursor)
    ADD ESP,0xc                         ; 0049dee4
    MOV EAX,ESP                         ; 0049dee7
    PUSH EAX                            ; 0049dee9
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460 ; 0049deea
        ;   XREF to: 0049d460 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049deef
    JMP 0x0049dda6                      ; 0049def2
        ;   XREF to: 0049dda6 (UNCONDITIONAL_JUMP)  ; LAB_0049dda6
    MOV EAX,ESP                         ; 0049def7
        ;   Label: LAB_0049def7
    PUSH EAX                            ; 0049def9
    CALL shape_edittool.cpp_CInputString_backspace_FUN_0049d5d0 ; 0049defa
        ;   XREF to: 0049d5d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_backspace_FUN_0049d5d0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049deff
    JMP 0x0049dda6                      ; 0049df02
        ;   XREF to: 0049dda6 (UNCONDITIONAL_JUMP)  ; LAB_0049dda6
    MOV EAX,ESP                         ; 0049df07
        ;   Label: LAB_0049df07
    PUSH EAX                            ; 0049df09
    CALL shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0 ; 0049df0a
        ;   XREF to: 0049d6c0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049df0f
    LEA EAX,[ESP + 0x224]               ; 0049df12
    PUSH EAX                            ; 0049df19
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830 ; 0049df1a
        ;   XREF to: 004a6830 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0049df1f
    TEST EAX,EAX                        ; 0049df22
    JNZ 0x0049de8b                      ; 0049df24
        ;   XREF to: 0049de8b (CONDITIONAL_JUMP)  ; LAB_0049de8b
    LEA EAX,[ESP + 0x224]               ; 0049df2a
    CMP EAX,dword ptr [0x02cf2b00]      ; 0049df31 | g_ActiveControl
    JNZ 0x0049df3b                      ; 0049df37
        ;   XREF to: 0049df3b (CONDITIONAL_JUMP)  ; LAB_0049df3b
    XOR ESI,ESI                         ; 0049df39
    LEA EAX,[ESP + 0x140]               ; 0049df3b
        ;   Label: LAB_0049df3b
    PUSH EAX                            ; 0049df42
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830 ; 0049df43
        ;   XREF to: 004a6830 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0049df48
    TEST EAX,EAX                        ; 0049df4b
    JNZ 0x0049df6c                      ; 0049df4d
        ;   XREF to: 0049df6c (CONDITIONAL_JUMP)  ; LAB_0049df6c
    LEA EAX,[ESP + 0x140]               ; 0049df4f
    CMP EAX,dword ptr [0x02cf2b00]      ; 0049df56 | g_ActiveControl
    JNZ 0x0049dcd6                      ; 0049df5c
        ;   XREF to: 0049dcd6 (CONDITIONAL_JUMP)  ; LAB_0049dcd6
    MOV ESI,0x1                         ; 0049df62
    JMP 0x0049dcd6                      ; 0049df67
        ;   XREF to: 0049dcd6 (UNCONDITIONAL_JUMP)  ; LAB_0049dcd6
    XOR EBX,EBX                         ; 0049df6c
        ;   Label: LAB_0049df6c
    JMP 0x0049dddc                      ; 0049df6e
        ;   XREF to: 0049dddc (UNCONDITIONAL_JUMP)  ; LAB_0049dddc

