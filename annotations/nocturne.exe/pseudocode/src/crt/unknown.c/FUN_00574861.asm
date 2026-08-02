; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574861(HANDLE param_1,LONG param_2,PLONG param_3,DWORD param_4)
;
;
; Referenced Globals:
;   void* PTR_CloseHandle_0057548c = 00175ad4
;   void* PTR_SetFilePointer_005755a0 = 00175ff4
;
; *****************************************************************************

section .text

    AND EAX,0x57548c                    ; 00574861 | PTR_CloseHandle_0057548c
        ;   Label: crt_unknown.c_FUN_00574861
    JMP dword ptr [0x005755a0]          ; 00574866 | PTR_SetFilePointer_005755a0

