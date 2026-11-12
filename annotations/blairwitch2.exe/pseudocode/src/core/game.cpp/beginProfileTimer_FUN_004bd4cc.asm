; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_beginProfileTimer_FUN_004bd4cc(void)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_01cb8118
;
; Called Functions:
;   wincore_winrun.cpp_getTime_FUN_0058e9e0
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 004bd4cc
        ;   Label: core_game.cpp_beginProfileTimer_FUN_004bd4cc
    MOV EAX,[0x00616494]                ; 004bd4d0 | g_CGamePtr
    CMP dword ptr [EAX + 0x228],0x1     ; 004bd4d5
    JZ 0x004bd4df                       ; 004bd4dc
        ;   XREF to: 004bd4df (CONDITIONAL_JUMP)  ; LAB_004bd4df
    RET                                 ; 004bd4de
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 004bd4df
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_0058e9e0()
        ;   Label: LAB_004bd4df
    MOV [0x01cb8118],EAX                ; 004bd4e4 | DAT_01cb8118
    RET                                 ; 004bd4e9

