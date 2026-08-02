; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0057483d(LPCSTR param_1)
;
;
; Referenced Globals:
;   void* PTR_DeleteFileA_005754a8 = 00175b4c
;   void* PTR_GetLastError_0057551c = 00175d70
;
; *****************************************************************************

section .text

    AND EAX,0x57551c                    ; 0057483d | PTR_GetLastError_0057551c
        ;   Label: crt_unknown.c_FUN_0057483d
    JMP dword ptr [0x005754a8]          ; 00574842 | PTR_DeleteFileA_005754a8

