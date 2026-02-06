; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_game_cpp_beginProfileTimer_FUN_004e30f0(void)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 DAT_02d81ca8
;   int g_ProfileStartTime
;
; Called Functions:
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    MOV EAX,[0x0067b654]                ; 004e30f0 | g_CGamePtr | g_CGameInstance
        ;   Label: core_game.cpp_beginProfileTimer_FUN_004e30f0
    CMP dword ptr [EAX + 0x20c],0x1     ; 004e30f5 | DAT_02d81ca8
    JZ 0x004e30ff                       ; 004e30fc
        ;   XREF to: 004e30ff (CONDITIONAL_JUMP)  ; LAB_004e30ff
    RET                                 ; 004e30fe
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004e30ff
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_004e30ff
    MOV [0x02d831fc],EAX                ; 004e3104 | g_ProfileStartTime
    RET                                 ; 004e3109

