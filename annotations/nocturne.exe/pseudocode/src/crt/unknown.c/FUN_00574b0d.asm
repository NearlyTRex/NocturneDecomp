; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574b0d(HANDLE param_1,DWORD param_2)
;
;
; Referenced Globals:
;   void* PTR_SetConsoleMode_00575588 = 00175f74
;   void* PTR_WriteConsoleA_005755e8 = 0017612e
;
; *****************************************************************************

section .text

    AND EAX,0x5755e8                    ; 00574b0d | PTR_WriteConsoleA_005755e8
        ;   Label: crt_unknown.c_FUN_00574b0d
    JMP dword ptr [0x00575588]          ; 00574b12 | PTR_SetConsoleMode_00575588

