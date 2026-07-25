; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056de90(void)
;
;
; Called Functions:
;   FUN_0056deac
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0056de90
        ;   Label: FUN_0056de90
    CALL FUN_0056deac                   ; 0056de92
        ;   XREF to: 0056deac (UNCONDITIONAL_CALL)  ; undefined FUN_0056deac()
    ADD ESP,0x4                         ; 0056de97
    JMP 0x00568658                      ; 0056de9a
        ;   XREF to: 00568658 (UNCONDITIONAL_JUMP)

