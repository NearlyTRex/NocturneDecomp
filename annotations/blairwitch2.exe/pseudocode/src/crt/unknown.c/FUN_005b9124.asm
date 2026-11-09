; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005b9124(int param_1)
;
;
; XREF[1]:
;   crt_stdio.c_freopen_FUN_005b91a4 at 005b91e7
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2b8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2bc = 005bce04
;   undefined4 DAT_02680160
;   undefined4 DAT_02680164
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005be180
;   crt_stdio.c_fclose_FUN_005b8af0
;   crt_unknown.c_FUN_005bce04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9124
        ;   Label: crt_unknown.c_FUN_005b9124
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b9125
    CALL dword ptr [0x0061f2b8]         ; 005b9129 | PTR_crt_unknown.c_FUN_005bce04_0061f2b8
    MOV EAX,[0x02680160]                ; 005b912f | DAT_02680160
    TEST EAX,EAX                        ; 005b9134
    JZ 0x005b9160                       ; 005b9136
        ;   XREF to: 005b9160 (CONDITIONAL_JUMP)  ; LAB_005b9160
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b9138
        ;   Label: LAB_005b9138
    CMP EBX,EDX                         ; 005b913b
    JNZ 0x005b915a                      ; 005b913d
        ;   XREF to: 005b915a (CONDITIONAL_JUMP)  ; LAB_005b915a
    TEST byte ptr [EDX + 0xc],0x3       ; 005b913f
    JZ 0x005b9150                       ; 005b9143
        ;   XREF to: 005b9150 (CONDITIONAL_JUMP)  ; LAB_005b9150
    PUSH 0x1                            ; 005b9145
    PUSH EDX                            ; 005b9147
    CALL crt_stdio.c_fclose_FUN_005b8af0 ; 005b9148
        ;   XREF to: 005b8af0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b8af0()
    ADD ESP,0x8                         ; 005b914d
    CALL dword ptr [0x0061f2bc]         ; 005b9150 | PTR_crt_unknown.c_FUN_005bce04_0061f2bc
        ;   Label: LAB_005b9150
    MOV EAX,EBX                         ; 005b9156
    POP EBX                             ; 005b9158
    RET                                 ; 005b9159
    MOV EAX,dword ptr [EAX]             ; 005b915a
        ;   Label: LAB_005b915a
    TEST EAX,EAX                        ; 005b915c
    JNZ 0x005b9138                      ; 005b915e
        ;   XREF to: 005b9138 (CONDITIONAL_JUMP)  ; LAB_005b9138
    MOV EDX,0x2680164                   ; 005b9160
        ;   Label: LAB_005b9160
    MOV EAX,dword ptr [EDX]             ; 005b9165 | DAT_02680164
        ;   Label: LAB_005b9165
    TEST EAX,EAX                        ; 005b9167
    JZ 0x005b918f                       ; 005b9169
        ;   XREF to: 005b918f (CONDITIONAL_JUMP)  ; LAB_005b918f
    CMP EBX,dword ptr [EAX + 0x4]       ; 005b916b
    JNZ 0x005b918b                      ; 005b916e
        ;   XREF to: 005b918b (CONDITIONAL_JUMP)  ; LAB_005b918b
    MOV ECX,dword ptr [EAX]             ; 005b9170
    MOV dword ptr [EDX],ECX             ; 005b9172 | DAT_02680164
    MOV EDX,dword ptr [0x02680160]      ; 005b9174 | DAT_02680160
    MOV [0x02680160],EAX                ; 005b917a | DAT_02680160
    MOV dword ptr [EAX],EDX             ; 005b917f
    CALL dword ptr [0x0061f2bc]         ; 005b9181 | PTR_crt_unknown.c_FUN_005bce04_0061f2bc
    MOV EAX,EBX                         ; 005b9187
    POP EBX                             ; 005b9189
    RET                                 ; 005b918a
    MOV EDX,EAX                         ; 005b918b
        ;   Label: LAB_005b918b
    JMP 0x005b9165                      ; 005b918d
        ;   XREF to: 005b9165 (UNCONDITIONAL_JUMP)  ; LAB_005b9165
    PUSH 0x4                            ; 005b918f
        ;   Label: LAB_005b918f
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005b9191
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    ADD ESP,0x4                         ; 005b9196
    CALL dword ptr [0x0061f2bc]         ; 005b9199 | PTR_crt_unknown.c_FUN_005bce04_0061f2bc
    XOR EAX,EAX                         ; 005b919f
    POP EBX                             ; 005b91a1
    RET                                 ; 005b91a2

