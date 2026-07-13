; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00415430(int param_1)
;
;
; Called Functions:
;   FUN_00454510
;   FUN_00454530
;   FUN_004796b0
;   FUN_004e0170
;   FUN_004e01b0
;   FUN_004e03c0
;   FUN_0051dcd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415430
        ;   Label: FUN_00415430
    PUSH ESI                            ; 00415431
    PUSH EDI                            ; 00415432
    MOV EBX,dword ptr [ESP + 0x10]      ; 00415433
    PUSH EBX                            ; 00415437
    CALL FUN_004796b0                   ; 00415438
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004796b0()
    ADD ESP,0x4                         ; 0041543d
    LEA ESI,[EBX + 0x150]               ; 00415440
    PUSH ESI                            ; 00415446
    CALL FUN_0051dcd0                   ; 00415447
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051dcd0()
    ADD ESP,0x4                         ; 0041544c
    LEA EDI,[EBX + 0xbd24]              ; 0041544f
    PUSH EDI                            ; 00415455
    CALL FUN_00454510                   ; 00415456
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined FUN_00454510()
    ADD ESP,0x4                         ; 0041545b
    PUSH ESI                            ; 0041545e
    PUSH 0x0                            ; 0041545f
    LEA ESI,[EBX + 0xbea8]              ; 00415461
    PUSH ESI                            ; 00415467
    CALL FUN_004e0170                   ; 00415468
        ;   XREF to: 004e0170 (UNCONDITIONAL_CALL)  ; undefined FUN_004e0170()
    ADD ESP,0xc                         ; 0041546d
    PUSH 0x0                            ; 00415470
    PUSH EDI                            ; 00415472
    CALL FUN_00454530                   ; 00415473
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined FUN_00454530()
    ADD ESP,0x4                         ; 00415478
    PUSH EAX                            ; 0041547b
    PUSH 0x1                            ; 0041547c
    PUSH ESI                            ; 0041547e
    CALL FUN_004e01b0                   ; 0041547f
        ;   XREF to: 004e01b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e01b0()
    ADD ESP,0x10                        ; 00415484
    PUSH ESI                            ; 00415487
    CALL FUN_004e03c0                   ; 00415488
        ;   XREF to: 004e03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e03c0()
    MOV dword ptr [EBX + 0xbea0],0x0    ; 0041548d
    ADD ESP,0x4                         ; 00415497
    MOV dword ptr [EBX + 0xbea4],0x0    ; 0041549a
    POP EDI                             ; 004154a4
    POP ESI                             ; 004154a5
    POP EBX                             ; 004154a6
    RET                                 ; 004154a7

