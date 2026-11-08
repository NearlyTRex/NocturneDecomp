; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005527f0(void)
;
;
; XREF[4]:
;   FUN_004ed260 at 004ed6e1
;   FUN_00552830 at 00552830
;   FUN_00552850 at 00552850
;   FUN_0055ac50 at 0055ad59
;
; Referenced Globals:
;   undefined4 DAT_0061bca0
;
; Called Functions:
;   FUN_00552790
;
; *****************************************************************************

section .text

    PUSH 0x61bca0                       ; 005527f0 | DAT_0061bca0
        ;   Label: FUN_005527f0
    PUSH 0x0                            ; 005527f5
    PUSH 0x0                            ; 005527f7
    CALL FUN_00552790                   ; 005527f9
        ;   XREF to: 00552790 (UNCONDITIONAL_CALL)  ; undefined FUN_00552790()
    MOV EAX,[0x0061bca0]                ; 005527fe | DAT_0061bca0
    ADD ESP,0xc                         ; 00552803
    RET                                 ; 00552806

