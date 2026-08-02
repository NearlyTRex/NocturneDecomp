; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574a23(LPCSTR param_1)
;
;
; Referenced Globals:
;   void* PTR_GetProcAddress_00575534 = 00175ddc
;   void* PTR_LoadLibraryA_00575560 = 00175eaa
;
; *****************************************************************************

section .text

    AND EAX,0x575534                    ; 00574a23 | PTR_GetProcAddress_00575534
        ;   Label: crt_unknown.c_FUN_00574a23
    JMP dword ptr [0x00575560]          ; 00574a28 | PTR_LoadLibraryA_00575560

