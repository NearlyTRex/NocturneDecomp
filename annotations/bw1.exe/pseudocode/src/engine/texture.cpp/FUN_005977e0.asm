; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_005977e0(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005977e0
        ;   Label: engine_texture.cpp_FUN_005977e0
    PUSH ESI                            ; 005977e1
    PUSH EDI                            ; 005977e2
    PUSH EBP                            ; 005977e3
    SUB ESP,0x4                         ; 005977e4
    MOV ESI,dword ptr [ESP + 0x18]      ; 005977e7
    MOV EBP,dword ptr [ESP + 0x20]      ; 005977eb
    XOR EDX,EDX                         ; 005977ef
    TEST EBP,EBP                        ; 005977f1
    JZ 0x0059787d                       ; 005977f3
        ;   XREF to: 0059787d (CONDITIONAL_JUMP)  ; LAB_0059787d
    MOV ECX,dword ptr [ESI + 0x18004]   ; 005977f9
    XOR EBX,EBX                         ; 005977ff
    TEST ECX,ECX                        ; 00597801
    JLE 0x0059781b                      ; 00597803
        ;   XREF to: 0059781b (CONDITIONAL_JUMP)  ; LAB_0059781b
    MOV EAX,ESI                         ; 00597805
    CMP EBP,dword ptr [EAX + 0x4]       ; 00597807
        ;   Label: LAB_00597807
    JNZ 0x0059780d                      ; 0059780a
        ;   XREF to: 0059780d (CONDITIONAL_JUMP)  ; LAB_0059780d
    INC EDX                             ; 0059780c
    INC EBX                             ; 0059780d
        ;   Label: LAB_0059780d
    MOV ECX,dword ptr [ESI + 0x18004]   ; 0059780e
    ADD EAX,0x60                        ; 00597814
    CMP EBX,ECX                         ; 00597817
    JL 0x00597807                       ; 00597819
        ;   XREF to: 00597807 (CONDITIONAL_JUMP)  ; LAB_00597807
    PUSH EBP                            ; 0059781b
        ;   Label: LAB_0059781b
    PUSH EBP                            ; 0059781c
    PUSH EDX                            ; 0059781d
    PUSH 0x5f7c1b                       ; 0059781e
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00597823
    PUSH EBX                            ; 00597827
    CALL crt_unknown.c_FUN_005c03c0     ; 00597828
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x14                        ; 0059782d
    MOV EDI,dword ptr [ESI + 0x18004]   ; 00597830
    XOR EBX,EBX                         ; 00597836
    TEST EDI,EDI                        ; 00597838
    JLE 0x0059785a                      ; 0059783a
        ;   XREF to: 0059785a (CONDITIONAL_JUMP)  ; LAB_0059785a
    LEA EAX,[ESI + 0x4]                 ; 0059783c
    MOV EDI,ESI                         ; 0059783f
    MOV dword ptr [ESP],EAX             ; 00597841
    IMUL EAX,EBX,0x60                   ; 00597844
        ;   Label: LAB_00597844
    CMP EBP,dword ptr [EDI + 0x4]       ; 00597847
    JZ 0x00597862                       ; 0059784a
        ;   XREF to: 00597862 (CONDITIONAL_JUMP)  ; LAB_00597862
    INC EBX                             ; 0059784c
        ;   Label: LAB_0059784c
    MOV EAX,dword ptr [ESI + 0x18004]   ; 0059784d
    ADD EDI,0x60                        ; 00597853
    CMP EBX,EAX                         ; 00597856
    JL 0x00597844                       ; 00597858
        ;   XREF to: 00597844 (CONDITIONAL_JUMP)  ; LAB_00597844
    ADD ESP,0x4                         ; 0059785a
        ;   Label: LAB_0059785a
    POP EBP                             ; 0059785d
    POP EDI                             ; 0059785e
    POP ESI                             ; 0059785f
    POP EBX                             ; 00597860
    RET                                 ; 00597861
    ADD EAX,dword ptr [ESP]             ; 00597862
        ;   Label: LAB_00597862
    ADD EAX,0x4                         ; 00597865
    PUSH EAX                            ; 00597868
    PUSH 0x5f7c2e                       ; 00597869
    MOV EAX,dword ptr [ESP + 0x24]      ; 0059786e
    PUSH EAX                            ; 00597872
    CALL crt_unknown.c_FUN_005c03c0     ; 00597873
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 00597878
    JMP 0x0059784c                      ; 0059787b
        ;   XREF to: 0059784c (UNCONDITIONAL_JUMP)  ; LAB_0059784c
    MOV EDX,dword ptr [ESI + 0x18004]   ; 0059787d
        ;   Label: LAB_0059787d
    XOR EBX,EBX                         ; 00597883
    XOR EAX,EAX                         ; 00597885
    TEST EDX,EDX                        ; 00597887
    JLE 0x005978d6                      ; 00597889
        ;   XREF to: 005978d6 (CONDITIONAL_JUMP)  ; LAB_005978d6
    LEA ECX,[ESI + 0x4]                 ; 0059788b
    MOV EDI,dword ptr [ECX + 0x44]      ; 0059788e
        ;   Label: LAB_0059788e
    MOV EDX,ECX                         ; 00597891
    TEST EDI,EDI                        ; 00597893
    JZ 0x0059789e                       ; 00597895
        ;   XREF to: 0059789e (CONDITIONAL_JUMP)  ; LAB_0059789e
    MOV EDI,dword ptr [ECX]             ; 00597897
    IMUL EDI,EDI                        ; 00597899
    ADD EAX,EDI                         ; 0059789c
    CMP dword ptr [EDX + 0x48],0x0      ; 0059789e
        ;   Label: LAB_0059789e
    JZ 0x005978ab                       ; 005978a2
        ;   XREF to: 005978ab (CONDITIONAL_JUMP)  ; LAB_005978ab
    MOV EDI,dword ptr [EDX]             ; 005978a4
    IMUL EDI,EDI                        ; 005978a6
    ADD EAX,EDI                         ; 005978a9
    CMP dword ptr [EDX + 0x4c],0x0      ; 005978ab
        ;   Label: LAB_005978ab
    JZ 0x005978b6                       ; 005978af
        ;   XREF to: 005978b6 (CONDITIONAL_JUMP)  ; LAB_005978b6
    ADD EAX,0x300                       ; 005978b1
    CMP dword ptr [EDX + 0x50],0x0      ; 005978b6
        ;   Label: LAB_005978b6
    JZ 0x005978c8                       ; 005978ba
        ;   XREF to: 005978c8 (CONDITIONAL_JUMP)  ; LAB_005978c8
    MOV EDI,dword ptr [EDX]             ; 005978bc
    MOV EDX,EDI                         ; 005978be
    IMUL EDX,EDI                        ; 005978c0
    SHL EDX,0x2                         ; 005978c3
    ADD EAX,EDX                         ; 005978c6
    INC EBX                             ; 005978c8
        ;   Label: LAB_005978c8
    MOV EDI,dword ptr [ESI + 0x18004]   ; 005978c9
    ADD ECX,0x60                        ; 005978cf
    CMP EBX,EDI                         ; 005978d2
    JL 0x0059788e                       ; 005978d4
        ;   XREF to: 0059788e (CONDITIONAL_JUMP)  ; LAB_0059788e
    PUSH EAX                            ; 005978d6
        ;   Label: LAB_005978d6
    PUSH 0x5f7c32                       ; 005978d7
    MOV EBP,dword ptr [ESP + 0x24]      ; 005978dc
    PUSH EBP                            ; 005978e0
    CALL crt_unknown.c_FUN_005c03c0     ; 005978e1
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 005978e6
    ADD ESP,0x4                         ; 005978e9
    POP EBP                             ; 005978ec
    POP EDI                             ; 005978ed
    POP ESI                             ; 005978ee
    POP EBX                             ; 005978ef
    RET                                 ; 005978f0

