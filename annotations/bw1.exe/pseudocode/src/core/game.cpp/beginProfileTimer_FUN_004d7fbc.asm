; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_beginProfileTimer_FUN_004d7fbc(void)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_01cd0c90
;
; Called Functions:
;   wincore_winrun.cpp_getTime_FUN_005b2420
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 004d7fbc
        ;   Label: core_game.cpp_beginProfileTimer_FUN_004d7fbc
    MOV EAX,[0x0061d95c]                ; 004d7fc0 | g_CGamePtr
    CMP dword ptr [EAX + 0x228],0x1     ; 004d7fc5
    JZ 0x004d7fcf                       ; 004d7fcc
        ;   XREF to: 004d7fcf (CONDITIONAL_JUMP)  ; LAB_004d7fcf
    RET                                 ; 004d7fce
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004d7fcf
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
        ;   Label: LAB_004d7fcf
    MOV [0x01cd0c90],EAX                ; 004d7fd4 | DAT_01cd0c90
    RET                                 ; 004d7fd9

