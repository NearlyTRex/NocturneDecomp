; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00438550(int param_1)
;
;
; Called Functions:
;   FUN_00518280
;   FUN_00594380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438550
        ;   Label: FUN_00438550
    PUSH ESI                            ; 00438551
    PUSH EDI                            ; 00438552
    SUB ESP,0x10                        ; 00438553
    MOV EBX,dword ptr [ESP + 0x20]      ; 00438556
    LEA EAX,[EBX + 0x484]               ; 0043855a
    LEA EDX,[EBX + 0x20]                ; 00438560
    MOV ECX,EAX                         ; 00438563
    CMP EAX,EDX                         ; 00438565
    JNZ 0x004385cb                      ; 00438567
        ;   XREF to: 004385cb (CONDITIONAL_JUMP)  ; LAB_004385cb
    LEA EAX,[EBX + 0x478]               ; 00438569
        ;   Label: LAB_00438569
    CMP EAX,ECX                         ; 0043856f
    JZ 0x00438583                       ; 00438571
        ;   XREF to: 00438583 (CONDITIONAL_JUMP)  ; LAB_00438583
    MOV EDX,dword ptr [ECX]             ; 00438573
    MOV dword ptr [EAX],EDX             ; 00438575
    MOV EDX,dword ptr [ECX + 0x4]       ; 00438577
    MOV dword ptr [EAX + 0x4],EDX       ; 0043857a
    MOV EDX,dword ptr [ECX + 0x8]       ; 0043857d
    MOV dword ptr [EAX + 0x8],EDX       ; 00438580
    LEA EAX,[EBX + 0x30]                ; 00438583
        ;   Label: LAB_00438583
    PUSH EAX                            ; 00438586
    LEA ESI,[ESP + 0x4]                 ; 00438587
    CALL FUN_00594380                   ; 0043858b
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; undefined FUN_00594380()
    LEA ESI,[ESP + 0x4]                 ; 00438590
    LEA EDI,[EBX + 0x4a0]               ; 00438594
    ADD ESP,0x4                         ; 0043859a
    MOVSD ES:EDI,ESI                    ; 0043859d
    MOVSD ES:EDI,ESI                    ; 0043859e
    MOVSD ES:EDI,ESI                    ; 0043859f
    MOVSD ES:EDI,ESI                    ; 004385a0
    LEA EDI,[EBX + 0x490]               ; 004385a1
    LEA ESI,[EBX + 0x4a0]               ; 004385a7
    PUSH EBX                            ; 004385ad
    MOVSD ES:EDI,ESI                    ; 004385ae
    MOVSD ES:EDI,ESI                    ; 004385af
    MOVSD ES:EDI,ESI                    ; 004385b0
    MOVSD ES:EDI,ESI                    ; 004385b1
    CALL FUN_00518280                   ; 004385b2
        ;   XREF to: 00518280 (UNCONDITIONAL_CALL)  ; undefined FUN_00518280()
    ADD ESP,0x4                         ; 004385b7
    MOV dword ptr [EBX + 0xfc],0x1      ; 004385ba
    ADD ESP,0x10                        ; 004385c4
    POP EDI                             ; 004385c7
    POP ESI                             ; 004385c8
    POP EBX                             ; 004385c9
    RET                                 ; 004385ca
    MOV ESI,dword ptr [EDX]             ; 004385cb
        ;   Label: LAB_004385cb
    MOV dword ptr [EAX],ESI             ; 004385cd
    MOV ESI,dword ptr [EDX + 0x4]       ; 004385cf
    MOV dword ptr [EAX + 0x4],ESI       ; 004385d2
    MOV ESI,dword ptr [EDX + 0x8]       ; 004385d5
    MOV dword ptr [EAX + 0x8],ESI       ; 004385d8
    JMP 0x00438569                      ; 004385db
        ;   XREF to: 00438569 (UNCONDITIONAL_JUMP)  ; LAB_00438569

