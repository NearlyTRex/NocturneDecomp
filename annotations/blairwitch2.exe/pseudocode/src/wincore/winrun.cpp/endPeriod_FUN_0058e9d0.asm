; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallRegister wincore_winrun_cpp_endPeriod_FUN_0058e9d0(void)
;
;
; XREF[2]:
;   core_main.c_FUN_004e4500 at 004e457e
;   core_main.c_FUN_004e4e20 at 004e4e78
;
; Referenced Globals:
;   void* PTR_timeEndPeriod_005c8448 = 001c890c
;
; Called Functions:
;   timeEndPeriod
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0058e9d0
        ;   Label: wincore_winrun.cpp_endPeriod_FUN_0058e9d0
    CALL dword ptr CS:[0x5c8448]        ; 0058e9d2 | PTR_timeEndPeriod_005c8448
    RET                                 ; 0058e9d9

