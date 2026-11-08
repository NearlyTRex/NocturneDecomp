; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00556c60(void)
;
;
; XREF[5]:
;   FUN_00411d70 at 004122d7
;   FUN_004c07b0 at 004c0ca3
;   FUN_004f6de0 at 004f6e67
;   FUN_00557800 at 0055780c
;   FUN_00558250 at 00558250
;
; Called Functions:
;   FUN_00555270
;   FUN_00556fd0
;   FUN_00558e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556c60
        ;   Label: FUN_00556c60
    PUSH ESI                            ; 00556c61
    MOV EBX,0x2ce721c                   ; 00556c62
    CALL FUN_00558e90                   ; 00556c67
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00558e90()
    LEA ESI,[EBX + 0x4700]              ; 00556c6c
    PUSH EBX                            ; 00556c72
        ;   Label: LAB_00556c72
    CALL FUN_00555270                   ; 00556c73
        ;   XREF to: 00555270 (UNCONDITIONAL_CALL)  ; undefined FUN_00555270()
    ADD EBX,0x11c                       ; 00556c78
    ADD ESP,0x4                         ; 00556c7e
    CMP EBX,ESI                         ; 00556c81
    JNZ 0x00556c72                      ; 00556c83
        ;   XREF to: 00556c72 (CONDITIONAL_JUMP)  ; LAB_00556c72
    CALL FUN_00556fd0                   ; 00556c85
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556fd0()
    POP ESI                             ; 00556c8a
    POP EBX                             ; 00556c8b
    RET                                 ; 00556c8c

