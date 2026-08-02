; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574ab3(LPCWSTR param_1,LPCWSTR param_2)
;
;
; Referenced Globals:
;   void* PTR_FindFirstFileA_005754cc = 00175bfc
;   void* PTR_SetEnvironmentVariableW_00575594 = 00175fb8
;
; *****************************************************************************

section .text

    AND EAX,0x5754cc                    ; 00574ab3 | PTR_FindFirstFileA_005754cc
        ;   Label: crt_unknown.c_FUN_00574ab3
    JMP dword ptr [0x00575594]          ; 00574ab8 | PTR_SetEnvironmentVariableW_00575594

