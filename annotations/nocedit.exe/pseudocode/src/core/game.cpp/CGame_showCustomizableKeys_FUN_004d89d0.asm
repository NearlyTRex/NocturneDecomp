; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0(CGame * this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x1c10]:1  local_1c10
; undefined1       Stack[-0x1b10]:1  local_1b10
; undefined1       Stack[-0x1a10]:1  local_1a10
; undefined1       Stack[-0x1910]:1  local_1910
; undefined1       Stack[-0x1810]:1  local_1810
; undefined1       Stack[-0x1710]:1  local_1710
; undefined1       Stack[-0x1610]:1  local_1610
; undefined1       Stack[-0x1510]:1  local_1510
; undefined1       Stack[-0x1410]:1  local_1410
; undefined1       Stack[-0x1310]:1  local_1310
; undefined1       Stack[-0x1210]:1  local_1210
; undefined1       Stack[-0x1110]:1  local_1110
; undefined1       Stack[-0x1010]:1  local_1010
; undefined1       Stack[-0xf10]:1  local_f10
; undefined1       Stack[-0xe10]:1  local_e10
; undefined1       Stack[-0xd10]:1  local_d10
; undefined1       Stack[-0xc10]:1  local_c10
; undefined1       Stack[-0xb10]:1  local_b10
; undefined1       Stack[-0xa10]:1  local_a10
; undefined1       Stack[-0x910]:1  local_910
; undefined1       Stack[-0x810]:1  local_810
; undefined1       Stack[-0x710]:1  local_710
; undefined1       Stack[-0x610]:1  local_610
; undefined1       Stack[-0x510]:1  local_510
; undefined1       Stack[-0x410]:1  local_410
; undefined1       Stack[-0x310]:1  local_310
; undefined1       Stack[-0x210]:1  local_210
; undefined1       Stack[-0x110]:1  local_110
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
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
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
    MOV EBX,dword ptr [0x00679394]      ; 004d89da | int g_WindowWidth
    MOV ESI,dword ptr [ESP + 0x1c14]    ; 004d89e0
    PUSH 0xffff                         ; 004d89e7
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 004d89ec | void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d89f1
    PUSH 0x58                           ; 004d89f4
    MOV EDX,dword ptr [0x020a5720]      ; 004d89f6 | CBitFont * g_ThemeFont
    PUSH EDX                            ; 004d89fc
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d89fd | int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d8a02
    PUSH 0x58                           ; 004d8a05
    MOV ECX,dword ptr [0x020a5720]      ; 004d8a07 | CBitFont * g_ThemeFont
    PUSH ECX                            ; 004d8a0d
    MOV [0x02d831cc],EAX                ; 004d8a0e | undefined4 DAT_02d831cc
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0 ; 004d8a13 | int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0(CBitFont * font, int char_code)
        ;   XREF to: 004d01a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d8a18
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8a1b | undefined4 DAT_02d831cc
    MOV [0x02d831d0],EAX                ; 004d8a21 | DAT_02d831d0
    PUSH 0x62b295                       ; 004d8a26 | = "Quick help" | s_Quick_help_0062b295 = Quick help
    SHL EDX,0x2                         ; 004d8a2b
    SHL EAX,0x2                         ; 004d8a2e
    MOV dword ptr [0x02d831c8],EDX      ; 004d8a31 | undefined4 DAT_02d831c8
    MOV [0x02d831c4],EAX                ; 004d8a37 | undefined4 DAT_02d831c4
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d8a3c | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d8a41
    PUSH -0x1                           ; 004d8a44
    PUSH 0x7                            ; 004d8a46
    MOV EDI,dword ptr [0x02d831c8]      ; 004d8a48 | undefined4 DAT_02d831c8
    PUSH EDI                            ; 004d8a4e
    MOV EBP,dword ptr [0x02d831c4]      ; 004d8a4f | undefined4 DAT_02d831c4
    PUSH EBP                            ; 004d8a55
    PUSH EAX                            ; 004d8a56
    MOV EAX,[0x020a5720]                ; 004d8a57 | CBitFont * g_ThemeFont
    PUSH EAX                            ; 004d8a5c
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d8a5d | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d8a62 | undefined4 DAT_02d831cc
    ADD dword ptr [0x02d831c8],EAX      ; 004d8a67 | undefined4 DAT_02d831c8
    SHL EAX,0x2                         ; 004d8a6d
    MOV EDX,dword ptr [0x00679398]      ; 004d8a70 | int g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d8a76 | undefined4 DAT_02d831c8
    SUB EDX,EAX                         ; 004d8a7c
    ADD ESP,0x18                        ; 004d8a7e
    CMP EDX,ECX                         ; 004d8a81
    JGE 0x004d8ab5                      ; 004d8a83 | LAB_004d8ab5
        ;   XREF to: 004d8ab5 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8a85 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d8a8b
    MOV ECX,0x3                         ; 004d8a92
    SUB EAX,EDX                         ; 004d8a97
    MOV EBX,dword ptr [0x00679394]      ; 004d8a99 | int g_WindowWidth
    ADD EAX,EAX                         ; 004d8a9f
    MOV EDX,EBX                         ; 004d8aa1
    MOV [0x02d831c8],EAX                ; 004d8aa3 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d8aa8
    MOV EAX,EBX                         ; 004d8aab
    IDIV ECX                            ; 004d8aad
    ADD dword ptr [0x02d831c4],EAX      ; 004d8aaf | undefined4 DAT_02d831c4
    MOV EAX,[0x02d831cc]                ; 004d8ab5 | undefined4 DAT_02d831cc
        ;   Label: LAB_004d8ab5
    MOV EBP,dword ptr [0x02d831c8]      ; 004d8aba | undefined4 DAT_02d831c8
    ADD EBP,EAX                         ; 004d8ac0
    PUSH 0x62b2a0                       ; 004d8ac2 | = "F1 = Toggle help" | s_F1_Toggle_help_0062b2a0 = F1 = Toggle help
    MOV dword ptr [0x02d831c8],EBP      ; 004d8ac7 | undefined4 DAT_02d831c8
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d8acd | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d8ad2
    PUSH -0x1                           ; 004d8ad5
    PUSH 0x7                            ; 004d8ad7
    MOV EDX,dword ptr [0x02d831c8]      ; 004d8ad9 | undefined4 DAT_02d831c8
    PUSH EDX                            ; 004d8adf
    MOV ECX,dword ptr [0x02d831c4]      ; 004d8ae0 | undefined4 DAT_02d831c4
    PUSH ECX                            ; 004d8ae6
    PUSH EAX                            ; 004d8ae7
    MOV EDI,dword ptr [0x020a5720]      ; 004d8ae8 | CBitFont * g_ThemeFont
    PUSH EDI                            ; 004d8aee
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d8aef | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d8af4 | undefined4 DAT_02d831cc
    MOV EBP,dword ptr [0x02d831c8]      ; 004d8af9 | undefined4 DAT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d8aff | int g_WindowHeight
    ADD EBP,EAX                         ; 004d8b05
    SHL EAX,0x2                         ; 004d8b07
    ADD ESP,0x18                        ; 004d8b0a
    SUB EDX,EAX                         ; 004d8b0d
    MOV dword ptr [0x02d831c8],EBP      ; 004d8b0f | undefined4 DAT_02d831c8
    CMP EDX,EBP                         ; 004d8b15
    JGE 0x004d8b49                      ; 004d8b17 | LAB_004d8b49
        ;   XREF to: 004d8b49 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8b19 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d8b1f
    MOV ECX,0x3                         ; 004d8b26
    SUB EAX,EDX                         ; 004d8b2b
    MOV EBX,dword ptr [0x00679394]      ; 004d8b2d | int g_WindowWidth
    ADD EAX,EAX                         ; 004d8b33
    MOV EDX,EBX                         ; 004d8b35
    MOV [0x02d831c8],EAX                ; 004d8b37 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d8b3c
    MOV EAX,EBX                         ; 004d8b3f
    IDIV ECX                            ; 004d8b41
    ADD dword ptr [0x02d831c4],EAX      ; 004d8b43 | undefined4 DAT_02d831c4
    PUSH 0x62b2b1                       ; 004d8b49 | = "F2 = Save game" | s_F2_Save_game_0062b2b1 = F2 = Save game
        ;   Label: LAB_004d8b49
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d8b4e | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d8b53
    PUSH -0x1                           ; 004d8b56
    PUSH 0x7                            ; 004d8b58
    MOV EDI,dword ptr [0x02d831c8]      ; 004d8b5a | undefined4 DAT_02d831c8
    PUSH EDI                            ; 004d8b60
    MOV EBP,dword ptr [0x02d831c4]      ; 004d8b61 | undefined4 DAT_02d831c4
    PUSH EBP                            ; 004d8b67
    PUSH EAX                            ; 004d8b68
    MOV EAX,[0x020a5720]                ; 004d8b69 | CBitFont * g_ThemeFont
    PUSH EAX                            ; 004d8b6e
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d8b6f | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d8b74 | undefined4 DAT_02d831cc
    ADD dword ptr [0x02d831c8],EAX      ; 004d8b79 | undefined4 DAT_02d831c8
    SHL EAX,0x2                         ; 004d8b7f
    MOV EDX,dword ptr [0x00679398]      ; 004d8b82 | int g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d8b88 | undefined4 DAT_02d831c8
    SUB EDX,EAX                         ; 004d8b8e
    ADD ESP,0x18                        ; 004d8b90
    CMP EDX,ECX                         ; 004d8b93
    JGE 0x004d8bc7                      ; 004d8b95 | LAB_004d8bc7
        ;   XREF to: 004d8bc7 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8b97 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d8b9d
    MOV ECX,0x3                         ; 004d8ba4
    SUB EAX,EDX                         ; 004d8ba9
    MOV EBX,dword ptr [0x00679394]      ; 004d8bab | int g_WindowWidth
    ADD EAX,EAX                         ; 004d8bb1
    MOV EDX,EBX                         ; 004d8bb3
    MOV [0x02d831c8],EAX                ; 004d8bb5 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d8bba
    MOV EAX,EBX                         ; 004d8bbd
    IDIV ECX                            ; 004d8bbf
    ADD dword ptr [0x02d831c4],EAX      ; 004d8bc1 | undefined4 DAT_02d831c4
    PUSH 0x62b2c0                       ; 004d8bc7 | = "F3 = Restore game" | s_F3_Restore_game_0062b2c0 = F3 = Restore game
        ;   Label: LAB_004d8bc7
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d8bcc | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d8bd1
    PUSH -0x1                           ; 004d8bd4
    PUSH 0x7                            ; 004d8bd6
    MOV EBP,dword ptr [0x02d831c8]      ; 004d8bd8 | undefined4 DAT_02d831c8
    PUSH EBP                            ; 004d8bde
    MOV EDX,dword ptr [0x02d831c4]      ; 004d8bdf | undefined4 DAT_02d831c4
    PUSH EDX                            ; 004d8be5
    PUSH EAX                            ; 004d8be6
    MOV ECX,dword ptr [0x020a5720]      ; 004d8be7 | CBitFont * g_ThemeFont
    PUSH ECX                            ; 004d8bed
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d8bee | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d8bf3 | undefined4 DAT_02d831cc
    MOV EDI,dword ptr [0x02d831c8]      ; 004d8bf8 | undefined4 DAT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d8bfe | int g_WindowHeight
    ADD EDI,EAX                         ; 004d8c04
    SHL EAX,0x2                         ; 004d8c06
    ADD ESP,0x18                        ; 004d8c09
    SUB EDX,EAX                         ; 004d8c0c
    MOV dword ptr [0x02d831c8],EDI      ; 004d8c0e | undefined4 DAT_02d831c8
    CMP EDX,EDI                         ; 004d8c14
    JGE 0x004d8c48                      ; 004d8c16 | LAB_004d8c48
        ;   XREF to: 004d8c48 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8c18 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d8c1e
    MOV ECX,0x3                         ; 004d8c25
    SUB EAX,EDX                         ; 004d8c2a
    MOV EBX,dword ptr [0x00679394]      ; 004d8c2c | int g_WindowWidth
    ADD EAX,EAX                         ; 004d8c32
    MOV EDX,EBX                         ; 004d8c34
    MOV [0x02d831c8],EAX                ; 004d8c36 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d8c3b
    MOV EAX,EBX                         ; 004d8c3e
    IDIV ECX                            ; 004d8c40
    ADD dword ptr [0x02d831c4],EAX      ; 004d8c42 | undefined4 DAT_02d831c4
    PUSH 0x62b2d2                       ; 004d8c48 | = "F5 = Toggle mute" | s_F5_Toggle_mute_0062b2d2 = F5 = Toggle mute
        ;   Label: LAB_004d8c48
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d8c4d | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d8c52
    PUSH -0x1                           ; 004d8c55
    PUSH 0x7                            ; 004d8c57
    MOV ECX,dword ptr [0x02d831c8]      ; 004d8c59 | undefined4 DAT_02d831c8
    PUSH ECX                            ; 004d8c5f
    MOV EDI,dword ptr [0x02d831c4]      ; 004d8c60 | undefined4 DAT_02d831c4
    PUSH EDI                            ; 004d8c66
    PUSH EAX                            ; 004d8c67
    MOV EBP,dword ptr [0x020a5720]      ; 004d8c68 | CBitFont * g_ThemeFont
    PUSH EBP                            ; 004d8c6e
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d8c6f | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d8c74 | undefined4 DAT_02d831cc
    ADD dword ptr [0x02d831c8],EAX      ; 004d8c79 | undefined4 DAT_02d831c8
    SHL EAX,0x2                         ; 004d8c7f
    MOV EDX,dword ptr [0x00679398]      ; 004d8c82 | int g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d8c88 | undefined4 DAT_02d831c8
    SUB EDX,EAX                         ; 004d8c8e
    ADD ESP,0x18                        ; 004d8c90
    CMP EDX,ECX                         ; 004d8c93
    JGE 0x004d8cc7                      ; 004d8c95 | LAB_004d8cc7
        ;   XREF to: 004d8cc7 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8c97 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d8c9d
    MOV ECX,0x3                         ; 004d8ca4
    SUB EAX,EDX                         ; 004d8ca9
    MOV EBX,dword ptr [0x00679394]      ; 004d8cab | int g_WindowWidth
    ADD EAX,EAX                         ; 004d8cb1
    MOV EDX,EBX                         ; 004d8cb3
    MOV [0x02d831c8],EAX                ; 004d8cb5 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d8cba
    MOV EAX,EBX                         ; 004d8cbd
    IDIV ECX                            ; 004d8cbf
    ADD dword ptr [0x02d831c4],EAX      ; 004d8cc1 | undefined4 DAT_02d831c4
    PUSH 0x62b2e3                       ; 004d8cc7 | = "F6 = Quick save" | s_F6_Quick_save_0062b2e3 = F6 = Quick save
        ;   Label: LAB_004d8cc7
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d8ccc | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d8cd1
    PUSH -0x1                           ; 004d8cd4
    PUSH 0x7                            ; 004d8cd6
    MOV EBP,dword ptr [0x02d831c8]      ; 004d8cd8 | undefined4 DAT_02d831c8
    PUSH EBP                            ; 004d8cde
    MOV EDX,dword ptr [0x02d831c4]      ; 004d8cdf | undefined4 DAT_02d831c4
    PUSH EDX                            ; 004d8ce5
    PUSH EAX                            ; 004d8ce6
    MOV ECX,dword ptr [0x020a5720]      ; 004d8ce7 | CBitFont * g_ThemeFont
    PUSH ECX                            ; 004d8ced
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d8cee | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d8cf3 | undefined4 DAT_02d831cc
    MOV EDI,dword ptr [0x02d831c8]      ; 004d8cf8 | undefined4 DAT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d8cfe | int g_WindowHeight
    ADD EDI,EAX                         ; 004d8d04
    SHL EAX,0x2                         ; 004d8d06
    ADD ESP,0x18                        ; 004d8d09
    SUB EDX,EAX                         ; 004d8d0c
    MOV dword ptr [0x02d831c8],EDI      ; 004d8d0e | undefined4 DAT_02d831c8
    CMP EDX,EDI                         ; 004d8d14
    JGE 0x004d8d48                      ; 004d8d16 | LAB_004d8d48
        ;   XREF to: 004d8d48 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8d18 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d8d1e
    MOV ECX,0x3                         ; 004d8d25
    SUB EAX,EDX                         ; 004d8d2a
    MOV EBX,dword ptr [0x00679394]      ; 004d8d2c | int g_WindowWidth
    ADD EAX,EAX                         ; 004d8d32
    MOV EDX,EBX                         ; 004d8d34
    MOV [0x02d831c8],EAX                ; 004d8d36 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d8d3b
    MOV EAX,EBX                         ; 004d8d3e
    IDIV ECX                            ; 004d8d40
    ADD dword ptr [0x02d831c4],EAX      ; 004d8d42 | undefined4 DAT_02d831c4
    PUSH 0x62b2f3                       ; 004d8d48 | = "F9 = Quick load" | s_F9_Quick_load_0062b2f3 = F9 = Quick load
        ;   Label: LAB_004d8d48
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d8d4d | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d8d52
    PUSH -0x1                           ; 004d8d55
    PUSH 0x7                            ; 004d8d57
    MOV ECX,dword ptr [0x02d831c8]      ; 004d8d59 | undefined4 DAT_02d831c8
    PUSH ECX                            ; 004d8d5f
    MOV EDI,dword ptr [0x02d831c4]      ; 004d8d60 | undefined4 DAT_02d831c4
    PUSH EDI                            ; 004d8d66
    PUSH EAX                            ; 004d8d67
    MOV EBP,dword ptr [0x020a5720]      ; 004d8d68 | CBitFont * g_ThemeFont
    PUSH EBP                            ; 004d8d6e
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d8d6f | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d8d74 | undefined4 DAT_02d831cc
    ADD dword ptr [0x02d831c8],EAX      ; 004d8d79 | undefined4 DAT_02d831c8
    SHL EAX,0x2                         ; 004d8d7f
    MOV EDX,dword ptr [0x00679398]      ; 004d8d82 | int g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d8d88 | undefined4 DAT_02d831c8
    SUB EDX,EAX                         ; 004d8d8e
    ADD ESP,0x18                        ; 004d8d90
    CMP EDX,ECX                         ; 004d8d93
    JGE 0x004d8dc7                      ; 004d8d95 | LAB_004d8dc7
        ;   XREF to: 004d8dc7 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8d97 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d8d9d
    MOV ECX,0x3                         ; 004d8da4
    SUB EAX,EDX                         ; 004d8da9
    MOV EBX,dword ptr [0x00679394]      ; 004d8dab | int g_WindowWidth
    ADD EAX,EAX                         ; 004d8db1
    MOV EDX,EBX                         ; 004d8db3
    MOV [0x02d831c8],EAX                ; 004d8db5 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d8dba
    MOV EAX,EBX                         ; 004d8dbd
    IDIV ECX                            ; 004d8dbf
    ADD dword ptr [0x02d831c4],EAX      ; 004d8dc1 | undefined4 DAT_02d831c4
    PUSH 0x62b303                       ; 004d8dc7 | = "ESC = Pause game" | s_ESC_Pause_game_0062b303 = ESC = Pause game
        ;   Label: LAB_004d8dc7
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d8dcc | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d8dd1
    PUSH -0x1                           ; 004d8dd4
    PUSH 0x7                            ; 004d8dd6
    MOV EBP,dword ptr [0x02d831c8]      ; 004d8dd8 | undefined4 DAT_02d831c8
    PUSH EBP                            ; 004d8dde
    MOV EDX,dword ptr [0x02d831c4]      ; 004d8ddf | undefined4 DAT_02d831c4
    PUSH EDX                            ; 004d8de5
    PUSH EAX                            ; 004d8de6
    MOV ECX,dword ptr [0x020a5720]      ; 004d8de7 | CBitFont * g_ThemeFont
    PUSH ECX                            ; 004d8ded
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d8dee | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d8df3 | undefined4 DAT_02d831cc
    MOV EDI,dword ptr [0x02d831c8]      ; 004d8df8 | undefined4 DAT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d8dfe | int g_WindowHeight
    ADD EDI,EAX                         ; 004d8e04
    SHL EAX,0x2                         ; 004d8e06
    ADD ESP,0x18                        ; 004d8e09
    SUB EDX,EAX                         ; 004d8e0c
    MOV dword ptr [0x02d831c8],EDI      ; 004d8e0e | undefined4 DAT_02d831c8
    CMP EDX,EDI                         ; 004d8e14
    JGE 0x004d8e48                      ; 004d8e16 | LAB_004d8e48
        ;   XREF to: 004d8e48 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8e18 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d8e1e
    MOV ECX,0x3                         ; 004d8e25
    SUB EAX,EDX                         ; 004d8e2a
    MOV EBX,dword ptr [0x00679394]      ; 004d8e2c | int g_WindowWidth
    ADD EAX,EAX                         ; 004d8e32
    MOV EDX,EBX                         ; 004d8e34
    MOV [0x02d831c8],EAX                ; 004d8e36 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d8e3b
    MOV EAX,EBX                         ; 004d8e3e
    IDIV ECX                            ; 004d8e40
    ADD dword ptr [0x02d831c4],EAX      ; 004d8e42 | undefined4 DAT_02d831c4
    MOV EAX,[0x02d831cc]                ; 004d8e48 | undefined4 DAT_02d831cc
        ;   Label: LAB_004d8e48
    MOV ECX,dword ptr [0x02d831c8]      ; 004d8e4d | undefined4 DAT_02d831c8
    ADD ECX,EAX                         ; 004d8e53
    PUSH 0x62b314                       ; 004d8e55 | = "Forward" | s_Forward_0062b314 = Forward
    MOV dword ptr [0x02d831c8],ECX      ; 004d8e5a | undefined4 DAT_02d831c8
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d8e60 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d8e65
    PUSH EAX                            ; 004d8e68
    MOV EDX,dword ptr [ESI + 0x28]      ; 004d8e69
    PUSH EDX                            ; 004d8e6c
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d8e6d | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d8e72
    PUSH EAX                            ; 004d8e75
    PUSH 0x62b28d                       ; 004d8e76 | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0x40c]               ; 004d8e7b
    PUSH EAX                            ; 004d8e82
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d8e83 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d8e88
    PUSH -0x1                           ; 004d8e8b
    PUSH 0x7                            ; 004d8e8d
    MOV EDI,dword ptr [0x02d831c8]      ; 004d8e8f | undefined4 DAT_02d831c8
    PUSH EDI                            ; 004d8e95
    MOV EBP,dword ptr [0x02d831c4]      ; 004d8e96 | undefined4 DAT_02d831c4
    PUSH EBP                            ; 004d8e9c
    LEA EAX,[ESP + 0x410]               ; 004d8e9d
    PUSH EAX                            ; 004d8ea4
    MOV EAX,[0x020a5720]                ; 004d8ea5 | CBitFont * g_ThemeFont
    PUSH EAX                            ; 004d8eaa
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d8eab | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d8eb0 | undefined4 DAT_02d831cc
    ADD dword ptr [0x02d831c8],EAX      ; 004d8eb5 | undefined4 DAT_02d831c8
    SHL EAX,0x2                         ; 004d8ebb
    MOV EDX,dword ptr [0x00679398]      ; 004d8ebe | int g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d8ec4 | undefined4 DAT_02d831c8
    SUB EDX,EAX                         ; 004d8eca
    ADD ESP,0x18                        ; 004d8ecc
    CMP EDX,ECX                         ; 004d8ecf
    JGE 0x004d8f03                      ; 004d8ed1 | LAB_004d8f03
        ;   XREF to: 004d8f03 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8ed3 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d8ed9
    MOV ECX,0x3                         ; 004d8ee0
    SUB EAX,EDX                         ; 004d8ee5
    MOV EBX,dword ptr [0x00679394]      ; 004d8ee7 | int g_WindowWidth
    ADD EAX,EAX                         ; 004d8eed
    MOV EDX,EBX                         ; 004d8eef
    MOV [0x02d831c8],EAX                ; 004d8ef1 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d8ef6
    MOV EAX,EBX                         ; 004d8ef9
    IDIV ECX                            ; 004d8efb
    ADD dword ptr [0x02d831c4],EAX      ; 004d8efd | undefined4 DAT_02d831c4
    PUSH 0x62b31c                       ; 004d8f03 | = "Back" | s_Back_0062b31c = Back
        ;   Label: LAB_004d8f03
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d8f08 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d8f0d
    PUSH EAX                            ; 004d8f10
    MOV EDX,dword ptr [ESI + 0x2c]      ; 004d8f11
    PUSH EDX                            ; 004d8f14
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d8f15 | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d8f1a
    PUSH EAX                            ; 004d8f1d
    PUSH 0x62b28d                       ; 004d8f1e | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0xb0c]               ; 004d8f23
    PUSH EAX                            ; 004d8f2a
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d8f2b | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d8f30
    PUSH -0x1                           ; 004d8f33
    PUSH 0x7                            ; 004d8f35
    MOV EBP,dword ptr [0x02d831c8]      ; 004d8f37 | undefined4 DAT_02d831c8
    PUSH EBP                            ; 004d8f3d
    MOV EAX,[0x02d831c4]                ; 004d8f3e | undefined4 DAT_02d831c4
    PUSH EAX                            ; 004d8f43
    LEA EAX,[ESP + 0xb10]               ; 004d8f44
    PUSH EAX                            ; 004d8f4b
    MOV EDX,dword ptr [0x020a5720]      ; 004d8f4c | CBitFont * g_ThemeFont
    PUSH EDX                            ; 004d8f52
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d8f53 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d8f58 | undefined4 DAT_02d831cc
    MOV ECX,dword ptr [0x02d831c8]      ; 004d8f5d | undefined4 DAT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d8f63 | int g_WindowHeight
    ADD ECX,EAX                         ; 004d8f69
    SHL EAX,0x2                         ; 004d8f6b
    ADD ESP,0x18                        ; 004d8f6e
    SUB EDX,EAX                         ; 004d8f71
    MOV dword ptr [0x02d831c8],ECX      ; 004d8f73 | undefined4 DAT_02d831c8
    CMP EDX,ECX                         ; 004d8f79
    JGE 0x004d8fad                      ; 004d8f7b | LAB_004d8fad
        ;   XREF to: 004d8fad (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d8f7d | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d8f83
    MOV ECX,0x3                         ; 004d8f8a
    SUB EAX,EDX                         ; 004d8f8f
    MOV EBX,dword ptr [0x00679394]      ; 004d8f91 | int g_WindowWidth
    ADD EAX,EAX                         ; 004d8f97
    MOV EDX,EBX                         ; 004d8f99
    MOV [0x02d831c8],EAX                ; 004d8f9b | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d8fa0
    MOV EAX,EBX                         ; 004d8fa3
    IDIV ECX                            ; 004d8fa5
    ADD dword ptr [0x02d831c4],EAX      ; 004d8fa7 | undefined4 DAT_02d831c4
    MOV EAX,[0x0067b654]                ; 004d8fad | CGame * g_CGamePtr
        ;   Label: LAB_004d8fad
    CMP dword ptr [EAX + 0x98],0x0      ; 004d8fb2 | g_CGameInstance.always_run
    JZ 0x004da03f                       ; 004d8fb9 | LAB_004da03f
        ;   XREF to: 004da03f (CONDITIONAL_JUMP)
    PUSH 0x62b321                       ; 004d8fbf | = "Walk" | s_Walk_0062b321 = Walk
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d8fc4 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d8fc9
    PUSH EAX                            ; 004d8fcc
    MOV EDX,dword ptr [ESI + 0x30]      ; 004d8fcd
    PUSH EDX                            ; 004d8fd0
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d8fd1 | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d8fd6
    PUSH EAX                            ; 004d8fd9
    PUSH 0x62b28d                       ; 004d8fda | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0x130c]              ; 004d8fdf
    PUSH EAX                            ; 004d8fe6
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d8fe7 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d8fec
    PUSH -0x1                           ; 004d8fef
    PUSH 0x7                            ; 004d8ff1
    MOV EBP,dword ptr [0x02d831c8]      ; 004d8ff3 | undefined4 DAT_02d831c8
    PUSH EBP                            ; 004d8ff9
    MOV EAX,[0x02d831c4]                ; 004d8ffa | undefined4 DAT_02d831c4
    PUSH EAX                            ; 004d8fff
    LEA EAX,[ESP + 0x1310]              ; 004d9000
    PUSH EAX                            ; 004d9007
    MOV EDX,dword ptr [0x020a5720]      ; 004d9008 | CBitFont * g_ThemeFont
    PUSH EDX                            ; 004d900e
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d900f | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d9014 | undefined4 DAT_02d831cc
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9019 | undefined4 DAT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d901f | int g_WindowHeight
    ADD ECX,EAX                         ; 004d9025
    SHL EAX,0x2                         ; 004d9027
    ADD ESP,0x18                        ; 004d902a
    SUB EDX,EAX                         ; 004d902d
    MOV dword ptr [0x02d831c8],ECX      ; 004d902f | undefined4 DAT_02d831c8
    CMP EDX,ECX                         ; 004d9035
        ;   Label: LAB_004d9035
    JGE 0x004d9069                      ; 004d9037 | LAB_004d9069
        ;   XREF to: 004d9069 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9039 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d903f
    MOV ECX,0x3                         ; 004d9046
    SUB EAX,EDX                         ; 004d904b
    MOV EBX,dword ptr [0x00679394]      ; 004d904d | int g_WindowWidth
    ADD EAX,EAX                         ; 004d9053
    MOV EDX,EBX                         ; 004d9055
    MOV [0x02d831c8],EAX                ; 004d9057 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d905c
    MOV EAX,EBX                         ; 004d905f
    IDIV ECX                            ; 004d9061
    ADD dword ptr [0x02d831c4],EAX      ; 004d9063 | undefined4 DAT_02d831c4
    PUSH 0x62b32a                       ; 004d9069 | = "Strafe on" | s_Strafe_on_0062b32a = Strafe on
        ;   Label: LAB_004d9069
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d906e | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9073
    PUSH EAX                            ; 004d9076
    MOV EDX,dword ptr [ESI + 0x34]      ; 004d9077
    PUSH EDX                            ; 004d907a
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d907b | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9080
    PUSH EAX                            ; 004d9083
    PUSH 0x62b28d                       ; 004d9084 | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0x20c]               ; 004d9089
    PUSH EAX                            ; 004d9090
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d9091 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d9096
    PUSH -0x1                           ; 004d9099
    PUSH 0x7                            ; 004d909b
    MOV EAX,[0x02d831c8]                ; 004d909d | undefined4 DAT_02d831c8
    PUSH EAX                            ; 004d90a2
    MOV EDX,dword ptr [0x02d831c4]      ; 004d90a3 | undefined4 DAT_02d831c4
    PUSH EDX                            ; 004d90a9
    LEA EAX,[ESP + 0x210]               ; 004d90aa
    PUSH EAX                            ; 004d90b1
    MOV ECX,dword ptr [0x020a5720]      ; 004d90b2 | CBitFont * g_ThemeFont
    PUSH ECX                            ; 004d90b8
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d90b9 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d90be | undefined4 DAT_02d831cc
    MOV EDI,dword ptr [0x02d831c8]      ; 004d90c3 | undefined4 DAT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d90c9 | int g_WindowHeight
    ADD EDI,EAX                         ; 004d90cf
    SHL EAX,0x2                         ; 004d90d1
    ADD ESP,0x18                        ; 004d90d4
    SUB EDX,EAX                         ; 004d90d7
    MOV dword ptr [0x02d831c8],EDI      ; 004d90d9 | undefined4 DAT_02d831c8
    CMP EDX,EDI                         ; 004d90df
    JGE 0x004d9113                      ; 004d90e1 | LAB_004d9113
        ;   XREF to: 004d9113 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d90e3 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d90e9
    MOV ECX,0x3                         ; 004d90f0
    SUB EAX,EDX                         ; 004d90f5
    MOV EBX,dword ptr [0x00679394]      ; 004d90f7 | int g_WindowWidth
    ADD EAX,EAX                         ; 004d90fd
    MOV EDX,EBX                         ; 004d90ff
    MOV [0x02d831c8],EAX                ; 004d9101 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d9106
    MOV EAX,EBX                         ; 004d9109
    IDIV ECX                            ; 004d910b
    ADD dword ptr [0x02d831c4],EAX      ; 004d910d | undefined4 DAT_02d831c4
    PUSH 0x62b334                       ; 004d9113 | = "Strafe left" | s_Strafe_left_0062b334 = Strafe left
        ;   Label: LAB_004d9113
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9118 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d911d
    PUSH EAX                            ; 004d9120
    MOV EDX,dword ptr [ESI + 0x38]      ; 004d9121
    PUSH EDX                            ; 004d9124
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9125 | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d912a
    PUSH EAX                            ; 004d912d
    PUSH 0x62b28d                       ; 004d912e | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0x90c]               ; 004d9133
    PUSH EAX                            ; 004d913a
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d913b | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d9140
    PUSH -0x1                           ; 004d9143
    PUSH 0x7                            ; 004d9145
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9147 | undefined4 DAT_02d831c8
    PUSH ECX                            ; 004d914d
    MOV EDI,dword ptr [0x02d831c4]      ; 004d914e | undefined4 DAT_02d831c4
    PUSH EDI                            ; 004d9154
    LEA EAX,[ESP + 0x910]               ; 004d9155
    PUSH EAX                            ; 004d915c
    MOV EBP,dword ptr [0x020a5720]      ; 004d915d | CBitFont * g_ThemeFont
    PUSH EBP                            ; 004d9163
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d9164 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d9169 | undefined4 DAT_02d831cc
    ADD dword ptr [0x02d831c8],EAX      ; 004d916e | undefined4 DAT_02d831c8
    SHL EAX,0x2                         ; 004d9174
    MOV EDX,dword ptr [0x00679398]      ; 004d9177 | int g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d917d | undefined4 DAT_02d831c8
    SUB EDX,EAX                         ; 004d9183
    ADD ESP,0x18                        ; 004d9185
    CMP EDX,ECX                         ; 004d9188
    JGE 0x004d91bc                      ; 004d918a | LAB_004d91bc
        ;   XREF to: 004d91bc (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d918c | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9192
    MOV ECX,0x3                         ; 004d9199
    SUB EAX,EDX                         ; 004d919e
    MOV EBX,dword ptr [0x00679394]      ; 004d91a0 | int g_WindowWidth
    ADD EAX,EAX                         ; 004d91a6
    MOV EDX,EBX                         ; 004d91a8
    MOV [0x02d831c8],EAX                ; 004d91aa | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d91af
    MOV EAX,EBX                         ; 004d91b2
    IDIV ECX                            ; 004d91b4
    ADD dword ptr [0x02d831c4],EAX      ; 004d91b6 | undefined4 DAT_02d831c4
    PUSH 0x62b340                       ; 004d91bc | = "Strafe right" | s_Strafe_right_0062b340 = Strafe right
        ;   Label: LAB_004d91bc
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d91c1 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d91c6
    PUSH EAX                            ; 004d91c9
    MOV EDX,dword ptr [ESI + 0x3c]      ; 004d91ca
    PUSH EDX                            ; 004d91cd
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d91ce | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d91d3
    PUSH EAX                            ; 004d91d6
    PUSH 0x62b28d                       ; 004d91d7 | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0x100c]              ; 004d91dc
    PUSH EAX                            ; 004d91e3
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d91e4 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d91e9
    PUSH -0x1                           ; 004d91ec
    PUSH 0x7                            ; 004d91ee
    MOV EBP,dword ptr [0x02d831c8]      ; 004d91f0 | undefined4 DAT_02d831c8
    PUSH EBP                            ; 004d91f6
    MOV EAX,[0x02d831c4]                ; 004d91f7 | undefined4 DAT_02d831c4
    PUSH EAX                            ; 004d91fc
    LEA EAX,[ESP + 0x1010]              ; 004d91fd
    PUSH EAX                            ; 004d9204
    MOV EDX,dword ptr [0x020a5720]      ; 004d9205 | CBitFont * g_ThemeFont
    PUSH EDX                            ; 004d920b
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d920c | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d9211 | undefined4 DAT_02d831cc
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9216 | undefined4 DAT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d921c | int g_WindowHeight
    ADD ECX,EAX                         ; 004d9222
    SHL EAX,0x2                         ; 004d9224
    ADD ESP,0x18                        ; 004d9227
    SUB EDX,EAX                         ; 004d922a
    MOV dword ptr [0x02d831c8],ECX      ; 004d922c | undefined4 DAT_02d831c8
    CMP EDX,ECX                         ; 004d9232
    JGE 0x004d9266                      ; 004d9234 | LAB_004d9266
        ;   XREF to: 004d9266 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9236 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d923c
    MOV ECX,0x3                         ; 004d9243
    SUB EAX,EDX                         ; 004d9248
    MOV EBX,dword ptr [0x00679394]      ; 004d924a | int g_WindowWidth
    ADD EAX,EAX                         ; 004d9250
    MOV EDX,EBX                         ; 004d9252
    MOV [0x02d831c8],EAX                ; 004d9254 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d9259
    MOV EAX,EBX                         ; 004d925c
    IDIV ECX                            ; 004d925e
    ADD dword ptr [0x02d831c4],EAX      ; 004d9260 | undefined4 DAT_02d831c4
    PUSH 0x62b34d                       ; 004d9266 | = "Turn left" | s_Turn_left_0062b34d = Turn left
        ;   Label: LAB_004d9266
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d926b | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9270
    PUSH EAX                            ; 004d9273
    MOV EDX,dword ptr [ESI + 0x44]      ; 004d9274
    PUSH EDX                            ; 004d9277
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9278 | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d927d
    PUSH EAX                            ; 004d9280
    PUSH 0x62b28d                       ; 004d9281 | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0x170c]              ; 004d9286
    PUSH EAX                            ; 004d928d
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d928e | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d9293
    PUSH -0x1                           ; 004d9296
    PUSH 0x7                            ; 004d9298
    MOV EAX,[0x02d831c8]                ; 004d929a | undefined4 DAT_02d831c8
    PUSH EAX                            ; 004d929f
    MOV EDX,dword ptr [0x02d831c4]      ; 004d92a0 | undefined4 DAT_02d831c4
    PUSH EDX                            ; 004d92a6
    LEA EAX,[ESP + 0x1710]              ; 004d92a7
    PUSH EAX                            ; 004d92ae
    MOV ECX,dword ptr [0x020a5720]      ; 004d92af | CBitFont * g_ThemeFont
    PUSH ECX                            ; 004d92b5
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d92b6 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d92bb | undefined4 DAT_02d831cc
    MOV EDI,dword ptr [0x02d831c8]      ; 004d92c0 | undefined4 DAT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d92c6 | int g_WindowHeight
    ADD EDI,EAX                         ; 004d92cc
    SHL EAX,0x2                         ; 004d92ce
    ADD ESP,0x18                        ; 004d92d1
    SUB EDX,EAX                         ; 004d92d4
    MOV dword ptr [0x02d831c8],EDI      ; 004d92d6 | undefined4 DAT_02d831c8
    CMP EDX,EDI                         ; 004d92dc
    JGE 0x004d9310                      ; 004d92de | LAB_004d9310
        ;   XREF to: 004d9310 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d92e0 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d92e6
    MOV ECX,0x3                         ; 004d92ed
    SUB EAX,EDX                         ; 004d92f2
    MOV EBX,dword ptr [0x00679394]      ; 004d92f4 | int g_WindowWidth
    ADD EAX,EAX                         ; 004d92fa
    MOV EDX,EBX                         ; 004d92fc
    MOV [0x02d831c8],EAX                ; 004d92fe | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d9303
    MOV EAX,EBX                         ; 004d9306
    IDIV ECX                            ; 004d9308
    ADD dword ptr [0x02d831c4],EAX      ; 004d930a | undefined4 DAT_02d831c4
    PUSH 0x62b357                       ; 004d9310 | = "Turn right" | s_Turn_right_0062b357 = Turn right
        ;   Label: LAB_004d9310
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9315 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d931a
    PUSH EAX                            ; 004d931d
    MOV EDX,dword ptr [ESI + 0x40]      ; 004d931e
    PUSH EDX                            ; 004d9321
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9322 | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9327
    PUSH EAX                            ; 004d932a
    PUSH 0x62b28d                       ; 004d932b | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0x150c]              ; 004d9330
    PUSH EAX                            ; 004d9337
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d9338 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d933d
    PUSH -0x1                           ; 004d9340
    PUSH 0x7                            ; 004d9342
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9344 | undefined4 DAT_02d831c8
    PUSH ECX                            ; 004d934a
    MOV EDI,dword ptr [0x02d831c4]      ; 004d934b | undefined4 DAT_02d831c4
    PUSH EDI                            ; 004d9351
    LEA EAX,[ESP + 0x1510]              ; 004d9352
    PUSH EAX                            ; 004d9359
    MOV EBP,dword ptr [0x020a5720]      ; 004d935a | CBitFont * g_ThemeFont
    PUSH EBP                            ; 004d9360
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d9361 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d9366 | undefined4 DAT_02d831cc
    ADD dword ptr [0x02d831c8],EAX      ; 004d936b | undefined4 DAT_02d831c8
    SHL EAX,0x2                         ; 004d9371
    MOV EDX,dword ptr [0x00679398]      ; 004d9374 | int g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d937a | undefined4 DAT_02d831c8
    SUB EDX,EAX                         ; 004d9380
    ADD ESP,0x18                        ; 004d9382
    CMP EDX,ECX                         ; 004d9385
    JGE 0x004d93b9                      ; 004d9387 | LAB_004d93b9
        ;   XREF to: 004d93b9 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9389 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d938f
    MOV ECX,0x3                         ; 004d9396
    SUB EAX,EDX                         ; 004d939b
    MOV EBX,dword ptr [0x00679394]      ; 004d939d | int g_WindowWidth
    ADD EAX,EAX                         ; 004d93a3
    MOV EDX,EBX                         ; 004d93a5
    MOV [0x02d831c8],EAX                ; 004d93a7 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d93ac
    MOV EAX,EBX                         ; 004d93af
    IDIV ECX                            ; 004d93b1
    ADD dword ptr [0x02d831c4],EAX      ; 004d93b3 | undefined4 DAT_02d831c4
    PUSH 0x62b362                       ; 004d93b9 | = "Fire / Action" | s_Fire_Action_0062b362 = Fire / Action
        ;   Label: LAB_004d93b9
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d93be | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d93c3
    PUSH EAX                            ; 004d93c6
    MOV EDX,dword ptr [ESI + 0x48]      ; 004d93c7
    PUSH EDX                            ; 004d93ca
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d93cb | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d93d0
    PUSH EAX                            ; 004d93d3
    PUSH 0x62b28d                       ; 004d93d4 | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0x140c]              ; 004d93d9
    PUSH EAX                            ; 004d93e0
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d93e1 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d93e6
    PUSH -0x1                           ; 004d93e9
    PUSH 0x7                            ; 004d93eb
    MOV EBP,dword ptr [0x02d831c8]      ; 004d93ed | undefined4 DAT_02d831c8
    PUSH EBP                            ; 004d93f3
    MOV EAX,[0x02d831c4]                ; 004d93f4 | undefined4 DAT_02d831c4
    PUSH EAX                            ; 004d93f9
    LEA EAX,[ESP + 0x1410]              ; 004d93fa
    PUSH EAX                            ; 004d9401
    MOV EDX,dword ptr [0x020a5720]      ; 004d9402 | CBitFont * g_ThemeFont
    PUSH EDX                            ; 004d9408
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d9409 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d940e | undefined4 DAT_02d831cc
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9413 | undefined4 DAT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d9419 | int g_WindowHeight
    ADD ECX,EAX                         ; 004d941f
    SHL EAX,0x2                         ; 004d9421
    ADD ESP,0x18                        ; 004d9424
    SUB EDX,EAX                         ; 004d9427
    MOV dword ptr [0x02d831c8],ECX      ; 004d9429 | undefined4 DAT_02d831c8
    CMP EDX,ECX                         ; 004d942f
    JGE 0x004d9463                      ; 004d9431 | LAB_004d9463
        ;   XREF to: 004d9463 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9433 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9439
    MOV ECX,0x3                         ; 004d9440
    SUB EAX,EDX                         ; 004d9445
    MOV EBX,dword ptr [0x00679394]      ; 004d9447 | int g_WindowWidth
    ADD EAX,EAX                         ; 004d944d
    MOV EDX,EBX                         ; 004d944f
    MOV [0x02d831c8],EAX                ; 004d9451 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d9456
    MOV EAX,EBX                         ; 004d9459
    IDIV ECX                            ; 004d945b
    ADD dword ptr [0x02d831c4],EAX      ; 004d945d | undefined4 DAT_02d831c4
    PUSH 0x62b370                       ; 004d9463 | = "Use item" | s_Use_item_0062b370 = Use item
        ;   Label: LAB_004d9463
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9468 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d946d
    PUSH EAX                            ; 004d9470
    MOV EDX,dword ptr [ESI + 0x4c]      ; 004d9471
    PUSH EDX                            ; 004d9474
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9475 | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d947a
    PUSH EAX                            ; 004d947d
    PUSH 0x62b28d                       ; 004d947e | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0x1a0c]              ; 004d9483
    PUSH EAX                            ; 004d948a
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d948b | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d9490
    PUSH -0x1                           ; 004d9493
    PUSH 0x7                            ; 004d9495
    MOV EAX,[0x02d831c8]                ; 004d9497 | undefined4 DAT_02d831c8
    PUSH EAX                            ; 004d949c
    MOV EDX,dword ptr [0x02d831c4]      ; 004d949d | undefined4 DAT_02d831c4
    PUSH EDX                            ; 004d94a3
    LEA EAX,[ESP + 0x1a10]              ; 004d94a4
    PUSH EAX                            ; 004d94ab
    MOV ECX,dword ptr [0x020a5720]      ; 004d94ac | CBitFont * g_ThemeFont
    PUSH ECX                            ; 004d94b2
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d94b3 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d94b8 | undefined4 DAT_02d831cc
    MOV EDI,dword ptr [0x02d831c8]      ; 004d94bd | undefined4 DAT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d94c3 | int g_WindowHeight
    ADD EDI,EAX                         ; 004d94c9
    SHL EAX,0x2                         ; 004d94cb
    ADD ESP,0x18                        ; 004d94ce
    SUB EDX,EAX                         ; 004d94d1
    MOV dword ptr [0x02d831c8],EDI      ; 004d94d3 | undefined4 DAT_02d831c8
    CMP EDX,EDI                         ; 004d94d9
    JGE 0x004d950d                      ; 004d94db | LAB_004d950d
        ;   XREF to: 004d950d (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d94dd | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d94e3
    MOV ECX,0x3                         ; 004d94ea
    SUB EAX,EDX                         ; 004d94ef
    MOV EBX,dword ptr [0x00679394]      ; 004d94f1 | int g_WindowWidth
    ADD EAX,EAX                         ; 004d94f7
    MOV EDX,EBX                         ; 004d94f9
    MOV [0x02d831c8],EAX                ; 004d94fb | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d9500
    MOV EAX,EBX                         ; 004d9503
    IDIV ECX                            ; 004d9505
    ADD dword ptr [0x02d831c4],EAX      ; 004d9507 | undefined4 DAT_02d831c4
    PUSH 0x62b379                       ; 004d950d | = "Light" | s_Light_0062b379 = Light
        ;   Label: LAB_004d950d
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9512 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9517
    PUSH EAX                            ; 004d951a
    MOV EDX,dword ptr [ESI + 0x50]      ; 004d951b
    PUSH EDX                            ; 004d951e
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d951f | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9524
    PUSH EAX                            ; 004d9527
    PUSH 0x62b28d                       ; 004d9528 | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0x120c]              ; 004d952d
    PUSH EAX                            ; 004d9534
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d9535 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d953a
    PUSH -0x1                           ; 004d953d
    PUSH 0x7                            ; 004d953f
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9541 | undefined4 DAT_02d831c8
    PUSH ECX                            ; 004d9547
    MOV EDI,dword ptr [0x02d831c4]      ; 004d9548 | undefined4 DAT_02d831c4
    PUSH EDI                            ; 004d954e
    LEA EAX,[ESP + 0x1210]              ; 004d954f
    PUSH EAX                            ; 004d9556
    MOV EBP,dword ptr [0x020a5720]      ; 004d9557 | CBitFont * g_ThemeFont
    PUSH EBP                            ; 004d955d
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d955e | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d9563 | undefined4 DAT_02d831cc
    ADD dword ptr [0x02d831c8],EAX      ; 004d9568 | undefined4 DAT_02d831c8
    SHL EAX,0x2                         ; 004d956e
    MOV EDX,dword ptr [0x00679398]      ; 004d9571 | int g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9577 | undefined4 DAT_02d831c8
    SUB EDX,EAX                         ; 004d957d
    ADD ESP,0x18                        ; 004d957f
    CMP EDX,ECX                         ; 004d9582
    JGE 0x004d95b6                      ; 004d9584 | LAB_004d95b6
        ;   XREF to: 004d95b6 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9586 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d958c
    MOV ECX,0x3                         ; 004d9593
    SUB EAX,EDX                         ; 004d9598
    MOV EBX,dword ptr [0x00679394]      ; 004d959a | int g_WindowWidth
    ADD EAX,EAX                         ; 004d95a0
    MOV EDX,EBX                         ; 004d95a2
    MOV [0x02d831c8],EAX                ; 004d95a4 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d95a9
    MOV EAX,EBX                         ; 004d95ac
    IDIV ECX                            ; 004d95ae
    ADD dword ptr [0x02d831c4],EAX      ; 004d95b0 | undefined4 DAT_02d831c4
    PUSH 0x62b37f                       ; 004d95b6 | = "Night Vision" | s_Night_Vision_0062b37f = Night Vision
        ;   Label: LAB_004d95b6
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d95bb | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d95c0
    PUSH EAX                            ; 004d95c3
    MOV EDX,dword ptr [ESI + 0x54]      ; 004d95c4
    PUSH EDX                            ; 004d95c7
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d95c8 | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d95cd
    PUSH EAX                            ; 004d95d0
    PUSH 0x62b28d                       ; 004d95d1 | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0x190c]              ; 004d95d6
    PUSH EAX                            ; 004d95dd
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d95de | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d95e3
    PUSH -0x1                           ; 004d95e6
    PUSH 0x7                            ; 004d95e8
    MOV EBP,dword ptr [0x02d831c8]      ; 004d95ea | undefined4 DAT_02d831c8
    PUSH EBP                            ; 004d95f0
    MOV EAX,[0x02d831c4]                ; 004d95f1 | undefined4 DAT_02d831c4
    PUSH EAX                            ; 004d95f6
    LEA EAX,[ESP + 0x1910]              ; 004d95f7
    PUSH EAX                            ; 004d95fe
    MOV EDX,dword ptr [0x020a5720]      ; 004d95ff | CBitFont * g_ThemeFont
    PUSH EDX                            ; 004d9605
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d9606 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d960b | undefined4 DAT_02d831cc
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9610 | undefined4 DAT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d9616 | int g_WindowHeight
    ADD ECX,EAX                         ; 004d961c
    SHL EAX,0x2                         ; 004d961e
    ADD ESP,0x18                        ; 004d9621
    SUB EDX,EAX                         ; 004d9624
    MOV dword ptr [0x02d831c8],ECX      ; 004d9626 | undefined4 DAT_02d831c8
    CMP EDX,ECX                         ; 004d962c
    JGE 0x004d9660                      ; 004d962e | LAB_004d9660
        ;   XREF to: 004d9660 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9630 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9636
    MOV ECX,0x3                         ; 004d963d
    SUB EAX,EDX                         ; 004d9642
    MOV EBX,dword ptr [0x00679394]      ; 004d9644 | int g_WindowWidth
    ADD EAX,EAX                         ; 004d964a
    MOV EDX,EBX                         ; 004d964c
    MOV [0x02d831c8],EAX                ; 004d964e | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d9653
    MOV EAX,EBX                         ; 004d9656
    IDIV ECX                            ; 004d9658
    ADD dword ptr [0x02d831c4],EAX      ; 004d965a | undefined4 DAT_02d831c4
    PUSH 0x62b38c                       ; 004d9660 | = "Draw" | s_Draw_0062b38c = Draw
        ;   Label: LAB_004d9660
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9665 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d966a
    PUSH EAX                            ; 004d966d
    MOV EDX,dword ptr [ESI + 0x58]      ; 004d966e
    PUSH EDX                            ; 004d9671
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9672 | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9677
    PUSH EAX                            ; 004d967a
    PUSH 0x62b28d                       ; 004d967b | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0x10c]               ; 004d9680
    PUSH EAX                            ; 004d9687
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d9688 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d968d
    PUSH -0x1                           ; 004d9690
    PUSH 0x7                            ; 004d9692
    MOV EAX,[0x02d831c8]                ; 004d9694 | undefined4 DAT_02d831c8
    PUSH EAX                            ; 004d9699
    MOV EDX,dword ptr [0x02d831c4]      ; 004d969a | undefined4 DAT_02d831c4
    PUSH EDX                            ; 004d96a0
    LEA EAX,[ESP + 0x110]               ; 004d96a1
    PUSH EAX                            ; 004d96a8
    MOV ECX,dword ptr [0x020a5720]      ; 004d96a9 | CBitFont * g_ThemeFont
    PUSH ECX                            ; 004d96af
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d96b0 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d96b5 | undefined4 DAT_02d831cc
    MOV EDI,dword ptr [0x02d831c8]      ; 004d96ba | undefined4 DAT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d96c0 | int g_WindowHeight
    ADD EDI,EAX                         ; 004d96c6
    SHL EAX,0x2                         ; 004d96c8
    ADD ESP,0x18                        ; 004d96cb
    SUB EDX,EAX                         ; 004d96ce
    MOV dword ptr [0x02d831c8],EDI      ; 004d96d0 | undefined4 DAT_02d831c8
    CMP EDX,EDI                         ; 004d96d6
    JGE 0x004d970a                      ; 004d96d8 | LAB_004d970a
        ;   XREF to: 004d970a (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d96da | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d96e0
    MOV ECX,0x3                         ; 004d96e7
    SUB EAX,EDX                         ; 004d96ec
    MOV EBX,dword ptr [0x00679394]      ; 004d96ee | int g_WindowWidth
    ADD EAX,EAX                         ; 004d96f4
    MOV EDX,EBX                         ; 004d96f6
    MOV [0x02d831c8],EAX                ; 004d96f8 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d96fd
    MOV EAX,EBX                         ; 004d9700
    IDIV ECX                            ; 004d9702
    ADD dword ptr [0x02d831c4],EAX      ; 004d9704 | undefined4 DAT_02d831c4
    PUSH 0x62b391                       ; 004d970a | = "Point up" | s_Point_up_0062b391 = Point up
        ;   Label: LAB_004d970a
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d970f | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9714
    PUSH EAX                            ; 004d9717
    MOV EDX,dword ptr [ESI + 0x60]      ; 004d9718
    PUSH EDX                            ; 004d971b
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d971c | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9721
    PUSH EAX                            ; 004d9724
    PUSH 0x62b28d                       ; 004d9725 | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0x80c]               ; 004d972a
    PUSH EAX                            ; 004d9731
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d9732 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d9737
    PUSH -0x1                           ; 004d973a
    PUSH 0x7                            ; 004d973c
    MOV ECX,dword ptr [0x02d831c8]      ; 004d973e | undefined4 DAT_02d831c8
    PUSH ECX                            ; 004d9744
    MOV EDI,dword ptr [0x02d831c4]      ; 004d9745 | undefined4 DAT_02d831c4
    PUSH EDI                            ; 004d974b
    LEA EAX,[ESP + 0x810]               ; 004d974c
    PUSH EAX                            ; 004d9753
    MOV EBP,dword ptr [0x020a5720]      ; 004d9754 | CBitFont * g_ThemeFont
    PUSH EBP                            ; 004d975a
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d975b | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d9760 | undefined4 DAT_02d831cc
    ADD dword ptr [0x02d831c8],EAX      ; 004d9765 | undefined4 DAT_02d831c8
    SHL EAX,0x2                         ; 004d976b
    MOV EDX,dword ptr [0x00679398]      ; 004d976e | int g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9774 | undefined4 DAT_02d831c8
    SUB EDX,EAX                         ; 004d977a
    ADD ESP,0x18                        ; 004d977c
    CMP EDX,ECX                         ; 004d977f
    JGE 0x004d97b3                      ; 004d9781 | LAB_004d97b3
        ;   XREF to: 004d97b3 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9783 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9789
    MOV ECX,0x3                         ; 004d9790
    SUB EAX,EDX                         ; 004d9795
    MOV EBX,dword ptr [0x00679394]      ; 004d9797 | int g_WindowWidth
    ADD EAX,EAX                         ; 004d979d
    MOV EDX,EBX                         ; 004d979f
    MOV [0x02d831c8],EAX                ; 004d97a1 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d97a6
    MOV EAX,EBX                         ; 004d97a9
    IDIV ECX                            ; 004d97ab
    ADD dword ptr [0x02d831c4],EAX      ; 004d97ad | undefined4 DAT_02d831c4
    PUSH 0x62b39a                       ; 004d97b3 | = "Point down" | s_Point_down_0062b39a = Point down
        ;   Label: LAB_004d97b3
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d97b8 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d97bd
    PUSH EAX                            ; 004d97c0
    MOV EDX,dword ptr [ESI + 0x64]      ; 004d97c1
    PUSH EDX                            ; 004d97c4
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d97c5 | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d97ca
    PUSH EAX                            ; 004d97cd
    PUSH 0x62b28d                       ; 004d97ce | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0xf0c]               ; 004d97d3
    PUSH EAX                            ; 004d97da
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d97db | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d97e0
    PUSH -0x1                           ; 004d97e3
    PUSH 0x7                            ; 004d97e5
    MOV EBP,dword ptr [0x02d831c8]      ; 004d97e7 | undefined4 DAT_02d831c8
    PUSH EBP                            ; 004d97ed
    MOV EAX,[0x02d831c4]                ; 004d97ee | undefined4 DAT_02d831c4
    PUSH EAX                            ; 004d97f3
    LEA EAX,[ESP + 0xf10]               ; 004d97f4
    PUSH EAX                            ; 004d97fb
    MOV EDX,dword ptr [0x020a5720]      ; 004d97fc | CBitFont * g_ThemeFont
    PUSH EDX                            ; 004d9802
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d9803 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d9808 | undefined4 DAT_02d831cc
    MOV ECX,dword ptr [0x02d831c8]      ; 004d980d | undefined4 DAT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d9813 | int g_WindowHeight
    ADD ECX,EAX                         ; 004d9819
    SHL EAX,0x2                         ; 004d981b
    ADD ESP,0x18                        ; 004d981e
    SUB EDX,EAX                         ; 004d9821
    MOV dword ptr [0x02d831c8],ECX      ; 004d9823 | undefined4 DAT_02d831c8
    CMP EDX,ECX                         ; 004d9829
    JGE 0x004d985d                      ; 004d982b | LAB_004d985d
        ;   XREF to: 004d985d (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d982d | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9833
    MOV ECX,0x3                         ; 004d983a
    SUB EAX,EDX                         ; 004d983f
    MOV EBX,dword ptr [0x00679394]      ; 004d9841 | int g_WindowWidth
    ADD EAX,EAX                         ; 004d9847
    MOV EDX,EBX                         ; 004d9849
    MOV [0x02d831c8],EAX                ; 004d984b | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d9850
    MOV EAX,EBX                         ; 004d9853
    IDIV ECX                            ; 004d9855
    ADD dword ptr [0x02d831c4],EAX      ; 004d9857 | undefined4 DAT_02d831c4
    PUSH 0x62b3a5                       ; 004d985d | = "Jump" | s_Jump_0062b3a5 = Jump
        ;   Label: LAB_004d985d
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9862 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9867
    PUSH EAX                            ; 004d986a
    MOV EDX,dword ptr [ESI + 0x5c]      ; 004d986b
    PUSH EDX                            ; 004d986e
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d986f | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9874
    PUSH EAX                            ; 004d9877
    PUSH 0x62b28d                       ; 004d9878 | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0x60c]               ; 004d987d
    PUSH EAX                            ; 004d9884
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d9885 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d988a
    PUSH -0x1                           ; 004d988d
    PUSH 0x7                            ; 004d988f
    MOV EAX,[0x02d831c8]                ; 004d9891 | undefined4 DAT_02d831c8
    PUSH EAX                            ; 004d9896
    MOV EDX,dword ptr [0x02d831c4]      ; 004d9897 | undefined4 DAT_02d831c4
    PUSH EDX                            ; 004d989d
    LEA EAX,[ESP + 0x610]               ; 004d989e
    PUSH EAX                            ; 004d98a5
    MOV ECX,dword ptr [0x020a5720]      ; 004d98a6 | CBitFont * g_ThemeFont
    PUSH ECX                            ; 004d98ac
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d98ad | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d98b2 | undefined4 DAT_02d831cc
    MOV EDI,dword ptr [0x02d831c8]      ; 004d98b7 | undefined4 DAT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d98bd | int g_WindowHeight
    ADD EDI,EAX                         ; 004d98c3
    SHL EAX,0x2                         ; 004d98c5
    ADD ESP,0x18                        ; 004d98c8
    SUB EDX,EAX                         ; 004d98cb
    MOV dword ptr [0x02d831c8],EDI      ; 004d98cd | undefined4 DAT_02d831c8
    CMP EDX,EDI                         ; 004d98d3
    JGE 0x004d9907                      ; 004d98d5 | LAB_004d9907
        ;   XREF to: 004d9907 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d98d7 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d98dd
    MOV ECX,0x3                         ; 004d98e4
    SUB EAX,EDX                         ; 004d98e9
    MOV EBX,dword ptr [0x00679394]      ; 004d98eb | int g_WindowWidth
    ADD EAX,EAX                         ; 004d98f1
    MOV EDX,EBX                         ; 004d98f3
    MOV [0x02d831c8],EAX                ; 004d98f5 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d98fa
    MOV EAX,EBX                         ; 004d98fd
    IDIV ECX                            ; 004d98ff
    ADD dword ptr [0x02d831c4],EAX      ; 004d9901 | undefined4 DAT_02d831c4
    PUSH 0x62b3aa                       ; 004d9907 | = "Cycle pistol weapons" | s_Cycle_pistol_weapons_0062b3aa = Cycle pistol weapons
        ;   Label: LAB_004d9907
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d990c | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9911
    PUSH EAX                            ; 004d9914
    MOV EDX,dword ptr [ESI + 0x68]      ; 004d9915
    PUSH EDX                            ; 004d9918
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9919 | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d991e
    PUSH EAX                            ; 004d9921
    PUSH 0x62b28d                       ; 004d9922 | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0xd0c]               ; 004d9927
    PUSH EAX                            ; 004d992e
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d992f | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d9934
    PUSH -0x1                           ; 004d9937
    PUSH 0x7                            ; 004d9939
    MOV ECX,dword ptr [0x02d831c8]      ; 004d993b | undefined4 DAT_02d831c8
    PUSH ECX                            ; 004d9941
    MOV EDI,dword ptr [0x02d831c4]      ; 004d9942 | undefined4 DAT_02d831c4
    PUSH EDI                            ; 004d9948
    LEA EAX,[ESP + 0xd10]               ; 004d9949
    PUSH EAX                            ; 004d9950
    MOV EBP,dword ptr [0x020a5720]      ; 004d9951 | CBitFont * g_ThemeFont
    PUSH EBP                            ; 004d9957
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d9958 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d995d | undefined4 DAT_02d831cc
    ADD dword ptr [0x02d831c8],EAX      ; 004d9962 | undefined4 DAT_02d831c8
    SHL EAX,0x2                         ; 004d9968
    MOV EDX,dword ptr [0x00679398]      ; 004d996b | int g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9971 | undefined4 DAT_02d831c8
    SUB EDX,EAX                         ; 004d9977
    ADD ESP,0x18                        ; 004d9979
    CMP EDX,ECX                         ; 004d997c
    JGE 0x004d99b0                      ; 004d997e | LAB_004d99b0
        ;   XREF to: 004d99b0 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9980 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9986
    MOV ECX,0x3                         ; 004d998d
    SUB EAX,EDX                         ; 004d9992
    MOV EBX,dword ptr [0x00679394]      ; 004d9994 | int g_WindowWidth
    ADD EAX,EAX                         ; 004d999a
    MOV EDX,EBX                         ; 004d999c
    MOV [0x02d831c8],EAX                ; 004d999e | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d99a3
    MOV EAX,EBX                         ; 004d99a6
    IDIV ECX                            ; 004d99a8
    ADD dword ptr [0x02d831c4],EAX      ; 004d99aa | undefined4 DAT_02d831c4
    PUSH 0x62b3bf                       ; 004d99b0 | = "Cycle assault weapons" | s_Cycle_assault_weapons_0062b3bf = Cycle assault weapons
        ;   Label: LAB_004d99b0
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d99b5 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d99ba
    PUSH EAX                            ; 004d99bd
    MOV EDX,dword ptr [ESI + 0x6c]      ; 004d99be
    PUSH EDX                            ; 004d99c1
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d99c2 | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d99c7
    PUSH EAX                            ; 004d99ca
    PUSH 0x62b28d                       ; 004d99cb | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0x30c]               ; 004d99d0
    PUSH EAX                            ; 004d99d7
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d99d8 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d99dd
    PUSH -0x1                           ; 004d99e0
    PUSH 0x7                            ; 004d99e2
    MOV EBP,dword ptr [0x02d831c8]      ; 004d99e4 | undefined4 DAT_02d831c8
    PUSH EBP                            ; 004d99ea
    MOV EAX,[0x02d831c4]                ; 004d99eb | undefined4 DAT_02d831c4
    PUSH EAX                            ; 004d99f0
    LEA EAX,[ESP + 0x310]               ; 004d99f1
    PUSH EAX                            ; 004d99f8
    MOV EDX,dword ptr [0x020a5720]      ; 004d99f9 | CBitFont * g_ThemeFont
    PUSH EDX                            ; 004d99ff
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d9a00 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d9a05 | undefined4 DAT_02d831cc
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9a0a | undefined4 DAT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d9a10 | int g_WindowHeight
    ADD ECX,EAX                         ; 004d9a16
    SHL EAX,0x2                         ; 004d9a18
    ADD ESP,0x18                        ; 004d9a1b
    SUB EDX,EAX                         ; 004d9a1e
    MOV dword ptr [0x02d831c8],ECX      ; 004d9a20 | undefined4 DAT_02d831c8
    CMP EDX,ECX                         ; 004d9a26
    JGE 0x004d9a5a                      ; 004d9a28 | LAB_004d9a5a
        ;   XREF to: 004d9a5a (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9a2a | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9a30
    MOV ECX,0x3                         ; 004d9a37
    SUB EAX,EDX                         ; 004d9a3c
    MOV EBX,dword ptr [0x00679394]      ; 004d9a3e | int g_WindowWidth
    ADD EAX,EAX                         ; 004d9a44
    MOV EDX,EBX                         ; 004d9a46
    MOV [0x02d831c8],EAX                ; 004d9a48 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d9a4d
    MOV EAX,EBX                         ; 004d9a50
    IDIV ECX                            ; 004d9a52
    ADD dword ptr [0x02d831c4],EAX      ; 004d9a54 | undefined4 DAT_02d831c4
    PUSH 0x62b3d5                       ; 004d9a5a | = "Cycle flame weapons" | s_Cycle_flame_weapons_0062b3d5 = Cycle flame weapons
        ;   Label: LAB_004d9a5a
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9a5f | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9a64
    PUSH EAX                            ; 004d9a67
    MOV EDX,dword ptr [ESI + 0x70]      ; 004d9a68
    PUSH EDX                            ; 004d9a6b
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9a6c | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9a71
    PUSH EAX                            ; 004d9a74
    PUSH 0x62b28d                       ; 004d9a75 | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0xa0c]               ; 004d9a7a
    PUSH EAX                            ; 004d9a81
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d9a82 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d9a87
    PUSH -0x1                           ; 004d9a8a
    PUSH 0x7                            ; 004d9a8c
    MOV EAX,[0x02d831c8]                ; 004d9a8e | undefined4 DAT_02d831c8
    PUSH EAX                            ; 004d9a93
    MOV EDX,dword ptr [0x02d831c4]      ; 004d9a94 | undefined4 DAT_02d831c4
    PUSH EDX                            ; 004d9a9a
    LEA EAX,[ESP + 0xa10]               ; 004d9a9b
    PUSH EAX                            ; 004d9aa2
    MOV ECX,dword ptr [0x020a5720]      ; 004d9aa3 | CBitFont * g_ThemeFont
    PUSH ECX                            ; 004d9aa9
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d9aaa | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d9aaf | undefined4 DAT_02d831cc
    MOV EDI,dword ptr [0x02d831c8]      ; 004d9ab4 | undefined4 DAT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d9aba | int g_WindowHeight
    ADD EDI,EAX                         ; 004d9ac0
    SHL EAX,0x2                         ; 004d9ac2
    ADD ESP,0x18                        ; 004d9ac5
    SUB EDX,EAX                         ; 004d9ac8
    MOV dword ptr [0x02d831c8],EDI      ; 004d9aca | undefined4 DAT_02d831c8
    CMP EDX,EDI                         ; 004d9ad0
    JGE 0x004d9b04                      ; 004d9ad2 | LAB_004d9b04
        ;   XREF to: 004d9b04 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9ad4 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9ada
    MOV ECX,0x3                         ; 004d9ae1
    SUB EAX,EDX                         ; 004d9ae6
    MOV EBX,dword ptr [0x00679394]      ; 004d9ae8 | int g_WindowWidth
    ADD EAX,EAX                         ; 004d9aee
    MOV EDX,EBX                         ; 004d9af0
    MOV [0x02d831c8],EAX                ; 004d9af2 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d9af7
    MOV EAX,EBX                         ; 004d9afa
    IDIV ECX                            ; 004d9afc
    ADD dword ptr [0x02d831c4],EAX      ; 004d9afe | undefined4 DAT_02d831c4
    PUSH 0x62b3e9                       ; 004d9b04 | = "Cycle grenade weapons" | s_Cycle_grenade_weapons_0062b3e9 = Cycle grenade weapons
        ;   Label: LAB_004d9b04
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9b09 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9b0e
    PUSH EAX                            ; 004d9b11
    MOV EDX,dword ptr [ESI + 0x74]      ; 004d9b12
    PUSH EDX                            ; 004d9b15
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9b16 | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9b1b
    PUSH EAX                            ; 004d9b1e
    PUSH 0x62b28d                       ; 004d9b1f | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0x110c]              ; 004d9b24
    PUSH EAX                            ; 004d9b2b
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d9b2c | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d9b31
    PUSH -0x1                           ; 004d9b34
    PUSH 0x7                            ; 004d9b36
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9b38 | undefined4 DAT_02d831c8
    PUSH ECX                            ; 004d9b3e
    MOV EDI,dword ptr [0x02d831c4]      ; 004d9b3f | undefined4 DAT_02d831c4
    PUSH EDI                            ; 004d9b45
    LEA EAX,[ESP + 0x1110]              ; 004d9b46
    PUSH EAX                            ; 004d9b4d
    MOV EBP,dword ptr [0x020a5720]      ; 004d9b4e | CBitFont * g_ThemeFont
    PUSH EBP                            ; 004d9b54
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d9b55 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d9b5a | undefined4 DAT_02d831cc
    ADD dword ptr [0x02d831c8],EAX      ; 004d9b5f | undefined4 DAT_02d831c8
    SHL EAX,0x2                         ; 004d9b65
    MOV EDX,dword ptr [0x00679398]      ; 004d9b68 | int g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9b6e | undefined4 DAT_02d831c8
    SUB EDX,EAX                         ; 004d9b74
    ADD ESP,0x18                        ; 004d9b76
    CMP EDX,ECX                         ; 004d9b79
    JGE 0x004d9bad                      ; 004d9b7b | LAB_004d9bad
        ;   XREF to: 004d9bad (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9b7d | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9b83
    MOV ECX,0x3                         ; 004d9b8a
    SUB EAX,EDX                         ; 004d9b8f
    MOV EBX,dword ptr [0x00679394]      ; 004d9b91 | int g_WindowWidth
    ADD EAX,EAX                         ; 004d9b97
    MOV EDX,EBX                         ; 004d9b99
    MOV [0x02d831c8],EAX                ; 004d9b9b | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d9ba0
    MOV EAX,EBX                         ; 004d9ba3
    IDIV ECX                            ; 004d9ba5
    ADD dword ptr [0x02d831c4],EAX      ; 004d9ba7 | undefined4 DAT_02d831c4
    PUSH 0x62b3ff                       ; 004d9bad | = "Cycle melee weapons" | s_Cycle_melee_weapons_0062b3ff = Cycle melee weapons
        ;   Label: LAB_004d9bad
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9bb2 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9bb7
    PUSH EAX                            ; 004d9bba
    MOV EDX,dword ptr [ESI + 0x78]      ; 004d9bbb
    PUSH EDX                            ; 004d9bbe
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9bbf | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9bc4
    PUSH EAX                            ; 004d9bc7
    PUSH 0x62b28d                       ; 004d9bc8 | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0x180c]              ; 004d9bcd
    PUSH EAX                            ; 004d9bd4
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d9bd5 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d9bda
    PUSH -0x1                           ; 004d9bdd
    PUSH 0x7                            ; 004d9bdf
    MOV EBP,dword ptr [0x02d831c8]      ; 004d9be1 | undefined4 DAT_02d831c8
    PUSH EBP                            ; 004d9be7
    MOV EAX,[0x02d831c4]                ; 004d9be8 | undefined4 DAT_02d831c4
    PUSH EAX                            ; 004d9bed
    LEA EAX,[ESP + 0x1810]              ; 004d9bee
    PUSH EAX                            ; 004d9bf5
    MOV EDX,dword ptr [0x020a5720]      ; 004d9bf6 | CBitFont * g_ThemeFont
    PUSH EDX                            ; 004d9bfc
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d9bfd | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d9c02 | undefined4 DAT_02d831cc
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9c07 | undefined4 DAT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d9c0d | int g_WindowHeight
    ADD ECX,EAX                         ; 004d9c13
    SHL EAX,0x2                         ; 004d9c15
    ADD ESP,0x18                        ; 004d9c18
    SUB EDX,EAX                         ; 004d9c1b
    MOV dword ptr [0x02d831c8],ECX      ; 004d9c1d | undefined4 DAT_02d831c8
    CMP EDX,ECX                         ; 004d9c23
    JGE 0x004d9c57                      ; 004d9c25 | LAB_004d9c57
        ;   XREF to: 004d9c57 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9c27 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9c2d
    MOV ECX,0x3                         ; 004d9c34
    SUB EAX,EDX                         ; 004d9c39
    MOV EBX,dword ptr [0x00679394]      ; 004d9c3b | int g_WindowWidth
    ADD EAX,EAX                         ; 004d9c41
    MOV EDX,EBX                         ; 004d9c43
    MOV [0x02d831c8],EAX                ; 004d9c45 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d9c4a
    MOV EAX,EBX                         ; 004d9c4d
    IDIV ECX                            ; 004d9c4f
    ADD dword ptr [0x02d831c4],EAX      ; 004d9c51 | undefined4 DAT_02d831c4
    PUSH 0x62b413                       ; 004d9c57 | = "Next weapon" | s_Next_weapon_0062b413 = Next weapon
        ;   Label: LAB_004d9c57
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9c5c | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9c61
    PUSH EAX                            ; 004d9c64
    MOV EDX,dword ptr [ESI + 0x7c]      ; 004d9c65
    PUSH EDX                            ; 004d9c68
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9c69 | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9c6e
    PUSH EAX                            ; 004d9c71
    PUSH 0x62b28d                       ; 004d9c72 | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0xc]                 ; 004d9c77
    PUSH EAX                            ; 004d9c7b
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d9c7c | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d9c81
    PUSH -0x1                           ; 004d9c84
    PUSH 0x7                            ; 004d9c86
    MOV EAX,[0x02d831c8]                ; 004d9c88 | undefined4 DAT_02d831c8
    PUSH EAX                            ; 004d9c8d
    MOV EDX,dword ptr [0x02d831c4]      ; 004d9c8e | undefined4 DAT_02d831c4
    PUSH EDX                            ; 004d9c94
    LEA EAX,[ESP + 0x10]                ; 004d9c95
    PUSH EAX                            ; 004d9c99
    MOV ECX,dword ptr [0x020a5720]      ; 004d9c9a | CBitFont * g_ThemeFont
    PUSH ECX                            ; 004d9ca0
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d9ca1 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d9ca6 | undefined4 DAT_02d831cc
    MOV EDI,dword ptr [0x02d831c8]      ; 004d9cab | undefined4 DAT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d9cb1 | int g_WindowHeight
    ADD EDI,EAX                         ; 004d9cb7
    SHL EAX,0x2                         ; 004d9cb9
    ADD ESP,0x18                        ; 004d9cbc
    SUB EDX,EAX                         ; 004d9cbf
    MOV dword ptr [0x02d831c8],EDI      ; 004d9cc1 | undefined4 DAT_02d831c8
    CMP EDX,EDI                         ; 004d9cc7
    JGE 0x004d9cfb                      ; 004d9cc9 | LAB_004d9cfb
        ;   XREF to: 004d9cfb (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9ccb | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9cd1
    MOV ECX,0x3                         ; 004d9cd8
    SUB EAX,EDX                         ; 004d9cdd
    MOV EBX,dword ptr [0x00679394]      ; 004d9cdf | int g_WindowWidth
    ADD EAX,EAX                         ; 004d9ce5
    MOV EDX,EBX                         ; 004d9ce7
    MOV [0x02d831c8],EAX                ; 004d9ce9 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d9cee
    MOV EAX,EBX                         ; 004d9cf1
    IDIV ECX                            ; 004d9cf3
    ADD dword ptr [0x02d831c4],EAX      ; 004d9cf5 | undefined4 DAT_02d831c4
    PUSH 0x62b41f                       ; 004d9cfb | = "Previous weapon" | s_Previous_weapon_0062b41f = Previous weapon
        ;   Label: LAB_004d9cfb
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9d00 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9d05
    PUSH EAX                            ; 004d9d08
    MOV EDX,dword ptr [ESI + 0x80]      ; 004d9d09
    PUSH EDX                            ; 004d9d0f
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9d10 | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9d15
    PUSH EAX                            ; 004d9d18
    PUSH 0x62b28d                       ; 004d9d19 | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0x70c]               ; 004d9d1e
    PUSH EAX                            ; 004d9d25
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d9d26 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d9d2b
    PUSH -0x1                           ; 004d9d2e
    PUSH 0x7                            ; 004d9d30
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9d32 | undefined4 DAT_02d831c8
    PUSH ECX                            ; 004d9d38
    MOV EDI,dword ptr [0x02d831c4]      ; 004d9d39 | undefined4 DAT_02d831c4
    PUSH EDI                            ; 004d9d3f
    LEA EAX,[ESP + 0x710]               ; 004d9d40
    PUSH EAX                            ; 004d9d47
    MOV EBP,dword ptr [0x020a5720]      ; 004d9d48 | CBitFont * g_ThemeFont
    PUSH EBP                            ; 004d9d4e
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d9d4f | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d9d54 | undefined4 DAT_02d831cc
    ADD dword ptr [0x02d831c8],EAX      ; 004d9d59 | undefined4 DAT_02d831c8
    SHL EAX,0x2                         ; 004d9d5f
    MOV EDX,dword ptr [0x00679398]      ; 004d9d62 | int g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9d68 | undefined4 DAT_02d831c8
    SUB EDX,EAX                         ; 004d9d6e
    ADD ESP,0x18                        ; 004d9d70
    CMP EDX,ECX                         ; 004d9d73
    JGE 0x004d9da7                      ; 004d9d75 | LAB_004d9da7
        ;   XREF to: 004d9da7 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9d77 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9d7d
    MOV ECX,0x3                         ; 004d9d84
    SUB EAX,EDX                         ; 004d9d89
    MOV EBX,dword ptr [0x00679394]      ; 004d9d8b | int g_WindowWidth
    ADD EAX,EAX                         ; 004d9d91
    MOV EDX,EBX                         ; 004d9d93
    MOV [0x02d831c8],EAX                ; 004d9d95 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d9d9a
    MOV EAX,EBX                         ; 004d9d9d
    IDIV ECX                            ; 004d9d9f
    ADD dword ptr [0x02d831c4],EAX      ; 004d9da1 | undefined4 DAT_02d831c4
    PUSH 0x62b42f                       ; 004d9da7 | = "Next item" | s_Next_item_0062b42f = Next item
        ;   Label: LAB_004d9da7
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9dac | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9db1
    PUSH EAX                            ; 004d9db4
    MOV EDX,dword ptr [ESI + 0x84]      ; 004d9db5
    PUSH EDX                            ; 004d9dbb
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9dbc | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9dc1
    PUSH EAX                            ; 004d9dc4
    PUSH 0x62b28d                       ; 004d9dc5 | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0xe0c]               ; 004d9dca
    PUSH EAX                            ; 004d9dd1
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d9dd2 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d9dd7
    PUSH -0x1                           ; 004d9dda
    PUSH 0x7                            ; 004d9ddc
    MOV EBP,dword ptr [0x02d831c8]      ; 004d9dde | undefined4 DAT_02d831c8
    PUSH EBP                            ; 004d9de4
    MOV EAX,[0x02d831c4]                ; 004d9de5 | undefined4 DAT_02d831c4
    PUSH EAX                            ; 004d9dea
    LEA EAX,[ESP + 0xe10]               ; 004d9deb
    PUSH EAX                            ; 004d9df2
    MOV EDX,dword ptr [0x020a5720]      ; 004d9df3 | CBitFont * g_ThemeFont
    PUSH EDX                            ; 004d9df9
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d9dfa | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d9dff | undefined4 DAT_02d831cc
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9e04 | undefined4 DAT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d9e0a | int g_WindowHeight
    ADD ECX,EAX                         ; 004d9e10
    SHL EAX,0x2                         ; 004d9e12
    ADD ESP,0x18                        ; 004d9e15
    SUB EDX,EAX                         ; 004d9e18
    MOV dword ptr [0x02d831c8],ECX      ; 004d9e1a | undefined4 DAT_02d831c8
    CMP EDX,ECX                         ; 004d9e20
    JGE 0x004d9e54                      ; 004d9e22 | LAB_004d9e54
        ;   XREF to: 004d9e54 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9e24 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9e2a
    MOV ECX,0x3                         ; 004d9e31
    SUB EAX,EDX                         ; 004d9e36
    MOV EBX,dword ptr [0x00679394]      ; 004d9e38 | int g_WindowWidth
    ADD EAX,EAX                         ; 004d9e3e
    MOV EDX,EBX                         ; 004d9e40
    MOV [0x02d831c8],EAX                ; 004d9e42 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d9e47
    MOV EAX,EBX                         ; 004d9e4a
    IDIV ECX                            ; 004d9e4c
    ADD dword ptr [0x02d831c4],EAX      ; 004d9e4e | undefined4 DAT_02d831c4
    PUSH 0x62b439                       ; 004d9e54 | = "Previous item" | s_Previous_item_0062b439 = Previous item
        ;   Label: LAB_004d9e54
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9e59 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9e5e
    PUSH EAX                            ; 004d9e61
    MOV EDX,dword ptr [ESI + 0x88]      ; 004d9e62
    PUSH EDX                            ; 004d9e68
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9e69 | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9e6e
    PUSH EAX                            ; 004d9e71
    PUSH 0x62b28d                       ; 004d9e72 | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0x50c]               ; 004d9e77
    PUSH EAX                            ; 004d9e7e
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d9e7f | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d9e84
    PUSH -0x1                           ; 004d9e87
    PUSH 0x7                            ; 004d9e89
    MOV EAX,[0x02d831c8]                ; 004d9e8b | undefined4 DAT_02d831c8
    PUSH EAX                            ; 004d9e90
    MOV EDX,dword ptr [0x02d831c4]      ; 004d9e91 | undefined4 DAT_02d831c4
    PUSH EDX                            ; 004d9e97
    LEA EAX,[ESP + 0x510]               ; 004d9e98
    PUSH EAX                            ; 004d9e9f
    MOV ECX,dword ptr [0x020a5720]      ; 004d9ea0 | CBitFont * g_ThemeFont
    PUSH ECX                            ; 004d9ea6
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d9ea7 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d9eac | undefined4 DAT_02d831cc
    MOV EDI,dword ptr [0x02d831c8]      ; 004d9eb1 | undefined4 DAT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004d9eb7 | int g_WindowHeight
    ADD EDI,EAX                         ; 004d9ebd
    SHL EAX,0x2                         ; 004d9ebf
    ADD ESP,0x18                        ; 004d9ec2
    SUB EDX,EAX                         ; 004d9ec5
    MOV dword ptr [0x02d831c8],EDI      ; 004d9ec7 | undefined4 DAT_02d831c8
    CMP EDX,EDI                         ; 004d9ecd
    JGE 0x004d9f01                      ; 004d9ecf | LAB_004d9f01
        ;   XREF to: 004d9f01 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9ed1 | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9ed7
    MOV ECX,0x3                         ; 004d9ede
    SUB EAX,EDX                         ; 004d9ee3
    MOV EBX,dword ptr [0x00679394]      ; 004d9ee5 | int g_WindowWidth
    ADD EAX,EAX                         ; 004d9eeb
    MOV EDX,EBX                         ; 004d9eed
    MOV [0x02d831c8],EAX                ; 004d9eef | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d9ef4
    MOV EAX,EBX                         ; 004d9ef7
    IDIV ECX                            ; 004d9ef9
    ADD dword ptr [0x02d831c4],EAX      ; 004d9efb | undefined4 DAT_02d831c4
    PUSH 0x62b447                       ; 004d9f01 | = "Item description" | s_Item_description_0062b447 = Item description
        ;   Label: LAB_004d9f01
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9f06 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9f0b
    PUSH EAX                            ; 004d9f0e
    MOV EDX,dword ptr [ESI + 0x8c]      ; 004d9f0f
    PUSH EDX                            ; 004d9f15
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9f16 | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9f1b
    PUSH EAX                            ; 004d9f1e
    PUSH 0x62b28d                       ; 004d9f1f | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0xc0c]               ; 004d9f24
    PUSH EAX                            ; 004d9f2b
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d9f2c | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d9f31
    PUSH -0x1                           ; 004d9f34
    PUSH 0x7                            ; 004d9f36
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9f38 | undefined4 DAT_02d831c8
    PUSH ECX                            ; 004d9f3e
    MOV EDI,dword ptr [0x02d831c4]      ; 004d9f3f | undefined4 DAT_02d831c4
    PUSH EDI                            ; 004d9f45
    LEA EAX,[ESP + 0xc10]               ; 004d9f46
    PUSH EAX                            ; 004d9f4d
    MOV EBP,dword ptr [0x020a5720]      ; 004d9f4e | CBitFont * g_ThemeFont
    PUSH EBP                            ; 004d9f54
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d9f55 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004d9f5a | undefined4 DAT_02d831cc
    ADD dword ptr [0x02d831c8],EAX      ; 004d9f5f | undefined4 DAT_02d831c8
    SHL EAX,0x2                         ; 004d9f65
    MOV EDX,dword ptr [0x00679398]      ; 004d9f68 | int g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004d9f6e | undefined4 DAT_02d831c8
    SUB EDX,EAX                         ; 004d9f74
    ADD ESP,0x18                        ; 004d9f76
    CMP EDX,ECX                         ; 004d9f79
    JGE 0x004d9fad                      ; 004d9f7b | LAB_004d9fad
        ;   XREF to: 004d9fad (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004d9f7d | undefined4 DAT_02d831cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d9f83
    MOV ECX,0x3                         ; 004d9f8a
    SUB EAX,EDX                         ; 004d9f8f
    MOV EBX,dword ptr [0x00679394]      ; 004d9f91 | int g_WindowWidth
    ADD EAX,EAX                         ; 004d9f97
    MOV EDX,EBX                         ; 004d9f99
    MOV [0x02d831c8],EAX                ; 004d9f9b | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004d9fa0
    MOV EAX,EBX                         ; 004d9fa3
    IDIV ECX                            ; 004d9fa5
    ADD dword ptr [0x02d831c4],EAX      ; 004d9fa7 | undefined4 DAT_02d831c4
    PUSH 0x62b458                       ; 004d9fad | = "Next ammo" | s_Next_ammo_0062b458 = Next ammo
        ;   Label: LAB_004d9fad
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004d9fb2 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9fb7
    PUSH EAX                            ; 004d9fba
    MOV EDX,dword ptr [ESI + 0x90]      ; 004d9fbb
    PUSH EDX                            ; 004d9fc1
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004d9fc2 | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d9fc7
    PUSH EAX                            ; 004d9fca
    PUSH 0x62b28d                       ; 004d9fcb | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0x1b0c]              ; 004d9fd0
    PUSH EAX                            ; 004d9fd7
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d9fd8 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d9fdd
    PUSH -0x1                           ; 004d9fe0
    PUSH 0x7                            ; 004d9fe2
    MOV EBP,dword ptr [0x02d831c8]      ; 004d9fe4 | undefined4 DAT_02d831c8
    PUSH EBP                            ; 004d9fea
    MOV EAX,[0x02d831c4]                ; 004d9feb | undefined4 DAT_02d831c4
    PUSH EAX                            ; 004d9ff0
    LEA EAX,[ESP + 0x1b10]              ; 004d9ff1
    PUSH EAX                            ; 004d9ff8
    MOV EDX,dword ptr [0x020a5720]      ; 004d9ff9 | CBitFont * g_ThemeFont
    PUSH EDX                            ; 004d9fff
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004da000 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004da005 | undefined4 DAT_02d831cc
    MOV ECX,dword ptr [0x02d831c8]      ; 004da00a | undefined4 DAT_02d831c8
    MOV EDX,dword ptr [0x00679398]      ; 004da010 | int g_WindowHeight
    ADD ECX,EAX                         ; 004da016
    SHL EAX,0x2                         ; 004da018
    ADD ESP,0x18                        ; 004da01b
    SUB EDX,EAX                         ; 004da01e
    MOV dword ptr [0x02d831c8],ECX      ; 004da020 | undefined4 DAT_02d831c8
    CMP EDX,ECX                         ; 004da026
    JL 0x004da0b9                       ; 004da028 | LAB_004da0b9
        ;   XREF to: 004da0b9 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x00679394]      ; 004da02e | int g_WindowWidth
    ADD ESP,0x1c00                      ; 004da034
    POP EBP                             ; 004da03a
    POP EDI                             ; 004da03b
    POP ESI                             ; 004da03c
    POP EBX                             ; 004da03d
    RET                                 ; 004da03e
    PUSH 0x62b326                       ; 004da03f | = "Run" | s_Run_0062b326 = Run
        ;   Label: LAB_004da03f
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004da044 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004da049
    PUSH EAX                            ; 004da04c
    MOV EDX,dword ptr [ESI + 0x30]      ; 004da04d
    PUSH EDX                            ; 004da050
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004da051 | char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004da056
    PUSH EAX                            ; 004da059
    PUSH 0x62b28d                       ; 004da05a | = "%s = %s" | s_s_s_0062b28d = %s = %s
    LEA EAX,[ESP + 0x160c]              ; 004da05f
    PUSH EAX                            ; 004da066
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004da067 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004da06c
    PUSH -0x1                           ; 004da06f
    PUSH 0x7                            ; 004da071
    MOV ECX,dword ptr [0x02d831c8]      ; 004da073 | undefined4 DAT_02d831c8
    PUSH ECX                            ; 004da079
    MOV EDI,dword ptr [0x02d831c4]      ; 004da07a | undefined4 DAT_02d831c4
    PUSH EDI                            ; 004da080
    LEA EAX,[ESP + 0x1610]              ; 004da081
    PUSH EAX                            ; 004da088
    MOV EBP,dword ptr [0x020a5720]      ; 004da089 | CBitFont * g_ThemeFont
    PUSH EBP                            ; 004da08f
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004da090 | int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02d831cc]                ; 004da095 | undefined4 DAT_02d831cc
    ADD dword ptr [0x02d831c8],EAX      ; 004da09a | undefined4 DAT_02d831c8
    SHL EAX,0x2                         ; 004da0a0
    MOV EDX,dword ptr [0x00679398]      ; 004da0a3 | int g_WindowHeight
    MOV ECX,dword ptr [0x02d831c8]      ; 004da0a9 | undefined4 DAT_02d831c8
    SUB EDX,EAX                         ; 004da0af
    ADD ESP,0x18                        ; 004da0b1
    JMP 0x004d9035                      ; 004da0b4 | LAB_004d9035
        ;   XREF to: 004d9035 (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x02d831cc]      ; 004da0b9 | undefined4 DAT_02d831cc
        ;   Label: LAB_004da0b9
    LEA EAX,[EDX*0x4 + 0x0]             ; 004da0bf
    MOV ECX,0x3                         ; 004da0c6
    SUB EAX,EDX                         ; 004da0cb
    MOV EBX,dword ptr [0x00679394]      ; 004da0cd | int g_WindowWidth
    ADD EAX,EAX                         ; 004da0d3
    MOV EDX,EBX                         ; 004da0d5
    MOV [0x02d831c8],EAX                ; 004da0d7 | undefined4 DAT_02d831c8
    SAR EDX,0x1f                        ; 004da0dc
    MOV EAX,EBX                         ; 004da0df
    IDIV ECX                            ; 004da0e1
    ADD dword ptr [0x02d831c4],EAX      ; 004da0e3 | undefined4 DAT_02d831c4
    MOV EBX,dword ptr [0x00679394]      ; 004da0e9 | int g_WindowWidth
    ADD ESP,0x1c00                      ; 004da0ef
    POP EBP                             ; 004da0f5
    POP EDI                             ; 004da0f6
    POP ESI                             ; 004da0f7
    POP EBX                             ; 004da0f8
    RET                                 ; 004da0f9

