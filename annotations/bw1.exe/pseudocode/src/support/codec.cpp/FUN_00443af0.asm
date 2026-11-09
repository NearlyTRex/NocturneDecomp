; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00443af0(undefined4 param_1,int *param_2,int *param_3)
;
;
; Called Functions:
;   support_codec.cpp_FUN_00443a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443af0
        ;   Label: support_codec.cpp_FUN_00443af0
    PUSH ESI                            ; 00443af1
    PUSH EDI                            ; 00443af2
    PUSH EBP                            ; 00443af3
    MOV EDI,dword ptr [ESP + 0x18]      ; 00443af4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00443af8
    PUSH EDI                            ; 00443afc
        ;   Label: LAB_00443afc
    MOV EAX,dword ptr [EDI]             ; 00443afd
    CALL dword ptr [EAX + 0x4]          ; 00443aff
    ADD ESP,0x4                         ; 00443b02
    MOV EBX,EAX                         ; 00443b05
    CMP EAX,-0x1                        ; 00443b07
    JZ 0x00443b17                       ; 00443b0a
        ;   XREF to: 00443b17 (CONDITIONAL_JUMP)  ; LAB_00443b17
    TEST EAX,EAX                        ; 00443b0c
    JGE 0x00443b21                      ; 00443b0e
        ;   XREF to: 00443b21 (CONDITIONAL_JUMP)  ; LAB_00443b21
    XOR EAX,EAX                         ; 00443b10
        ;   Label: LAB_00443b10
    POP EBP                             ; 00443b12
    POP EDI                             ; 00443b13
    POP ESI                             ; 00443b14
    POP EBX                             ; 00443b15
    RET                                 ; 00443b16
    MOV EAX,0x1                         ; 00443b17
        ;   Label: LAB_00443b17
    POP EBP                             ; 00443b1c
    POP EDI                             ; 00443b1d
    POP ESI                             ; 00443b1e
    POP EBX                             ; 00443b1f
    RET                                 ; 00443b20
    XOR EAX,EAX                         ; 00443b21
        ;   Label: LAB_00443b21
    MOV AL,BL                           ; 00443b23
    PUSH EAX                            ; 00443b25
    MOV EDX,dword ptr [ESP + 0x18]      ; 00443b26
    PUSH EDX                            ; 00443b2a
    XOR EBX,EBX                         ; 00443b2b
    CALL support_codec.cpp_FUN_00443a80 ; 00443b2d
        ;   XREF to: 00443a80 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00443a80()
    MOV BL,AL                           ; 00443b32
    XOR EAX,EAX                         ; 00443b34
    ADD ESP,0x8                         ; 00443b36
    MOV AL,BL                           ; 00443b39
    PUSH EAX                            ; 00443b3b
    MOV ESI,dword ptr [EBP]             ; 00443b3c
    PUSH EBP                            ; 00443b3f
    CALL dword ptr [ESI + 0x4]          ; 00443b40
    MOV ESI,EAX                         ; 00443b43
    ADD ESP,0x8                         ; 00443b45
    TEST EAX,EAX                        ; 00443b48
    JGE 0x00443afc                      ; 00443b4a
        ;   XREF to: 00443afc (CONDITIONAL_JUMP)  ; LAB_00443afc
    PUSH EBX                            ; 00443b4c
    MOV EAX,dword ptr [EDI]             ; 00443b4d
    PUSH EDI                            ; 00443b4f
    CALL dword ptr [EAX + 0x8]          ; 00443b50
    ADD ESP,0x8                         ; 00443b53
    TEST EAX,EAX                        ; 00443b56
    JZ 0x00443b10                       ; 00443b58
        ;   XREF to: 00443b10 (CONDITIONAL_JUMP)  ; LAB_00443b10
    CMP ESI,-0x1                        ; 00443b5a
    JNZ 0x00443b10                      ; 00443b5d
        ;   XREF to: 00443b10 (CONDITIONAL_JUMP)  ; LAB_00443b10
    MOV EAX,0x2                         ; 00443b5f
    POP EBP                             ; 00443b64
    POP EDI                             ; 00443b65
    POP ESI                             ; 00443b66
    POP EBX                             ; 00443b67
    RET                                 ; 00443b68

