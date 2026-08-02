; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574b31(LPCSTR param_1)
;
;
; Referenced Globals:
;   void* PTR_FlushFileBuffers_005754d4 = 00175c1e
;   void* PTR_GetFileAttributesA_0057550c = 00175d2a
;
; *****************************************************************************

section .text

    AND EAX,0x5754d4                    ; 00574b31 | PTR_FlushFileBuffers_005754d4
        ;   Label: crt_unknown.c_FUN_00574b31
    JMP dword ptr [0x0057550c]          ; 00574b36 | PTR_GetFileAttributesA_0057550c

