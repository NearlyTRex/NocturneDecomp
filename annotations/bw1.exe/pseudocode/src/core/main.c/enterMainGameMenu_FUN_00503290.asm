; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_main_c_enterMainGameMenu_FUN_00503290(void)
;
;
; XREF[1]:
;   wincore_winrun.cpp_winMain_FUN_005b2e00 at 005b3052
;
; Called Functions:
;   core_menu.cpp_showMainGameMenu_FUN_0050cc90
;
; *****************************************************************************

section .text

    CALL core_menu.cpp_showMainGameMenu_FUN_0050cc90 ; 00503290
        ;   XREF to: 0050cc90 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_showMainGameMenu_FUN_0050cc90()
        ;   Label: core_main.c_enterMainGameMenu_FUN_00503290
    RET                                 ; 00503295

