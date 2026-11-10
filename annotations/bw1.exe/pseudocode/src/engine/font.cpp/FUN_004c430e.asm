; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_font_cpp_FUN_004c430e(CBitFont *param_1,char *param_2,char *param_3,int param_4,int param_5,int param_6,int param_7,int param_8)
;
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 004c430e
        ;   Label: engine_font.cpp_FUN_004c430e
    PUSH EBX                            ; 004c4310
    PUSH ESI                            ; 004c4311
    PUSH EBP                            ; 004c4312
    SUB ESP,0x20                        ; 004c4313
    MOV EBP,dword ptr [ESP + 0x34]      ; 004c4316
    MOV ESI,dword ptr [ESP + 0x38]      ; 004c431a
    MOV EBX,dword ptr [ESP + 0x40]      ; 004c431e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004c4322
    IMUL EAX,EBX                        ; 004c4326
    PUSH EAX                            ; 004c4329
    PUSH 0x0                            ; 004c432a
    PUSH ESI                            ; 004c432c
    CALL crt_memory.c_memset_FUN_005bfb70 ; 004c432d
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004c4332
    TEST EBP,EBP                        ; 004c4335
    JZ 0x004c437c                       ; 004c4337
        ;   XREF to: 004c437c (CONDITIONAL_JUMP)  ; LAB_004c437c
    PUSH EDI                            ; 004c4339
    XOR EDX,EDX                         ; 004c433a
    MOV ECX,dword ptr [ESP + 0x40]      ; 004c433c
    MOV dword ptr [ESP + 0x1c],EDX      ; 004c4340
    TEST ECX,ECX                        ; 004c4344
    JLE 0x004c441e                      ; 004c4346
        ;   XREF to: 004c441e (CONDITIONAL_JUMP)  ; LAB_004c441e
    LEA EAX,[EBX + -0x1]                ; 004c434c
    MOV dword ptr [ESP + 0x10],EBX      ; 004c434f
    MOV dword ptr [ESP + 0xc],EAX       ; 004c4353
    IMUL EAX,EBX,0x0                    ; 004c4357
    ADD EAX,ESI                         ; 004c435a
    MOV dword ptr [ESP + 0x14],EAX      ; 004c435c
    MOV AL,byte ptr [EBP]               ; 004c4360
        ;   Label: LAB_004c4360
    INC AL                              ; 004c4363
    AND EAX,0xff                        ; 004c4365
    TEST byte ptr [EAX + 0x626114],0x2  ; 004c436a
    JZ 0x004c4385                       ; 004c4371
        ;   XREF to: 004c4385 (CONDITIONAL_JUMP)  ; LAB_004c4385
    CMP byte ptr [EBP],0xa              ; 004c4373
    JZ 0x004c4385                       ; 004c4377
        ;   XREF to: 004c4385 (CONDITIONAL_JUMP)  ; LAB_004c4385
    INC EBP                             ; 004c4379
    JMP 0x004c4360                      ; 004c437a
        ;   XREF to: 004c4360 (UNCONDITIONAL_JUMP)  ; LAB_004c4360
    XOR EAX,EAX                         ; 004c437c
        ;   Label: LAB_004c437c
    ADD ESP,0x20                        ; 004c437e
    POP EBP                             ; 004c4381
    POP ESI                             ; 004c4382
    POP EBX                             ; 004c4383
    RET                                 ; 004c4384
    CMP byte ptr [EBP],0x0              ; 004c4385
        ;   Label: LAB_004c4385
    JZ 0x004c441e                       ; 004c4389
        ;   XREF to: 004c441e (CONDITIONAL_JUMP)  ; LAB_004c441e
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c438f
    MOV ESI,0xffffffff                  ; 004c4393
    MOV EDI,dword ptr [ESP + 0x14]      ; 004c4398
    XOR EBX,EBX                         ; 004c439c
    MOV dword ptr [ESP + 0x4],EAX       ; 004c439e
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c43a2
    MOV dword ptr [ESP + 0x18],ESI      ; 004c43a6
    ADD EDI,EAX                         ; 004c43aa
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c43ac
    MOV ESI,EBP                         ; 004c43b0
    INC EAX                             ; 004c43b2
    MOV dword ptr [ESP + 0x14],EDI      ; 004c43b3
    MOV dword ptr [ESP + 0x1c],EAX      ; 004c43b7
    XOR EAX,EAX                         ; 004c43bb
        ;   Label: LAB_004c43bb
    MOV AL,byte ptr [ESI]               ; 004c43bd
    MOV dword ptr [ESP + 0x20],EAX      ; 004c43bf
    CMP EAX,0xa                         ; 004c43c3
    JNZ 0x004c442a                      ; 004c43c6
        ;   XREF to: 004c442a (CONDITIONAL_JUMP)  ; LAB_004c442a
    MOV EDX,EBX                         ; 004c43c8
        ;   Label: LAB_004c43c8
    TEST EBX,EBX                        ; 004c43ca
    JLE 0x004c43e8                      ; 004c43cc
        ;   XREF to: 004c43e8 (CONDITIONAL_JUMP)  ; LAB_004c43e8
    LEA EAX,[EBX + EBP*0x1]             ; 004c43ce
    MOV CL,byte ptr [EAX + -0x1]        ; 004c43d1
        ;   Label: LAB_004c43d1
    INC CL                              ; 004c43d4
    MOVZX ESI,CL                        ; 004c43d6
    TEST byte ptr [ESI + 0x626114],0x2  ; 004c43d9
    JZ 0x004c43e8                       ; 004c43e0
        ;   XREF to: 004c43e8 (CONDITIONAL_JUMP)  ; LAB_004c43e8
    DEC EDX                             ; 004c43e2
    DEC EAX                             ; 004c43e3
    TEST EDX,EDX                        ; 004c43e4
    JG 0x004c43d1                       ; 004c43e6
        ;   XREF to: 004c43d1 (CONDITIONAL_JUMP)  ; LAB_004c43d1
    MOV EDI,dword ptr [ESP + 0x4]       ; 004c43e8
        ;   Label: LAB_004c43e8
    MOV ECX,EDX                         ; 004c43ec
    MOV ESI,EBP                         ; 004c43ee
    ADD EDX,EDI                         ; 004c43f0
    PUSH EDI                            ; 004c43f2
    MOV EAX,ECX                         ; 004c43f3
    SHR ECX,0x2                         ; 004c43f5
    MOVSD.REP ES:EDI,ESI                ; 004c43f8
    MOV CL,AL                           ; 004c43fa
    AND CL,0x3                          ; 004c43fc
    MOVSB.REP ES:EDI,ESI                ; 004c43ff
    POP EDI                             ; 004c4401
    LEA EAX,[EBX + EBP*0x1]             ; 004c4402
    MOV byte ptr [EDX],0x0              ; 004c4405
    CMP byte ptr [EAX],0xa              ; 004c4408
    JNZ 0x004c440e                      ; 004c440b
        ;   XREF to: 004c440e (CONDITIONAL_JUMP)  ; LAB_004c440e
    INC EBX                             ; 004c440d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c440e
        ;   Label: LAB_004c440e
    ADD EBP,EBX                         ; 004c4412
    CMP EAX,dword ptr [ESP + 0x40]      ; 004c4414
    JL 0x004c4360                       ; 004c4418
        ;   XREF to: 004c4360 (CONDITIONAL_JUMP)  ; LAB_004c4360
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c441e
        ;   Label: LAB_004c441e
    POP EDI                             ; 004c4422
    ADD ESP,0x20                        ; 004c4423
    POP EBP                             ; 004c4426
    POP ESI                             ; 004c4427
    POP EBX                             ; 004c4428
    RET                                 ; 004c4429
    TEST EAX,EAX                        ; 004c442a
        ;   Label: LAB_004c442a
    JZ 0x004c43c8                       ; 004c442c
        ;   XREF to: 004c43c8 (CONDITIONAL_JUMP)  ; LAB_004c43c8
    MOV AL,byte ptr [ESP + 0x20]        ; 004c442e
    INC AL                              ; 004c4432
    AND EAX,0xff                        ; 004c4434
    TEST byte ptr [EAX + 0x626114],0x2  ; 004c4439
    JZ 0x004c4446                       ; 004c4440
        ;   XREF to: 004c4446 (CONDITIONAL_JUMP)  ; LAB_004c4446
    MOV dword ptr [ESP + 0x18],EBX      ; 004c4442
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c4446
        ;   Label: LAB_004c4446
    XOR EDI,EDI                         ; 004c444a
    CMP EBX,EAX                         ; 004c444c
    JGE 0x004c4497                      ; 004c444e
        ;   XREF to: 004c4497 (CONDITIONAL_JUMP)  ; LAB_004c4497
    XOR CH,CH                           ; 004c4450
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004c4452
    MOV byte ptr [EBX + 0x1cc88d0],CH   ; 004c4456
    CMP EDX,0x1                         ; 004c445c
    JLE 0x004c44ac                      ; 004c445f
        ;   XREF to: 004c44ac (CONDITIONAL_JUMP)  ; LAB_004c44ac
    MOV EAX,dword ptr [ESP + 0x34]      ; 004c4461
        ;   Label: LAB_004c4461
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004c4465
    MOV EAX,dword ptr [EAX + 0x3668]    ; 004c4469
    IMUL EAX,EDX                        ; 004c446f
    PUSH 0x1cc88d0                      ; 004c4472
    MOV ECX,dword ptr [ESP + 0x38]      ; 004c4477
    PUSH ECX                            ; 004c447b
    MOV dword ptr [ESP + 0x10],EAX      ; 004c447c
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 004c4480
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004c4485
    ADD EAX,dword ptr [ESP + 0x8]       ; 004c4488
    CMP EAX,dword ptr [ESP + 0x48]      ; 004c448c
        ;   Label: LAB_004c448c
    JG 0x004c4497                       ; 004c4490
        ;   XREF to: 004c4497 (CONDITIONAL_JUMP)  ; LAB_004c4497
    MOV EDI,0x1                         ; 004c4492
    MOV AL,byte ptr [ESP + 0x20]        ; 004c4497
        ;   Label: LAB_004c4497
    MOV byte ptr [EBX + 0x1cc88d0],AL   ; 004c449b
    TEST EDI,EDI                        ; 004c44a1
    JZ 0x004c44c7                       ; 004c44a3
        ;   XREF to: 004c44c7 (CONDITIONAL_JUMP)  ; LAB_004c44c7
    INC EBX                             ; 004c44a5
    INC ESI                             ; 004c44a6
    JMP 0x004c43bb                      ; 004c44a7
        ;   XREF to: 004c43bb (UNCONDITIONAL_JUMP)  ; LAB_004c43bb
    CMP dword ptr [ESP + 0x50],0x0      ; 004c44ac
        ;   Label: LAB_004c44ac
    JNZ 0x004c4461                      ; 004c44b1
        ;   XREF to: 004c4461 (CONDITIONAL_JUMP)  ; LAB_004c4461
    PUSH 0x1cc88d0                      ; 004c44b3
    MOV EAX,dword ptr [ESP + 0x38]      ; 004c44b8
    PUSH EAX                            ; 004c44bc
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 004c44bd
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004c44c2
    JMP 0x004c448c                      ; 004c44c5
        ;   XREF to: 004c448c (UNCONDITIONAL_JUMP)  ; LAB_004c448c
    MOV ESI,dword ptr [ESP + 0x18]      ; 004c44c7
        ;   Label: LAB_004c44c7
    TEST ESI,ESI                        ; 004c44cb
    JL 0x004c43c8                       ; 004c44cd
        ;   XREF to: 004c43c8 (CONDITIONAL_JUMP)  ; LAB_004c43c8
    MOV EBX,ESI                         ; 004c44d3
    JMP 0x004c43c8                      ; 004c44d5
        ;   XREF to: 004c43c8 (UNCONDITIONAL_JUMP)  ; LAB_004c43c8

