; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c8e7a(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)
;
;
; XREF[1]:
;   crt_unknown.c_openFile_FUN_005c2019 at 005c203f
;
; Called Functions:
;   crt_unknown.c_FUN_005cc3e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c8e7a
        ;   Label: crt_unknown.c_FUN_005c8e7a
    PUSH ESI                            ; 005c8e7b
    PUSH EBP                            ; 005c8e7c
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c8e7d
    CMP dword ptr [EBX + 0x2c],-0x1     ; 005c8e81
    JNZ 0x005c8f19                      ; 005c8e85
        ;   XREF to: 005c8f19 (CONDITIONAL_JUMP)  ; LAB_005c8f19
    MOV AH,byte ptr [ESP + 0x18]        ; 005c8e8b
    TEST AH,0x8                         ; 005c8e8f
    JNZ 0x005c8f1f                      ; 005c8e92
        ;   XREF to: 005c8f1f (CONDITIONAL_JUMP)  ; LAB_005c8f1f
    MOV DH,byte ptr [ESP + 0x18]        ; 005c8e98
        ;   Label: LAB_005c8e98
    TEST DH,0x2                         ; 005c8e9c
    JZ 0x005c8eaf                       ; 005c8e9f
        ;   XREF to: 005c8eaf (CONDITIONAL_JUMP)  ; LAB_005c8eaf
    TEST DH,0xd                         ; 005c8ea1
    JNZ 0x005c8eaf                      ; 005c8ea4
        ;   XREF to: 005c8eaf (CONDITIONAL_JUMP)  ; LAB_005c8eaf
    MOV CH,DH                           ; 005c8ea6
    OR CH,0x10                          ; 005c8ea8
    MOV byte ptr [ESP + 0x18],CH        ; 005c8eab
    TEST byte ptr [ESP + 0x19],0x1      ; 005c8eaf
        ;   Label: LAB_005c8eaf
    JZ 0x005c8ebd                       ; 005c8eb4
        ;   XREF to: 005c8ebd (CONDITIONAL_JUMP)  ; LAB_005c8ebd
    TEST byte ptr [ESP + 0x18],0x80     ; 005c8eb6
    JNZ 0x005c8f19                      ; 005c8ebb
        ;   XREF to: 005c8f19 (CONDITIONAL_JUMP)  ; LAB_005c8f19
    MOV DL,byte ptr [ESP + 0x18]        ; 005c8ebd
        ;   Label: LAB_005c8ebd
    TEST DL,0x40                        ; 005c8ec1
    JZ 0x005c8ecb                       ; 005c8ec4
        ;   XREF to: 005c8ecb (CONDITIONAL_JUMP)  ; LAB_005c8ecb
    TEST DL,0x20                        ; 005c8ec6
    JNZ 0x005c8f19                      ; 005c8ec9
        ;   XREF to: 005c8f19 (CONDITIONAL_JUMP)  ; LAB_005c8f19
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005c8ecb
        ;   Label: LAB_005c8ecb
    PUSH ECX                            ; 005c8ecf
    LEA EAX,[ESP + 0x1c]                ; 005c8ed0
    PUSH EAX                            ; 005c8ed4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005c8ed5
    PUSH ESI                            ; 005c8ed9
    CALL crt_unknown.c_FUN_005cc3e0     ; 005c8eda
        ;   XREF to: 005cc3e0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cc3e0()
    ADD ESP,0xc                         ; 005c8edf
    MOV dword ptr [EBX + 0x2c],EAX      ; 005c8ee2
    TEST EAX,EAX                        ; 005c8ee5
    JL 0x005c8f2d                       ; 005c8ee7
        ;   XREF to: 005c8f2d (CONDITIONAL_JUMP)  ; LAB_005c8f2d
    MOV CL,byte ptr [EBX + 0x39]        ; 005c8ee9
    MOV EAX,dword ptr [ESP + 0x18]      ; 005c8eec
    AND CL,0xfe                         ; 005c8ef0
    MOV dword ptr [EBX + 0x30],EAX      ; 005c8ef3
    MOV byte ptr [EBX + 0x39],CL        ; 005c8ef6
    TEST byte ptr [ESP + 0x18],0x4      ; 005c8ef9
    JZ 0x005c8f13                       ; 005c8efe
        ;   XREF to: 005c8f13 (CONDITIONAL_JUMP)  ; LAB_005c8f13
    MOV EBP,dword ptr [ESP + 0x18]      ; 005c8f00
    PUSH EBP                            ; 005c8f04
    PUSH 0x2                            ; 005c8f05
    PUSH 0x0                            ; 005c8f07
    MOV EAX,dword ptr [EBX + 0x28]      ; 005c8f09
    PUSH EBX                            ; 005c8f0c
    CALL dword ptr [EAX + 0x18]         ; 005c8f0d
    ADD ESP,0x10                        ; 005c8f10
    MOV EAX,EBX                         ; 005c8f13
        ;   Label: LAB_005c8f13
    POP EBP                             ; 005c8f15
    POP ESI                             ; 005c8f16
    POP EBX                             ; 005c8f17
    RET                                 ; 005c8f18
    XOR EAX,EAX                         ; 005c8f19
        ;   Label: LAB_005c8f19
    POP EBP                             ; 005c8f1b
    POP ESI                             ; 005c8f1c
    POP EBX                             ; 005c8f1d
    RET                                 ; 005c8f1e
    MOV DL,AH                           ; 005c8f1f
        ;   Label: LAB_005c8f1f
    OR DL,0x2                           ; 005c8f21
    MOV byte ptr [ESP + 0x18],DL        ; 005c8f24
    JMP 0x005c8e98                      ; 005c8f28
        ;   XREF to: 005c8e98 (UNCONDITIONAL_JUMP)  ; LAB_005c8e98
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 005c8f2d
        ;   Label: LAB_005c8f2d
    JMP 0x005c8f19                      ; 005c8f34
        ;   XREF to: 005c8f19 (UNCONDITIONAL_JUMP)  ; LAB_005c8f19

