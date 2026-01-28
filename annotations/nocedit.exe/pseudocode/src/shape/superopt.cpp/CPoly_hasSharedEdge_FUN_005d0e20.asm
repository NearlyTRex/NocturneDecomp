; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_superopt_cpp_CPoly_hasSharedEdge_FUN_005d0e20(CPoly *this_ptr,CPoly *other)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; CPoly *          Stack[0x8]:4   other
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d0e20
        ;   Label: shape_superopt.cpp_CPoly_hasSharedEdge_FUN_005d0e20
    PUSH ESI                            ; 005d0e21
    PUSH EDI                            ; 005d0e22
    PUSH EBP                            ; 005d0e23
    MOV EAX,dword ptr [ESP + 0x14]      ; 005d0e24
    MOV EDX,dword ptr [ESP + 0x18]      ; 005d0e28
    MOV ECX,dword ptr [EAX + 0x4]       ; 005d0e2c
    MOV EBX,dword ptr [EDX + 0x8]       ; 005d0e2f
    ADD EDX,0x4                         ; 005d0e32
    ADD EAX,0x4                         ; 005d0e35
    CMP ECX,EBX                         ; 005d0e38
    JNZ 0x005d0e47                      ; 005d0e3a
        ;   XREF to: 005d0e47 (CONDITIONAL_JUMP)  ; LAB_005d0e47
    MOV ESI,dword ptr [EDX]             ; 005d0e3c
    CMP ESI,dword ptr [EAX + 0x4]       ; 005d0e3e
    JZ 0x005d0ec5                       ; 005d0e41
        ;   XREF to: 005d0ec5 (CONDITIONAL_JUMP)  ; LAB_005d0ec5
    MOV EDI,dword ptr [EDX + 0x8]       ; 005d0e47
        ;   Label: LAB_005d0e47
    CMP EDI,dword ptr [EAX]             ; 005d0e4a
    JNZ 0x005d0e5a                      ; 005d0e4c
        ;   XREF to: 005d0e5a (CONDITIONAL_JUMP)  ; LAB_005d0e5a
    MOV EBP,dword ptr [EDX + 0x4]       ; 005d0e4e
    CMP EBP,dword ptr [EAX + 0x4]       ; 005d0e51
    JZ 0x005d0ec5                       ; 005d0e54
        ;   XREF to: 005d0ec5 (CONDITIONAL_JUMP)  ; LAB_005d0ec5
    MOV EBX,dword ptr [EDX]             ; 005d0e5a
        ;   Label: LAB_005d0e5a
    CMP EBX,dword ptr [EAX]             ; 005d0e5c
    JNZ 0x005d0e6c                      ; 005d0e5e
        ;   XREF to: 005d0e6c (CONDITIONAL_JUMP)  ; LAB_005d0e6c
    MOV ESI,dword ptr [EDX + 0x8]       ; 005d0e60
    CMP ESI,dword ptr [EAX + 0x4]       ; 005d0e63
    JZ 0x005d0ec5                       ; 005d0e66
        ;   XREF to: 005d0ec5 (CONDITIONAL_JUMP)  ; LAB_005d0ec5
    MOV EDI,dword ptr [EDX + 0x8]       ; 005d0e6c
        ;   Label: LAB_005d0e6c
    CMP EDI,dword ptr [EAX + 0x4]       ; 005d0e6f
    JNZ 0x005d0e7c                      ; 005d0e72
        ;   XREF to: 005d0e7c (CONDITIONAL_JUMP)  ; LAB_005d0e7c
    MOV EBP,dword ptr [EDX + 0x4]       ; 005d0e74
    CMP EBP,dword ptr [EAX + 0x8]       ; 005d0e77
    JZ 0x005d0ec5                       ; 005d0e7a
        ;   XREF to: 005d0ec5 (CONDITIONAL_JUMP)  ; LAB_005d0ec5
    MOV EBX,dword ptr [EDX]             ; 005d0e7c
        ;   Label: LAB_005d0e7c
    CMP EBX,dword ptr [EAX + 0x4]       ; 005d0e7e
    JNZ 0x005d0e8b                      ; 005d0e81
        ;   XREF to: 005d0e8b (CONDITIONAL_JUMP)  ; LAB_005d0e8b
    MOV ESI,dword ptr [EDX + 0x8]       ; 005d0e83
    CMP ESI,dword ptr [EAX + 0x8]       ; 005d0e86
    JZ 0x005d0ec5                       ; 005d0e89
        ;   XREF to: 005d0ec5 (CONDITIONAL_JUMP)  ; LAB_005d0ec5
    MOV EDI,dword ptr [EDX + 0x4]       ; 005d0e8b
        ;   Label: LAB_005d0e8b
    CMP EDI,dword ptr [EAX + 0x4]       ; 005d0e8e
    JNZ 0x005d0e9a                      ; 005d0e91
        ;   XREF to: 005d0e9a (CONDITIONAL_JUMP)  ; LAB_005d0e9a
    MOV EBP,dword ptr [EDX]             ; 005d0e93
    CMP EBP,dword ptr [EAX + 0x8]       ; 005d0e95
    JZ 0x005d0ec5                       ; 005d0e98
        ;   XREF to: 005d0ec5 (CONDITIONAL_JUMP)  ; LAB_005d0ec5
    MOV EBX,dword ptr [EDX]             ; 005d0e9a
        ;   Label: LAB_005d0e9a
    CMP EBX,dword ptr [EAX + 0x8]       ; 005d0e9c
    JNZ 0x005d0ea8                      ; 005d0e9f
        ;   XREF to: 005d0ea8 (CONDITIONAL_JUMP)  ; LAB_005d0ea8
    MOV ESI,dword ptr [EDX + 0x8]       ; 005d0ea1
    CMP ESI,dword ptr [EAX]             ; 005d0ea4
    JZ 0x005d0ec5                       ; 005d0ea6
        ;   XREF to: 005d0ec5 (CONDITIONAL_JUMP)  ; LAB_005d0ec5
    MOV EDI,dword ptr [EDX + 0x4]       ; 005d0ea8
        ;   Label: LAB_005d0ea8
    CMP EDI,dword ptr [EAX + 0x8]       ; 005d0eab
    JNZ 0x005d0eb6                      ; 005d0eae
        ;   XREF to: 005d0eb6 (CONDITIONAL_JUMP)  ; LAB_005d0eb6
    MOV EBP,dword ptr [EDX]             ; 005d0eb0
    CMP EBP,dword ptr [EAX]             ; 005d0eb2
    JZ 0x005d0ec5                       ; 005d0eb4
        ;   XREF to: 005d0ec5 (CONDITIONAL_JUMP)  ; LAB_005d0ec5
    MOV EBX,dword ptr [EDX + 0x8]       ; 005d0eb6
        ;   Label: LAB_005d0eb6
    CMP EBX,dword ptr [EAX + 0x8]       ; 005d0eb9
    JNZ 0x005d0ecf                      ; 005d0ebc
        ;   XREF to: 005d0ecf (CONDITIONAL_JUMP)  ; LAB_005d0ecf
    MOV ESI,dword ptr [EDX + 0x4]       ; 005d0ebe
    CMP ESI,dword ptr [EAX]             ; 005d0ec1
    JNZ 0x005d0ecf                      ; 005d0ec3
        ;   XREF to: 005d0ecf (CONDITIONAL_JUMP)  ; LAB_005d0ecf
    MOV EAX,0x1                         ; 005d0ec5
        ;   Label: LAB_005d0ec5
    POP EBP                             ; 005d0eca
    POP EDI                             ; 005d0ecb
    POP ESI                             ; 005d0ecc
    POP EBX                             ; 005d0ecd
    RET                                 ; 005d0ece
    XOR EAX,EAX                         ; 005d0ecf
        ;   Label: LAB_005d0ecf
    POP EBP                             ; 005d0ed1
    POP EDI                             ; 005d0ed2
    POP ESI                             ; 005d0ed3
    POP EBX                             ; 005d0ed4
    RET                                 ; 005d0ed5

