; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0058fc90(void)
;
;
; XREF[1]:
;   FUN_005532f0 at 005532fb
;
; Referenced Globals:
;   void* PTR_CreateMutexA_005c851c = 001c8c72
;
; Called Functions:
;   CreateMutexA
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0058fc90
        ;   Label: FUN_0058fc90
    PUSH 0x0                            ; 0058fc92
    PUSH 0x0                            ; 0058fc94
    CALL dword ptr CS:[0x5c851c]        ; 0058fc96 | PTR_CreateMutexA_005c851c
    RET                                 ; 0058fc9d

