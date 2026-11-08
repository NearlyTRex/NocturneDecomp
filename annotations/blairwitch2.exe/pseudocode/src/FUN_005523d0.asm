; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005523d0(void)
;
;
; XREF[1]:
;   FUN_0055a0e0 at 0055a0f5
;
; Called Functions:
;   FUN_00551100
;   FUN_00551220
;   FUN_00551490
;   FUN_005514f0
;   FUN_00551570
;   FUN_005515b0
;   FUN_00552aa0
;   FUN_00552ca0
;   FUN_00552e40
;   FUN_00552f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005523d0
        ;   Label: FUN_005523d0
    XOR EBX,EBX                         ; 005523d1
    PUSH 0x3f800000                     ; 005523d3
        ;   Label: LAB_005523d3
    PUSH EBX                            ; 005523d8
    CALL FUN_00551100                   ; 005523d9
        ;   XREF to: 00551100 (UNCONDITIONAL_CALL)  ; undefined FUN_00551100()
    ADD ESP,0x8                         ; 005523de
    PUSH 0x1                            ; 005523e1
    PUSH EBX                            ; 005523e3
    CALL FUN_00551220                   ; 005523e4
        ;   XREF to: 00551220 (UNCONDITIONAL_CALL)  ; undefined FUN_00551220()
    INC EBX                             ; 005523e9
    ADD ESP,0x8                         ; 005523ea
    CMP EBX,0x20                        ; 005523ed
    JL 0x005523d3                       ; 005523f0
        ;   XREF to: 005523d3 (CONDITIONAL_JUMP)  ; LAB_005523d3
    PUSH 0x3f800000                     ; 005523f2
    CALL FUN_005515b0                   ; 005523f7
        ;   XREF to: 005515b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005515b0()
    ADD ESP,0x4                         ; 005523fc
    PUSH 0x0                            ; 005523ff
    PUSH 0x0                            ; 00552401
    PUSH 0x0                            ; 00552403
    PUSH 0x0                            ; 00552405
    PUSH 0x0                            ; 00552407
    PUSH 0x0                            ; 00552409
    CALL FUN_00551490                   ; 0055240b
        ;   XREF to: 00551490 (UNCONDITIONAL_CALL)  ; undefined FUN_00551490()
    ADD ESP,0x18                        ; 00552410
    PUSH 0x3f800000                     ; 00552413
    PUSH 0x0                            ; 00552418
    PUSH 0x0                            ; 0055241a
    PUSH 0x0                            ; 0055241c
    PUSH 0x3f800000                     ; 0055241e
    PUSH 0x0                            ; 00552423
    PUSH 0x0                            ; 00552425
    PUSH 0x0                            ; 00552427
    PUSH 0x3f800000                     ; 00552429
    CALL FUN_005514f0                   ; 0055242e
        ;   XREF to: 005514f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005514f0()
    ADD ESP,0x24                        ; 00552433
    PUSH 0x0                            ; 00552436
    PUSH 0x0                            ; 00552438
    PUSH 0x0                            ; 0055243a
    CALL FUN_00551570                   ; 0055243c
        ;   XREF to: 00551570 (UNCONDITIONAL_CALL)  ; undefined FUN_00551570()
    ADD ESP,0xc                         ; 00552441
    CALL FUN_00552ca0                   ; 00552444
        ;   XREF to: 00552ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00552ca0()
    PUSH EAX                            ; 00552449
    CALL FUN_00552aa0                   ; 0055244a
        ;   XREF to: 00552aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00552aa0()
    ADD ESP,0x4                         ; 0055244f
    CALL FUN_00552f70                   ; 00552452
        ;   XREF to: 00552f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00552f70()
    PUSH EAX                            ; 00552457
    CALL FUN_00552e40                   ; 00552458
        ;   XREF to: 00552e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00552e40()
    ADD ESP,0x4                         ; 0055245d
    POP EBX                             ; 00552460
    RET                                 ; 00552461

