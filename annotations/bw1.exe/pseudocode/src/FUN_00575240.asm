; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00575240(void)
;
;
; XREF[4]:
;   FUN_0050ba70 at 0050c003
;   FUN_00575260 at 00575266
;   FUN_005752a0 at 005752a5
;   FUN_00578f80 at 00579009
;
; Referenced Globals:
;   undefined4 DAT_006232ec
;
; Called Functions:
;   FUN_005751c0
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00575240
        ;   Label: FUN_00575240
    PUSH 0x6232ec                       ; 00575242 | DAT_006232ec
    PUSH 0x0                            ; 00575247
    CALL FUN_005751c0                   ; 00575249
        ;   XREF to: 005751c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005751c0()
    MOV EAX,[0x006232ec]                ; 0057524e | DAT_006232ec
    ADD ESP,0xc                         ; 00575253
    RET                                 ; 00575256

