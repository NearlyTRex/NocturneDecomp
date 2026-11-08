; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0050a450(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004fa8a0
;   FUN_00508f40
;   FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050a450
        ;   Label: FUN_0050a450
    PUSH ESI                            ; 0050a451
    PUSH EDI                            ; 0050a452
    MOV EBX,dword ptr [ESP + 0x10]      ; 0050a453
    PUSH EBX                            ; 0050a457
    CALL FUN_00508f40                   ; 0050a458
        ;   XREF to: 00508f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00508f40()
    ADD ESP,0x4                         ; 0050a45d
    ADD EAX,0x207d4                     ; 0050a460
    PUSH EAX                            ; 0050a465
    MOV ESI,0x5cb6a5                    ; 0050a466
    CALL FUN_004fa8a0                   ; 0050a46b
        ;   XREF to: 004fa8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa8a0()
    LEA EBX,[EAX + 0xfffdf82c]          ; 0050a470
    ADD ESP,0x4                         ; 0050a476
    LEA EDI,[EBX + 0x2072c]             ; 0050a479
    MOV dword ptr [EBX + 0x154],0x5e2fe4 ; 0050a47f
    PUSH EDI                            ; 0050a489
    MOV AL,byte ptr [ESI]               ; 0050a48a
        ;   Label: LAB_0050a48a
    MOV byte ptr [EDI],AL               ; 0050a48c
    CMP AL,0x0                          ; 0050a48e
    JZ 0x0050a4a2                       ; 0050a490
        ;   XREF to: 0050a4a2 (CONDITIONAL_JUMP)  ; LAB_0050a4a2
    MOV AL,byte ptr [ESI + 0x1]         ; 0050a492
    ADD ESI,0x2                         ; 0050a495
    MOV byte ptr [EDI + 0x1],AL         ; 0050a498
    ADD EDI,0x2                         ; 0050a49b
    CMP AL,0x0                          ; 0050a49e
    JNZ 0x0050a48a                      ; 0050a4a0
        ;   XREF to: 0050a48a (CONDITIONAL_JUMP)  ; LAB_0050a48a
    POP EDI                             ; 0050a4a2
        ;   Label: LAB_0050a4a2
    MOV ESI,0x5cb6b1                    ; 0050a4a3
    LEA EDI,[EBX + 0x206c8]             ; 0050a4a8
    PUSH EDI                            ; 0050a4ae
    MOV AL,byte ptr [ESI]               ; 0050a4af
        ;   Label: LAB_0050a4af
    MOV byte ptr [EDI],AL               ; 0050a4b1
    CMP AL,0x0                          ; 0050a4b3
    JZ 0x0050a4c7                       ; 0050a4b5
        ;   XREF to: 0050a4c7 (CONDITIONAL_JUMP)  ; LAB_0050a4c7
    MOV AL,byte ptr [ESI + 0x1]         ; 0050a4b7
    ADD ESI,0x2                         ; 0050a4ba
    MOV byte ptr [EDI + 0x1],AL         ; 0050a4bd
    ADD EDI,0x2                         ; 0050a4c0
    CMP AL,0x0                          ; 0050a4c3
    JNZ 0x0050a4af                      ; 0050a4c5
        ;   XREF to: 0050a4af (CONDITIONAL_JUMP)  ; LAB_0050a4af
    POP EDI                             ; 0050a4c7
        ;   Label: LAB_0050a4c7
    PUSH 0x5cb6b7                       ; 0050a4c8
    LEA EAX,[EBX + 0x158]               ; 0050a4cd
    PUSH EAX                            ; 0050a4d3
    MOV ESI,0x5cb6c4                    ; 0050a4d4
    MOV dword ptr [EBX + 0x207d0],0x0   ; 0050a4d9
    CALL FUN_0054eae0                   ; 0050a4e3
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    ADD ESP,0x8                         ; 0050a4e8
    LEA EDI,[EBX + 0x2074c]             ; 0050a4eb
    MOV dword ptr [EBX + 0x21404],0x3f800000 ; 0050a4f1
    PUSH EDI                            ; 0050a4fb
    MOV AL,byte ptr [ESI]               ; 0050a4fc
        ;   Label: LAB_0050a4fc
    MOV byte ptr [EDI],AL               ; 0050a4fe
    CMP AL,0x0                          ; 0050a500
    JZ 0x0050a514                       ; 0050a502
        ;   XREF to: 0050a514 (CONDITIONAL_JUMP)  ; LAB_0050a514
    MOV AL,byte ptr [ESI + 0x1]         ; 0050a504
    ADD ESI,0x2                         ; 0050a507
    MOV byte ptr [EDI + 0x1],AL         ; 0050a50a
    ADD EDI,0x2                         ; 0050a50d
    CMP AL,0x0                          ; 0050a510
    JNZ 0x0050a4fc                      ; 0050a512
        ;   XREF to: 0050a4fc (CONDITIONAL_JUMP)  ; LAB_0050a4fc
    POP EDI                             ; 0050a514
        ;   Label: LAB_0050a514
    MOV EAX,EBX                         ; 0050a515
    MOV byte ptr [EBX + 0x2076c],0x0    ; 0050a517
    POP EDI                             ; 0050a51e
    POP ESI                             ; 0050a51f
    POP EBX                             ; 0050a520
    RET                                 ; 0050a521

