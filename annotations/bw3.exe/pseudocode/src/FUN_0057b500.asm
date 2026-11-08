; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057b500(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   FUN_0045b870
;   FUN_0057ba10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b500
        ;   Label: FUN_0057b500
    PUSH ESI                            ; 0057b501
    PUSH EDI                            ; 0057b502
    PUSH EBP                            ; 0057b503
    SUB ESP,0x18                        ; 0057b504
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0057b507
    MOV EBP,dword ptr [ESP + 0x30]      ; 0057b50b
    PUSH EBX                            ; 0057b50f
    MOV dword ptr [EBX + 0x304],0x0     ; 0057b510
    CALL FUN_0057ba10                   ; 0057b51a
        ;   XREF to: 0057ba10 (UNCONDITIONAL_CALL)  ; undefined FUN_0057ba10()
    ADD ESP,0x4                         ; 0057b51f
    TEST EBP,EBP                        ; 0057b522
    JNZ 0x0057b54a                      ; 0057b524
        ;   XREF to: 0057b54a (CONDITIONAL_JUMP)  ; LAB_0057b54a
    PUSH 0x0                            ; 0057b526
        ;   Label: LAB_0057b526
    MOV EAX,dword ptr [EBX + 0x154]     ; 0057b528
    PUSH EBX                            ; 0057b52e
    CALL dword ptr [EAX + 0xdc]         ; 0057b52f
    ADD ESP,0x8                         ; 0057b535
    MOV dword ptr [EBX + 0x580],0x40a00000 ; 0057b538
    ADD ESP,0x18                        ; 0057b542
    POP EBP                             ; 0057b545
    POP EDI                             ; 0057b546
    POP ESI                             ; 0057b547
    POP EBX                             ; 0057b548
    RET                                 ; 0057b549
    PUSH EBP                            ; 0057b54a
        ;   Label: LAB_0057b54a
    LEA EAX,[EBX + 0x320]               ; 0057b54b
    PUSH EAX                            ; 0057b551
    LEA ESI,[ESP + 0x14]                ; 0057b552
    LEA EDI,[ESP + 0x8]                 ; 0057b556
    CALL FUN_0045b870                   ; 0057b55a
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b870()
    LEA ESI,[ESP + 0x14]                ; 0057b55f
    LEA EAX,[ESP + 0x8]                 ; 0057b563
    ADD ESP,0x8                         ; 0057b567
    LEA EDX,[EBX + 0x354]               ; 0057b56a
    MOVSD ES:EDI,ESI                    ; 0057b570
    MOVSD ES:EDI,ESI                    ; 0057b571
    MOVSD ES:EDI,ESI                    ; 0057b572
    CMP EDX,EAX                         ; 0057b573
    JZ 0x0057b58a                       ; 0057b575
        ;   XREF to: 0057b58a (CONDITIONAL_JUMP)  ; LAB_0057b58a
    MOV EAX,dword ptr [ESP]             ; 0057b577
    MOV dword ptr [EDX],EAX             ; 0057b57a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0057b57c
    MOV dword ptr [EDX + 0x4],EAX       ; 0057b580
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057b583
    MOV dword ptr [EDX + 0x8],EAX       ; 0057b587
    LEA EAX,[EBX + 0x348]               ; 0057b58a
        ;   Label: LAB_0057b58a
    CMP EAX,EBP                         ; 0057b590
    JZ 0x0057b526                       ; 0057b592
        ;   XREF to: 0057b526 (CONDITIONAL_JUMP)  ; LAB_0057b526
    MOV EDX,dword ptr [EBP]             ; 0057b594
    MOV dword ptr [EAX],EDX             ; 0057b597
    MOV EDX,dword ptr [EBP + 0x4]       ; 0057b599
    MOV dword ptr [EAX + 0x4],EDX       ; 0057b59c
    MOV EDX,dword ptr [EBP + 0x8]       ; 0057b59f
    MOV dword ptr [EAX + 0x8],EDX       ; 0057b5a2
    JMP 0x0057b526                      ; 0057b5a5
        ;   XREF to: 0057b526 (UNCONDITIONAL_JUMP)  ; LAB_0057b526

