; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_00596f30(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   engine_texture.cpp_FUN_00597ac0 at 00597b67
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00596f30
        ;   Label: engine_texture.cpp_FUN_00596f30
    PUSH ESI                            ; 00596f31
    PUSH EDI                            ; 00596f32
    PUSH EBP                            ; 00596f33
    MOV EDI,dword ptr [ESP + 0x18]      ; 00596f34
    MOV EDI,dword ptr [EDI + 0x4]       ; 00596f38
    AND EDI,0xffff                      ; 00596f3b
    LEA EBX,[EDI*0x4 + 0x0]             ; 00596f41
    MOV ESI,dword ptr [ESP + 0x14]      ; 00596f48
    SUB EBX,EDI                         ; 00596f4c
    ADD ESI,0x4                         ; 00596f4e
    SHL EBX,0x5                         ; 00596f51
    ADD EBX,ESI                         ; 00596f54
    MOV EDX,dword ptr [EBX + 0x44]      ; 00596f56
    TEST EDX,EDX                        ; 00596f59
    JNZ 0x00596fe0                      ; 00596f5b
        ;   XREF to: 00596fe0 (CONDITIONAL_JUMP)  ; LAB_00596fe0
    MOV ESI,dword ptr [EBX + 0x48]      ; 00596f61
        ;   Label: LAB_00596f61
    TEST ESI,ESI                        ; 00596f64
    JZ 0x00596f71                       ; 00596f66
        ;   XREF to: 00596f71 (CONDITIONAL_JUMP)  ; LAB_00596f71
    PUSH ESI                            ; 00596f68
    CALL crt_unknown.c_FUN_005c09f0     ; 00596f69
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 00596f6e
    MOV EBP,dword ptr [EBX + 0x4c]      ; 00596f71
        ;   Label: LAB_00596f71
    TEST EBP,EBP                        ; 00596f74
    JZ 0x00596f81                       ; 00596f76
        ;   XREF to: 00596f81 (CONDITIONAL_JUMP)  ; LAB_00596f81
    PUSH EBP                            ; 00596f78
    CALL crt_unknown.c_FUN_005c09f0     ; 00596f79
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 00596f7e
    MOV EDX,dword ptr [EBX + 0x50]      ; 00596f81
        ;   Label: LAB_00596f81
    TEST EDX,EDX                        ; 00596f84
    JNZ 0x00596fee                      ; 00596f86
        ;   XREF to: 00596fee (CONDITIONAL_JUMP)  ; LAB_00596fee
    PUSH 0x60                           ; 00596f88
        ;   Label: LAB_00596f88
    PUSH 0x0                            ; 00596f8a
    PUSH EBX                            ; 00596f8c
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00596f8d
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00596f92
    MOV ESI,dword ptr [ESP + 0x18]      ; 00596f95
    LEA EDI,[EBX + 0x4]                 ; 00596f99
    ADD ESI,0x8                         ; 00596f9c
    PUSH EDI                            ; 00596f9f
    MOV AL,byte ptr [ESI]               ; 00596fa0
        ;   Label: LAB_00596fa0
    MOV byte ptr [EDI],AL               ; 00596fa2
    CMP AL,0x0                          ; 00596fa4
    JZ 0x00596fb8                       ; 00596fa6
        ;   XREF to: 00596fb8 (CONDITIONAL_JUMP)  ; LAB_00596fb8
    MOV AL,byte ptr [ESI + 0x1]         ; 00596fa8
    ADD ESI,0x2                         ; 00596fab
    MOV byte ptr [EDI + 0x1],AL         ; 00596fae
    ADD EDI,0x2                         ; 00596fb1
    CMP AL,0x0                          ; 00596fb4
    JNZ 0x00596fa0                      ; 00596fb6
        ;   XREF to: 00596fa0 (CONDITIONAL_JUMP)  ; LAB_00596fa0
    POP EDI                             ; 00596fb8
        ;   Label: LAB_00596fb8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00596fb9
    MOV dword ptr [EBX + 0x58],0x1      ; 00596fbd
    MOV dword ptr [EBX],ESI             ; 00596fc4
    MOV ESI,dword ptr [ESP + 0x20]      ; 00596fc6
    MOV dword ptr [EBX + 0x44],ESI      ; 00596fca
    MOV ESI,dword ptr [ESP + 0x24]      ; 00596fcd
    MOV dword ptr [EBX + 0x4c],ESI      ; 00596fd1
    MOV ESI,dword ptr [ESP + 0x28]      ; 00596fd4
    MOV dword ptr [EBX + 0x48],ESI      ; 00596fd8
    POP EBP                             ; 00596fdb
    POP EDI                             ; 00596fdc
    POP ESI                             ; 00596fdd
    POP EBX                             ; 00596fde
    RET                                 ; 00596fdf
    PUSH EDX                            ; 00596fe0
        ;   Label: LAB_00596fe0
    CALL crt_unknown.c_FUN_005c09f0     ; 00596fe1
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 00596fe6
    JMP 0x00596f61                      ; 00596fe9
        ;   XREF to: 00596f61 (UNCONDITIONAL_JUMP)  ; LAB_00596f61
    PUSH EDX                            ; 00596fee
        ;   Label: LAB_00596fee
    CALL crt_unknown.c_FUN_005c09f0     ; 00596fef
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 00596ff4
    JMP 0x00596f88                      ; 00596ff7
        ;   XREF to: 00596f88 (UNCONDITIONAL_JUMP)  ; LAB_00596f88

