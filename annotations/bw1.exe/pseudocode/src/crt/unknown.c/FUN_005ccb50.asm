; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005ccb50(UINT param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005ca6b4 at 005ca6b6
;
; Referenced Globals:
;   undefined4 DAT_00626ad8
;   undefined4 DAT_02c9f6e0
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ccb50
        ;   Label: crt_unknown.c_FUN_005ccb50
    PUSH ESI                            ; 005ccb51
    PUSH EBP                            ; 005ccb52
    SUB ESP,0x14                        ; 005ccb53
    MOV ESI,dword ptr [ESP + 0x24]      ; 005ccb56
    CMP ESI,-0x1                        ; 005ccb5a
    JNZ 0x005ccb6d                      ; 005ccb5d
        ;   XREF to: 005ccb6d (CONDITIONAL_JUMP)  ; LAB_005ccb6d
    CALL dword ptr CS:[0x5d056c]        ; 005ccb5f
    MOV ESI,EAX                         ; 005ccb66
    JMP 0x005ccc0b                      ; 005ccb68
        ;   XREF to: 005ccc0b (UNCONDITIONAL_JUMP)  ; LAB_005ccc0b
    CMP ESI,-0x2                        ; 005ccb6d
        ;   Label: LAB_005ccb6d
    JNZ 0x005ccb80                      ; 005ccb70
        ;   XREF to: 005ccb80 (CONDITIONAL_JUMP)  ; LAB_005ccb80
    CALL dword ptr CS:[0x5d05c4]        ; 005ccb72
    MOV ESI,EAX                         ; 005ccb79
    JMP 0x005ccc0b                      ; 005ccb7b
        ;   XREF to: 005ccc0b (UNCONDITIONAL_JUMP)  ; LAB_005ccc0b
    CMP ESI,-0x3                        ; 005ccb80
        ;   Label: LAB_005ccb80
    JNZ 0x005ccbae                      ; 005ccb83
        ;   XREF to: 005ccbae (CONDITIONAL_JUMP)  ; LAB_005ccbae
    PUSH 0x101                          ; 005ccb85
    PUSH 0x0                            ; 005ccb8a
    PUSH 0x2c9f6f0                      ; 005ccb8c
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005ccb91
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005ccb96
    XOR EDX,EDX                         ; 005ccb99
    XOR EAX,EAX                         ; 005ccb9b
    MOV dword ptr [0x02c9f6e0],EDX      ; 005ccb9d | DAT_02c9f6e0
    MOV dword ptr [0x00626ad8],EDX      ; 005ccba3 | DAT_00626ad8
    JMP 0x005cccb1                      ; 005ccba9
        ;   XREF to: 005cccb1 (UNCONDITIONAL_JUMP)  ; LAB_005cccb1
    CMP ESI,-0x4                        ; 005ccbae
        ;   Label: LAB_005ccbae
    JNZ 0x005ccc0b                      ; 005ccbb1
        ;   XREF to: 005ccc0b (CONDITIONAL_JUMP)  ; LAB_005ccc0b
    PUSH 0x101                          ; 005ccbb3
    PUSH 0x0                            ; 005ccbb8
    PUSH 0x2c9f6f0                      ; 005ccbba
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005ccbbf
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV EAX,0x81                        ; 005ccbc4
    MOV DL,0x1                          ; 005ccbc9
    ADD ESP,0xc                         ; 005ccbcb
    INC EAX                             ; 005ccbce
        ;   Label: LAB_005ccbce
    MOV byte ptr [EAX + 0x2c9f6f0],DL   ; 005ccbcf
    CMP EAX,0x9f                        ; 005ccbd5
    JLE 0x005ccbce                      ; 005ccbda
        ;   XREF to: 005ccbce (CONDITIONAL_JUMP)  ; LAB_005ccbce
    MOV EAX,0xe0                        ; 005ccbdc
    MOV DH,0x1                          ; 005ccbe1
    INC EAX                             ; 005ccbe3
        ;   Label: LAB_005ccbe3
    MOV byte ptr [EAX + 0x2c9f6f0],DH   ; 005ccbe4
    CMP EAX,0xfc                        ; 005ccbea
    JLE 0x005ccbe3                      ; 005ccbef
        ;   XREF to: 005ccbe3 (CONDITIONAL_JUMP)  ; LAB_005ccbe3
    MOV EBP,0x1                         ; 005ccbf1
    MOV EAX,0x3a4                       ; 005ccbf6
    MOV dword ptr [0x02c9f6e0],EBP      ; 005ccbfb | DAT_02c9f6e0
    MOV [0x00626ad8],EAX                ; 005ccc01 | DAT_00626ad8
    JMP 0x005cccaf                      ; 005ccc06
        ;   XREF to: 005cccaf (UNCONDITIONAL_JUMP)  ; LAB_005cccaf
    TEST ESI,ESI                        ; 005ccc0b
        ;   Label: LAB_005ccc0b
    JNZ 0x005ccc14                      ; 005ccc0d
        ;   XREF to: 005ccc14 (CONDITIONAL_JUMP)  ; LAB_005ccc14
    MOV ESI,0x1                         ; 005ccc0f
    MOV EAX,ESP                         ; 005ccc14
        ;   Label: LAB_005ccc14
    PUSH EAX                            ; 005ccc16
    PUSH ESI                            ; 005ccc17
    CALL dword ptr CS:[0x5d0570]        ; 005ccc18
    TEST EAX,EAX                        ; 005ccc1f
    JNZ 0x005ccc2f                      ; 005ccc21
        ;   XREF to: 005ccc2f (CONDITIONAL_JUMP)  ; LAB_005ccc2f
    MOV EAX,0x1                         ; 005ccc23
    ADD ESP,0x14                        ; 005ccc28
    POP EBP                             ; 005ccc2b
    POP ESI                             ; 005ccc2c
    POP EBX                             ; 005ccc2d
    RET                                 ; 005ccc2e
    PUSH 0x101                          ; 005ccc2f
        ;   Label: LAB_005ccc2f
    PUSH 0x0                            ; 005ccc34
    PUSH 0x2c9f6f0                      ; 005ccc36
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005ccc3b
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005ccc40
    XOR ECX,ECX                         ; 005ccc43
    MOV AH,byte ptr [ESP + 0x6]         ; 005ccc45
    MOV dword ptr [0x02c9f6e0],ECX      ; 005ccc49 | DAT_02c9f6e0
    TEST AH,AH                          ; 005ccc4f
    JZ 0x005ccc5d                       ; 005ccc51
        ;   XREF to: 005ccc5d (CONDITIONAL_JUMP)  ; LAB_005ccc5d
    MOV dword ptr [0x02c9f6e0],0x1      ; 005ccc53 | DAT_02c9f6e0
    XOR EBX,EBX                         ; 005ccc5d
        ;   Label: LAB_005ccc5d
    MOV CL,0x1                          ; 005ccc5f
    XOR CH,CH                           ; 005ccc61
    JMP 0x005ccc81                      ; 005ccc63
        ;   XREF to: 005ccc81 (UNCONDITIONAL_JUMP)  ; LAB_005ccc81
    XOR EAX,EAX                         ; 005ccc65
        ;   Label: LAB_005ccc65
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x6] ; 005ccc67
    JMP 0x005ccc74                      ; 005ccc6b
        ;   XREF to: 005ccc74 (UNCONDITIONAL_JUMP)  ; LAB_005ccc74
    INC EAX                             ; 005ccc6d
        ;   Label: LAB_005ccc6d
    MOV byte ptr [EAX + 0x2c9f6f0],CL   ; 005ccc6e
    XOR EDX,EDX                         ; 005ccc74
        ;   Label: LAB_005ccc74
    MOV DL,byte ptr [ESP + EBX*0x1 + 0x7] ; 005ccc76
    CMP EAX,EDX                         ; 005ccc7a
    JLE 0x005ccc6d                      ; 005ccc7c
        ;   XREF to: 005ccc6d (CONDITIONAL_JUMP)  ; LAB_005ccc6d
    ADD EBX,0x2                         ; 005ccc7e
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x6] ; 005ccc81
        ;   Label: LAB_005ccc81
    CMP CH,AL                           ; 005ccc85
    JNZ 0x005ccc65                      ; 005ccc87
        ;   XREF to: 005ccc65 (CONDITIONAL_JUMP)  ; LAB_005ccc65
    CMP AL,byte ptr [ESP + EBX*0x1 + 0x7] ; 005ccc89
    JNZ 0x005ccc65                      ; 005ccc8d
        ;   XREF to: 005ccc65 (CONDITIONAL_JUMP)  ; LAB_005ccc65
    CMP ESI,0x1                         ; 005ccc8f
    JNZ 0x005ccca9                      ; 005ccc92
        ;   XREF to: 005ccca9 (CONDITIONAL_JUMP)  ; LAB_005ccca9
    CALL dword ptr CS:[0x5d05c4]        ; 005ccc94
    MOV [0x00626ad8],EAX                ; 005ccc9b | DAT_00626ad8
    XOR EAX,EAX                         ; 005ccca0
    ADD ESP,0x14                        ; 005ccca2
    POP EBP                             ; 005ccca5
    POP ESI                             ; 005ccca6
    POP EBX                             ; 005ccca7
    RET                                 ; 005ccca8
    MOV dword ptr [0x00626ad8],ESI      ; 005ccca9 | DAT_00626ad8
        ;   Label: LAB_005ccca9
    XOR EAX,EAX                         ; 005cccaf
        ;   Label: LAB_005cccaf
    ADD ESP,0x14                        ; 005cccb1
        ;   Label: LAB_005cccb1
    POP EBP                             ; 005cccb4
    POP ESI                             ; 005cccb5
    POP EBX                             ; 005cccb6
    RET                                 ; 005cccb7

