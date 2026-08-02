; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574abf(void)
;
;
; Referenced Globals:
;   void* PTR_ExitThread_005754b8 = 00175b98
;   void* PTR_GetCurrentThread_00575504 = 00175cfe
;
; *****************************************************************************

section .text

    AND EAX,0x5754b8                    ; 00574abf | PTR_ExitThread_005754b8
        ;   Label: crt_unknown.c_FUN_00574abf
    JMP dword ptr [0x00575504]          ; 00574ac4 | PTR_GetCurrentThread_00575504

