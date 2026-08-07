; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallRegister wincore_winrun_cpp_endPeriod_FUN_00558a20(void)
;
;
; XREF[2]:
;   core_main.c_displayErrorAndQuit_FUN_004c8440 at 004c84be
;   core_main.c_finalizeGameSystems_FUN_004c90e0 at 004c9366
;
; Referenced Globals:
;   void* PTR_timeEndPeriod_005753e8 = 0017583a
;
; Called Functions:
;   timeEndPeriod
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00558a20
        ;   Label: wincore_winrun.cpp_endPeriod_FUN_00558a20
    CALL dword ptr CS:[0x5753e8]        ; 00558a22 | PTR_timeEndPeriod_005753e8
    RET                                 ; 00558a29

