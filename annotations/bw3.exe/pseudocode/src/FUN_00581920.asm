; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00581920(void)
;
;
; XREF[2]:
;   FUN_00558e90 at 00558e9b
;   FUN_00571ea0 at 00571ed0
;
; Referenced Globals:
;   void* PTR_CreateMutexA_005b3528 = 001b3c88
;
; Called Functions:
;   CreateMutexA
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00581920
        ;   Label: FUN_00581920
    PUSH 0x0                            ; 00581922
    PUSH 0x0                            ; 00581924
    CALL dword ptr CS:[0x5b3528]        ; 00581926 | PTR_CreateMutexA_005b3528
    RET                                 ; 0058192d

