; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0057a740(int *param_1)
;
;
; XREF[1]:
;   FUN_0057b410 at 0057b418
;
; Referenced Globals:
;   void* PTR_waveOutClose_005d047c = 001d09ce
;   void* PTR_GlobalFree_005d05e0 = 001d0fd8
;   TerminatedCString s_waveOutClose_failed_005f5758
;   undefined4 DAT_02c82840
;
; Called Functions:
;   FUN_005773f0
;   GlobalFree
;   waveOutClose
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a740
        ;   Label: FUN_0057a740
    PUSH ESI                            ; 0057a741
    PUSH EDI                            ; 0057a742
    PUSH EBP                            ; 0057a743
    MOV EBX,dword ptr [ESP + 0x14]      ; 0057a744
    PUSH EBX                            ; 0057a748
    MOV EAX,dword ptr [EBX]             ; 0057a749
    MOV ESI,0x1                         ; 0057a74b
    CALL dword ptr [EAX + 0x8]          ; 0057a750
    ADD ESP,0x4                         ; 0057a753
    TEST EAX,EAX                        ; 0057a756
    JZ 0x0057a7b3                       ; 0057a758
        ;   XREF to: 0057a7b3 (CONDITIONAL_JUMP)  ; LAB_0057a7b3
    XOR EBX,EBX                         ; 0057a75a
        ;   Label: LAB_0057a75a
    XOR EDI,EDI                         ; 0057a75c
    MOV EDX,dword ptr [EBX + 0x2c82884] ; 0057a75e
        ;   Label: LAB_0057a75e
    CMP EDI,EDX                         ; 0057a764
    JZ 0x0057a776                       ; 0057a766
        ;   XREF to: 0057a776 (CONDITIONAL_JUMP)  ; LAB_0057a776
    PUSH EDX                            ; 0057a768
    CALL dword ptr CS:[0x5d05e0]        ; 0057a769 | PTR_GlobalFree_005d05e0
    MOV dword ptr [EBX + 0x2c82884],EDI ; 0057a770
    MOV EBP,dword ptr [EBX + 0x2c82844] ; 0057a776
        ;   Label: LAB_0057a776
    MOV dword ptr [EBX + 0x2c828a4],EDI ; 0057a77c
    CMP EDI,EBP                         ; 0057a782
    JZ 0x0057a794                       ; 0057a784
        ;   XREF to: 0057a794 (CONDITIONAL_JUMP)  ; LAB_0057a794
    PUSH EBP                            ; 0057a786
    CALL dword ptr CS:[0x5d05e0]        ; 0057a787 | PTR_GlobalFree_005d05e0
    MOV dword ptr [EBX + 0x2c82844],EDI ; 0057a78e
    ADD EBX,0x4                         ; 0057a794
        ;   Label: LAB_0057a794
    MOV dword ptr [EBX + 0x2c82860],EDI ; 0057a797
    CMP EBX,0x20                        ; 0057a79d
    JNZ 0x0057a75e                      ; 0057a7a0
        ;   XREF to: 0057a75e (CONDITIONAL_JUMP)  ; LAB_0057a75e
    MOV EDX,dword ptr [0x02c82840]      ; 0057a7a2 | DAT_02c82840
    TEST EDX,EDX                        ; 0057a7a8
    JNZ 0x0057a7b7                      ; 0057a7aa
        ;   XREF to: 0057a7b7 (CONDITIONAL_JUMP)  ; LAB_0057a7b7
    MOV EAX,ESI                         ; 0057a7ac
    POP EBP                             ; 0057a7ae
    POP EDI                             ; 0057a7af
    POP ESI                             ; 0057a7b0
    POP EBX                             ; 0057a7b1
    RET                                 ; 0057a7b2
    XOR ESI,ESI                         ; 0057a7b3
        ;   Label: LAB_0057a7b3
    JMP 0x0057a75a                      ; 0057a7b5
        ;   XREF to: 0057a75a (UNCONDITIONAL_JUMP)  ; LAB_0057a75a
    PUSH EDX                            ; 0057a7b7
        ;   Label: LAB_0057a7b7
    CALL dword ptr CS:[0x5d047c]        ; 0057a7b8 | PTR_waveOutClose_005d047c
    TEST EAX,EAX                        ; 0057a7bf
    JZ 0x0057a7d2                       ; 0057a7c1
        ;   XREF to: 0057a7d2 (CONDITIONAL_JUMP)  ; LAB_0057a7d2
    PUSH 0x5f5758                       ; 0057a7c3 | = "waveOutClose failed."
    CALL FUN_005773f0                   ; 0057a7c8
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    XOR ESI,ESI                         ; 0057a7cd
    ADD ESP,0x4                         ; 0057a7cf
    XOR EBX,EBX                         ; 0057a7d2
        ;   Label: LAB_0057a7d2
    MOV dword ptr [0x02c82840],EBX      ; 0057a7d4 | DAT_02c82840
    MOV EAX,ESI                         ; 0057a7da
    POP EBP                             ; 0057a7dc
    POP EDI                             ; 0057a7dd
    POP ESI                             ; 0057a7de
    POP EBX                             ; 0057a7df
    RET                                 ; 0057a7e0

