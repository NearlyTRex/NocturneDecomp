; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_FUN_0042c0c0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_006141d4
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0042c0c0
        ;   Label: core_charactr.cpp_FUN_0042c0c0
    MOV EBP,ESP                         ; 0042c0c1
    PUSH ESI                            ; 0042c0c3
    PUSH EDI                            ; 0042c0c4
    CMP dword ptr [0x006141d4],0x6      ; 0042c0c5 | DAT_006141d4
    JNC 0x0042c139                      ; 0042c0cc
        ;   XREF to: 0042c139 (CONDITIONAL_JUMP)  ; LAB_0042c139
    PUSH EAX                            ; 0042c0ce
    PUSH EBX                            ; 0042c0cf
    PUSH ECX                            ; 0042c0d0
    MOV EDI,dword ptr [EBP + 0x8]       ; 0042c0d1
    MOV ESI,dword ptr [EBP + 0xc]       ; 0042c0d4
    MOV ECX,dword ptr [EBP + 0x10]      ; 0042c0d7
    MOV EAX,0x0                         ; 0042c0da
    TEST EDI,0x2                        ; 0042c0df
    JZ 0x0042c0f9                       ; 0042c0e5
        ;   XREF to: 0042c0f9 (CONDITIONAL_JUMP)  ; LAB_0042c0f9
    MOV AL,byte ptr [ESI]               ; 0042c0e7
    MOV BX,word ptr [EAX*0x2 + 0x1c35614] ; 0042c0e9
    MOV word ptr [EDI],BX               ; 0042c0f1
    ADD EDI,0x2                         ; 0042c0f4
    INC ESI                             ; 0042c0f7
    DEC ECX                             ; 0042c0f8
    SUB ECX,0x2                         ; 0042c0f9
        ;   Label: LAB_0042c0f9
    JL 0x0042c120                       ; 0042c0fc
        ;   XREF to: 0042c120 (CONDITIONAL_JUMP)  ; LAB_0042c120
    MOV AL,byte ptr [ESI + 0x1]         ; 0042c0fe
    MOV BX,word ptr [EAX*0x2 + 0x1c35614] ; 0042c101
    SHL EBX,0x10                        ; 0042c109
    MOV AL,byte ptr [ESI]               ; 0042c10c
    MOV BX,word ptr [EAX*0x2 + 0x1c35614] ; 0042c10e
    MOV dword ptr [EDI],EBX             ; 0042c116
    ADD ESI,0x2                         ; 0042c118
    ADD EDI,0x4                         ; 0042c11b
    JMP 0x0042c0f9                      ; 0042c11e
        ;   XREF to: 0042c0f9 (UNCONDITIONAL_JUMP)  ; LAB_0042c0f9
    CMP ECX,-0x1                        ; 0042c120
        ;   Label: LAB_0042c120
    JNZ 0x0042c132                      ; 0042c123
        ;   XREF to: 0042c132 (CONDITIONAL_JUMP)  ; LAB_0042c132
    MOV AL,byte ptr [ESI]               ; 0042c125
    MOV BX,word ptr [EAX*0x2 + 0x1c35614] ; 0042c127
    MOV word ptr [EDI],BX               ; 0042c12f
    POP ECX                             ; 0042c132
        ;   Label: LAB_0042c132
    POP EBX                             ; 0042c133
    POP EAX                             ; 0042c134
    POP EDI                             ; 0042c135
    POP ESI                             ; 0042c136
    LEAVE                               ; 0042c137
    RET                                 ; 0042c138
    PUSH EAX                            ; 0042c139
        ;   Label: LAB_0042c139
    PUSH EBX                            ; 0042c13a
    PUSH ECX                            ; 0042c13b
    MOV EDI,dword ptr [EBP + 0x8]       ; 0042c13c
    MOV ESI,dword ptr [EBP + 0xc]       ; 0042c13f
    MOV ECX,dword ptr [EBP + 0x10]      ; 0042c142
    MOV EAX,0x0                         ; 0042c145
    TEST EDI,0x2                        ; 0042c14a
    JZ 0x0042c165                       ; 0042c150
        ;   XREF to: 0042c165 (CONDITIONAL_JUMP)  ; LAB_0042c165
    MOVZX EAX,byte ptr [ESI]            ; 0042c152
    MOV BX,word ptr [EAX*0x2 + 0x1c35614] ; 0042c155
    MOV word ptr [EDI],BX               ; 0042c15d
    ADD EDI,0x2                         ; 0042c160
    INC ESI                             ; 0042c163
    DEC ECX                             ; 0042c164
    SUB ECX,0x2                         ; 0042c165
        ;   Label: LAB_0042c165
    JL 0x0042c190                       ; 0042c168
        ;   XREF to: 0042c190 (CONDITIONAL_JUMP)  ; LAB_0042c190
    MOVZX EAX,byte ptr [ESI + 0x1]      ; 0042c16a
    MOVZX EBX,word ptr [EAX*0x2 + 0x1c35614] ; 0042c16e
    MOVZX EAX,byte ptr [ESI]            ; 0042c176
    SHL EBX,0x10                        ; 0042c179
    MOVZX EAX,word ptr [EAX*0x2 + 0x1c35614] ; 0042c17c
    OR EBX,EAX                          ; 0042c184
    ADD ESI,0x2                         ; 0042c186
    MOV dword ptr [EDI],EBX             ; 0042c189
    ADD EDI,0x4                         ; 0042c18b
    JMP 0x0042c165                      ; 0042c18e
        ;   XREF to: 0042c165 (UNCONDITIONAL_JUMP)  ; LAB_0042c165
    CMP ECX,-0x1                        ; 0042c190
        ;   Label: LAB_0042c190
    JNZ 0x0042c1a3                      ; 0042c193
        ;   XREF to: 0042c1a3 (CONDITIONAL_JUMP)  ; LAB_0042c1a3
    MOVZX EAX,byte ptr [ESI]            ; 0042c195
    MOV BX,word ptr [EAX*0x2 + 0x1c35614] ; 0042c198
    MOV word ptr [EDI],BX               ; 0042c1a0
    POP ECX                             ; 0042c1a3
        ;   Label: LAB_0042c1a3
    POP EBX                             ; 0042c1a4
    POP EAX                             ; 0042c1a5
    POP EDI                             ; 0042c1a6
    POP ESI                             ; 0042c1a7
    LEAVE                               ; 0042c1a8
    RET                                 ; 0042c1a9

