; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00573b00(void)
;
;
; XREF[5]:
;   FUN_00415fc0 at 00416527
;   FUN_004d9260 at 004d973f
;   FUN_0051b610 at 0051b697
;   FUN_005746a0 at 005746ac
;   FUN_005750e0 at 005750e0
;
; Called Functions:
;   FUN_00571d70
;   FUN_00573e70
;   FUN_00575d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573b00
        ;   Label: FUN_00573b00
    PUSH ESI                            ; 00573b01
    MOV EBX,0x2c745ec                   ; 00573b02
    CALL FUN_00575d20                   ; 00573b07
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00575d20()
    LEA ESI,[EBX + 0x4700]              ; 00573b0c
    PUSH EBX                            ; 00573b12
        ;   Label: LAB_00573b12
    CALL FUN_00571d70                   ; 00573b13
        ;   XREF to: 00571d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00571d70()
    ADD EBX,0x11c                       ; 00573b18
    ADD ESP,0x4                         ; 00573b1e
    CMP EBX,ESI                         ; 00573b21
    JNZ 0x00573b12                      ; 00573b23
        ;   XREF to: 00573b12 (CONDITIONAL_JUMP)  ; LAB_00573b12
    CALL FUN_00573e70                   ; 00573b25
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00573e70()
    POP ESI                             ; 00573b2a
    POP EBX                             ; 00573b2b
    RET                                 ; 00573b2c

