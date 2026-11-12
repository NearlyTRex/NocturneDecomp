; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack3_esi core_ground_cpp_CGround_getNormalAtPosition_FUN_004d0c30(CGround *this_ptr,int world_x,int world_z,CVector3i *out_normal)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   world_x
; int              Stack[0xc]:4   world_z
;
; Called Functions:
;   engine_matrix.c_normalizeVector3DFloat_FUN_004e61c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0c30
        ;   Label: core_ground.cpp_CGround_getNormalAtPosition_FUN_004d0c30
    PUSH EDI                            ; 004d0c31
    PUSH EBP                            ; 004d0c32
    SUB ESP,0x54                        ; 004d0c33
    MOV EDI,dword ptr [ESP + 0x6c]      ; 004d0c36
    MOV EBP,ESI                         ; 004d0c3a
    MOV ESI,dword ptr [ESP + 0x64]      ; 004d0c3c
    MOV EBX,dword ptr [ESI + 0x1c]      ; 004d0c40
    SHL EBX,0x8                         ; 004d0c43
    LEA EAX,[EBX + -0x1]                ; 004d0c46
    MOV EDX,0x10000                     ; 004d0c49
    AND EAX,EDI                         ; 004d0c4e
    IMUL EDX                            ; 004d0c50
    IDIV EBX                            ; 004d0c52
    MOV EBX,dword ptr [ESI + 0x1c]      ; 004d0c54
    MOV EDX,dword ptr [ESP + 0x68]      ; 004d0c57
    SHL EBX,0x8                         ; 004d0c5b
    MOV dword ptr [ESP + 0x4c],EAX      ; 004d0c5e
    LEA EAX,[EBX + -0x1]                ; 004d0c62
    AND EAX,EDX                         ; 004d0c65
    MOV EDX,0x10000                     ; 004d0c67
    IMUL EDX                            ; 004d0c6c
    IDIV EBX                            ; 004d0c6e
    MOV dword ptr [ESP + 0x50],EAX      ; 004d0c70
    MOV ECX,dword ptr [ESI + 0x1c]      ; 004d0c74
    XOR EDX,EDX                         ; 004d0c77
    SHL ECX,0x8                         ; 004d0c79
    MOV EAX,EDI                         ; 004d0c7c
    DIV ECX                             ; 004d0c7e
    MOV EDI,dword ptr [ESI + 0x8]       ; 004d0c80
    AND EDI,EAX                         ; 004d0c83
    XOR EDX,EDX                         ; 004d0c85
    MOV EAX,dword ptr [ESP + 0x68]      ; 004d0c87
    DIV ECX                             ; 004d0c8b
    MOV EDX,EDI                         ; 004d0c8d
    MOV ECX,dword ptr [ESI + 0xc]       ; 004d0c8f
    AND EDX,0x1                         ; 004d0c92
    AND EAX,ECX                         ; 004d0c95
    MOV dword ptr [ESP + 0x44],EDX      ; 004d0c97
    MOV EDX,EAX                         ; 004d0c9b
    MOV EBX,dword ptr [ESP + 0x44]      ; 004d0c9d
    AND EDX,0x1                         ; 004d0ca1
    LEA ECX,[EAX + 0x1]                 ; 004d0ca4
    MOV dword ptr [ESP + 0x44],EDX      ; 004d0ca7
    LEA EDX,[EDI + 0x1]                 ; 004d0cab
    CMP EBX,dword ptr [ESP + 0x44]      ; 004d0cae
    JNZ 0x004d0dda                      ; 004d0cb2
        ;   XREF to: 004d0dda (CONDITIONAL_JUMP)  ; LAB_004d0dda
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004d0cb8
    CMP EBX,dword ptr [ESP + 0x50]      ; 004d0cbc
    JLE 0x004d0d52                      ; 004d0cc0
        ;   XREF to: 004d0d52 (CONDITIONAL_JUMP)  ; LAB_004d0d52
    MOV EBX,dword ptr [ESI]             ; 004d0cc6
    IMUL EBX,EAX                        ; 004d0cc8
    MOV EAX,dword ptr [ESI + 0x24]      ; 004d0ccb
    MOV dword ptr [ESP + 0x44],EBX      ; 004d0cce
    ADD EBX,EDI                         ; 004d0cd2
    MOVSX EBX,word ptr [EAX + EBX*0x4]  ; 004d0cd4
    MOV EDI,dword ptr [ESI + 0x20]      ; 004d0cd8
    IMUL EBX,EDI                        ; 004d0cdb
    MOV dword ptr [ESP + 0x3c],EBX      ; 004d0cde
    MOV EBX,dword ptr [ESI + 0x8]       ; 004d0ce2
    MOV EDI,dword ptr [ESP + 0x44]      ; 004d0ce5
    AND EBX,EDX                         ; 004d0ce9
    ADD EBX,EDI                         ; 004d0ceb
    MOVSX EBX,word ptr [EAX + EBX*0x4]  ; 004d0ced
    IMUL EBX,dword ptr [ESI + 0x20]     ; 004d0cf1
    AND ECX,dword ptr [ESI + 0xc]       ; 004d0cf5
    IMUL ECX,dword ptr [ESI]            ; 004d0cf8
    AND EDX,dword ptr [ESI + 0xc]       ; 004d0cfb
    ADD EDX,ECX                         ; 004d0cfe
    MOVSX EAX,word ptr [EAX + EDX*0x4]  ; 004d0d00
    MOV EDX,dword ptr [ESI + 0x20]      ; 004d0d04
    IMUL EDX,EAX                        ; 004d0d07
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004d0d0a
    SUB EAX,EBX                         ; 004d0d0e
    MOV dword ptr [ESP + 0x24],EAX      ; 004d0d10
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004d0d14
    SHL EAX,0x8                         ; 004d0d17
    LEA EDI,[ESP + 0x24]                ; 004d0d1a
    MOV dword ptr [ESP + 0x28],EAX      ; 004d0d1e
    LEA EAX,[ESP + 0x24]                ; 004d0d22
    SUB EBX,EDX                         ; 004d0d26
    PUSH EAX                            ; 004d0d28
    LEA ESI,[ESP + 0x10]                ; 004d0d29
    MOV dword ptr [ESP + 0x30],EBX      ; 004d0d2d
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_004e61c0 ; 004d0d31
        ;   XREF to: 004e61c0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFloat_FUN_004e61c0()
    LEA ESI,[ESP + 0x10]                ; 004d0d36
    ADD ESP,0x4                         ; 004d0d3a
        ;   Label: LAB_004d0d3a
    MOVSD ES:EDI,ESI                    ; 004d0d3d
    MOVSD ES:EDI,ESI                    ; 004d0d3e
    MOVSD ES:EDI,ESI                    ; 004d0d3f
    LEA ESI,[ESP + 0x24]                ; 004d0d40
    MOV EDI,EBP                         ; 004d0d44
    MOVSD ES:EDI,ESI                    ; 004d0d46
    MOVSD ES:EDI,ESI                    ; 004d0d47
    MOVSD ES:EDI,ESI                    ; 004d0d48
    MOV EAX,EBP                         ; 004d0d49
    ADD ESP,0x54                        ; 004d0d4b
    POP EBP                             ; 004d0d4e
    POP EDI                             ; 004d0d4f
    POP EBX                             ; 004d0d50
    RET                                 ; 004d0d51
    IMUL EAX,dword ptr [ESI]            ; 004d0d52
        ;   Label: LAB_004d0d52
    ADD EAX,EDI                         ; 004d0d55
    MOV EBX,dword ptr [ESI + 0x24]      ; 004d0d57
    SHL EAX,0x2                         ; 004d0d5a
    ADD EAX,EBX                         ; 004d0d5d
    MOV dword ptr [ESP + 0x44],EBX      ; 004d0d5f
    MOVSX EAX,word ptr [EAX]            ; 004d0d63
    MOV EBX,dword ptr [ESI + 0x20]      ; 004d0d66
    IMUL EAX,EBX                        ; 004d0d69
    MOV dword ptr [ESP + 0x3c],EAX      ; 004d0d6c
    MOV EAX,dword ptr [ESI + 0xc]       ; 004d0d70
    AND EAX,ECX                         ; 004d0d73
    IMUL EAX,dword ptr [ESI]            ; 004d0d75
    AND EDX,dword ptr [ESI + 0x8]       ; 004d0d78
    ADD EDX,EAX                         ; 004d0d7b
    MOV ECX,dword ptr [ESP + 0x44]      ; 004d0d7d
    SHL EDX,0x2                         ; 004d0d81
    ADD EDX,ECX                         ; 004d0d84
    MOVSX EDX,word ptr [EDX]            ; 004d0d86
    MOV ECX,dword ptr [ESI + 0x20]      ; 004d0d89
    IMUL ECX,EDX                        ; 004d0d8c
    ADD EAX,EDI                         ; 004d0d8f
    MOV EBX,dword ptr [ESP + 0x44]      ; 004d0d91
    SHL EAX,0x2                         ; 004d0d95
    ADD EAX,EBX                         ; 004d0d98
    MOV EDI,dword ptr [ESI + 0x20]      ; 004d0d9a
    MOVSX EDX,word ptr [EAX]            ; 004d0d9d
    IMUL EDX,EDI                        ; 004d0da0
    MOV EAX,EDX                         ; 004d0da3
    SUB EAX,ECX                         ; 004d0da5
    MOV dword ptr [ESP + 0x24],EAX      ; 004d0da7
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004d0dab
    SHL EAX,0x8                         ; 004d0dae
    MOV dword ptr [ESP + 0x28],EAX      ; 004d0db1
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004d0db5
    SUB EAX,EDX                         ; 004d0db9
    MOV dword ptr [ESP + 0x2c],EAX      ; 004d0dbb
    LEA EAX,[ESP + 0x24]                ; 004d0dbf
    PUSH EAX                            ; 004d0dc3
    LEA ESI,[ESP + 0x34]                ; 004d0dc4
    LEA EDI,[ESP + 0x28]                ; 004d0dc8
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_004e61c0 ; 004d0dcc
        ;   XREF to: 004e61c0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFloat_FUN_004e61c0()
    LEA ESI,[ESP + 0x34]                ; 004d0dd1
    JMP 0x004d0d3a                      ; 004d0dd5
        ;   XREF to: 004d0d3a (UNCONDITIONAL_JUMP)  ; LAB_004d0d3a
    MOV EBX,0x10000                     ; 004d0dda
        ;   Label: LAB_004d0dda
    SUB EBX,dword ptr [ESP + 0x4c]      ; 004d0ddf
    CMP EBX,dword ptr [ESP + 0x50]      ; 004d0de3
    JLE 0x004d0e80                      ; 004d0de7
        ;   XREF to: 004d0e80 (CONDITIONAL_JUMP)  ; LAB_004d0e80
    MOV EBX,dword ptr [ESI]             ; 004d0ded
    IMUL EBX,EAX                        ; 004d0def
    MOV dword ptr [ESP + 0x44],EBX      ; 004d0df2
    LEA EAX,[EBX + EDI*0x1]             ; 004d0df6
    SHL EAX,0x2                         ; 004d0df9
    MOV EBX,dword ptr [ESI + 0x24]      ; 004d0dfc
    ADD EAX,EBX                         ; 004d0dff
    MOV dword ptr [ESP + 0x48],EBX      ; 004d0e01
    MOVSX EAX,word ptr [EAX]            ; 004d0e05
    MOV EBX,dword ptr [ESI + 0x20]      ; 004d0e08
    IMUL EBX,EAX                        ; 004d0e0b
    AND EDX,dword ptr [ESI + 0x8]       ; 004d0e0e
    ADD EDX,dword ptr [ESP + 0x44]      ; 004d0e11
    MOV EAX,dword ptr [ESP + 0x48]      ; 004d0e15
    SHL EDX,0x2                         ; 004d0e19
    ADD EDX,EAX                         ; 004d0e1c
    MOVSX EAX,word ptr [EDX]            ; 004d0e1e
    MOV EDX,dword ptr [ESI + 0x20]      ; 004d0e21
    IMUL EAX,EDX                        ; 004d0e24
    MOV dword ptr [ESP + 0x40],EAX      ; 004d0e27
    MOV EAX,dword ptr [ESI + 0xc]       ; 004d0e2b
    MOV EDX,dword ptr [ESI]             ; 004d0e2e
    AND ECX,EAX                         ; 004d0e30
    IMUL ECX,EDX                        ; 004d0e32
    ADD EDI,ECX                         ; 004d0e35
    MOV ECX,dword ptr [ESP + 0x48]      ; 004d0e37
    SHL EDI,0x2                         ; 004d0e3b
    ADD EDI,ECX                         ; 004d0e3e
    MOV EDX,dword ptr [ESI + 0x20]      ; 004d0e40
    MOVSX EAX,word ptr [EDI]            ; 004d0e43
    IMUL EDX,EAX                        ; 004d0e46
    MOV EDI,dword ptr [ESP + 0x40]      ; 004d0e49
    MOV EAX,EBX                         ; 004d0e4d
    SUB EAX,EDI                         ; 004d0e4f
    MOV dword ptr [ESP + 0x24],EAX      ; 004d0e51
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004d0e55
    SHL EAX,0x8                         ; 004d0e58
    SUB EBX,EDX                         ; 004d0e5b
    MOV dword ptr [ESP + 0x28],EAX      ; 004d0e5d
    LEA EAX,[ESP + 0x24]                ; 004d0e61
    LEA EDI,[ESP + 0x24]                ; 004d0e65
    PUSH EAX                            ; 004d0e69
    LEA ESI,[ESP + 0x4]                 ; 004d0e6a
    MOV dword ptr [ESP + 0x30],EBX      ; 004d0e6e
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_004e61c0 ; 004d0e72
        ;   XREF to: 004e61c0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFloat_FUN_004e61c0()
    LEA ESI,[ESP + 0x4]                 ; 004d0e77
    JMP 0x004d0d3a                      ; 004d0e7b
        ;   XREF to: 004d0d3a (UNCONDITIONAL_JUMP)  ; LAB_004d0d3a
    MOV EBX,dword ptr [ESI + 0x8]       ; 004d0e80
        ;   Label: LAB_004d0e80
    AND EBX,EDX                         ; 004d0e83
    MOV dword ptr [ESP + 0x48],EBX      ; 004d0e85
    IMUL EAX,dword ptr [ESI]            ; 004d0e89
    ADD EAX,dword ptr [ESP + 0x48]      ; 004d0e8c
    LEA EDX,[EAX*0x4 + 0x0]             ; 004d0e90
    MOV EAX,dword ptr [ESI + 0x24]      ; 004d0e97
    MOV EBX,dword ptr [ESI + 0x20]      ; 004d0e9a
    MOVSX EDX,word ptr [EDX + EAX*0x1]  ; 004d0e9d
    IMUL EBX,EDX                        ; 004d0ea1
    MOV dword ptr [ESP + 0x40],EBX      ; 004d0ea4
    MOV EBX,dword ptr [ESI + 0xc]       ; 004d0ea8
    MOV EDX,dword ptr [ESI]             ; 004d0eab
    AND ECX,EBX                         ; 004d0ead
    IMUL ECX,EDX                        ; 004d0eaf
    MOV EDX,dword ptr [ESP + 0x48]      ; 004d0eb2
    ADD EDX,ECX                         ; 004d0eb6
    MOV EBX,dword ptr [ESI + 0x20]      ; 004d0eb8
    MOVSX EDX,word ptr [EAX + EDX*0x4]  ; 004d0ebb
    IMUL EDX,EBX                        ; 004d0ebf
    ADD ECX,EDI                         ; 004d0ec2
    MOVSX EAX,word ptr [EAX + ECX*0x4]  ; 004d0ec4
    IMUL EAX,EBX                        ; 004d0ec8
    SUB EAX,EDX                         ; 004d0ecb
    MOV dword ptr [ESP + 0x24],EAX      ; 004d0ecd
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004d0ed1
    SHL EAX,0x8                         ; 004d0ed4
    MOV dword ptr [ESP + 0x28],EAX      ; 004d0ed7
    MOV EAX,dword ptr [ESP + 0x40]      ; 004d0edb
    SUB EAX,EDX                         ; 004d0edf
    MOV dword ptr [ESP + 0x2c],EAX      ; 004d0ee1
    LEA EAX,[ESP + 0x24]                ; 004d0ee5
    PUSH EAX                            ; 004d0ee9
    LEA ESI,[ESP + 0x1c]                ; 004d0eea
    LEA EDI,[ESP + 0x28]                ; 004d0eee
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_004e61c0 ; 004d0ef2
        ;   XREF to: 004e61c0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFloat_FUN_004e61c0()
    LEA ESI,[ESP + 0x1c]                ; 004d0ef7
    JMP 0x004d0d3a                      ; 004d0efb
        ;   XREF to: 004d0d3a (UNCONDITIONAL_JUMP)  ; LAB_004d0d3a

