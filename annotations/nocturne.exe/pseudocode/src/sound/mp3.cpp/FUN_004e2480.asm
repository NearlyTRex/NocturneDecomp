; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_mp3_cpp_FUN_004e2480(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0058b4e0
;   TerminatedCString s_MPEG_Layer_2_pick_table_0058b4f1
;   undefined4 DAT_005bbc48
;   undefined4 DAT_005bbc88
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_01cd8b28
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2480
        ;   Label: sound_mp3.cpp_FUN_004e2480
    PUSH ESI                            ; 004e2481
    PUSH EDI                            ; 004e2482
    PUSH EBP                            ; 004e2483
    SUB ESP,0xc                         ; 004e2484
    MOV ESI,dword ptr [ESP + 0x20]      ; 004e2487
    MOV ECX,dword ptr [ESI]             ; 004e248b
    MOV EAX,dword ptr [ECX + 0x4]       ; 004e248d
    DEC EAX                             ; 004e2490
    MOV dword ptr [ESP],EAX             ; 004e2491
    MOV EAX,dword ptr [ECX + 0xc]       ; 004e2494
    MOV EBX,dword ptr [ECX]             ; 004e2497
    MOV dword ptr [ESP + 0x4],EAX       ; 004e2499
    LEA EAX,[EBX*0x4 + 0x0]             ; 004e249d
    SUB EAX,EBX                         ; 004e24a4
    SHL EAX,0x2                         ; 004e24a6
    MOV EBP,EAX                         ; 004e24a9
    SHL EBP,0x4                         ; 004e24ab
    SUB EBP,EAX                         ; 004e24ae
    MOV EAX,dword ptr [ESP]             ; 004e24b0
    SHL EAX,0x2                         ; 004e24b3
    MOV EDX,EAX                         ; 004e24b6
    SHL EAX,0x4                         ; 004e24b8
    SUB EAX,EDX                         ; 004e24bb
    ADD EBP,EAX                         ; 004e24bd
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e24bf
    MOV EDX,dword ptr [EBP + EAX*0x4 + 0x5bbc88] ; 004e24c3 | DAT_005bbc88
    MOV EAX,EDX                         ; 004e24ca
    MOV EBP,dword ptr [ESI + 0x10]      ; 004e24cc
    SAR EDX,0x1f                        ; 004e24cf
    IDIV EBP                            ; 004e24d2
    MOV EDX,EAX                         ; 004e24d4
    MOV EAX,dword ptr [ECX + 0x10]      ; 004e24d6
    MOV ECX,EBX                         ; 004e24d9
    SHL ECX,0x5                         ; 004e24db
    MOV EDI,dword ptr [ESI + 0x18]      ; 004e24de
    FLD double ptr [ECX + EAX*0x8 + 0x5bbc48] ; 004e24e1 | DAT_005bbc48
    CALL crt_math.c_round_FUN_00563a30  ; 004e24e8
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x8]         ; 004e24ed
    CMP EBX,0x1                         ; 004e24f1
    JNZ 0x004e2579                      ; 004e24f4
        ;   XREF to: 004e2579 (CONDITIONAL_JUMP)  ; LAB_004e2579
    CMP dword ptr [ESP + 0x8],0x30      ; 004e24fa
    JNZ 0x004e251b                      ; 004e24ff
        ;   XREF to: 004e251b (CONDITIONAL_JUMP)  ; LAB_004e251b
    CMP EDX,0x38                        ; 004e2501
    JL 0x004e251b                       ; 004e2504
        ;   XREF to: 004e251b (CONDITIONAL_JUMP)  ; LAB_004e251b
    XOR EAX,EAX                         ; 004e2506
        ;   Label: LAB_004e2506
    CMP EAX,dword ptr [ESI + 0xc]       ; 004e2508
    JNZ 0x004e258d                      ; 004e250b
        ;   XREF to: 004e258d (CONDITIONAL_JUMP)  ; LAB_004e258d
    MOV EAX,EDI                         ; 004e2511
    ADD ESP,0xc                         ; 004e2513
    POP EBP                             ; 004e2516
    POP EDI                             ; 004e2517
    POP ESI                             ; 004e2518
    POP EBX                             ; 004e2519
    RET                                 ; 004e251a
    CMP EDX,0x38                        ; 004e251b
        ;   Label: LAB_004e251b
    JL 0x004e2525                       ; 004e251e
        ;   XREF to: 004e2525 (CONDITIONAL_JUMP)  ; LAB_004e2525
    CMP EDX,0x50                        ; 004e2520
    JLE 0x004e2506                      ; 004e2523
        ;   XREF to: 004e2506 (CONDITIONAL_JUMP)  ; LAB_004e2506
    CMP dword ptr [ESP + 0x8],0x30      ; 004e2525
        ;   Label: LAB_004e2525
    JZ 0x004e2545                       ; 004e252a
        ;   XREF to: 004e2545 (CONDITIONAL_JUMP)  ; LAB_004e2545
    CMP EDX,0x60                        ; 004e252c
    JL 0x004e2545                       ; 004e252f
        ;   XREF to: 004e2545 (CONDITIONAL_JUMP)  ; LAB_004e2545
    MOV EAX,0x1                         ; 004e2531
    CMP EAX,dword ptr [ESI + 0xc]       ; 004e2536
    JNZ 0x004e258d                      ; 004e2539
        ;   XREF to: 004e258d (CONDITIONAL_JUMP)  ; LAB_004e258d
    MOV EAX,EDI                         ; 004e253b
    ADD ESP,0xc                         ; 004e253d
    POP EBP                             ; 004e2540
    POP EDI                             ; 004e2541
    POP ESI                             ; 004e2542
    POP EBX                             ; 004e2543
    RET                                 ; 004e2544
    CMP dword ptr [ESP + 0x8],0x20      ; 004e2545
        ;   Label: LAB_004e2545
    JZ 0x004e2565                       ; 004e254a
        ;   XREF to: 004e2565 (CONDITIONAL_JUMP)  ; LAB_004e2565
    CMP EDX,0x30                        ; 004e254c
    JG 0x004e2565                       ; 004e254f
        ;   XREF to: 004e2565 (CONDITIONAL_JUMP)  ; LAB_004e2565
    MOV EAX,0x2                         ; 004e2551
    CMP EAX,dword ptr [ESI + 0xc]       ; 004e2556
    JNZ 0x004e258d                      ; 004e2559
        ;   XREF to: 004e258d (CONDITIONAL_JUMP)  ; LAB_004e258d
    MOV EAX,EDI                         ; 004e255b
    ADD ESP,0xc                         ; 004e255d
    POP EBP                             ; 004e2560
    POP EDI                             ; 004e2561
    POP ESI                             ; 004e2562
    POP EBX                             ; 004e2563
    RET                                 ; 004e2564
    MOV EAX,0x3                         ; 004e2565
        ;   Label: LAB_004e2565
    CMP EAX,dword ptr [ESI + 0xc]       ; 004e256a
    JNZ 0x004e258d                      ; 004e256d
        ;   XREF to: 004e258d (CONDITIONAL_JUMP)  ; LAB_004e258d
    MOV EAX,EDI                         ; 004e256f
    ADD ESP,0xc                         ; 004e2571
    POP EBP                             ; 004e2574
    POP EDI                             ; 004e2575
    POP ESI                             ; 004e2576
    POP EBX                             ; 004e2577
    RET                                 ; 004e2578
    MOV EAX,0x4                         ; 004e2579
        ;   Label: LAB_004e2579
    CMP EAX,dword ptr [ESI + 0xc]       ; 004e257e
    JNZ 0x004e258d                      ; 004e2581
        ;   XREF to: 004e258d (CONDITIONAL_JUMP)  ; LAB_004e258d
    MOV EAX,EDI                         ; 004e2583
    ADD ESP,0xc                         ; 004e2585
    POP EBP                             ; 004e2588
    POP EDI                             ; 004e2589
    POP ESI                             ; 004e258a
    POP EBX                             ; 004e258b
    RET                                 ; 004e258c
    PUSH 0x1cd8b28                      ; 004e258d | DAT_01cd8b28
        ;   Label: LAB_004e258d
    MOV EAX,0x58b4e0                    ; 004e2592 | = "..\\sound\\mp3.cpp"
    MOV EDX,0x1a1                       ; 004e2597
    PUSH 0x58b4f1                       ; 004e259c | = "MPEG Layer 2 - pick_table - can't loa..."
    MOV [0x01cc4800],EAX                ; 004e25a1 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004e25a6 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e25ac
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004e25b1
    MOV EAX,EDI                         ; 004e25b4
    ADD ESP,0xc                         ; 004e25b6
    POP EBP                             ; 004e25b9
    POP EDI                             ; 004e25ba
    POP ESI                             ; 004e25bb
    POP EBX                             ; 004e25bc
    RET                                 ; 004e25bd

