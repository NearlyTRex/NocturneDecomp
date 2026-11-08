; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d1760(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00622c18
;   undefined4 DAT_01cd0c64
;
; Called Functions:
;   FUN_0054f0d0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004d1760
        ;   Label: FUN_004d1760
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d1761
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d1765
    CMP EDX,dword ptr [ECX + 0x25c]     ; 004d1769
    JZ 0x004d177d                       ; 004d176f
        ;   XREF to: 004d177d (CONDITIONAL_JUMP)  ; LAB_004d177d
    TEST EDX,EDX                        ; 004d1771
    JNZ 0x004d177f                      ; 004d1773
        ;   XREF to: 004d177f (CONDITIONAL_JUMP)  ; LAB_004d177f
    MOV dword ptr [ECX + 0x25c],EDX     ; 004d1775
    JZ 0x004d1799                       ; 004d177b
        ;   XREF to: 004d1799 (CONDITIONAL_JUMP)  ; LAB_004d1799
    POP EBP                             ; 004d177d
        ;   Label: LAB_004d177d
    RET                                 ; 004d177e
    MOV EAX,[0x00622c18]                ; 004d177f | DAT_00622c18
        ;   Label: LAB_004d177f
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004d1784
    MOV [0x01cd0c64],EAX                ; 004d178a | DAT_01cd0c64
    MOV dword ptr [ECX + 0x25c],EDX     ; 004d178f
    JZ 0x004d1799                       ; 004d1795
        ;   XREF to: 004d1799 (CONDITIONAL_JUMP)  ; LAB_004d1799
    POP EBP                             ; 004d1797
    RET                                 ; 004d1798
    PUSH EDI                            ; 004d1799
        ;   Label: LAB_004d1799
    MOV EDI,dword ptr [0x01cd0c64]      ; 004d179a | DAT_01cd0c64
    PUSH EDI                            ; 004d17a0
    MOV EBP,dword ptr [0x00622c18]      ; 004d17a1 | DAT_00622c18
    PUSH EBP                            ; 004d17a7
    CALL FUN_0054f0d0                   ; 004d17a8
        ;   XREF to: 0054f0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054f0d0()
    ADD ESP,0x8                         ; 004d17ad
    POP EDI                             ; 004d17b0
    POP EBP                             ; 004d17b1
    RET                                 ; 004d17b2

