; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_main_c_FUN_004e44d0(void)
;
;
; XREF[1]:
;   wincore_winrun.cpp_winMain_FUN_00581080 at 005812d2
;
; Called Functions:
;   core_menu.cpp_showMainGameMenu_FUN_004ea4d0
;
; *****************************************************************************

section .text

    CALL core_menu.cpp_showMainGameMenu_FUN_004ea4d0 ; 004e44d0
        ;   XREF to: 004ea4d0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_showMainGameMenu_FUN_004ea4d0()
        ;   Label: core_main.c_FUN_004e44d0
    RET                                 ; 004e44d5

