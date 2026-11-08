; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a99b0(void)
;
;
; XREF[1]:
;   FUN_005a3b0c at 005a3b14
;
; Referenced Globals:
;   void* PTR_GetCurrentProcessId_005b358c = 001b3e5a
;
; Called Functions:
;   GetCurrentProcessId
;
; *****************************************************************************

section .text

    CALL dword ptr CS:[0x5b358c]        ; 005a99b0 | PTR_GetCurrentProcessId_005b358c
        ;   Label: FUN_005a99b0
    RET                                 ; 005a99b7

