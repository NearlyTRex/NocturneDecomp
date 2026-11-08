; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00575220(void)
;
;
; XREF[4]:
;   FUN_0050ba70 at 0050bed3
;   FUN_00575260 at 00575260
;   FUN_00575280 at 00575280
;   FUN_0057d6a0 at 0057d7a9
;
; Referenced Globals:
;   undefined4 DAT_006232f0
;
; Called Functions:
;   FUN_005751c0
;
; *****************************************************************************

section .text

    PUSH 0x6232f0                       ; 00575220 | DAT_006232f0
        ;   Label: FUN_00575220
    PUSH 0x0                            ; 00575225
    PUSH 0x0                            ; 00575227
    CALL FUN_005751c0                   ; 00575229
        ;   XREF to: 005751c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005751c0()
    MOV EAX,[0x006232f0]                ; 0057522e | DAT_006232f0
    ADD ESP,0xc                         ; 00575233
    RET                                 ; 00575236

