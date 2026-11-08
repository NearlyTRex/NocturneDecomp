; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bb630(int param_1)
;
;
; XREF[3]:
;   FUN_004bb2f0 at 004bb4fe
;   FUN_004bb6f0 at 004bb72b
;   FUN_004bbad0 at 004bbb07
;
; Called Functions:
;   FUN_004bb570
;   FUN_004bb6c0
;   FUN_004c4510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb630
        ;   Label: FUN_004bb630
    PUSH ESI                            ; 004bb631
    PUSH EDI                            ; 004bb632
    PUSH EBP                            ; 004bb633
    MOV EBX,dword ptr [ESP + 0x14]      ; 004bb634
    PUSH EBX                            ; 004bb638
    CALL FUN_004bb570                   ; 004bb639
        ;   XREF to: 004bb570 (UNCONDITIONAL_CALL)  ; undefined FUN_004bb570()
    ADD ESP,0x4                         ; 004bb63e
    PUSH 0x6a                           ; 004bb641
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004bb643
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004bb646
    PUSH EDX                            ; 004bb649
    MOV dword ptr [EBX + 0x14],EAX      ; 004bb64a
    CALL FUN_004c4510                   ; 004bb64d
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; undefined FUN_004c4510()
    MOV ECX,dword ptr [EBX + 0x2c]      ; 004bb652
    LEA EDX,[EBX + 0x18]                ; 004bb655
    MOV ECX,dword ptr [ECX + 0x41f8]    ; 004bb658
    MOV EDI,EAX                         ; 004bb65e
    ADD EAX,ECX                         ; 004bb660
    MOV ECX,dword ptr [EDX]             ; 004bb662
    ADD ECX,EAX                         ; 004bb664
    ADD ESP,0x8                         ; 004bb666
    MOV dword ptr [EDX],ECX             ; 004bb669
    XOR EDX,EDX                         ; 004bb66b
    XOR ECX,ECX                         ; 004bb66d
    IMUL ESI,dword ptr [EBX + 0x10],0x144 ; 004bb66f
        ;   Label: LAB_004bb66f
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004bb676
    ADD EAX,ESI                         ; 004bb679
    CMP EDX,dword ptr [EAX]             ; 004bb67b
    JGE 0x004bb69d                      ; 004bb67d
        ;   XREF to: 004bb69d (CONDITIONAL_JUMP)  ; LAB_004bb69d
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x4] ; 004bb67f
    MOV EAX,dword ptr [ESI + 0x4]       ; 004bb683
    MOV EBP,dword ptr [ESI + 0xc]       ; 004bb686
    MOV ESI,dword ptr [EBX + 0x18]      ; 004bb689
    ADD EAX,EBP                         ; 004bb68c
    CMP EAX,ESI                         ; 004bb68e
    JG 0x004bb698                       ; 004bb690
        ;   XREF to: 004bb698 (CONDITIONAL_JUMP)  ; LAB_004bb698
    INC EDX                             ; 004bb692
        ;   Label: LAB_004bb692
    ADD ECX,0x4                         ; 004bb693
    JMP 0x004bb66f                      ; 004bb696
        ;   XREF to: 004bb66f (UNCONDITIONAL_JUMP)  ; LAB_004bb66f
    MOV dword ptr [EBX + 0x18],EAX      ; 004bb698
        ;   Label: LAB_004bb698
    JMP 0x004bb692                      ; 004bb69b
        ;   XREF to: 004bb692 (UNCONDITIONAL_JUMP)  ; LAB_004bb692
    MOV EBP,dword ptr [EBX + 0x18]      ; 004bb69d
        ;   Label: LAB_004bb69d
    MOV EAX,dword ptr [EBX + 0x28]      ; 004bb6a0
    ADD EDI,EBP                         ; 004bb6a3
    CMP EDI,EAX                         ; 004bb6a5
    JG 0x004bb6ae                       ; 004bb6a7
        ;   XREF to: 004bb6ae (CONDITIONAL_JUMP)  ; LAB_004bb6ae
    POP EBP                             ; 004bb6a9
    POP EDI                             ; 004bb6aa
    POP ESI                             ; 004bb6ab
    POP EBX                             ; 004bb6ac
    RET                                 ; 004bb6ad
    PUSH EBX                            ; 004bb6ae
        ;   Label: LAB_004bb6ae
    CALL FUN_004bb6c0                   ; 004bb6af
        ;   XREF to: 004bb6c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bb6c0()
    ADD ESP,0x4                         ; 004bb6b4
    POP EBP                             ; 004bb6b7
    POP EDI                             ; 004bb6b8
    POP ESI                             ; 004bb6b9
    POP EBX                             ; 004bb6ba
    RET                                 ; 004bb6bb

