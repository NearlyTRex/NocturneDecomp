; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005749c9(LARGE_INTEGER *param_1)
;
;
; Referenced Globals:
;   void* PTR_QueryPerformanceCounter_00575570 = 00175ef6
;   void* PTR_QueryPerformanceFrequency_00575574 = 00175f10
;
; *****************************************************************************

section .text

    AND EAX,0x575570                    ; 005749c9 | PTR_QueryPerformanceCounter_00575570
        ;   Label: crt_unknown.c_FUN_005749c9
    JMP dword ptr [0x00575574]          ; 005749ce | PTR_QueryPerformanceFrequency_00575574

