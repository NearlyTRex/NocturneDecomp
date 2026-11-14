; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_00436400(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,uint param_7)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_operator_new_array_FUN_005a40df
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436400
        ;   Label: cockpit_ckptutil.c_FUN_00436400
    PUSH EDI                            ; 00436401
    PUSH EBP                            ; 00436402
    SUB ESP,0x30                        ; 00436403
    MOV EAX,dword ptr [ESP + 0x40]      ; 00436406
    MOV EBX,dword ptr [ESP + 0x44]      ; 0043640a
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0043640e
    MOV EDI,dword ptr [ESP + 0x58]      ; 00436412
    MOV dword ptr [ESP],EAX             ; 00436416
    TEST EAX,EAX                        ; 00436419
    JZ 0x0043659d                       ; 0043641b
        ;   XREF to: 0043659d (CONDITIONAL_JUMP)  ; LAB_0043659d
    PUSH ESI                            ; 00436421
    MOV EAX,EBX                         ; 00436422
    SUB EAX,EBP                         ; 00436424
    MOV EDX,dword ptr [ESP + 0x58]      ; 00436426
    INC EAX                             ; 0043642a
    CMP EAX,EDX                         ; 0043642b
    JG 0x004365a4                       ; 0043642d
        ;   XREF to: 004365a4 (CONDITIONAL_JUMP)  ; LAB_004365a4
    LEA EAX,[EBP*0x4 + 0x0]             ; 00436433
        ;   Label: LAB_00436433
    PUSH EAX                            ; 0043643a
    CALL crt_memory.c_operator_new_array_FUN_005a40df ; 0043643b
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005a40df()
    ADD ESP,0x4                         ; 00436440
    MOV dword ptr [ESP + 0x20],EAX      ; 00436443
    TEST EAX,EAX                        ; 00436447
    JZ 0x004365cc                       ; 00436449
        ;   XREF to: 004365cc (CONDITIONAL_JUMP)  ; LAB_004365cc
    XOR ESI,ESI                         ; 0043644f
        ;   Label: LAB_0043644f
    MOV dword ptr [ESP + 0x1c],ESI      ; 00436451
    TEST EBP,EBP                        ; 00436455
    JLE 0x004364b4                      ; 00436457
        ;   XREF to: 004364b4 (CONDITIONAL_JUMP)  ; LAB_004364b4
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00436459
    DEC EAX                             ; 0043645d
    MOV dword ptr [ESP + 0x14],EAX      ; 0043645e
    IMUL EAX,EBX                        ; 00436462
    MOV EDX,dword ptr [ESP + 0x4]       ; 00436465
    ADD EDX,EAX                         ; 00436469
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043646b
    MOV dword ptr [ESP + 0x8],EDX       ; 0043646f
    MOV dword ptr [ESP + 0x24],EAX      ; 00436473
    MOV EDX,dword ptr [ESP + 0x8]       ; 00436477
        ;   Label: LAB_00436477
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043647b
    ADD EDX,ESI                         ; 0043647f
    TEST EAX,EAX                        ; 00436481
    JL 0x00436491                       ; 00436483
        ;   XREF to: 00436491 (CONDITIONAL_JUMP)  ; LAB_00436491
    XOR ECX,ECX                         ; 00436485
        ;   Label: LAB_00436485
    MOV CL,byte ptr [EDX]               ; 00436487
    CMP ECX,EDI                         ; 00436489
    JNZ 0x004365f3                      ; 0043648b
        ;   XREF to: 004365f3 (CONDITIONAL_JUMP)  ; LAB_004365f3
    MOV ECX,dword ptr [ESP + 0x24]      ; 00436491
        ;   Label: LAB_00436491
    LEA EDX,[EAX + 0x1]                 ; 00436495
    MOV dword ptr [ECX],EDX             ; 00436498
    CMP EAX,dword ptr [ESP + 0x1c]      ; 0043649a
    JL 0x004364a4                       ; 0043649e
        ;   XREF to: 004364a4 (CONDITIONAL_JUMP)  ; LAB_004364a4
    MOV dword ptr [ESP + 0x1c],EAX      ; 004364a0
    MOV EAX,dword ptr [ESP + 0x24]      ; 004364a4
        ;   Label: LAB_004364a4
    ADD EAX,0x4                         ; 004364a8
    INC ESI                             ; 004364ab
    MOV dword ptr [ESP + 0x24],EAX      ; 004364ac
    CMP ESI,EBP                         ; 004364b0
    JL 0x00436477                       ; 004364b2
        ;   XREF to: 00436477 (CONDITIONAL_JUMP)  ; LAB_00436477
    MOV EDX,dword ptr [ESP + 0x54]      ; 004364b4
        ;   Label: LAB_004364b4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004364b8
    MOV dword ptr [EDX],EAX             ; 004364bc
    MOV EDX,0x1                         ; 004364be
    MOV ECX,dword ptr [ESP + 0x58]      ; 004364c3
    MOV dword ptr [ESP + 0x2c],EDX      ; 004364c7
    CMP ECX,EDX                         ; 004364cb
    JLE 0x0043658f                      ; 004364cd
        ;   XREF to: 0043658f (CONDITIONAL_JUMP)  ; LAB_0043658f
    MOV EDX,dword ptr [ESP + 0x20]      ; 004364d3
    LEA EAX,[EBP*0x4 + 0x0]             ; 004364d7
    ADD EDX,EAX                         ; 004364de
    LEA EAX,[EBP + -0x1]                ; 004364e0
    MOV dword ptr [ESP + 0x30],EAX      ; 004364e3
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004364e7
    DEC EAX                             ; 004364eb
    MOV dword ptr [ESP + 0x18],EAX      ; 004364ec
    IMUL EAX,EBX                        ; 004364f0
    MOV ESI,dword ptr [ESP + 0x4]       ; 004364f3
    MOV dword ptr [ESP + 0x10],EDX      ; 004364f7
    MOV EDX,dword ptr [ESP + 0x30]      ; 004364fb
    ADD EAX,ESI                         ; 004364ff
    ADD EDX,EAX                         ; 00436501
    MOV EAX,dword ptr [ESP + 0x54]      ; 00436503
    ADD EAX,0x4                         ; 00436507
    MOV dword ptr [ESP + 0xc],EDX       ; 0043650a
    MOV dword ptr [ESP + 0x28],EAX      ; 0043650e
    MOV EAX,dword ptr [ESP + 0xc]       ; 00436512
        ;   Label: LAB_00436512
    ADD EAX,dword ptr [ESP + 0x2c]      ; 00436516
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043651a
    TEST EDX,EDX                        ; 0043651e
    JL 0x0043652e                       ; 00436520
        ;   XREF to: 0043652e (CONDITIONAL_JUMP)  ; LAB_0043652e
    XOR ECX,ECX                         ; 00436522
        ;   Label: LAB_00436522
    MOV CL,byte ptr [EAX]               ; 00436524
    CMP ECX,EDI                         ; 00436526
    JNZ 0x00436603                      ; 00436528
        ;   XREF to: 00436603 (CONDITIONAL_JUMP)  ; LAB_00436603
    MOV ESI,dword ptr [ESP + 0x30]      ; 0043652e
        ;   Label: LAB_0043652e
    XOR ECX,ECX                         ; 00436532
    TEST ESI,ESI                        ; 00436534
    JLE 0x0043654d                      ; 00436536
        ;   XREF to: 0043654d (CONDITIONAL_JUMP)  ; LAB_0043654d
    MOV EAX,dword ptr [ESP + 0x20]      ; 00436538
    MOV ESI,dword ptr [EAX + 0x4]       ; 0043653c
        ;   Label: LAB_0043653c
    INC ECX                             ; 0043653f
    MOV dword ptr [EAX],ESI             ; 00436540
    MOV ESI,dword ptr [ESP + 0x30]      ; 00436542
    ADD EAX,0x4                         ; 00436546
    CMP ECX,ESI                         ; 00436549
    JL 0x0043653c                       ; 0043654b
        ;   XREF to: 0043653c (CONDITIONAL_JUMP)  ; LAB_0043653c
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043654d
        ;   Label: LAB_0043654d
    INC EDX                             ; 00436551
    XOR ECX,ECX                         ; 00436552
    MOV dword ptr [EAX + -0x4],EDX      ; 00436554
    XOR EDX,EDX                         ; 00436557
    TEST EBP,EBP                        ; 00436559
    JLE 0x00436571                      ; 0043655b
        ;   XREF to: 00436571 (CONDITIONAL_JUMP)  ; LAB_00436571
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043655d
    MOV ESI,dword ptr [EAX]             ; 00436561
        ;   Label: LAB_00436561
    CMP ECX,ESI                         ; 00436563
    JG 0x00436569                       ; 00436565
        ;   XREF to: 00436569 (CONDITIONAL_JUMP)  ; LAB_00436569
    MOV ECX,ESI                         ; 00436567
    INC EDX                             ; 00436569
        ;   Label: LAB_00436569
    ADD EAX,0x4                         ; 0043656a
    CMP EDX,EBP                         ; 0043656d
    JL 0x00436561                       ; 0043656f
        ;   XREF to: 00436561 (CONDITIONAL_JUMP)  ; LAB_00436561
    MOV EAX,dword ptr [ESP + 0x28]      ; 00436571
        ;   Label: LAB_00436571
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00436575
    MOV EDX,dword ptr [ESP + 0x58]      ; 00436579
    INC ESI                             ; 0043657d
    MOV dword ptr [EAX],ECX             ; 0043657e
    LEA ECX,[EAX + 0x4]                 ; 00436580
    MOV dword ptr [ESP + 0x2c],ESI      ; 00436583
    MOV dword ptr [ESP + 0x28],ECX      ; 00436587
    CMP ESI,EDX                         ; 0043658b
    JL 0x00436512                       ; 0043658d
        ;   XREF to: 00436512 (CONDITIONAL_JUMP)  ; LAB_00436512
    MOV ECX,dword ptr [ESP + 0x20]      ; 0043658f
        ;   Label: LAB_0043658f
    PUSH ECX                            ; 00436593
    CALL crt_unknown.c_FUN_005a30c4     ; 00436594
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00436599
    POP ESI                             ; 0043659c
    ADD ESP,0x30                        ; 0043659d
        ;   Label: LAB_0043659d
    POP EBP                             ; 004365a0
    POP EDI                             ; 004365a1
    POP EBX                             ; 004365a2
    RET                                 ; 004365a3
    MOV ECX,0x5b895f                    ; 004365a4
        ;   Label: LAB_004365a4
    MOV ESI,0x3d7                       ; 004365a9
    PUSH 0x5b8975                       ; 004365ae
    MOV dword ptr [0x01d71de0],ECX      ; 004365b3 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004365b9 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004365bf
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004365c4
    JMP 0x00436433                      ; 004365c7
        ;   XREF to: 00436433 (UNCONDITIONAL_JUMP)  ; LAB_00436433
    MOV EAX,0x5b8990                    ; 004365cc
        ;   Label: LAB_004365cc
    MOV EDX,0x3dd                       ; 004365d1
    PUSH 0x5b89a6                       ; 004365d6
    MOV [0x01d71de0],EAX                ; 004365db | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004365e0 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004365e6
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004365eb
    JMP 0x0043644f                      ; 004365ee
        ;   XREF to: 0043644f (UNCONDITIONAL_JUMP)  ; LAB_0043644f
    DEC EAX                             ; 004365f3
        ;   Label: LAB_004365f3
    SUB EDX,EBX                         ; 004365f4
    TEST EAX,EAX                        ; 004365f6
    JGE 0x00436485                      ; 004365f8
        ;   XREF to: 00436485 (CONDITIONAL_JUMP)  ; LAB_00436485
    JMP 0x00436491                      ; 004365fe
        ;   XREF to: 00436491 (UNCONDITIONAL_JUMP)  ; LAB_00436491
    DEC EDX                             ; 00436603
        ;   Label: LAB_00436603
    SUB EAX,EBX                         ; 00436604
    TEST EDX,EDX                        ; 00436606
    JGE 0x00436522                      ; 00436608
        ;   XREF to: 00436522 (CONDITIONAL_JUMP)  ; LAB_00436522
    JMP 0x0043652e                      ; 0043660e
        ;   XREF to: 0043652e (UNCONDITIONAL_JUMP)  ; LAB_0043652e

