; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_level_cpp_FUN_004dfc40(int param_1)
;
;
; XREF[2]:
;   core_game.cpp_FUN_004b7f90 at 004b8359
;   core_level.cpp_staticInit_FUN_004dfc10 at 004dfc15
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004dfc40
        ;   Label: core_level.cpp_FUN_004dfc40
    MOV dword ptr [EAX + 0xc],0x0       ; 004dfc44
    RET                                 ; 004dfc4b

