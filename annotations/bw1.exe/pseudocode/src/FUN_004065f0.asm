; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004065f0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_0061b4b8
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   FUN_00403920
;   FUN_004039d0
;   FUN_0043cbf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004065f0
        ;   Label: FUN_004065f0
    PUSH ESI                            ; 004065f1
    PUSH EBP                            ; 004065f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004065f3
    LEA ESI,[EBX + 0x18]                ; 004065f7
    LEA EAX,[EBX + 0x8]                 ; 004065fa
    PUSH EAX                            ; 004065fd
    CALL FUN_00403920                   ; 004065fe
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 00406603
    TEST EAX,EAX                        ; 00406606
    JZ 0x00406670                       ; 00406608
        ;   XREF to: 00406670 (CONDITIONAL_JUMP)  ; LAB_00406670
    CMP dword ptr [0x01c51d00],0x0      ; 0040660a | DAT_01c51d00
    JNZ 0x0040668b                      ; 00406611
        ;   XREF to: 0040668b (CONDITIONAL_JUMP)  ; LAB_0040668b
    CMP dword ptr [0x0061b4a0],0x20     ; 00406617 | DAT_0061b4a0
    JNZ 0x0040667f                      ; 0040661e
        ;   XREF to: 0040667f (CONDITIONAL_JUMP)  ; LAB_0040667f
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00406620 | DAT_01c4f02c
    PUSH EDI                            ; 0040662a
        ;   Label: LAB_0040662a
    MOV EDI,0xc3                        ; 0040662b
    MOV EBP,dword ptr [0x0061b4b8]      ; 00406630 | DAT_0061b4b8
    MOV dword ptr [0x01c51d14],EDI      ; 00406636 | DAT_01c51d14
    CMP EBP,0xff                        ; 0040663c
    JGE 0x0040664e                      ; 00406642
        ;   XREF to: 0040664e (CONDITIONAL_JUMP)  ; LAB_0040664e
    MOV dword ptr [0x01c51d14],0xe3     ; 00406644 | DAT_01c51d14
    MOV EDX,0x1                         ; 0040664e
        ;   Label: LAB_0040664e
    PUSH EBX                            ; 00406653
    MOV dword ptr [0x01c51d18],EDX      ; 00406654 | DAT_01c51d18
    CALL FUN_004039d0                   ; 0040665a
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004039d0()
    ADD ESP,0x4                         ; 0040665f
    PUSH ESI                            ; 00406662
    MOV ECX,dword ptr [EBX + 0x4]       ; 00406663
    PUSH ECX                            ; 00406666
    CALL FUN_0043cbf0                   ; 00406667
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043cbf0()
    ADD ESP,0x8                         ; 0040666c
    POP EDI                             ; 0040666f
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406670
        ;   Label: LAB_00406670
    LEA EAX,[EBX + 0x18]                ; 00406673
    SHL ESI,0x2                         ; 00406676
    ADD EAX,ESI                         ; 00406679
    POP EBP                             ; 0040667b
    POP ESI                             ; 0040667c
    POP EBX                             ; 0040667d
    RET                                 ; 0040667e
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 0040667f | DAT_01c4f02c
        ;   Label: LAB_0040667f
    JMP 0x0040662a                      ; 00406689
        ;   XREF to: 0040662a (UNCONDITIONAL_JUMP)  ; LAB_0040662a
    CMP dword ptr [0x0061b4a0],0x20     ; 0040668b | DAT_0061b4a0
        ;   Label: LAB_0040668b
    JNZ 0x004066a0                      ; 00406692
        ;   XREF to: 004066a0 (CONDITIONAL_JUMP)  ; LAB_004066a0
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00406694 | DAT_01c4f02c | LAB_0057de01
    JMP 0x0040662a                      ; 0040669e
        ;   XREF to: 0040662a (UNCONDITIONAL_JUMP)  ; LAB_0040662a
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 004066a0 | DAT_01c4f02c | LAB_0057e5e3
        ;   Label: LAB_004066a0
    JMP 0x0040662a                      ; 004066aa
        ;   XREF to: 0040662a (UNCONDITIONAL_JUMP)  ; LAB_0040662a

