; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_005c3add(uint param_1,undefined4 *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined        Stack[-0xc]:1  local_c
;
; XREF[2]:
;   crt_unknown.c_FUN_005bf2b0 at 005bf324
;   crt_unknown.c_FUN_005c3aaa at 005c3ab9
;
; Referenced Globals:
;   undefined4 DAT_00601430
;   undefined4 DAT_00601434
;   undefined4 DAT_0061f6f4
;
; Called Functions:
;   crt_unknown.c_FUN_005c57ad
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c3add
        ;   Label: crt_unknown.c_FUN_005c3add
    MOV EBP,ESP                         ; 005c3ade
    PUSH EBX                            ; 005c3ae0
    PUSH ESI                            ; 005c3ae1
    SUB ESP,0x30                        ; 005c3ae2
    MOV EDX,dword ptr [EBP + 0x8]       ; 005c3ae5
    MOV ESI,dword ptr [EBP + 0xc]       ; 005c3ae8
    MOV ECX,dword ptr [EBP + 0x10]      ; 005c3aeb
    MOV EAX,dword ptr [ESI]             ; 005c3aee
    MOV dword ptr [EBP + -0x30],EAX     ; 005c3af0
    MOV EAX,dword ptr [ESI + 0x4]       ; 005c3af3
    MOV dword ptr [EBP + -0x2c],EAX     ; 005c3af6
    MOV EAX,dword ptr [ECX]             ; 005c3af9
    MOV dword ptr [EBP + -0x28],EAX     ; 005c3afb
    MOV EAX,dword ptr [ECX + 0x4]       ; 005c3afe
    MOV dword ptr [EBP + -0x24],EAX     ; 005c3b01
    TEST DL,0x40                        ; 005c3b04
    JZ 0x005c3b10                       ; 005c3b07
        ;   XREF to: 005c3b10 (CONDITIONAL_JUMP)  ; LAB_005c3b10
    MOV EBX,0x1                         ; 005c3b09
    JMP 0x005c3b4a                      ; 005c3b0e
        ;   XREF to: 005c3b4a (UNCONDITIONAL_JUMP)  ; LAB_005c3b4a
    TEST DL,0x80                        ; 005c3b10
        ;   Label: LAB_005c3b10
    JZ 0x005c3b1c                       ; 005c3b13
        ;   XREF to: 005c3b1c (CONDITIONAL_JUMP)  ; LAB_005c3b1c
    MOV EBX,0x2                         ; 005c3b15
    JMP 0x005c3b4a                      ; 005c3b1a
        ;   XREF to: 005c3b4a (UNCONDITIONAL_JUMP)  ; LAB_005c3b4a
    TEST DH,0x1                         ; 005c3b1c
        ;   Label: LAB_005c3b1c
    JZ 0x005c3b28                       ; 005c3b1f
        ;   XREF to: 005c3b28 (CONDITIONAL_JUMP)  ; LAB_005c3b28
    MOV EBX,0x3                         ; 005c3b21
    JMP 0x005c3b4a                      ; 005c3b26
        ;   XREF to: 005c3b4a (UNCONDITIONAL_JUMP)  ; LAB_005c3b4a
    TEST DH,0x8                         ; 005c3b28
        ;   Label: LAB_005c3b28
    JZ 0x005c3b34                       ; 005c3b2b
        ;   XREF to: 005c3b34 (CONDITIONAL_JUMP)  ; LAB_005c3b34
    MOV EBX,0x4                         ; 005c3b2d
    JMP 0x005c3b4a                      ; 005c3b32
        ;   XREF to: 005c3b4a (UNCONDITIONAL_JUMP)  ; LAB_005c3b4a
    TEST DH,0x2                         ; 005c3b34
        ;   Label: LAB_005c3b34
    JZ 0x005c3b40                       ; 005c3b37
        ;   XREF to: 005c3b40 (CONDITIONAL_JUMP)  ; LAB_005c3b40
    MOV EBX,0x6                         ; 005c3b39
    JMP 0x005c3b4a                      ; 005c3b3e
        ;   XREF to: 005c3b4a (UNCONDITIONAL_JUMP)  ; LAB_005c3b4a
    TEST DH,0x4                         ; 005c3b40
        ;   Label: LAB_005c3b40
    JZ 0x005c3b4a                       ; 005c3b43
        ;   XREF to: 005c3b4a (CONDITIONAL_JUMP)  ; LAB_005c3b4a
    MOV EBX,0x5                         ; 005c3b45
    MOV EAX,EDX                         ; 005c3b4a
        ;   Label: LAB_005c3b4a
    AND EAX,0x1f                        ; 005c3b4c
    MOV EAX,dword ptr [EAX*0x4 + 0x61f6f4] ; 005c3b4f | DAT_0061f6f4
    MOV dword ptr [EBP + -0x38],EBX     ; 005c3b56
    MOV dword ptr [EBP + -0x34],EAX     ; 005c3b59
    TEST DH,0x10                        ; 005c3b5c
    JZ 0x005c3b6e                       ; 005c3b5f
        ;   XREF to: 005c3b6e (CONDITIONAL_JUMP)  ; LAB_005c3b6e
    FLD double ptr [0x00601430]         ; 005c3b61 | DAT_00601430
    FCHS                                ; 005c3b67
    FSTP double ptr [EBP + -0x20]       ; 005c3b69
    JMP 0x005c3bb0                      ; 005c3b6c
        ;   XREF to: 005c3bb0 (UNCONDITIONAL_JUMP)  ; LAB_005c3bb0
    TEST DH,0x20                        ; 005c3b6e
        ;   Label: LAB_005c3b6e
    JZ 0x005c3b7d                       ; 005c3b71
        ;   XREF to: 005c3b7d (CONDITIONAL_JUMP)  ; LAB_005c3b7d
    XOR ECX,ECX                         ; 005c3b73
    MOV dword ptr [EBP + -0x20],ECX     ; 005c3b75
    MOV dword ptr [EBP + -0x1c],ECX     ; 005c3b78
    JMP 0x005c3bb0                      ; 005c3b7b
        ;   XREF to: 005c3bb0 (UNCONDITIONAL_JUMP)  ; LAB_005c3bb0
    TEST DH,0x40                        ; 005c3b7d
        ;   Label: LAB_005c3b7d
    JZ 0x005c3b91                       ; 005c3b80
        ;   XREF to: 005c3b91 (CONDITIONAL_JUMP)  ; LAB_005c3b91
    XOR EDX,EDX                         ; 005c3b82
    MOV EBX,0x3ff00000                  ; 005c3b84
    MOV dword ptr [EBP + -0x20],EDX     ; 005c3b89
    MOV dword ptr [EBP + -0x1c],EBX     ; 005c3b8c
    JMP 0x005c3bb0                      ; 005c3b8f
        ;   XREF to: 005c3bb0 (UNCONDITIONAL_JUMP)  ; LAB_005c3bb0
    TEST DH,0x80                        ; 005c3b91
        ;   Label: LAB_005c3b91
    JZ 0x005c3ba5                       ; 005c3b94
        ;   XREF to: 005c3ba5 (CONDITIONAL_JUMP)  ; LAB_005c3ba5
    MOV EAX,[0x00601430]                ; 005c3b96 | DAT_00601430
    MOV dword ptr [EBP + -0x20],EAX     ; 005c3b9b
    MOV EAX,[0x00601434]                ; 005c3b9e | DAT_00601434
    JMP 0x005c3bad                      ; 005c3ba3
        ;   XREF to: 005c3bad (UNCONDITIONAL_JUMP)  ; LAB_005c3bad
    MOV EAX,dword ptr [ECX]             ; 005c3ba5
        ;   Label: LAB_005c3ba5
    MOV dword ptr [EBP + -0x20],EAX     ; 005c3ba7
    MOV EAX,dword ptr [ECX + 0x4]       ; 005c3baa
    MOV dword ptr [EBP + -0x1c],EAX     ; 005c3bad
        ;   Label: LAB_005c3bad
    LEA EAX,[EBP + -0x38]               ; 005c3bb0
        ;   Label: LAB_005c3bb0
    PUSH EAX                            ; 005c3bb3
    CALL crt_unknown.c_FUN_005c57ad     ; 005c3bb4
        ;   XREF to: 005c57ad (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c57ad()
    MOV dword ptr [EBP + -0x18],EAX     ; 005c3bb9
    MOV dword ptr [EBP + -0x14],EDX     ; 005c3bbc
    ADD ESP,0x4                         ; 005c3bbf
    MOV EAX,dword ptr [EBP + -0x18]     ; 005c3bc2
    MOV dword ptr [EBP + -0x10],EAX     ; 005c3bc5
    MOV EAX,dword ptr [EBP + -0x14]     ; 005c3bc8
    MOV dword ptr [EBP + -0xc],EAX      ; 005c3bcb
    MOV EAX,dword ptr [EBP + -0x10]     ; 005c3bce
    MOV EDX,dword ptr [EBP + -0xc]      ; 005c3bd1
    LEA ESP,[EBP + -0x8]                ; 005c3bd4
    POP ESI                             ; 005c3bd7
    POP EBX                             ; 005c3bd8
    POP EBP                             ; 005c3bd9
    RET                                 ; 005c3bda

