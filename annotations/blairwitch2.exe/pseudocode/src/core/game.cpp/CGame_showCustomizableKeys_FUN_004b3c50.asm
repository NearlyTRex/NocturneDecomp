; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_showCustomizableKeys_FUN_004b3c50(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x1910]:1  local_1910
; undefined        Stack[-0x1810]:1  local_1810
; undefined        Stack[-0x1710]:1  local_1710
; undefined        Stack[-0x1610]:1  local_1610
; undefined        Stack[-0x1510]:1  local_1510
; undefined        Stack[-0x1410]:1  local_1410
; undefined        Stack[-0x1310]:1  local_1310
; undefined        Stack[-0x1210]:1  local_1210
; undefined        Stack[-0x1110]:1  local_1110
; undefined        Stack[-0x1010]:1  local_1010
; undefined        Stack[-0xf10]:1  local_f10
; undefined        Stack[-0xe10]:1  local_e10
; undefined        Stack[-0xd10]:1  local_d10
; undefined        Stack[-0xc10]:1  local_c10
; undefined        Stack[-0xb10]:1  local_b10
; undefined        Stack[-0xa10]:1  local_a10
; undefined        Stack[-0x910]:1  local_910
; undefined        Stack[-0x810]:1  local_810
; undefined        Stack[-0x710]:1  local_710
; undefined        Stack[-0x610]:1  local_610
; undefined        Stack[-0x510]:1  local_510
; undefined        Stack[-0x410]:1  local_410
; undefined        Stack[-0x310]:1  local_310
; undefined        Stack[-0x210]:1  local_210
; undefined        Stack[-0x110]:1  local_110
;
; XREF[1]:
;   core_game.cpp_FUN_004b5190 at 004b5be7
;
; Referenced Globals:
;   undefined4 s_s_s_005d7332+1
;   TerminatedCString s_Quick_help_005d733b
;   TerminatedCString s_F1_Toggle_help_005d7346
;   TerminatedCString s_F2_Save_game_005d7357
;   TerminatedCString s_F3_Restore_game_005d7366
;   TerminatedCString s_F5_Toggle_mute_005d7378
;   TerminatedCString s_F6_Quick_save_005d7389
;   TerminatedCString s_F9_Quick_load_005d7399
;   TerminatedCString s_ESC_Pause_game_005d73a9
;   TerminatedCString s_Forward_005d73ba
;   undefined4 DAT_005d73c2
;   undefined4 DAT_005d73c7
;   undefined4 DAT_005d73cc
;   TerminatedCString s_Strafe_on_005d73d0
;   TerminatedCString s_Strafe_left_005d73da
;   ... and 28 more
;
; Called Functions:
;   core_menu.cpp_getKeyDisplayName_FUN_004ee960
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004ab530
;   engine_font.cpp_FUN_004a8df0
;   support_newmsg.cpp_getLocalizedString_FUN_0050fe80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b3c50
        ;   Label: core_game.cpp_CGame_showCustomizableKeys_FUN_004b3c50
    PUSH ESI                            ; 004b3c51
    PUSH EDI                            ; 004b3c52
    PUSH EBP                            ; 004b3c53
    SUB ESP,0x1900                      ; 004b3c54
    MOV EBX,dword ptr [0x006141b8]      ; 004b3c5a | DAT_006141b8
    MOV ESI,dword ptr [ESP + 0x1914]    ; 004b3c60
    PUSH 0xffff                         ; 004b3c67
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 004b3c6c
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 004b3c71
    PUSH 0x58                           ; 004b3c74
    MOV EDX,dword ptr [0x01511cc0]      ; 004b3c76 | DAT_01511cc0
    PUSH EDX                            ; 004b3c7c
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004b3c7d
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004b3c82
    PUSH 0x58                           ; 004b3c85
    MOV ECX,dword ptr [0x01511cc0]      ; 004b3c87 | DAT_01511cc0
    PUSH ECX                            ; 004b3c8d
    MOV [0x01cb80f0],EAX                ; 004b3c8e | DAT_01cb80f0
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004ab530 ; 004b3c93
        ;   XREF to: 004ab530 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004ab530(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004b3c98
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b3c9b | DAT_01cb80f0
    MOV [0x01cb80f4],EAX                ; 004b3ca1 | DAT_01cb80f4
    PUSH 0x5d733b                       ; 004b3ca6 | = "Quick help"
    SHL EDX,0x2                         ; 004b3cab
    SHL EAX,0x2                         ; 004b3cae
    MOV dword ptr [0x01cb80ec],EDX      ; 004b3cb1 | DAT_01cb80ec
    MOV [0x01cb80e8],EAX                ; 004b3cb7 | DAT_01cb80e8
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b3cbc
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b3cc1
    PUSH -0x1                           ; 004b3cc4
    PUSH 0x7                            ; 004b3cc6
    MOV EDI,dword ptr [0x01cb80ec]      ; 004b3cc8 | DAT_01cb80ec
    PUSH EDI                            ; 004b3cce
    MOV EBP,dword ptr [0x01cb80e8]      ; 004b3ccf | DAT_01cb80e8
    PUSH EBP                            ; 004b3cd5
    PUSH EAX                            ; 004b3cd6
    MOV EAX,[0x01511cc0]                ; 004b3cd7 | DAT_01511cc0
    PUSH EAX                            ; 004b3cdc
    CALL engine_font.cpp_FUN_004a8df0   ; 004b3cdd
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b3ce2 | DAT_01cb80f0
    ADD dword ptr [0x01cb80ec],EAX      ; 004b3ce7 | DAT_01cb80ec
    SHL EAX,0x2                         ; 004b3ced
    MOV EDX,dword ptr [0x006141bc]      ; 004b3cf0 | DAT_006141bc
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b3cf6 | DAT_01cb80ec
    SUB EDX,EAX                         ; 004b3cfc
    ADD ESP,0x18                        ; 004b3cfe
    CMP EDX,ECX                         ; 004b3d01
    JGE 0x004b3d35                      ; 004b3d03
        ;   XREF to: 004b3d35 (CONDITIONAL_JUMP)  ; LAB_004b3d35
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b3d05 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b3d0b
    MOV ECX,0x3                         ; 004b3d12
    SUB EAX,EDX                         ; 004b3d17
    MOV EBX,dword ptr [0x006141b8]      ; 004b3d19 | DAT_006141b8
    ADD EAX,EAX                         ; 004b3d1f
    MOV EDX,EBX                         ; 004b3d21
    MOV [0x01cb80ec],EAX                ; 004b3d23 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b3d28
    MOV EAX,EBX                         ; 004b3d2b
    IDIV ECX                            ; 004b3d2d
    ADD dword ptr [0x01cb80e8],EAX      ; 004b3d2f | DAT_01cb80e8
    MOV EAX,[0x01cb80f0]                ; 004b3d35 | DAT_01cb80f0
        ;   Label: LAB_004b3d35
    MOV EBP,dword ptr [0x01cb80ec]      ; 004b3d3a | DAT_01cb80ec
    ADD EBP,EAX                         ; 004b3d40
    PUSH 0x5d7346                       ; 004b3d42 | = "F1 = Toggle help"
    MOV dword ptr [0x01cb80ec],EBP      ; 004b3d47 | DAT_01cb80ec
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b3d4d
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b3d52
    PUSH -0x1                           ; 004b3d55
    PUSH 0x7                            ; 004b3d57
    MOV EDX,dword ptr [0x01cb80ec]      ; 004b3d59 | DAT_01cb80ec
    PUSH EDX                            ; 004b3d5f
    MOV ECX,dword ptr [0x01cb80e8]      ; 004b3d60 | DAT_01cb80e8
    PUSH ECX                            ; 004b3d66
    PUSH EAX                            ; 004b3d67
    MOV EDI,dword ptr [0x01511cc0]      ; 004b3d68 | DAT_01511cc0
    PUSH EDI                            ; 004b3d6e
    CALL engine_font.cpp_FUN_004a8df0   ; 004b3d6f
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b3d74 | DAT_01cb80f0
    MOV EBP,dword ptr [0x01cb80ec]      ; 004b3d79 | DAT_01cb80ec
    MOV EDX,dword ptr [0x006141bc]      ; 004b3d7f | DAT_006141bc
    ADD EBP,EAX                         ; 004b3d85
    SHL EAX,0x2                         ; 004b3d87
    ADD ESP,0x18                        ; 004b3d8a
    SUB EDX,EAX                         ; 004b3d8d
    MOV dword ptr [0x01cb80ec],EBP      ; 004b3d8f | DAT_01cb80ec
    CMP EDX,EBP                         ; 004b3d95
    JGE 0x004b3dc9                      ; 004b3d97
        ;   XREF to: 004b3dc9 (CONDITIONAL_JUMP)  ; LAB_004b3dc9
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b3d99 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b3d9f
    MOV ECX,0x3                         ; 004b3da6
    SUB EAX,EDX                         ; 004b3dab
    MOV EBX,dword ptr [0x006141b8]      ; 004b3dad | DAT_006141b8
    ADD EAX,EAX                         ; 004b3db3
    MOV EDX,EBX                         ; 004b3db5
    MOV [0x01cb80ec],EAX                ; 004b3db7 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b3dbc
    MOV EAX,EBX                         ; 004b3dbf
    IDIV ECX                            ; 004b3dc1
    ADD dword ptr [0x01cb80e8],EAX      ; 004b3dc3 | DAT_01cb80e8
    PUSH 0x5d7357                       ; 004b3dc9 | = "F2 = Save game"
        ;   Label: LAB_004b3dc9
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b3dce
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b3dd3
    PUSH -0x1                           ; 004b3dd6
    PUSH 0x7                            ; 004b3dd8
    MOV EDI,dword ptr [0x01cb80ec]      ; 004b3dda | DAT_01cb80ec
    PUSH EDI                            ; 004b3de0
    MOV EBP,dword ptr [0x01cb80e8]      ; 004b3de1 | DAT_01cb80e8
    PUSH EBP                            ; 004b3de7
    PUSH EAX                            ; 004b3de8
    MOV EAX,[0x01511cc0]                ; 004b3de9 | DAT_01511cc0
    PUSH EAX                            ; 004b3dee
    CALL engine_font.cpp_FUN_004a8df0   ; 004b3def
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b3df4 | DAT_01cb80f0
    ADD dword ptr [0x01cb80ec],EAX      ; 004b3df9 | DAT_01cb80ec
    SHL EAX,0x2                         ; 004b3dff
    MOV EDX,dword ptr [0x006141bc]      ; 004b3e02 | DAT_006141bc
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b3e08 | DAT_01cb80ec
    SUB EDX,EAX                         ; 004b3e0e
    ADD ESP,0x18                        ; 004b3e10
    CMP EDX,ECX                         ; 004b3e13
    JGE 0x004b3e47                      ; 004b3e15
        ;   XREF to: 004b3e47 (CONDITIONAL_JUMP)  ; LAB_004b3e47
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b3e17 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b3e1d
    MOV ECX,0x3                         ; 004b3e24
    SUB EAX,EDX                         ; 004b3e29
    MOV EBX,dword ptr [0x006141b8]      ; 004b3e2b | DAT_006141b8
    ADD EAX,EAX                         ; 004b3e31
    MOV EDX,EBX                         ; 004b3e33
    MOV [0x01cb80ec],EAX                ; 004b3e35 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b3e3a
    MOV EAX,EBX                         ; 004b3e3d
    IDIV ECX                            ; 004b3e3f
    ADD dword ptr [0x01cb80e8],EAX      ; 004b3e41 | DAT_01cb80e8
    PUSH 0x5d7366                       ; 004b3e47 | = "F3 = Restore game"
        ;   Label: LAB_004b3e47
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b3e4c
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b3e51
    PUSH -0x1                           ; 004b3e54
    PUSH 0x7                            ; 004b3e56
    MOV EBP,dword ptr [0x01cb80ec]      ; 004b3e58 | DAT_01cb80ec
    PUSH EBP                            ; 004b3e5e
    MOV EDX,dword ptr [0x01cb80e8]      ; 004b3e5f | DAT_01cb80e8
    PUSH EDX                            ; 004b3e65
    PUSH EAX                            ; 004b3e66
    MOV ECX,dword ptr [0x01511cc0]      ; 004b3e67 | DAT_01511cc0
    PUSH ECX                            ; 004b3e6d
    CALL engine_font.cpp_FUN_004a8df0   ; 004b3e6e
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b3e73 | DAT_01cb80f0
    MOV EDI,dword ptr [0x01cb80ec]      ; 004b3e78 | DAT_01cb80ec
    MOV EDX,dword ptr [0x006141bc]      ; 004b3e7e | DAT_006141bc
    ADD EDI,EAX                         ; 004b3e84
    SHL EAX,0x2                         ; 004b3e86
    ADD ESP,0x18                        ; 004b3e89
    SUB EDX,EAX                         ; 004b3e8c
    MOV dword ptr [0x01cb80ec],EDI      ; 004b3e8e | DAT_01cb80ec
    CMP EDX,EDI                         ; 004b3e94
    JGE 0x004b3ec8                      ; 004b3e96
        ;   XREF to: 004b3ec8 (CONDITIONAL_JUMP)  ; LAB_004b3ec8
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b3e98 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b3e9e
    MOV ECX,0x3                         ; 004b3ea5
    SUB EAX,EDX                         ; 004b3eaa
    MOV EBX,dword ptr [0x006141b8]      ; 004b3eac | DAT_006141b8
    ADD EAX,EAX                         ; 004b3eb2
    MOV EDX,EBX                         ; 004b3eb4
    MOV [0x01cb80ec],EAX                ; 004b3eb6 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b3ebb
    MOV EAX,EBX                         ; 004b3ebe
    IDIV ECX                            ; 004b3ec0
    ADD dword ptr [0x01cb80e8],EAX      ; 004b3ec2 | DAT_01cb80e8
    PUSH 0x5d7378                       ; 004b3ec8 | = "F5 = Toggle mute"
        ;   Label: LAB_004b3ec8
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b3ecd
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b3ed2
    PUSH -0x1                           ; 004b3ed5
    PUSH 0x7                            ; 004b3ed7
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b3ed9 | DAT_01cb80ec
    PUSH ECX                            ; 004b3edf
    MOV EDI,dword ptr [0x01cb80e8]      ; 004b3ee0 | DAT_01cb80e8
    PUSH EDI                            ; 004b3ee6
    PUSH EAX                            ; 004b3ee7
    MOV EBP,dword ptr [0x01511cc0]      ; 004b3ee8 | DAT_01511cc0
    PUSH EBP                            ; 004b3eee
    CALL engine_font.cpp_FUN_004a8df0   ; 004b3eef
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b3ef4 | DAT_01cb80f0
    ADD dword ptr [0x01cb80ec],EAX      ; 004b3ef9 | DAT_01cb80ec
    SHL EAX,0x2                         ; 004b3eff
    MOV EDX,dword ptr [0x006141bc]      ; 004b3f02 | DAT_006141bc
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b3f08 | DAT_01cb80ec
    SUB EDX,EAX                         ; 004b3f0e
    ADD ESP,0x18                        ; 004b3f10
    CMP EDX,ECX                         ; 004b3f13
    JGE 0x004b3f47                      ; 004b3f15
        ;   XREF to: 004b3f47 (CONDITIONAL_JUMP)  ; LAB_004b3f47
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b3f17 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b3f1d
    MOV ECX,0x3                         ; 004b3f24
    SUB EAX,EDX                         ; 004b3f29
    MOV EBX,dword ptr [0x006141b8]      ; 004b3f2b | DAT_006141b8
    ADD EAX,EAX                         ; 004b3f31
    MOV EDX,EBX                         ; 004b3f33
    MOV [0x01cb80ec],EAX                ; 004b3f35 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b3f3a
    MOV EAX,EBX                         ; 004b3f3d
    IDIV ECX                            ; 004b3f3f
    ADD dword ptr [0x01cb80e8],EAX      ; 004b3f41 | DAT_01cb80e8
    PUSH 0x5d7389                       ; 004b3f47 | = "F6 = Quick save"
        ;   Label: LAB_004b3f47
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b3f4c
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b3f51
    PUSH -0x1                           ; 004b3f54
    PUSH 0x7                            ; 004b3f56
    MOV EBP,dword ptr [0x01cb80ec]      ; 004b3f58 | DAT_01cb80ec
    PUSH EBP                            ; 004b3f5e
    MOV EDX,dword ptr [0x01cb80e8]      ; 004b3f5f | DAT_01cb80e8
    PUSH EDX                            ; 004b3f65
    PUSH EAX                            ; 004b3f66
    MOV ECX,dword ptr [0x01511cc0]      ; 004b3f67 | DAT_01511cc0
    PUSH ECX                            ; 004b3f6d
    CALL engine_font.cpp_FUN_004a8df0   ; 004b3f6e
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b3f73 | DAT_01cb80f0
    MOV EDI,dword ptr [0x01cb80ec]      ; 004b3f78 | DAT_01cb80ec
    MOV EDX,dword ptr [0x006141bc]      ; 004b3f7e | DAT_006141bc
    ADD EDI,EAX                         ; 004b3f84
    SHL EAX,0x2                         ; 004b3f86
    ADD ESP,0x18                        ; 004b3f89
    SUB EDX,EAX                         ; 004b3f8c
    MOV dword ptr [0x01cb80ec],EDI      ; 004b3f8e | DAT_01cb80ec
    CMP EDX,EDI                         ; 004b3f94
    JGE 0x004b3fc8                      ; 004b3f96
        ;   XREF to: 004b3fc8 (CONDITIONAL_JUMP)  ; LAB_004b3fc8
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b3f98 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b3f9e
    MOV ECX,0x3                         ; 004b3fa5
    SUB EAX,EDX                         ; 004b3faa
    MOV EBX,dword ptr [0x006141b8]      ; 004b3fac | DAT_006141b8
    ADD EAX,EAX                         ; 004b3fb2
    MOV EDX,EBX                         ; 004b3fb4
    MOV [0x01cb80ec],EAX                ; 004b3fb6 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b3fbb
    MOV EAX,EBX                         ; 004b3fbe
    IDIV ECX                            ; 004b3fc0
    ADD dword ptr [0x01cb80e8],EAX      ; 004b3fc2 | DAT_01cb80e8
    PUSH 0x5d7399                       ; 004b3fc8 | = "F9 = Quick load"
        ;   Label: LAB_004b3fc8
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b3fcd
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b3fd2
    PUSH -0x1                           ; 004b3fd5
    PUSH 0x7                            ; 004b3fd7
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b3fd9 | DAT_01cb80ec
    PUSH ECX                            ; 004b3fdf
    MOV EDI,dword ptr [0x01cb80e8]      ; 004b3fe0 | DAT_01cb80e8
    PUSH EDI                            ; 004b3fe6
    PUSH EAX                            ; 004b3fe7
    MOV EBP,dword ptr [0x01511cc0]      ; 004b3fe8 | DAT_01511cc0
    PUSH EBP                            ; 004b3fee
    CALL engine_font.cpp_FUN_004a8df0   ; 004b3fef
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b3ff4 | DAT_01cb80f0
    ADD dword ptr [0x01cb80ec],EAX      ; 004b3ff9 | DAT_01cb80ec
    SHL EAX,0x2                         ; 004b3fff
    MOV EDX,dword ptr [0x006141bc]      ; 004b4002 | DAT_006141bc
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b4008 | DAT_01cb80ec
    SUB EDX,EAX                         ; 004b400e
    ADD ESP,0x18                        ; 004b4010
    CMP EDX,ECX                         ; 004b4013
    JGE 0x004b4047                      ; 004b4015
        ;   XREF to: 004b4047 (CONDITIONAL_JUMP)  ; LAB_004b4047
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b4017 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b401d
    MOV ECX,0x3                         ; 004b4024
    SUB EAX,EDX                         ; 004b4029
    MOV EBX,dword ptr [0x006141b8]      ; 004b402b | DAT_006141b8
    ADD EAX,EAX                         ; 004b4031
    MOV EDX,EBX                         ; 004b4033
    MOV [0x01cb80ec],EAX                ; 004b4035 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b403a
    MOV EAX,EBX                         ; 004b403d
    IDIV ECX                            ; 004b403f
    ADD dword ptr [0x01cb80e8],EAX      ; 004b4041 | DAT_01cb80e8
    PUSH 0x5d73a9                       ; 004b4047 | = "ESC = Pause game"
        ;   Label: LAB_004b4047
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b404c
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b4051
    PUSH -0x1                           ; 004b4054
    PUSH 0x7                            ; 004b4056
    MOV EBP,dword ptr [0x01cb80ec]      ; 004b4058 | DAT_01cb80ec
    PUSH EBP                            ; 004b405e
    MOV EDX,dword ptr [0x01cb80e8]      ; 004b405f | DAT_01cb80e8
    PUSH EDX                            ; 004b4065
    PUSH EAX                            ; 004b4066
    MOV ECX,dword ptr [0x01511cc0]      ; 004b4067 | DAT_01511cc0
    PUSH ECX                            ; 004b406d
    CALL engine_font.cpp_FUN_004a8df0   ; 004b406e
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b4073 | DAT_01cb80f0
    MOV EDI,dword ptr [0x01cb80ec]      ; 004b4078 | DAT_01cb80ec
    MOV EDX,dword ptr [0x006141bc]      ; 004b407e | DAT_006141bc
    ADD EDI,EAX                         ; 004b4084
    SHL EAX,0x2                         ; 004b4086
    ADD ESP,0x18                        ; 004b4089
    SUB EDX,EAX                         ; 004b408c
    MOV dword ptr [0x01cb80ec],EDI      ; 004b408e | DAT_01cb80ec
    CMP EDX,EDI                         ; 004b4094
    JGE 0x004b40c8                      ; 004b4096
        ;   XREF to: 004b40c8 (CONDITIONAL_JUMP)  ; LAB_004b40c8
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b4098 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b409e
    MOV ECX,0x3                         ; 004b40a5
    SUB EAX,EDX                         ; 004b40aa
    MOV EBX,dword ptr [0x006141b8]      ; 004b40ac | DAT_006141b8
    ADD EAX,EAX                         ; 004b40b2
    MOV EDX,EBX                         ; 004b40b4
    MOV [0x01cb80ec],EAX                ; 004b40b6 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b40bb
    MOV EAX,EBX                         ; 004b40be
    IDIV ECX                            ; 004b40c0
    ADD dword ptr [0x01cb80e8],EAX      ; 004b40c2 | DAT_01cb80e8
    MOV EAX,[0x01cb80f0]                ; 004b40c8 | DAT_01cb80f0
        ;   Label: LAB_004b40c8
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b40cd | DAT_01cb80ec
    ADD ECX,EAX                         ; 004b40d3
    PUSH 0x5d73ba                       ; 004b40d5 | = "Forward"
    MOV dword ptr [0x01cb80ec],ECX      ; 004b40da | DAT_01cb80ec
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b40e0
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b40e5
    PUSH EAX                            ; 004b40e8
    MOV EDX,dword ptr [ESI + 0x28]      ; 004b40e9
    PUSH EDX                            ; 004b40ec
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b40ed
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b40f2
    PUSH EAX                            ; 004b40f5
    PUSH 0x5d7333                       ; 004b40f6 | s_s_s_005d7332+1
    LEA EAX,[ESP + 0x70c]               ; 004b40fb
    PUSH EAX                            ; 004b4102
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b4103
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b4108
    PUSH -0x1                           ; 004b410b
    PUSH 0x7                            ; 004b410d
    MOV EDI,dword ptr [0x01cb80ec]      ; 004b410f | DAT_01cb80ec
    PUSH EDI                            ; 004b4115
    MOV EBP,dword ptr [0x01cb80e8]      ; 004b4116 | DAT_01cb80e8
    PUSH EBP                            ; 004b411c
    LEA EAX,[ESP + 0x710]               ; 004b411d
    PUSH EAX                            ; 004b4124
    MOV EAX,[0x01511cc0]                ; 004b4125 | DAT_01511cc0
    PUSH EAX                            ; 004b412a
    CALL engine_font.cpp_FUN_004a8df0   ; 004b412b
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b4130 | DAT_01cb80f0
    ADD dword ptr [0x01cb80ec],EAX      ; 004b4135 | DAT_01cb80ec
    SHL EAX,0x2                         ; 004b413b
    MOV EDX,dword ptr [0x006141bc]      ; 004b413e | DAT_006141bc
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b4144 | DAT_01cb80ec
    SUB EDX,EAX                         ; 004b414a
    ADD ESP,0x18                        ; 004b414c
    CMP EDX,ECX                         ; 004b414f
    JGE 0x004b4183                      ; 004b4151
        ;   XREF to: 004b4183 (CONDITIONAL_JUMP)  ; LAB_004b4183
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b4153 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b4159
    MOV ECX,0x3                         ; 004b4160
    SUB EAX,EDX                         ; 004b4165
    MOV EBX,dword ptr [0x006141b8]      ; 004b4167 | DAT_006141b8
    ADD EAX,EAX                         ; 004b416d
    MOV EDX,EBX                         ; 004b416f
    MOV [0x01cb80ec],EAX                ; 004b4171 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b4176
    MOV EAX,EBX                         ; 004b4179
    IDIV ECX                            ; 004b417b
    ADD dword ptr [0x01cb80e8],EAX      ; 004b417d | DAT_01cb80e8
    PUSH 0x5d73c2                       ; 004b4183 | DAT_005d73c2
        ;   Label: LAB_004b4183
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b4188
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b418d
    PUSH EAX                            ; 004b4190
    MOV EDX,dword ptr [ESI + 0x2c]      ; 004b4191
    PUSH EDX                            ; 004b4194
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b4195
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b419a
    PUSH EAX                            ; 004b419d
    PUSH 0x5d7333                       ; 004b419e | s_s_s_005d7332+1
    LEA EAX,[ESP + 0xe0c]               ; 004b41a3
    PUSH EAX                            ; 004b41aa
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b41ab
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b41b0
    PUSH -0x1                           ; 004b41b3
    PUSH 0x7                            ; 004b41b5
    MOV EBP,dword ptr [0x01cb80ec]      ; 004b41b7 | DAT_01cb80ec
    PUSH EBP                            ; 004b41bd
    MOV EAX,[0x01cb80e8]                ; 004b41be | DAT_01cb80e8
    PUSH EAX                            ; 004b41c3
    LEA EAX,[ESP + 0xe10]               ; 004b41c4
    PUSH EAX                            ; 004b41cb
    MOV EDX,dword ptr [0x01511cc0]      ; 004b41cc | DAT_01511cc0
    PUSH EDX                            ; 004b41d2
    CALL engine_font.cpp_FUN_004a8df0   ; 004b41d3
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b41d8 | DAT_01cb80f0
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b41dd | DAT_01cb80ec
    MOV EDX,dword ptr [0x006141bc]      ; 004b41e3 | DAT_006141bc
    ADD ECX,EAX                         ; 004b41e9
    SHL EAX,0x2                         ; 004b41eb
    ADD ESP,0x18                        ; 004b41ee
    SUB EDX,EAX                         ; 004b41f1
    MOV dword ptr [0x01cb80ec],ECX      ; 004b41f3 | DAT_01cb80ec
    CMP EDX,ECX                         ; 004b41f9
    JGE 0x004b422d                      ; 004b41fb
        ;   XREF to: 004b422d (CONDITIONAL_JUMP)  ; LAB_004b422d
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b41fd | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b4203
    MOV ECX,0x3                         ; 004b420a
    SUB EAX,EDX                         ; 004b420f
    MOV EBX,dword ptr [0x006141b8]      ; 004b4211 | DAT_006141b8
    ADD EAX,EAX                         ; 004b4217
    MOV EDX,EBX                         ; 004b4219
    MOV [0x01cb80ec],EAX                ; 004b421b | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b4220
    MOV EAX,EBX                         ; 004b4223
    IDIV ECX                            ; 004b4225
    ADD dword ptr [0x01cb80e8],EAX      ; 004b4227 | DAT_01cb80e8
    MOV EAX,[0x00616494]                ; 004b422d | g_CGamePtr
        ;   Label: LAB_004b422d
    CMP dword ptr [EAX + 0xac],0x0      ; 004b4232 | g_CGameInstance.always_run
    JZ 0x004b50ce                       ; 004b4239
        ;   XREF to: 004b50ce (CONDITIONAL_JUMP)  ; LAB_004b50ce
    PUSH 0x5d73c7                       ; 004b423f | DAT_005d73c7
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b4244
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b4249
    PUSH EAX                            ; 004b424c
    MOV EDX,dword ptr [ESI + 0x30]      ; 004b424d
    PUSH EDX                            ; 004b4250
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b4251
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b4256
    PUSH EAX                            ; 004b4259
    PUSH 0x5d7333                       ; 004b425a | s_s_s_005d7332+1
    LEA EAX,[ESP + 0x170c]              ; 004b425f
    PUSH EAX                            ; 004b4266
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b4267
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b426c
    PUSH -0x1                           ; 004b426f
    PUSH 0x7                            ; 004b4271
    MOV EBP,dword ptr [0x01cb80ec]      ; 004b4273 | DAT_01cb80ec
    PUSH EBP                            ; 004b4279
    MOV EAX,[0x01cb80e8]                ; 004b427a | DAT_01cb80e8
    PUSH EAX                            ; 004b427f
    LEA EAX,[ESP + 0x1710]              ; 004b4280
    PUSH EAX                            ; 004b4287
    MOV EDX,dword ptr [0x01511cc0]      ; 004b4288 | DAT_01511cc0
    PUSH EDX                            ; 004b428e
    CALL engine_font.cpp_FUN_004a8df0   ; 004b428f
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b4294 | DAT_01cb80f0
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b4299 | DAT_01cb80ec
    MOV EDX,dword ptr [0x006141bc]      ; 004b429f | DAT_006141bc
    ADD ECX,EAX                         ; 004b42a5
    SHL EAX,0x2                         ; 004b42a7
    ADD ESP,0x18                        ; 004b42aa
    SUB EDX,EAX                         ; 004b42ad
    MOV dword ptr [0x01cb80ec],ECX      ; 004b42af | DAT_01cb80ec
    CMP EDX,ECX                         ; 004b42b5
        ;   Label: LAB_004b42b5
    JGE 0x004b42e9                      ; 004b42b7
        ;   XREF to: 004b42e9 (CONDITIONAL_JUMP)  ; LAB_004b42e9
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b42b9 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b42bf
    MOV ECX,0x3                         ; 004b42c6
    SUB EAX,EDX                         ; 004b42cb
    MOV EBX,dword ptr [0x006141b8]      ; 004b42cd | DAT_006141b8
    ADD EAX,EAX                         ; 004b42d3
    MOV EDX,EBX                         ; 004b42d5
    MOV [0x01cb80ec],EAX                ; 004b42d7 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b42dc
    MOV EAX,EBX                         ; 004b42df
    IDIV ECX                            ; 004b42e1
    ADD dword ptr [0x01cb80e8],EAX      ; 004b42e3 | DAT_01cb80e8
    PUSH 0x5d73d0                       ; 004b42e9 | = "Strafe on"
        ;   Label: LAB_004b42e9
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b42ee
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b42f3
    PUSH EAX                            ; 004b42f6
    MOV EDX,dword ptr [ESI + 0x34]      ; 004b42f7
    PUSH EDX                            ; 004b42fa
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b42fb
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b4300
    PUSH EAX                            ; 004b4303
    PUSH 0x5d7333                       ; 004b4304 | s_s_s_005d7332+1
    LEA EAX,[ESP + 0x80c]               ; 004b4309
    PUSH EAX                            ; 004b4310
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b4311
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b4316
    PUSH -0x1                           ; 004b4319
    PUSH 0x7                            ; 004b431b
    MOV EAX,[0x01cb80ec]                ; 004b431d | DAT_01cb80ec
    PUSH EAX                            ; 004b4322
    MOV EDX,dword ptr [0x01cb80e8]      ; 004b4323 | DAT_01cb80e8
    PUSH EDX                            ; 004b4329
    LEA EAX,[ESP + 0x810]               ; 004b432a
    PUSH EAX                            ; 004b4331
    MOV ECX,dword ptr [0x01511cc0]      ; 004b4332 | DAT_01511cc0
    PUSH ECX                            ; 004b4338
    CALL engine_font.cpp_FUN_004a8df0   ; 004b4339
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b433e | DAT_01cb80f0
    MOV EDI,dword ptr [0x01cb80ec]      ; 004b4343 | DAT_01cb80ec
    MOV EDX,dword ptr [0x006141bc]      ; 004b4349 | DAT_006141bc
    ADD EDI,EAX                         ; 004b434f
    SHL EAX,0x2                         ; 004b4351
    ADD ESP,0x18                        ; 004b4354
    SUB EDX,EAX                         ; 004b4357
    MOV dword ptr [0x01cb80ec],EDI      ; 004b4359 | DAT_01cb80ec
    CMP EDX,EDI                         ; 004b435f
    JGE 0x004b4393                      ; 004b4361
        ;   XREF to: 004b4393 (CONDITIONAL_JUMP)  ; LAB_004b4393
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b4363 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b4369
    MOV ECX,0x3                         ; 004b4370
    SUB EAX,EDX                         ; 004b4375
    MOV EBX,dword ptr [0x006141b8]      ; 004b4377 | DAT_006141b8
    ADD EAX,EAX                         ; 004b437d
    MOV EDX,EBX                         ; 004b437f
    MOV [0x01cb80ec],EAX                ; 004b4381 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b4386
    MOV EAX,EBX                         ; 004b4389
    IDIV ECX                            ; 004b438b
    ADD dword ptr [0x01cb80e8],EAX      ; 004b438d | DAT_01cb80e8
    PUSH 0x5d73da                       ; 004b4393 | = "Strafe left"
        ;   Label: LAB_004b4393
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b4398
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b439d
    PUSH EAX                            ; 004b43a0
    MOV EDX,dword ptr [ESI + 0x38]      ; 004b43a1
    PUSH EDX                            ; 004b43a4
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b43a5
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b43aa
    PUSH EAX                            ; 004b43ad
    PUSH 0x5d7333                       ; 004b43ae | s_s_s_005d7332+1
    LEA EAX,[ESP + 0xc]                 ; 004b43b3
    PUSH EAX                            ; 004b43b7
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b43b8
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b43bd
    PUSH -0x1                           ; 004b43c0
    PUSH 0x7                            ; 004b43c2
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b43c4 | DAT_01cb80ec
    PUSH ECX                            ; 004b43ca
    MOV EDI,dword ptr [0x01cb80e8]      ; 004b43cb | DAT_01cb80e8
    PUSH EDI                            ; 004b43d1
    LEA EAX,[ESP + 0x10]                ; 004b43d2
    PUSH EAX                            ; 004b43d6
    MOV EBP,dword ptr [0x01511cc0]      ; 004b43d7 | DAT_01511cc0
    PUSH EBP                            ; 004b43dd
    CALL engine_font.cpp_FUN_004a8df0   ; 004b43de
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b43e3 | DAT_01cb80f0
    ADD dword ptr [0x01cb80ec],EAX      ; 004b43e8 | DAT_01cb80ec
    SHL EAX,0x2                         ; 004b43ee
    MOV EDX,dword ptr [0x006141bc]      ; 004b43f1 | DAT_006141bc
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b43f7 | DAT_01cb80ec
    SUB EDX,EAX                         ; 004b43fd
    ADD ESP,0x18                        ; 004b43ff
    CMP EDX,ECX                         ; 004b4402
    JGE 0x004b4436                      ; 004b4404
        ;   XREF to: 004b4436 (CONDITIONAL_JUMP)  ; LAB_004b4436
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b4406 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b440c
    MOV ECX,0x3                         ; 004b4413
    SUB EAX,EDX                         ; 004b4418
    MOV EBX,dword ptr [0x006141b8]      ; 004b441a | DAT_006141b8
    ADD EAX,EAX                         ; 004b4420
    MOV EDX,EBX                         ; 004b4422
    MOV [0x01cb80ec],EAX                ; 004b4424 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b4429
    MOV EAX,EBX                         ; 004b442c
    IDIV ECX                            ; 004b442e
    ADD dword ptr [0x01cb80e8],EAX      ; 004b4430 | DAT_01cb80e8
    PUSH 0x5d73e6                       ; 004b4436 | = "Strafe right"
        ;   Label: LAB_004b4436
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b443b
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b4440
    PUSH EAX                            ; 004b4443
    MOV EDX,dword ptr [ESI + 0x3c]      ; 004b4444
    PUSH EDX                            ; 004b4447
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b4448
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b444d
    PUSH EAX                            ; 004b4450
    PUSH 0x5d7333                       ; 004b4451 | s_s_s_005d7332+1
    LEA EAX,[ESP + 0x130c]              ; 004b4456
    PUSH EAX                            ; 004b445d
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b445e
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b4463
    PUSH -0x1                           ; 004b4466
    PUSH 0x7                            ; 004b4468
    MOV EBP,dword ptr [0x01cb80ec]      ; 004b446a | DAT_01cb80ec
    PUSH EBP                            ; 004b4470
    MOV EAX,[0x01cb80e8]                ; 004b4471 | DAT_01cb80e8
    PUSH EAX                            ; 004b4476
    LEA EAX,[ESP + 0x1310]              ; 004b4477
    PUSH EAX                            ; 004b447e
    MOV EDX,dword ptr [0x01511cc0]      ; 004b447f | DAT_01511cc0
    PUSH EDX                            ; 004b4485
    CALL engine_font.cpp_FUN_004a8df0   ; 004b4486
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b448b | DAT_01cb80f0
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b4490 | DAT_01cb80ec
    MOV EDX,dword ptr [0x006141bc]      ; 004b4496 | DAT_006141bc
    ADD ECX,EAX                         ; 004b449c
    SHL EAX,0x2                         ; 004b449e
    ADD ESP,0x18                        ; 004b44a1
    SUB EDX,EAX                         ; 004b44a4
    MOV dword ptr [0x01cb80ec],ECX      ; 004b44a6 | DAT_01cb80ec
    CMP EDX,ECX                         ; 004b44ac
    JGE 0x004b44e0                      ; 004b44ae
        ;   XREF to: 004b44e0 (CONDITIONAL_JUMP)  ; LAB_004b44e0
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b44b0 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b44b6
    MOV ECX,0x3                         ; 004b44bd
    SUB EAX,EDX                         ; 004b44c2
    MOV EBX,dword ptr [0x006141b8]      ; 004b44c4 | DAT_006141b8
    ADD EAX,EAX                         ; 004b44ca
    MOV EDX,EBX                         ; 004b44cc
    MOV [0x01cb80ec],EAX                ; 004b44ce | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b44d3
    MOV EAX,EBX                         ; 004b44d6
    IDIV ECX                            ; 004b44d8
    ADD dword ptr [0x01cb80e8],EAX      ; 004b44da | DAT_01cb80e8
    PUSH 0x5d73f3                       ; 004b44e0 | = "Turn left"
        ;   Label: LAB_004b44e0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b44e5
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b44ea
    PUSH EAX                            ; 004b44ed
    MOV EDX,dword ptr [ESI + 0x44]      ; 004b44ee
    PUSH EDX                            ; 004b44f1
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b44f2
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b44f7
    PUSH EAX                            ; 004b44fa
    PUSH 0x5d7333                       ; 004b44fb | s_s_s_005d7332+1
    LEA EAX,[ESP + 0x150c]              ; 004b4500
    PUSH EAX                            ; 004b4507
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b4508
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b450d
    PUSH -0x1                           ; 004b4510
    PUSH 0x7                            ; 004b4512
    MOV EAX,[0x01cb80ec]                ; 004b4514 | DAT_01cb80ec
    PUSH EAX                            ; 004b4519
    MOV EDX,dword ptr [0x01cb80e8]      ; 004b451a | DAT_01cb80e8
    PUSH EDX                            ; 004b4520
    LEA EAX,[ESP + 0x1510]              ; 004b4521
    PUSH EAX                            ; 004b4528
    MOV ECX,dword ptr [0x01511cc0]      ; 004b4529 | DAT_01511cc0
    PUSH ECX                            ; 004b452f
    CALL engine_font.cpp_FUN_004a8df0   ; 004b4530
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b4535 | DAT_01cb80f0
    MOV EDI,dword ptr [0x01cb80ec]      ; 004b453a | DAT_01cb80ec
    MOV EDX,dword ptr [0x006141bc]      ; 004b4540 | DAT_006141bc
    ADD EDI,EAX                         ; 004b4546
    SHL EAX,0x2                         ; 004b4548
    ADD ESP,0x18                        ; 004b454b
    SUB EDX,EAX                         ; 004b454e
    MOV dword ptr [0x01cb80ec],EDI      ; 004b4550 | DAT_01cb80ec
    CMP EDX,EDI                         ; 004b4556
    JGE 0x004b458a                      ; 004b4558
        ;   XREF to: 004b458a (CONDITIONAL_JUMP)  ; LAB_004b458a
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b455a | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b4560
    MOV ECX,0x3                         ; 004b4567
    SUB EAX,EDX                         ; 004b456c
    MOV EBX,dword ptr [0x006141b8]      ; 004b456e | DAT_006141b8
    ADD EAX,EAX                         ; 004b4574
    MOV EDX,EBX                         ; 004b4576
    MOV [0x01cb80ec],EAX                ; 004b4578 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b457d
    MOV EAX,EBX                         ; 004b4580
    IDIV ECX                            ; 004b4582
    ADD dword ptr [0x01cb80e8],EAX      ; 004b4584 | DAT_01cb80e8
    PUSH 0x5d73fd                       ; 004b458a | = "Turn right"
        ;   Label: LAB_004b458a
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b458f
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b4594
    PUSH EAX                            ; 004b4597
    MOV EDX,dword ptr [ESI + 0x40]      ; 004b4598
    PUSH EDX                            ; 004b459b
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b459c
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b45a1
    PUSH EAX                            ; 004b45a4
    PUSH 0x5d7333                       ; 004b45a5 | s_s_s_005d7332+1
    LEA EAX,[ESP + 0x60c]               ; 004b45aa
    PUSH EAX                            ; 004b45b1
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b45b2
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b45b7
    PUSH -0x1                           ; 004b45ba
    PUSH 0x7                            ; 004b45bc
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b45be | DAT_01cb80ec
    PUSH ECX                            ; 004b45c4
    MOV EDI,dword ptr [0x01cb80e8]      ; 004b45c5 | DAT_01cb80e8
    PUSH EDI                            ; 004b45cb
    LEA EAX,[ESP + 0x610]               ; 004b45cc
    PUSH EAX                            ; 004b45d3
    MOV EBP,dword ptr [0x01511cc0]      ; 004b45d4 | DAT_01511cc0
    PUSH EBP                            ; 004b45da
    CALL engine_font.cpp_FUN_004a8df0   ; 004b45db
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b45e0 | DAT_01cb80f0
    ADD dword ptr [0x01cb80ec],EAX      ; 004b45e5 | DAT_01cb80ec
    SHL EAX,0x2                         ; 004b45eb
    MOV EDX,dword ptr [0x006141bc]      ; 004b45ee | DAT_006141bc
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b45f4 | DAT_01cb80ec
    SUB EDX,EAX                         ; 004b45fa
    ADD ESP,0x18                        ; 004b45fc
    CMP EDX,ECX                         ; 004b45ff
    JGE 0x004b4633                      ; 004b4601
        ;   XREF to: 004b4633 (CONDITIONAL_JUMP)  ; LAB_004b4633
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b4603 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b4609
    MOV ECX,0x3                         ; 004b4610
    SUB EAX,EDX                         ; 004b4615
    MOV EBX,dword ptr [0x006141b8]      ; 004b4617 | DAT_006141b8
    ADD EAX,EAX                         ; 004b461d
    MOV EDX,EBX                         ; 004b461f
    MOV [0x01cb80ec],EAX                ; 004b4621 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b4626
    MOV EAX,EBX                         ; 004b4629
    IDIV ECX                            ; 004b462b
    ADD dword ptr [0x01cb80e8],EAX      ; 004b462d | DAT_01cb80e8
    PUSH 0x5d7408                       ; 004b4633 | = "Fire / Action"
        ;   Label: LAB_004b4633
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b4638
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b463d
    PUSH EAX                            ; 004b4640
    MOV EDX,dword ptr [ESI + 0x48]      ; 004b4641
    PUSH EDX                            ; 004b4644
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b4645
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b464a
    PUSH EAX                            ; 004b464d
    PUSH 0x5d7333                       ; 004b464e | s_s_s_005d7332+1
    LEA EAX,[ESP + 0xd0c]               ; 004b4653
    PUSH EAX                            ; 004b465a
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b465b
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b4660
    PUSH -0x1                           ; 004b4663
    PUSH 0x7                            ; 004b4665
    MOV EBP,dword ptr [0x01cb80ec]      ; 004b4667 | DAT_01cb80ec
    PUSH EBP                            ; 004b466d
    MOV EAX,[0x01cb80e8]                ; 004b466e | DAT_01cb80e8
    PUSH EAX                            ; 004b4673
    LEA EAX,[ESP + 0xd10]               ; 004b4674
    PUSH EAX                            ; 004b467b
    MOV EDX,dword ptr [0x01511cc0]      ; 004b467c | DAT_01511cc0
    PUSH EDX                            ; 004b4682
    CALL engine_font.cpp_FUN_004a8df0   ; 004b4683
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b4688 | DAT_01cb80f0
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b468d | DAT_01cb80ec
    MOV EDX,dword ptr [0x006141bc]      ; 004b4693 | DAT_006141bc
    ADD ECX,EAX                         ; 004b4699
    SHL EAX,0x2                         ; 004b469b
    ADD ESP,0x18                        ; 004b469e
    SUB EDX,EAX                         ; 004b46a1
    MOV dword ptr [0x01cb80ec],ECX      ; 004b46a3 | DAT_01cb80ec
    CMP EDX,ECX                         ; 004b46a9
    JGE 0x004b46dd                      ; 004b46ab
        ;   XREF to: 004b46dd (CONDITIONAL_JUMP)  ; LAB_004b46dd
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b46ad | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b46b3
    MOV ECX,0x3                         ; 004b46ba
    SUB EAX,EDX                         ; 004b46bf
    MOV EBX,dword ptr [0x006141b8]      ; 004b46c1 | DAT_006141b8
    ADD EAX,EAX                         ; 004b46c7
    MOV EDX,EBX                         ; 004b46c9
    MOV [0x01cb80ec],EAX                ; 004b46cb | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b46d0
    MOV EAX,EBX                         ; 004b46d3
    IDIV ECX                            ; 004b46d5
    ADD dword ptr [0x01cb80e8],EAX      ; 004b46d7 | DAT_01cb80e8
    PUSH 0x5d7416                       ; 004b46dd | = "Use item"
        ;   Label: LAB_004b46dd
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b46e2
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b46e7
    PUSH EAX                            ; 004b46ea
    MOV EDX,dword ptr [ESI + 0x4c]      ; 004b46eb
    PUSH EDX                            ; 004b46ee
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b46ef
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b46f4
    PUSH EAX                            ; 004b46f7
    PUSH 0x5d7333                       ; 004b46f8 | s_s_s_005d7332+1
    LEA EAX,[ESP + 0x140c]              ; 004b46fd
    PUSH EAX                            ; 004b4704
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b4705
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b470a
    PUSH -0x1                           ; 004b470d
    PUSH 0x7                            ; 004b470f
    MOV EAX,[0x01cb80ec]                ; 004b4711 | DAT_01cb80ec
    PUSH EAX                            ; 004b4716
    MOV EDX,dword ptr [0x01cb80e8]      ; 004b4717 | DAT_01cb80e8
    PUSH EDX                            ; 004b471d
    LEA EAX,[ESP + 0x1410]              ; 004b471e
    PUSH EAX                            ; 004b4725
    MOV ECX,dword ptr [0x01511cc0]      ; 004b4726 | DAT_01511cc0
    PUSH ECX                            ; 004b472c
    CALL engine_font.cpp_FUN_004a8df0   ; 004b472d
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b4732 | DAT_01cb80f0
    MOV EDI,dword ptr [0x01cb80ec]      ; 004b4737 | DAT_01cb80ec
    MOV EDX,dword ptr [0x006141bc]      ; 004b473d | DAT_006141bc
    ADD EDI,EAX                         ; 004b4743
    SHL EAX,0x2                         ; 004b4745
    ADD ESP,0x18                        ; 004b4748
    SUB EDX,EAX                         ; 004b474b
    MOV dword ptr [0x01cb80ec],EDI      ; 004b474d | DAT_01cb80ec
    CMP EDX,EDI                         ; 004b4753
    JGE 0x004b4787                      ; 004b4755
        ;   XREF to: 004b4787 (CONDITIONAL_JUMP)  ; LAB_004b4787
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b4757 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b475d
    MOV ECX,0x3                         ; 004b4764
    SUB EAX,EDX                         ; 004b4769
    MOV EBX,dword ptr [0x006141b8]      ; 004b476b | DAT_006141b8
    ADD EAX,EAX                         ; 004b4771
    MOV EDX,EBX                         ; 004b4773
    MOV [0x01cb80ec],EAX                ; 004b4775 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b477a
    MOV EAX,EBX                         ; 004b477d
    IDIV ECX                            ; 004b477f
    ADD dword ptr [0x01cb80e8],EAX      ; 004b4781 | DAT_01cb80e8
    PUSH 0x5d741f                       ; 004b4787 | = "Lantern"
        ;   Label: LAB_004b4787
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b478c
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b4791
    PUSH EAX                            ; 004b4794
    MOV EDX,dword ptr [ESI + 0x50]      ; 004b4795
    PUSH EDX                            ; 004b4798
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b4799
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b479e
    PUSH EAX                            ; 004b47a1
    PUSH 0x5d7333                       ; 004b47a2 | s_s_s_005d7332+1
    LEA EAX,[ESP + 0xf0c]               ; 004b47a7
    PUSH EAX                            ; 004b47ae
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b47af
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b47b4
    PUSH -0x1                           ; 004b47b7
    PUSH 0x7                            ; 004b47b9
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b47bb | DAT_01cb80ec
    PUSH ECX                            ; 004b47c1
    MOV EDI,dword ptr [0x01cb80e8]      ; 004b47c2 | DAT_01cb80e8
    PUSH EDI                            ; 004b47c8
    LEA EAX,[ESP + 0xf10]               ; 004b47c9
    PUSH EAX                            ; 004b47d0
    MOV EBP,dword ptr [0x01511cc0]      ; 004b47d1 | DAT_01511cc0
    PUSH EBP                            ; 004b47d7
    CALL engine_font.cpp_FUN_004a8df0   ; 004b47d8
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b47dd | DAT_01cb80f0
    ADD dword ptr [0x01cb80ec],EAX      ; 004b47e2 | DAT_01cb80ec
    SHL EAX,0x2                         ; 004b47e8
    MOV EDX,dword ptr [0x006141bc]      ; 004b47eb | DAT_006141bc
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b47f1 | DAT_01cb80ec
    SUB EDX,EAX                         ; 004b47f7
    ADD ESP,0x18                        ; 004b47f9
    CMP EDX,ECX                         ; 004b47fc
    JGE 0x004b4830                      ; 004b47fe
        ;   XREF to: 004b4830 (CONDITIONAL_JUMP)  ; LAB_004b4830
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b4800 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b4806
    MOV ECX,0x3                         ; 004b480d
    SUB EAX,EDX                         ; 004b4812
    MOV EBX,dword ptr [0x006141b8]      ; 004b4814 | DAT_006141b8
    ADD EAX,EAX                         ; 004b481a
    MOV EDX,EBX                         ; 004b481c
    MOV [0x01cb80ec],EAX                ; 004b481e | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b4823
    MOV EAX,EBX                         ; 004b4826
    IDIV ECX                            ; 004b4828
    ADD dword ptr [0x01cb80e8],EAX      ; 004b482a | DAT_01cb80e8
    PUSH 0x5d7427                       ; 004b4830 | DAT_005d7427
        ;   Label: LAB_004b4830
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b4835
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b483a
    PUSH EAX                            ; 004b483d
    MOV EDX,dword ptr [ESI + 0x68]      ; 004b483e
    PUSH EDX                            ; 004b4841
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b4842
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b4847
    PUSH EAX                            ; 004b484a
    PUSH 0x5d7333                       ; 004b484b | s_s_s_005d7332+1
    LEA EAX,[ESP + 0x50c]               ; 004b4850
    PUSH EAX                            ; 004b4857
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b4858
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b485d
    PUSH -0x1                           ; 004b4860
    PUSH 0x7                            ; 004b4862
    MOV EBP,dword ptr [0x01cb80ec]      ; 004b4864 | DAT_01cb80ec
    PUSH EBP                            ; 004b486a
    MOV EAX,[0x01cb80e8]                ; 004b486b | DAT_01cb80e8
    PUSH EAX                            ; 004b4870
    LEA EAX,[ESP + 0x510]               ; 004b4871
    PUSH EAX                            ; 004b4878
    MOV EDX,dword ptr [0x01511cc0]      ; 004b4879 | DAT_01511cc0
    PUSH EDX                            ; 004b487f
    CALL engine_font.cpp_FUN_004a8df0   ; 004b4880
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b4885 | DAT_01cb80f0
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b488a | DAT_01cb80ec
    MOV EDX,dword ptr [0x006141bc]      ; 004b4890 | DAT_006141bc
    ADD ECX,EAX                         ; 004b4896
    SHL EAX,0x2                         ; 004b4898
    ADD ESP,0x18                        ; 004b489b
    SUB EDX,EAX                         ; 004b489e
    MOV dword ptr [0x01cb80ec],ECX      ; 004b48a0 | DAT_01cb80ec
    CMP EDX,ECX                         ; 004b48a6
    JGE 0x004b48da                      ; 004b48a8
        ;   XREF to: 004b48da (CONDITIONAL_JUMP)  ; LAB_004b48da
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b48aa | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b48b0
    MOV ECX,0x3                         ; 004b48b7
    SUB EAX,EDX                         ; 004b48bc
    MOV EBX,dword ptr [0x006141b8]      ; 004b48be | DAT_006141b8
    ADD EAX,EAX                         ; 004b48c4
    MOV EDX,EBX                         ; 004b48c6
    MOV [0x01cb80ec],EAX                ; 004b48c8 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b48cd
    MOV EAX,EBX                         ; 004b48d0
    IDIV ECX                            ; 004b48d2
    ADD dword ptr [0x01cb80e8],EAX      ; 004b48d4 | DAT_01cb80e8
    PUSH 0x5d742c                       ; 004b48da | = "Point up"
        ;   Label: LAB_004b48da
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b48df
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b48e4
    PUSH EAX                            ; 004b48e7
    MOV EDX,dword ptr [ESI + 0x74]      ; 004b48e8
    PUSH EDX                            ; 004b48eb
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b48ec
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b48f1
    PUSH EAX                            ; 004b48f4
    PUSH 0x5d7333                       ; 004b48f5 | s_s_s_005d7332+1
    LEA EAX,[ESP + 0xc0c]               ; 004b48fa
    PUSH EAX                            ; 004b4901
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b4902
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b4907
    PUSH -0x1                           ; 004b490a
    PUSH 0x7                            ; 004b490c
    MOV EAX,[0x01cb80ec]                ; 004b490e | DAT_01cb80ec
    PUSH EAX                            ; 004b4913
    MOV EDX,dword ptr [0x01cb80e8]      ; 004b4914 | DAT_01cb80e8
    PUSH EDX                            ; 004b491a
    LEA EAX,[ESP + 0xc10]               ; 004b491b
    PUSH EAX                            ; 004b4922
    MOV ECX,dword ptr [0x01511cc0]      ; 004b4923 | DAT_01511cc0
    PUSH ECX                            ; 004b4929
    CALL engine_font.cpp_FUN_004a8df0   ; 004b492a
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b492f | DAT_01cb80f0
    MOV EDI,dword ptr [0x01cb80ec]      ; 004b4934 | DAT_01cb80ec
    MOV EDX,dword ptr [0x006141bc]      ; 004b493a | DAT_006141bc
    ADD EDI,EAX                         ; 004b4940
    SHL EAX,0x2                         ; 004b4942
    ADD ESP,0x18                        ; 004b4945
    SUB EDX,EAX                         ; 004b4948
    MOV dword ptr [0x01cb80ec],EDI      ; 004b494a | DAT_01cb80ec
    CMP EDX,EDI                         ; 004b4950
    JGE 0x004b4984                      ; 004b4952
        ;   XREF to: 004b4984 (CONDITIONAL_JUMP)  ; LAB_004b4984
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b4954 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b495a
    MOV ECX,0x3                         ; 004b4961
    SUB EAX,EDX                         ; 004b4966
    MOV EBX,dword ptr [0x006141b8]      ; 004b4968 | DAT_006141b8
    ADD EAX,EAX                         ; 004b496e
    MOV EDX,EBX                         ; 004b4970
    MOV [0x01cb80ec],EAX                ; 004b4972 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b4977
    MOV EAX,EBX                         ; 004b497a
    IDIV ECX                            ; 004b497c
    ADD dword ptr [0x01cb80e8],EAX      ; 004b497e | DAT_01cb80e8
    PUSH 0x5d7435                       ; 004b4984 | = "Point down"
        ;   Label: LAB_004b4984
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b4989
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b498e
    PUSH EAX                            ; 004b4991
    MOV EDX,dword ptr [ESI + 0x78]      ; 004b4992
    PUSH EDX                            ; 004b4995
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b4996
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b499b
    PUSH EAX                            ; 004b499e
    PUSH 0x5d7333                       ; 004b499f | s_s_s_005d7332+1
    LEA EAX,[ESP + 0x40c]               ; 004b49a4
    PUSH EAX                            ; 004b49ab
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b49ac
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b49b1
    PUSH -0x1                           ; 004b49b4
    PUSH 0x7                            ; 004b49b6
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b49b8 | DAT_01cb80ec
    PUSH ECX                            ; 004b49be
    MOV EDI,dword ptr [0x01cb80e8]      ; 004b49bf | DAT_01cb80e8
    PUSH EDI                            ; 004b49c5
    LEA EAX,[ESP + 0x410]               ; 004b49c6
    PUSH EAX                            ; 004b49cd
    MOV EBP,dword ptr [0x01511cc0]      ; 004b49ce | DAT_01511cc0
    PUSH EBP                            ; 004b49d4
    CALL engine_font.cpp_FUN_004a8df0   ; 004b49d5
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b49da | DAT_01cb80f0
    ADD dword ptr [0x01cb80ec],EAX      ; 004b49df | DAT_01cb80ec
    SHL EAX,0x2                         ; 004b49e5
    MOV EDX,dword ptr [0x006141bc]      ; 004b49e8 | DAT_006141bc
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b49ee | DAT_01cb80ec
    SUB EDX,EAX                         ; 004b49f4
    ADD ESP,0x18                        ; 004b49f6
    CMP EDX,ECX                         ; 004b49f9
    JGE 0x004b4a2d                      ; 004b49fb
        ;   XREF to: 004b4a2d (CONDITIONAL_JUMP)  ; LAB_004b4a2d
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b49fd | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b4a03
    MOV ECX,0x3                         ; 004b4a0a
    SUB EAX,EDX                         ; 004b4a0f
    MOV EBX,dword ptr [0x006141b8]      ; 004b4a11 | DAT_006141b8
    ADD EAX,EAX                         ; 004b4a17
    MOV EDX,EBX                         ; 004b4a19
    MOV [0x01cb80ec],EAX                ; 004b4a1b | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b4a20
    MOV EAX,EBX                         ; 004b4a23
    IDIV ECX                            ; 004b4a25
    ADD dword ptr [0x01cb80e8],EAX      ; 004b4a27 | DAT_01cb80e8
    PUSH 0x5d7440                       ; 004b4a2d | = "Select Revolver"
        ;   Label: LAB_004b4a2d
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b4a32
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b4a37
    PUSH EAX                            ; 004b4a3a
    MOV EDX,dword ptr [ESI + 0x7c]      ; 004b4a3b
    PUSH EDX                            ; 004b4a3e
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b4a3f
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b4a44
    PUSH EAX                            ; 004b4a47
    PUSH 0x5d7333                       ; 004b4a48 | s_s_s_005d7332+1
    LEA EAX,[ESP + 0xb0c]               ; 004b4a4d
    PUSH EAX                            ; 004b4a54
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b4a55
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b4a5a
    PUSH -0x1                           ; 004b4a5d
    PUSH 0x7                            ; 004b4a5f
    MOV EBP,dword ptr [0x01cb80ec]      ; 004b4a61 | DAT_01cb80ec
    PUSH EBP                            ; 004b4a67
    MOV EAX,[0x01cb80e8]                ; 004b4a68 | DAT_01cb80e8
    PUSH EAX                            ; 004b4a6d
    LEA EAX,[ESP + 0xb10]               ; 004b4a6e
    PUSH EAX                            ; 004b4a75
    MOV EDX,dword ptr [0x01511cc0]      ; 004b4a76 | DAT_01511cc0
    PUSH EDX                            ; 004b4a7c
    CALL engine_font.cpp_FUN_004a8df0   ; 004b4a7d
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b4a82 | DAT_01cb80f0
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b4a87 | DAT_01cb80ec
    MOV EDX,dword ptr [0x006141bc]      ; 004b4a8d | DAT_006141bc
    ADD ECX,EAX                         ; 004b4a93
    SHL EAX,0x2                         ; 004b4a95
    ADD ESP,0x18                        ; 004b4a98
    SUB EDX,EAX                         ; 004b4a9b
    MOV dword ptr [0x01cb80ec],ECX      ; 004b4a9d | DAT_01cb80ec
    CMP EDX,ECX                         ; 004b4aa3
    JGE 0x004b4ad7                      ; 004b4aa5
        ;   XREF to: 004b4ad7 (CONDITIONAL_JUMP)  ; LAB_004b4ad7
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b4aa7 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b4aad
    MOV ECX,0x3                         ; 004b4ab4
    SUB EAX,EDX                         ; 004b4ab9
    MOV EBX,dword ptr [0x006141b8]      ; 004b4abb | DAT_006141b8
    ADD EAX,EAX                         ; 004b4ac1
    MOV EDX,EBX                         ; 004b4ac3
    MOV [0x01cb80ec],EAX                ; 004b4ac5 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b4aca
    MOV EAX,EBX                         ; 004b4acd
    IDIV ECX                            ; 004b4acf
    ADD dword ptr [0x01cb80e8],EAX      ; 004b4ad1 | DAT_01cb80e8
    PUSH 0x5d7450                       ; 004b4ad7 | = "Select Sword / Axe"
        ;   Label: LAB_004b4ad7
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b4adc
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b4ae1
    PUSH EAX                            ; 004b4ae4
    MOV EDX,dword ptr [ESI + 0x80]      ; 004b4ae5
    PUSH EDX                            ; 004b4aeb
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b4aec
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b4af1
    PUSH EAX                            ; 004b4af4
    PUSH 0x5d7333                       ; 004b4af5 | s_s_s_005d7332+1
    LEA EAX,[ESP + 0x120c]              ; 004b4afa
    PUSH EAX                            ; 004b4b01
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b4b02
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b4b07
    PUSH -0x1                           ; 004b4b0a
    PUSH 0x7                            ; 004b4b0c
    MOV EAX,[0x01cb80ec]                ; 004b4b0e | DAT_01cb80ec
    PUSH EAX                            ; 004b4b13
    MOV EDX,dword ptr [0x01cb80e8]      ; 004b4b14 | DAT_01cb80e8
    PUSH EDX                            ; 004b4b1a
    LEA EAX,[ESP + 0x1210]              ; 004b4b1b
    PUSH EAX                            ; 004b4b22
    MOV ECX,dword ptr [0x01511cc0]      ; 004b4b23 | DAT_01511cc0
    PUSH ECX                            ; 004b4b29
    CALL engine_font.cpp_FUN_004a8df0   ; 004b4b2a
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b4b2f | DAT_01cb80f0
    MOV EDI,dword ptr [0x01cb80ec]      ; 004b4b34 | DAT_01cb80ec
    MOV EDX,dword ptr [0x006141bc]      ; 004b4b3a | DAT_006141bc
    ADD EDI,EAX                         ; 004b4b40
    SHL EAX,0x2                         ; 004b4b42
    ADD ESP,0x18                        ; 004b4b45
    SUB EDX,EAX                         ; 004b4b48
    MOV dword ptr [0x01cb80ec],EDI      ; 004b4b4a | DAT_01cb80ec
    CMP EDX,EDI                         ; 004b4b50
    JGE 0x004b4b84                      ; 004b4b52
        ;   XREF to: 004b4b84 (CONDITIONAL_JUMP)  ; LAB_004b4b84
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b4b54 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b4b5a
    MOV ECX,0x3                         ; 004b4b61
    SUB EAX,EDX                         ; 004b4b66
    MOV EBX,dword ptr [0x006141b8]      ; 004b4b68 | DAT_006141b8
    ADD EAX,EAX                         ; 004b4b6e
    MOV EDX,EBX                         ; 004b4b70
    MOV [0x01cb80ec],EAX                ; 004b4b72 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b4b77
    MOV EAX,EBX                         ; 004b4b7a
    IDIV ECX                            ; 004b4b7c
    ADD dword ptr [0x01cb80e8],EAX      ; 004b4b7e | DAT_01cb80e8
    PUSH 0x5d7463                       ; 004b4b84 | = "Select Cross"
        ;   Label: LAB_004b4b84
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b4b89
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b4b8e
    PUSH EAX                            ; 004b4b91
    MOV EDX,dword ptr [ESI + 0x84]      ; 004b4b92
    PUSH EDX                            ; 004b4b98
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b4b99
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b4b9e
    PUSH EAX                            ; 004b4ba1
    PUSH 0x5d7333                       ; 004b4ba2 | s_s_s_005d7332+1
    LEA EAX,[ESP + 0x160c]              ; 004b4ba7
    PUSH EAX                            ; 004b4bae
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b4baf
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b4bb4
    PUSH -0x1                           ; 004b4bb7
    PUSH 0x7                            ; 004b4bb9
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b4bbb | DAT_01cb80ec
    PUSH ECX                            ; 004b4bc1
    MOV EDI,dword ptr [0x01cb80e8]      ; 004b4bc2 | DAT_01cb80e8
    PUSH EDI                            ; 004b4bc8
    LEA EAX,[ESP + 0x1610]              ; 004b4bc9
    PUSH EAX                            ; 004b4bd0
    MOV EBP,dword ptr [0x01511cc0]      ; 004b4bd1 | DAT_01511cc0
    PUSH EBP                            ; 004b4bd7
    CALL engine_font.cpp_FUN_004a8df0   ; 004b4bd8
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b4bdd | DAT_01cb80f0
    ADD dword ptr [0x01cb80ec],EAX      ; 004b4be2 | DAT_01cb80ec
    SHL EAX,0x2                         ; 004b4be8
    MOV EDX,dword ptr [0x006141bc]      ; 004b4beb | DAT_006141bc
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b4bf1 | DAT_01cb80ec
    SUB EDX,EAX                         ; 004b4bf7
    ADD ESP,0x18                        ; 004b4bf9
    CMP EDX,ECX                         ; 004b4bfc
    JGE 0x004b4c30                      ; 004b4bfe
        ;   XREF to: 004b4c30 (CONDITIONAL_JUMP)  ; LAB_004b4c30
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b4c00 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b4c06
    MOV ECX,0x3                         ; 004b4c0d
    SUB EAX,EDX                         ; 004b4c12
    MOV EBX,dword ptr [0x006141b8]      ; 004b4c14 | DAT_006141b8
    ADD EAX,EAX                         ; 004b4c1a
    MOV EDX,EBX                         ; 004b4c1c
    MOV [0x01cb80ec],EAX                ; 004b4c1e | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b4c23
    MOV EAX,EBX                         ; 004b4c26
    IDIV ECX                            ; 004b4c28
    ADD dword ptr [0x01cb80e8],EAX      ; 004b4c2a | DAT_01cb80e8
    PUSH 0x5d7470                       ; 004b4c30 | = "Next weapon"
        ;   Label: LAB_004b4c30
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b4c35
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b4c3a
    PUSH EAX                            ; 004b4c3d
    MOV EDX,dword ptr [ESI + 0x90]      ; 004b4c3e
    PUSH EDX                            ; 004b4c44
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b4c45
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b4c4a
    PUSH EAX                            ; 004b4c4d
    PUSH 0x5d7333                       ; 004b4c4e | s_s_s_005d7332+1
    LEA EAX,[ESP + 0x110c]              ; 004b4c53
    PUSH EAX                            ; 004b4c5a
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b4c5b
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b4c60
    PUSH -0x1                           ; 004b4c63
    PUSH 0x7                            ; 004b4c65
    MOV EBP,dword ptr [0x01cb80ec]      ; 004b4c67 | DAT_01cb80ec
    PUSH EBP                            ; 004b4c6d
    MOV EAX,[0x01cb80e8]                ; 004b4c6e | DAT_01cb80e8
    PUSH EAX                            ; 004b4c73
    LEA EAX,[ESP + 0x1110]              ; 004b4c74
    PUSH EAX                            ; 004b4c7b
    MOV EDX,dword ptr [0x01511cc0]      ; 004b4c7c | DAT_01511cc0
    PUSH EDX                            ; 004b4c82
    CALL engine_font.cpp_FUN_004a8df0   ; 004b4c83
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b4c88 | DAT_01cb80f0
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b4c8d | DAT_01cb80ec
    MOV EDX,dword ptr [0x006141bc]      ; 004b4c93 | DAT_006141bc
    ADD ECX,EAX                         ; 004b4c99
    SHL EAX,0x2                         ; 004b4c9b
    ADD ESP,0x18                        ; 004b4c9e
    SUB EDX,EAX                         ; 004b4ca1
    MOV dword ptr [0x01cb80ec],ECX      ; 004b4ca3 | DAT_01cb80ec
    CMP EDX,ECX                         ; 004b4ca9
    JGE 0x004b4cdd                      ; 004b4cab
        ;   XREF to: 004b4cdd (CONDITIONAL_JUMP)  ; LAB_004b4cdd
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b4cad | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b4cb3
    MOV ECX,0x3                         ; 004b4cba
    SUB EAX,EDX                         ; 004b4cbf
    MOV EBX,dword ptr [0x006141b8]      ; 004b4cc1 | DAT_006141b8
    ADD EAX,EAX                         ; 004b4cc7
    MOV EDX,EBX                         ; 004b4cc9
    MOV [0x01cb80ec],EAX                ; 004b4ccb | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b4cd0
    MOV EAX,EBX                         ; 004b4cd3
    IDIV ECX                            ; 004b4cd5
    ADD dword ptr [0x01cb80e8],EAX      ; 004b4cd7 | DAT_01cb80e8
    PUSH 0x5d747c                       ; 004b4cdd | = "Previous weapon"
        ;   Label: LAB_004b4cdd
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b4ce2
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b4ce7
    PUSH EAX                            ; 004b4cea
    MOV EDX,dword ptr [ESI + 0x94]      ; 004b4ceb
    PUSH EDX                            ; 004b4cf1
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b4cf2
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b4cf7
    PUSH EAX                            ; 004b4cfa
    PUSH 0x5d7333                       ; 004b4cfb | s_s_s_005d7332+1
    LEA EAX,[ESP + 0x180c]              ; 004b4d00
    PUSH EAX                            ; 004b4d07
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b4d08
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b4d0d
    PUSH -0x1                           ; 004b4d10
    PUSH 0x7                            ; 004b4d12
    MOV EAX,[0x01cb80ec]                ; 004b4d14 | DAT_01cb80ec
    PUSH EAX                            ; 004b4d19
    MOV EDX,dword ptr [0x01cb80e8]      ; 004b4d1a | DAT_01cb80e8
    PUSH EDX                            ; 004b4d20
    LEA EAX,[ESP + 0x1810]              ; 004b4d21
    PUSH EAX                            ; 004b4d28
    MOV ECX,dword ptr [0x01511cc0]      ; 004b4d29 | DAT_01511cc0
    PUSH ECX                            ; 004b4d2f
    CALL engine_font.cpp_FUN_004a8df0   ; 004b4d30
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b4d35 | DAT_01cb80f0
    MOV EDI,dword ptr [0x01cb80ec]      ; 004b4d3a | DAT_01cb80ec
    MOV EDX,dword ptr [0x006141bc]      ; 004b4d40 | DAT_006141bc
    ADD EDI,EAX                         ; 004b4d46
    SHL EAX,0x2                         ; 004b4d48
    ADD ESP,0x18                        ; 004b4d4b
    SUB EDX,EAX                         ; 004b4d4e
    MOV dword ptr [0x01cb80ec],EDI      ; 004b4d50 | DAT_01cb80ec
    CMP EDX,EDI                         ; 004b4d56
    JGE 0x004b4d8a                      ; 004b4d58
        ;   XREF to: 004b4d8a (CONDITIONAL_JUMP)  ; LAB_004b4d8a
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b4d5a | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b4d60
    MOV ECX,0x3                         ; 004b4d67
    SUB EAX,EDX                         ; 004b4d6c
    MOV EBX,dword ptr [0x006141b8]      ; 004b4d6e | DAT_006141b8
    ADD EAX,EAX                         ; 004b4d74
    MOV EDX,EBX                         ; 004b4d76
    MOV [0x01cb80ec],EAX                ; 004b4d78 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b4d7d
    MOV EAX,EBX                         ; 004b4d80
    IDIV ECX                            ; 004b4d82
    ADD dword ptr [0x01cb80e8],EAX      ; 004b4d84 | DAT_01cb80e8
    PUSH 0x5d748c                       ; 004b4d8a | = "Next item"
        ;   Label: LAB_004b4d8a
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b4d8f
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b4d94
    PUSH EAX                            ; 004b4d97
    MOV EDX,dword ptr [ESI + 0x98]      ; 004b4d98
    PUSH EDX                            ; 004b4d9e
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b4d9f
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b4da4
    PUSH EAX                            ; 004b4da7
    PUSH 0x5d7333                       ; 004b4da8 | s_s_s_005d7332+1
    LEA EAX,[ESP + 0x30c]               ; 004b4dad
    PUSH EAX                            ; 004b4db4
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b4db5
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b4dba
    PUSH -0x1                           ; 004b4dbd
    PUSH 0x7                            ; 004b4dbf
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b4dc1 | DAT_01cb80ec
    PUSH ECX                            ; 004b4dc7
    MOV EDI,dword ptr [0x01cb80e8]      ; 004b4dc8 | DAT_01cb80e8
    PUSH EDI                            ; 004b4dce
    LEA EAX,[ESP + 0x310]               ; 004b4dcf
    PUSH EAX                            ; 004b4dd6
    MOV EBP,dword ptr [0x01511cc0]      ; 004b4dd7 | DAT_01511cc0
    PUSH EBP                            ; 004b4ddd
    CALL engine_font.cpp_FUN_004a8df0   ; 004b4dde
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b4de3 | DAT_01cb80f0
    ADD dword ptr [0x01cb80ec],EAX      ; 004b4de8 | DAT_01cb80ec
    SHL EAX,0x2                         ; 004b4dee
    MOV EDX,dword ptr [0x006141bc]      ; 004b4df1 | DAT_006141bc
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b4df7 | DAT_01cb80ec
    SUB EDX,EAX                         ; 004b4dfd
    ADD ESP,0x18                        ; 004b4dff
    CMP EDX,ECX                         ; 004b4e02
    JGE 0x004b4e36                      ; 004b4e04
        ;   XREF to: 004b4e36 (CONDITIONAL_JUMP)  ; LAB_004b4e36
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b4e06 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b4e0c
    MOV ECX,0x3                         ; 004b4e13
    SUB EAX,EDX                         ; 004b4e18
    MOV EBX,dword ptr [0x006141b8]      ; 004b4e1a | DAT_006141b8
    ADD EAX,EAX                         ; 004b4e20
    MOV EDX,EBX                         ; 004b4e22
    MOV [0x01cb80ec],EAX                ; 004b4e24 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b4e29
    MOV EAX,EBX                         ; 004b4e2c
    IDIV ECX                            ; 004b4e2e
    ADD dword ptr [0x01cb80e8],EAX      ; 004b4e30 | DAT_01cb80e8
    PUSH 0x5d7496                       ; 004b4e36 | = "Previous item"
        ;   Label: LAB_004b4e36
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b4e3b
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b4e40
    PUSH EAX                            ; 004b4e43
    MOV EDX,dword ptr [ESI + 0x9c]      ; 004b4e44
    PUSH EDX                            ; 004b4e4a
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b4e4b
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b4e50
    PUSH EAX                            ; 004b4e53
    PUSH 0x5d7333                       ; 004b4e54 | s_s_s_005d7332+1
    LEA EAX,[ESP + 0xa0c]               ; 004b4e59
    PUSH EAX                            ; 004b4e60
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b4e61
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b4e66
    PUSH -0x1                           ; 004b4e69
    PUSH 0x7                            ; 004b4e6b
    MOV EBP,dword ptr [0x01cb80ec]      ; 004b4e6d | DAT_01cb80ec
    PUSH EBP                            ; 004b4e73
    MOV EAX,[0x01cb80e8]                ; 004b4e74 | DAT_01cb80e8
    PUSH EAX                            ; 004b4e79
    LEA EAX,[ESP + 0xa10]               ; 004b4e7a
    PUSH EAX                            ; 004b4e81
    MOV EDX,dword ptr [0x01511cc0]      ; 004b4e82 | DAT_01511cc0
    PUSH EDX                            ; 004b4e88
    CALL engine_font.cpp_FUN_004a8df0   ; 004b4e89
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b4e8e | DAT_01cb80f0
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b4e93 | DAT_01cb80ec
    MOV EDX,dword ptr [0x006141bc]      ; 004b4e99 | DAT_006141bc
    ADD ECX,EAX                         ; 004b4e9f
    SHL EAX,0x2                         ; 004b4ea1
    ADD ESP,0x18                        ; 004b4ea4
    SUB EDX,EAX                         ; 004b4ea7
    MOV dword ptr [0x01cb80ec],ECX      ; 004b4ea9 | DAT_01cb80ec
    CMP EDX,ECX                         ; 004b4eaf
    JGE 0x004b4ee3                      ; 004b4eb1
        ;   XREF to: 004b4ee3 (CONDITIONAL_JUMP)  ; LAB_004b4ee3
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b4eb3 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b4eb9
    MOV ECX,0x3                         ; 004b4ec0
    SUB EAX,EDX                         ; 004b4ec5
    MOV EBX,dword ptr [0x006141b8]      ; 004b4ec7 | DAT_006141b8
    ADD EAX,EAX                         ; 004b4ecd
    MOV EDX,EBX                         ; 004b4ecf
    MOV [0x01cb80ec],EAX                ; 004b4ed1 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b4ed6
    MOV EAX,EBX                         ; 004b4ed9
    IDIV ECX                            ; 004b4edb
    ADD dword ptr [0x01cb80e8],EAX      ; 004b4edd | DAT_01cb80e8
    PUSH 0x5d74a4                       ; 004b4ee3 | = "Item description"
        ;   Label: LAB_004b4ee3
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b4ee8
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b4eed
    PUSH EAX                            ; 004b4ef0
    MOV EDX,dword ptr [ESI + 0xa0]      ; 004b4ef1
    PUSH EDX                            ; 004b4ef7
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b4ef8
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b4efd
    PUSH EAX                            ; 004b4f00
    PUSH 0x5d7333                       ; 004b4f01 | s_s_s_005d7332+1
    LEA EAX,[ESP + 0x20c]               ; 004b4f06
    PUSH EAX                            ; 004b4f0d
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b4f0e
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b4f13
    PUSH -0x1                           ; 004b4f16
    PUSH 0x7                            ; 004b4f18
    MOV EAX,[0x01cb80ec]                ; 004b4f1a | DAT_01cb80ec
    PUSH EAX                            ; 004b4f1f
    MOV EDX,dword ptr [0x01cb80e8]      ; 004b4f20 | DAT_01cb80e8
    PUSH EDX                            ; 004b4f26
    LEA EAX,[ESP + 0x210]               ; 004b4f27
    PUSH EAX                            ; 004b4f2e
    MOV ECX,dword ptr [0x01511cc0]      ; 004b4f2f | DAT_01511cc0
    PUSH ECX                            ; 004b4f35
    CALL engine_font.cpp_FUN_004a8df0   ; 004b4f36
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b4f3b | DAT_01cb80f0
    MOV EDI,dword ptr [0x01cb80ec]      ; 004b4f40 | DAT_01cb80ec
    MOV EDX,dword ptr [0x006141bc]      ; 004b4f46 | DAT_006141bc
    ADD EDI,EAX                         ; 004b4f4c
    SHL EAX,0x2                         ; 004b4f4e
    ADD ESP,0x18                        ; 004b4f51
    SUB EDX,EAX                         ; 004b4f54
    MOV dword ptr [0x01cb80ec],EDI      ; 004b4f56 | DAT_01cb80ec
    CMP EDX,EDI                         ; 004b4f5c
    JGE 0x004b4f90                      ; 004b4f5e
        ;   XREF to: 004b4f90 (CONDITIONAL_JUMP)  ; LAB_004b4f90
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b4f60 | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b4f66
    MOV ECX,0x3                         ; 004b4f6d
    SUB EAX,EDX                         ; 004b4f72
    MOV EBX,dword ptr [0x006141b8]      ; 004b4f74 | DAT_006141b8
    ADD EAX,EAX                         ; 004b4f7a
    MOV EDX,EBX                         ; 004b4f7c
    MOV [0x01cb80ec],EAX                ; 004b4f7e | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b4f83
    MOV EAX,EBX                         ; 004b4f86
    IDIV ECX                            ; 004b4f88
    ADD dword ptr [0x01cb80e8],EAX      ; 004b4f8a | DAT_01cb80e8
    PUSH 0x5d74b5                       ; 004b4f90 | = "Next ammo"
        ;   Label: LAB_004b4f90
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b4f95
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b4f9a
    PUSH EAX                            ; 004b4f9d
    MOV EDX,dword ptr [ESI + 0xa4]      ; 004b4f9e
    PUSH EDX                            ; 004b4fa4
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b4fa5
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b4faa
    PUSH EAX                            ; 004b4fad
    PUSH 0x5d7333                       ; 004b4fae | s_s_s_005d7332+1
    LEA EAX,[ESP + 0x90c]               ; 004b4fb3
    PUSH EAX                            ; 004b4fba
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b4fbb
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b4fc0
    PUSH -0x1                           ; 004b4fc3
    PUSH 0x7                            ; 004b4fc5
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b4fc7 | DAT_01cb80ec
    PUSH ECX                            ; 004b4fcd
    MOV EDI,dword ptr [0x01cb80e8]      ; 004b4fce | DAT_01cb80e8
    PUSH EDI                            ; 004b4fd4
    LEA EAX,[ESP + 0x910]               ; 004b4fd5
    PUSH EAX                            ; 004b4fdc
    MOV EBP,dword ptr [0x01511cc0]      ; 004b4fdd | DAT_01511cc0
    PUSH EBP                            ; 004b4fe3
    CALL engine_font.cpp_FUN_004a8df0   ; 004b4fe4
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b4fe9 | DAT_01cb80f0
    ADD dword ptr [0x01cb80ec],EAX      ; 004b4fee | DAT_01cb80ec
    SHL EAX,0x2                         ; 004b4ff4
    MOV EDX,dword ptr [0x006141bc]      ; 004b4ff7 | DAT_006141bc
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b4ffd | DAT_01cb80ec
    SUB EDX,EAX                         ; 004b5003
    ADD ESP,0x18                        ; 004b5005
    CMP EDX,ECX                         ; 004b5008
    JGE 0x004b503c                      ; 004b500a
        ;   XREF to: 004b503c (CONDITIONAL_JUMP)  ; LAB_004b503c
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b500c | DAT_01cb80f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b5012
    MOV ECX,0x3                         ; 004b5019
    SUB EAX,EDX                         ; 004b501e
    MOV EBX,dword ptr [0x006141b8]      ; 004b5020 | DAT_006141b8
    ADD EAX,EAX                         ; 004b5026
    MOV EDX,EBX                         ; 004b5028
    MOV [0x01cb80ec],EAX                ; 004b502a | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b502f
    MOV EAX,EBX                         ; 004b5032
    IDIV ECX                            ; 004b5034
    ADD dword ptr [0x01cb80e8],EAX      ; 004b5036 | DAT_01cb80e8
    PUSH 0x5d74bf                       ; 004b503c | = "Drop Item or Weapon"
        ;   Label: LAB_004b503c
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b5041
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b5046
    PUSH EAX                            ; 004b5049
    MOV EDX,dword ptr [ESI + 0xaf0]     ; 004b504a
    PUSH EDX                            ; 004b5050
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b5051
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b5056
    PUSH EAX                            ; 004b5059
    PUSH 0x5d7333                       ; 004b505a | s_s_s_005d7332+1
    LEA EAX,[ESP + 0x100c]              ; 004b505f
    PUSH EAX                            ; 004b5066
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b5067
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b506c
    PUSH -0x1                           ; 004b506f
    PUSH 0x7                            ; 004b5071
    MOV EBP,dword ptr [0x01cb80ec]      ; 004b5073 | DAT_01cb80ec
    PUSH EBP                            ; 004b5079
    MOV EAX,[0x01cb80e8]                ; 004b507a | DAT_01cb80e8
    PUSH EAX                            ; 004b507f
    LEA EAX,[ESP + 0x1010]              ; 004b5080
    PUSH EAX                            ; 004b5087
    MOV EDX,dword ptr [0x01511cc0]      ; 004b5088 | DAT_01511cc0
    PUSH EDX                            ; 004b508e
    CALL engine_font.cpp_FUN_004a8df0   ; 004b508f
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b5094 | DAT_01cb80f0
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b5099 | DAT_01cb80ec
    MOV EDX,dword ptr [0x006141bc]      ; 004b509f | DAT_006141bc
    ADD ECX,EAX                         ; 004b50a5
    SHL EAX,0x2                         ; 004b50a7
    ADD ESP,0x18                        ; 004b50aa
    SUB EDX,EAX                         ; 004b50ad
    MOV dword ptr [0x01cb80ec],ECX      ; 004b50af | DAT_01cb80ec
    CMP EDX,ECX                         ; 004b50b5
    JL 0x004b5148                       ; 004b50b7
        ;   XREF to: 004b5148 (CONDITIONAL_JUMP)  ; LAB_004b5148
    MOV EBX,dword ptr [0x006141b8]      ; 004b50bd | DAT_006141b8
    ADD ESP,0x1900                      ; 004b50c3
    POP EBP                             ; 004b50c9
    POP EDI                             ; 004b50ca
    POP ESI                             ; 004b50cb
    POP EBX                             ; 004b50cc
    RET                                 ; 004b50cd
    PUSH 0x5d73cc                       ; 004b50ce | DAT_005d73cc
        ;   Label: LAB_004b50ce
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004b50d3
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004b50d8
    PUSH EAX                            ; 004b50db
    MOV EDX,dword ptr [ESI + 0x30]      ; 004b50dc
    PUSH EDX                            ; 004b50df
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004b50e0
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004b50e5
    PUSH EAX                            ; 004b50e8
    PUSH 0x5d7333                       ; 004b50e9 | s_s_s_005d7332+1
    LEA EAX,[ESP + 0x10c]               ; 004b50ee
    PUSH EAX                            ; 004b50f5
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004b50f6
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b50fb
    PUSH -0x1                           ; 004b50fe
    PUSH 0x7                            ; 004b5100
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b5102 | DAT_01cb80ec
    PUSH ECX                            ; 004b5108
    MOV EDI,dword ptr [0x01cb80e8]      ; 004b5109 | DAT_01cb80e8
    PUSH EDI                            ; 004b510f
    LEA EAX,[ESP + 0x110]               ; 004b5110
    PUSH EAX                            ; 004b5117
    MOV EBP,dword ptr [0x01511cc0]      ; 004b5118 | DAT_01511cc0
    PUSH EBP                            ; 004b511e
    CALL engine_font.cpp_FUN_004a8df0   ; 004b511f
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    MOV EAX,[0x01cb80f0]                ; 004b5124 | DAT_01cb80f0
    ADD dword ptr [0x01cb80ec],EAX      ; 004b5129 | DAT_01cb80ec
    SHL EAX,0x2                         ; 004b512f
    MOV EDX,dword ptr [0x006141bc]      ; 004b5132 | DAT_006141bc
    MOV ECX,dword ptr [0x01cb80ec]      ; 004b5138 | DAT_01cb80ec
    SUB EDX,EAX                         ; 004b513e
    ADD ESP,0x18                        ; 004b5140
    JMP 0x004b42b5                      ; 004b5143
        ;   XREF to: 004b42b5 (UNCONDITIONAL_JUMP)  ; LAB_004b42b5
    MOV EDX,dword ptr [0x01cb80f0]      ; 004b5148 | DAT_01cb80f0
        ;   Label: LAB_004b5148
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b514e
    MOV ECX,0x3                         ; 004b5155
    SUB EAX,EDX                         ; 004b515a
    MOV EBX,dword ptr [0x006141b8]      ; 004b515c | DAT_006141b8
    ADD EAX,EAX                         ; 004b5162
    MOV EDX,EBX                         ; 004b5164
    MOV [0x01cb80ec],EAX                ; 004b5166 | DAT_01cb80ec
    SAR EDX,0x1f                        ; 004b516b
    MOV EAX,EBX                         ; 004b516e
    IDIV ECX                            ; 004b5170
    ADD dword ptr [0x01cb80e8],EAX      ; 004b5172 | DAT_01cb80e8
    MOV EBX,dword ptr [0x006141b8]      ; 004b5178 | DAT_006141b8
    ADD ESP,0x1900                      ; 004b517e
    POP EBP                             ; 004b5184
    POP EDI                             ; 004b5185
    POP ESI                             ; 004b5186
    POP EBX                             ; 004b5187
    RET                                 ; 004b5188

