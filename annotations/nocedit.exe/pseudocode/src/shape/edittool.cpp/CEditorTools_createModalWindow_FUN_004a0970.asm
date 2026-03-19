; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_createModalWindow_FUN_004a0970(CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,uint window_flags)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   right
; int              Stack[0x14]:4   bottom
; char *           Stack[0x18]:4   text_content
; uint             Stack[0x1c]:4   window_flags
; Local Variables:
; int              Stack[-0x24]:4  local_24
; undefined4 *     Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890 at 004a0934
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00622eae
;   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
;   TerminatedCString s_shape_edittool_cpp_0062339e
;   TerminatedCString s_Can_t_open_another_windo_006233b4
;   TerminatedCString s_s_006233cf
;   TerminatedCString s_j_006233d3
;   TerminatedCString s_shape_edittool_cpp_006233d5
;   TerminatedCString s_shape_edittool_cpp_006233eb
;   TerminatedCString s_Out_of_memory_to_open_ed_00623401
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   char[200] g_TextWrapBuffer
;   undefined4 DAT_02cf0df8
;   CBitFont* g_EditorFont
;   ... and 37 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_2d.c_setupViewportAndClipping_FUN_00401800
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0
;   engine_font.cpp_CBitFont_getTextHeight_FUN_004cff40
;   engine_font.cpp_CBitFont_wrapText_FUN_004d0010
;   shape_edittool.cpp_CEditorTools_backupScreen_FUN_0049e410
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0970
        ;   Label: shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970
    PUSH ESI                            ; 004a0971
    PUSH EDI                            ; 004a0972
    PUSH EBP                            ; 004a0973
    SUB ESP,0x18                        ; 004a0974
    MOV EDI,dword ptr [ESP + 0x40]      ; 004a0977
    CMP dword ptr [0x02cf1cd0],0x0      ; 004a097b | g_EditorFont
    JZ 0x004a0d76                       ; 004a0982
        ;   XREF to: 004a0d76 (CONDITIONAL_JUMP)  ; LAB_004a0d76
    MOV EAX,[0x02cf1cd0]                ; 004a0988 | g_EditorFont
        ;   Label: LAB_004a0988
    PUSH 0x6a                           ; 004a098d
    MOV EDX,dword ptr [EAX + 0x3168]    ; 004a098f
    PUSH EAX                            ; 004a0995
    MOV dword ptr [0x02cf2668],EDX      ; 004a0996 | g_FontCharacterHeight
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0 ; 004a099c
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    MOV ESI,dword ptr [0x02cf1cdc]      ; 004a09a1 | g_WindowStackCount
    ADD ESP,0x8                         ; 004a09a7
    MOV [0x02cf266c],EAX                ; 004a09aa | g_FontCharacterWidth
    CMP ESI,0x5                         ; 004a09af
    JL 0x004a09d6                       ; 004a09b2
        ;   XREF to: 004a09d6 (CONDITIONAL_JUMP)  ; LAB_004a09d6
    MOV EBP,0x62339e                    ; 004a09b4 | = "..\\shape\\edittool.cpp"
    MOV EAX,0x7b8                       ; 004a09b9
    PUSH 0x6233b4                       ; 004a09be | = "Can't open another window!"
    MOV dword ptr [0x02f0ca48],EBP      ; 004a09c3 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004a09c9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a09ce
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a09d3
    MOV EDX,dword ptr [0x02cf1cdc]      ; 004a09d6 | g_WindowStackCount
        ;   Label: LAB_004a09d6
    MOV EAX,EDX                         ; 004a09dc
    SHL EAX,0x4                         ; 004a09de
    SUB EAX,EDX                         ; 004a09e1
    SHL EAX,0x2                         ; 004a09e3
    ADD EAX,EDX                         ; 004a09e6
    MOV EBX,0x2cf1ce0                   ; 004a09e8 | g_WindowStack
    SHL EAX,0x3                         ; 004a09ed
    ADD EBX,EAX                         ; 004a09f0
    MOV EAX,[0x00679394]                ; 004a09f2 | g_WindowWidth
    MOV EDX,EAX                         ; 004a09f7
    SAR EDX,0x1f                        ; 004a09f9
    SHL EDX,0x7                         ; 004a09fc
    SBB EAX,EDX                         ; 004a09ff
    SAR EAX,0x7                         ; 004a0a01
    MOV dword ptr [ESP + 0x8],EAX       ; 004a0a04
    MOV EAX,[0x00679398]                ; 004a0a08 | g_WindowHeight
    MOV EDX,EAX                         ; 004a0a0d
    MOV ESI,0x60                        ; 004a0a0f
    SAR EDX,0x1f                        ; 004a0a14
    IDIV ESI                            ; 004a0a17
    MOV ECX,dword ptr [ESP + 0x30]      ; 004a0a19
    MOV EBP,dword ptr [ESP + 0x38]      ; 004a0a1d
    MOV ESI,dword ptr [ESP + 0x34]      ; 004a0a21
    MOV EDX,dword ptr [0x02cf1cdc]      ; 004a0a25 | g_WindowStackCount
    MOV dword ptr [ESP],EAX             ; 004a0a2b
    INC EDX                             ; 004a0a2e
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a0a2f
    MOV dword ptr [0x02cf1cdc],EDX      ; 004a0a33 | g_WindowStackCount
    SUB ECX,EAX                         ; 004a0a39
    MOV EAX,dword ptr [ESP]             ; 004a0a3b
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004a0a3e
    SUB ESI,EAX                         ; 004a0a42
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a0a44
    MOV dword ptr [ESP + 0x30],ECX      ; 004a0a48
    ADD EBP,EAX                         ; 004a0a4c
    MOV EAX,dword ptr [ESP]             ; 004a0a4e
    MOV dword ptr [ESP + 0x34],ESI      ; 004a0a51
    ADD EDX,EAX                         ; 004a0a55
    MOV dword ptr [ESP + 0x38],EBP      ; 004a0a57
    MOV dword ptr [ESP + 0x3c],EDX      ; 004a0a5b
    TEST ECX,ECX                        ; 004a0a5f
    JL 0x004a0d9e                       ; 004a0a61
        ;   XREF to: 004a0d9e (CONDITIONAL_JUMP)  ; LAB_004a0d9e
    MOV EAX,dword ptr [ESP + 0x38]      ; 004a0a67
        ;   Label: LAB_004a0a67
    MOV EBP,dword ptr [0x00679394]      ; 004a0a6b | g_WindowWidth
    CMP EAX,EBP                         ; 004a0a71
    JLE 0x004a0a79                      ; 004a0a73
        ;   XREF to: 004a0a79 (CONDITIONAL_JUMP)  ; LAB_004a0a79
    MOV dword ptr [ESP + 0x38],EBP      ; 004a0a75
    XOR EAX,EAX                         ; 004a0a79
        ;   Label: LAB_004a0a79
    MOV byte ptr [EBX + 0x38],0x0       ; 004a0a7b | g_WindowStack[0].text_buffer[0]
    MOV dword ptr [ESP + 0x4],EAX       ; 004a0a7f
    TEST EDI,EDI                        ; 004a0a83
    JZ 0x004a0b64                       ; 004a0a85
        ;   XREF to: 004a0b64 (CONDITIONAL_JUMP)  ; LAB_004a0b64
    MOV EDX,dword ptr [ESP + 0x38]      ; 004a0a8b
    MOV ECX,dword ptr [ESP + 0x30]      ; 004a0a8f
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a0a93
    SUB EDX,ECX                         ; 004a0a97
    ADD EAX,EAX                         ; 004a0a99
    SUB EDX,EAX                         ; 004a0a9b
    PUSH EDX                            ; 004a0a9d
    PUSH 0xc8                           ; 004a0a9e
    PUSH 0x14                           ; 004a0aa3
    PUSH 0x2cf0d30                      ; 004a0aa5 | g_TextWrapBuffer
    PUSH EDI                            ; 004a0aaa
    MOV ESI,dword ptr [0x02cf1cd0]      ; 004a0aab | g_EditorFont
    PUSH ESI                            ; 004a0ab1
    LEA EBP,[EBX + 0x38]                ; 004a0ab2
    CALL engine_font.cpp_CBitFont_wrapText_FUN_004d0010 ; 004a0ab5
        ;   XREF to: 004d0010 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_wrapText_FUN_004d0010(CBitFont * this_ptr, char * source_text, char * dest_buffer, int max_lines, ...)
    ADD ESP,0x18                        ; 004a0aba
    XOR ESI,ESI                         ; 004a0abd
    MOV dword ptr [ESP + 0xc],EAX       ; 004a0abf
    TEST EAX,EAX                        ; 004a0ac3
    JLE 0x004a0af0                      ; 004a0ac5
        ;   XREF to: 004a0af0 (CONDITIONAL_JUMP)  ; LAB_004a0af0
    MOV EDI,0x2cf0d30                   ; 004a0ac7 | g_TextWrapBuffer
    PUSH EDI                            ; 004a0acc | g_TextWrapBuffer | DAT_02cf0df8
        ;   Label: LAB_004a0acc
    PUSH 0x6233cf                       ; 004a0acd | = "%s\n"
    PUSH EBP                            ; 004a0ad2
    INC ESI                             ; 004a0ad3
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004a0ad4
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004a0ad9
    ADD EBP,EAX                         ; 004a0adc
    MOV EAX,dword ptr [ESP + 0xc]       ; 004a0ade
    ADD EDI,0xc8                        ; 004a0ae2
    CMP ESI,EAX                         ; 004a0ae8
    JL 0x004a0acc                       ; 004a0aea
        ;   XREF to: 004a0acc (CONDITIONAL_JUMP)  ; LAB_004a0acc
    LEA EAX,[EAX]                       ; 004a0aec
    CMP dword ptr [ESP + 0xc],0x0       ; 004a0af0
        ;   Label: LAB_004a0af0
    JLE 0x004a0b64                      ; 004a0af5
        ;   XREF to: 004a0b64 (CONDITIONAL_JUMP)  ; LAB_004a0b64
    LEA EAX,[EBX + 0x38]                ; 004a0af7
    PUSH EAX                            ; 004a0afa
    MOV ECX,dword ptr [0x02cf1cd0]      ; 004a0afb | g_EditorFont
    DEC EBP                             ; 004a0b01
    PUSH ECX                            ; 004a0b02
    MOV byte ptr [EBP],0x0              ; 004a0b03 | g_WindowStack[0].saved_viewport_height+3
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004cff40 ; 004a0b07
        ;   XREF to: 004cff40 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004cff40(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 004a0b0c
    MOV EDX,dword ptr [0x02cf266c]      ; 004a0b0f | g_FontCharacterWidth
    PUSH 0x6233d3                       ; 004a0b15 | = "j"
    MOV ESI,dword ptr [0x02cf1cd0]      ; 004a0b1a | g_EditorFont
    ADD EDX,EAX                         ; 004a0b20
    PUSH ESI                            ; 004a0b22
    MOV dword ptr [ESP + 0xc],EDX       ; 004a0b23
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004cff40 ; 004a0b27
        ;   XREF to: 004cff40 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004cff40(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 004a0b2c
    MOV EDI,dword ptr [0x02cf266c]      ; 004a0b2f | g_FontCharacterWidth
    MOV EBP,dword ptr [ESP + 0x4]       ; 004a0b35
    ADD EAX,EDI                         ; 004a0b39
    CMP EAX,EBP                         ; 004a0b3b
    JLE 0x004a0b43                      ; 004a0b3d
        ;   XREF to: 004a0b43 (CONDITIONAL_JUMP)  ; LAB_004a0b43
    MOV dword ptr [ESP + 0x4],EAX       ; 004a0b3f
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a0b43
        ;   Label: LAB_004a0b43
    MOV EDX,EAX                         ; 004a0b47
    SAR EDX,0x1f                        ; 004a0b49
    SUB EAX,EDX                         ; 004a0b4c
    SAR EAX,0x1                         ; 004a0b4e
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004a0b50
    MOV EDX,dword ptr [ESP + 0x34]      ; 004a0b54
    ADD ECX,EAX                         ; 004a0b58
    SUB EDX,EAX                         ; 004a0b5a
    MOV dword ptr [ESP + 0x3c],ECX      ; 004a0b5c
    MOV dword ptr [ESP + 0x34],EDX      ; 004a0b60
    CMP dword ptr [ESP + 0x34],0x0      ; 004a0b64
        ;   Label: LAB_004a0b64
    JL 0x004a0da9                       ; 004a0b69
        ;   XREF to: 004a0da9 (CONDITIONAL_JUMP)  ; LAB_004a0da9
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004a0b6f
        ;   Label: LAB_004a0b6f
    MOV EBP,dword ptr [0x00679398]      ; 004a0b73 | g_WindowHeight
    CMP EAX,EBP                         ; 004a0b79
    JLE 0x004a0b81                      ; 004a0b7b
        ;   XREF to: 004a0b81 (CONDITIONAL_JUMP)  ; LAB_004a0b81
    MOV dword ptr [ESP + 0x3c],EBP      ; 004a0b7d
    TEST byte ptr [ESP + 0x44],0x1      ; 004a0b81
        ;   Label: LAB_004a0b81
    JNZ 0x004a0db4                      ; 004a0b86
        ;   XREF to: 004a0db4 (CONDITIONAL_JUMP)  ; LAB_004a0db4
    CMP dword ptr [0x02cf1cdc],0x1      ; 004a0b8c | g_WindowStackCount
    JNZ 0x004a0ba2                      ; 004a0b93
        ;   XREF to: 004a0ba2 (CONDITIONAL_JUMP)  ; LAB_004a0ba2
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004a0b95
    PUSH EDX                            ; 004a0b99
    CALL shape_edittool.cpp_CEditorTools_backupScreen_FUN_0049e410 ; 004a0b9a
        ;   XREF to: 0049e410 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_backupScreen_FUN_0049e410(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 004a0b9f
    MOV EAX,[0x00679394]                ; 004a0ba2 | g_WindowWidth
        ;   Label: LAB_004a0ba2
    MOV dword ptr [EBX + 0x1d4],EAX     ; 004a0ba7 | g_WindowStack[0].backup_width
    MOV ECX,dword ptr [0x0067939c]      ; 004a0bad | g_BitsPerPixel
    MOV EDX,dword ptr [EBX + 0x1d4]     ; 004a0bb3 | g_WindowStack[0].backup_width
    IMUL EDX,ECX                        ; 004a0bb9
    MOV EAX,[0x00679398]                ; 004a0bbc | g_WindowHeight
    MOV dword ptr [EBX + 0x1d8],EAX     ; 004a0bc1 | g_WindowStack[0].backup_height
    MOV EAX,EDX                         ; 004a0bc7
    SAR EDX,0x1f                        ; 004a0bc9
    SHL EDX,0x3                         ; 004a0bcc
    SBB EAX,EDX                         ; 004a0bcf
    SAR EAX,0x3                         ; 004a0bd1
    MOV dword ptr [ESP + 0x10],EAX      ; 004a0bd4
    MOV ESI,dword ptr [ESP + 0x10]      ; 004a0bd8
    MOV EAX,dword ptr [EBX + 0x1d8]     ; 004a0bdc | g_WindowStack[0].backup_height
    IMUL EAX,ESI                        ; 004a0be2
    PUSH 0x807                          ; 004a0be5
    PUSH 0x6233d5                       ; 004a0bea | = "..\\shape\\edittool.cpp"
    MOV dword ptr [EBX + 0x1cc],0x0     ; 004a0bef | g_WindowStack[0].backup_x_offset
    PUSH EAX                            ; 004a0bf9
    MOV dword ptr [EBX + 0x1d0],0x0     ; 004a0bfa | g_WindowStack[0].backup_y_offset
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 004a0c04
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004a0c09
    MOV dword ptr [EBX + 0x1c8],EAX     ; 004a0c0c | g_WindowStack[0].screen_backup_buffer
    TEST EAX,EAX                        ; 004a0c12
    JNZ 0x004a0c38                      ; 004a0c14
        ;   XREF to: 004a0c38 (CONDITIONAL_JUMP)  ; LAB_004a0c38
    MOV EBP,0x6233eb                    ; 004a0c16 | = "..\\shape\\edittool.cpp"
    MOV EAX,0x809                       ; 004a0c1b
    PUSH 0x623401                       ; 004a0c20 | = "Out of memory to open editor window."
    MOV dword ptr [0x02f0ca48],EBP      ; 004a0c25 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004a0c2b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a0c30
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a0c35
    MOV EAX,dword ptr [EBX + 0x1c8]     ; 004a0c38 | g_WindowStack[0].screen_backup_buffer
        ;   Label: LAB_004a0c38
    MOV EDX,dword ptr [EBX + 0x1d8]     ; 004a0c3e | g_WindowStack[0].backup_height
    XOR EBP,EBP                         ; 004a0c44
    MOV dword ptr [ESP + 0x14],EAX      ; 004a0c46
    TEST EDX,EDX                        ; 004a0c4a
    JLE 0x004a0cb0                      ; 004a0c4c
        ;   XREF to: 004a0cb0 (CONDITIONAL_JUMP)  ; LAB_004a0cb0
    MOV ECX,dword ptr [0x0067939c]      ; 004a0c4e | g_BitsPerPixel
        ;   Label: LAB_004a0c4e
    MOV EDX,dword ptr [EBX + 0x1cc]     ; 004a0c54 | g_WindowStack[0].backup_x_offset
    IMUL EDX,ECX                        ; 004a0c5a
    MOV EAX,dword ptr [EBX + 0x1d0]     ; 004a0c5d | g_WindowStack[0].backup_y_offset
    ADD EAX,EBP                         ; 004a0c63
    LEA ESI,[EAX*0x4 + 0x0]             ; 004a0c65
    MOV EAX,EDX                         ; 004a0c6c
    SAR EDX,0x1f                        ; 004a0c6e
    SHL EDX,0x3                         ; 004a0c71
    SBB EAX,EDX                         ; 004a0c74
    SAR EAX,0x3                         ; 004a0c76
    MOV EDI,dword ptr [ESP + 0x14]      ; 004a0c79
    MOV ESI,dword ptr [ESI + 0x2cf6a9c] ; 004a0c7d | g_ScreenBufferArray
    MOV ECX,dword ptr [ESP + 0x10]      ; 004a0c83
    ADD ESI,EAX                         ; 004a0c87
    PUSH EDI                            ; 004a0c89
    MOV EAX,ECX                         ; 004a0c8a
    SHR ECX,0x2                         ; 004a0c8c
    MOVSD.REP ES:EDI,ESI                ; 004a0c8f
    MOV CL,AL                           ; 004a0c91
    AND CL,0x3                          ; 004a0c93
    MOVSB.REP ES:EDI,ESI                ; 004a0c96
    POP EDI                             ; 004a0c98
    MOV EAX,dword ptr [ESP + 0x10]      ; 004a0c99
    LEA ESI,[EDI + EAX*0x1]             ; 004a0c9d
    INC EBP                             ; 004a0ca0
    MOV EDI,dword ptr [EBX + 0x1d8]     ; 004a0ca1 | g_WindowStack[0].backup_height
    MOV dword ptr [ESP + 0x14],ESI      ; 004a0ca7
    CMP EBP,EDI                         ; 004a0cab
    JL 0x004a0c4e                       ; 004a0cad
        ;   XREF to: 004a0c4e (CONDITIONAL_JUMP)  ; LAB_004a0c4e
    NOP                                 ; 004a0caf
    MOV EAX,[0x02d02558]                ; 004a0cb0 | g_ClipLeft
        ;   Label: LAB_004a0cb0
    MOV dword ptr [EBX + 0x10],EAX      ; 004a0cb5 | g_WindowStack[0].saved_clip_left
    MOV EAX,[0x02d0255c]                ; 004a0cb8 | g_ClipTop
    MOV dword ptr [EBX + 0x14],EAX      ; 004a0cbd | g_WindowStack[0].saved_clip_top
    MOV EAX,[0x02d02560]                ; 004a0cc0 | g_ClipRight
    MOV dword ptr [EBX + 0x18],EAX      ; 004a0cc5 | g_WindowStack[0].saved_clip_right
    MOV EAX,[0x02d02564]                ; 004a0cc8 | g_ClipBottom
    MOV dword ptr [EBX + 0x1c],EAX      ; 004a0ccd | g_WindowStack[0].saved_clip_bottom
    MOV EAX,[0x02d02548]                ; 004a0cd0 | g_ViewportCenterXFixed
    MOV dword ptr [EBX + 0x20],EAX      ; 004a0cd5 | g_WindowStack[0].saved_viewport_center_x
    MOV EAX,[0x02d0254c]                ; 004a0cd8 | g_ViewportCenterYFixed
    MOV dword ptr [EBX + 0x24],EAX      ; 004a0cdd | g_WindowStack[0].saved_viewport_center_y
    MOV EAX,[0x02d02550]                ; 004a0ce0 | g_ViewportRightFixed
    MOV dword ptr [EBX + 0x28],EAX      ; 004a0ce5 | g_WindowStack[0].saved_viewport_right
    MOV EAX,[0x02d02554]                ; 004a0ce8 | g_ViewportBottomFixed
    MOV dword ptr [EBX + 0x2c],EAX      ; 004a0ced | g_WindowStack[0].saved_viewport_bottom
    MOV EAX,[0x02d02568]                ; 004a0cf0 | g_ViewportWidth
    MOV dword ptr [EBX + 0x30],EAX      ; 004a0cf5 | g_WindowStack[0].saved_viewport_width
    MOV EAX,[0x02d0256c]                ; 004a0cf8 | g_ViewportHeight
    MOV dword ptr [EBX + 0x34],EAX      ; 004a0cfd | g_WindowStack[0].saved_viewport_height
    MOV EAX,dword ptr [ESP + 0x30]      ; 004a0d00
    MOV dword ptr [EBX],EAX             ; 004a0d04 | g_WindowStack
    MOV EAX,dword ptr [ESP + 0x34]      ; 004a0d06
    MOV dword ptr [EBX + 0x4],EAX       ; 004a0d0a | g_WindowStack[0].top
    MOV EAX,dword ptr [ESP + 0x38]      ; 004a0d0d
    MOV dword ptr [EBX + 0x8],EAX       ; 004a0d11 | g_WindowStack[0].right
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004a0d14
    MOV EBP,dword ptr [ESP + 0x30]      ; 004a0d18
    MOV dword ptr [EBX + 0xc],EAX       ; 004a0d1c | g_WindowStack[0].bottom
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a0d1f
    MOV EDX,dword ptr [ESP + 0x34]      ; 004a0d23
    ADD EBP,EAX                         ; 004a0d27
    MOV EAX,dword ptr [ESP]             ; 004a0d29
    MOV ECX,dword ptr [ESP + 0x38]      ; 004a0d2c
    ADD EDX,EAX                         ; 004a0d30
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a0d32
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004a0d36
    SUB ECX,EAX                         ; 004a0d3a
    MOV EAX,dword ptr [ESP]             ; 004a0d3c
    MOV dword ptr [ESP + 0x34],EDX      ; 004a0d3f
    SUB EBX,EAX                         ; 004a0d43
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a0d45
    MOV dword ptr [ESP + 0x3c],EBX      ; 004a0d49
    LEA ESI,[EDX + EAX*0x1]             ; 004a0d4d
    LEA EAX,[EBX + -0x1]                ; 004a0d50
    PUSH EAX                            ; 004a0d53
    MOV dword ptr [ESP + 0x3c],ECX      ; 004a0d54
    LEA EAX,[ECX + -0x1]                ; 004a0d58
    PUSH EAX                            ; 004a0d5b
    PUSH ESI                            ; 004a0d5c
    PUSH EBP                            ; 004a0d5d
    MOV dword ptr [ESP + 0x40],EBP      ; 004a0d5e
    MOV dword ptr [ESP + 0x44],ESI      ; 004a0d62
    CALL engine_2d.c_setupViewportAndClipping_FUN_00401800 ; 004a0d66
        ;   XREF to: 00401800 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setupViewportAndClipping_FUN_00401800(int left, int top, int right, int bottom)
    ADD ESP,0x10                        ; 004a0d6b
    ADD ESP,0x18                        ; 004a0d6e
    POP EBP                             ; 004a0d71
    POP EDI                             ; 004a0d72
    POP ESI                             ; 004a0d73
    POP EBX                             ; 004a0d74
    RET                                 ; 004a0d75
    MOV ECX,0x622eae                    ; 004a0d76 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004a0d76
    MOV EBX,0x8d                        ; 004a0d7b
    PUSH 0x622ec4                       ; 004a0d80 | = "gEdFont must be set by the application."
    MOV dword ptr [0x02f0ca48],ECX      ; 004a0d85 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004a0d8b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a0d91
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a0d96
    JMP 0x004a0988                      ; 004a0d99
        ;   XREF to: 004a0988 (UNCONDITIONAL_JUMP)  ; LAB_004a0988
    XOR ESI,ESI                         ; 004a0d9e
        ;   Label: LAB_004a0d9e
    MOV dword ptr [ESP + 0x30],ESI      ; 004a0da0
    JMP 0x004a0a67                      ; 004a0da4
        ;   XREF to: 004a0a67 (UNCONDITIONAL_JUMP)  ; LAB_004a0a67
    XOR EDI,EDI                         ; 004a0da9
        ;   Label: LAB_004a0da9
    MOV dword ptr [ESP + 0x34],EDI      ; 004a0dab
    JMP 0x004a0b6f                      ; 004a0daf
        ;   XREF to: 004a0b6f (UNCONDITIONAL_JUMP)  ; LAB_004a0b6f
    MOV dword ptr [EBX + 0x1c8],0x0     ; 004a0db4 | g_WindowStack[0].screen_backup_buffer
        ;   Label: LAB_004a0db4
    JMP 0x004a0cb0                      ; 004a0dbe
        ;   XREF to: 004a0cb0 (UNCONDITIONAL_JUMP)  ; LAB_004a0cb0

