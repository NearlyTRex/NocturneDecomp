; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_beginProfileTimer_FUN_004bf40c(void)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_01d22c98
;
; Called Functions:
;   wincore_winrun.cpp_getTime_FUN_005806a0
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 004bf40c
        ;   Label: core_game.cpp_beginProfileTimer_FUN_004bf40c
    MOV EAX,[0x005fe9dc]                ; 004bf410 | g_CGamePtr
    CMP dword ptr [EAX + 0x230],0x1     ; 004bf415
    JZ 0x004bf41f                       ; 004bf41c
        ;   XREF to: 004bf41f (CONDITIONAL_JUMP)  ; LAB_004bf41f
    RET                                 ; 004bf41e
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004bf41f
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
        ;   Label: LAB_004bf41f
    MOV [0x01d22c98],EAX                ; 004bf424 | DAT_01d22c98
    RET                                 ; 004bf429

