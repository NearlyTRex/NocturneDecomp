; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c0bba(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005b9c39 at 005b9c5f
;
; Called Functions:
;   unkafter_morph.cpp_FUN_005c40e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0bba
        ;   Label: crt_unknown.c_FUN_005c0bba
    PUSH ESI                            ; 005c0bbb
    PUSH EBP                            ; 005c0bbc
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c0bbd
    CMP dword ptr [EBX + 0x2c],-0x1     ; 005c0bc1
    JNZ 0x005c0c59                      ; 005c0bc5
        ;   XREF to: 005c0c59 (CONDITIONAL_JUMP)  ; LAB_005c0c59
    MOV AH,byte ptr [ESP + 0x18]        ; 005c0bcb
    TEST AH,0x8                         ; 005c0bcf
    JNZ 0x005c0c5f                      ; 005c0bd2
        ;   XREF to: 005c0c5f (CONDITIONAL_JUMP)  ; LAB_005c0c5f
    MOV DH,byte ptr [ESP + 0x18]        ; 005c0bd8
        ;   Label: LAB_005c0bd8
    TEST DH,0x2                         ; 005c0bdc
    JZ 0x005c0bef                       ; 005c0bdf
        ;   XREF to: 005c0bef (CONDITIONAL_JUMP)  ; LAB_005c0bef
    TEST DH,0xd                         ; 005c0be1
    JNZ 0x005c0bef                      ; 005c0be4
        ;   XREF to: 005c0bef (CONDITIONAL_JUMP)  ; LAB_005c0bef
    MOV CH,DH                           ; 005c0be6
    OR CH,0x10                          ; 005c0be8
    MOV byte ptr [ESP + 0x18],CH        ; 005c0beb
    TEST byte ptr [ESP + 0x19],0x1      ; 005c0bef
        ;   Label: LAB_005c0bef
    JZ 0x005c0bfd                       ; 005c0bf4
        ;   XREF to: 005c0bfd (CONDITIONAL_JUMP)  ; LAB_005c0bfd
    TEST byte ptr [ESP + 0x18],0x80     ; 005c0bf6
    JNZ 0x005c0c59                      ; 005c0bfb
        ;   XREF to: 005c0c59 (CONDITIONAL_JUMP)  ; LAB_005c0c59
    MOV DL,byte ptr [ESP + 0x18]        ; 005c0bfd
        ;   Label: LAB_005c0bfd
    TEST DL,0x40                        ; 005c0c01
    JZ 0x005c0c0b                       ; 005c0c04
        ;   XREF to: 005c0c0b (CONDITIONAL_JUMP)  ; LAB_005c0c0b
    TEST DL,0x20                        ; 005c0c06
    JNZ 0x005c0c59                      ; 005c0c09
        ;   XREF to: 005c0c59 (CONDITIONAL_JUMP)  ; LAB_005c0c59
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005c0c0b
        ;   Label: LAB_005c0c0b
    PUSH ECX                            ; 005c0c0f
    LEA EAX,[ESP + 0x1c]                ; 005c0c10
    PUSH EAX                            ; 005c0c14
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005c0c15
    PUSH ESI                            ; 005c0c19
    CALL unkafter_morph.cpp_FUN_005c40e0 ; 005c0c1a
        ;   XREF to: 005c40e0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c40e0()
    ADD ESP,0xc                         ; 005c0c1f
    MOV dword ptr [EBX + 0x2c],EAX      ; 005c0c22
    TEST EAX,EAX                        ; 005c0c25
    JL 0x005c0c6d                       ; 005c0c27
        ;   XREF to: 005c0c6d (CONDITIONAL_JUMP)  ; LAB_005c0c6d
    MOV CL,byte ptr [EBX + 0x39]        ; 005c0c29
    MOV EAX,dword ptr [ESP + 0x18]      ; 005c0c2c
    AND CL,0xfe                         ; 005c0c30
    MOV dword ptr [EBX + 0x30],EAX      ; 005c0c33
    MOV byte ptr [EBX + 0x39],CL        ; 005c0c36
    TEST byte ptr [ESP + 0x18],0x4      ; 005c0c39
    JZ 0x005c0c53                       ; 005c0c3e
        ;   XREF to: 005c0c53 (CONDITIONAL_JUMP)  ; LAB_005c0c53
    MOV EBP,dword ptr [ESP + 0x18]      ; 005c0c40
    PUSH EBP                            ; 005c0c44
    PUSH 0x2                            ; 005c0c45
    PUSH 0x0                            ; 005c0c47
    MOV EAX,dword ptr [EBX + 0x28]      ; 005c0c49
    PUSH EBX                            ; 005c0c4c
    CALL dword ptr [EAX + 0x18]         ; 005c0c4d
    ADD ESP,0x10                        ; 005c0c50
    MOV EAX,EBX                         ; 005c0c53
        ;   Label: LAB_005c0c53
    POP EBP                             ; 005c0c55
    POP ESI                             ; 005c0c56
    POP EBX                             ; 005c0c57
    RET                                 ; 005c0c58
    XOR EAX,EAX                         ; 005c0c59
        ;   Label: LAB_005c0c59
    POP EBP                             ; 005c0c5b
    POP ESI                             ; 005c0c5c
    POP EBX                             ; 005c0c5d
    RET                                 ; 005c0c5e
    MOV DL,AH                           ; 005c0c5f
        ;   Label: LAB_005c0c5f
    OR DL,0x2                           ; 005c0c61
    MOV byte ptr [ESP + 0x18],DL        ; 005c0c64
    JMP 0x005c0bd8                      ; 005c0c68
        ;   XREF to: 005c0bd8 (UNCONDITIONAL_JUMP)  ; LAB_005c0bd8
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 005c0c6d
        ;   Label: LAB_005c0c6d
    JMP 0x005c0c59                      ; 005c0c74
        ;   XREF to: 005c0c59 (UNCONDITIONAL_JUMP)  ; LAB_005c0c59

