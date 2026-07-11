; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00559bc0(void)
;
;
; XREF[1]:
;   FUN_00528800 at 0052880b
;
; Referenced Globals:
;   void* PTR_CreateMutexA_0057549c = 00175b14
;
; Called Functions:
;   CreateMutexA
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00559bc0
        ;   Label: FUN_00559bc0
    PUSH 0x0                            ; 00559bc2
    PUSH 0x0                            ; 00559bc4
    CALL dword ptr CS:[0x57549c]        ; 00559bc6 | PTR_CreateMutexA_0057549c
    RET                                 ; 00559bcd

