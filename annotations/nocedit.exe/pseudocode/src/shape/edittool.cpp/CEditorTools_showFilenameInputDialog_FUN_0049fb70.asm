; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 (CEditorTools *this_ptr,char *prompt_text,char *filename_buffer,int buffer_size, int show_directory)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   prompt_text
; char *           Stack[0xc]:4   filename_buffer
; int              Stack[0x10]:4   buffer_size
; int              Stack[0x14]:4   show_directory
; Local Variables:
; undefined1       Stack[-0x360]:1  local_360
; undefined1       Stack[-0x35f]:1  local_35f
; undefined1       Stack[-0x158]:1  local_158
; undefined1       Stack[-0x157]:1  local_157
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[12]:
;   core_cloth.cpp_FUN_0043ddf0 at 0043df42
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 0044321f
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047d85d
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 at 004bdac7
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e11bf
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 005387b2
;   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 at 00584e48
;   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 at 0057ed25
;   core_setedit.cpp_DementedFogEditor_FUN_00580730 at 00580e38
;   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 at 0057cd53
;   ... and 2 more
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00622eae
;   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
;   char s_EmptyChar_0062318c = \x00
;   TerminatedCString s_Directory_0062318d
;   TerminatedCString s_Filename_00623199
;   TerminatedCString s_Filename_006231a4
;   TerminatedCString s_anon_006231af
;   undefined4 DAT_006231b0
;   TerminatedCString s_d_006231b1
;   undefined4 DAT_006231b2
;   int g_InputKeyMask = 0x7f
;   CKeys* g_CKeysPtr = 02dcd7d4
;   char[256] g_CharacterClassificationTable
;   CBitFont* g_EditorFont
;   int g_FontCharacterHeight
;   ... and 8 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_strupr_FUN_00600770
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;   engine_keys.cpp_CKeys_getInputKey_FUN_00502460
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
;   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
;   shape_edittool.cpp_CInputString_backspace_FUN_0049d5d0
;   shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580
;   shape_edittool.cpp_CInputString_draw_FUN_0049d9b0
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049fb70
        ;   Label: shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
    PUSH ESI                            ; 0049fb71
    PUSH EDI                            ; 0049fb72
    PUSH EBP                            ; 0049fb73
    SUB ESP,0x350                       ; 0049fb74
    MOV EBP,dword ptr [ESP + 0x370]     ; 0049fb7a
    CMP dword ptr [ESP + 0x36c],0x0     ; 0049fb81
    JZ 0x0049fddb                       ; 0049fb89
        ;   XREF to: 0049fddb (CONDITIONAL_JUMP)  ; LAB_0049fddb
    CMP dword ptr [0x02cf1cd0],0x0      ; 0049fb8f | g_EditorFont
        ;   Label: LAB_0049fb8f
    JNZ 0x0049fbbb                      ; 0049fb96
        ;   XREF to: 0049fbbb (CONDITIONAL_JUMP)  ; LAB_0049fbbb
    MOV ESI,0x622eae                    ; 0049fb98 | = "..\\shape\\edittool.cpp"
    MOV EDI,0x8d                        ; 0049fb9d
    PUSH 0x622ec4                       ; 0049fba2 | = "gEdFont must be set by the application."
    MOV dword ptr [0x02f0ca48],ESI      ; 0049fba7 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0049fbad | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0049fbb3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0049fbb8
    MOV EAX,[0x02cf1cd0]                ; 0049fbbb | g_EditorFont
        ;   Label: LAB_0049fbbb
    PUSH 0x6a                           ; 0049fbc0
    MOV ECX,dword ptr [EAX + 0x3168]    ; 0049fbc2
    PUSH EAX                            ; 0049fbc8
    MOV dword ptr [0x02cf2668],ECX      ; 0049fbc9 | g_FontCharacterHeight
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 0049fbcf
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0049fbd4
    PUSH 0x0                            ; 0049fbd7
    MOV EDX,dword ptr [ESP + 0x36c]     ; 0049fbd9
    PUSH EDX                            ; 0049fbe0
    MOV [0x02cf266c],EAX                ; 0049fbe1 | g_FontCharacterWidth
    ADD EAX,EAX                         ; 0049fbe6
    PUSH EAX                            ; 0049fbe8
    MOV EAX,[0x02cf2668]                ; 0049fbe9 | g_FontCharacterHeight
    ADD EAX,EAX                         ; 0049fbee
    MOV ECX,EAX                         ; 0049fbf0
    SHL EAX,0x4                         ; 0049fbf2
    SUB EAX,ECX                         ; 0049fbf5
    PUSH EAX                            ; 0049fbf7
    MOV ECX,dword ptr [ESP + 0x374]     ; 0049fbf8
    PUSH ECX                            ; 0049fbff
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890 ; 0049fc00
        ;   XREF to: 004a0890 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 0049fc05
    TEST byte ptr [ESP + 0x378],0x1     ; 0049fc08
    JZ 0x0049fdeb                       ; 0049fc10
        ;   XREF to: 0049fdeb (CONDITIONAL_JUMP)  ; LAB_0049fdeb
    PUSH 0x0                            ; 0049fc16
    PUSH 0x14                           ; 0049fc18
    MOV EBX,dword ptr [ESP + 0x37c]     ; 0049fc1a
    PUSH EBX                            ; 0049fc21
    LEA EAX,[ESP + 0x214]               ; 0049fc22
        ;   Label: LAB_0049fc22
    PUSH EAX                            ; 0049fc29
    CALL shape_edittool.cpp_CInputString_init_FUN_0049d3d0 ; 0049fc2a
        ;   XREF to: 0049d3d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_init_FUN_0049d3d0(CInputString * this_ptr, char * source_string, int max_length, int param4, ...)
    ADD ESP,0x10                        ; 0049fc2f
    MOV EDI,0x7f                        ; 0049fc32
    MOV EAX,[0x006793a8]                ; 0049fc37 | g_InputKeyMask
    XOR ESI,ESI                         ; 0049fc3c
    MOV dword ptr [ESP + 0x348],EAX     ; 0049fc3e
    MOV dword ptr [0x006793a8],EDI      ; 0049fc45 | g_InputKeyMask
    MOV dword ptr [ESP + 0x34c],ESI     ; 0049fc4b
    MOV EAX,dword ptr [ESP + 0x364]     ; 0049fc52
        ;   Label: LAB_0049fc52
    PUSH EAX                            ; 0049fc59
    CALL shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 ; 0049fc5a
        ;   XREF to: 004a0f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0049fc5f
    LEA EAX,[ESP + 0x208]               ; 0049fc62
    PUSH EAX                            ; 0049fc69
    CALL crt_string.c_strupr_FUN_00600770 ; 0049fc6a
        ;   XREF to: 00600770 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_00600770(char * string)
    ADD ESP,0x4                         ; 0049fc6f
    MOV EAX,dword ptr [ESP + 0x36c]     ; 0049fc72
    CMP byte ptr [EAX],0x0              ; 0049fc79
    JZ 0x0049fd10                       ; 0049fc7c
        ;   XREF to: 0049fd10 (CONDITIONAL_JUMP)  ; LAB_0049fd10
    PUSH 0x62318d                       ; 0049fc82 | = "Directory: "
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0049fc87
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 0049fc8c
    MOV EDI,ESP                         ; 0049fc8f
    MOV ESI,EAX                         ; 0049fc91
    PUSH EDI                            ; 0049fc93
    MOV AL,byte ptr [ESI]               ; 0049fc94
        ;   Label: LAB_0049fc94
    MOV byte ptr [EDI],AL               ; 0049fc96
    CMP AL,0x0                          ; 0049fc98
    JZ 0x0049fcac                       ; 0049fc9a
        ;   XREF to: 0049fcac (CONDITIONAL_JUMP)  ; LAB_0049fcac
    MOV AL,byte ptr [ESI + 0x1]         ; 0049fc9c
    ADD ESI,0x2                         ; 0049fc9f
    MOV byte ptr [EDI + 0x1],AL         ; 0049fca2
    ADD EDI,0x2                         ; 0049fca5
    CMP AL,0x0                          ; 0049fca8
    JNZ 0x0049fc94                      ; 0049fcaa
        ;   XREF to: 0049fc94 (CONDITIONAL_JUMP)  ; LAB_0049fc94
    POP EDI                             ; 0049fcac
        ;   Label: LAB_0049fcac
    MOV ESI,dword ptr [ESP + 0x36c]     ; 0049fcad
    MOV EDI,ESP                         ; 0049fcb4
    PUSH EDI                            ; 0049fcb6
    SUB ECX,ECX                         ; 0049fcb7
    DEC ECX                             ; 0049fcb9
    MOV AL,0x0                          ; 0049fcba
    SCASB.REPNE ES:EDI                  ; 0049fcbc
    DEC EDI                             ; 0049fcbe
    MOV AL,byte ptr [ESI]               ; 0049fcbf
        ;   Label: LAB_0049fcbf
    MOV byte ptr [EDI],AL               ; 0049fcc1
    CMP AL,0x0                          ; 0049fcc3
    JZ 0x0049fcd7                       ; 0049fcc5
        ;   XREF to: 0049fcd7 (CONDITIONAL_JUMP)  ; LAB_0049fcd7
    MOV AL,byte ptr [ESI + 0x1]         ; 0049fcc7
    ADD ESI,0x2                         ; 0049fcca
    MOV byte ptr [EDI + 0x1],AL         ; 0049fccd
    ADD EDI,0x2                         ; 0049fcd0
    CMP AL,0x0                          ; 0049fcd3
    JNZ 0x0049fcbf                      ; 0049fcd5
        ;   XREF to: 0049fcbf (CONDITIONAL_JUMP)  ; LAB_0049fcbf
    POP EDI                             ; 0049fcd7
        ;   Label: LAB_0049fcd7
    PUSH 0xffff                         ; 0049fcd8
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 0049fcdd
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 0049fce2
    PUSH -0x1                           ; 0049fce5
    MOV EDX,dword ptr [0x02cf2aac]      ; 0049fce7 | DAT_02cf2aac
    PUSH EDX                            ; 0049fced
    MOV ECX,dword ptr [0x02d0255c]      ; 0049fcee | g_ClipTop
    PUSH ECX                            ; 0049fcf4
    MOV EBX,dword ptr [0x02d02558]      ; 0049fcf5 | g_ClipLeft
    PUSH EBX                            ; 0049fcfb
    LEA EAX,[ESP + 0x10]                ; 0049fcfc
    PUSH EAX                            ; 0049fd00
    MOV ESI,dword ptr [0x02cf1cd0]      ; 0049fd01 | g_EditorFont
    PUSH ESI                            ; 0049fd07
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 0049fd08
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
    ADD ESP,0x18                        ; 0049fd0d
    CMP dword ptr [ESP + 0x34c],0x0     ; 0049fd10
        ;   Label: LAB_0049fd10
    JZ 0x0049fdf6                       ; 0049fd18
        ;   XREF to: 0049fdf6 (CONDITIONAL_JUMP)  ; LAB_0049fdf6
    MOV EBX,dword ptr [0x02cf2ab0]      ; 0049fd1e | g_ButtonColor
    PUSH 0xffff                         ; 0049fd24
        ;   Label: LAB_0049fd24
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 0049fd29
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 0049fd2e
    PUSH -0x1                           ; 0049fd31
    MOV EAX,[0x02d0255c]                ; 0049fd33 | g_ClipTop
    MOV EDX,dword ptr [0x02cf266c]      ; 0049fd38 | g_FontCharacterWidth
    PUSH EBX                            ; 0049fd3e
    ADD EAX,EDX                         ; 0049fd3f
    PUSH EAX                            ; 0049fd41
    MOV ECX,dword ptr [0x02d02558]      ; 0049fd42 | g_ClipLeft
    PUSH ECX                            ; 0049fd48
    PUSH 0x623199                       ; 0049fd49 | = "Filename: "
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0049fd4e
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 0049fd53
    PUSH EAX                            ; 0049fd56
    MOV EBX,dword ptr [0x02cf1cd0]      ; 0049fd57 | g_EditorFont
    PUSH EBX                            ; 0049fd5d
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 0049fd5e
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
    ADD ESP,0x18                        ; 0049fd63
    PUSH 0x6231a4                       ; 0049fd66 | = "Filename: "
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0049fd6b
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 0049fd70
    PUSH EAX                            ; 0049fd73
    MOV ESI,dword ptr [0x02cf1cd0]      ; 0049fd74 | g_EditorFont
    PUSH ESI                            ; 0049fd7a
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 0049fd7b
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    MOV EDI,dword ptr [0x02cf266c]      ; 0049fd80 | g_FontCharacterWidth
    MOV ECX,EAX                         ; 0049fd86
    MOV EAX,[0x02d0255c]                ; 0049fd88 | g_ClipTop
    ADD ESP,0x8                         ; 0049fd8d
    ADD EAX,EDI                         ; 0049fd90
    PUSH EAX                            ; 0049fd92
    ADD ECX,dword ptr [0x02d02558]      ; 0049fd93 | g_ClipLeft
    PUSH ECX                            ; 0049fd99
    LEA EAX,[ESP + 0x210]               ; 0049fd9a
    PUSH EAX                            ; 0049fda1
    CALL shape_edittool.cpp_CInputString_draw_FUN_0049d9b0 ; 0049fda2
        ;   XREF to: 0049d9b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_draw_FUN_0049d9b0(CInputString * this_ptr, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0049fda7
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0049fdaa
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CMP dword ptr [ESP + 0x34c],0x0     ; 0049fdaf
    JNZ 0x0049fe01                      ; 0049fdb7
        ;   XREF to: 0049fe01 (CONDITIONAL_JUMP)  ; LAB_0049fe01
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00 ; 0049fdb9
        ;   XREF to: 005f2f00 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00()
        ;   Label: LAB_0049fdb9
    TEST EAX,EAX                        ; 0049fdbe
    JNZ 0x0049fe55                      ; 0049fdc0
        ;   XREF to: 0049fe55 (CONDITIONAL_JUMP)  ; LAB_0049fe55
    LEA EAX,[ESP + 0x208]               ; 0049fdc6
    PUSH EAX                            ; 0049fdcd
    CALL shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0 ; 0049fdce
        ;   XREF to: 0049d6c0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049fdd3
    JMP 0x0049fc52                      ; 0049fdd6
        ;   XREF to: 0049fc52 (UNCONDITIONAL_JUMP)  ; LAB_0049fc52
    MOV dword ptr [ESP + 0x36c],0x62318c ; 0049fddb | s_EmptyChar_0062318c
        ;   Label: LAB_0049fddb
    JMP 0x0049fb8f                      ; 0049fde6
        ;   XREF to: 0049fb8f (UNCONDITIONAL_JUMP)  ; LAB_0049fb8f
    PUSH 0x0                            ; 0049fdeb
        ;   Label: LAB_0049fdeb
    PUSH 0x14                           ; 0049fded
    PUSH 0x0                            ; 0049fdef
    JMP 0x0049fc22                      ; 0049fdf1
        ;   XREF to: 0049fc22 (UNCONDITIONAL_JUMP)  ; LAB_0049fc22
    MOV EBX,dword ptr [0x02cf2aac]      ; 0049fdf6 | DAT_02cf2aac
        ;   Label: LAB_0049fdf6
    JMP 0x0049fd24                      ; 0049fdfc
        ;   XREF to: 0049fd24 (UNCONDITIONAL_JUMP)  ; LAB_0049fd24
    LEA ESI,[ESP + 0x208]               ; 0049fe01
        ;   Label: LAB_0049fe01
    MOV EDI,dword ptr [ESP + 0x374]     ; 0049fe08
    MOV ECX,dword ptr [ESP + 0x364]     ; 0049fe0f
    PUSH EDI                            ; 0049fe16
    MOV AL,byte ptr [ESI]               ; 0049fe17
        ;   Label: LAB_0049fe17
    MOV byte ptr [EDI],AL               ; 0049fe19
    CMP AL,0x0                          ; 0049fe1b
    JZ 0x0049fe2f                       ; 0049fe1d
        ;   XREF to: 0049fe2f (CONDITIONAL_JUMP)  ; LAB_0049fe2f
    MOV AL,byte ptr [ESI + 0x1]         ; 0049fe1f
    ADD ESI,0x2                         ; 0049fe22
    MOV byte ptr [EDI + 0x1],AL         ; 0049fe25
    ADD EDI,0x2                         ; 0049fe28
    CMP AL,0x0                          ; 0049fe2b
    JNZ 0x0049fe17                      ; 0049fe2d
        ;   XREF to: 0049fe17 (CONDITIONAL_JUMP)  ; LAB_0049fe17
    POP EDI                             ; 0049fe2f
        ;   Label: LAB_0049fe2f
    PUSH ECX                            ; 0049fe30
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 0049fe31
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0049fe36
    MOV EAX,dword ptr [ESP + 0x348]     ; 0049fe39
    MOV [0x006793a8],EAX                ; 0049fe40 | g_InputKeyMask
    MOV EAX,0x1                         ; 0049fe45
    ADD ESP,0x350                       ; 0049fe4a
    POP EBP                             ; 0049fe50
    POP EDI                             ; 0049fe51
    POP ESI                             ; 0049fe52
    POP EBX                             ; 0049fe53
    RET                                 ; 0049fe54
    MOV EBX,dword ptr [0x0067cf44]      ; 0049fe55 | g_CKeysInstance | g_CKeysPtr
        ;   Label: LAB_0049fe55
    PUSH EBX                            ; 0049fe5b | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_getInputKey_FUN_00502460 ; 0049fe5c
        ;   XREF to: 00502460 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getInputKey_FUN_00502460(CKeys * this_ptr)
    ADD ESP,0x4                         ; 0049fe61
    MOV EBX,EAX                         ; 0049fe64
    CMP EAX,0x1b                        ; 0049fe66
    JZ 0x0049ffc1                       ; 0049fe69
        ;   XREF to: 0049ffc1 (CONDITIONAL_JUMP)  ; LAB_0049ffc1
    CMP EAX,0xd                         ; 0049fe6f
    JNZ 0x0049ff4d                      ; 0049fe72
        ;   XREF to: 0049ff4d (CONDITIONAL_JUMP)  ; LAB_0049ff4d
    CMP byte ptr [ESP + 0x208],0x0      ; 0049fe78
    JZ 0x0049ff4d                       ; 0049fe80
        ;   XREF to: 0049ff4d (CONDITIONAL_JUMP)  ; LAB_0049ff4d
    MOV DL,0x2e                         ; 0049fe86
    LEA ESI,[ESP + 0x208]               ; 0049fe88
    MOV AL,byte ptr [ESI]               ; 0049fe8f
        ;   Label: LAB_0049fe8f
    CMP AL,DL                           ; 0049fe91
    JZ 0x0049fea7                       ; 0049fe93
        ;   XREF to: 0049fea7 (CONDITIONAL_JUMP)  ; LAB_0049fea7
    CMP AL,0x0                          ; 0049fe95
    JZ 0x0049fea5                       ; 0049fe97
        ;   XREF to: 0049fea5 (CONDITIONAL_JUMP)  ; LAB_0049fea5
    INC ESI                             ; 0049fe99
    MOV AL,byte ptr [ESI]               ; 0049fe9a
    CMP AL,DL                           ; 0049fe9c
    JZ 0x0049fea7                       ; 0049fe9e
        ;   XREF to: 0049fea7 (CONDITIONAL_JUMP)  ; LAB_0049fea7
    INC ESI                             ; 0049fea0
    CMP AL,0x0                          ; 0049fea1
    JNZ 0x0049fe8f                      ; 0049fea3
        ;   XREF to: 0049fe8f (CONDITIONAL_JUMP)  ; LAB_0049fe8f
    SUB ESI,ESI                         ; 0049fea5
        ;   Label: LAB_0049fea5
    TEST ESI,ESI                        ; 0049fea7
        ;   Label: LAB_0049fea7
    JNZ 0x0049ff3c                      ; 0049fea9
        ;   XREF to: 0049ff3c (CONDITIONAL_JUMP)  ; LAB_0049ff3c
    CMP DL,byte ptr [EBP]               ; 0049feaf
    JZ 0x0049fee2                       ; 0049feb2
        ;   XREF to: 0049fee2 (CONDITIONAL_JUMP)  ; LAB_0049fee2
    MOV ESI,0x6231af                    ; 0049feb4 | = "."
    LEA EDI,[ESP + 0x208]               ; 0049feb9
    PUSH EDI                            ; 0049fec0
    SUB ECX,ECX                         ; 0049fec1
    DEC ECX                             ; 0049fec3
    MOV AL,0x0                          ; 0049fec4
    SCASB.REPNE ES:EDI                  ; 0049fec6
    DEC EDI                             ; 0049fec8
    MOV AL,byte ptr [ESI]               ; 0049fec9 | = "." | s_d_006231b1
        ;   Label: LAB_0049fec9
    MOV byte ptr [EDI],AL               ; 0049fecb
    CMP AL,0x0                          ; 0049fecd
    JZ 0x0049fee1                       ; 0049fecf
        ;   XREF to: 0049fee1 (CONDITIONAL_JUMP)  ; LAB_0049fee1
    MOV AL,byte ptr [ESI + 0x1]         ; 0049fed1 | DAT_006231b0 | DAT_006231b2
    ADD ESI,0x2                         ; 0049fed4
    MOV byte ptr [EDI + 0x1],AL         ; 0049fed7
    ADD EDI,0x2                         ; 0049feda
    CMP AL,0x0                          ; 0049fedd
    JNZ 0x0049fec9                      ; 0049fedf
        ;   XREF to: 0049fec9 (CONDITIONAL_JUMP)  ; LAB_0049fec9
    POP EDI                             ; 0049fee1
        ;   Label: LAB_0049fee1
    LEA EDI,[ESP + 0x208]               ; 0049fee2
        ;   Label: LAB_0049fee2
    MOV ESI,EBP                         ; 0049fee9
    PUSH EDI                            ; 0049feeb
    SUB ECX,ECX                         ; 0049feec
    DEC ECX                             ; 0049feee
    MOV AL,0x0                          ; 0049feef
    SCASB.REPNE ES:EDI                  ; 0049fef1
    DEC EDI                             ; 0049fef3
    MOV AL,byte ptr [ESI]               ; 0049fef4
        ;   Label: LAB_0049fef4
    MOV byte ptr [EDI],AL               ; 0049fef6
    CMP AL,0x0                          ; 0049fef8
    JZ 0x0049ff0c                       ; 0049fefa
        ;   XREF to: 0049ff0c (CONDITIONAL_JUMP)  ; LAB_0049ff0c
    MOV AL,byte ptr [ESI + 0x1]         ; 0049fefc
    ADD ESI,0x2                         ; 0049feff
    MOV byte ptr [EDI + 0x1],AL         ; 0049ff02
    ADD EDI,0x2                         ; 0049ff05
    CMP AL,0x0                          ; 0049ff08
    JNZ 0x0049fef4                      ; 0049ff0a
        ;   XREF to: 0049fef4 (CONDITIONAL_JUMP)  ; LAB_0049fef4
    POP EDI                             ; 0049ff0c
        ;   Label: LAB_0049ff0c
    LEA EDI,[ESP + 0x208]               ; 0049ff0d
    SUB ECX,ECX                         ; 0049ff14
    DEC ECX                             ; 0049ff16
    XOR EAX,EAX                         ; 0049ff17
    SCASB.REPNE ES:EDI                  ; 0049ff19
    NOT ECX                             ; 0049ff1b
    DEC ECX                             ; 0049ff1d
    LEA EAX,[ESP + 0x208]               ; 0049ff1e
    PUSH EAX                            ; 0049ff25
    MOV dword ptr [ESP + 0x33c],ECX     ; 0049ff26
    MOV dword ptr [ESP + 0x340],ECX     ; 0049ff2d
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460 ; 0049ff34
        ;   XREF to: 0049d460 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049ff39
    MOV ESI,0x1                         ; 0049ff3c
        ;   Label: LAB_0049ff3c
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0049ff41
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV dword ptr [ESP + 0x34c],ESI     ; 0049ff46
    CMP EBX,0x8                         ; 0049ff4d
        ;   Label: LAB_0049ff4d
    JZ 0x0049fffe                       ; 0049ff50
        ;   XREF to: 0049fffe (CONDITIONAL_JUMP)  ; LAB_0049fffe
    MOV AL,BL                           ; 0049ff56
    INC AL                              ; 0049ff58
    AND EAX,0xff                        ; 0049ff5a
    MOV CH,byte ptr [EAX + 0x6849c4]    ; 0049ff5f | g_CharacterClassificationTable
    TEST CH,0x8                         ; 0049ff65
    JZ 0x0049fdb9                       ; 0049ff68
        ;   XREF to: 0049fdb9 (CONDITIONAL_JUMP)  ; LAB_0049fdb9
    CMP EBX,0x5c                        ; 0049ff6e
    JZ 0x0049fdb9                       ; 0049ff71
        ;   XREF to: 0049fdb9 (CONDITIONAL_JUMP)  ; LAB_0049fdb9
    CMP EBX,0x3a                        ; 0049ff77
    JZ 0x0049fdb9                       ; 0049ff7a
        ;   XREF to: 0049fdb9 (CONDITIONAL_JUMP)  ; LAB_0049fdb9
    TEST CH,0x2                         ; 0049ff80
    JNZ 0x0049fdb9                      ; 0049ff83
        ;   XREF to: 0049fdb9 (CONDITIONAL_JUMP)  ; LAB_0049fdb9
    LEA EAX,[ESP + 0x208]               ; 0049ff89
    PUSH EAX                            ; 0049ff90
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580 ; 0049ff91
        ;   XREF to: 0049d580 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049ff96
    PUSH 0x1                            ; 0049ff99
    PUSH EBX                            ; 0049ff9b
    LEA EAX,[ESP + 0x210]               ; 0049ff9c
    PUSH EAX                            ; 0049ffa3
    CALL shape_edittool.cpp_CInputString_insertChar_FUN_0049d480 ; 0049ffa4
        ;   XREF to: 0049d480 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_insertChar_FUN_0049d480(CInputString * this_ptr, char character, int advance_cursor)
    ADD ESP,0xc                         ; 0049ffa9
    LEA EAX,[ESP + 0x208]               ; 0049ffac
    PUSH EAX                            ; 0049ffb3
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460 ; 0049ffb4
        ;   XREF to: 0049d460 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049ffb9
    JMP 0x0049fdb9                      ; 0049ffbc
        ;   XREF to: 0049fdb9 (UNCONDITIONAL_JUMP)  ; LAB_0049fdb9
    MOV EDI,dword ptr [ESP + 0x364]     ; 0049ffc1
        ;   Label: LAB_0049ffc1
    MOV EAX,dword ptr [ESP + 0x374]     ; 0049ffc8
    PUSH EDI                            ; 0049ffcf
    MOV byte ptr [EAX],0x0              ; 0049ffd0
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 0049ffd3
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0049ffd8
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0049ffdb
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0049ffe0
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EAX,dword ptr [ESP + 0x348]     ; 0049ffe5
    MOV [0x006793a8],EAX                ; 0049ffec | g_InputKeyMask
    XOR EAX,EAX                         ; 0049fff1
    ADD ESP,0x350                       ; 0049fff3
    POP EBP                             ; 0049fff9
    POP EDI                             ; 0049fffa
    POP ESI                             ; 0049fffb
    POP EBX                             ; 0049fffc
    RET                                 ; 0049fffd
    LEA EAX,[ESP + 0x208]               ; 0049fffe
        ;   Label: LAB_0049fffe
    PUSH EAX                            ; 004a0005
    CALL shape_edittool.cpp_CInputString_backspace_FUN_0049d5d0 ; 004a0006
        ;   XREF to: 0049d5d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_backspace_FUN_0049d5d0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 004a000b
    JMP 0x0049fdb9                      ; 004a000e
        ;   XREF to: 0049fdb9 (UNCONDITIONAL_JUMP)  ; LAB_0049fdb9

