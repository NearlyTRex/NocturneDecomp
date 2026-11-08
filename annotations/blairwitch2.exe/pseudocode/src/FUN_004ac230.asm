; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ac230(int param_1)
;
;
; Called Functions:
;   FUN_00408a80
;   FUN_00438af0
;   FUN_0044fd00
;   FUN_004accb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ac230
        ;   Label: FUN_004ac230
    PUSH ESI                            ; 004ac231
    PUSH EDI                            ; 004ac232
    MOV EBX,dword ptr [ESP + 0x10]      ; 004ac233
    PUSH EBX                            ; 004ac237
    CALL FUN_00408a80                   ; 004ac238
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    MOV byte ptr [EBX + 0x2bc],0x0      ; 004ac23d
    ADD ESP,0x4                         ; 004ac244
    MOV EDI,dword ptr [EBX + 0x2b4]     ; 004ac247
    MOV dword ptr [EBX + 0x5e4],0x0     ; 004ac24d
    CMP EDI,0x8                         ; 004ac257
    JA 0x004ac2b9                       ; 004ac25a
        ;   XREF to: 004ac2b9 (CONDITIONAL_JUMP)  ; LAB_004ac2b9
    JMP dword ptr [EDI*0x4 + 0x4ac20c]  ; 004ac25c
    LEA EDI,[EBX + 0x2e0]               ; 004ac2b9
        ;   Label: LAB_004ac2b9
    PUSH EDI                            ; 004ac2bf
    CALL FUN_0044fd00                   ; 004ac2c0
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    MOV AH,byte ptr [EBX + 0x2bc]       ; 004ac2c5
    ADD ESP,0x4                         ; 004ac2cb
    TEST AH,AH                          ; 004ac2ce
    JNZ 0x004ac432                      ; 004ac2d0
        ;   XREF to: 004ac432 (CONDITIONAL_JUMP)  ; LAB_004ac432
    PUSH EBX                            ; 004ac2d6
    CALL FUN_004accb0                   ; 004ac2d7
        ;   XREF to: 004accb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004accb0()
    ADD ESP,0x4                         ; 004ac2dc
    POP EDI                             ; 004ac2df
    POP ESI                             ; 004ac2e0
    POP EBX                             ; 004ac2e1
    RET                                 ; 004ac2e2
    LEA EDI,[EBX + 0x2bc]               ; 004ac432
        ;   Label: LAB_004ac432
    PUSH EDI                            ; 004ac438
    LEA EDI,[EBX + 0x45c]               ; 004ac439
    PUSH EDI                            ; 004ac43f
    CALL FUN_00438af0                   ; 004ac440
        ;   XREF to: 00438af0 (UNCONDITIONAL_CALL)  ; undefined FUN_00438af0()
    ADD ESP,0x8                         ; 004ac445
    PUSH EBX                            ; 004ac448
    CALL FUN_004accb0                   ; 004ac449
        ;   XREF to: 004accb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004accb0()
    ADD ESP,0x4                         ; 004ac44e
    POP EDI                             ; 004ac451
    POP ESI                             ; 004ac452
    POP EBX                             ; 004ac453
    RET                                 ; 004ac454

