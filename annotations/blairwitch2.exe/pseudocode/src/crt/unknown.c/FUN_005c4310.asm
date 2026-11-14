; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c4310(undefined4 *param_1,short *param_2,uint param_3)
;
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_005c1168 at 005c1110
;
; Called Functions:
;   crt_unknown.c_FUN_005c21b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4310
        ;   Label: crt_unknown.c_FUN_005c4310
    PUSH ESI                            ; 005c4311
    PUSH EDI                            ; 005c4312
    PUSH EBP                            ; 005c4313
    SUB ESP,0x4                         ; 005c4314
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005c4317
    MOV EDX,dword ptr [ESP + 0x18]      ; 005c431b
    XOR EBP,EBP                         ; 005c431f
    TEST EDX,EDX                        ; 005c4321
    JZ 0x005c43a0                       ; 005c4323
        ;   XREF to: 005c43a0 (CONDITIONAL_JUMP)  ; LAB_005c43a0
    CMP dword ptr [ESP + 0x20],0x0      ; 005c4329
        ;   Label: LAB_005c4329
    JBE 0x005c43c7                      ; 005c432e
        ;   XREF to: 005c43c7 (CONDITIONAL_JUMP)  ; LAB_005c43c7
    MOV CX,word ptr [EBX]               ; 005c4334
    TEST CX,CX                          ; 005c4337
    JZ 0x005c4362                       ; 005c433a
        ;   XREF to: 005c4362 (CONDITIONAL_JUMP)  ; LAB_005c4362
    XOR EAX,EAX                         ; 005c433c
    MOV AX,CX                           ; 005c433e
    PUSH EAX                            ; 005c4341
    LEA EAX,[ESP + 0x4]                 ; 005c4342
    PUSH EAX                            ; 005c4346
    CALL crt_unknown.c_FUN_005c21b0     ; 005c4347
        ;   XREF to: 005c21b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c21b0()
    MOV EDX,EAX                         ; 005c434c
    ADD ESP,0x8                         ; 005c434e
    CMP EAX,-0x1                        ; 005c4351
    JZ 0x005c43c9                       ; 005c4354
        ;   XREF to: 005c43c9 (CONDITIONAL_JUMP)  ; LAB_005c43c9
    CMP EAX,dword ptr [ESP + 0x20]      ; 005c435a
    JA 0x005c43c7                       ; 005c435e
        ;   XREF to: 005c43c7 (CONDITIONAL_JUMP)  ; LAB_005c43c7
    JMP 0x005c436b                      ; 005c4360
        ;   XREF to: 005c436b (UNCONDITIONAL_JUMP)  ; LAB_005c436b
    MOV EAX,dword ptr [ESP + 0x18]      ; 005c4362
        ;   Label: LAB_005c4362
    MOV byte ptr [EAX],0x0              ; 005c4366
    JMP 0x005c43c7                      ; 005c4369
        ;   XREF to: 005c43c7 (UNCONDITIONAL_JUMP)  ; LAB_005c43c7
    MOV ESI,ESP                         ; 005c436b
        ;   Label: LAB_005c436b
    MOV EDI,dword ptr [ESP + 0x18]      ; 005c436d
    MOV ECX,EAX                         ; 005c4371
    PUSH ES                             ; 005c4373
    MOV AX,DS                           ; 005c4374
    MOV ES,AX                           ; 005c4376
    PUSH EDI                            ; 005c4378
    MOV EAX,ECX                         ; 005c4379
    SHR ECX,0x2                         ; 005c437b
    MOVSD.REP ES:EDI,ESI                ; 005c437e
    MOV CL,AL                           ; 005c4380
    AND CL,0x3                          ; 005c4382
    MOVSB.REP ES:EDI,ESI                ; 005c4385
    POP EDI                             ; 005c4387
    POP ES                              ; 005c4388
    ADD EBX,0x2                         ; 005c4389
    ADD EBP,EDX                         ; 005c438c
    MOV EAX,dword ptr [ESP + 0x20]      ; 005c438e
    ADD EDI,EDX                         ; 005c4392
    SUB EAX,EDX                         ; 005c4394
    MOV dword ptr [ESP + 0x18],EDI      ; 005c4396
    MOV dword ptr [ESP + 0x20],EAX      ; 005c439a
    JMP 0x005c4329                      ; 005c439e
        ;   XREF to: 005c4329 (UNCONDITIONAL_JUMP)  ; LAB_005c4329
    MOV DX,word ptr [EBX]               ; 005c43a0
        ;   Label: LAB_005c43a0
    TEST DX,DX                          ; 005c43a3
    JZ 0x005c43c7                       ; 005c43a6
        ;   XREF to: 005c43c7 (CONDITIONAL_JUMP)  ; LAB_005c43c7
    XOR EAX,EAX                         ; 005c43a8
    MOV AX,DX                           ; 005c43aa
    PUSH EAX                            ; 005c43ad
    LEA EAX,[ESP + 0x4]                 ; 005c43ae
    PUSH EAX                            ; 005c43b2
    CALL crt_unknown.c_FUN_005c21b0     ; 005c43b3
        ;   XREF to: 005c21b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c21b0()
    ADD ESP,0x8                         ; 005c43b8
    CMP EAX,-0x1                        ; 005c43bb
    JZ 0x005c43c9                       ; 005c43be
        ;   XREF to: 005c43c9 (CONDITIONAL_JUMP)  ; LAB_005c43c9
    ADD EBX,0x2                         ; 005c43c0
    ADD EBP,EAX                         ; 005c43c3
    JMP 0x005c43a0                      ; 005c43c5
        ;   XREF to: 005c43a0 (UNCONDITIONAL_JUMP)  ; LAB_005c43a0
    MOV EAX,EBP                         ; 005c43c7
        ;   Label: LAB_005c43c7
    ADD ESP,0x4                         ; 005c43c9
        ;   Label: LAB_005c43c9
    POP EBP                             ; 005c43cc
    POP EDI                             ; 005c43cd
    POP ESI                             ; 005c43ce
    POP EBX                             ; 005c43cf
    RET                                 ; 005c43d0

