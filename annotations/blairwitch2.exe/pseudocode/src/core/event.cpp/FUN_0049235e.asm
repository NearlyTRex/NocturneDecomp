; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_event_cpp_FUN_0049235e(int *param_1,int param_2,char *param_3,char *param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_string.c_memmove_FUN_005ba1f0
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0049235e
        ;   Label: core_event.cpp_FUN_0049235e
    PUSH EBX                            ; 00492360
    PUSH ESI                            ; 00492361
    PUSH EDI                            ; 00492362
    PUSH EBP                            ; 00492363
    SUB ESP,0x8                         ; 00492364
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00492367
    MOV ESI,dword ptr [ESP + 0x20]      ; 0049236b
    TEST ESI,ESI                        ; 0049236f
    JL 0x00492377                       ; 00492371
        ;   XREF to: 00492377 (CONDITIONAL_JUMP)  ; LAB_00492377
    CMP ESI,dword ptr [EBX]             ; 00492373
    JLE 0x0049239a                      ; 00492375
        ;   XREF to: 0049239a (CONDITIONAL_JUMP)  ; LAB_0049239a
    MOV ECX,0x5d51ad                    ; 00492377
        ;   Label: LAB_00492377
    MOV EDI,0xfeb                       ; 0049237c
    PUSH 0x5d51bf                       ; 00492381
    MOV dword ptr [0x01d046a0],ECX      ; 00492386 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0049238c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00492392
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00492397
    CMP dword ptr [EBX],0x5             ; 0049239a
        ;   Label: LAB_0049239a
    JGE 0x00492474                      ; 0049239d
        ;   XREF to: 00492474 (CONDITIONAL_JUMP)  ; LAB_00492474
    MOV EDX,dword ptr [EBX]             ; 004923a3
        ;   Label: LAB_004923a3
    SUB EDX,ESI                         ; 004923a5
    LEA EAX,[EDX*0x4 + 0x0]             ; 004923a7
    SUB EAX,EDX                         ; 004923ae
    SHL EAX,0x3                         ; 004923b0
    ADD EAX,EDX                         ; 004923b3
    SHL EAX,0x2                         ; 004923b5
    PUSH EAX                            ; 004923b8
    LEA EAX,[ESI*0x4 + 0x0]             ; 004923b9
    SUB EAX,ESI                         ; 004923c0
    SHL EAX,0x3                         ; 004923c2
    ADD EAX,ESI                         ; 004923c5
    LEA EBP,[EBX + 0x4]                 ; 004923c7
    SHL EAX,0x2                         ; 004923ca
    LEA EDX,[ESI + 0x1]                 ; 004923cd
    MOV dword ptr [ESP + 0x4],EAX       ; 004923d0
    LEA EDI,[EAX + EBP*0x1]             ; 004923d4
    LEA EAX,[EDX*0x4 + 0x0]             ; 004923d7
    SUB EAX,EDX                         ; 004923de
    SHL EAX,0x3                         ; 004923e0
    ADD EAX,EDX                         ; 004923e3
    SHL EAX,0x2                         ; 004923e5
    PUSH EDI                            ; 004923e8
    ADD EBP,EAX                         ; 004923e9
    PUSH EBP                            ; 004923eb
    MOV dword ptr [ESP + 0x10],EAX      ; 004923ec
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 004923f0
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    MOV EDX,dword ptr [EBX]             ; 004923f5
    SUB EDX,ESI                         ; 004923f7
    LEA EAX,[EDX*0x4 + 0x0]             ; 004923f9
    SUB EAX,EDX                         ; 00492400
    SHL EAX,0x3                         ; 00492402
    ADD EAX,EDX                         ; 00492405
    ADD ESP,0xc                         ; 00492407
    SHL EAX,0x2                         ; 0049240a
    MOV EBP,dword ptr [ESP]             ; 0049240d
    PUSH EAX                            ; 00492410
    LEA EAX,[EBX + 0x1f8]               ; 00492411
    ADD EBP,EAX                         ; 00492417
    MOV ESI,dword ptr [ESP + 0x8]       ; 00492419
    PUSH EBP                            ; 0049241d
    ADD EAX,ESI                         ; 0049241e
    PUSH EAX                            ; 00492420
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 00492421
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX]             ; 00492426
    ADD ESP,0xc                         ; 00492428
    INC EAX                             ; 0049242b
    MOV ESI,dword ptr [ESP + 0x24]      ; 0049242c
    MOV dword ptr [EBX],EAX             ; 00492430
    PUSH EDI                            ; 00492432
    MOV AL,byte ptr [ESI]               ; 00492433
        ;   Label: LAB_00492433
    MOV byte ptr [EDI],AL               ; 00492435
    CMP AL,0x0                          ; 00492437
    JZ 0x0049244b                       ; 00492439
        ;   XREF to: 0049244b (CONDITIONAL_JUMP)  ; LAB_0049244b
    MOV AL,byte ptr [ESI + 0x1]         ; 0049243b
    ADD ESI,0x2                         ; 0049243e
    MOV byte ptr [EDI + 0x1],AL         ; 00492441
    ADD EDI,0x2                         ; 00492444
    CMP AL,0x0                          ; 00492447
    JNZ 0x00492433                      ; 00492449
        ;   XREF to: 00492433 (CONDITIONAL_JUMP)  ; LAB_00492433
    POP EDI                             ; 0049244b
        ;   Label: LAB_0049244b
    MOV ESI,dword ptr [ESP + 0x28]      ; 0049244c
    MOV EDI,EBP                         ; 00492450
    PUSH EDI                            ; 00492452
    MOV AL,byte ptr [ESI]               ; 00492453
        ;   Label: LAB_00492453
    MOV byte ptr [EDI],AL               ; 00492455
    CMP AL,0x0                          ; 00492457
    JZ 0x0049246b                       ; 00492459
        ;   XREF to: 0049246b (CONDITIONAL_JUMP)  ; LAB_0049246b
    MOV AL,byte ptr [ESI + 0x1]         ; 0049245b
    ADD ESI,0x2                         ; 0049245e
    MOV byte ptr [EDI + 0x1],AL         ; 00492461
    ADD EDI,0x2                         ; 00492464
    CMP AL,0x0                          ; 00492467
    JNZ 0x00492453                      ; 00492469
        ;   XREF to: 00492453 (CONDITIONAL_JUMP)  ; LAB_00492453
    POP EDI                             ; 0049246b
        ;   Label: LAB_0049246b
    ADD ESP,0x8                         ; 0049246c
    POP EBP                             ; 0049246f
    POP EDI                             ; 00492470
    POP ESI                             ; 00492471
    POP EBX                             ; 00492472
    RET                                 ; 00492473
    MOV EAX,0x5d51e1                    ; 00492474
        ;   Label: LAB_00492474
    MOV EDX,0xfec                       ; 00492479
    PUSH 0x5d51f3                       ; 0049247e
    MOV [0x01d046a0],EAX                ; 00492483 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00492488 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0049248e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00492493
    JMP 0x004923a3                      ; 00492496
        ;   XREF to: 004923a3 (UNCONDITIONAL_JUMP)  ; LAB_004923a3

