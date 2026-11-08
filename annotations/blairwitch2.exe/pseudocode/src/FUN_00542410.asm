; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00542410(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   FUN_0046b920
;   FUN_0046b970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542410
        ;   Label: FUN_00542410
    PUSH ESI                            ; 00542411
    PUSH EDI                            ; 00542412
    PUSH EBP                            ; 00542413
    MOV EBP,dword ptr [ESP + 0x18]      ; 00542414
    XOR EDI,EDI                         ; 00542418
    XOR ESI,ESI                         ; 0054241a
    SHL EBP,0x2                         ; 0054241c
    MOV EBX,dword ptr [ESP + 0x14]      ; 0054241f
        ;   Label: LAB_0054241f
    ADD EBX,EBP                         ; 00542423
    CMP ESI,dword ptr [EBX + 0x54]      ; 00542425
    JL 0x00542440                       ; 00542428
        ;   XREF to: 00542440 (CONDITIONAL_JUMP)  ; LAB_00542440
    PUSH 0x1                            ; 0054242a
    MOV ECX,dword ptr [0x0060b280]      ; 0054242c | DAT_0060b280
    PUSH ECX                            ; 00542432
    CALL FUN_0046b920                   ; 00542433
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b920()
    ADD ESP,0x8                         ; 00542438
    POP EBP                             ; 0054243b
    POP EDI                             ; 0054243c
    POP ESI                             ; 0054243d
    POP EBX                             ; 0054243e
    RET                                 ; 0054243f
    MOV EBX,dword ptr [EBX + 0x7c]      ; 00542440
        ;   Label: LAB_00542440
    XOR EAX,EAX                         ; 00542443
    MOV AX,word ptr [EDI + EBX*0x1 + 0x2] ; 00542445
    PUSH EAX                            ; 0054244a
    XOR EAX,EAX                         ; 0054244b
    MOV AX,word ptr [EDI + EBX*0x1]     ; 0054244d
    PUSH EAX                            ; 00542451
    MOV ECX,dword ptr [0x0060b280]      ; 00542452 | DAT_0060b280
    PUSH ECX                            ; 00542458
    CALL FUN_0046b970                   ; 00542459
        ;   XREF to: 0046b970 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b970()
    XOR EAX,EAX                         ; 0054245e
    ADD ESP,0xc                         ; 00542460
    MOV AX,word ptr [EDI + EBX*0x1 + 0x4] ; 00542463
    PUSH EAX                            ; 00542468
    XOR EAX,EAX                         ; 00542469
    MOV AX,word ptr [EDI + EBX*0x1 + 0x2] ; 0054246b
    PUSH EAX                            ; 00542470
    MOV EAX,[0x0060b280]                ; 00542471 | DAT_0060b280
    PUSH EAX                            ; 00542476
    CALL FUN_0046b970                   ; 00542477
        ;   XREF to: 0046b970 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b970()
    XOR EAX,EAX                         ; 0054247c
    ADD ESP,0xc                         ; 0054247e
    MOV AX,word ptr [EDI + EBX*0x1]     ; 00542481
    PUSH EAX                            ; 00542485
    XOR EAX,EAX                         ; 00542486
    MOV AX,word ptr [EDI + EBX*0x1 + 0x4] ; 00542488
    PUSH EAX                            ; 0054248d
    MOV EDX,dword ptr [0x0060b280]      ; 0054248e | DAT_0060b280
    PUSH EDX                            ; 00542494
    ADD EDI,0x12                        ; 00542495
    INC ESI                             ; 00542498
    CALL FUN_0046b970                   ; 00542499
        ;   XREF to: 0046b970 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b970()
    ADD ESP,0xc                         ; 0054249e
    JMP 0x0054241f                      ; 005424a1
        ;   XREF to: 0054241f (UNCONDITIONAL_JUMP)  ; LAB_0054241f

