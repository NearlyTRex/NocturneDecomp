; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)
;
;
; XREF[6]:
;   FUN_0049cc10 at 0049d537
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 at 0045d8f4
;   core_game.cpp_CGame_displayActStats_FUN_004a6680 at 004a69b7
;   core_game.cpp_CGame_finishAct_FUN_004a6a10 at 004a6aaa
;   core_game.cpp_CGame_rollCredits_FUN_004a6e90 at 004a7092
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_00490e80 at 00490eda
;
; Called Functions:
;   engine_font.cpp_CBitFont_drawTextWrapper_FUN_00490af0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490de0
        ;   Label: engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0
    PUSH ESI                            ; 00490de1
    PUSH EDI                            ; 00490de2
    MOV EAX,dword ptr [ESP + 0x28]      ; 00490de3
    PUSH EAX                            ; 00490de7
    MOV EDX,dword ptr [ESP + 0x28]      ; 00490de8
    PUSH EDX                            ; 00490dec
    MOV ECX,dword ptr [ESP + 0x28]      ; 00490ded
    PUSH ECX                            ; 00490df1
    MOV EBX,dword ptr [ESP + 0x28]      ; 00490df2
    PUSH EBX                            ; 00490df6
    MOV ESI,dword ptr [ESP + 0x28]      ; 00490df7
    PUSH EAX                            ; 00490dfb
    MOV EDI,dword ptr [ESP + 0x24]      ; 00490dfc
    MOV EBX,dword ptr [ESP + 0x28]      ; 00490e00
    PUSH EDI                            ; 00490e04
    ADD EBX,ESI                         ; 00490e05
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 00490e07
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    LEA EDX,[EBX + 0x1]                 ; 00490e0c
    SUB EDX,EAX                         ; 00490e0f
    MOV EAX,EDX                         ; 00490e11
    SAR EDX,0x1f                        ; 00490e13
    SUB EAX,EDX                         ; 00490e16
    SAR EAX,0x1                         ; 00490e18
    ADD ESP,0x8                         ; 00490e1a
    PUSH EAX                            ; 00490e1d
    PUSH EDI                            ; 00490e1e
    CALL engine_font.cpp_CBitFont_drawTextWrapper_FUN_00490af0 ; 00490e1f
        ;   XREF to: 00490af0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawTextWrapper_FUN_00490af0()
    ADD ESP,0x18                        ; 00490e24
    POP EDI                             ; 00490e27
    POP ESI                             ; 00490e28
    POP EBX                             ; 00490e29
    RET                                 ; 00490e2a

