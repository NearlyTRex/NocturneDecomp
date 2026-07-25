; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056e4dc(void)
;
;
; XREF[1]:
;   FUN_0056e6e4 at 0056e780
;
; Called Functions:
;   FUN_0056e3f4
;
; *****************************************************************************

section .text

    PUSH 0x2de54c0                      ; 0056e4dc
        ;   Label: FUN_0056e4dc
    CALL FUN_0056e3f4                   ; 0056e4e1
        ;   XREF to: 0056e3f4 (UNCONDITIONAL_CALL)  ; undefined FUN_0056e3f4()
    ADD ESP,0x4                         ; 0056e4e6
    RET                                 ; 0056e4e9

