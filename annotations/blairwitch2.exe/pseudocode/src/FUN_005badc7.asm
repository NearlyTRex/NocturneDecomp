; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005badc7(void)
;
;
; XREF[2]:
;   FUN_005407e0 at 005407e5
;   FUN_00540840 at 00540845
;
; Called Functions:
;   FUN_005badd7
;
; *****************************************************************************

section .text

    XCHG dword ptr [ESP + 0x4],EAX      ; 005badc7
        ;   Label: FUN_005badc7
    CALL FUN_005badd7                   ; 005badcb
        ;   XREF to: 005badd7 (UNCONDITIONAL_CALL)  ; undefined FUN_005badd7()
    MOV EAX,dword ptr [ESP + 0x4]       ; 005badd0
    RET 0x4                             ; 005badd4

