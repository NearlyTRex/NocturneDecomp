; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041e430(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_0041f3a0 at 0041f3af
;
; Called Functions:
;   FUN_00409fc0
;   FUN_0041e4d0
;   FUN_00454510
;   FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041e430
        ;   Label: FUN_0041e430
    PUSH ESI                            ; 0041e431
    SUB ESP,0x4                         ; 0041e432
    MOV EBX,dword ptr [ESP + 0x10]      ; 0041e435
    PUSH EBX                            ; 0041e439
    CALL FUN_00409fc0                   ; 0041e43a
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409fc0()
    ADD ESP,0x4                         ; 0041e43f
    LEA ESI,[EBX + 0x150]               ; 0041e442
    PUSH ESI                            ; 0041e448
    CALL FUN_00454510                   ; 0041e449
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined FUN_00454510()
    ADD ESP,0x4                         ; 0041e44e
    PUSH ESI                            ; 0041e451
    CALL FUN_00454530                   ; 0041e452
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined FUN_00454530()
    FLD float ptr [EBX + 0x308]         ; 0041e457
    FLDZ                                ; 0041e45d
    ADD ESP,0x4                         ; 0041e45f
    MOV ESI,dword ptr [EAX + 0x100]     ; 0041e462
    FCOMPP                              ; 0041e468
    FNSTSW AX                           ; 0041e46a
    SAHF                                ; 0041e46c
    JA 0x0041e4a6                       ; 0041e46d
        ;   XREF to: 0041e4a6 (CONDITIONAL_JUMP)  ; LAB_0041e4a6
    MOV dword ptr [ESP],ESI             ; 0041e46f
        ;   Label: LAB_0041e46f
    FILD dword ptr [ESP]                ; 0041e472
    FCOMP float ptr [EBX + 0x308]       ; 0041e475
    FNSTSW AX                           ; 0041e47b
    SAHF                                ; 0041e47d
    JA 0x0041e48d                       ; 0041e47e
        ;   XREF to: 0041e48d (CONDITIONAL_JUMP)  ; LAB_0041e48d
    DEC ESI                             ; 0041e480
    MOV dword ptr [ESP],ESI             ; 0041e481
    FILD dword ptr [ESP]                ; 0041e484
    FSTP float ptr [EBX + 0x308]        ; 0041e487
    CMP dword ptr [EBX + 0x5e0],0x0     ; 0041e48d
        ;   Label: LAB_0041e48d
    JL 0x0041e4b2                       ; 0041e494
        ;   XREF to: 0041e4b2 (CONDITIONAL_JUMP)  ; LAB_0041e4b2
    MOV dword ptr [EBX + 0x320],0x0     ; 0041e496
    ADD ESP,0x4                         ; 0041e4a0
    POP ESI                             ; 0041e4a3
    POP EBX                             ; 0041e4a4
    RET                                 ; 0041e4a5
    MOV dword ptr [EBX + 0x308],0x0     ; 0041e4a6
        ;   Label: LAB_0041e4a6
    JMP 0x0041e46f                      ; 0041e4b0
        ;   XREF to: 0041e46f (UNCONDITIONAL_JUMP)  ; LAB_0041e46f
    PUSH EBX                            ; 0041e4b2
        ;   Label: LAB_0041e4b2
    CALL FUN_0041e4d0                   ; 0041e4b3
        ;   XREF to: 0041e4d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041e4d0()
    ADD ESP,0x4                         ; 0041e4b8
    MOV dword ptr [EBX + 0x320],0x0     ; 0041e4bb
    ADD ESP,0x4                         ; 0041e4c5
    POP ESI                             ; 0041e4c8
    POP EBX                             ; 0041e4c9
    RET                                 ; 0041e4ca

