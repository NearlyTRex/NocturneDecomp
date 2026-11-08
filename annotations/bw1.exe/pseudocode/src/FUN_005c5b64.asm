; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005c5b64(int param_1,int *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_005c5450 at 005c5664
;
; Referenced Globals:
;   undefined4 DAT_00626648
;
; Called Functions:
;   FUN_005c5430
;   FUN_005c543c
;   FUN_005c5b1c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5b64
        ;   Label: FUN_005c5b64
    PUSH ESI                            ; 005c5b65
    PUSH EDI                            ; 005c5b66
    PUSH ES                             ; 005c5b67
    PUSH EBP                            ; 005c5b68
    SUB ESP,0x2c                        ; 005c5b69
    MOV EBX,dword ptr [ESP + 0x44]      ; 005c5b6c
    MOV EDI,dword ptr [ESP + 0x48]      ; 005c5b70
    MOV EBP,dword ptr [ESP + 0x4c]      ; 005c5b74
    MOV EAX,dword ptr [EBP]             ; 005c5b78
    CMP byte ptr [EAX],0x5e             ; 005c5b7b
    SETZ DL                             ; 005c5b7e
    AND EDX,0xff                        ; 005c5b81
    MOV dword ptr [ESP + 0x24],EDX      ; 005c5b87
    JZ 0x005c5b91                       ; 005c5b8b
        ;   XREF to: 005c5b91 (CONDITIONAL_JUMP)  ; LAB_005c5b91
    INC EAX                             ; 005c5b8d
    MOV dword ptr [EBP],EAX             ; 005c5b8e
    MOV EAX,ESP                         ; 005c5b91
        ;   Label: LAB_005c5b91
    PUSH EAX                            ; 005c5b93
    MOV EDX,dword ptr [EBP]             ; 005c5b94
    PUSH EDX                            ; 005c5b97
    CALL FUN_005c5b1c                   ; 005c5b98
        ;   XREF to: 005c5b1c (UNCONDITIONAL_CALL)  ; undefined FUN_005c5b1c()
    MOV dword ptr [EBP],EAX             ; 005c5b9d
    MOV CL,byte ptr [EBX + 0x10]        ; 005c5ba0
    ADD ESP,0x8                         ; 005c5ba3
    TEST CL,0x1                         ; 005c5ba6
    JZ 0x005c5bdf                       ; 005c5ba9
        ;   XREF to: 005c5bdf (CONDITIONAL_JUMP)  ; LAB_005c5bdf
    TEST CL,0x4                         ; 005c5bab
    JZ 0x005c5bbc                       ; 005c5bae
        ;   XREF to: 005c5bbc (CONDITIONAL_JUMP)  ; LAB_005c5bbc
    MOV EBP,dword ptr [EDI]             ; 005c5bb0
    ADD EBP,0x8                         ; 005c5bb2
    MOV dword ptr [EDI],EBP             ; 005c5bb5
    LES ESI,[EBP + -0x8]                ; 005c5bb7
    JMP 0x005c5bdf                      ; 005c5bba
        ;   XREF to: 005c5bdf (UNCONDITIONAL_JUMP)  ; LAB_005c5bdf
    TEST CL,0x8                         ; 005c5bbc
        ;   Label: LAB_005c5bbc
    JZ 0x005c5bd1                       ; 005c5bbf
        ;   XREF to: 005c5bd1 (CONDITIONAL_JUMP)  ; LAB_005c5bd1
    MOV ESI,dword ptr [EDI]             ; 005c5bc1
    ADD ESI,0x4                         ; 005c5bc3
    MOV AX,DS                           ; 005c5bc6
    MOV dword ptr [EDI],ESI             ; 005c5bc8
    MOV ES,AX                           ; 005c5bca
    MOV ESI,dword ptr [ESI + -0x4]      ; 005c5bcc
    JMP 0x005c5bdf                      ; 005c5bcf
        ;   XREF to: 005c5bdf (UNCONDITIONAL_JUMP)  ; LAB_005c5bdf
    MOV ECX,dword ptr [EDI]             ; 005c5bd1
        ;   Label: LAB_005c5bd1
    ADD ECX,0x4                         ; 005c5bd3
    MOV AX,DS                           ; 005c5bd6
    MOV dword ptr [EDI],ECX             ; 005c5bd8
    MOV ES,AX                           ; 005c5bda
    MOV ESI,dword ptr [ECX + -0x4]      ; 005c5bdc
    MOV EDI,dword ptr [EBX + 0xc]       ; 005c5bdf
        ;   Label: LAB_005c5bdf
    XOR EBP,EBP                         ; 005c5be2
    TEST EDI,EDI                        ; 005c5be4
    JBE 0x005c5c5e                      ; 005c5be6
        ;   XREF to: 005c5c5e (CONDITIONAL_JUMP)  ; LAB_005c5c5e
    PUSH EBX                            ; 005c5bec
        ;   Label: LAB_005c5bec
    CALL FUN_005c5430                   ; 005c5bed
        ;   XREF to: 005c5430 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5430()
    ADD ESP,0x4                         ; 005c5bf2
    MOV DL,byte ptr [EBX + 0x10]        ; 005c5bf5
    MOV dword ptr [ESP + 0x28],EAX      ; 005c5bf8
    TEST DL,0x2                         ; 005c5bfc
    JNZ 0x005c5c5e                      ; 005c5bff
        ;   XREF to: 005c5c5e (CONDITIONAL_JUMP)  ; LAB_005c5c5e
    MOV EDX,EAX                         ; 005c5c01
    SAR EDX,0x3                         ; 005c5c03
    MOV DL,byte ptr [ESP + EDX*0x1]     ; 005c5c06
    AND EDX,0xff                        ; 005c5c09
    MOV dword ptr [ESP + 0x20],EDX      ; 005c5c0f
    MOV EDX,EAX                         ; 005c5c13
    AND EDX,0x7                         ; 005c5c15
    MOV DL,byte ptr [EDX + 0x626648]    ; 005c5c18 | DAT_00626648
    MOV ECX,dword ptr [ESP + 0x20]      ; 005c5c1e
    AND EDX,0xff                        ; 005c5c22
    TEST EDX,ECX                        ; 005c5c28
    SETZ DL                             ; 005c5c2a
    MOV ECX,dword ptr [ESP + 0x24]      ; 005c5c2d
    AND EDX,0xff                        ; 005c5c31
    CMP EDX,ECX                         ; 005c5c37
    JZ 0x005c5c47                       ; 005c5c39
        ;   XREF to: 005c5c47 (CONDITIONAL_JUMP)  ; LAB_005c5c47
    PUSH EBX                            ; 005c5c3b
    PUSH EAX                            ; 005c5c3c
    CALL FUN_005c543c                   ; 005c5c3d
        ;   XREF to: 005c543c (UNCONDITIONAL_CALL)  ; undefined FUN_005c543c()
    ADD ESP,0x8                         ; 005c5c42
    JMP 0x005c5c5e                      ; 005c5c45
        ;   XREF to: 005c5c5e (UNCONDITIONAL_JUMP)  ; LAB_005c5c5e
    INC EBP                             ; 005c5c47
        ;   Label: LAB_005c5c47
    MOV DH,byte ptr [EBX + 0x10]        ; 005c5c48
    DEC EDI                             ; 005c5c4b
    TEST DH,0x1                         ; 005c5c4c
    JZ 0x005c5c5a                       ; 005c5c4f
        ;   XREF to: 005c5c5a (CONDITIONAL_JUMP)  ; LAB_005c5c5a
    INC ESI                             ; 005c5c51
    MOV AL,byte ptr [ESP + 0x28]        ; 005c5c52
    MOV byte ptr ES:[ESI + -0x1],AL     ; 005c5c56
    TEST EDI,EDI                        ; 005c5c5a
        ;   Label: LAB_005c5c5a
    JA 0x005c5bec                       ; 005c5c5c
        ;   XREF to: 005c5bec (CONDITIONAL_JUMP)  ; LAB_005c5bec
    TEST byte ptr [EBX + 0x10],0x1      ; 005c5c5e
        ;   Label: LAB_005c5c5e
    JZ 0x005c5c6c                       ; 005c5c62
        ;   XREF to: 005c5c6c (CONDITIONAL_JUMP)  ; LAB_005c5c6c
    TEST EBP,EBP                        ; 005c5c64
    JLE 0x005c5c6c                      ; 005c5c66
        ;   XREF to: 005c5c6c (CONDITIONAL_JUMP)  ; LAB_005c5c6c
    MOV byte ptr ES:[ESI],0x0           ; 005c5c68
    MOV EAX,EBP                         ; 005c5c6c
        ;   Label: LAB_005c5c6c
    ADD ESP,0x2c                        ; 005c5c6e
    POP EBP                             ; 005c5c71
    POP ES                              ; 005c5c72
    POP EDI                             ; 005c5c73
    POP ESI                             ; 005c5c74
    POP EBX                             ; 005c5c75
    RET                                 ; 005c5c76

