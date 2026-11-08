; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004cf430(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00600530
;   undefined4 DAT_01d82088
;
; Called Functions:
;   FUN_004087f0
;   FUN_00408830
;   FUN_0041daf0
;   FUN_00462540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf430
        ;   Label: FUN_004cf430
    SUB ESP,0x30                        ; 004cf431
    MOV EBX,dword ptr [ESP + 0x38]      ; 004cf434
    CMP dword ptr [EBX + 0x2dc],0x0     ; 004cf438
    JNZ 0x004cf4ce                      ; 004cf43f
        ;   XREF to: 004cf4ce (CONDITIONAL_JUMP)  ; LAB_004cf4ce
    MOV EAX,[0x00600530]                ; 004cf445 | DAT_00600530
    CMP dword ptr [EAX + 0x1008],0x0    ; 004cf44a | DAT_01d82088
    JNZ 0x004cf465                      ; 004cf451
        ;   XREF to: 004cf465 (CONDITIONAL_JUMP)  ; LAB_004cf465
    CMP dword ptr [EBX + 0x2e4],0x0     ; 004cf453
    JZ 0x004cf465                       ; 004cf45a
        ;   XREF to: 004cf465 (CONDITIONAL_JUMP)  ; LAB_004cf465
    CMP dword ptr [EBX + 0x2e0],0x0     ; 004cf45c
    JZ 0x004cf4ce                       ; 004cf463
        ;   XREF to: 004cf4ce (CONDITIONAL_JUMP)  ; LAB_004cf4ce
    PUSH EDI                            ; 004cf465
        ;   Label: LAB_004cf465
    PUSH ESI                            ; 004cf466
    PUSH EBX                            ; 004cf467
    CALL FUN_004087f0                   ; 004cf468
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 004cf46d
    PUSH 0x0                            ; 004cf470
    MOV EAX,dword ptr [EBX + 0x154]     ; 004cf472
    PUSH EBX                            ; 004cf478
    LEA ESI,[ESP + 0x10]                ; 004cf479
    LEA EDI,[ESP + 0x28]                ; 004cf47d
    CALL dword ptr [EAX + 0x1c]         ; 004cf481
    MOV ECX,0x6                         ; 004cf484
    ADD ESP,0x4                         ; 004cf489
    LEA EAX,[ESP + 0x24]                ; 004cf48c
    LEA ESI,[ESP + 0xc]                 ; 004cf490
    PUSH EAX                            ; 004cf494
    MOVSD.REP ES:EDI,ESI                ; 004cf495
    CALL FUN_0041daf0                   ; 004cf497
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 004cf49c
    MOV ESI,EAX                         ; 004cf49f
    TEST EAX,EAX                        ; 004cf4a1
    JZ 0x004cf4bc                       ; 004cf4a3
        ;   XREF to: 004cf4bc (CONDITIONAL_JUMP)  ; LAB_004cf4bc
    PUSH -0x1                           ; 004cf4a5
    LEA EAX,[EBX + 0x158]               ; 004cf4a7
    PUSH dword ptr [EBX + 0x2d4]        ; 004cf4ad
    PUSH EAX                            ; 004cf4b3
    CALL FUN_00462540                   ; 004cf4b4
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; undefined FUN_00462540()
    ADD ESP,0xc                         ; 004cf4b9
    PUSH EBX                            ; 004cf4bc
        ;   Label: LAB_004cf4bc
    CALL FUN_00408830                   ; 004cf4bd
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 004cf4c2
    MOV EAX,ESI                         ; 004cf4c5
    POP ESI                             ; 004cf4c7
    POP EDI                             ; 004cf4c8
    ADD ESP,0x30                        ; 004cf4c9
    POP EBX                             ; 004cf4cc
    RET                                 ; 004cf4cd
    XOR EAX,EAX                         ; 004cf4ce
        ;   Label: LAB_004cf4ce
    ADD ESP,0x30                        ; 004cf4d0
    POP EBX                             ; 004cf4d3
    RET                                 ; 004cf4d4

