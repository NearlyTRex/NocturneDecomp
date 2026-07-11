; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005670b1(void)
;
;
; Called Functions:
;   FUN_005670c1
;
; *****************************************************************************

section .text

    XCHG dword ptr [ESP + 0x4],EAX      ; 005670b1
        ;   Label: FUN_005670b1
    CALL FUN_005670c1                   ; 005670b5
        ;   XREF to: 005670c1 (UNCONDITIONAL_CALL)  ; undefined FUN_005670c1()
    MOV EAX,dword ptr [ESP + 0x4]       ; 005670ba
    RET 0x4                             ; 005670be

