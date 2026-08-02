; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056a0f7(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056a0c0 at 0056a0d7
;
; *****************************************************************************

section .text

    OR ECX,ECX                          ; 0056a0f7
        ;   Label: crt_unknown.c_FUN_0056a0f7
    JZ 0x0056a162                       ; 0056a0f9
        ;   XREF to: 0056a162 (CONDITIONAL_JUMP)  ; LAB_0056a162
    TEST AL,0x1f                        ; 0056a0fb
        ;   Label: LAB_0056a0fb
    JZ 0x0056a107                       ; 0056a0fd
        ;   XREF to: 0056a107 (CONDITIONAL_JUMP)  ; LAB_0056a107
    MOV dword ptr [EAX],EDX             ; 0056a0ff
    LEA EAX,[EAX + 0x4]                 ; 0056a101
    DEC ECX                             ; 0056a104
    JNZ 0x0056a0fb                      ; 0056a105
        ;   XREF to: 0056a0fb (CONDITIONAL_JUMP)  ; LAB_0056a0fb
    PUSH ECX                            ; 0056a107
        ;   Label: LAB_0056a107
    SHR ECX,0x2                         ; 0056a108
    JZ 0x0056a147                       ; 0056a10b
        ;   XREF to: 0056a147 (CONDITIONAL_JUMP)  ; LAB_0056a147
    DEC ECX                             ; 0056a10d
    JZ 0x0056a139                       ; 0056a10e
        ;   XREF to: 0056a139 (CONDITIONAL_JUMP)  ; LAB_0056a139
    MOV dword ptr [EAX],EDX             ; 0056a110
        ;   Label: LAB_0056a110
    MOV dword ptr [EAX + 0x4],EDX       ; 0056a112
    DEC ECX                             ; 0056a115
    MOV dword ptr [EAX + 0x8],EDX       ; 0056a116
    MOV dword ptr [EAX + 0xc],EDX       ; 0056a119
    JZ 0x0056a136                       ; 0056a11c
        ;   XREF to: 0056a136 (CONDITIONAL_JUMP)  ; LAB_0056a136
    CMP byte ptr [EAX + 0x20],DL        ; 0056a11e
    MOV dword ptr [EAX + 0x10],EDX      ; 0056a121
    MOV dword ptr [EAX + 0x14],EDX      ; 0056a124
    DEC ECX                             ; 0056a127
    MOV dword ptr [EAX + 0x18],EDX      ; 0056a128
    MOV dword ptr [EAX + 0x1c],EDX      ; 0056a12b
    LEA EAX,[EAX + 0x20]                ; 0056a12e
    JNZ 0x0056a110                      ; 0056a131
        ;   XREF to: 0056a110 (CONDITIONAL_JUMP)  ; LAB_0056a110
    LEA EAX,[EAX + -0x10]               ; 0056a133
    LEA EAX,[EAX + 0x10]                ; 0056a136
        ;   Label: LAB_0056a136
    MOV dword ptr [EAX],EDX             ; 0056a139
        ;   Label: LAB_0056a139
    MOV dword ptr [EAX + 0x4],EDX       ; 0056a13b
    MOV dword ptr [EAX + 0x8],EDX       ; 0056a13e
    MOV dword ptr [EAX + 0xc],EDX       ; 0056a141
    LEA EAX,[EAX + 0x10]                ; 0056a144
    POP ECX                             ; 0056a147
        ;   Label: LAB_0056a147
    AND ECX,0x3                         ; 0056a148
    JZ 0x0056a162                       ; 0056a14b
        ;   XREF to: 0056a162 (CONDITIONAL_JUMP)  ; LAB_0056a162
    MOV dword ptr [EAX],EDX             ; 0056a14d
    LEA EAX,[EAX + 0x4]                 ; 0056a14f
    DEC ECX                             ; 0056a152
    JZ 0x0056a162                       ; 0056a153
        ;   XREF to: 0056a162 (CONDITIONAL_JUMP)  ; LAB_0056a162
    MOV dword ptr [EAX],EDX             ; 0056a155
    LEA EAX,[EAX + 0x4]                 ; 0056a157
    DEC ECX                             ; 0056a15a
    JZ 0x0056a162                       ; 0056a15b
        ;   XREF to: 0056a162 (CONDITIONAL_JUMP)  ; LAB_0056a162
    MOV dword ptr [EAX],EDX             ; 0056a15d
    LEA EAX,[EAX + 0x4]                 ; 0056a15f
    RET                                 ; 0056a162
        ;   Label: LAB_0056a162

