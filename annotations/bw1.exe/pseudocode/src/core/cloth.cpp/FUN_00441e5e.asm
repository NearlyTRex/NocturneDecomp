; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cloth_cpp_FUN_00441e5e(int *param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_cloth.cpp_FUN_0043e620
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 00441e5e
        ;   Label: core_cloth.cpp_FUN_00441e5e
    PUSH EBX                            ; 00441e60
    PUSH ESI                            ; 00441e61
    PUSH EBP                            ; 00441e62
    MOV EBP,dword ptr [ESP + 0x14]      ; 00441e63
    TEST EBP,EBP                        ; 00441e67
    JL 0x00441e73                       ; 00441e69
        ;   XREF to: 00441e73 (CONDITIONAL_JUMP)  ; LAB_00441e73
    MOV EAX,dword ptr [ESP + 0x10]      ; 00441e6b
    CMP EBP,dword ptr [EAX]             ; 00441e6f
    JL 0x00441e96                       ; 00441e71
        ;   XREF to: 00441e96 (CONDITIONAL_JUMP)  ; LAB_00441e96
    MOV ECX,0x5d69e7                    ; 00441e73
        ;   Label: LAB_00441e73
    MOV EBX,0x5f1                       ; 00441e78
    PUSH 0x5d69f9                       ; 00441e7d
    MOV dword ptr [0x01d1d400],ECX      ; 00441e82 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00441e88 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00441e8e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00441e93
    MOV ESI,dword ptr [ESP + 0x10]      ; 00441e96
        ;   Label: LAB_00441e96
    LEA EAX,[EBP*0x4 + 0x0]             ; 00441e9a
    ADD EAX,ESI                         ; 00441ea1
    MOV EAX,dword ptr [EAX + 0x194]     ; 00441ea3
    TEST EAX,EAX                        ; 00441ea9
    JZ 0x00441ec1                       ; 00441eab
        ;   XREF to: 00441ec1 (CONDITIONAL_JUMP)  ; LAB_00441ec1
    PUSH 0x0                            ; 00441ead
    PUSH EAX                            ; 00441eaf
    CALL core_cloth.cpp_FUN_0043e620    ; 00441eb0
        ;   XREF to: 0043e620 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043e620()
    ADD ESP,0x8                         ; 00441eb5
    PUSH EAX                            ; 00441eb8
    CALL crt_unknown.c_FUN_005c0344     ; 00441eb9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00441ebe
    MOV EAX,dword ptr [ESP + 0x10]      ; 00441ec1
        ;   Label: LAB_00441ec1
    INC EBP                             ; 00441ec5
    CMP EBP,dword ptr [EAX]             ; 00441ec6
    JGE 0x00441f2a                      ; 00441ec8
        ;   XREF to: 00441f2a (CONDITIONAL_JUMP)  ; LAB_00441f2a
    PUSH EDI                            ; 00441eca
    LEA ECX,[EBP*0x4 + 0x0]             ; 00441ecb
    LEA ESI,[EAX + 0x4]                 ; 00441ed2
    ADD ECX,EAX                         ; 00441ed5
    LEA EAX,[EBP*0x4 + 0x0]             ; 00441ed7
    ADD EAX,EBP                         ; 00441ede
    SHL EAX,0x3                         ; 00441ee0
    LEA EBX,[EAX + -0x28]               ; 00441ee3
    ADD EBX,ESI                         ; 00441ee6
    LEA EDX,[EAX + ESI*0x1]             ; 00441ee8
    MOV ESI,EDX                         ; 00441eeb
        ;   Label: LAB_00441eeb
    MOV EDI,EBX                         ; 00441eed
    ADD ECX,0x4                         ; 00441eef
    PUSH EDI                            ; 00441ef2
    MOV AL,byte ptr [ESI]               ; 00441ef3
        ;   Label: LAB_00441ef3
    MOV byte ptr [EDI],AL               ; 00441ef5
    CMP AL,0x0                          ; 00441ef7
    JZ 0x00441f0b                       ; 00441ef9
        ;   XREF to: 00441f0b (CONDITIONAL_JUMP)  ; LAB_00441f0b
    MOV AL,byte ptr [ESI + 0x1]         ; 00441efb
    ADD ESI,0x2                         ; 00441efe
    MOV byte ptr [EDI + 0x1],AL         ; 00441f01
    ADD EDI,0x2                         ; 00441f04
    CMP AL,0x0                          ; 00441f07
    JNZ 0x00441ef3                      ; 00441f09
        ;   XREF to: 00441ef3 (CONDITIONAL_JUMP)  ; LAB_00441ef3
    POP EDI                             ; 00441f0b
        ;   Label: LAB_00441f0b
    MOV EAX,dword ptr [ECX + 0x190]     ; 00441f0c
    MOV dword ptr [ECX + 0x18c],EAX     ; 00441f12
    MOV EAX,dword ptr [ESP + 0x14]      ; 00441f18
    INC EBP                             ; 00441f1c
    ADD EBX,0x28                        ; 00441f1d
    MOV ESI,dword ptr [EAX]             ; 00441f20
    ADD EDX,0x28                        ; 00441f22
    CMP EBP,ESI                         ; 00441f25
    JL 0x00441eeb                       ; 00441f27
        ;   XREF to: 00441eeb (CONDITIONAL_JUMP)  ; LAB_00441eeb
    POP EDI                             ; 00441f29
    MOV EAX,dword ptr [ESP + 0x10]      ; 00441f2a
        ;   Label: LAB_00441f2a
    MOV EBP,dword ptr [EAX]             ; 00441f2e
    DEC EBP                             ; 00441f30
    MOV dword ptr [EAX],EBP             ; 00441f31
    LEA EAX,[EBP*0x4 + 0x0]             ; 00441f33
    ADD EAX,EBP                         ; 00441f3a
    MOV EDX,dword ptr [ESP + 0x10]      ; 00441f3c
    SHL EAX,0x3                         ; 00441f40
    ADD EAX,EDX                         ; 00441f43
    MOV byte ptr [EAX + 0x4],0x0        ; 00441f45
    MOV EAX,dword ptr [EDX]             ; 00441f49
    SHL EAX,0x2                         ; 00441f4b
    ADD EAX,EDX                         ; 00441f4e
    MOV dword ptr [EAX + 0x194],0x0     ; 00441f50
    POP EBP                             ; 00441f5a
    POP ESI                             ; 00441f5b
    POP EBX                             ; 00441f5c
    RET                                 ; 00441f5d

