; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005a89d4(int param_1,int *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   crt_unknown.c_FUN_005a82c0 at 005a84d4
;
; Referenced Globals:
;   undefined4 DAT_006079ec
;
; Called Functions:
;   crt_unknown.c_FUN_005a82a0
;   crt_unknown.c_FUN_005a82ac
;   crt_unknown.c_FUN_005a898c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a89d4
        ;   Label: crt_unknown.c_FUN_005a89d4
    PUSH ESI                            ; 005a89d5
    PUSH EDI                            ; 005a89d6
    PUSH ES                             ; 005a89d7
    PUSH EBP                            ; 005a89d8
    SUB ESP,0x2c                        ; 005a89d9
    MOV EBX,dword ptr [ESP + 0x44]      ; 005a89dc
    MOV EDI,dword ptr [ESP + 0x48]      ; 005a89e0
    MOV EBP,dword ptr [ESP + 0x4c]      ; 005a89e4
    MOV EAX,dword ptr [EBP]             ; 005a89e8
    CMP byte ptr [EAX],0x5e             ; 005a89eb
    SETZ DL                             ; 005a89ee
    AND EDX,0xff                        ; 005a89f1
    MOV dword ptr [ESP + 0x24],EDX      ; 005a89f7
    JZ 0x005a8a01                       ; 005a89fb
        ;   XREF to: 005a8a01 (CONDITIONAL_JUMP)  ; LAB_005a8a01
    INC EAX                             ; 005a89fd
    MOV dword ptr [EBP],EAX             ; 005a89fe
    MOV EAX,ESP                         ; 005a8a01
        ;   Label: LAB_005a8a01
    PUSH EAX                            ; 005a8a03
    MOV EDX,dword ptr [EBP]             ; 005a8a04
    PUSH EDX                            ; 005a8a07
    CALL crt_unknown.c_FUN_005a898c     ; 005a8a08
        ;   XREF to: 005a898c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a898c()
    MOV dword ptr [EBP],EAX             ; 005a8a0d
    MOV CL,byte ptr [EBX + 0x10]        ; 005a8a10
    ADD ESP,0x8                         ; 005a8a13
    TEST CL,0x1                         ; 005a8a16
    JZ 0x005a8a4f                       ; 005a8a19
        ;   XREF to: 005a8a4f (CONDITIONAL_JUMP)  ; LAB_005a8a4f
    TEST CL,0x4                         ; 005a8a1b
    JZ 0x005a8a2c                       ; 005a8a1e
        ;   XREF to: 005a8a2c (CONDITIONAL_JUMP)  ; LAB_005a8a2c
    MOV EBP,dword ptr [EDI]             ; 005a8a20
    ADD EBP,0x8                         ; 005a8a22
    MOV dword ptr [EDI],EBP             ; 005a8a25
    LES ESI,[EBP + -0x8]                ; 005a8a27
    JMP 0x005a8a4f                      ; 005a8a2a
        ;   XREF to: 005a8a4f (UNCONDITIONAL_JUMP)  ; LAB_005a8a4f
    TEST CL,0x8                         ; 005a8a2c
        ;   Label: LAB_005a8a2c
    JZ 0x005a8a41                       ; 005a8a2f
        ;   XREF to: 005a8a41 (CONDITIONAL_JUMP)  ; LAB_005a8a41
    MOV ESI,dword ptr [EDI]             ; 005a8a31
    ADD ESI,0x4                         ; 005a8a33
    MOV AX,DS                           ; 005a8a36
    MOV dword ptr [EDI],ESI             ; 005a8a38
    MOV ES,AX                           ; 005a8a3a
    MOV ESI,dword ptr [ESI + -0x4]      ; 005a8a3c
    JMP 0x005a8a4f                      ; 005a8a3f
        ;   XREF to: 005a8a4f (UNCONDITIONAL_JUMP)  ; LAB_005a8a4f
    MOV ECX,dword ptr [EDI]             ; 005a8a41
        ;   Label: LAB_005a8a41
    ADD ECX,0x4                         ; 005a8a43
    MOV AX,DS                           ; 005a8a46
    MOV dword ptr [EDI],ECX             ; 005a8a48
    MOV ES,AX                           ; 005a8a4a
    MOV ESI,dword ptr [ECX + -0x4]      ; 005a8a4c
    MOV EDI,dword ptr [EBX + 0xc]       ; 005a8a4f
        ;   Label: LAB_005a8a4f
    XOR EBP,EBP                         ; 005a8a52
    TEST EDI,EDI                        ; 005a8a54
    JBE 0x005a8ace                      ; 005a8a56
        ;   XREF to: 005a8ace (CONDITIONAL_JUMP)  ; LAB_005a8ace
    PUSH EBX                            ; 005a8a5c
        ;   Label: LAB_005a8a5c
    CALL crt_unknown.c_FUN_005a82a0     ; 005a8a5d
        ;   XREF to: 005a82a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a82a0()
    ADD ESP,0x4                         ; 005a8a62
    MOV DL,byte ptr [EBX + 0x10]        ; 005a8a65
    MOV dword ptr [ESP + 0x28],EAX      ; 005a8a68
    TEST DL,0x2                         ; 005a8a6c
    JNZ 0x005a8ace                      ; 005a8a6f
        ;   XREF to: 005a8ace (CONDITIONAL_JUMP)  ; LAB_005a8ace
    MOV EDX,EAX                         ; 005a8a71
    SAR EDX,0x3                         ; 005a8a73
    MOV DL,byte ptr [ESP + EDX*0x1]     ; 005a8a76
    AND EDX,0xff                        ; 005a8a79
    MOV dword ptr [ESP + 0x20],EDX      ; 005a8a7f
    MOV EDX,EAX                         ; 005a8a83
    AND EDX,0x7                         ; 005a8a85
    MOV DL,byte ptr [EDX + 0x6079ec]    ; 005a8a88 | DAT_006079ec
    MOV ECX,dword ptr [ESP + 0x20]      ; 005a8a8e
    AND EDX,0xff                        ; 005a8a92
    TEST EDX,ECX                        ; 005a8a98
    SETZ DL                             ; 005a8a9a
    MOV ECX,dword ptr [ESP + 0x24]      ; 005a8a9d
    AND EDX,0xff                        ; 005a8aa1
    CMP EDX,ECX                         ; 005a8aa7
    JZ 0x005a8ab7                       ; 005a8aa9
        ;   XREF to: 005a8ab7 (CONDITIONAL_JUMP)  ; LAB_005a8ab7
    PUSH EBX                            ; 005a8aab
    PUSH EAX                            ; 005a8aac
    CALL crt_unknown.c_FUN_005a82ac     ; 005a8aad
        ;   XREF to: 005a82ac (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a82ac()
    ADD ESP,0x8                         ; 005a8ab2
    JMP 0x005a8ace                      ; 005a8ab5
        ;   XREF to: 005a8ace (UNCONDITIONAL_JUMP)  ; LAB_005a8ace
    INC EBP                             ; 005a8ab7
        ;   Label: LAB_005a8ab7
    MOV DH,byte ptr [EBX + 0x10]        ; 005a8ab8
    DEC EDI                             ; 005a8abb
    TEST DH,0x1                         ; 005a8abc
    JZ 0x005a8aca                       ; 005a8abf
        ;   XREF to: 005a8aca (CONDITIONAL_JUMP)  ; LAB_005a8aca
    INC ESI                             ; 005a8ac1
    MOV AL,byte ptr [ESP + 0x28]        ; 005a8ac2
    MOV byte ptr ES:[ESI + -0x1],AL     ; 005a8ac6
    TEST EDI,EDI                        ; 005a8aca
        ;   Label: LAB_005a8aca
    JA 0x005a8a5c                       ; 005a8acc
        ;   XREF to: 005a8a5c (CONDITIONAL_JUMP)  ; LAB_005a8a5c
    TEST byte ptr [EBX + 0x10],0x1      ; 005a8ace
        ;   Label: LAB_005a8ace
    JZ 0x005a8adc                       ; 005a8ad2
        ;   XREF to: 005a8adc (CONDITIONAL_JUMP)  ; LAB_005a8adc
    TEST EBP,EBP                        ; 005a8ad4
    JLE 0x005a8adc                      ; 005a8ad6
        ;   XREF to: 005a8adc (CONDITIONAL_JUMP)  ; LAB_005a8adc
    MOV byte ptr ES:[ESI],0x0           ; 005a8ad8
    MOV EAX,EBP                         ; 005a8adc
        ;   Label: LAB_005a8adc
    ADD ESP,0x2c                        ; 005a8ade
    POP EBP                             ; 005a8ae1
    POP ES                              ; 005a8ae2
    POP EDI                             ; 005a8ae3
    POP ESI                             ; 005a8ae4
    POP EBX                             ; 005a8ae5
    RET                                 ; 005a8ae6

