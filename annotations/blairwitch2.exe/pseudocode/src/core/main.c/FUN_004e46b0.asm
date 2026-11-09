; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_main_c_FUN_004e46b0(void)
;
;
; XREF[1]:
;   wincore_winrun.cpp_FUN_0058f310 at 0058f592
;
; Called Functions:
;   core_menu.cpp_FUN_004ee3f0
;
; *****************************************************************************

section .text

    CALL core_menu.cpp_FUN_004ee3f0     ; 004e46b0
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_FUN_004ee3f0()
        ;   Label: core_main.c_FUN_004e46b0
    RET                                 ; 004e46b5

