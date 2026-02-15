; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallRegister wincore_winrun_cpp_endPeriod_FUN_005f2db0(void)
;
;
; XREF[2]:
;   core_main.c_displayErrorAndQuit_FUN_00506f10 at 00507022
;   core_main.c_finalizeGameSystems_FUN_00508570 at 005087fa
;
; Referenced Globals:
;   TIME_END_PERIOD_FUNC* g_timeEndPeriodFunc = 00211874
;
; Called Functions:
;   timeEndPeriod
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005f2db0
        ;   Label: wincore_winrun.cpp_endPeriod_FUN_005f2db0
    CALL dword ptr CS:[0x611418]        ; 005f2db2 | g_timeEndPeriodFunc
    RET                                 ; 005f2db9

