; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c862c(void)
;
;
; XREF[15]:
;   FUN_005c1dc0 at 005c1dd3
;   FUN_005c2000 at 005c2010
;   FUN_005c2500 at 005c25a7
;   FUN_005c26c0 at 005c26ce
;   FUN_005c30b0 at 005c30c6
;   FUN_005c65d0 at 005c6677
;   FUN_005c6e80 at 005c6eff
;   FUN_005c7280 at 005c7410
;   FUN_005c7510 at 005c7566
;   FUN_005c7dc0 at 005c7e2c
;   ... and 5 more
;
; Referenced Globals:
;   void* PTR_GetLastError_005d05b0 = 001d0f00
;
; Called Functions:
;   FUN_005c85c0
;   GetLastError
;
; *****************************************************************************

section .text

    CALL dword ptr CS:[0x5d05b0]        ; 005c862c | PTR_GetLastError_005d05b0
        ;   Label: FUN_005c862c
    PUSH EAX                            ; 005c8633
    CALL FUN_005c85c0                   ; 005c8634
        ;   XREF to: 005c85c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c85c0()
    ADD ESP,0x4                         ; 005c8639
    RET                                 ; 005c863c

