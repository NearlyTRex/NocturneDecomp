; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046e410(undefined4 *param_1,char *param_2,undefined4 param_3)
;
; Local Variables:
; undefined        Stack[-0xcc]:1  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_0052d0e0 at 0052d2f3
;   FUN_0052ddf0 at 0052e818
;
; Referenced Globals:
;   IMAGE_DOS_HEADER IMAGE_DOS_HEADER_00400000
;   undefined4 DAT_005d192b
;   undefined4 DAT_005d1933
;   undefined4 DAT_005d193b
;   undefined4 DAT_005d1943
;   undefined4 DAT_0060b280
;   undefined4 DAT_0060d1f4
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01bd3c40
;   undefined4 DAT_01bd3c44
;   undefined4 DAT_01bd3c48
;   undefined4 DAT_01fc9c68
;
; Called Functions:
;   FUN_00469d00
;   FUN_0046b2b0
;   FUN_0046ca00
;   FUN_0046e2d0
;   FUN_00476d20
;   FUN_00476d40
;   FUN_0055d723
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046e410
        ;   Label: FUN_0046e410
    PUSH ESI                            ; 0046e411
    PUSH EDI                            ; 0046e412
    PUSH EBP                            ; 0046e413
    SUB ESP,0xbc                        ; 0046e414
    MOV EBP,dword ptr [ESP + 0xd0]      ; 0046e41a
    MOV ESI,dword ptr [ESP + 0xd4]      ; 0046e421
    LEA EDI,[EBP + 0xc]                 ; 0046e428
    PUSH EDI                            ; 0046e42b
    MOV AL,byte ptr [ESI]               ; 0046e42c
        ;   Label: LAB_0046e42c
    MOV byte ptr [EDI],AL               ; 0046e42e
    CMP AL,0x0                          ; 0046e430
    JZ 0x0046e444                       ; 0046e432
        ;   XREF to: 0046e444 (CONDITIONAL_JUMP)  ; LAB_0046e444
    MOV AL,byte ptr [ESI + 0x1]         ; 0046e434
    ADD ESI,0x2                         ; 0046e437
    MOV byte ptr [EDI + 0x1],AL         ; 0046e43a
    ADD EDI,0x2                         ; 0046e43d
    CMP AL,0x0                          ; 0046e440
    JNZ 0x0046e42c                      ; 0046e442
        ;   XREF to: 0046e42c (CONDITIONAL_JUMP)  ; LAB_0046e42c
    POP EDI                             ; 0046e444
        ;   Label: LAB_0046e444
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0046e445
    PUSH 0x1fc9c68                      ; 0046e44c | DAT_01fc9c68
    LEA ESI,[ESP + 0x4c]                ; 0046e451
    MOV dword ptr [EBP],EAX             ; 0046e455
    LEA EDI,[ESP + 0x7c]                ; 0046e458
    CALL FUN_00476d20                   ; 0046e45c
        ;   XREF to: 00476d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00476d20()
    LEA ESI,[ESP + 0x4c]                ; 0046e461
    ADD ESP,0x4                         ; 0046e465
    MOVSD ES:EDI,ESI                    ; 0046e468
    MOVSD ES:EDI,ESI                    ; 0046e469
    MOVSD ES:EDI,ESI                    ; 0046e46a
    PUSH 0x1fc9c68                      ; 0046e46b | DAT_01fc9c68
    LEA ESI,[ESP + 0x58]                ; 0046e470
    LEA EDI,[ESP + 0x64]                ; 0046e474
    CALL FUN_00476d40                   ; 0046e478
        ;   XREF to: 00476d40 (UNCONDITIONAL_CALL)  ; undefined FUN_00476d40()
    LEA ESI,[ESP + 0x58]                ; 0046e47d
    ADD ESP,0x4                         ; 0046e481
    MOVSD ES:EDI,ESI                    ; 0046e484
    MOVSD ES:EDI,ESI                    ; 0046e485
    MOVSD ES:EDI,ESI                    ; 0046e486
    FLD float ptr [ESP + 0x78]          ; 0046e487
    FADD float ptr [ESP + 0x60]         ; 0046e48b
    FLD double ptr [0x005d192b]         ; 0046e48f | DAT_005d192b
    FXCH                                ; 0046e495
    FMUL ST1                            ; 0046e497
    FLD float ptr [ESP + 0x80]          ; 0046e499
    FLD float ptr [ESP + 0x60]          ; 0046e4a0
    FSUB float ptr [ESP + 0x78]         ; 0046e4a4
    FXCH                                ; 0046e4a8
    FADD float ptr [ESP + 0x68]         ; 0046e4aa
    FXCH                                ; 0046e4ae
    FMUL ST3                            ; 0046e4b0
    FXCH                                ; 0046e4b2
    FMULP ST3                           ; 0046e4b4
    FMUL double ptr [0x005d1933]        ; 0046e4b6 | DAT_005d1933
    FLDZ                                ; 0046e4bc
    XOR EDX,EDX                         ; 0046e4be
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0046e4c0
    MOV dword ptr [0x0060d1f4],EDX      ; 0046e4c4 | DAT_0060d1f4
    MOV [0x01bd3c44],EAX                ; 0046e4ca | DAT_01bd3c44
    FXCH ST2                            ; 0046e4cf
    FSTP float ptr [0x01bd3c40]         ; 0046e4d1 | DAT_01bd3c40
    FXCH ST2                            ; 0046e4d7
    FSTP float ptr [0x01bd3c48]         ; 0046e4d9 | DAT_01bd3c48
    FXCH                                ; 0046e4df
    FSTP float ptr [ESP + 0xa0]         ; 0046e4e1
    FCOMP float ptr [ESP + 0xa0]        ; 0046e4e8
    FNSTSW AX                           ; 0046e4ef
    SAHF                                ; 0046e4f1
    JC 0x0046e8df                       ; 0046e4f2
        ;   XREF to: 0046e8df (CONDITIONAL_JUMP)  ; LAB_0046e8df
    FLD float ptr [ESP + 0x64]          ; 0046e4f8
        ;   Label: LAB_0046e4f8
    FSUB float ptr [ESP + 0x7c]         ; 0046e4fc
    FMUL double ptr [0x005d1933]        ; 0046e500 | DAT_005d1933
    FST float ptr [ESP + 0x9c]          ; 0046e506
    FCOMP float ptr [0x0060d1f4]        ; 0046e50d | DAT_0060d1f4
    FNSTSW AX                           ; 0046e513
    SAHF                                ; 0046e515
    JBE 0x0046e524                      ; 0046e516
        ;   XREF to: 0046e524 (CONDITIONAL_JUMP)  ; LAB_0046e524
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0046e518
    MOV [0x0060d1f4],EAX                ; 0046e51f | DAT_0060d1f4
    FLD float ptr [ESP + 0x68]          ; 0046e524
        ;   Label: LAB_0046e524
    FSUB float ptr [ESP + 0x80]         ; 0046e528
    FMUL double ptr [0x005d192b]        ; 0046e52f | DAT_005d192b
    FMUL double ptr [0x005d1933]        ; 0046e535 | DAT_005d1933
    FST float ptr [ESP + 0x98]          ; 0046e53b
    FCOMP float ptr [0x0060d1f4]        ; 0046e542 | DAT_0060d1f4
    FNSTSW AX                           ; 0046e548
    SAHF                                ; 0046e54a
    JBE 0x0046e559                      ; 0046e54b
        ;   XREF to: 0046e559 (CONDITIONAL_JUMP)  ; LAB_0046e559
    MOV EAX,dword ptr [ESP + 0x98]      ; 0046e54d
    MOV [0x0060d1f4],EAX                ; 0046e554 | DAT_0060d1f4
    PUSH 0x1bd3c40                      ; 0046e559 | DAT_01bd3c40
        ;   Label: LAB_0046e559
    MOV ECX,dword ptr [0x0060b280]      ; 0046e55e | DAT_0060b280
    PUSH ECX                            ; 0046e564 | DAT_01ba5c50
    MOV EBX,0x4                         ; 0046e565
    XOR ESI,ESI                         ; 0046e56a
    CALL FUN_0046b2b0                   ; 0046e56c
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b2b0()
    MOV ECX,dword ptr [0x0060b280]      ; 0046e571 | DAT_0060b280
    ADD ESP,0x8                         ; 0046e577
    LEA EAX,[EBX + EBP*0x1]             ; 0046e57a
    MOV dword ptr [ESP + 0x4],EBX       ; 0046e57d
    PUSH EAX                            ; 0046e581
    MOV dword ptr [ESP + 0x18],ESI      ; 0046e582
    MOV dword ptr [ESP + 0x14],ESI      ; 0046e586
    PUSH ECX                            ; 0046e58a | DAT_01ba5c50
    MOV dword ptr [ESP + 0x14],ESI      ; 0046e58b
    MOV dword ptr [ESP + 0x10],ESI      ; 0046e58f
    CALL FUN_0046ca00                   ; 0046e593
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    FLD double ptr [0x005d193b]         ; 0046e598 | DAT_005d193b
    FSIN                                ; 0046e59e
    ADD ESP,0x8                         ; 0046e5a0
    FLD float ptr [0x0060d1f4]          ; 0046e5a3 | DAT_0060d1f4
    FXCH                                ; 0046e5a9
    FMUL ST1                            ; 0046e5ab
    FLD double ptr [0x005d1943]         ; 0046e5ad | DAT_005d1943
    FXCH                                ; 0046e5b3
    FMUL ST1                            ; 0046e5b5
    FXCH ST2                            ; 0046e5b7
    FMULP                               ; 0046e5b9
    FXCH                                ; 0046e5bb
    CALL FUN_005b7ff0                   ; 0046e5bd
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x6c]        ; 0046e5c2
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0046e5c6
    MOV ECX,dword ptr [0x0060b280]      ; 0046e5ca | DAT_0060b280
    MOV dword ptr [ESP + 0x74],EAX      ; 0046e5d0
    LEA EAX,[ESP + 0x6c]                ; 0046e5d4
    CALL FUN_005b7ff0                   ; 0046e5d8
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    PUSH EAX                            ; 0046e5dd
    FISTP dword ptr [ESP + 0x74]        ; 0046e5de
    MOV EAX,dword ptr [ECX]             ; 0046e5e2
    PUSH EAX                            ; 0046e5e4
    CALL FUN_0055d723                   ; 0046e5e5
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 0046e5ea
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0046e5ed
    LEA EAX,[ESP + 0x6c]                ; 0046e5f1
    NEG EBX                             ; 0046e5f5
    MOV ECX,dword ptr [0x0060b280]      ; 0046e5f7 | DAT_0060b280
    MOV dword ptr [ESP + 0x6c],EBX      ; 0046e5fd
    PUSH EAX                            ; 0046e601
    MOV EAX,dword ptr [ECX]             ; 0046e602 | DAT_01ba5c50
    ADD EAX,0x30                        ; 0046e604
    PUSH EAX                            ; 0046e607
    CALL FUN_0055d723                   ; 0046e608
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 0046e60d
    MOV ESI,dword ptr [ESP + 0x74]      ; 0046e610
    LEA EAX,[ESP + 0x6c]                ; 0046e614
    NEG ESI                             ; 0046e618
    MOV ECX,dword ptr [0x0060b280]      ; 0046e61a | DAT_0060b280
    MOV dword ptr [ESP + 0x74],ESI      ; 0046e620
    PUSH EAX                            ; 0046e624
    MOV EAX,dword ptr [ECX]             ; 0046e625 | DAT_01ba5c50
    ADD EAX,0x60                        ; 0046e627
    PUSH EAX                            ; 0046e62a
    CALL FUN_0055d723                   ; 0046e62b
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 0046e630
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0046e633
    NEG EDI                             ; 0046e637
    MOV EAX,[0x0060b280]                ; 0046e639 | DAT_0060b280
    MOV dword ptr [ESP + 0x6c],EDI      ; 0046e63e
    LEA ECX,[ESP + 0x6c]                ; 0046e642
    MOV EAX,dword ptr [EAX]             ; 0046e646 | DAT_01ba5c50
    PUSH ECX                            ; 0046e648
    ADD EAX,0x90                        ; 0046e649
    PUSH EAX                            ; 0046e64e
    CALL FUN_0055d723                   ; 0046e64f
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 0046e654
    MOV EAX,[0x0060b280]                ; 0046e657 | DAT_0060b280
    MOV EBX,dword ptr [EAX]             ; 0046e65c | DAT_01ba5c50
    MOV ECX,dword ptr [EBP]             ; 0046e65e
    MOV dword ptr [EBX + 0x20],ECX      ; 0046e661
    MOV EBX,dword ptr [EAX]             ; 0046e664 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x24],ECX      ; 0046e666
    MOV ECX,dword ptr [EAX]             ; 0046e669 | DAT_01ba5c50
    MOV EBX,dword ptr [EBP]             ; 0046e66b
    MOV dword ptr [ECX + 0x28],EBX      ; 0046e66e
    MOV ECX,dword ptr [EAX]             ; 0046e671 | DAT_01ba5c50
    MOV dword ptr [ECX + 0x2c],0x0      ; 0046e673
    MOV ECX,dword ptr [EAX]             ; 0046e67a | DAT_01ba5c50
    MOV EBX,dword ptr [EBP]             ; 0046e67c
    MOV dword ptr [ECX + 0x50],EBX      ; 0046e67f
    MOV ECX,dword ptr [EAX]             ; 0046e682 | DAT_01ba5c50
    MOV dword ptr [ECX + 0x54],EBX      ; 0046e684
    MOV EBX,dword ptr [EAX]             ; 0046e687 | DAT_01ba5c50
    MOV ECX,dword ptr [EBP]             ; 0046e689
    MOV dword ptr [EBX + 0x58],ECX      ; 0046e68c
    MOV ECX,dword ptr [EAX]             ; 0046e68f | DAT_01ba5c50
    MOV dword ptr [ECX + 0x5c],0x0      ; 0046e691
    MOV EBX,dword ptr [EAX]             ; 0046e698 | DAT_01ba5c50
    MOV ECX,dword ptr [EBP]             ; 0046e69a
    MOV dword ptr [EBX + 0x80],ECX      ; 0046e69d
    MOV EBX,dword ptr [EAX]             ; 0046e6a3 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x84],ECX      ; 0046e6a5
    MOV EBX,dword ptr [EAX]             ; 0046e6ab | DAT_01ba5c50
    MOV dword ptr [EBX + 0x88],ECX      ; 0046e6ad
    MOV ECX,dword ptr [EAX]             ; 0046e6b3 | DAT_01ba5c50
    MOV dword ptr [ECX + 0x8c],0x0      ; 0046e6b5
    MOV EBX,dword ptr [EAX]             ; 0046e6bf | DAT_01ba5c50
    MOV ECX,dword ptr [EBP]             ; 0046e6c1
    MOV dword ptr [EBX + 0xb0],ECX      ; 0046e6c4
    MOV EBX,dword ptr [EAX]             ; 0046e6ca | DAT_01ba5c50
    MOV dword ptr [EBX + 0xb4],ECX      ; 0046e6cc
    MOV EBX,dword ptr [EAX]             ; 0046e6d2 | DAT_01ba5c50
    MOV ESI,0x1                         ; 0046e6d4
    MOV dword ptr [EBX + 0xb8],ECX      ; 0046e6d9
    MOV EDI,0x3                         ; 0046e6df
    MOV ECX,dword ptr [EAX]             ; 0046e6e4 | DAT_01ba5c50
    PUSH 0x2c5                          ; 0046e6e6
    XOR EDX,EDX                         ; 0046e6eb
    MOV dword ptr [ECX + 0xbc],0x0      ; 0046e6ed
    MOV ECX,0x80000                     ; 0046e6f7
    MOV dword ptr [ESP + 0x1c],EDX      ; 0046e6fc
    MOV dword ptr [ESP + 0x28],ESI      ; 0046e700
    MOV dword ptr [ESP + 0x20],ECX      ; 0046e704
    MOV EBX,ECX                         ; 0046e708
    MOV dword ptr [ESP + 0x24],ECX      ; 0046e70a
    MOV dword ptr [ESP + 0x2c],ECX      ; 0046e70e
    MOV dword ptr [ESP + 0x30],ECX      ; 0046e712
    MOV ECX,0x2                         ; 0046e716
    MOV dword ptr [ESP + 0x40],EDI      ; 0046e71b
    MOV dword ptr [ESP + 0x34],ECX      ; 0046e71f
    LEA ECX,[ESP + 0x4]                 ; 0046e723
    XOR EDI,EDI                         ; 0046e727
    PUSH ECX                            ; 0046e729
    MOV dword ptr [ESP + 0x3c],EBX      ; 0046e72a
    MOV dword ptr [ESP + 0x40],EBX      ; 0046e72e
    PUSH EAX                            ; 0046e732 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x4c],EBX      ; 0046e733
    MOV dword ptr [ESP + 0x50],EBX      ; 0046e737
    CALL FUN_00469d00                   ; 0046e73b
        ;   XREF to: 00469d00 (UNCONDITIONAL_CALL)  ; undefined FUN_00469d00()
    ADD ESP,0xc                         ; 0046e740
    MOV dword ptr [ESP + 0xa8],EDI      ; 0046e743
    MOV ESI,dword ptr [ESP + 0xa8]      ; 0046e74a
        ;   Label: LAB_0046e74a
    XOR EBX,EBX                         ; 0046e751
    PUSH ESI                            ; 0046e753
        ;   Label: LAB_0046e753
    PUSH EBX                            ; 0046e754
    PUSH EDI                            ; 0046e755
    PUSH EBP                            ; 0046e756
    INC ESI                             ; 0046e757
    INC EBX                             ; 0046e758
    CALL FUN_0046e2d0                   ; 0046e759
        ;   XREF to: 0046e2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e2d0()
    ADD ESP,0x10                        ; 0046e75e
    CMP EBX,0x4                         ; 0046e761
    JL 0x0046e753                       ; 0046e764
        ;   XREF to: 0046e753 (CONDITIONAL_JUMP)  ; LAB_0046e753
    MOV ESI,dword ptr [ESP + 0xa8]      ; 0046e766
    ADD ESI,0x4                         ; 0046e76d
    INC EDI                             ; 0046e770
    MOV dword ptr [ESP + 0xa8],ESI      ; 0046e771
    CMP EDI,0x10                        ; 0046e778
    JLE 0x0046e74a                      ; 0046e77b
        ;   XREF to: 0046e74a (CONDITIONAL_JUMP)  ; LAB_0046e74a
    XOR EDI,EDI                         ; 0046e77d
    MOV dword ptr [ESP + 0xac],EDI      ; 0046e77f
    MOV dword ptr [ESP + 0xa4],EDI      ; 0046e786
    MOV EAX,dword ptr [ESP + 0xac]      ; 0046e78d
        ;   Label: LAB_0046e78d
    MOV dword ptr [ESP + 0xb0],EAX      ; 0046e794
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0046e79b
    MOV EDX,EAX                         ; 0046e7a2
    SAR EDX,0x1f                        ; 0046e7a4
    SHL EDX,0x2                         ; 0046e7a7
    SBB EAX,EDX                         ; 0046e7aa
    SAR EAX,0x2                         ; 0046e7ac
    MOV ESI,0x1000000                   ; 0046e7af
    AND EAX,0xffffff                    ; 0046e7b4
    XOR EBX,EBX                         ; 0046e7b9
    MOV dword ptr [ESP + 0xb8],EAX      ; 0046e7bb
    ADD EAX,0x400000                    ; 0046e7c2 | IMAGE_DOS_HEADER_00400000
    XOR EDI,EDI                         ; 0046e7c7
    MOV dword ptr [ESP + 0xb4],EAX      ; 0046e7c9
    MOV ECX,dword ptr [ESP + 0xb0]      ; 0046e7d0
        ;   Label: LAB_0046e7d0
    ADD ECX,EDI                         ; 0046e7d7
    LEA EAX,[ECX + 0x1]                 ; 0046e7d9
    MOV dword ptr [ESP + 0x8c],EAX      ; 0046e7dc
    LEA EAX,[ECX + 0x5]                 ; 0046e7e3
    MOV EDX,EBX                         ; 0046e7e6
    MOV dword ptr [ESP + 0x90],EAX      ; 0046e7e8
    LEA EAX,[ECX + 0x4]                 ; 0046e7ef
    SAR EDX,0x1f                        ; 0046e7f2
    MOV dword ptr [ESP + 0x94],EAX      ; 0046e7f5
    MOV EAX,EBX                         ; 0046e7fc
    SHL EDX,0x2                         ; 0046e7fe
    SBB EAX,EDX                         ; 0046e801
    SAR EAX,0x2                         ; 0046e803
    MOV EBP,EAX                         ; 0046e806
    MOV EDX,ESI                         ; 0046e808
    MOV EAX,ESI                         ; 0046e80a
    SAR EDX,0x1f                        ; 0046e80c
    SHL EDX,0x2                         ; 0046e80f
    SBB EAX,EDX                         ; 0046e812
    SAR EAX,0x2                         ; 0046e814
    MOV dword ptr [ESP + 0x18],ECX      ; 0046e817
    MOV ECX,dword ptr [ESP + 0xb8]      ; 0046e81b
    MOV dword ptr [ESP + 0x1c],ECX      ; 0046e822
    MOV ECX,dword ptr [ESP + 0x8c]      ; 0046e826
    PUSH 0x2c5                          ; 0046e82d
    MOV dword ptr [ESP + 0x28],ECX      ; 0046e832
    MOV ECX,dword ptr [ESP + 0xbc]      ; 0046e836
    INC EDI                             ; 0046e83d
    MOV dword ptr [ESP + 0x2c],ECX      ; 0046e83e
    MOV ECX,dword ptr [ESP + 0x94]      ; 0046e842
    ADD EBX,0x1000000                   ; 0046e849
    MOV dword ptr [ESP + 0x34],ECX      ; 0046e84f
    MOV ECX,dword ptr [ESP + 0xb8]      ; 0046e853
    XOR EAX,0xffffff                    ; 0046e85a
    MOV dword ptr [ESP + 0x38],ECX      ; 0046e85f
    MOV dword ptr [ESP + 0x30],EAX      ; 0046e863
    MOV dword ptr [ESP + 0x3c],EAX      ; 0046e867
    MOV EAX,dword ptr [ESP + 0x98]      ; 0046e86b
    MOV dword ptr [ESP + 0x44],ECX      ; 0046e872
    MOV dword ptr [ESP + 0x40],EAX      ; 0046e876
    LEA EAX,[ESP + 0x4]                 ; 0046e87a
    XOR EBP,0xffffff                    ; 0046e87e
    PUSH EAX                            ; 0046e884
    MOV EAX,[0x0060b280]                ; 0046e885 | DAT_0060b280
    MOV dword ptr [ESP + 0x28],EBP      ; 0046e88a
    PUSH EAX                            ; 0046e88e | DAT_01ba5c50
    MOV dword ptr [ESP + 0x50],EBP      ; 0046e88f
    ADD ESI,0x1000000                   ; 0046e893
    CALL FUN_00469d00                   ; 0046e899
        ;   XREF to: 00469d00 (UNCONDITIONAL_CALL)  ; undefined FUN_00469d00()
    ADD ESP,0xc                         ; 0046e89e
    CMP EDI,0x3                         ; 0046e8a1
    JL 0x0046e7d0                       ; 0046e8a4
        ;   XREF to: 0046e7d0 (CONDITIONAL_JUMP)  ; LAB_0046e7d0
    MOV EDX,dword ptr [ESP + 0xac]      ; 0046e8aa
    MOV AH,byte ptr [ESP + 0xa7]        ; 0046e8b1
    ADD EDX,0x4                         ; 0046e8b8
    INC AH                              ; 0046e8bb
    MOV dword ptr [ESP + 0xac],EDX      ; 0046e8bd
    MOV byte ptr [ESP + 0xa7],AH        ; 0046e8c4
    CMP EDX,0x40                        ; 0046e8cb
    JNZ 0x0046e78d                      ; 0046e8ce
        ;   XREF to: 0046e78d (CONDITIONAL_JUMP)  ; LAB_0046e78d
    ADD ESP,0xbc                        ; 0046e8d4
    POP EBP                             ; 0046e8da
    POP EDI                             ; 0046e8db
    POP ESI                             ; 0046e8dc
    POP EBX                             ; 0046e8dd
    RET                                 ; 0046e8de
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0046e8df
        ;   Label: LAB_0046e8df
    MOV [0x0060d1f4],EAX                ; 0046e8e6 | DAT_0060d1f4
    JMP 0x0046e4f8                      ; 0046e8eb
        ;   XREF to: 0046e4f8 (UNCONDITIONAL_JUMP)  ; LAB_0046e4f8

