; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056e4bc(void)
;
;
; XREF[1]:
;   FUN_0056e6e4 at 0056e752
;
; Called Functions:
;   FUN_0056e3f4
;
; *****************************************************************************

section .text

    PUSH 0x2de55d0                      ; 0056e4bc
        ;   Label: FUN_0056e4bc
    CALL FUN_0056e3f4                   ; 0056e4c1
        ;   XREF to: 0056e3f4 (UNCONDITIONAL_CALL)  ; undefined FUN_0056e3f4()
    ADD ESP,0x4                         ; 0056e4c6
    RET                                 ; 0056e4c9

