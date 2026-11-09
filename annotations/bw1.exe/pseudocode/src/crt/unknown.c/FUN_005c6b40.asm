; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c6b40(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c0d8c at 005c0d94
;
; Referenced Globals:
;   void* PTR_GetCurrentProcessId_005d058c = 001d0e54
;
; Called Functions:
;   GetCurrentProcessId
;
; *****************************************************************************

section .text

    CALL dword ptr CS:[0x5d058c]        ; 005c6b40 | PTR_GetCurrentProcessId_005d058c
        ;   Label: crt_unknown.c_FUN_005c6b40
    RET                                 ; 005c6b47

