; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallRegister wincore_winrun_cpp_endPeriod_FUN_005b2410(void)
;
;
; XREF[2]:
;   core_main.c_FUN_005030e0 at 0050315e
;   core_main.c_FUN_00503a30 at 00503a88
;
; Referenced Globals:
;   void* PTR_timeEndPeriod_005d0454 = 001d0924
;
; Called Functions:
;   timeEndPeriod
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005b2410
        ;   Label: wincore_winrun.cpp_endPeriod_FUN_005b2410
    CALL dword ptr CS:[0x5d0454]        ; 005b2412 | PTR_timeEndPeriod_005d0454
    RET                                 ; 005b2419

