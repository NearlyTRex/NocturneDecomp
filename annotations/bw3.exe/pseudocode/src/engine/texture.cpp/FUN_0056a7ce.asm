; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_0056a7ce(int param_1,undefined4 param_2,int param_3)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0056a7ce
        ;   Label: engine_texture.cpp_FUN_0056a7ce
    PUSH EBX                            ; 0056a7d0
    PUSH ESI                            ; 0056a7d1
    PUSH EDI                            ; 0056a7d2
    PUSH EBP                            ; 0056a7d3
    SUB ESP,0x4                         ; 0056a7d4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0056a7d7
    MOV EBP,dword ptr [ESP + 0x20]      ; 0056a7db
    XOR EDX,EDX                         ; 0056a7df
    TEST EBP,EBP                        ; 0056a7e1
    JZ 0x0056a86d                       ; 0056a7e3
        ;   XREF to: 0056a86d (CONDITIONAL_JUMP)  ; LAB_0056a86d
    MOV ECX,dword ptr [ESI + 0x18004]   ; 0056a7e9
    XOR EBX,EBX                         ; 0056a7ef
    TEST ECX,ECX                        ; 0056a7f1
    JLE 0x0056a80b                      ; 0056a7f3
        ;   XREF to: 0056a80b (CONDITIONAL_JUMP)  ; LAB_0056a80b
    MOV EAX,ESI                         ; 0056a7f5
    CMP EBP,dword ptr [EAX + 0x4]       ; 0056a7f7
        ;   Label: LAB_0056a7f7
    JNZ 0x0056a7fd                      ; 0056a7fa
        ;   XREF to: 0056a7fd (CONDITIONAL_JUMP)  ; LAB_0056a7fd
    INC EDX                             ; 0056a7fc
    INC EBX                             ; 0056a7fd
        ;   Label: LAB_0056a7fd
    MOV ECX,dword ptr [ESI + 0x18004]   ; 0056a7fe
    ADD EAX,0x60                        ; 0056a804
    CMP EBX,ECX                         ; 0056a807
    JL 0x0056a7f7                       ; 0056a809
        ;   XREF to: 0056a7f7 (CONDITIONAL_JUMP)  ; LAB_0056a7f7
    PUSH EBP                            ; 0056a80b
        ;   Label: LAB_0056a80b
    PUSH EBP                            ; 0056a80c
    PUSH EDX                            ; 0056a80d
    PUSH 0x5d618a                       ; 0056a80e
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0056a813
    PUSH EBX                            ; 0056a817
    CALL crt_unknown.c_FUN_005a3140     ; 0056a818
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x14                        ; 0056a81d
    MOV EDI,dword ptr [ESI + 0x18004]   ; 0056a820
    XOR EBX,EBX                         ; 0056a826
    TEST EDI,EDI                        ; 0056a828
    JLE 0x0056a84a                      ; 0056a82a
        ;   XREF to: 0056a84a (CONDITIONAL_JUMP)  ; LAB_0056a84a
    LEA EAX,[ESI + 0x4]                 ; 0056a82c
    MOV EDI,ESI                         ; 0056a82f
    MOV dword ptr [ESP],EAX             ; 0056a831
    IMUL EAX,EBX,0x60                   ; 0056a834
        ;   Label: LAB_0056a834
    CMP EBP,dword ptr [EDI + 0x4]       ; 0056a837
    JZ 0x0056a852                       ; 0056a83a
        ;   XREF to: 0056a852 (CONDITIONAL_JUMP)  ; LAB_0056a852
    INC EBX                             ; 0056a83c
        ;   Label: LAB_0056a83c
    MOV EAX,dword ptr [ESI + 0x18004]   ; 0056a83d
    ADD EDI,0x60                        ; 0056a843
    CMP EBX,EAX                         ; 0056a846
    JL 0x0056a834                       ; 0056a848
        ;   XREF to: 0056a834 (CONDITIONAL_JUMP)  ; LAB_0056a834
    ADD ESP,0x4                         ; 0056a84a
        ;   Label: LAB_0056a84a
    POP EBP                             ; 0056a84d
    POP EDI                             ; 0056a84e
    POP ESI                             ; 0056a84f
    POP EBX                             ; 0056a850
    RET                                 ; 0056a851
    ADD EAX,dword ptr [ESP]             ; 0056a852
        ;   Label: LAB_0056a852
    ADD EAX,0x4                         ; 0056a855
    PUSH EAX                            ; 0056a858
    PUSH 0x5d619d                       ; 0056a859
    MOV EAX,dword ptr [ESP + 0x24]      ; 0056a85e
    PUSH EAX                            ; 0056a862
    CALL crt_unknown.c_FUN_005a3140     ; 0056a863
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 0056a868
    JMP 0x0056a83c                      ; 0056a86b
        ;   XREF to: 0056a83c (UNCONDITIONAL_JUMP)  ; LAB_0056a83c
    MOV EDX,dword ptr [ESI + 0x18004]   ; 0056a86d
        ;   Label: LAB_0056a86d
    XOR EBX,EBX                         ; 0056a873
    XOR EAX,EAX                         ; 0056a875
    TEST EDX,EDX                        ; 0056a877
    JLE 0x0056a8c6                      ; 0056a879
        ;   XREF to: 0056a8c6 (CONDITIONAL_JUMP)  ; LAB_0056a8c6
    LEA ECX,[ESI + 0x4]                 ; 0056a87b
    MOV EDI,dword ptr [ECX + 0x44]      ; 0056a87e
        ;   Label: LAB_0056a87e
    MOV EDX,ECX                         ; 0056a881
    TEST EDI,EDI                        ; 0056a883
    JZ 0x0056a88e                       ; 0056a885
        ;   XREF to: 0056a88e (CONDITIONAL_JUMP)  ; LAB_0056a88e
    MOV EDI,dword ptr [ECX]             ; 0056a887
    IMUL EDI,EDI                        ; 0056a889
    ADD EAX,EDI                         ; 0056a88c
    CMP dword ptr [EDX + 0x48],0x0      ; 0056a88e
        ;   Label: LAB_0056a88e
    JZ 0x0056a89b                       ; 0056a892
        ;   XREF to: 0056a89b (CONDITIONAL_JUMP)  ; LAB_0056a89b
    MOV EDI,dword ptr [EDX]             ; 0056a894
    IMUL EDI,EDI                        ; 0056a896
    ADD EAX,EDI                         ; 0056a899
    CMP dword ptr [EDX + 0x4c],0x0      ; 0056a89b
        ;   Label: LAB_0056a89b
    JZ 0x0056a8a6                       ; 0056a89f
        ;   XREF to: 0056a8a6 (CONDITIONAL_JUMP)  ; LAB_0056a8a6
    ADD EAX,0x300                       ; 0056a8a1
    CMP dword ptr [EDX + 0x50],0x0      ; 0056a8a6
        ;   Label: LAB_0056a8a6
    JZ 0x0056a8b8                       ; 0056a8aa
        ;   XREF to: 0056a8b8 (CONDITIONAL_JUMP)  ; LAB_0056a8b8
    MOV EDI,dword ptr [EDX]             ; 0056a8ac
    MOV EDX,EDI                         ; 0056a8ae
    IMUL EDX,EDI                        ; 0056a8b0
    SHL EDX,0x2                         ; 0056a8b3
    ADD EAX,EDX                         ; 0056a8b6
    INC EBX                             ; 0056a8b8
        ;   Label: LAB_0056a8b8
    MOV EDI,dword ptr [ESI + 0x18004]   ; 0056a8b9
    ADD ECX,0x60                        ; 0056a8bf
    CMP EBX,EDI                         ; 0056a8c2
    JL 0x0056a87e                       ; 0056a8c4
        ;   XREF to: 0056a87e (CONDITIONAL_JUMP)  ; LAB_0056a87e
    PUSH EAX                            ; 0056a8c6
        ;   Label: LAB_0056a8c6
    PUSH 0x5d61a1                       ; 0056a8c7
    MOV EBP,dword ptr [ESP + 0x24]      ; 0056a8cc
    PUSH EBP                            ; 0056a8d0
    CALL crt_unknown.c_FUN_005a3140     ; 0056a8d1
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 0056a8d6
    ADD ESP,0x4                         ; 0056a8d9
    POP EBP                             ; 0056a8dc
    POP EDI                             ; 0056a8dd
    POP ESI                             ; 0056a8de
    POP EBX                             ; 0056a8df
    RET                                 ; 0056a8e0

