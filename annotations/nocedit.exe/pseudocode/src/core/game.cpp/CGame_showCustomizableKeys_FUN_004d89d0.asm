; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_showCustomizableKeys_FUN_004d89d0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; char[256]        Stack[-0x1c10]:256  local_1c10
; char[256]        Stack[-0x1b10]:256  local_1b10
; char[256]        Stack[-0x1a10]:256  local_1a10
; char[256]        Stack[-0x1910]:256  local_1910
; char[256]        Stack[-0x1810]:256  local_1810
; char[256]        Stack[-0x1710]:256  local_1710
; char[256]        Stack[-0x1610]:256  local_1610
; char[256]        Stack[-0x1510]:256  local_1510
; char[256]        Stack[-0x1410]:256  local_1410
; char[256]        Stack[-0x1310]:256  local_1310
; char[256]        Stack[-0x1210]:256  local_1210
; char[256]        Stack[-0x1110]:256  local_1110
; char[256]        Stack[-0x1010]:256  local_1010
; char[256]        Stack[-0xf10]:256  local_f10
; char[256]        Stack[-0xe10]:256  local_e10
; char[256]        Stack[-0xd10]:256  local_d10
; char[256]        Stack[-0xc10]:256  local_c10
; char[256]        Stack[-0xb10]:256  local_b10
; char[256]        Stack[-0xa10]:256  local_a10
; char[256]        Stack[-0x910]:256  local_910
; char[256]        Stack[-0x810]:256  local_810
; char[256]        Stack[-0x710]:256  local_710
; char[256]        Stack[-0x610]:256  local_610
; char[256]        Stack[-0x510]:256  local_510
; char[256]        Stack[-0x410]:256  local_410
; char[256]        Stack[-0x310]:256  local_310
; char[256]        Stack[-0x210]:256  local_210
; char[256]        Stack[-0x110]:256  local_110
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004daab2
;
; Referenced Globals:
;   TerminatedCString s_s_s_0062b28d
;   TerminatedCString s_Quick_help_0062b295
;   TerminatedCString s_F1_Toggle_help_0062b2a0
;   TerminatedCString s_F2_Save_game_0062b2b1
;   TerminatedCString s_F3_Restore_game_0062b2c0
;   TerminatedCString s_F5_Toggle_mute_0062b2d2
;   TerminatedCString s_F6_Quick_save_0062b2e3
;   TerminatedCString s_F9_Quick_load_0062b2f3
;   TerminatedCString s_ESC_Pause_game_0062b303
;   TerminatedCString s_Forward_0062b314
;   TerminatedCString s_Back_0062b31c
;   TerminatedCString s_Walk_0062b321
;   TerminatedCString s_Run_0062b326
;   TerminatedCString s_Strafe_on_0062b32a
;   TerminatedCString s_Strafe_left_0062b334
;   ... and 31 more
;
; Called Functions:
;   core_menu.cpp_getKeyDisplayName_FUN_005134e0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_font.cpp_CBitFont_drawText_FUN_004cda80
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
;   support_newmsg.cpp_getLocalizedString_FUN_005441f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d89d0
        ;   Label: core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0
    PUSH ESI                            ; 004d89d1
    PUSH EDI                            ; 004d89d2
    PUSH EBP                            ; 004d89d3
    SUB ESP,0x1c00                      ; 004d89d4
    MOV EBX,dword ptr [0x00679394]      ; 004d89da | g_WindowWidth
    MOV ESI,dword ptr [ESP + 0x1c14]    ; 004d89e0
    PUSH 0xffff                         ; 004d89e7
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 004d89ec
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 004d89f1
    PUSH 0x58                           ; 004d89f4
    MOV EDX,dword ptr [0x020a5720]      ; 004d89f6 | g_ThemeFont
    PUSH EDX                            ; 004d89fc
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0 ; 004d89fd
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d8a02
    PUSH 0x58                           ; 004d8a05
    MOV ECX,dword ptr [0x020a5720]      ; 004d8a07 | g_ThemeFont
    PUSH ECX                            ; 004d8a0d
    MOV [0x02d831cc],EAX                ; 004d8a0e | g_HelpLineHeight
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0 ; 004d8a13
        ;   XREF to: 004d01a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0(CBitFont * font, int char_code)
    ADD ESP,0x8                         ; 004d8a18
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8a1b | g_HelpLineHeight
    MOV [0x02d831d0],EAX                ; 004d8a21 | g_HelpCharWidth
    PUSH 0x62b295                       ; 004d8a26 | = "Quick help"
    SHL EDX,0x2                         ; 004d8a2b
    SHL EAX,0x2                         ; 004d8a2e
    MOV dword ptr [0x02d831c8],EDX      ; 004d8a31 | g_HelpCursorY
    MOV [0x02d831c4],EAX                ; 004d8a37 | g_HelpCursorX
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d8a3c
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d8a41
    PUSH -0x1                           ; 004d8a44
    PUSH 0x7                            ; 004d8a46
    MOV EDI,dword ptr [0x02d831c8]      ; 004d8a48 | g_HelpCursorY
    PUSH EDI                            ; 004d8a4e
    MOV EBP,dword ptr [0x02d831c4]      ; 004d8a4f | g_HelpCursorX
    PUSH EBP                            ; 004d8a55
    PUSH EAX                            ; 004d8a56
    MOV EAX,[0x020a5720]                ; 004d8a57 | g_ThemeFont
    PUSH EAX                            ; 004d8a5c
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d8a5d
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d8a62 | g_HelpLineHeight
    ADD dword ptr [0x02d831c8],EAX      ; 004d8a67 | g_HelpCursorY
    SHL EAX,0x2                         ; 004d8a6d
    MOV EDX,dword ptr [0x00679398]      ; 004d8a70 | g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d8a76 | g_HelpCursorY
    SUB EDX,EAX                         ; 004d8a7c
    ADD ESP,0x18                        ; 004d8a7e
    CMP EDX,ECX                         ; 004d8a81
    JGE 0x004d8ab5                      ; 004d8a83
        ;   XREF to: 004d8ab5 (CONDITIONAL_JUMP)  ; LAB_004d8ab5
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8a85 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d8a8b
    MOV ECX,0x3                         ; 004d8a92
    SUB EAX,EDX                         ; 004d8a97
    MOV EBX,dword ptr [0x00679394]      ; 004d8a99 | g_WindowWidth
    ADD EAX,EAX                         ; 004d8a9f
    MOV EDX,EBX                         ; 004d8aa1
    MOV [0x02d831c8],EAX                ; 004d8aa3 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d8aa8
    MOV EAX,EBX                         ; 004d8aab
    IDIV ECX                            ; 004d8aad
    ADD dword ptr [0x02d831c4],EAX      ; 004d8aaf | g_HelpCursorX
    MOV EAX,[0x02d831cc]                ; 004d8ab5 | g_HelpLineHeight
        ;   Label: LAB_004d8ab5
    MOV EBP,dword ptr [0x02d831c8]      ; 004d8aba | g_HelpCursorY
    ADD EBP,EAX                         ; 004d8ac0
    PUSH 0x62b2a0                       ; 004d8ac2 | = "F1 = Toggle help"
    MOV dword ptr [0x02d831c8],EBP      ; 004d8ac7 | g_HelpCursorY
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d8acd
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d8ad2
    PUSH -0x1                           ; 004d8ad5
    PUSH 0x7                            ; 004d8ad7
    MOV EDX,dword ptr [0x02d831c8]      ; 004d8ad9 | g_HelpCursorY
    PUSH EDX                            ; 004d8adf
    MOV ECX,dword ptr [0x02d831c4]      ; 004d8ae0 | g_HelpCursorX
    PUSH ECX                            ; 004d8ae6
    PUSH EAX                            ; 004d8ae7
    MOV EDI,dword ptr [0x020a5720]      ; 004d8ae8 | g_ThemeFont
    PUSH EDI                            ; 004d8aee
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d8aef
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d8af4 | g_HelpLineHeight
    MOV EBP,dword ptr [0x02d831c8]      ; 004d8af9 | g_HelpCursorY
    MOV EDX,dword ptr [0x00679398]      ; 004d8aff | g_WindowHeight
    ADD EBP,EAX                         ; 004d8b05
    SHL EAX,0x2                         ; 004d8b07
    ADD ESP,0x18                        ; 004d8b0a
    SUB EDX,EAX                         ; 004d8b0d
    MOV dword ptr [0x02d831c8],EBP      ; 004d8b0f | g_HelpCursorY
    CMP EDX,EBP                         ; 004d8b15
    JGE 0x004d8b49                      ; 004d8b17
        ;   XREF to: 004d8b49 (CONDITIONAL_JUMP)  ; LAB_004d8b49
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8b19 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d8b1f
    MOV ECX,0x3                         ; 004d8b26
    SUB EAX,EDX                         ; 004d8b2b
    MOV EBX,dword ptr [0x00679394]      ; 004d8b2d | g_WindowWidth
    ADD EAX,EAX                         ; 004d8b33
    MOV EDX,EBX                         ; 004d8b35
    MOV [0x02d831c8],EAX                ; 004d8b37 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d8b3c
    MOV EAX,EBX                         ; 004d8b3f
    IDIV ECX                            ; 004d8b41
    ADD dword ptr [0x02d831c4],EAX      ; 004d8b43 | g_HelpCursorX
    PUSH 0x62b2b1                       ; 004d8b49 | = "F2 = Save game"
        ;   Label: LAB_004d8b49
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d8b4e
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d8b53
    PUSH -0x1                           ; 004d8b56
    PUSH 0x7                            ; 004d8b58
    MOV EDI,dword ptr [0x02d831c8]      ; 004d8b5a | g_HelpCursorY
    PUSH EDI                            ; 004d8b60
    MOV EBP,dword ptr [0x02d831c4]      ; 004d8b61 | g_HelpCursorX
    PUSH EBP                            ; 004d8b67
    PUSH EAX                            ; 004d8b68
    MOV EAX,[0x020a5720]                ; 004d8b69 | g_ThemeFont
    PUSH EAX                            ; 004d8b6e
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d8b6f
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d8b74 | g_HelpLineHeight
    ADD dword ptr [0x02d831c8],EAX      ; 004d8b79 | g_HelpCursorY
    SHL EAX,0x2                         ; 004d8b7f
    MOV EDX,dword ptr [0x00679398]      ; 004d8b82 | g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d8b88 | g_HelpCursorY
    SUB EDX,EAX                         ; 004d8b8e
    ADD ESP,0x18                        ; 004d8b90
    CMP EDX,ECX                         ; 004d8b93
    JGE 0x004d8bc7                      ; 004d8b95
        ;   XREF to: 004d8bc7 (CONDITIONAL_JUMP)  ; LAB_004d8bc7
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8b97 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d8b9d
    MOV ECX,0x3                         ; 004d8ba4
    SUB EAX,EDX                         ; 004d8ba9
    MOV EBX,dword ptr [0x00679394]      ; 004d8bab | g_WindowWidth
    ADD EAX,EAX                         ; 004d8bb1
    MOV EDX,EBX                         ; 004d8bb3
    MOV [0x02d831c8],EAX                ; 004d8bb5 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d8bba
    MOV EAX,EBX                         ; 004d8bbd
    IDIV ECX                            ; 004d8bbf
    ADD dword ptr [0x02d831c4],EAX      ; 004d8bc1 | g_HelpCursorX
    PUSH 0x62b2c0                       ; 004d8bc7 | = "F3 = Restore game"
        ;   Label: LAB_004d8bc7
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d8bcc
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d8bd1
    PUSH -0x1                           ; 004d8bd4
    PUSH 0x7                            ; 004d8bd6
    MOV EBP,dword ptr [0x02d831c8]      ; 004d8bd8 | g_HelpCursorY
    PUSH EBP                            ; 004d8bde
    MOV EDX,dword ptr [0x02d831c4]      ; 004d8bdf | g_HelpCursorX
    PUSH EDX                            ; 004d8be5
    PUSH EAX                            ; 004d8be6
    MOV ECX,dword ptr [0x020a5720]      ; 004d8be7 | g_ThemeFont
    PUSH ECX                            ; 004d8bed
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d8bee
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d8bf3 | g_HelpLineHeight
    MOV EDI,dword ptr [0x02d831c8]      ; 004d8bf8 | g_HelpCursorY
    MOV EDX,dword ptr [0x00679398]      ; 004d8bfe | g_WindowHeight
    ADD EDI,EAX                         ; 004d8c04
    SHL EAX,0x2                         ; 004d8c06
    ADD ESP,0x18                        ; 004d8c09
    SUB EDX,EAX                         ; 004d8c0c
    MOV dword ptr [0x02d831c8],EDI      ; 004d8c0e | g_HelpCursorY
    CMP EDX,EDI                         ; 004d8c14
    JGE 0x004d8c48                      ; 004d8c16
        ;   XREF to: 004d8c48 (CONDITIONAL_JUMP)  ; LAB_004d8c48
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8c18 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d8c1e
    MOV ECX,0x3                         ; 004d8c25
    SUB EAX,EDX                         ; 004d8c2a
    MOV EBX,dword ptr [0x00679394]      ; 004d8c2c | g_WindowWidth
    ADD EAX,EAX                         ; 004d8c32
    MOV EDX,EBX                         ; 004d8c34
    MOV [0x02d831c8],EAX                ; 004d8c36 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d8c3b
    MOV EAX,EBX                         ; 004d8c3e
    IDIV ECX                            ; 004d8c40
    ADD dword ptr [0x02d831c4],EAX      ; 004d8c42 | g_HelpCursorX
    PUSH 0x62b2d2                       ; 004d8c48 | = "F5 = Toggle mute"
        ;   Label: LAB_004d8c48
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d8c4d
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d8c52
    PUSH -0x1                           ; 004d8c55
    PUSH 0x7                            ; 004d8c57
    MOV ECX,dword ptr [0x02d831c8]      ; 004d8c59 | g_HelpCursorY
    PUSH ECX                            ; 004d8c5f
    MOV EDI,dword ptr [0x02d831c4]      ; 004d8c60 | g_HelpCursorX
    PUSH EDI                            ; 004d8c66
    PUSH EAX                            ; 004d8c67
    MOV EBP,dword ptr [0x020a5720]      ; 004d8c68 | g_ThemeFont
    PUSH EBP                            ; 004d8c6e
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d8c6f
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d8c74 | g_HelpLineHeight
    ADD dword ptr [0x02d831c8],EAX      ; 004d8c79 | g_HelpCursorY
    SHL EAX,0x2                         ; 004d8c7f
    MOV EDX,dword ptr [0x00679398]      ; 004d8c82 | g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d8c88 | g_HelpCursorY
    SUB EDX,EAX                         ; 004d8c8e
    ADD ESP,0x18                        ; 004d8c90
    CMP EDX,ECX                         ; 004d8c93
    JGE 0x004d8cc7                      ; 004d8c95
        ;   XREF to: 004d8cc7 (CONDITIONAL_JUMP)  ; LAB_004d8cc7
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8c97 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d8c9d
    MOV ECX,0x3                         ; 004d8ca4
    SUB EAX,EDX                         ; 004d8ca9
    MOV EBX,dword ptr [0x00679394]      ; 004d8cab | g_WindowWidth
    ADD EAX,EAX                         ; 004d8cb1
    MOV EDX,EBX                         ; 004d8cb3
    MOV [0x02d831c8],EAX                ; 004d8cb5 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d8cba
    MOV EAX,EBX                         ; 004d8cbd
    IDIV ECX                            ; 004d8cbf
    ADD dword ptr [0x02d831c4],EAX      ; 004d8cc1 | g_HelpCursorX
    PUSH 0x62b2e3                       ; 004d8cc7 | = "F6 = Quick save"
        ;   Label: LAB_004d8cc7
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d8ccc
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d8cd1
    PUSH -0x1                           ; 004d8cd4
    PUSH 0x7                            ; 004d8cd6
    MOV EBP,dword ptr [0x02d831c8]      ; 004d8cd8 | g_HelpCursorY
    PUSH EBP                            ; 004d8cde
    MOV EDX,dword ptr [0x02d831c4]      ; 004d8cdf | g_HelpCursorX
    PUSH EDX                            ; 004d8ce5
    PUSH EAX                            ; 004d8ce6
    MOV ECX,dword ptr [0x020a5720]      ; 004d8ce7 | g_ThemeFont
    PUSH ECX                            ; 004d8ced
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d8cee
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d8cf3 | g_HelpLineHeight
    MOV EDI,dword ptr [0x02d831c8]      ; 004d8cf8 | g_HelpCursorY
    MOV EDX,dword ptr [0x00679398]      ; 004d8cfe | g_WindowHeight
    ADD EDI,EAX                         ; 004d8d04
    SHL EAX,0x2                         ; 004d8d06
    ADD ESP,0x18                        ; 004d8d09
    SUB EDX,EAX                         ; 004d8d0c
    MOV dword ptr [0x02d831c8],EDI      ; 004d8d0e | g_HelpCursorY
    CMP EDX,EDI                         ; 004d8d14
    JGE 0x004d8d48                      ; 004d8d16
        ;   XREF to: 004d8d48 (CONDITIONAL_JUMP)  ; LAB_004d8d48
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8d18 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d8d1e
    MOV ECX,0x3                         ; 004d8d25
    SUB EAX,EDX                         ; 004d8d2a
    MOV EBX,dword ptr [0x00679394]      ; 004d8d2c | g_WindowWidth
    ADD EAX,EAX                         ; 004d8d32
    MOV EDX,EBX                         ; 004d8d34
    MOV [0x02d831c8],EAX                ; 004d8d36 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d8d3b
    MOV EAX,EBX                         ; 004d8d3e
    IDIV ECX                            ; 004d8d40
    ADD dword ptr [0x02d831c4],EAX      ; 004d8d42 | g_HelpCursorX
    PUSH 0x62b2f3                       ; 004d8d48 | = "F9 = Quick load"
        ;   Label: LAB_004d8d48
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d8d4d
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d8d52
    PUSH -0x1                           ; 004d8d55
    PUSH 0x7                            ; 004d8d57
    MOV ECX,dword ptr [0x02d831c8]      ; 004d8d59 | g_HelpCursorY
    PUSH ECX                            ; 004d8d5f
    MOV EDI,dword ptr [0x02d831c4]      ; 004d8d60 | g_HelpCursorX
    PUSH EDI                            ; 004d8d66
    PUSH EAX                            ; 004d8d67
    MOV EBP,dword ptr [0x020a5720]      ; 004d8d68 | g_ThemeFont
    PUSH EBP                            ; 004d8d6e
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d8d6f
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d8d74 | g_HelpLineHeight
    ADD dword ptr [0x02d831c8],EAX      ; 004d8d79 | g_HelpCursorY
    SHL EAX,0x2                         ; 004d8d7f
    MOV EDX,dword ptr [0x00679398]      ; 004d8d82 | g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d8d88 | g_HelpCursorY
    SUB EDX,EAX                         ; 004d8d8e
    ADD ESP,0x18                        ; 004d8d90
    CMP EDX,ECX                         ; 004d8d93
    JGE 0x004d8dc7                      ; 004d8d95
        ;   XREF to: 004d8dc7 (CONDITIONAL_JUMP)  ; LAB_004d8dc7
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8d97 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d8d9d
    MOV ECX,0x3                         ; 004d8da4
    SUB EAX,EDX                         ; 004d8da9
    MOV EBX,dword ptr [0x00679394]      ; 004d8dab | g_WindowWidth
    ADD EAX,EAX                         ; 004d8db1
    MOV EDX,EBX                         ; 004d8db3
    MOV [0x02d831c8],EAX                ; 004d8db5 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d8dba
    MOV EAX,EBX                         ; 004d8dbd
    IDIV ECX                            ; 004d8dbf
    ADD dword ptr [0x02d831c4],EAX      ; 004d8dc1 | g_HelpCursorX
    PUSH 0x62b303                       ; 004d8dc7 | = "ESC = Pause game"
        ;   Label: LAB_004d8dc7
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d8dcc
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d8dd1
    PUSH -0x1                           ; 004d8dd4
    PUSH 0x7                            ; 004d8dd6
    MOV EBP,dword ptr [0x02d831c8]      ; 004d8dd8 | g_HelpCursorY
    PUSH EBP                            ; 004d8dde
    MOV EDX,dword ptr [0x02d831c4]      ; 004d8ddf | g_HelpCursorX
    PUSH EDX                            ; 004d8de5
    PUSH EAX                            ; 004d8de6
    MOV ECX,dword ptr [0x020a5720]      ; 004d8de7 | g_ThemeFont
    PUSH ECX                            ; 004d8ded
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d8dee
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d8df3 | g_HelpLineHeight
    MOV EDI,dword ptr [0x02d831c8]      ; 004d8df8 | g_HelpCursorY
    MOV EDX,dword ptr [0x00679398]      ; 004d8dfe | g_WindowHeight
    ADD EDI,EAX                         ; 004d8e04
    SHL EAX,0x2                         ; 004d8e06
    ADD ESP,0x18                        ; 004d8e09
    SUB EDX,EAX                         ; 004d8e0c
    MOV dword ptr [0x02d831c8],EDI      ; 004d8e0e | g_HelpCursorY
    CMP EDX,EDI                         ; 004d8e14
    JGE 0x004d8e48                      ; 004d8e16
        ;   XREF to: 004d8e48 (CONDITIONAL_JUMP)  ; LAB_004d8e48
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8e18 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d8e1e
    MOV ECX,0x3                         ; 004d8e25
    SUB EAX,EDX                         ; 004d8e2a
    MOV EBX,dword ptr [0x00679394]      ; 004d8e2c | g_WindowWidth
    ADD EAX,EAX                         ; 004d8e32
    MOV EDX,EBX                         ; 004d8e34
    MOV [0x02d831c8],EAX                ; 004d8e36 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d8e3b
    MOV EAX,EBX                         ; 004d8e3e
    IDIV ECX                            ; 004d8e40
    ADD dword ptr [0x02d831c4],EAX      ; 004d8e42 | g_HelpCursorX
    MOV EAX,[0x02d831cc]                ; 004d8e48 | g_HelpLineHeight
        ;   Label: LAB_004d8e48
    MOV ECX,dword ptr [0x02d831c8]      ; 004d8e4d | g_HelpCursorY
    ADD ECX,EAX                         ; 004d8e53
    PUSH 0x62b314                       ; 004d8e55 | = "Forward"
    MOV dword ptr [0x02d831c8],ECX      ; 004d8e5a | g_HelpCursorY
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d8e60
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d8e65
    PUSH EAX                            ; 004d8e68
    MOV EDX,dword ptr [ESI + 0x28]      ; 004d8e69
    PUSH EDX                            ; 004d8e6c
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d8e6d
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d8e72
    PUSH EAX                            ; 004d8e75
    PUSH 0x62b28d                       ; 004d8e76 | = "%s = %s"
    LEA EAX,[ESP + 0x40c]               ; 004d8e7b
    PUSH EAX                            ; 004d8e82
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d8e83
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d8e88
    PUSH -0x1                           ; 004d8e8b
    PUSH 0x7                            ; 004d8e8d
    MOV EDI,dword ptr [0x02d831c8]      ; 004d8e8f | g_HelpCursorY
    PUSH EDI                            ; 004d8e95
    MOV EBP,dword ptr [0x02d831c4]      ; 004d8e96 | g_HelpCursorX
    PUSH EBP                            ; 004d8e9c
    LEA EAX,[ESP + 0x410]               ; 004d8e9d
    PUSH EAX                            ; 004d8ea4
    MOV EAX,[0x020a5720]                ; 004d8ea5 | g_ThemeFont
    PUSH EAX                            ; 004d8eaa
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d8eab
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d8eb0 | g_HelpLineHeight
    ADD dword ptr [0x02d831c8],EAX      ; 004d8eb5 | g_HelpCursorY
    SHL EAX,0x2                         ; 004d8ebb
    MOV EDX,dword ptr [0x00679398]      ; 004d8ebe | g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d8ec4 | g_HelpCursorY
    SUB EDX,EAX                         ; 004d8eca
    ADD ESP,0x18                        ; 004d8ecc
    CMP EDX,ECX                         ; 004d8ecf
    JGE 0x004d8f03                      ; 004d8ed1
        ;   XREF to: 004d8f03 (CONDITIONAL_JUMP)  ; LAB_004d8f03
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8ed3 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d8ed9
    MOV ECX,0x3                         ; 004d8ee0
    SUB EAX,EDX                         ; 004d8ee5
    MOV EBX,dword ptr [0x00679394]      ; 004d8ee7 | g_WindowWidth
    ADD EAX,EAX                         ; 004d8eed
    MOV EDX,EBX                         ; 004d8eef
    MOV [0x02d831c8],EAX                ; 004d8ef1 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d8ef6
    MOV EAX,EBX                         ; 004d8ef9
    IDIV ECX                            ; 004d8efb
    ADD dword ptr [0x02d831c4],EAX      ; 004d8efd | g_HelpCursorX
    PUSH 0x62b31c                       ; 004d8f03 | = "Back"
        ;   Label: LAB_004d8f03
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d8f08
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d8f0d
    PUSH EAX                            ; 004d8f10
    MOV EDX,dword ptr [ESI + 0x2c]      ; 004d8f11
    PUSH EDX                            ; 004d8f14
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d8f15
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d8f1a
    PUSH EAX                            ; 004d8f1d
    PUSH 0x62b28d                       ; 004d8f1e | = "%s = %s"
    LEA EAX,[ESP + 0xb0c]               ; 004d8f23
    PUSH EAX                            ; 004d8f2a
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d8f2b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d8f30
    PUSH -0x1                           ; 004d8f33
    PUSH 0x7                            ; 004d8f35
    MOV EBP,dword ptr [0x02d831c8]      ; 004d8f37 | g_HelpCursorY
    PUSH EBP                            ; 004d8f3d
    MOV EAX,[0x02d831c4]                ; 004d8f3e | g_HelpCursorX
    PUSH EAX                            ; 004d8f43
    LEA EAX,[ESP + 0xb10]               ; 004d8f44
    PUSH EAX                            ; 004d8f4b
    MOV EDX,dword ptr [0x020a5720]      ; 004d8f4c | g_ThemeFont
    PUSH EDX                            ; 004d8f52
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d8f53
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d8f58 | g_HelpLineHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d8f5d | g_HelpCursorY
    MOV EDX,dword ptr [0x00679398]      ; 004d8f63 | g_WindowHeight
    ADD ECX,EAX                         ; 004d8f69
    SHL EAX,0x2                         ; 004d8f6b
    ADD ESP,0x18                        ; 004d8f6e
    SUB EDX,EAX                         ; 004d8f71
    MOV dword ptr [0x02d831c8],ECX      ; 004d8f73 | g_HelpCursorY
    CMP EDX,ECX                         ; 004d8f79
    JGE 0x004d8fad                      ; 004d8f7b
        ;   XREF to: 004d8fad (CONDITIONAL_JUMP)  ; LAB_004d8fad
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8f7d | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d8f83
    MOV ECX,0x3                         ; 004d8f8a
    SUB EAX,EDX                         ; 004d8f8f
    MOV EBX,dword ptr [0x00679394]      ; 004d8f91 | g_WindowWidth
    ADD EAX,EAX                         ; 004d8f97
    MOV EDX,EBX                         ; 004d8f99
    MOV [0x02d831c8],EAX                ; 004d8f9b | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d8fa0
    MOV EAX,EBX                         ; 004d8fa3
    IDIV ECX                            ; 004d8fa5
    ADD dword ptr [0x02d831c4],EAX      ; 004d8fa7 | g_HelpCursorX
    MOV EAX,[0x0067b654]                ; 004d8fad | g_CGamePtr
        ;   Label: LAB_004d8fad
    CMP dword ptr [EAX + 0x98],0x0      ; 004d8fb2 | g_CGameInstance.always_run
    JZ 0x004da03f                       ; 004d8fb9
        ;   XREF to: 004da03f (CONDITIONAL_JUMP)  ; LAB_004da03f
    PUSH 0x62b321                       ; 004d8fbf | = "Walk"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d8fc4
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d8fc9
    PUSH EAX                            ; 004d8fcc
    MOV EDX,dword ptr [ESI + 0x30]      ; 004d8fcd
    PUSH EDX                            ; 004d8fd0
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d8fd1
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d8fd6
    PUSH EAX                            ; 004d8fd9
    PUSH 0x62b28d                       ; 004d8fda | = "%s = %s"
    LEA EAX,[ESP + 0x130c]              ; 004d8fdf
    PUSH EAX                            ; 004d8fe6
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d8fe7
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d8fec
    PUSH -0x1                           ; 004d8fef
    PUSH 0x7                            ; 004d8ff1
    MOV EBP,dword ptr [0x02d831c8]      ; 004d8ff3 | g_HelpCursorY
    PUSH EBP                            ; 004d8ff9
    MOV EAX,[0x02d831c4]                ; 004d8ffa | g_HelpCursorX
    PUSH EAX                            ; 004d8fff
    LEA EAX,[ESP + 0x1310]              ; 004d9000
    PUSH EAX                            ; 004d9007
    MOV EDX,dword ptr [0x020a5720]      ; 004d9008 | g_ThemeFont
    PUSH EDX                            ; 004d900e
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d900f
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d9014 | g_HelpLineHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9019 | g_HelpCursorY
    MOV EDX,dword ptr [0x00679398]      ; 004d901f | g_WindowHeight
    ADD ECX,EAX                         ; 004d9025
    SHL EAX,0x2                         ; 004d9027
    ADD ESP,0x18                        ; 004d902a
    SUB EDX,EAX                         ; 004d902d
    MOV dword ptr [0x02d831c8],ECX      ; 004d902f | g_HelpCursorY
    CMP EDX,ECX                         ; 004d9035
        ;   Label: LAB_004d9035
    JGE 0x004d9069                      ; 004d9037
        ;   XREF to: 004d9069 (CONDITIONAL_JUMP)  ; LAB_004d9069
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9039 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d903f
    MOV ECX,0x3                         ; 004d9046
    SUB EAX,EDX                         ; 004d904b
    MOV EBX,dword ptr [0x00679394]      ; 004d904d | g_WindowWidth
    ADD EAX,EAX                         ; 004d9053
    MOV EDX,EBX                         ; 004d9055
    MOV [0x02d831c8],EAX                ; 004d9057 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d905c
    MOV EAX,EBX                         ; 004d905f
    IDIV ECX                            ; 004d9061
    ADD dword ptr [0x02d831c4],EAX      ; 004d9063 | g_HelpCursorX
    PUSH 0x62b32a                       ; 004d9069 | = "Strafe on"
        ;   Label: LAB_004d9069
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d906e
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d9073
    PUSH EAX                            ; 004d9076
    MOV EDX,dword ptr [ESI + 0x34]      ; 004d9077
    PUSH EDX                            ; 004d907a
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d907b
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d9080
    PUSH EAX                            ; 004d9083
    PUSH 0x62b28d                       ; 004d9084 | = "%s = %s"
    LEA EAX,[ESP + 0x20c]               ; 004d9089
    PUSH EAX                            ; 004d9090
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d9091
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d9096
    PUSH -0x1                           ; 004d9099
    PUSH 0x7                            ; 004d909b
    MOV EAX,[0x02d831c8]                ; 004d909d | g_HelpCursorY
    PUSH EAX                            ; 004d90a2
    MOV EDX,dword ptr [0x02d831c4]      ; 004d90a3 | g_HelpCursorX
    PUSH EDX                            ; 004d90a9
    LEA EAX,[ESP + 0x210]               ; 004d90aa
    PUSH EAX                            ; 004d90b1
    MOV ECX,dword ptr [0x020a5720]      ; 004d90b2 | g_ThemeFont
    PUSH ECX                            ; 004d90b8
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d90b9
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d90be | g_HelpLineHeight
    MOV EDI,dword ptr [0x02d831c8]      ; 004d90c3 | g_HelpCursorY
    MOV EDX,dword ptr [0x00679398]      ; 004d90c9 | g_WindowHeight
    ADD EDI,EAX                         ; 004d90cf
    SHL EAX,0x2                         ; 004d90d1
    ADD ESP,0x18                        ; 004d90d4
    SUB EDX,EAX                         ; 004d90d7
    MOV dword ptr [0x02d831c8],EDI      ; 004d90d9 | g_HelpCursorY
    CMP EDX,EDI                         ; 004d90df
    JGE 0x004d9113                      ; 004d90e1
        ;   XREF to: 004d9113 (CONDITIONAL_JUMP)  ; LAB_004d9113
    MOV EDX,dword ptr [0x02d831cc]      ; 004d90e3 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d90e9
    MOV ECX,0x3                         ; 004d90f0
    SUB EAX,EDX                         ; 004d90f5
    MOV EBX,dword ptr [0x00679394]      ; 004d90f7 | g_WindowWidth
    ADD EAX,EAX                         ; 004d90fd
    MOV EDX,EBX                         ; 004d90ff
    MOV [0x02d831c8],EAX                ; 004d9101 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d9106
    MOV EAX,EBX                         ; 004d9109
    IDIV ECX                            ; 004d910b
    ADD dword ptr [0x02d831c4],EAX      ; 004d910d | g_HelpCursorX
    PUSH 0x62b334                       ; 004d9113 | = "Strafe left"
        ;   Label: LAB_004d9113
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9118
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d911d
    PUSH EAX                            ; 004d9120
    MOV EDX,dword ptr [ESI + 0x38]      ; 004d9121
    PUSH EDX                            ; 004d9124
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9125
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d912a
    PUSH EAX                            ; 004d912d
    PUSH 0x62b28d                       ; 004d912e | = "%s = %s"
    LEA EAX,[ESP + 0x90c]               ; 004d9133
    PUSH EAX                            ; 004d913a
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d913b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d9140
    PUSH -0x1                           ; 004d9143
    PUSH 0x7                            ; 004d9145
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9147 | g_HelpCursorY
    PUSH ECX                            ; 004d914d
    MOV EDI,dword ptr [0x02d831c4]      ; 004d914e | g_HelpCursorX
    PUSH EDI                            ; 004d9154
    LEA EAX,[ESP + 0x910]               ; 004d9155
    PUSH EAX                            ; 004d915c
    MOV EBP,dword ptr [0x020a5720]      ; 004d915d | g_ThemeFont
    PUSH EBP                            ; 004d9163
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d9164
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d9169 | g_HelpLineHeight
    ADD dword ptr [0x02d831c8],EAX      ; 004d916e | g_HelpCursorY
    SHL EAX,0x2                         ; 004d9174
    MOV EDX,dword ptr [0x00679398]      ; 004d9177 | g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d917d | g_HelpCursorY
    SUB EDX,EAX                         ; 004d9183
    ADD ESP,0x18                        ; 004d9185
    CMP EDX,ECX                         ; 004d9188
    JGE 0x004d91bc                      ; 004d918a
        ;   XREF to: 004d91bc (CONDITIONAL_JUMP)  ; LAB_004d91bc
    MOV EDX,dword ptr [0x02d831cc]      ; 004d918c | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9192
    MOV ECX,0x3                         ; 004d9199
    SUB EAX,EDX                         ; 004d919e
    MOV EBX,dword ptr [0x00679394]      ; 004d91a0 | g_WindowWidth
    ADD EAX,EAX                         ; 004d91a6
    MOV EDX,EBX                         ; 004d91a8
    MOV [0x02d831c8],EAX                ; 004d91aa | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d91af
    MOV EAX,EBX                         ; 004d91b2
    IDIV ECX                            ; 004d91b4
    ADD dword ptr [0x02d831c4],EAX      ; 004d91b6 | g_HelpCursorX
    PUSH 0x62b340                       ; 004d91bc | = "Strafe right"
        ;   Label: LAB_004d91bc
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d91c1
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d91c6
    PUSH EAX                            ; 004d91c9
    MOV EDX,dword ptr [ESI + 0x3c]      ; 004d91ca
    PUSH EDX                            ; 004d91cd
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d91ce
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d91d3
    PUSH EAX                            ; 004d91d6
    PUSH 0x62b28d                       ; 004d91d7 | = "%s = %s"
    LEA EAX,[ESP + 0x100c]              ; 004d91dc
    PUSH EAX                            ; 004d91e3
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d91e4
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d91e9
    PUSH -0x1                           ; 004d91ec
    PUSH 0x7                            ; 004d91ee
    MOV EBP,dword ptr [0x02d831c8]      ; 004d91f0 | g_HelpCursorY
    PUSH EBP                            ; 004d91f6
    MOV EAX,[0x02d831c4]                ; 004d91f7 | g_HelpCursorX
    PUSH EAX                            ; 004d91fc
    LEA EAX,[ESP + 0x1010]              ; 004d91fd
    PUSH EAX                            ; 004d9204
    MOV EDX,dword ptr [0x020a5720]      ; 004d9205 | g_ThemeFont
    PUSH EDX                            ; 004d920b
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d920c
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d9211 | g_HelpLineHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9216 | g_HelpCursorY
    MOV EDX,dword ptr [0x00679398]      ; 004d921c | g_WindowHeight
    ADD ECX,EAX                         ; 004d9222
    SHL EAX,0x2                         ; 004d9224
    ADD ESP,0x18                        ; 004d9227
    SUB EDX,EAX                         ; 004d922a
    MOV dword ptr [0x02d831c8],ECX      ; 004d922c | g_HelpCursorY
    CMP EDX,ECX                         ; 004d9232
    JGE 0x004d9266                      ; 004d9234
        ;   XREF to: 004d9266 (CONDITIONAL_JUMP)  ; LAB_004d9266
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9236 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d923c
    MOV ECX,0x3                         ; 004d9243
    SUB EAX,EDX                         ; 004d9248
    MOV EBX,dword ptr [0x00679394]      ; 004d924a | g_WindowWidth
    ADD EAX,EAX                         ; 004d9250
    MOV EDX,EBX                         ; 004d9252
    MOV [0x02d831c8],EAX                ; 004d9254 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d9259
    MOV EAX,EBX                         ; 004d925c
    IDIV ECX                            ; 004d925e
    ADD dword ptr [0x02d831c4],EAX      ; 004d9260 | g_HelpCursorX
    PUSH 0x62b34d                       ; 004d9266 | = "Turn left"
        ;   Label: LAB_004d9266
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d926b
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d9270
    PUSH EAX                            ; 004d9273
    MOV EDX,dword ptr [ESI + 0x44]      ; 004d9274
    PUSH EDX                            ; 004d9277
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9278
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d927d
    PUSH EAX                            ; 004d9280
    PUSH 0x62b28d                       ; 004d9281 | = "%s = %s"
    LEA EAX,[ESP + 0x170c]              ; 004d9286
    PUSH EAX                            ; 004d928d
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d928e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d9293
    PUSH -0x1                           ; 004d9296
    PUSH 0x7                            ; 004d9298
    MOV EAX,[0x02d831c8]                ; 004d929a | g_HelpCursorY
    PUSH EAX                            ; 004d929f
    MOV EDX,dword ptr [0x02d831c4]      ; 004d92a0 | g_HelpCursorX
    PUSH EDX                            ; 004d92a6
    LEA EAX,[ESP + 0x1710]              ; 004d92a7
    PUSH EAX                            ; 004d92ae
    MOV ECX,dword ptr [0x020a5720]      ; 004d92af | g_ThemeFont
    PUSH ECX                            ; 004d92b5
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d92b6
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d92bb | g_HelpLineHeight
    MOV EDI,dword ptr [0x02d831c8]      ; 004d92c0 | g_HelpCursorY
    MOV EDX,dword ptr [0x00679398]      ; 004d92c6 | g_WindowHeight
    ADD EDI,EAX                         ; 004d92cc
    SHL EAX,0x2                         ; 004d92ce
    ADD ESP,0x18                        ; 004d92d1
    SUB EDX,EAX                         ; 004d92d4
    MOV dword ptr [0x02d831c8],EDI      ; 004d92d6 | g_HelpCursorY
    CMP EDX,EDI                         ; 004d92dc
    JGE 0x004d9310                      ; 004d92de
        ;   XREF to: 004d9310 (CONDITIONAL_JUMP)  ; LAB_004d9310
    MOV EDX,dword ptr [0x02d831cc]      ; 004d92e0 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d92e6
    MOV ECX,0x3                         ; 004d92ed
    SUB EAX,EDX                         ; 004d92f2
    MOV EBX,dword ptr [0x00679394]      ; 004d92f4 | g_WindowWidth
    ADD EAX,EAX                         ; 004d92fa
    MOV EDX,EBX                         ; 004d92fc
    MOV [0x02d831c8],EAX                ; 004d92fe | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d9303
    MOV EAX,EBX                         ; 004d9306
    IDIV ECX                            ; 004d9308
    ADD dword ptr [0x02d831c4],EAX      ; 004d930a | g_HelpCursorX
    PUSH 0x62b357                       ; 004d9310 | = "Turn right"
        ;   Label: LAB_004d9310
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9315
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d931a
    PUSH EAX                            ; 004d931d
    MOV EDX,dword ptr [ESI + 0x40]      ; 004d931e
    PUSH EDX                            ; 004d9321
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9322
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d9327
    PUSH EAX                            ; 004d932a
    PUSH 0x62b28d                       ; 004d932b | = "%s = %s"
    LEA EAX,[ESP + 0x150c]              ; 004d9330
    PUSH EAX                            ; 004d9337
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d9338
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d933d
    PUSH -0x1                           ; 004d9340
    PUSH 0x7                            ; 004d9342
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9344 | g_HelpCursorY
    PUSH ECX                            ; 004d934a
    MOV EDI,dword ptr [0x02d831c4]      ; 004d934b | g_HelpCursorX
    PUSH EDI                            ; 004d9351
    LEA EAX,[ESP + 0x1510]              ; 004d9352
    PUSH EAX                            ; 004d9359
    MOV EBP,dword ptr [0x020a5720]      ; 004d935a | g_ThemeFont
    PUSH EBP                            ; 004d9360
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d9361
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d9366 | g_HelpLineHeight
    ADD dword ptr [0x02d831c8],EAX      ; 004d936b | g_HelpCursorY
    SHL EAX,0x2                         ; 004d9371
    MOV EDX,dword ptr [0x00679398]      ; 004d9374 | g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d937a | g_HelpCursorY
    SUB EDX,EAX                         ; 004d9380
    ADD ESP,0x18                        ; 004d9382
    CMP EDX,ECX                         ; 004d9385
    JGE 0x004d93b9                      ; 004d9387
        ;   XREF to: 004d93b9 (CONDITIONAL_JUMP)  ; LAB_004d93b9
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9389 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d938f
    MOV ECX,0x3                         ; 004d9396
    SUB EAX,EDX                         ; 004d939b
    MOV EBX,dword ptr [0x00679394]      ; 004d939d | g_WindowWidth
    ADD EAX,EAX                         ; 004d93a3
    MOV EDX,EBX                         ; 004d93a5
    MOV [0x02d831c8],EAX                ; 004d93a7 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d93ac
    MOV EAX,EBX                         ; 004d93af
    IDIV ECX                            ; 004d93b1
    ADD dword ptr [0x02d831c4],EAX      ; 004d93b3 | g_HelpCursorX
    PUSH 0x62b362                       ; 004d93b9 | = "Fire / Action"
        ;   Label: LAB_004d93b9
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d93be
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d93c3
    PUSH EAX                            ; 004d93c6
    MOV EDX,dword ptr [ESI + 0x48]      ; 004d93c7
    PUSH EDX                            ; 004d93ca
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d93cb
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d93d0
    PUSH EAX                            ; 004d93d3
    PUSH 0x62b28d                       ; 004d93d4 | = "%s = %s"
    LEA EAX,[ESP + 0x140c]              ; 004d93d9
    PUSH EAX                            ; 004d93e0
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d93e1
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d93e6
    PUSH -0x1                           ; 004d93e9
    PUSH 0x7                            ; 004d93eb
    MOV EBP,dword ptr [0x02d831c8]      ; 004d93ed | g_HelpCursorY
    PUSH EBP                            ; 004d93f3
    MOV EAX,[0x02d831c4]                ; 004d93f4 | g_HelpCursorX
    PUSH EAX                            ; 004d93f9
    LEA EAX,[ESP + 0x1410]              ; 004d93fa
    PUSH EAX                            ; 004d9401
    MOV EDX,dword ptr [0x020a5720]      ; 004d9402 | g_ThemeFont
    PUSH EDX                            ; 004d9408
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d9409
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d940e | g_HelpLineHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9413 | g_HelpCursorY
    MOV EDX,dword ptr [0x00679398]      ; 004d9419 | g_WindowHeight
    ADD ECX,EAX                         ; 004d941f
    SHL EAX,0x2                         ; 004d9421
    ADD ESP,0x18                        ; 004d9424
    SUB EDX,EAX                         ; 004d9427
    MOV dword ptr [0x02d831c8],ECX      ; 004d9429 | g_HelpCursorY
    CMP EDX,ECX                         ; 004d942f
    JGE 0x004d9463                      ; 004d9431
        ;   XREF to: 004d9463 (CONDITIONAL_JUMP)  ; LAB_004d9463
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9433 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9439
    MOV ECX,0x3                         ; 004d9440
    SUB EAX,EDX                         ; 004d9445
    MOV EBX,dword ptr [0x00679394]      ; 004d9447 | g_WindowWidth
    ADD EAX,EAX                         ; 004d944d
    MOV EDX,EBX                         ; 004d944f
    MOV [0x02d831c8],EAX                ; 004d9451 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d9456
    MOV EAX,EBX                         ; 004d9459
    IDIV ECX                            ; 004d945b
    ADD dword ptr [0x02d831c4],EAX      ; 004d945d | g_HelpCursorX
    PUSH 0x62b370                       ; 004d9463 | = "Use item"
        ;   Label: LAB_004d9463
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9468
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d946d
    PUSH EAX                            ; 004d9470
    MOV EDX,dword ptr [ESI + 0x4c]      ; 004d9471
    PUSH EDX                            ; 004d9474
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9475
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d947a
    PUSH EAX                            ; 004d947d
    PUSH 0x62b28d                       ; 004d947e | = "%s = %s"
    LEA EAX,[ESP + 0x1a0c]              ; 004d9483
    PUSH EAX                            ; 004d948a
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d948b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d9490
    PUSH -0x1                           ; 004d9493
    PUSH 0x7                            ; 004d9495
    MOV EAX,[0x02d831c8]                ; 004d9497 | g_HelpCursorY
    PUSH EAX                            ; 004d949c
    MOV EDX,dword ptr [0x02d831c4]      ; 004d949d | g_HelpCursorX
    PUSH EDX                            ; 004d94a3
    LEA EAX,[ESP + 0x1a10]              ; 004d94a4
    PUSH EAX                            ; 004d94ab
    MOV ECX,dword ptr [0x020a5720]      ; 004d94ac | g_ThemeFont
    PUSH ECX                            ; 004d94b2
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d94b3
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d94b8 | g_HelpLineHeight
    MOV EDI,dword ptr [0x02d831c8]      ; 004d94bd | g_HelpCursorY
    MOV EDX,dword ptr [0x00679398]      ; 004d94c3 | g_WindowHeight
    ADD EDI,EAX                         ; 004d94c9
    SHL EAX,0x2                         ; 004d94cb
    ADD ESP,0x18                        ; 004d94ce
    SUB EDX,EAX                         ; 004d94d1
    MOV dword ptr [0x02d831c8],EDI      ; 004d94d3 | g_HelpCursorY
    CMP EDX,EDI                         ; 004d94d9
    JGE 0x004d950d                      ; 004d94db
        ;   XREF to: 004d950d (CONDITIONAL_JUMP)  ; LAB_004d950d
    MOV EDX,dword ptr [0x02d831cc]      ; 004d94dd | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d94e3
    MOV ECX,0x3                         ; 004d94ea
    SUB EAX,EDX                         ; 004d94ef
    MOV EBX,dword ptr [0x00679394]      ; 004d94f1 | g_WindowWidth
    ADD EAX,EAX                         ; 004d94f7
    MOV EDX,EBX                         ; 004d94f9
    MOV [0x02d831c8],EAX                ; 004d94fb | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d9500
    MOV EAX,EBX                         ; 004d9503
    IDIV ECX                            ; 004d9505
    ADD dword ptr [0x02d831c4],EAX      ; 004d9507 | g_HelpCursorX
    PUSH 0x62b379                       ; 004d950d | = "Light"
        ;   Label: LAB_004d950d
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9512
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d9517
    PUSH EAX                            ; 004d951a
    MOV EDX,dword ptr [ESI + 0x50]      ; 004d951b
    PUSH EDX                            ; 004d951e
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d951f
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d9524
    PUSH EAX                            ; 004d9527
    PUSH 0x62b28d                       ; 004d9528 | = "%s = %s"
    LEA EAX,[ESP + 0x120c]              ; 004d952d
    PUSH EAX                            ; 004d9534
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d9535
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d953a
    PUSH -0x1                           ; 004d953d
    PUSH 0x7                            ; 004d953f
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9541 | g_HelpCursorY
    PUSH ECX                            ; 004d9547
    MOV EDI,dword ptr [0x02d831c4]      ; 004d9548 | g_HelpCursorX
    PUSH EDI                            ; 004d954e
    LEA EAX,[ESP + 0x1210]              ; 004d954f
    PUSH EAX                            ; 004d9556
    MOV EBP,dword ptr [0x020a5720]      ; 004d9557 | g_ThemeFont
    PUSH EBP                            ; 004d955d
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d955e
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d9563 | g_HelpLineHeight
    ADD dword ptr [0x02d831c8],EAX      ; 004d9568 | g_HelpCursorY
    SHL EAX,0x2                         ; 004d956e
    MOV EDX,dword ptr [0x00679398]      ; 004d9571 | g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9577 | g_HelpCursorY
    SUB EDX,EAX                         ; 004d957d
    ADD ESP,0x18                        ; 004d957f
    CMP EDX,ECX                         ; 004d9582
    JGE 0x004d95b6                      ; 004d9584
        ;   XREF to: 004d95b6 (CONDITIONAL_JUMP)  ; LAB_004d95b6
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9586 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d958c
    MOV ECX,0x3                         ; 004d9593
    SUB EAX,EDX                         ; 004d9598
    MOV EBX,dword ptr [0x00679394]      ; 004d959a | g_WindowWidth
    ADD EAX,EAX                         ; 004d95a0
    MOV EDX,EBX                         ; 004d95a2
    MOV [0x02d831c8],EAX                ; 004d95a4 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d95a9
    MOV EAX,EBX                         ; 004d95ac
    IDIV ECX                            ; 004d95ae
    ADD dword ptr [0x02d831c4],EAX      ; 004d95b0 | g_HelpCursorX
    PUSH 0x62b37f                       ; 004d95b6 | = "Night Vision"
        ;   Label: LAB_004d95b6
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d95bb
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d95c0
    PUSH EAX                            ; 004d95c3
    MOV EDX,dword ptr [ESI + 0x54]      ; 004d95c4
    PUSH EDX                            ; 004d95c7
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d95c8
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d95cd
    PUSH EAX                            ; 004d95d0
    PUSH 0x62b28d                       ; 004d95d1 | = "%s = %s"
    LEA EAX,[ESP + 0x190c]              ; 004d95d6
    PUSH EAX                            ; 004d95dd
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d95de
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d95e3
    PUSH -0x1                           ; 004d95e6
    PUSH 0x7                            ; 004d95e8
    MOV EBP,dword ptr [0x02d831c8]      ; 004d95ea | g_HelpCursorY
    PUSH EBP                            ; 004d95f0
    MOV EAX,[0x02d831c4]                ; 004d95f1 | g_HelpCursorX
    PUSH EAX                            ; 004d95f6
    LEA EAX,[ESP + 0x1910]              ; 004d95f7
    PUSH EAX                            ; 004d95fe
    MOV EDX,dword ptr [0x020a5720]      ; 004d95ff | g_ThemeFont
    PUSH EDX                            ; 004d9605
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d9606
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d960b | g_HelpLineHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9610 | g_HelpCursorY
    MOV EDX,dword ptr [0x00679398]      ; 004d9616 | g_WindowHeight
    ADD ECX,EAX                         ; 004d961c
    SHL EAX,0x2                         ; 004d961e
    ADD ESP,0x18                        ; 004d9621
    SUB EDX,EAX                         ; 004d9624
    MOV dword ptr [0x02d831c8],ECX      ; 004d9626 | g_HelpCursorY
    CMP EDX,ECX                         ; 004d962c
    JGE 0x004d9660                      ; 004d962e
        ;   XREF to: 004d9660 (CONDITIONAL_JUMP)  ; LAB_004d9660
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9630 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9636
    MOV ECX,0x3                         ; 004d963d
    SUB EAX,EDX                         ; 004d9642
    MOV EBX,dword ptr [0x00679394]      ; 004d9644 | g_WindowWidth
    ADD EAX,EAX                         ; 004d964a
    MOV EDX,EBX                         ; 004d964c
    MOV [0x02d831c8],EAX                ; 004d964e | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d9653
    MOV EAX,EBX                         ; 004d9656
    IDIV ECX                            ; 004d9658
    ADD dword ptr [0x02d831c4],EAX      ; 004d965a | g_HelpCursorX
    PUSH 0x62b38c                       ; 004d9660 | = "Draw"
        ;   Label: LAB_004d9660
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9665
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d966a
    PUSH EAX                            ; 004d966d
    MOV EDX,dword ptr [ESI + 0x58]      ; 004d966e
    PUSH EDX                            ; 004d9671
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9672
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d9677
    PUSH EAX                            ; 004d967a
    PUSH 0x62b28d                       ; 004d967b | = "%s = %s"
    LEA EAX,[ESP + 0x10c]               ; 004d9680
    PUSH EAX                            ; 004d9687
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d9688
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d968d
    PUSH -0x1                           ; 004d9690
    PUSH 0x7                            ; 004d9692
    MOV EAX,[0x02d831c8]                ; 004d9694 | g_HelpCursorY
    PUSH EAX                            ; 004d9699
    MOV EDX,dword ptr [0x02d831c4]      ; 004d969a | g_HelpCursorX
    PUSH EDX                            ; 004d96a0
    LEA EAX,[ESP + 0x110]               ; 004d96a1
    PUSH EAX                            ; 004d96a8
    MOV ECX,dword ptr [0x020a5720]      ; 004d96a9 | g_ThemeFont
    PUSH ECX                            ; 004d96af
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d96b0
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d96b5 | g_HelpLineHeight
    MOV EDI,dword ptr [0x02d831c8]      ; 004d96ba | g_HelpCursorY
    MOV EDX,dword ptr [0x00679398]      ; 004d96c0 | g_WindowHeight
    ADD EDI,EAX                         ; 004d96c6
    SHL EAX,0x2                         ; 004d96c8
    ADD ESP,0x18                        ; 004d96cb
    SUB EDX,EAX                         ; 004d96ce
    MOV dword ptr [0x02d831c8],EDI      ; 004d96d0 | g_HelpCursorY
    CMP EDX,EDI                         ; 004d96d6
    JGE 0x004d970a                      ; 004d96d8
        ;   XREF to: 004d970a (CONDITIONAL_JUMP)  ; LAB_004d970a
    MOV EDX,dword ptr [0x02d831cc]      ; 004d96da | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d96e0
    MOV ECX,0x3                         ; 004d96e7
    SUB EAX,EDX                         ; 004d96ec
    MOV EBX,dword ptr [0x00679394]      ; 004d96ee | g_WindowWidth
    ADD EAX,EAX                         ; 004d96f4
    MOV EDX,EBX                         ; 004d96f6
    MOV [0x02d831c8],EAX                ; 004d96f8 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d96fd
    MOV EAX,EBX                         ; 004d9700
    IDIV ECX                            ; 004d9702
    ADD dword ptr [0x02d831c4],EAX      ; 004d9704 | g_HelpCursorX
    PUSH 0x62b391                       ; 004d970a | = "Point up"
        ;   Label: LAB_004d970a
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d970f
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d9714
    PUSH EAX                            ; 004d9717
    MOV EDX,dword ptr [ESI + 0x60]      ; 004d9718
    PUSH EDX                            ; 004d971b
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d971c
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d9721
    PUSH EAX                            ; 004d9724
    PUSH 0x62b28d                       ; 004d9725 | = "%s = %s"
    LEA EAX,[ESP + 0x80c]               ; 004d972a
    PUSH EAX                            ; 004d9731
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d9732
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d9737
    PUSH -0x1                           ; 004d973a
    PUSH 0x7                            ; 004d973c
    MOV ECX,dword ptr [0x02d831c8]      ; 004d973e | g_HelpCursorY
    PUSH ECX                            ; 004d9744
    MOV EDI,dword ptr [0x02d831c4]      ; 004d9745 | g_HelpCursorX
    PUSH EDI                            ; 004d974b
    LEA EAX,[ESP + 0x810]               ; 004d974c
    PUSH EAX                            ; 004d9753
    MOV EBP,dword ptr [0x020a5720]      ; 004d9754 | g_ThemeFont
    PUSH EBP                            ; 004d975a
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d975b
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d9760 | g_HelpLineHeight
    ADD dword ptr [0x02d831c8],EAX      ; 004d9765 | g_HelpCursorY
    SHL EAX,0x2                         ; 004d976b
    MOV EDX,dword ptr [0x00679398]      ; 004d976e | g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9774 | g_HelpCursorY
    SUB EDX,EAX                         ; 004d977a
    ADD ESP,0x18                        ; 004d977c
    CMP EDX,ECX                         ; 004d977f
    JGE 0x004d97b3                      ; 004d9781
        ;   XREF to: 004d97b3 (CONDITIONAL_JUMP)  ; LAB_004d97b3
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9783 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9789
    MOV ECX,0x3                         ; 004d9790
    SUB EAX,EDX                         ; 004d9795
    MOV EBX,dword ptr [0x00679394]      ; 004d9797 | g_WindowWidth
    ADD EAX,EAX                         ; 004d979d
    MOV EDX,EBX                         ; 004d979f
    MOV [0x02d831c8],EAX                ; 004d97a1 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d97a6
    MOV EAX,EBX                         ; 004d97a9
    IDIV ECX                            ; 004d97ab
    ADD dword ptr [0x02d831c4],EAX      ; 004d97ad | g_HelpCursorX
    PUSH 0x62b39a                       ; 004d97b3 | = "Point down"
        ;   Label: LAB_004d97b3
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d97b8
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d97bd
    PUSH EAX                            ; 004d97c0
    MOV EDX,dword ptr [ESI + 0x64]      ; 004d97c1
    PUSH EDX                            ; 004d97c4
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d97c5
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d97ca
    PUSH EAX                            ; 004d97cd
    PUSH 0x62b28d                       ; 004d97ce | = "%s = %s"
    LEA EAX,[ESP + 0xf0c]               ; 004d97d3
    PUSH EAX                            ; 004d97da
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d97db
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d97e0
    PUSH -0x1                           ; 004d97e3
    PUSH 0x7                            ; 004d97e5
    MOV EBP,dword ptr [0x02d831c8]      ; 004d97e7 | g_HelpCursorY
    PUSH EBP                            ; 004d97ed
    MOV EAX,[0x02d831c4]                ; 004d97ee | g_HelpCursorX
    PUSH EAX                            ; 004d97f3
    LEA EAX,[ESP + 0xf10]               ; 004d97f4
    PUSH EAX                            ; 004d97fb
    MOV EDX,dword ptr [0x020a5720]      ; 004d97fc | g_ThemeFont
    PUSH EDX                            ; 004d9802
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d9803
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d9808 | g_HelpLineHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d980d | g_HelpCursorY
    MOV EDX,dword ptr [0x00679398]      ; 004d9813 | g_WindowHeight
    ADD ECX,EAX                         ; 004d9819
    SHL EAX,0x2                         ; 004d981b
    ADD ESP,0x18                        ; 004d981e
    SUB EDX,EAX                         ; 004d9821
    MOV dword ptr [0x02d831c8],ECX      ; 004d9823 | g_HelpCursorY
    CMP EDX,ECX                         ; 004d9829
    JGE 0x004d985d                      ; 004d982b
        ;   XREF to: 004d985d (CONDITIONAL_JUMP)  ; LAB_004d985d
    MOV EDX,dword ptr [0x02d831cc]      ; 004d982d | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9833
    MOV ECX,0x3                         ; 004d983a
    SUB EAX,EDX                         ; 004d983f
    MOV EBX,dword ptr [0x00679394]      ; 004d9841 | g_WindowWidth
    ADD EAX,EAX                         ; 004d9847
    MOV EDX,EBX                         ; 004d9849
    MOV [0x02d831c8],EAX                ; 004d984b | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d9850
    MOV EAX,EBX                         ; 004d9853
    IDIV ECX                            ; 004d9855
    ADD dword ptr [0x02d831c4],EAX      ; 004d9857 | g_HelpCursorX
    PUSH 0x62b3a5                       ; 004d985d | = "Jump"
        ;   Label: LAB_004d985d
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9862
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d9867
    PUSH EAX                            ; 004d986a
    MOV EDX,dword ptr [ESI + 0x5c]      ; 004d986b
    PUSH EDX                            ; 004d986e
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d986f
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d9874
    PUSH EAX                            ; 004d9877
    PUSH 0x62b28d                       ; 004d9878 | = "%s = %s"
    LEA EAX,[ESP + 0x60c]               ; 004d987d
    PUSH EAX                            ; 004d9884
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d9885
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d988a
    PUSH -0x1                           ; 004d988d
    PUSH 0x7                            ; 004d988f
    MOV EAX,[0x02d831c8]                ; 004d9891 | g_HelpCursorY
    PUSH EAX                            ; 004d9896
    MOV EDX,dword ptr [0x02d831c4]      ; 004d9897 | g_HelpCursorX
    PUSH EDX                            ; 004d989d
    LEA EAX,[ESP + 0x610]               ; 004d989e
    PUSH EAX                            ; 004d98a5
    MOV ECX,dword ptr [0x020a5720]      ; 004d98a6 | g_ThemeFont
    PUSH ECX                            ; 004d98ac
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d98ad
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d98b2 | g_HelpLineHeight
    MOV EDI,dword ptr [0x02d831c8]      ; 004d98b7 | g_HelpCursorY
    MOV EDX,dword ptr [0x00679398]      ; 004d98bd | g_WindowHeight
    ADD EDI,EAX                         ; 004d98c3
    SHL EAX,0x2                         ; 004d98c5
    ADD ESP,0x18                        ; 004d98c8
    SUB EDX,EAX                         ; 004d98cb
    MOV dword ptr [0x02d831c8],EDI      ; 004d98cd | g_HelpCursorY
    CMP EDX,EDI                         ; 004d98d3
    JGE 0x004d9907                      ; 004d98d5
        ;   XREF to: 004d9907 (CONDITIONAL_JUMP)  ; LAB_004d9907
    MOV EDX,dword ptr [0x02d831cc]      ; 004d98d7 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d98dd
    MOV ECX,0x3                         ; 004d98e4
    SUB EAX,EDX                         ; 004d98e9
    MOV EBX,dword ptr [0x00679394]      ; 004d98eb | g_WindowWidth
    ADD EAX,EAX                         ; 004d98f1
    MOV EDX,EBX                         ; 004d98f3
    MOV [0x02d831c8],EAX                ; 004d98f5 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d98fa
    MOV EAX,EBX                         ; 004d98fd
    IDIV ECX                            ; 004d98ff
    ADD dword ptr [0x02d831c4],EAX      ; 004d9901 | g_HelpCursorX
    PUSH 0x62b3aa                       ; 004d9907 | = "Cycle pistol weapons"
        ;   Label: LAB_004d9907
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d990c
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d9911
    PUSH EAX                            ; 004d9914
    MOV EDX,dword ptr [ESI + 0x68]      ; 004d9915
    PUSH EDX                            ; 004d9918
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9919
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d991e
    PUSH EAX                            ; 004d9921
    PUSH 0x62b28d                       ; 004d9922 | = "%s = %s"
    LEA EAX,[ESP + 0xd0c]               ; 004d9927
    PUSH EAX                            ; 004d992e
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d992f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d9934
    PUSH -0x1                           ; 004d9937
    PUSH 0x7                            ; 004d9939
    MOV ECX,dword ptr [0x02d831c8]      ; 004d993b | g_HelpCursorY
    PUSH ECX                            ; 004d9941
    MOV EDI,dword ptr [0x02d831c4]      ; 004d9942 | g_HelpCursorX
    PUSH EDI                            ; 004d9948
    LEA EAX,[ESP + 0xd10]               ; 004d9949
    PUSH EAX                            ; 004d9950
    MOV EBP,dword ptr [0x020a5720]      ; 004d9951 | g_ThemeFont
    PUSH EBP                            ; 004d9957
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d9958
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d995d | g_HelpLineHeight
    ADD dword ptr [0x02d831c8],EAX      ; 004d9962 | g_HelpCursorY
    SHL EAX,0x2                         ; 004d9968
    MOV EDX,dword ptr [0x00679398]      ; 004d996b | g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9971 | g_HelpCursorY
    SUB EDX,EAX                         ; 004d9977
    ADD ESP,0x18                        ; 004d9979
    CMP EDX,ECX                         ; 004d997c
    JGE 0x004d99b0                      ; 004d997e
        ;   XREF to: 004d99b0 (CONDITIONAL_JUMP)  ; LAB_004d99b0
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9980 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9986
    MOV ECX,0x3                         ; 004d998d
    SUB EAX,EDX                         ; 004d9992
    MOV EBX,dword ptr [0x00679394]      ; 004d9994 | g_WindowWidth
    ADD EAX,EAX                         ; 004d999a
    MOV EDX,EBX                         ; 004d999c
    MOV [0x02d831c8],EAX                ; 004d999e | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d99a3
    MOV EAX,EBX                         ; 004d99a6
    IDIV ECX                            ; 004d99a8
    ADD dword ptr [0x02d831c4],EAX      ; 004d99aa | g_HelpCursorX
    PUSH 0x62b3bf                       ; 004d99b0 | = "Cycle assault weapons"
        ;   Label: LAB_004d99b0
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d99b5
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d99ba
    PUSH EAX                            ; 004d99bd
    MOV EDX,dword ptr [ESI + 0x6c]      ; 004d99be
    PUSH EDX                            ; 004d99c1
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d99c2
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d99c7
    PUSH EAX                            ; 004d99ca
    PUSH 0x62b28d                       ; 004d99cb | = "%s = %s"
    LEA EAX,[ESP + 0x30c]               ; 004d99d0
    PUSH EAX                            ; 004d99d7
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d99d8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d99dd
    PUSH -0x1                           ; 004d99e0
    PUSH 0x7                            ; 004d99e2
    MOV EBP,dword ptr [0x02d831c8]      ; 004d99e4 | g_HelpCursorY
    PUSH EBP                            ; 004d99ea
    MOV EAX,[0x02d831c4]                ; 004d99eb | g_HelpCursorX
    PUSH EAX                            ; 004d99f0
    LEA EAX,[ESP + 0x310]               ; 004d99f1
    PUSH EAX                            ; 004d99f8
    MOV EDX,dword ptr [0x020a5720]      ; 004d99f9 | g_ThemeFont
    PUSH EDX                            ; 004d99ff
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d9a00
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d9a05 | g_HelpLineHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9a0a | g_HelpCursorY
    MOV EDX,dword ptr [0x00679398]      ; 004d9a10 | g_WindowHeight
    ADD ECX,EAX                         ; 004d9a16
    SHL EAX,0x2                         ; 004d9a18
    ADD ESP,0x18                        ; 004d9a1b
    SUB EDX,EAX                         ; 004d9a1e
    MOV dword ptr [0x02d831c8],ECX      ; 004d9a20 | g_HelpCursorY
    CMP EDX,ECX                         ; 004d9a26
    JGE 0x004d9a5a                      ; 004d9a28
        ;   XREF to: 004d9a5a (CONDITIONAL_JUMP)  ; LAB_004d9a5a
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9a2a | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9a30
    MOV ECX,0x3                         ; 004d9a37
    SUB EAX,EDX                         ; 004d9a3c
    MOV EBX,dword ptr [0x00679394]      ; 004d9a3e | g_WindowWidth
    ADD EAX,EAX                         ; 004d9a44
    MOV EDX,EBX                         ; 004d9a46
    MOV [0x02d831c8],EAX                ; 004d9a48 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d9a4d
    MOV EAX,EBX                         ; 004d9a50
    IDIV ECX                            ; 004d9a52
    ADD dword ptr [0x02d831c4],EAX      ; 004d9a54 | g_HelpCursorX
    PUSH 0x62b3d5                       ; 004d9a5a | = "Cycle flame weapons"
        ;   Label: LAB_004d9a5a
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9a5f
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d9a64
    PUSH EAX                            ; 004d9a67
    MOV EDX,dword ptr [ESI + 0x70]      ; 004d9a68
    PUSH EDX                            ; 004d9a6b
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9a6c
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d9a71
    PUSH EAX                            ; 004d9a74
    PUSH 0x62b28d                       ; 004d9a75 | = "%s = %s"
    LEA EAX,[ESP + 0xa0c]               ; 004d9a7a
    PUSH EAX                            ; 004d9a81
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d9a82
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d9a87
    PUSH -0x1                           ; 004d9a8a
    PUSH 0x7                            ; 004d9a8c
    MOV EAX,[0x02d831c8]                ; 004d9a8e | g_HelpCursorY
    PUSH EAX                            ; 004d9a93
    MOV EDX,dword ptr [0x02d831c4]      ; 004d9a94 | g_HelpCursorX
    PUSH EDX                            ; 004d9a9a
    LEA EAX,[ESP + 0xa10]               ; 004d9a9b
    PUSH EAX                            ; 004d9aa2
    MOV ECX,dword ptr [0x020a5720]      ; 004d9aa3 | g_ThemeFont
    PUSH ECX                            ; 004d9aa9
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d9aaa
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d9aaf | g_HelpLineHeight
    MOV EDI,dword ptr [0x02d831c8]      ; 004d9ab4 | g_HelpCursorY
    MOV EDX,dword ptr [0x00679398]      ; 004d9aba | g_WindowHeight
    ADD EDI,EAX                         ; 004d9ac0
    SHL EAX,0x2                         ; 004d9ac2
    ADD ESP,0x18                        ; 004d9ac5
    SUB EDX,EAX                         ; 004d9ac8
    MOV dword ptr [0x02d831c8],EDI      ; 004d9aca | g_HelpCursorY
    CMP EDX,EDI                         ; 004d9ad0
    JGE 0x004d9b04                      ; 004d9ad2
        ;   XREF to: 004d9b04 (CONDITIONAL_JUMP)  ; LAB_004d9b04
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9ad4 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9ada
    MOV ECX,0x3                         ; 004d9ae1
    SUB EAX,EDX                         ; 004d9ae6
    MOV EBX,dword ptr [0x00679394]      ; 004d9ae8 | g_WindowWidth
    ADD EAX,EAX                         ; 004d9aee
    MOV EDX,EBX                         ; 004d9af0
    MOV [0x02d831c8],EAX                ; 004d9af2 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d9af7
    MOV EAX,EBX                         ; 004d9afa
    IDIV ECX                            ; 004d9afc
    ADD dword ptr [0x02d831c4],EAX      ; 004d9afe | g_HelpCursorX
    PUSH 0x62b3e9                       ; 004d9b04 | = "Cycle grenade weapons"
        ;   Label: LAB_004d9b04
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9b09
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d9b0e
    PUSH EAX                            ; 004d9b11
    MOV EDX,dword ptr [ESI + 0x74]      ; 004d9b12
    PUSH EDX                            ; 004d9b15
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9b16
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d9b1b
    PUSH EAX                            ; 004d9b1e
    PUSH 0x62b28d                       ; 004d9b1f | = "%s = %s"
    LEA EAX,[ESP + 0x110c]              ; 004d9b24
    PUSH EAX                            ; 004d9b2b
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d9b2c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d9b31
    PUSH -0x1                           ; 004d9b34
    PUSH 0x7                            ; 004d9b36
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9b38 | g_HelpCursorY
    PUSH ECX                            ; 004d9b3e
    MOV EDI,dword ptr [0x02d831c4]      ; 004d9b3f | g_HelpCursorX
    PUSH EDI                            ; 004d9b45
    LEA EAX,[ESP + 0x1110]              ; 004d9b46
    PUSH EAX                            ; 004d9b4d
    MOV EBP,dword ptr [0x020a5720]      ; 004d9b4e | g_ThemeFont
    PUSH EBP                            ; 004d9b54
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d9b55
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d9b5a | g_HelpLineHeight
    ADD dword ptr [0x02d831c8],EAX      ; 004d9b5f | g_HelpCursorY
    SHL EAX,0x2                         ; 004d9b65
    MOV EDX,dword ptr [0x00679398]      ; 004d9b68 | g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9b6e | g_HelpCursorY
    SUB EDX,EAX                         ; 004d9b74
    ADD ESP,0x18                        ; 004d9b76
    CMP EDX,ECX                         ; 004d9b79
    JGE 0x004d9bad                      ; 004d9b7b
        ;   XREF to: 004d9bad (CONDITIONAL_JUMP)  ; LAB_004d9bad
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9b7d | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9b83
    MOV ECX,0x3                         ; 004d9b8a
    SUB EAX,EDX                         ; 004d9b8f
    MOV EBX,dword ptr [0x00679394]      ; 004d9b91 | g_WindowWidth
    ADD EAX,EAX                         ; 004d9b97
    MOV EDX,EBX                         ; 004d9b99
    MOV [0x02d831c8],EAX                ; 004d9b9b | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d9ba0
    MOV EAX,EBX                         ; 004d9ba3
    IDIV ECX                            ; 004d9ba5
    ADD dword ptr [0x02d831c4],EAX      ; 004d9ba7 | g_HelpCursorX
    PUSH 0x62b3ff                       ; 004d9bad | = "Cycle melee weapons"
        ;   Label: LAB_004d9bad
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9bb2
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d9bb7
    PUSH EAX                            ; 004d9bba
    MOV EDX,dword ptr [ESI + 0x78]      ; 004d9bbb
    PUSH EDX                            ; 004d9bbe
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9bbf
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d9bc4
    PUSH EAX                            ; 004d9bc7
    PUSH 0x62b28d                       ; 004d9bc8 | = "%s = %s"
    LEA EAX,[ESP + 0x180c]              ; 004d9bcd
    PUSH EAX                            ; 004d9bd4
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d9bd5
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d9bda
    PUSH -0x1                           ; 004d9bdd
    PUSH 0x7                            ; 004d9bdf
    MOV EBP,dword ptr [0x02d831c8]      ; 004d9be1 | g_HelpCursorY
    PUSH EBP                            ; 004d9be7
    MOV EAX,[0x02d831c4]                ; 004d9be8 | g_HelpCursorX
    PUSH EAX                            ; 004d9bed
    LEA EAX,[ESP + 0x1810]              ; 004d9bee
    PUSH EAX                            ; 004d9bf5
    MOV EDX,dword ptr [0x020a5720]      ; 004d9bf6 | g_ThemeFont
    PUSH EDX                            ; 004d9bfc
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d9bfd
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d9c02 | g_HelpLineHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9c07 | g_HelpCursorY
    MOV EDX,dword ptr [0x00679398]      ; 004d9c0d | g_WindowHeight
    ADD ECX,EAX                         ; 004d9c13
    SHL EAX,0x2                         ; 004d9c15
    ADD ESP,0x18                        ; 004d9c18
    SUB EDX,EAX                         ; 004d9c1b
    MOV dword ptr [0x02d831c8],ECX      ; 004d9c1d | g_HelpCursorY
    CMP EDX,ECX                         ; 004d9c23
    JGE 0x004d9c57                      ; 004d9c25
        ;   XREF to: 004d9c57 (CONDITIONAL_JUMP)  ; LAB_004d9c57
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9c27 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9c2d
    MOV ECX,0x3                         ; 004d9c34
    SUB EAX,EDX                         ; 004d9c39
    MOV EBX,dword ptr [0x00679394]      ; 004d9c3b | g_WindowWidth
    ADD EAX,EAX                         ; 004d9c41
    MOV EDX,EBX                         ; 004d9c43
    MOV [0x02d831c8],EAX                ; 004d9c45 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d9c4a
    MOV EAX,EBX                         ; 004d9c4d
    IDIV ECX                            ; 004d9c4f
    ADD dword ptr [0x02d831c4],EAX      ; 004d9c51 | g_HelpCursorX
    PUSH 0x62b413                       ; 004d9c57 | = "Next weapon"
        ;   Label: LAB_004d9c57
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9c5c
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d9c61
    PUSH EAX                            ; 004d9c64
    MOV EDX,dword ptr [ESI + 0x7c]      ; 004d9c65
    PUSH EDX                            ; 004d9c68
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9c69
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d9c6e
    PUSH EAX                            ; 004d9c71
    PUSH 0x62b28d                       ; 004d9c72 | = "%s = %s"
    LEA EAX,[ESP + 0xc]                 ; 004d9c77
    PUSH EAX                            ; 004d9c7b
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d9c7c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d9c81
    PUSH -0x1                           ; 004d9c84
    PUSH 0x7                            ; 004d9c86
    MOV EAX,[0x02d831c8]                ; 004d9c88 | g_HelpCursorY
    PUSH EAX                            ; 004d9c8d
    MOV EDX,dword ptr [0x02d831c4]      ; 004d9c8e | g_HelpCursorX
    PUSH EDX                            ; 004d9c94
    LEA EAX,[ESP + 0x10]                ; 004d9c95
    PUSH EAX                            ; 004d9c99
    MOV ECX,dword ptr [0x020a5720]      ; 004d9c9a | g_ThemeFont
    PUSH ECX                            ; 004d9ca0
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d9ca1
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d9ca6 | g_HelpLineHeight
    MOV EDI,dword ptr [0x02d831c8]      ; 004d9cab | g_HelpCursorY
    MOV EDX,dword ptr [0x00679398]      ; 004d9cb1 | g_WindowHeight
    ADD EDI,EAX                         ; 004d9cb7
    SHL EAX,0x2                         ; 004d9cb9
    ADD ESP,0x18                        ; 004d9cbc
    SUB EDX,EAX                         ; 004d9cbf
    MOV dword ptr [0x02d831c8],EDI      ; 004d9cc1 | g_HelpCursorY
    CMP EDX,EDI                         ; 004d9cc7
    JGE 0x004d9cfb                      ; 004d9cc9
        ;   XREF to: 004d9cfb (CONDITIONAL_JUMP)  ; LAB_004d9cfb
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9ccb | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9cd1
    MOV ECX,0x3                         ; 004d9cd8
    SUB EAX,EDX                         ; 004d9cdd
    MOV EBX,dword ptr [0x00679394]      ; 004d9cdf | g_WindowWidth
    ADD EAX,EAX                         ; 004d9ce5
    MOV EDX,EBX                         ; 004d9ce7
    MOV [0x02d831c8],EAX                ; 004d9ce9 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d9cee
    MOV EAX,EBX                         ; 004d9cf1
    IDIV ECX                            ; 004d9cf3
    ADD dword ptr [0x02d831c4],EAX      ; 004d9cf5 | g_HelpCursorX
    PUSH 0x62b41f                       ; 004d9cfb | = "Previous weapon"
        ;   Label: LAB_004d9cfb
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9d00
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d9d05
    PUSH EAX                            ; 004d9d08
    MOV EDX,dword ptr [ESI + 0x80]      ; 004d9d09
    PUSH EDX                            ; 004d9d0f
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9d10
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d9d15
    PUSH EAX                            ; 004d9d18
    PUSH 0x62b28d                       ; 004d9d19 | = "%s = %s"
    LEA EAX,[ESP + 0x70c]               ; 004d9d1e
    PUSH EAX                            ; 004d9d25
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d9d26
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d9d2b
    PUSH -0x1                           ; 004d9d2e
    PUSH 0x7                            ; 004d9d30
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9d32 | g_HelpCursorY
    PUSH ECX                            ; 004d9d38
    MOV EDI,dword ptr [0x02d831c4]      ; 004d9d39 | g_HelpCursorX
    PUSH EDI                            ; 004d9d3f
    LEA EAX,[ESP + 0x710]               ; 004d9d40
    PUSH EAX                            ; 004d9d47
    MOV EBP,dword ptr [0x020a5720]      ; 004d9d48 | g_ThemeFont
    PUSH EBP                            ; 004d9d4e
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d9d4f
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d9d54 | g_HelpLineHeight
    ADD dword ptr [0x02d831c8],EAX      ; 004d9d59 | g_HelpCursorY
    SHL EAX,0x2                         ; 004d9d5f
    MOV EDX,dword ptr [0x00679398]      ; 004d9d62 | g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9d68 | g_HelpCursorY
    SUB EDX,EAX                         ; 004d9d6e
    ADD ESP,0x18                        ; 004d9d70
    CMP EDX,ECX                         ; 004d9d73
    JGE 0x004d9da7                      ; 004d9d75
        ;   XREF to: 004d9da7 (CONDITIONAL_JUMP)  ; LAB_004d9da7
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9d77 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9d7d
    MOV ECX,0x3                         ; 004d9d84
    SUB EAX,EDX                         ; 004d9d89
    MOV EBX,dword ptr [0x00679394]      ; 004d9d8b | g_WindowWidth
    ADD EAX,EAX                         ; 004d9d91
    MOV EDX,EBX                         ; 004d9d93
    MOV [0x02d831c8],EAX                ; 004d9d95 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d9d9a
    MOV EAX,EBX                         ; 004d9d9d
    IDIV ECX                            ; 004d9d9f
    ADD dword ptr [0x02d831c4],EAX      ; 004d9da1 | g_HelpCursorX
    PUSH 0x62b42f                       ; 004d9da7 | = "Next item"
        ;   Label: LAB_004d9da7
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9dac
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d9db1
    PUSH EAX                            ; 004d9db4
    MOV EDX,dword ptr [ESI + 0x84]      ; 004d9db5
    PUSH EDX                            ; 004d9dbb
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9dbc
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d9dc1
    PUSH EAX                            ; 004d9dc4
    PUSH 0x62b28d                       ; 004d9dc5 | = "%s = %s"
    LEA EAX,[ESP + 0xe0c]               ; 004d9dca
    PUSH EAX                            ; 004d9dd1
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d9dd2
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d9dd7
    PUSH -0x1                           ; 004d9dda
    PUSH 0x7                            ; 004d9ddc
    MOV EBP,dword ptr [0x02d831c8]      ; 004d9dde | g_HelpCursorY
    PUSH EBP                            ; 004d9de4
    MOV EAX,[0x02d831c4]                ; 004d9de5 | g_HelpCursorX
    PUSH EAX                            ; 004d9dea
    LEA EAX,[ESP + 0xe10]               ; 004d9deb
    PUSH EAX                            ; 004d9df2
    MOV EDX,dword ptr [0x020a5720]      ; 004d9df3 | g_ThemeFont
    PUSH EDX                            ; 004d9df9
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d9dfa
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d9dff | g_HelpLineHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9e04 | g_HelpCursorY
    MOV EDX,dword ptr [0x00679398]      ; 004d9e0a | g_WindowHeight
    ADD ECX,EAX                         ; 004d9e10
    SHL EAX,0x2                         ; 004d9e12
    ADD ESP,0x18                        ; 004d9e15
    SUB EDX,EAX                         ; 004d9e18
    MOV dword ptr [0x02d831c8],ECX      ; 004d9e1a | g_HelpCursorY
    CMP EDX,ECX                         ; 004d9e20
    JGE 0x004d9e54                      ; 004d9e22
        ;   XREF to: 004d9e54 (CONDITIONAL_JUMP)  ; LAB_004d9e54
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9e24 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9e2a
    MOV ECX,0x3                         ; 004d9e31
    SUB EAX,EDX                         ; 004d9e36
    MOV EBX,dword ptr [0x00679394]      ; 004d9e38 | g_WindowWidth
    ADD EAX,EAX                         ; 004d9e3e
    MOV EDX,EBX                         ; 004d9e40
    MOV [0x02d831c8],EAX                ; 004d9e42 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d9e47
    MOV EAX,EBX                         ; 004d9e4a
    IDIV ECX                            ; 004d9e4c
    ADD dword ptr [0x02d831c4],EAX      ; 004d9e4e | g_HelpCursorX
    PUSH 0x62b439                       ; 004d9e54 | = "Previous item"
        ;   Label: LAB_004d9e54
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9e59
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d9e5e
    PUSH EAX                            ; 004d9e61
    MOV EDX,dword ptr [ESI + 0x88]      ; 004d9e62
    PUSH EDX                            ; 004d9e68
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9e69
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d9e6e
    PUSH EAX                            ; 004d9e71
    PUSH 0x62b28d                       ; 004d9e72 | = "%s = %s"
    LEA EAX,[ESP + 0x50c]               ; 004d9e77
    PUSH EAX                            ; 004d9e7e
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d9e7f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d9e84
    PUSH -0x1                           ; 004d9e87
    PUSH 0x7                            ; 004d9e89
    MOV EAX,[0x02d831c8]                ; 004d9e8b | g_HelpCursorY
    PUSH EAX                            ; 004d9e90
    MOV EDX,dword ptr [0x02d831c4]      ; 004d9e91 | g_HelpCursorX
    PUSH EDX                            ; 004d9e97
    LEA EAX,[ESP + 0x510]               ; 004d9e98
    PUSH EAX                            ; 004d9e9f
    MOV ECX,dword ptr [0x020a5720]      ; 004d9ea0 | g_ThemeFont
    PUSH ECX                            ; 004d9ea6
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d9ea7
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d9eac | g_HelpLineHeight
    MOV EDI,dword ptr [0x02d831c8]      ; 004d9eb1 | g_HelpCursorY
    MOV EDX,dword ptr [0x00679398]      ; 004d9eb7 | g_WindowHeight
    ADD EDI,EAX                         ; 004d9ebd
    SHL EAX,0x2                         ; 004d9ebf
    ADD ESP,0x18                        ; 004d9ec2
    SUB EDX,EAX                         ; 004d9ec5
    MOV dword ptr [0x02d831c8],EDI      ; 004d9ec7 | g_HelpCursorY
    CMP EDX,EDI                         ; 004d9ecd
    JGE 0x004d9f01                      ; 004d9ecf
        ;   XREF to: 004d9f01 (CONDITIONAL_JUMP)  ; LAB_004d9f01
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9ed1 | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9ed7
    MOV ECX,0x3                         ; 004d9ede
    SUB EAX,EDX                         ; 004d9ee3
    MOV EBX,dword ptr [0x00679394]      ; 004d9ee5 | g_WindowWidth
    ADD EAX,EAX                         ; 004d9eeb
    MOV EDX,EBX                         ; 004d9eed
    MOV [0x02d831c8],EAX                ; 004d9eef | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d9ef4
    MOV EAX,EBX                         ; 004d9ef7
    IDIV ECX                            ; 004d9ef9
    ADD dword ptr [0x02d831c4],EAX      ; 004d9efb | g_HelpCursorX
    PUSH 0x62b447                       ; 004d9f01 | = "Item description"
        ;   Label: LAB_004d9f01
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9f06
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d9f0b
    PUSH EAX                            ; 004d9f0e
    MOV EDX,dword ptr [ESI + 0x8c]      ; 004d9f0f
    PUSH EDX                            ; 004d9f15
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9f16
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d9f1b
    PUSH EAX                            ; 004d9f1e
    PUSH 0x62b28d                       ; 004d9f1f | = "%s = %s"
    LEA EAX,[ESP + 0xc0c]               ; 004d9f24
    PUSH EAX                            ; 004d9f2b
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d9f2c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d9f31
    PUSH -0x1                           ; 004d9f34
    PUSH 0x7                            ; 004d9f36
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9f38 | g_HelpCursorY
    PUSH ECX                            ; 004d9f3e
    MOV EDI,dword ptr [0x02d831c4]      ; 004d9f3f | g_HelpCursorX
    PUSH EDI                            ; 004d9f45
    LEA EAX,[ESP + 0xc10]               ; 004d9f46
    PUSH EAX                            ; 004d9f4d
    MOV EBP,dword ptr [0x020a5720]      ; 004d9f4e | g_ThemeFont
    PUSH EBP                            ; 004d9f54
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d9f55
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004d9f5a | g_HelpLineHeight
    ADD dword ptr [0x02d831c8],EAX      ; 004d9f5f | g_HelpCursorY
    SHL EAX,0x2                         ; 004d9f65
    MOV EDX,dword ptr [0x00679398]      ; 004d9f68 | g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9f6e | g_HelpCursorY
    SUB EDX,EAX                         ; 004d9f74
    ADD ESP,0x18                        ; 004d9f76
    CMP EDX,ECX                         ; 004d9f79
    JGE 0x004d9fad                      ; 004d9f7b
        ;   XREF to: 004d9fad (CONDITIONAL_JUMP)  ; LAB_004d9fad
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9f7d | g_HelpLineHeight
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9f83
    MOV ECX,0x3                         ; 004d9f8a
    SUB EAX,EDX                         ; 004d9f8f
    MOV EBX,dword ptr [0x00679394]      ; 004d9f91 | g_WindowWidth
    ADD EAX,EAX                         ; 004d9f97
    MOV EDX,EBX                         ; 004d9f99
    MOV [0x02d831c8],EAX                ; 004d9f9b | g_HelpCursorY
    SAR EDX,0x1f                        ; 004d9fa0
    MOV EAX,EBX                         ; 004d9fa3
    IDIV ECX                            ; 004d9fa5
    ADD dword ptr [0x02d831c4],EAX      ; 004d9fa7 | g_HelpCursorX
    PUSH 0x62b458                       ; 004d9fad | = "Next ammo"
        ;   Label: LAB_004d9fad
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9fb2
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004d9fb7
    PUSH EAX                            ; 004d9fba
    MOV EDX,dword ptr [ESI + 0x90]      ; 004d9fbb
    PUSH EDX                            ; 004d9fc1
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9fc2
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004d9fc7
    PUSH EAX                            ; 004d9fca
    PUSH 0x62b28d                       ; 004d9fcb | = "%s = %s"
    LEA EAX,[ESP + 0x1b0c]              ; 004d9fd0
    PUSH EAX                            ; 004d9fd7
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004d9fd8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d9fdd
    PUSH -0x1                           ; 004d9fe0
    PUSH 0x7                            ; 004d9fe2
    MOV EBP,dword ptr [0x02d831c8]      ; 004d9fe4 | g_HelpCursorY
    PUSH EBP                            ; 004d9fea
    MOV EAX,[0x02d831c4]                ; 004d9feb | g_HelpCursorX
    PUSH EAX                            ; 004d9ff0
    LEA EAX,[ESP + 0x1b10]              ; 004d9ff1
    PUSH EAX                            ; 004d9ff8
    MOV EDX,dword ptr [0x020a5720]      ; 004d9ff9 | g_ThemeFont
    PUSH EDX                            ; 004d9fff
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004da000
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004da005 | g_HelpLineHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004da00a | g_HelpCursorY
    MOV EDX,dword ptr [0x00679398]      ; 004da010 | g_WindowHeight
    ADD ECX,EAX                         ; 004da016
    SHL EAX,0x2                         ; 004da018
    ADD ESP,0x18                        ; 004da01b
    SUB EDX,EAX                         ; 004da01e
    MOV dword ptr [0x02d831c8],ECX      ; 004da020 | g_HelpCursorY
    CMP EDX,ECX                         ; 004da026
    JL 0x004da0b9                       ; 004da028
        ;   XREF to: 004da0b9 (CONDITIONAL_JUMP)  ; LAB_004da0b9
    MOV EBX,dword ptr [0x00679394]      ; 004da02e | g_WindowWidth
    ADD ESP,0x1c00                      ; 004da034
    POP EBP                             ; 004da03a
    POP EDI                             ; 004da03b
    POP ESI                             ; 004da03c
    POP EBX                             ; 004da03d
    RET                                 ; 004da03e
    PUSH 0x62b326                       ; 004da03f | = "Run"
        ;   Label: LAB_004da03f
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004da044
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004da049
    PUSH EAX                            ; 004da04c
    MOV EDX,dword ptr [ESI + 0x30]      ; 004da04d
    PUSH EDX                            ; 004da050
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004da051
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004da056
    PUSH EAX                            ; 004da059
    PUSH 0x62b28d                       ; 004da05a | = "%s = %s"
    LEA EAX,[ESP + 0x160c]              ; 004da05f
    PUSH EAX                            ; 004da066
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004da067
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004da06c
    PUSH -0x1                           ; 004da06f
    PUSH 0x7                            ; 004da071
    MOV ECX,dword ptr [0x02d831c8]      ; 004da073 | g_HelpCursorY
    PUSH ECX                            ; 004da079
    MOV EDI,dword ptr [0x02d831c4]      ; 004da07a | g_HelpCursorX
    PUSH EDI                            ; 004da080
    LEA EAX,[ESP + 0x1610]              ; 004da081
    PUSH EAX                            ; 004da088
    MOV EBP,dword ptr [0x020a5720]      ; 004da089 | g_ThemeFont
    PUSH EBP                            ; 004da08f
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004da090
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,[0x02d831cc]                ; 004da095 | g_HelpLineHeight
    ADD dword ptr [0x02d831c8],EAX      ; 004da09a | g_HelpCursorY
    SHL EAX,0x2                         ; 004da0a0
    MOV EDX,dword ptr [0x00679398]      ; 004da0a3 | g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004da0a9 | g_HelpCursorY
    SUB EDX,EAX                         ; 004da0af
    ADD ESP,0x18                        ; 004da0b1
    JMP 0x004d9035                      ; 004da0b4
        ;   XREF to: 004d9035 (UNCONDITIONAL_JUMP)  ; LAB_004d9035
    MOV EDX,dword ptr [0x02d831cc]      ; 004da0b9 | g_HelpLineHeight
        ;   Label: LAB_004da0b9
    LEA EAX,[EDX*0x4 + 0x0]             ; 004da0bf
    MOV ECX,0x3                         ; 004da0c6
    SUB EAX,EDX                         ; 004da0cb
    MOV EBX,dword ptr [0x00679394]      ; 004da0cd | g_WindowWidth
    ADD EAX,EAX                         ; 004da0d3
    MOV EDX,EBX                         ; 004da0d5
    MOV [0x02d831c8],EAX                ; 004da0d7 | g_HelpCursorY
    SAR EDX,0x1f                        ; 004da0dc
    MOV EAX,EBX                         ; 004da0df
    IDIV ECX                            ; 004da0e1
    ADD dword ptr [0x02d831c4],EAX      ; 004da0e3 | g_HelpCursorX
    MOV EBX,dword ptr [0x00679394]      ; 004da0e9 | g_WindowWidth
    ADD ESP,0x1c00                      ; 004da0ef
    POP EBP                             ; 004da0f5
    POP EDI                             ; 004da0f6
    POP ESI                             ; 004da0f7
    POP EBX                             ; 004da0f8
    RET                                 ; 004da0f9

