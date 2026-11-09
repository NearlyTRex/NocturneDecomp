; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a7137(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a7100 at 005a7117
;
; *****************************************************************************

section .text

    OR ECX,ECX                          ; 005a7137
        ;   Label: crt_unknown.c_FUN_005a7137
    JZ 0x005a71a2                       ; 005a7139
        ;   XREF to: 005a71a2 (CONDITIONAL_JUMP)  ; LAB_005a71a2
    TEST AL,0x1f                        ; 005a713b
        ;   Label: LAB_005a713b
    JZ 0x005a7147                       ; 005a713d
        ;   XREF to: 005a7147 (CONDITIONAL_JUMP)  ; LAB_005a7147
    MOV dword ptr [EAX],EDX             ; 005a713f
    LEA EAX,[EAX + 0x4]                 ; 005a7141
    DEC ECX                             ; 005a7144
    JNZ 0x005a713b                      ; 005a7145
        ;   XREF to: 005a713b (CONDITIONAL_JUMP)  ; LAB_005a713b
    PUSH ECX                            ; 005a7147
        ;   Label: LAB_005a7147
    SHR ECX,0x2                         ; 005a7148
    JZ 0x005a7187                       ; 005a714b
        ;   XREF to: 005a7187 (CONDITIONAL_JUMP)  ; LAB_005a7187
    DEC ECX                             ; 005a714d
    JZ 0x005a7179                       ; 005a714e
        ;   XREF to: 005a7179 (CONDITIONAL_JUMP)  ; LAB_005a7179
    MOV dword ptr [EAX],EDX             ; 005a7150
        ;   Label: LAB_005a7150
    MOV dword ptr [EAX + 0x4],EDX       ; 005a7152
    DEC ECX                             ; 005a7155
    MOV dword ptr [EAX + 0x8],EDX       ; 005a7156
    MOV dword ptr [EAX + 0xc],EDX       ; 005a7159
    JZ 0x005a7176                       ; 005a715c
        ;   XREF to: 005a7176 (CONDITIONAL_JUMP)  ; LAB_005a7176
    CMP byte ptr [EAX + 0x20],DL        ; 005a715e
    MOV dword ptr [EAX + 0x10],EDX      ; 005a7161
    MOV dword ptr [EAX + 0x14],EDX      ; 005a7164
    DEC ECX                             ; 005a7167
    MOV dword ptr [EAX + 0x18],EDX      ; 005a7168
    MOV dword ptr [EAX + 0x1c],EDX      ; 005a716b
    LEA EAX,[EAX + 0x20]                ; 005a716e
    JNZ 0x005a7150                      ; 005a7171
        ;   XREF to: 005a7150 (CONDITIONAL_JUMP)  ; LAB_005a7150
    LEA EAX,[EAX + -0x10]               ; 005a7173
    LEA EAX,[EAX + 0x10]                ; 005a7176
        ;   Label: LAB_005a7176
    MOV dword ptr [EAX],EDX             ; 005a7179
        ;   Label: LAB_005a7179
    MOV dword ptr [EAX + 0x4],EDX       ; 005a717b
    MOV dword ptr [EAX + 0x8],EDX       ; 005a717e
    MOV dword ptr [EAX + 0xc],EDX       ; 005a7181
    LEA EAX,[EAX + 0x10]                ; 005a7184
    POP ECX                             ; 005a7187
        ;   Label: LAB_005a7187
    AND ECX,0x3                         ; 005a7188
    JZ 0x005a71a2                       ; 005a718b
        ;   XREF to: 005a71a2 (CONDITIONAL_JUMP)  ; LAB_005a71a2
    MOV dword ptr [EAX],EDX             ; 005a718d
    LEA EAX,[EAX + 0x4]                 ; 005a718f
    DEC ECX                             ; 005a7192
    JZ 0x005a71a2                       ; 005a7193
        ;   XREF to: 005a71a2 (CONDITIONAL_JUMP)  ; LAB_005a71a2
    MOV dword ptr [EAX],EDX             ; 005a7195
    LEA EAX,[EAX + 0x4]                 ; 005a7197
    DEC ECX                             ; 005a719a
    JZ 0x005a71a2                       ; 005a719b
        ;   XREF to: 005a71a2 (CONDITIONAL_JUMP)  ; LAB_005a71a2
    MOV dword ptr [EAX],EDX             ; 005a719d
    LEA EAX,[EAX + 0x4]                 ; 005a719f
    RET                                 ; 005a71a2
        ;   Label: LAB_005a71a2

