; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00538160(void)
;
;
; XREF[2]:
;   FUN_004fc640 at 004fc690
;   FUN_0052c0e0 at 0052d0ce
;
; Referenced Globals:
;   undefined4 DAT_01fc9c68
;
; Called Functions:
;   FUN_004770c0
;   FUN_00513f30
;
; *****************************************************************************

section .text

    PUSH 0x1fc9c68                      ; 00538160 | DAT_01fc9c68
        ;   Label: FUN_00538160
    CALL FUN_004770c0                   ; 00538165
        ;   XREF to: 004770c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004770c0()
    ADD ESP,0x4                         ; 0053816a
    JMP 0x00513f30                      ; 0053816d
        ;   XREF to: 00513f30 (UNCONDITIONAL_CALL)

