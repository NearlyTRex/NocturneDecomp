; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574891(LPCSTR param_1,DWORD param_2,LPSTR param_3,LPSTR *param_4)
;
;
; Referenced Globals:
;   void* PTR_GetFullPathNameA_00575518 = 00175d5c
;   void* PTR_SetFileAttributesA_0057559c = 00175fde
;
; *****************************************************************************

section .text

    AND EAX,0x57559c                    ; 00574891 | PTR_SetFileAttributesA_0057559c
        ;   Label: crt_unknown.c_FUN_00574891
    JMP dword ptr [0x00575518]          ; 00574896 | PTR_GetFullPathNameA_00575518

