; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005749b1(UINT param_1)
;
;
; Referenced Globals:
;   void* PTR_timeEndPeriod_005753e8 = 0017583a
;   void* PTR_timeGetTime_005753ec = 0017584a
;
; *****************************************************************************

section .text

    AND EAX,0x5753ec                    ; 005749b1 | PTR_timeGetTime_005753ec
        ;   Label: crt_unknown.c_FUN_005749b1
    JMP dword ptr [0x005753e8]          ; 005749b6 | PTR_timeEndPeriod_005753e8

