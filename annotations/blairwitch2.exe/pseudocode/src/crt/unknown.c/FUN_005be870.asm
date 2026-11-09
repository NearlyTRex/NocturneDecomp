; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005be870(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005b8a3c at 005b8a44
;
; Referenced Globals:
;   void* PTR_GetCurrentProcessId_005c857c = 001c8e2c
;
; Called Functions:
;   GetCurrentProcessId
;
; *****************************************************************************

section .text

    CALL dword ptr CS:[0x5c857c]        ; 005be870 | PTR_GetCurrentProcessId_005c857c
        ;   Label: crt_unknown.c_FUN_005be870
    RET                                 ; 005be877

