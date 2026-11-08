; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005143b0(int *param_1,undefined4 param_2,char *param_3)
;
;
; Referenced Globals:
;   TerminatedCString s_Out_of_memory_005cc843
;   TerminatedCString s_Too_many_PODs_already_mo_005cc851
;
; Called Functions:
;   FUN_00508960
;   FUN_00512f00
;   FUN_00512f70
;   FUN_00512fb0
;   FUN_005a30c4
;   FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005143b0
        ;   Label: FUN_005143b0
    PUSH ESI                            ; 005143b1
    PUSH EDI                            ; 005143b2
    PUSH EBP                            ; 005143b3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005143b4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005143b8
    PUSH 0x42c                          ; 005143bc
    CALL FUN_005a3cb2                   ; 005143c1
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3cb2()
    ADD ESP,0x4                         ; 005143c6
    TEST EAX,EAX                        ; 005143c9
    JNZ 0x00514404                      ; 005143cb
        ;   XREF to: 00514404 (CONDITIONAL_JUMP)  ; LAB_00514404
    MOV EBX,EAX                         ; 005143cd
        ;   Label: LAB_005143cd
    TEST EBX,EBX                        ; 005143cf
    JZ 0x0051440f                       ; 005143d1
        ;   XREF to: 0051440f (CONDITIONAL_JUMP)  ; LAB_0051440f
    PUSH EDI                            ; 005143d3
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005143d4
    PUSH EDX                            ; 005143d8
    PUSH EBX                            ; 005143d9
    CALL FUN_00512fb0                   ; 005143da
        ;   XREF to: 00512fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00512fb0()
    ADD ESP,0xc                         ; 005143df
    TEST EAX,EAX                        ; 005143e2
    JNZ 0x0051443a                      ; 005143e4
        ;   XREF to: 0051443a (CONDITIONAL_JUMP)  ; LAB_0051443a
    TEST EBX,EBX                        ; 005143e6
    JZ 0x005143fd                       ; 005143e8
        ;   XREF to: 005143fd (CONDITIONAL_JUMP)  ; LAB_005143fd
    PUSH EAX                            ; 005143ea
    PUSH EBX                            ; 005143eb
    CALL FUN_00512f70                   ; 005143ec
        ;   XREF to: 00512f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00512f70()
    ADD ESP,0x8                         ; 005143f1
    PUSH EAX                            ; 005143f4
    CALL FUN_005a30c4                   ; 005143f5
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 005143fa
    XOR EAX,EAX                         ; 005143fd
        ;   Label: LAB_005143fd
    POP EBP                             ; 005143ff
    POP EDI                             ; 00514400
    POP ESI                             ; 00514401
    POP EBX                             ; 00514402
    RET                                 ; 00514403
    PUSH EAX                            ; 00514404
        ;   Label: LAB_00514404
    CALL FUN_00512f00                   ; 00514405
        ;   XREF to: 00512f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00512f00()
    ADD ESP,0x4                         ; 0051440a
    JMP 0x005143cd                      ; 0051440d
        ;   XREF to: 005143cd (UNCONDITIONAL_JUMP)  ; LAB_005143cd
    PUSH 0x5cc843                       ; 0051440f | = "Out of memory"
        ;   Label: LAB_0051440f
    CALL FUN_00508960                   ; 00514414
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 00514419
    MOV ESI,EAX                         ; 0051441c
    PUSH EDI                            ; 0051441e
    MOV AL,byte ptr [ESI]               ; 0051441f
        ;   Label: LAB_0051441f
    MOV byte ptr [EDI],AL               ; 00514421
    CMP AL,0x0                          ; 00514423
    JZ 0x00514437                       ; 00514425
        ;   XREF to: 00514437 (CONDITIONAL_JUMP)  ; LAB_00514437
    MOV AL,byte ptr [ESI + 0x1]         ; 00514427
    ADD ESI,0x2                         ; 0051442a
    MOV byte ptr [EDI + 0x1],AL         ; 0051442d
    ADD EDI,0x2                         ; 00514430
    CMP AL,0x0                          ; 00514433
    JNZ 0x0051441f                      ; 00514435
        ;   XREF to: 0051441f (CONDITIONAL_JUMP)  ; LAB_0051441f
    POP EDI                             ; 00514437
        ;   Label: LAB_00514437
    JMP 0x005143fd                      ; 00514438
        ;   XREF to: 005143fd (UNCONDITIONAL_JUMP)  ; LAB_005143fd
    MOV ECX,dword ptr [ESP + 0x18]      ; 0051443a
        ;   Label: LAB_0051443a
    PUSH ECX                            ; 0051443e
    MOV EAX,dword ptr [ESI + 0x194]     ; 0051443f
    PUSH ESI                            ; 00514445
    CALL dword ptr [EAX + 0x10]         ; 00514446
    MOV EBP,dword ptr [ESI]             ; 00514449
    ADD ESP,0x8                         ; 0051444b
    CMP EBP,0x64                        ; 0051444e
    JL 0x0051449b                       ; 00514451
        ;   XREF to: 0051449b (CONDITIONAL_JUMP)  ; LAB_0051449b
    TEST EBX,EBX                        ; 00514453
    JZ 0x0051446b                       ; 00514455
        ;   XREF to: 0051446b (CONDITIONAL_JUMP)  ; LAB_0051446b
    PUSH 0x0                            ; 00514457
    PUSH EBX                            ; 00514459
    CALL FUN_00512f70                   ; 0051445a
        ;   XREF to: 00512f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00512f70()
    ADD ESP,0x8                         ; 0051445f
    PUSH EAX                            ; 00514462
    CALL FUN_005a30c4                   ; 00514463
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00514468
    PUSH 0x5cc851                       ; 0051446b | = "Too many PODs already mounted"
        ;   Label: LAB_0051446b
    CALL FUN_00508960                   ; 00514470
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 00514475
    MOV ESI,EAX                         ; 00514478
    PUSH EDI                            ; 0051447a
    MOV AL,byte ptr [ESI]               ; 0051447b
        ;   Label: LAB_0051447b
    MOV byte ptr [EDI],AL               ; 0051447d
    CMP AL,0x0                          ; 0051447f
    JZ 0x00514493                       ; 00514481
        ;   XREF to: 00514493 (CONDITIONAL_JUMP)  ; LAB_00514493
    MOV AL,byte ptr [ESI + 0x1]         ; 00514483
    ADD ESI,0x2                         ; 00514486
    MOV byte ptr [EDI + 0x1],AL         ; 00514489
    ADD EDI,0x2                         ; 0051448c
    CMP AL,0x0                          ; 0051448f
    JNZ 0x0051447b                      ; 00514491
        ;   XREF to: 0051447b (CONDITIONAL_JUMP)  ; LAB_0051447b
    POP EDI                             ; 00514493
        ;   Label: LAB_00514493
    XOR EAX,EAX                         ; 00514494
    POP EBP                             ; 00514496
    POP EDI                             ; 00514497
    POP ESI                             ; 00514498
    POP EBX                             ; 00514499
    RET                                 ; 0051449a
    MOV EAX,EBP                         ; 0051449b
        ;   Label: LAB_0051449b
    MOV dword ptr [ESI + EAX*0x4 + 0x4],EBX ; 0051449d
    MOV EAX,0x1                         ; 005144a1
    ADD dword ptr [ESI],EAX             ; 005144a6
    POP EBP                             ; 005144a8
    POP EDI                             ; 005144a9
    POP ESI                             ; 005144aa
    POP EBX                             ; 005144ab
    RET                                 ; 005144ac

