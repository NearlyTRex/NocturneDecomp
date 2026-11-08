; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c0a80(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6)
;
;
; XREF[1]:
;   FUN_004c2810 at 004c2a7e
;
; Referenced Globals:
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0a80
        ;   Label: FUN_004c0a80
    PUSH ESI                            ; 004c0a81
    PUSH EDI                            ; 004c0a82
    PUSH EBP                            ; 004c0a83
    MOV ESI,dword ptr [0x01c4f00c]      ; 004c0a84 | DAT_01c4f00c
    MOV EDI,dword ptr [0x01c4f008]      ; 004c0a8a | DAT_01c4f008
    MOV EBX,dword ptr [ESP + 0x14]      ; 004c0a90
    MOV ECX,dword ptr [ESP + 0x18]      ; 004c0a94
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004c0a98
    MOV EBP,dword ptr [ESP + 0x24]      ; 004c0a9c
    MOV EAX,dword ptr [ECX]             ; 004c0aa0
    CMP EAX,EDI                         ; 004c0aa2
    JGE 0x004c0abc                      ; 004c0aa4
        ;   XREF to: 004c0abc (CONDITIONAL_JUMP)  ; LAB_004c0abc
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c0aa6
    MOV EAX,dword ptr [EAX]             ; 004c0aaa
    CMP EAX,EDI                         ; 004c0aac
    JL 0x004c0b1d                       ; 004c0aae
        ;   XREF to: 004c0b1d (CONDITIONAL_JUMP)  ; LAB_004c0b1d
    MOV EAX,EDI                         ; 004c0ab4
    SUB EAX,dword ptr [ECX]             ; 004c0ab6
    ADD dword ptr [EBX],EAX             ; 004c0ab8
    MOV dword ptr [ECX],EDI             ; 004c0aba
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c0abc
        ;   Label: LAB_004c0abc
    MOV EAX,dword ptr [EAX]             ; 004c0ac0
    CMP EAX,dword ptr [0x01c4f010]      ; 004c0ac2 | DAT_01c4f010
    JLE 0x004c0ade                      ; 004c0ac8
        ;   XREF to: 004c0ade (CONDITIONAL_JUMP)  ; LAB_004c0ade
    MOV EAX,dword ptr [ECX]             ; 004c0aca
    MOV ECX,dword ptr [0x01c4f010]      ; 004c0acc | DAT_01c4f010
    CMP EAX,ECX                         ; 004c0ad2
    JG 0x004c0b1d                       ; 004c0ad4
        ;   XREF to: 004c0b1d (CONDITIONAL_JUMP)  ; LAB_004c0b1d
    MOV EAX,ECX                         ; 004c0ad6
    MOV ECX,dword ptr [ESP + 0x20]      ; 004c0ad8
    MOV dword ptr [ECX],EAX             ; 004c0adc
    MOV EAX,dword ptr [EDX]             ; 004c0ade
        ;   Label: LAB_004c0ade
    CMP EAX,ESI                         ; 004c0ae0
    JGE 0x004c0af8                      ; 004c0ae2
        ;   XREF to: 004c0af8 (CONDITIONAL_JUMP)  ; LAB_004c0af8
    MOV EAX,dword ptr [EBP]             ; 004c0ae4
    CMP EAX,ESI                         ; 004c0ae7
    JL 0x004c0b1d                       ; 004c0ae9
        ;   XREF to: 004c0b1d (CONDITIONAL_JUMP)  ; LAB_004c0b1d
    MOV EAX,ESI                         ; 004c0aeb
    SUB EAX,dword ptr [EDX]             ; 004c0aed
    IMUL EAX,dword ptr [ESP + 0x28]     ; 004c0aef
    ADD dword ptr [EBX],EAX             ; 004c0af4
    MOV dword ptr [EDX],ESI             ; 004c0af6
    MOV EBX,dword ptr [0x01c4f014]      ; 004c0af8 | DAT_01c4f014
        ;   Label: LAB_004c0af8
    CMP EBX,dword ptr [EBP]             ; 004c0afe
    JGE 0x004c0b0a                      ; 004c0b01
        ;   XREF to: 004c0b0a (CONDITIONAL_JUMP)  ; LAB_004c0b0a
    CMP EBX,dword ptr [EDX]             ; 004c0b03
    JL 0x004c0b1d                       ; 004c0b05
        ;   XREF to: 004c0b1d (CONDITIONAL_JUMP)  ; LAB_004c0b1d
    MOV dword ptr [EBP],EBX             ; 004c0b07
    XOR EAX,EAX                         ; 004c0b0a
        ;   Label: LAB_004c0b0a
    MOV dword ptr [0x01c4f008],EDI      ; 004c0b0c | DAT_01c4f008
    MOV dword ptr [0x01c4f00c],ESI      ; 004c0b12 | DAT_01c4f00c
    POP EBP                             ; 004c0b18
    POP EDI                             ; 004c0b19
    POP ESI                             ; 004c0b1a
    POP EBX                             ; 004c0b1b
    RET                                 ; 004c0b1c
    MOV EAX,0x1                         ; 004c0b1d
        ;   Label: LAB_004c0b1d
    MOV dword ptr [0x01c4f008],EDI      ; 004c0b22 | DAT_01c4f008
    MOV dword ptr [0x01c4f00c],ESI      ; 004c0b28 | DAT_01c4f00c
    POP EBP                             ; 004c0b2e
    POP EDI                             ; 004c0b2f
    POP ESI                             ; 004c0b30
    POP EBX                             ; 004c0b31
    RET                                 ; 004c0b32

