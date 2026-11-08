; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059b3d0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   FUN_004087f0
;   FUN_00408830
;   FUN_0046d4b0
;   FUN_0046d4c0
;   FUN_0046e120
;   FUN_0046e4e0
;   FUN_0054e3a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059b3d0
        ;   Label: FUN_0059b3d0
    PUSH ESI                            ; 0059b3d1
    PUSH EDI                            ; 0059b3d2
    PUSH EBP                            ; 0059b3d3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0059b3d4
    PUSH EBX                            ; 0059b3d8
    CALL FUN_004087f0                   ; 0059b3d9
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 0059b3de
    PUSH 0xffff                         ; 0059b3e1
    MOV EDX,dword ptr [0x005f2afc]      ; 0059b3e6 | DAT_005f2afc
    PUSH EDX                            ; 0059b3ec | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x27bc],0x1    ; 0059b3ed
    CALL FUN_0046d4c0                   ; 0059b3f7
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4c0()
    ADD ESP,0x8                         ; 0059b3fc
    PUSH 0x1                            ; 0059b3ff
    MOV ECX,dword ptr [0x005f2afc]      ; 0059b401 | DAT_005f2afc
    PUSH ECX                            ; 0059b407 | DAT_01bdd7e4
    CALL FUN_0046d4b0                   ; 0059b408
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4b0()
    ADD ESP,0x8                         ; 0059b40d
    PUSH 0x1                            ; 0059b410
    MOV ESI,dword ptr [0x005f2afc]      ; 0059b412 | DAT_005f2afc
    PUSH ESI                            ; 0059b418 | DAT_01bdd7e4
    CALL FUN_0046e120                   ; 0059b419
        ;   XREF to: 0046e120 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e120()
    ADD ESP,0x8                         ; 0059b41e
    PUSH 0x0                            ; 0059b421
    PUSH 0x1                            ; 0059b423
    PUSH 0x2e7                          ; 0059b425
    PUSH -0x1                           ; 0059b42a
    LEA EAX,[EBX + 0x158]               ; 0059b42c
    PUSH EAX                            ; 0059b432
    CALL FUN_0054e3a0                   ; 0059b433
        ;   XREF to: 0054e3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e3a0()
    ADD ESP,0x14                        ; 0059b438
    MOV EDI,dword ptr [0x005f2afc]      ; 0059b43b | DAT_005f2afc
    PUSH EDI                            ; 0059b441 | DAT_01bdd7e4
    CALL FUN_0046e4e0                   ; 0059b442
        ;   XREF to: 0046e4e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e4e0()
    ADD ESP,0x4                         ; 0059b447
    PUSH 0x0                            ; 0059b44a
    MOV EBP,dword ptr [0x005f2afc]      ; 0059b44c | DAT_005f2afc
    PUSH EBP                            ; 0059b452 | DAT_01bdd7e4
    CALL FUN_0046d4b0                   ; 0059b453
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4b0()
    ADD ESP,0x8                         ; 0059b458
    PUSH EBX                            ; 0059b45b
    CALL FUN_00408830                   ; 0059b45c
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    MOV EAX,0x1                         ; 0059b461
    ADD ESP,0x4                         ; 0059b466
    POP EBP                             ; 0059b469
    POP EDI                             ; 0059b46a
    POP ESI                             ; 0059b46b
    POP EBX                             ; 0059b46c
    RET                                 ; 0059b46d

