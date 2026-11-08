; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005583b0(void)
;
;
; XREF[4]:
;   FUN_004e94f0 at 004e9b0b
;   FUN_005583d0 at 005583d6
;   FUN_00558410 at 00558415
;   FUN_0055c0f0 at 0055c179
;
; Referenced Globals:
;   undefined4 DAT_0060422c
;
; Called Functions:
;   FUN_00558330
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 005583b0
        ;   Label: FUN_005583b0
    PUSH 0x60422c                       ; 005583b2 | DAT_0060422c
    PUSH 0x0                            ; 005583b7
    CALL FUN_00558330                   ; 005583b9
        ;   XREF to: 00558330 (UNCONDITIONAL_CALL)  ; undefined FUN_00558330()
    MOV EAX,[0x0060422c]                ; 005583be | DAT_0060422c
    ADD ESP,0xc                         ; 005583c3
    RET                                 ; 005583c6

