; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574a8f(HWND param_1)
;
;
; Referenced Globals:
;   void* PTR_GetClipboardData_00575430 = 0017596c
;   void* PTR_OpenClipboard_00575454 = 001759fc
;
; *****************************************************************************

section .text

    AND EAX,0x575430                    ; 00574a8f | PTR_GetClipboardData_00575430
        ;   Label: crt_unknown.c_FUN_00574a8f
    JMP dword ptr [0x00575454]          ; 00574a94 | PTR_OpenClipboard_00575454

