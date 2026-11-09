; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00442c00(undefined4 param_1,int *param_2,int *param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442c00
        ;   Label: support_codec.cpp_FUN_00442c00
    PUSH ESI                            ; 00442c01
    PUSH EDI                            ; 00442c02
    PUSH EBP                            ; 00442c03
    MOV EDI,dword ptr [ESP + 0x18]      ; 00442c04
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00442c08
    PUSH EDI                            ; 00442c0c
        ;   Label: LAB_00442c0c
    MOV EAX,dword ptr [EDI]             ; 00442c0d
    CALL dword ptr [EAX + 0x4]          ; 00442c0f
    MOV EBX,EAX                         ; 00442c12
    ADD ESP,0x4                         ; 00442c14
    MOV EDX,EAX                         ; 00442c17
    CMP EAX,-0x1                        ; 00442c19
    JZ 0x00442c29                       ; 00442c1c
        ;   XREF to: 00442c29 (CONDITIONAL_JUMP)  ; LAB_00442c29
    TEST EAX,EAX                        ; 00442c1e
    JGE 0x00442c33                      ; 00442c20
        ;   XREF to: 00442c33 (CONDITIONAL_JUMP)  ; LAB_00442c33
    XOR EAX,EAX                         ; 00442c22
        ;   Label: LAB_00442c22
    POP EBP                             ; 00442c24
    POP EDI                             ; 00442c25
    POP ESI                             ; 00442c26
    POP EBX                             ; 00442c27
    RET                                 ; 00442c28
    MOV EAX,0x1                         ; 00442c29
        ;   Label: LAB_00442c29
    POP EBP                             ; 00442c2e
    POP EDI                             ; 00442c2f
    POP ESI                             ; 00442c30
    POP EBX                             ; 00442c31
    RET                                 ; 00442c32
    MOVZX ESI,DL                        ; 00442c33
        ;   Label: LAB_00442c33
    PUSH ESI                            ; 00442c36
    MOV EAX,dword ptr [EBP]             ; 00442c37
    PUSH EBP                            ; 00442c3a
    CALL dword ptr [EAX + 0x4]          ; 00442c3b
    MOV ESI,EAX                         ; 00442c3e
    ADD ESP,0x8                         ; 00442c40
    TEST EAX,EAX                        ; 00442c43
    JGE 0x00442c0c                      ; 00442c45
        ;   XREF to: 00442c0c (CONDITIONAL_JUMP)  ; LAB_00442c0c
    PUSH EBX                            ; 00442c47
    MOV EAX,dword ptr [EDI]             ; 00442c48
    PUSH EDI                            ; 00442c4a
    CALL dword ptr [EAX + 0x8]          ; 00442c4b
    ADD ESP,0x8                         ; 00442c4e
    TEST EAX,EAX                        ; 00442c51
    JZ 0x00442c22                       ; 00442c53
        ;   XREF to: 00442c22 (CONDITIONAL_JUMP)  ; LAB_00442c22
    CMP ESI,-0x1                        ; 00442c55
    JNZ 0x00442c22                      ; 00442c58
        ;   XREF to: 00442c22 (CONDITIONAL_JUMP)  ; LAB_00442c22
    MOV EAX,0x2                         ; 00442c5a
    POP EBP                             ; 00442c5f
    POP EDI                             ; 00442c60
    POP ESI                             ; 00442c61
    POP EBX                             ; 00442c62
    RET                                 ; 00442c63

