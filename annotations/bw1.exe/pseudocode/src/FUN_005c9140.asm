; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * FUN_005c9140(byte *param_1,byte *param_2)
;
;
; XREF[1]:
;   FUN_005c232c at 005c2413
;
; Referenced Globals:
;   undefined4 DAT_02c9f6e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c9140
        ;   Label: FUN_005c9140
    PUSH ESI                            ; 005c9141
    PUSH EDI                            ; 005c9142
    MOV ESI,dword ptr [0x02c9f6e0]      ; 005c9143 | DAT_02c9f6e0
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c9149
    MOV EDI,dword ptr [ESP + 0x14]      ; 005c914d
    CMP EBX,EDI                         ; 005c9151
    JC 0x005c9159                       ; 005c9153
        ;   XREF to: 005c9159 (CONDITIONAL_JUMP)  ; LAB_005c9159
    XOR EDX,EDX                         ; 005c9155
    JMP 0x005c91b7                      ; 005c9157
        ;   XREF to: 005c91b7 (UNCONDITIONAL_JUMP)  ; LAB_005c91b7
    LEA EAX,[EDI + -0x1]                ; 005c9159
        ;   Label: LAB_005c9159
    TEST ESI,ESI                        ; 005c915c
    JZ 0x005c9184                       ; 005c915e
        ;   XREF to: 005c9184 (CONDITIONAL_JUMP)  ; LAB_005c9184
    XOR EDX,EDX                         ; 005c9160
    MOV DL,byte ptr [EAX]               ; 005c9162
    MOV DL,byte ptr [EDX + 0x2c9f6f1]   ; 005c9164
    AND DL,0x1                          ; 005c916a
    AND EDX,0xff                        ; 005c916d
    JZ 0x005c9184                       ; 005c9173
        ;   XREF to: 005c9184 (CONDITIONAL_JUMP)  ; LAB_005c9184
    LEA EDX,[EAX + -0x1]                ; 005c9175
    MOV EAX,EDX                         ; 005c9178
    MOV dword ptr [0x02c9f6e0],ESI      ; 005c917a | DAT_02c9f6e0
    POP EDI                             ; 005c9180
    POP ESI                             ; 005c9181
    POP EBX                             ; 005c9182
    RET                                 ; 005c9183
    DEC EAX                             ; 005c9184
        ;   Label: LAB_005c9184
    CMP EBX,EAX                         ; 005c9185
    JA 0x005c91a2                       ; 005c9187
        ;   XREF to: 005c91a2 (CONDITIONAL_JUMP)  ; LAB_005c91a2
    TEST ESI,ESI                        ; 005c9189
    JZ 0x005c91a2                       ; 005c918b
        ;   XREF to: 005c91a2 (CONDITIONAL_JUMP)  ; LAB_005c91a2
    XOR EDX,EDX                         ; 005c918d
    MOV DL,byte ptr [EAX]               ; 005c918f
    MOV DL,byte ptr [EDX + 0x2c9f6f1]   ; 005c9191
    AND DL,0x1                          ; 005c9197
    AND EDX,0xff                        ; 005c919a
    JNZ 0x005c9184                      ; 005c91a0
        ;   XREF to: 005c9184 (CONDITIONAL_JUMP)  ; LAB_005c9184
    MOV EDX,EDI                         ; 005c91a2
        ;   Label: LAB_005c91a2
    SUB EDX,EAX                         ; 005c91a4
    MOV EBX,0x2                         ; 005c91a6
    MOV EAX,EDX                         ; 005c91ab
    SAR EDX,0x1f                        ; 005c91ad
    IDIV EBX                            ; 005c91b0
    DEC EDI                             ; 005c91b2
    SUB EDI,EDX                         ; 005c91b3
    MOV EDX,EDI                         ; 005c91b5
    MOV EAX,EDX                         ; 005c91b7
        ;   Label: LAB_005c91b7
    MOV dword ptr [0x02c9f6e0],ESI      ; 005c91b9 | DAT_02c9f6e0
    POP EDI                             ; 005c91bf
    POP ESI                             ; 005c91c0
    POP EBX                             ; 005c91c1
    RET                                 ; 005c91c2

