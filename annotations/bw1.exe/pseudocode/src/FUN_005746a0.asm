; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005746a0(void)
;
;
; XREF[2]:
;   FUN_00574ea0 at 00574ec8
;   FUN_0057d800 at 0057d805
;
; Called Functions:
;   FUN_00570020
;   FUN_00573b00
;   FUN_00573e70
;   FUN_00575d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005746a0
        ;   Label: FUN_005746a0
    PUSH ESI                            ; 005746a1
    CALL FUN_00575d20                   ; 005746a2
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00575d20()
    MOV EBX,0x2c78ff4                   ; 005746a7
    CALL FUN_00573b00                   ; 005746ac
        ;   XREF to: 00573b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00573b00()
    LEA ESI,[EBX + 0x6c00]              ; 005746b1
    PUSH EBX                            ; 005746b7
        ;   Label: LAB_005746b7
    CALL FUN_00570020                   ; 005746b8
        ;   XREF to: 00570020 (UNCONDITIONAL_CALL)  ; undefined FUN_00570020()
    ADD EBX,0x1b0                       ; 005746bd
    ADD ESP,0x4                         ; 005746c3
    CMP EBX,ESI                         ; 005746c6
    JNZ 0x005746b7                      ; 005746c8
        ;   XREF to: 005746b7 (CONDITIONAL_JUMP)  ; LAB_005746b7
    CALL FUN_00573e70                   ; 005746ca
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00573e70()
    POP ESI                             ; 005746cf
    POP EBX                             ; 005746d0
    RET                                 ; 005746d1

