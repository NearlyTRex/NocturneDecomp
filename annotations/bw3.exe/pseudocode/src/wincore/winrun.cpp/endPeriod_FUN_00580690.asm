; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallRegister wincore_winrun_cpp_endPeriod_FUN_00580690(void)
;
;
; XREF[2]:
;   core_main.c_FUN_004e4330 at 004e43ae
;   core_main.c_FUN_004e4c70 at 004e4cc8
;
; Referenced Globals:
;   void* PTR_timeEndPeriod_005b3454 = 001b3924
;
; Called Functions:
;   timeEndPeriod
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00580690
        ;   Label: wincore_winrun.cpp_endPeriod_FUN_00580690
    CALL dword ptr CS:[0x5b3454]        ; 00580692 | PTR_timeEndPeriod_005b3454
    RET                                 ; 00580699

