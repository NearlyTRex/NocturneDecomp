; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool crt_unknown_c_FUN_005af142(int *param_1,int param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005abd9f at 005abdde
;
; Called Functions:
;   crt_unknown.c_FUN_005abc85
;   crt_unknown.c_FUN_005b0975
;   crt_unknown.c_FUN_005b0a2c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005af142
        ;   Label: crt_unknown.c_FUN_005af142
    MOV EBX,dword ptr [ESP + 0x8]       ; 005af143
    MOV EAX,dword ptr [EBX]             ; 005af147
    MOV EAX,dword ptr [EAX + 0x4]       ; 005af149
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x10] ; 005af14c
    TEST EDX,EDX                        ; 005af150
    JNZ 0x005af1ae                      ; 005af152
        ;   XREF to: 005af1ae (CONDITIONAL_JUMP)  ; LAB_005af1ae
    MOV EAX,dword ptr [EBX]             ; 005af154
    MOV dword ptr [EBX + 0x4],EDX       ; 005af156
    MOV EAX,dword ptr [EAX + 0x4]       ; 005af159
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8] ; 005af15c
    TEST EAX,EAX                        ; 005af160
    JNZ 0x005af1c4                      ; 005af162
        ;   XREF to: 005af1c4 (CONDITIONAL_JUMP)  ; LAB_005af1c4
    CMP dword ptr [ESP + 0xc],0x0       ; 005af164
        ;   Label: LAB_005af164
    JNZ 0x005af19b                      ; 005af169
        ;   XREF to: 005af19b (CONDITIONAL_JUMP)  ; LAB_005af19b
    MOV EAX,dword ptr [EBX]             ; 005af16b
    MOV EAX,dword ptr [EAX + 0x4]       ; 005af16d
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc] ; 005af170
    TEST AL,0x1                         ; 005af174
    JZ 0x005af19b                       ; 005af176
        ;   XREF to: 005af19b (CONDITIONAL_JUMP)  ; LAB_005af19b
    PUSH EBX                            ; 005af178
    CALL crt_unknown.c_FUN_005b0975     ; 005af179
        ;   XREF to: 005b0975 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b0975()
    MOV EAX,dword ptr [EBX]             ; 005af17e
    MOV EAX,dword ptr [EAX + 0x4]       ; 005af180
    ADD EAX,EBX                         ; 005af183
    MOV EDX,dword ptr [EAX + 0x10]      ; 005af185
    ADD ESP,0x4                         ; 005af188
    AND EDX,0x4                         ; 005af18b
    JZ 0x005af19b                       ; 005af18e
        ;   XREF to: 005af19b (CONDITIONAL_JUMP)  ; LAB_005af19b
    PUSH 0x2                            ; 005af190
    PUSH EAX                            ; 005af192
    CALL crt_unknown.c_FUN_005abc85     ; 005af193
        ;   XREF to: 005abc85 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abc85()
    ADD ESP,0x8                         ; 005af198
    MOV EAX,dword ptr [EBX]             ; 005af19b
        ;   Label: LAB_005af19b
    ADD EBX,dword ptr [EAX + 0x4]       ; 005af19d
    CMP dword ptr [EBX + 0x10],0x0      ; 005af1a0
    SETZ AL                             ; 005af1a4
    AND EAX,0xff                        ; 005af1a7
    POP EBX                             ; 005af1ac
    RET                                 ; 005af1ad
    MOV EAX,dword ptr [EBX]             ; 005af1ae
        ;   Label: LAB_005af1ae
    MOV ECX,dword ptr [EAX + 0x4]       ; 005af1b0
    PUSH 0x2                            ; 005af1b3
    ADD EBX,ECX                         ; 005af1b5
    PUSH EBX                            ; 005af1b7
    CALL crt_unknown.c_FUN_005abc85     ; 005af1b8
        ;   XREF to: 005abc85 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abc85()
    ADD ESP,0x8                         ; 005af1bd
    XOR EAX,EAX                         ; 005af1c0
    POP EBX                             ; 005af1c2
    RET                                 ; 005af1c3
    PUSH EAX                            ; 005af1c4
        ;   Label: LAB_005af1c4
    CALL crt_unknown.c_FUN_005b0a2c     ; 005af1c5
        ;   XREF to: 005b0a2c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b0a2c()
    ADD ESP,0x4                         ; 005af1ca
    JMP 0x005af164                      ; 005af1cd
        ;   XREF to: 005af164 (UNCONDITIONAL_JUMP)  ; LAB_005af164

