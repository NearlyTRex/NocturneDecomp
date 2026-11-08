; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051bf10(void)
;
;
; XREF[1]:
;   FUN_0051a4f0 at 0051a9f7
;
; Called Functions:
;   FUN_00468830
;   FUN_0056b610
;   FUN_0056b740
;   FUN_00597c30
;
; *****************************************************************************

section .text

    CALL FUN_00597c30                   ; 0051bf10
        ;   XREF to: 00597c30 (UNCONDITIONAL_CALL)  ; undefined FUN_00597c30()
        ;   Label: FUN_0051bf10
    CALL FUN_00468830                   ; 0051bf15
        ;   XREF to: 00468830 (UNCONDITIONAL_CALL)  ; undefined FUN_00468830()
    CALL FUN_0056b610                   ; 0051bf1a
        ;   XREF to: 0056b610 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b610()
    JMP 0x0056b740                      ; 0051bf1f
        ;   XREF to: 0056b740 (UNCONDITIONAL_CALL)

