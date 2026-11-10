; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c594c(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined1       Stack[-0x1c]:1  local_1c
; undefined1       Stack[-0x1b]:1  local_1b
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[1]:
;   crt_unknown.c_FUN_005c5450 at 005c5652
;
; Referenced Globals:
;   undefined4 DAT_00626114
;   undefined4 DAT_02c9f6e0
;
; Called Functions:
;   crt_unknown.c_FUN_005c5430
;   crt_unknown.c_FUN_005c543c
;   crt_unknown.c_FUN_005c6418
;   crt_unknown.c_FUN_005cb6f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c594c
        ;   Label: crt_unknown.c_FUN_005c594c
    PUSH ESI                            ; 005c594d
    PUSH EDI                            ; 005c594e
    PUSH ES                             ; 005c594f
    PUSH EBP                            ; 005c5950
    SUB ESP,0xc                         ; 005c5951
    MOV ESI,dword ptr [ESP + 0x24]      ; 005c5954
    MOV EAX,dword ptr [ESP + 0x28]      ; 005c5958
    MOV DL,byte ptr [ESI + 0x10]        ; 005c595c
    TEST DL,0x20                        ; 005c595f
    JZ 0x005c596b                       ; 005c5962
        ;   XREF to: 005c596b (CONDITIONAL_JUMP)  ; LAB_005c596b
    MOV byte ptr [ESP + 0x8],0x2        ; 005c5964
    JMP 0x005c5973                      ; 005c5969
        ;   XREF to: 005c5973 (UNCONDITIONAL_JUMP)  ; LAB_005c5973
    TEST DL,0x10                        ; 005c596b
        ;   Label: LAB_005c596b
    MOV byte ptr [ESP + 0x8],0x1        ; 005c596e
    MOV CH,byte ptr [ESI + 0x10]        ; 005c5973
        ;   Label: LAB_005c5973
    TEST CH,0x1                         ; 005c5976
    JZ 0x005c59af                       ; 005c5979
        ;   XREF to: 005c59af (CONDITIONAL_JUMP)  ; LAB_005c59af
    TEST CH,0x4                         ; 005c597b
    JZ 0x005c598c                       ; 005c597e
        ;   XREF to: 005c598c (CONDITIONAL_JUMP)  ; LAB_005c598c
    MOV ECX,dword ptr [EAX]             ; 005c5980
    ADD ECX,0x8                         ; 005c5982
    MOV dword ptr [EAX],ECX             ; 005c5985
    LES EDI,[ECX + -0x8]                ; 005c5987
    JMP 0x005c59af                      ; 005c598a
        ;   XREF to: 005c59af (UNCONDITIONAL_JUMP)  ; LAB_005c59af
    TEST CH,0x8                         ; 005c598c
        ;   Label: LAB_005c598c
    JZ 0x005c59a1                       ; 005c598f
        ;   XREF to: 005c59a1 (CONDITIONAL_JUMP)  ; LAB_005c59a1
    MOV EBX,dword ptr [EAX]             ; 005c5991
    ADD EBX,0x4                         ; 005c5993
    MOV dword ptr [EAX],EBX             ; 005c5996
    MOV AX,DS                           ; 005c5998
    MOV ES,AX                           ; 005c599a
    MOV EDI,dword ptr [EBX + -0x4]      ; 005c599c
    JMP 0x005c59af                      ; 005c599f
        ;   XREF to: 005c59af (UNCONDITIONAL_JUMP)  ; LAB_005c59af
    MOV EDX,dword ptr [EAX]             ; 005c59a1
        ;   Label: LAB_005c59a1
    ADD EDX,0x4                         ; 005c59a3
    MOV dword ptr [EAX],EDX             ; 005c59a6
    MOV AX,DS                           ; 005c59a8
    MOV ES,AX                           ; 005c59aa
    MOV EDI,dword ptr [EDX + -0x4]      ; 005c59ac
    XOR EBP,EBP                         ; 005c59af
        ;   Label: LAB_005c59af
    PUSH ESI                            ; 005c59b1
        ;   Label: LAB_005c59b1
    CALL crt_unknown.c_FUN_005c5430     ; 005c59b2
        ;   XREF to: 005c5430 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c5430()
    ADD ESP,0x4                         ; 005c59b7
    MOV EBX,EAX                         ; 005c59ba
    INC AL                              ; 005c59bc
    AND EAX,0xff                        ; 005c59be
    TEST byte ptr [EAX + 0x626114],0x2  ; 005c59c3 | DAT_00626114
    JZ 0x005c59cf                       ; 005c59ca
        ;   XREF to: 005c59cf (CONDITIONAL_JUMP)  ; LAB_005c59cf
    INC EBP                             ; 005c59cc
    JMP 0x005c59b1                      ; 005c59cd
        ;   XREF to: 005c59b1 (UNCONDITIONAL_JUMP)  ; LAB_005c59b1
    TEST byte ptr [ESI + 0x10],0x2      ; 005c59cf
        ;   Label: LAB_005c59cf
    JZ 0x005c59dc                       ; 005c59d3
        ;   XREF to: 005c59dc (CONDITIONAL_JUMP)  ; LAB_005c59dc
    XOR EBP,EBP                         ; 005c59d5
    JMP 0x005c5a88                      ; 005c59d7
        ;   XREF to: 005c5a88 (UNCONDITIONAL_JUMP)  ; LAB_005c5a88
    MOV EAX,dword ptr [ESI + 0xc]       ; 005c59dc
        ;   Label: LAB_005c59dc
    LEA EDX,[EAX + -0x1]                ; 005c59df
    MOV dword ptr [ESI + 0xc],EDX       ; 005c59e2
    TEST EAX,EAX                        ; 005c59e5
    JZ 0x005c5a7e                       ; 005c59e7
        ;   XREF to: 005c5a7e (CONDITIONAL_JUMP)  ; LAB_005c5a7e
    MOV AL,byte ptr [ESI + 0x10]        ; 005c59ed
        ;   Label: LAB_005c59ed
    INC EBP                             ; 005c59f0
    TEST AL,0x1                         ; 005c59f1
    JZ 0x005c5a5a                       ; 005c59f3
        ;   XREF to: 005c5a5a (CONDITIONAL_JUMP)  ; LAB_005c5a5a
    CMP byte ptr [ESP + 0x8],0x1        ; 005c59f5
    JNZ 0x005c5a01                      ; 005c59fa
        ;   XREF to: 005c5a01 (CONDITIONAL_JUMP)  ; LAB_005c5a01
    MOV byte ptr ES:[EDI],BL            ; 005c59fc
    JMP 0x005c5a52                      ; 005c59ff
        ;   XREF to: 005c5a52 (UNCONDITIONAL_JUMP)  ; LAB_005c5a52
    MOV EAX,[0x02c9f6e0]                ; 005c5a01 | DAT_02c9f6e0
        ;   Label: LAB_005c5a01
    MOV byte ptr [ESP + 0x4],BL         ; 005c5a06
    TEST EAX,EAX                        ; 005c5a0a
    JZ 0x005c5a2e                       ; 005c5a0c
        ;   XREF to: 005c5a2e (CONDITIONAL_JUMP)  ; LAB_005c5a2e
    XOR EAX,EAX                         ; 005c5a0e
    MOV AL,BL                           ; 005c5a10
    MOV AL,byte ptr [EAX + 0x2c9f6f1]   ; 005c5a12
    AND AL,0x1                          ; 005c5a18
    AND EAX,0xff                        ; 005c5a1a
    JZ 0x005c5a2e                       ; 005c5a1f
        ;   XREF to: 005c5a2e (CONDITIONAL_JUMP)  ; LAB_005c5a2e
    PUSH ESI                            ; 005c5a21
    CALL crt_unknown.c_FUN_005c5430     ; 005c5a22
        ;   XREF to: 005c5430 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c5430()
    ADD ESP,0x4                         ; 005c5a27
    MOV byte ptr [ESP + 0x5],AL         ; 005c5a2a
    PUSH 0x2                            ; 005c5a2e
        ;   Label: LAB_005c5a2e
    LEA EAX,[ESP + 0x8]                 ; 005c5a30
    PUSH EAX                            ; 005c5a34
    LEA EAX,[ESP + 0x8]                 ; 005c5a35
    PUSH EAX                            ; 005c5a39
    CALL crt_unknown.c_FUN_005cb6f0     ; 005c5a3a
        ;   XREF to: 005cb6f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cb6f0()
    ADD ESP,0xc                         ; 005c5a3f
    CMP EAX,-0x1                        ; 005c5a42
    JNZ 0x005c5a4b                      ; 005c5a45
        ;   XREF to: 005c5a4b (CONDITIONAL_JUMP)  ; LAB_005c5a4b
    XOR EAX,EAX                         ; 005c5a47
    JMP 0x005c5aa7                      ; 005c5a49
        ;   XREF to: 005c5aa7 (UNCONDITIONAL_JUMP)  ; LAB_005c5aa7
    MOV EAX,dword ptr [ESP]             ; 005c5a4b
        ;   Label: LAB_005c5a4b
    MOV word ptr ES:[EDI],AX            ; 005c5a4e
    XOR EAX,EAX                         ; 005c5a52
        ;   Label: LAB_005c5a52
    MOV AL,byte ptr [ESP + 0x8]         ; 005c5a54
    ADD EDI,EAX                         ; 005c5a58
    PUSH ESI                            ; 005c5a5a
        ;   Label: LAB_005c5a5a
    CALL crt_unknown.c_FUN_005c6418     ; 005c5a5b
        ;   XREF to: 005c6418 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6418()
    ADD ESP,0x4                         ; 005c5a60
    MOV EBX,EAX                         ; 005c5a63
    CMP EAX,-0x1                        ; 005c5a65
    JZ 0x005c5a88                       ; 005c5a68
        ;   XREF to: 005c5a88 (CONDITIONAL_JUMP)  ; LAB_005c5a88
    INC AL                              ; 005c5a6a
    AND EAX,0xff                        ; 005c5a6c
    TEST byte ptr [EAX + 0x626114],0x2  ; 005c5a71 | DAT_00626114
    JZ 0x005c59ed                       ; 005c5a78
        ;   XREF to: 005c59ed (CONDITIONAL_JUMP)  ; LAB_005c59ed
    PUSH ESI                            ; 005c5a7e
        ;   Label: LAB_005c5a7e
    PUSH EBX                            ; 005c5a7f
    CALL crt_unknown.c_FUN_005c543c     ; 005c5a80
        ;   XREF to: 005c543c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c543c()
    ADD ESP,0x8                         ; 005c5a85
    TEST byte ptr [ESI + 0x10],0x1      ; 005c5a88
        ;   Label: LAB_005c5a88
    JZ 0x005c5aa5                       ; 005c5a8c
        ;   XREF to: 005c5aa5 (CONDITIONAL_JUMP)  ; LAB_005c5aa5
    TEST EBP,EBP                        ; 005c5a8e
    JLE 0x005c5aa5                      ; 005c5a90
        ;   XREF to: 005c5aa5 (CONDITIONAL_JUMP)  ; LAB_005c5aa5
    CMP byte ptr [ESP + 0x8],0x1        ; 005c5a92
    JNZ 0x005c5a9f                      ; 005c5a97
        ;   XREF to: 005c5a9f (CONDITIONAL_JUMP)  ; LAB_005c5a9f
    MOV byte ptr ES:[EDI],0x0           ; 005c5a99
    JMP 0x005c5aa5                      ; 005c5a9d
        ;   XREF to: 005c5aa5 (UNCONDITIONAL_JUMP)  ; LAB_005c5aa5
    MOV word ptr ES:[EDI],0x0           ; 005c5a9f
        ;   Label: LAB_005c5a9f
    MOV EAX,EBP                         ; 005c5aa5
        ;   Label: LAB_005c5aa5
    ADD ESP,0xc                         ; 005c5aa7
        ;   Label: LAB_005c5aa7
    POP EBP                             ; 005c5aaa
    POP ES                              ; 005c5aab
    POP EDI                             ; 005c5aac
    POP ESI                             ; 005c5aad
    POP EBX                             ; 005c5aae
    RET                                 ; 005c5aaf

