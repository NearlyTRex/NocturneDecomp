; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_005a4140(byte *param_1,byte *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   crt_stdio.c_freopen_FUN_005a4484 at 005a4497
;   crt_unknown.c_FUN_005a4390 at 005a439e
;
; Referenced Globals:
;   undefined4 DAT_00607884
;   undefined4 DAT_00607b14
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005a92c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4140
        ;   Label: crt_unknown.c_FUN_005a4140
    PUSH ESI                            ; 005a4141
    PUSH EDI                            ; 005a4142
    PUSH EBP                            ; 005a4143
    SUB ESP,0x4                         ; 005a4144
    MOV ECX,dword ptr [ESP + 0x18]      ; 005a4147
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005a414b
    MOV EDX,0x1                         ; 005a414f
    XOR EBX,EBX                         ; 005a4154
    XOR EDI,EDI                         ; 005a4156
    XOR EBP,EBP                         ; 005a4158
    MOV dword ptr [ESP],EBX             ; 005a415a
    TEST ESI,ESI                        ; 005a415d
    JZ 0x005a416f                       ; 005a415f
        ;   XREF to: 005a416f (CONDITIONAL_JUMP)  ; LAB_005a416f
    CMP EDX,dword ptr [0x00607b14]      ; 005a4161 | DAT_00607b14
    JNZ 0x005a416d                      ; 005a4167
        ;   XREF to: 005a416d (CONDITIONAL_JUMP)  ; LAB_005a416d
    MOV dword ptr [ESI],EDX             ; 005a4169
    JMP 0x005a416f                      ; 005a416b
        ;   XREF to: 005a416f (UNCONDITIONAL_JUMP)  ; LAB_005a416f
    MOV dword ptr [ESI],EBX             ; 005a416d
        ;   Label: LAB_005a416d
    MOV AL,byte ptr [ECX]               ; 005a416f
        ;   Label: LAB_005a416f
    CMP AL,0x72                         ; 005a4171
    JC 0x005a417d                       ; 005a4173
        ;   XREF to: 005a417d (CONDITIONAL_JUMP)  ; LAB_005a417d
    JBE 0x005a4183                      ; 005a4175
        ;   XREF to: 005a4183 (CONDITIONAL_JUMP)  ; LAB_005a4183
    CMP AL,0x77                         ; 005a4177
    JZ 0x005a4188                       ; 005a4179
        ;   XREF to: 005a4188 (CONDITIONAL_JUMP)  ; LAB_005a4188
    JMP 0x005a4192                      ; 005a417b
        ;   XREF to: 005a4192 (UNCONDITIONAL_JUMP)  ; LAB_005a4192
    CMP AL,0x61                         ; 005a417d
        ;   Label: LAB_005a417d
    JZ 0x005a418d                       ; 005a417f
        ;   XREF to: 005a418d (CONDITIONAL_JUMP)  ; LAB_005a418d
    JMP 0x005a4192                      ; 005a4181
        ;   XREF to: 005a4192 (UNCONDITIONAL_JUMP)  ; LAB_005a4192
    OR BL,0x1                           ; 005a4183
        ;   Label: LAB_005a4183
    JMP 0x005a41a3                      ; 005a4186
        ;   XREF to: 005a41a3 (UNCONDITIONAL_JUMP)  ; LAB_005a41a3
    OR BL,0x2                           ; 005a4188
        ;   Label: LAB_005a4188
    JMP 0x005a41a3                      ; 005a418b
        ;   XREF to: 005a41a3 (UNCONDITIONAL_JUMP)  ; LAB_005a41a3
    OR BL,0x82                          ; 005a418d
        ;   Label: LAB_005a418d
    JMP 0x005a41a3                      ; 005a4190
        ;   XREF to: 005a41a3 (UNCONDITIONAL_JUMP)  ; LAB_005a41a3
    PUSH 0x9                            ; 005a4192
        ;   Label: LAB_005a4192
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005a4194
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    ADD ESP,0x4                         ; 005a4199
    XOR EDX,EDX                         ; 005a419c
    JMP 0x005a4272                      ; 005a419e
        ;   XREF to: 005a4272 (UNCONDITIONAL_JUMP)  ; LAB_005a4272
    MOV AH,byte ptr [ECX + 0x1]         ; 005a41a3
        ;   Label: LAB_005a41a3
    INC ECX                             ; 005a41a6
    TEST AH,AH                          ; 005a41a7
    JZ 0x005a425d                       ; 005a41a9
        ;   XREF to: 005a425d (CONDITIONAL_JUMP)  ; LAB_005a425d
    TEST EDX,EDX                        ; 005a41af
        ;   Label: LAB_005a41af
    JZ 0x005a425d                       ; 005a41b1
        ;   XREF to: 005a425d (CONDITIONAL_JUMP)  ; LAB_005a425d
    MOV AL,byte ptr [ECX]               ; 005a41b7
    CMP AL,0x63                         ; 005a41b9
    JC 0x005a41da                       ; 005a41bb
        ;   XREF to: 005a41da (CONDITIONAL_JUMP)  ; LAB_005a41da
    JBE 0x005a4228                      ; 005a41bd
        ;   XREF to: 005a4228 (CONDITIONAL_JUMP)  ; LAB_005a4228
    CMP AL,0x6e                         ; 005a41c3
    JC 0x005a4251                       ; 005a41c5
        ;   XREF to: 005a4251 (CONDITIONAL_JUMP)  ; LAB_005a4251
    JBE 0x005a423d                      ; 005a41cb
        ;   XREF to: 005a423d (CONDITIONAL_JUMP)  ; LAB_005a423d
    CMP AL,0x74                         ; 005a41d1
    JZ 0x005a4207                       ; 005a41d3
        ;   XREF to: 005a4207 (CONDITIONAL_JUMP)  ; LAB_005a4207
    JMP 0x005a4251                      ; 005a41d5
        ;   XREF to: 005a4251 (UNCONDITIONAL_JUMP)  ; LAB_005a4251
    CMP AL,0x2b                         ; 005a41da
        ;   Label: LAB_005a41da
    JC 0x005a4251                       ; 005a41dc
        ;   XREF to: 005a4251 (CONDITIONAL_JUMP)  ; LAB_005a4251
    JBE 0x005a41ed                      ; 005a41e2
        ;   XREF to: 005a41ed (CONDITIONAL_JUMP)  ; LAB_005a41ed
    CMP AL,0x62                         ; 005a41e4
    JZ 0x005a4216                       ; 005a41e6
        ;   XREF to: 005a4216 (CONDITIONAL_JUMP)  ; LAB_005a4216
    JMP 0x005a4251                      ; 005a41e8
        ;   XREF to: 005a4251 (UNCONDITIONAL_JUMP)  ; LAB_005a4251
    CMP dword ptr [ESP],0x0             ; 005a41ed
        ;   Label: LAB_005a41ed
    JZ 0x005a41fa                       ; 005a41f1
        ;   XREF to: 005a41fa (CONDITIONAL_JUMP)  ; LAB_005a41fa
    XOR EDX,EDX                         ; 005a41f3
    JMP 0x005a4251                      ; 005a41f5
        ;   XREF to: 005a4251 (UNCONDITIONAL_JUMP)  ; LAB_005a4251
    MOV EAX,0x1                         ; 005a41fa
        ;   Label: LAB_005a41fa
    OR BL,0x3                           ; 005a41ff
    MOV dword ptr [ESP],EAX             ; 005a4202
    JMP 0x005a4251                      ; 005a4205
        ;   XREF to: 005a4251 (UNCONDITIONAL_JUMP)  ; LAB_005a4251
    TEST EDI,EDI                        ; 005a4207
        ;   Label: LAB_005a4207
    JZ 0x005a420f                       ; 005a4209
        ;   XREF to: 005a420f (CONDITIONAL_JUMP)  ; LAB_005a420f
    XOR EDX,EDX                         ; 005a420b
    JMP 0x005a4251                      ; 005a420d
        ;   XREF to: 005a4251 (UNCONDITIONAL_JUMP)  ; LAB_005a4251
    MOV EDI,0x1                         ; 005a420f
        ;   Label: LAB_005a420f
    JMP 0x005a4251                      ; 005a4214
        ;   XREF to: 005a4251 (UNCONDITIONAL_JUMP)  ; LAB_005a4251
    TEST EDI,EDI                        ; 005a4216
        ;   Label: LAB_005a4216
    JZ 0x005a421e                       ; 005a4218
        ;   XREF to: 005a421e (CONDITIONAL_JUMP)  ; LAB_005a421e
    XOR EDX,EDX                         ; 005a421a
    JMP 0x005a4251                      ; 005a421c
        ;   XREF to: 005a4251 (UNCONDITIONAL_JUMP)  ; LAB_005a4251
    MOV EDI,0x1                         ; 005a421e
        ;   Label: LAB_005a421e
    OR BL,0x40                          ; 005a4223
    JMP 0x005a4251                      ; 005a4226
        ;   XREF to: 005a4251 (UNCONDITIONAL_JUMP)  ; LAB_005a4251
    TEST EBP,EBP                        ; 005a4228
        ;   Label: LAB_005a4228
    JZ 0x005a4230                       ; 005a422a
        ;   XREF to: 005a4230 (CONDITIONAL_JUMP)  ; LAB_005a4230
    XOR EDX,EDX                         ; 005a422c
    JMP 0x005a4251                      ; 005a422e
        ;   XREF to: 005a4251 (UNCONDITIONAL_JUMP)  ; LAB_005a4251
    MOV AL,byte ptr [ESI]               ; 005a4230
        ;   Label: LAB_005a4230
    OR AL,0x1                           ; 005a4232
    MOV EBP,0x1                         ; 005a4234
    MOV byte ptr [ESI],AL               ; 005a4239
    JMP 0x005a4251                      ; 005a423b
        ;   XREF to: 005a4251 (UNCONDITIONAL_JUMP)  ; LAB_005a4251
    TEST EBP,EBP                        ; 005a423d
        ;   Label: LAB_005a423d
    JZ 0x005a4245                       ; 005a423f
        ;   XREF to: 005a4245 (CONDITIONAL_JUMP)  ; LAB_005a4245
    XOR EDX,EDX                         ; 005a4241
    JMP 0x005a4251                      ; 005a4243
        ;   XREF to: 005a4251 (UNCONDITIONAL_JUMP)  ; LAB_005a4251
    MOV AH,byte ptr [ESI]               ; 005a4245
        ;   Label: LAB_005a4245
    AND AH,0xfe                         ; 005a4247
    MOV EBP,0x1                         ; 005a424a
    MOV byte ptr [ESI],AH               ; 005a424f
    MOV AL,byte ptr [ECX + 0x1]         ; 005a4251
        ;   Label: LAB_005a4251
    INC ECX                             ; 005a4254
    TEST AL,AL                          ; 005a4255
    JNZ 0x005a41af                      ; 005a4257
        ;   XREF to: 005a41af (CONDITIONAL_JUMP)  ; LAB_005a41af
    TEST EDI,EDI                        ; 005a425d
        ;   Label: LAB_005a425d
    JNZ 0x005a4270                      ; 005a425f
        ;   XREF to: 005a4270 (CONDITIONAL_JUMP)  ; LAB_005a4270
    CMP dword ptr [0x00607884],0x200    ; 005a4261 | DAT_00607884
    JNZ 0x005a4270                      ; 005a426b
        ;   XREF to: 005a4270 (CONDITIONAL_JUMP)  ; LAB_005a4270
    OR BL,0x40                          ; 005a426d
    MOV EDX,EBX                         ; 005a4270
        ;   Label: LAB_005a4270
    MOV EAX,EDX                         ; 005a4272
        ;   Label: LAB_005a4272
    ADD ESP,0x4                         ; 005a4274
    POP EBP                             ; 005a4277
    POP EDI                             ; 005a4278
    POP ESI                             ; 005a4279
    POP EBX                             ; 005a427a
    RET                                 ; 005a427b

