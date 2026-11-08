; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053ef40(void)
;
;
; XREF[2]:
;   FUN_004f6d70 at 004f6dc0
;   FUN_00532b80 at 00533b6e
;
; Referenced Globals:
;   undefined4 DAT_0203b37c
;
; Called Functions:
;   FUN_00478130
;   FUN_0050cf60
;
; *****************************************************************************

section .text

    PUSH 0x203b37c                      ; 0053ef40 | DAT_0203b37c
        ;   Label: FUN_0053ef40
    CALL FUN_00478130                   ; 0053ef45
        ;   XREF to: 00478130 (UNCONDITIONAL_CALL)  ; undefined FUN_00478130()
    ADD ESP,0x4                         ; 0053ef4a
    JMP 0x0050cf60                      ; 0053ef4d
        ;   XREF to: 0050cf60 (UNCONDITIONAL_CALL)

