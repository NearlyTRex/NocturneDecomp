; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00484390(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
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
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   undefined4 DAT_00581114
;   undefined4 DAT_0059d1f8
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b84cc
;   undefined4 DAT_005b84fc
;   undefined4 DAT_005b8514
;   undefined4 DAT_005be368
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_005c5034
;   undefined4 DAT_005c5038
;   undefined4 DAT_005c503c
;   undefined4 DAT_005c5040
;   undefined4 DAT_005c505c
;   undefined4 DAT_005c5060
;   ... and 22 more
;
; Called Functions:
;   FUN_0041ceb0
;   FUN_00447670
;   FUN_004544d0
;   FUN_00454530
;   FUN_00460080
;   FUN_00460a00
;   FUN_00460a50
;   FUN_00461000
;   FUN_00461090
;   FUN_00461eb0
;   FUN_0050adc0
;   FUN_0053075c
;   thunk_FUN_004cdbc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484390
        ;   Label: FUN_00484390
    PUSH ESI                            ; 00484391
    PUSH EDI                            ; 00484392
    PUSH EBP                            ; 00484393
    MOV EBP,ESP                         ; 00484394
    SUB ESP,0xd4                        ; 00484396
    AND ESP,0xfffffff8                  ; 0048439c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048439f
    MOV EDX,0x3f000000                  ; 004843a2
    MOV ECX,dword ptr [ESI + 0x44]      ; 004843a7
    MOV dword ptr [ESP + 0xc8],EDX      ; 004843aa
    TEST ECX,ECX                        ; 004843b1
    JZ 0x0048449e                       ; 004843b3
        ;   XREF to: 0048449e (CONDITIONAL_JUMP)  ; LAB_0048449e
    CMP dword ptr [ESI + 0x44],0x2      ; 004843b9
        ;   Label: LAB_004843b9
    JNZ 0x004843ca                      ; 004843bd
        ;   XREF to: 004843ca (CONDITIONAL_JUMP)  ; LAB_004843ca
    MOV dword ptr [ESP + 0xc8],0x3f2a7efa ; 004843bf
    PUSH ESI                            ; 004843ca
        ;   Label: LAB_004843ca
    MOV EDX,dword ptr [0x005ae704]      ; 004843cb | DAT_005ae704
    PUSH EDX                            ; 004843d1 | DAT_01b4d738
    CALL FUN_00460a00                   ; 004843d2
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00460a00()
    ADD ESP,0x8                         ; 004843d7
    PUSH 0x0                            ; 004843da
    LEA EAX,[ESI + 0x4c]                ; 004843dc
    PUSH EAX                            ; 004843df
    MOV ECX,dword ptr [0x005ae704]      ; 004843e0 | DAT_005ae704
    PUSH ECX                            ; 004843e6 | DAT_01b4d738
    CALL FUN_00460a50                   ; 004843e7
        ;   XREF to: 00460a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00460a50()
    MOV EBX,dword ptr [ESI + 0x44]      ; 004843ec
    ADD ESP,0xc                         ; 004843ef
    TEST EBX,EBX                        ; 004843f2
    JNZ 0x004844ae                      ; 004843f4
        ;   XREF to: 004844ae (CONDITIONAL_JUMP)  ; LAB_004844ae
    MOV EBX,0x1c08ec4                   ; 004843fa
    PUSH EBX                            ; 004843ff
        ;   Label: LAB_004843ff
    CALL FUN_00454530                   ; 00484400
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined FUN_00454530()
    MOV EDX,dword ptr [EAX + 0x350]     ; 00484405
    ADD ESP,0x4                         ; 0048440b
    MOV EAX,dword ptr [EDX]             ; 0048440e
    MOV dword ptr [ESP + 0x8],EAX       ; 00484410
    LEA EAX,[EDX + 0x4]                 ; 00484414
    MOV EAX,dword ptr [EAX]             ; 00484417
    MOV dword ptr [ESP + 0xc],EAX       ; 00484419
    LEA EAX,[EDX + 0x8]                 ; 0048441d
    MOV EAX,dword ptr [EAX]             ; 00484420
    MOV dword ptr [ESP + 0x10],EAX      ; 00484422
    MOV EAX,dword ptr [EDX + 0xc]       ; 00484426
    ADD EDX,0xc                         ; 00484429
    MOV dword ptr [ESP + 0x14],EAX      ; 0048442c
    LEA EAX,[EDX + 0x4]                 ; 00484430
    MOV EAX,dword ptr [EAX]             ; 00484433
    MOV dword ptr [ESP + 0x18],EAX      ; 00484435
    LEA EAX,[EDX + 0x8]                 ; 00484439
    MOV EAX,dword ptr [EAX]             ; 0048443c
    PUSH 0x0                            ; 0048443e
    MOV dword ptr [ESP + 0x20],EAX      ; 00484440
    LEA EAX,[ESP + 0xc]                 ; 00484444
    PUSH EAX                            ; 00484448
    CALL FUN_0041ceb0                   ; 00484449
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041ceb0()
    ADD ESP,0x8                         ; 0048444e
    MOV EDI,EAX                         ; 00484451
    TEST EAX,EAX                        ; 00484453
    JZ 0x00484484                       ; 00484455
        ;   XREF to: 00484484 (CONDITIONAL_JUMP)  ; LAB_00484484
    PUSH 0x0                            ; 00484457
    LEA EAX,[ESP + 0x18]                ; 00484459
    PUSH EAX                            ; 0048445d
    LEA EAX,[ESP + 0x10]                ; 0048445e
    PUSH EAX                            ; 00484462
    PUSH 0x2dd1184                      ; 00484463 | DAT_02dd1184
    PUSH ESI                            ; 00484468
    MOV EAX,[0x005be368]                ; 00484469 | DAT_005be368
    PUSH EAX                            ; 0048446e | DAT_01e57284
    CALL FUN_0050adc0                   ; 0048446f
        ;   XREF to: 0050adc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050adc0()
    ADD ESP,0x18                        ; 00484474
    PUSH -0x1                           ; 00484477
    PUSH 0x0                            ; 00484479
    PUSH EBX                            ; 0048447b
    CALL FUN_004544d0                   ; 0048447c
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004544d0()
    ADD ESP,0xc                         ; 00484481
    MOV EDX,dword ptr [0x005ae704]      ; 00484484 | DAT_005ae704
        ;   Label: LAB_00484484
    PUSH EDX                            ; 0048448a | DAT_01b4d738
    CALL thunk_FUN_004cdbc0             ; 0048448b
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004cdbc0()
    ADD ESP,0x4                         ; 00484490
    TEST EDI,EDI                        ; 00484493
    JNZ 0x004844c7                      ; 00484495
        ;   XREF to: 004844c7 (CONDITIONAL_JUMP)  ; LAB_004844c7
    MOV ESP,EBP                         ; 00484497
        ;   Label: LAB_00484497
    POP EBP                             ; 00484499
    POP EDI                             ; 0048449a
    POP ESI                             ; 0048449b
    POP EBX                             ; 0048449c
    RET                                 ; 0048449d
    MOV dword ptr [ESP + 0xc8],0x40800000 ; 0048449e
        ;   Label: LAB_0048449e
    JMP 0x004843b9                      ; 004844a9
        ;   XREF to: 004843b9 (UNCONDITIONAL_JUMP)  ; LAB_004843b9
    CMP EBX,0x1                         ; 004844ae
        ;   Label: LAB_004844ae
    JNZ 0x004844bd                      ; 004844b1
        ;   XREF to: 004844bd (CONDITIONAL_JUMP)  ; LAB_004844bd
    MOV EBX,0x1c09040                   ; 004844b3
    JMP 0x004843ff                      ; 004844b8
        ;   XREF to: 004843ff (UNCONDITIONAL_JUMP)  ; LAB_004843ff
    MOV EBX,0x1c091bc                   ; 004844bd
        ;   Label: LAB_004844bd
    JMP 0x004843ff                      ; 004844c2
        ;   XREF to: 004843ff (UNCONDITIONAL_JUMP)  ; LAB_004843ff
    MOV ECX,dword ptr [0x005ae704]      ; 004844c7 | DAT_005ae704
        ;   Label: LAB_004844c7
    PUSH ECX                            ; 004844cd | DAT_01b4d738
    CALL FUN_00461090                   ; 004844ce
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined FUN_00461090()
    ADD ESP,0x4                         ; 004844d3
    TEST EAX,EAX                        ; 004844d6
    JNZ 0x00484497                      ; 004844d8
        ;   XREF to: 00484497 (CONDITIONAL_JUMP)  ; LAB_00484497
    MOV EBX,0x80000                     ; 004844da
    PUSH EAX                            ; 004844df
    MOV EDI,0xf80000                    ; 004844e0
    MOV EDX,dword ptr [0x005ae704]      ; 004844e5 | DAT_005ae704
    PUSH 0x1c08d08                      ; 004844eb | DAT_01c08d08
    MOV dword ptr [0x005c502c],EBX      ; 004844f0 | DAT_005c502c
    MOV dword ptr [0x005c5030],EDI      ; 004844f6 | DAT_005c5030
    MOV dword ptr [0x005c505c],EDI      ; 004844fc | DAT_005c505c
    MOV dword ptr [0x005c5060],EDI      ; 00484502 | DAT_005c5060
    MOV dword ptr [0x005c508c],EDI      ; 00484508 | DAT_005c508c
    MOV dword ptr [0x005c5090],EBX      ; 0048450e | DAT_005c5090
    MOV dword ptr [0x005c50bc],EBX      ; 00484514 | DAT_005c50bc
    PUSH EDX                            ; 0048451a | DAT_01b4d738
    MOV dword ptr [0x005c50c0],EBX      ; 0048451b | DAT_005c50c0
    LEA EBX,[ESP + 0x8c]                ; 00484521
    CALL FUN_00460a50                   ; 00484528
        ;   XREF to: 00460a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00460a50()
    ADD ESP,0xc                         ; 0048452d
    MOV EDX,dword ptr [0x005ae704]      ; 00484530 | DAT_005ae704
    FLD float ptr [ESP + 0xc8]          ; 00484536
    FCHS                                ; 0048453d
    FSTP float ptr [ESP + 0x74]         ; 0048453f
    MOV EAX,dword ptr [ESP + 0x74]      ; 00484543
    XOR ECX,ECX                         ; 00484547
    MOV dword ptr [ESP + 0xc0],EAX      ; 00484549
    MOV dword ptr [ESP + 0x78],EAX      ; 00484550
    LEA EAX,[ESP + 0x74]                ; 00484554
    MOV dword ptr [ESP + 0x7c],ECX      ; 00484558
    FLD float ptr [EAX]                 ; 0048455c
    FMUL float ptr [0x0059d1f8]         ; 0048455e | DAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00484564
    FLD float ptr [EAX + 0x4]           ; 00484566
    FMUL float ptr [0x0059d1f8]         ; 00484569 | DAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 0048456f
    FLD float ptr [EAX + 0x8]           ; 00484572
    FMUL float ptr [0x0059d1f8]         ; 00484575 | DAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 0048457b
    LEA EAX,[ESP + 0x80]                ; 0048457e
    PUSH EAX                            ; 00484585
    MOV EAX,dword ptr [EDX]             ; 00484586 | DAT_01b4d738
    PUSH EAX                            ; 00484588
    CALL FUN_0053075c                   ; 00484589
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    ADD ESP,0x8                         ; 0048458e
    XOR EBX,EBX                         ; 00484591
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00484593
    MOV dword ptr [ESP + 0x7c],EBX      ; 0048459a
    MOV dword ptr [ESP + 0x74],EAX      ; 0048459e
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004845a2
    LEA EBX,[ESP + 0x20]                ; 004845a9
    MOV dword ptr [ESP + 0x78],EAX      ; 004845ad
    LEA EAX,[ESP + 0x74]                ; 004845b1
    MOV EDX,dword ptr [0x005ae704]      ; 004845b5 | DAT_005ae704
    FLD float ptr [EAX]                 ; 004845bb
    FMUL float ptr [0x0059d1f8]         ; 004845bd | DAT_0059d1f8
    FISTP dword ptr [EBX]               ; 004845c3
    FLD float ptr [EAX + 0x4]           ; 004845c5
    FMUL float ptr [0x0059d1f8]         ; 004845c8 | DAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 004845ce
    FLD float ptr [EAX + 0x8]           ; 004845d1
    FMUL float ptr [0x0059d1f8]         ; 004845d4 | DAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 004845da
    LEA EAX,[ESP + 0x20]                ; 004845dd
    PUSH EAX                            ; 004845e1
    MOV EAX,dword ptr [EDX]             ; 004845e2 | DAT_01b4d738
    ADD EAX,0x30                        ; 004845e4
    PUSH EAX                            ; 004845e7
    XOR EDI,EDI                         ; 004845e8
    CALL FUN_0053075c                   ; 004845ea
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    ADD ESP,0x8                         ; 004845ef
    LEA EBX,[ESP + 0x38]                ; 004845f2
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004845f6
    MOV EDX,dword ptr [0x005ae704]      ; 004845fd | DAT_005ae704
    MOV dword ptr [ESP + 0x74],EAX      ; 00484603
    MOV dword ptr [ESP + 0x78],EAX      ; 00484607
    LEA EAX,[ESP + 0x74]                ; 0048460b
    MOV dword ptr [ESP + 0x7c],EDI      ; 0048460f
    FLD float ptr [EAX]                 ; 00484613
    FMUL float ptr [0x0059d1f8]         ; 00484615 | DAT_0059d1f8
    FISTP dword ptr [EBX]               ; 0048461b
    FLD float ptr [EAX + 0x4]           ; 0048461d
    FMUL float ptr [0x0059d1f8]         ; 00484620 | DAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00484626
    FLD float ptr [EAX + 0x8]           ; 00484629
    FMUL float ptr [0x0059d1f8]         ; 0048462c | DAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00484632
    LEA EAX,[ESP + 0x38]                ; 00484635
    PUSH EAX                            ; 00484639
    MOV EAX,dword ptr [EDX]             ; 0048463a | DAT_01b4d738
    ADD EAX,0x60                        ; 0048463c
    PUSH EAX                            ; 0048463f
    CALL FUN_0053075c                   ; 00484640
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    ADD ESP,0x8                         ; 00484645
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00484648
    LEA EBX,[ESP + 0x68]                ; 0048464f
    MOV dword ptr [ESP + 0x74],EAX      ; 00484653
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00484657
    MOV EDX,dword ptr [0x005ae704]      ; 0048465e | DAT_005ae704
    MOV dword ptr [ESP + 0x78],EAX      ; 00484664
    LEA EAX,[ESP + 0x74]                ; 00484668
    MOV dword ptr [ESP + 0x7c],EDI      ; 0048466c
    FLD float ptr [EAX]                 ; 00484670
    FMUL float ptr [0x0059d1f8]         ; 00484672 | DAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00484678
    FLD float ptr [EAX + 0x4]           ; 0048467a
    FMUL float ptr [0x0059d1f8]         ; 0048467d | DAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00484683
    FLD float ptr [EAX + 0x8]           ; 00484686
    FMUL float ptr [0x0059d1f8]         ; 00484689 | DAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 0048468f
    LEA EAX,[ESP + 0x68]                ; 00484692
    PUSH EAX                            ; 00484696
    MOV EAX,dword ptr [EDX]             ; 00484697 | DAT_01b4d738
    ADD EAX,0x90                        ; 00484699
    PUSH EAX                            ; 0048469e
    CALL FUN_0053075c                   ; 0048469f
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    MOV EDX,dword ptr [ESI + 0x44]      ; 004846a4
    ADD ESP,0x8                         ; 004846a7
    CMP EDX,0x1                         ; 004846aa
    JNZ 0x00484b35                      ; 004846ad
        ;   XREF to: 00484b35 (CONDITIONAL_JUMP)  ; LAB_00484b35
    PUSH 0x5b8514                       ; 004846b3 | DAT_005b8514
    MOV EAX,[0x005ae704]                ; 004846b8 | DAT_005ae704
    PUSH EAX                            ; 004846bd | DAT_01b4d738
    CALL FUN_00461eb0                   ; 004846be
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00461eb0()
        ;   Label: LAB_004846be
    ADD ESP,0x8                         ; 004846c3
    MOV EDX,0xffff                      ; 004846c6
    MOV ECX,dword ptr [0x01c038f4]      ; 004846cb | DAT_01c038f4
    MOV EAX,dword ptr [ESI + 0x38]      ; 004846d1
    SUB EDX,ECX                         ; 004846d4
    MOV EBX,0xffff                      ; 004846d6
    IMUL EDX                            ; 004846db
    SHRD EAX,EDX,0x10                   ; 004846dd
    PUSH 0x1                            ; 004846e1
    MOV [0x005c5040],EAX                ; 004846e3 | DAT_005c5040
    MOV [0x005c5070],EAX                ; 004846e8 | DAT_005c5070
    MOV [0x005c50a0],EAX                ; 004846ed | DAT_005c50a0
    MOV [0x005c50d0],EAX                ; 004846f2 | DAT_005c50d0
    MOV dword ptr [0x005c5034],EBX      ; 004846f7 | DAT_005c5034
    MOV dword ptr [0x005c5038],EBX      ; 004846fd | DAT_005c5038
    MOV dword ptr [0x005c503c],EBX      ; 00484703 | DAT_005c503c
    MOV dword ptr [0x005c5064],EBX      ; 00484709 | DAT_005c5064
    MOV dword ptr [0x005c5068],EBX      ; 0048470f | DAT_005c5068
    MOV dword ptr [0x005c506c],EBX      ; 00484715 | DAT_005c506c
    MOV dword ptr [0x005c5094],EBX      ; 0048471b | DAT_005c5094
    MOV dword ptr [0x005c5098],EBX      ; 00484721 | DAT_005c5098
    MOV dword ptr [0x005c509c],EBX      ; 00484727 | DAT_005c509c
    MOV EAX,[0x005ae704]                ; 0048472d | DAT_005ae704
    MOV dword ptr [0x005c50c4],EBX      ; 00484732 | DAT_005c50c4
    PUSH EAX                            ; 00484738 | DAT_01b4d738
    MOV dword ptr [0x005c50c8],EBX      ; 00484739 | DAT_005c50c8
    MOV dword ptr [0x005c50cc],EBX      ; 0048473f | DAT_005c50cc
    CALL FUN_00461000                   ; 00484745
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; undefined FUN_00461000()
    ADD ESP,0x8                         ; 0048474a
    PUSH 0x1c08d20                      ; 0048474d
    MOV EDX,dword ptr [0x005ae704]      ; 00484752 | DAT_005ae704
    PUSH EDX                            ; 00484758 | DAT_01b4d738
    CALL FUN_00460080                   ; 00484759
        ;   XREF to: 00460080 (UNCONDITIONAL_CALL)  ; undefined FUN_00460080()
    ADD ESP,0x8                         ; 0048475e
    PUSH 0x0                            ; 00484761
    MOV ECX,dword ptr [0x005ae704]      ; 00484763 | DAT_005ae704
    PUSH ECX                            ; 00484769 | DAT_01b4d738
    CALL FUN_00461000                   ; 0048476a
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; undefined FUN_00461000()
    ADD ESP,0x8                         ; 0048476f
    MOV EBX,dword ptr [0x005ae704]      ; 00484772 | DAT_005ae704
    PUSH EBX                            ; 00484778 | DAT_01b4d738
    CALL thunk_FUN_004cdbc0             ; 00484779
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004cdbc0()
    MOV EDI,dword ptr [ESI + 0x44]      ; 0048477e
    ADD ESP,0x4                         ; 00484781
    CMP EDI,0x1                         ; 00484784
    JZ 0x00484497                       ; 00484787
        ;   XREF to: 00484497 (CONDITIONAL_JUMP)  ; LAB_00484497
    CMP EDI,0x2                         ; 0048478d
    JZ 0x00484497                       ; 00484790
        ;   XREF to: 00484497 (CONDITIONAL_JUMP)  ; LAB_00484497
    MOV EAX,dword ptr [ESI]             ; 00484796
    MOV dword ptr [ESP + 0x98],EAX      ; 00484798
    LEA EAX,[ESI + 0x4]                 ; 0048479f
    MOV EAX,dword ptr [EAX]             ; 004847a2
    MOV dword ptr [ESP + 0x9c],EAX      ; 004847a4
    LEA EAX,[ESI + 0x8]                 ; 004847ab
    MOV EAX,dword ptr [EAX]             ; 004847ae
    LEA EDX,[ESI + 0xc]                 ; 004847b0
    MOV dword ptr [ESP + 0xa0],EAX      ; 004847b3
    MOV EAX,dword ptr [EDX]             ; 004847ba
    MOV dword ptr [ESP + 0x44],EAX      ; 004847bc
    LEA EAX,[EDX + 0x4]                 ; 004847c0
    MOV EAX,dword ptr [EAX]             ; 004847c3
    MOV ECX,0x3dcccccd                  ; 004847c5
    MOV dword ptr [ESP + 0x48],EAX      ; 004847ca
    LEA EAX,[EDX + 0x8]                 ; 004847ce
    XOR EDI,EDI                         ; 004847d1
    MOV dword ptr [ESP + 0x4],ECX       ; 004847d3
    MOV EAX,dword ptr [EAX]             ; 004847d7
    MOV EDX,0x3f800000                  ; 004847d9
    MOV dword ptr [ESP + 0x4c],EAX      ; 004847de
    MOV dword ptr [ESP],EDX             ; 004847e2
    FLD float ptr [ESP + 0x4]           ; 004847e5
        ;   Label: LAB_004847e5
    FLD ST0                             ; 004847e9
    FLD double ptr [0x00581114]         ; 004847eb | DAT_00581114
    FXCH                                ; 004847f1
    FMUL ST1                            ; 004847f3
    FLD float ptr [ESP]                 ; 004847f5
    FMUL ST2                            ; 004847f8
    FLD float ptr [ESP + 0x44]          ; 004847fa
    FXCH ST2                            ; 004847fe
    FSTP ST4                            ; 00484800
    FXCH ST3                            ; 00484802
    FSTP float ptr [ESP + 0x4]          ; 00484804
    FMUL float ptr [ESP + 0x4]          ; 00484808
    FLD float ptr [ESP + 0x4]           ; 0048480c
    FMUL float ptr [ESI + 0x1c]         ; 00484810
    FLD float ptr [ESP + 0x4c]          ; 00484813
    FXCH                                ; 00484817
    FSUBR float ptr [ESP + 0x48]        ; 00484819
    FXCH                                ; 0048481d
    FMUL float ptr [ESP + 0x4]          ; 0048481f
    FXCH                                ; 00484823
    FST float ptr [ESP + 0x48]          ; 00484825
    FMUL float ptr [ESP + 0x4]          ; 00484829
    FLD float ptr [ESP + 0x98]          ; 0048482d
    FLD float ptr [ESP + 0x9c]          ; 00484834
    LEA EAX,[ESP + 0x98]                ; 0048483b
    MOV EBX,dword ptr [0x005ae704]      ; 00484842 | DAT_005ae704
    PUSH EAX                            ; 00484848
    FXCH ST5                            ; 00484849
    FSTP ST6                            ; 0048484b
    FXCH ST5                            ; 0048484d
    FSTP float ptr [ESP + 0x4]          ; 0048484f
    FLD float ptr [ESP + 0xa4]          ; 00484853
    PUSH EBX                            ; 0048485a | DAT_01b4d738
    FXCH ST3                            ; 0048485b
    FSTP float ptr [ESP + 0x94]         ; 0048485d
    FXCH                                ; 00484864
    FSTP float ptr [ESP + 0x9c]         ; 00484866
    FXCH ST3                            ; 0048486d
    FSUB float ptr [ESP + 0x94]         ; 0048486f
    FXCH                                ; 00484876
    FSUB float ptr [ESP + 0x9c]         ; 00484878
    FXCH                                ; 0048487f
    FSTP float ptr [ESP + 0xa0]         ; 00484881
    FXCH ST2                            ; 00484888
    FSTP float ptr [ESP + 0x98]         ; 0048488a
    FSUB float ptr [ESP + 0x98]         ; 00484891
    FXCH                                ; 00484898
    FSTP float ptr [ESP + 0xa8]         ; 0048489a
    FSTP float ptr [ESP + 0xa4]         ; 004848a1
    CALL FUN_00460a00                   ; 004848a8
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00460a00()
    ADD ESP,0x8                         ; 004848ad
    PUSH 0x0                            ; 004848b0
    PUSH 0x1c08d08                      ; 004848b2 | DAT_01c08d08
    MOV EAX,[0x005ae704]                ; 004848b7 | DAT_005ae704
    PUSH EAX                            ; 004848bc | DAT_01b4d738
    CALL FUN_00460a50                   ; 004848bd
        ;   XREF to: 00460a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00460a50()
    ADD ESP,0xc                         ; 004848c2
    FLD float ptr [ESP + 0xc8]          ; 004848c5
    FCHS                                ; 004848cc
    FMUL float ptr [ESP]                ; 004848ce
    LEA EBX,[ESP + 0x50]                ; 004848d1
    XOR EDX,EDX                         ; 004848d5
    FSTP float ptr [ESP + 0x74]         ; 004848d7
    MOV EAX,dword ptr [ESP + 0x74]      ; 004848db
    MOV dword ptr [ESP + 0x7c],EDX      ; 004848df
    MOV dword ptr [ESP + 0xcc],EAX      ; 004848e3
    MOV dword ptr [ESP + 0x78],EAX      ; 004848ea
    LEA EAX,[ESP + 0x74]                ; 004848ee
    MOV EDX,dword ptr [0x005ae704]      ; 004848f2 | DAT_005ae704
    FLD float ptr [EAX]                 ; 004848f8
    FMUL float ptr [0x0059d1f8]         ; 004848fa | DAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00484900
    FLD float ptr [EAX + 0x4]           ; 00484902
    FMUL float ptr [0x0059d1f8]         ; 00484905 | DAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 0048490b
    FLD float ptr [EAX + 0x8]           ; 0048490e
    FMUL float ptr [0x0059d1f8]         ; 00484911 | DAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00484917
    LEA EAX,[ESP + 0x50]                ; 0048491a
    PUSH EAX                            ; 0048491e
    MOV EAX,dword ptr [EDX]             ; 0048491f | DAT_01b4d738
    PUSH EAX                            ; 00484921
    CALL FUN_0053075c                   ; 00484922
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    ADD ESP,0x8                         ; 00484927
    FLD float ptr [ESP + 0xc8]          ; 0048492a
    FMUL float ptr [ESP]                ; 00484931
    MOV EDX,dword ptr [0x005ae704]      ; 00484934 | DAT_005ae704
    FSTP float ptr [ESP + 0xd0]         ; 0048493a
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00484941
    XOR ECX,ECX                         ; 00484948
    MOV dword ptr [ESP + 0x74],EAX      ; 0048494a
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0048494e
    MOV dword ptr [ESP + 0x7c],ECX      ; 00484955
    MOV dword ptr [ESP + 0x78],EAX      ; 00484959
    LEA EBX,[ESP + 0x2c]                ; 0048495d
    LEA EAX,[ESP + 0x74]                ; 00484961
    FLD float ptr [EAX]                 ; 00484965
    FMUL float ptr [0x0059d1f8]         ; 00484967 | DAT_0059d1f8
    FISTP dword ptr [EBX]               ; 0048496d
    FLD float ptr [EAX + 0x4]           ; 0048496f
    FMUL float ptr [0x0059d1f8]         ; 00484972 | DAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00484978
    FLD float ptr [EAX + 0x8]           ; 0048497b
    FMUL float ptr [0x0059d1f8]         ; 0048497e | DAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00484984
    LEA EAX,[ESP + 0x2c]                ; 00484987
    PUSH EAX                            ; 0048498b
    MOV EAX,dword ptr [EDX]             ; 0048498c | DAT_01b4d738
    ADD EAX,0x30                        ; 0048498e
    PUSH EAX                            ; 00484991
    CALL FUN_0053075c                   ; 00484992
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    ADD ESP,0x8                         ; 00484997
    XOR EBX,EBX                         ; 0048499a
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0048499c
    MOV dword ptr [ESP + 0x7c],EBX      ; 004849a3
    LEA EBX,[ESP + 0xa4]                ; 004849a7
    MOV dword ptr [ESP + 0x74],EAX      ; 004849ae
    MOV dword ptr [ESP + 0x78],EAX      ; 004849b2
    LEA EAX,[ESP + 0x74]                ; 004849b6
    MOV EDX,dword ptr [0x005ae704]      ; 004849ba | DAT_005ae704
    FLD float ptr [EAX]                 ; 004849c0
    FMUL float ptr [0x0059d1f8]         ; 004849c2 | DAT_0059d1f8
    FISTP dword ptr [EBX]               ; 004849c8
    FLD float ptr [EAX + 0x4]           ; 004849ca
    FMUL float ptr [0x0059d1f8]         ; 004849cd | DAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 004849d3
    FLD float ptr [EAX + 0x8]           ; 004849d6
    FMUL float ptr [0x0059d1f8]         ; 004849d9 | DAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 004849df
    LEA EAX,[ESP + 0xa4]                ; 004849e2
    PUSH EAX                            ; 004849e9
    MOV EAX,dword ptr [EDX]             ; 004849ea | DAT_01b4d738
    ADD EAX,0x60                        ; 004849ec
    PUSH EAX                            ; 004849ef
    CALL FUN_0053075c                   ; 004849f0
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    ADD ESP,0x8                         ; 004849f5
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004849f8
    MOV dword ptr [ESP + 0x74],EAX      ; 004849ff
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00484a03
    MOV dword ptr [ESP + 0x78],EAX      ; 00484a0a
    XOR EAX,EAX                         ; 00484a0e
    LEA EBX,[ESP + 0x5c]                ; 00484a10
    MOV dword ptr [ESP + 0x7c],EAX      ; 00484a14
    LEA EAX,[ESP + 0x74]                ; 00484a18
    MOV EDX,dword ptr [0x005ae704]      ; 00484a1c | DAT_005ae704
    FLD float ptr [EAX]                 ; 00484a22
    FMUL float ptr [0x0059d1f8]         ; 00484a24 | DAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00484a2a
    FLD float ptr [EAX + 0x4]           ; 00484a2c
    FMUL float ptr [0x0059d1f8]         ; 00484a2f | DAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00484a35
    FLD float ptr [EAX + 0x8]           ; 00484a38
    FMUL float ptr [0x0059d1f8]         ; 00484a3b | DAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00484a41
    LEA EAX,[ESP + 0x5c]                ; 00484a44
    PUSH EAX                            ; 00484a48
    MOV EAX,dword ptr [EDX]             ; 00484a49 | DAT_01b4d738
    ADD EAX,0x90                        ; 00484a4b
    PUSH EAX                            ; 00484a50
    CALL FUN_0053075c                   ; 00484a51
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    ADD ESP,0x8                         ; 00484a56
    PUSH 0x0                            ; 00484a59
    PUSH ESI                            ; 00484a5b
    MOV EDX,dword ptr [0x007f7370]      ; 00484a5c | DAT_007f7370
    PUSH EDX                            ; 00484a62
    CALL FUN_00447670                   ; 00484a63
        ;   XREF to: 00447670 (UNCONDITIONAL_CALL)  ; undefined FUN_00447670()
    MOV EDX,0xffff                      ; 00484a68
    MOV ECX,dword ptr [0x01c038f4]      ; 00484a6d | DAT_01c038f4
    ADD ESP,0xc                         ; 00484a73
    MOV EAX,dword ptr [ESI + 0x38]      ; 00484a76
    SUB EDX,ECX                         ; 00484a79
    MOV EBX,0xffff                      ; 00484a7b
    IMUL EDX                            ; 00484a80
    SHRD EAX,EDX,0x10                   ; 00484a82
    PUSH 0x1                            ; 00484a86
    MOV [0x005c5040],EAX                ; 00484a88 | DAT_005c5040
    MOV dword ptr [0x005c5034],EBX      ; 00484a8d | DAT_005c5034
    MOV dword ptr [0x005c5038],EBX      ; 00484a93 | DAT_005c5038
    MOV dword ptr [0x005c503c],EBX      ; 00484a99 | DAT_005c503c
    MOV dword ptr [0x005c5064],EBX      ; 00484a9f | DAT_005c5064
    MOV dword ptr [0x005c5068],EBX      ; 00484aa5 | DAT_005c5068
    MOV dword ptr [0x005c506c],EBX      ; 00484aab | DAT_005c506c
    MOV dword ptr [0x005c5094],EBX      ; 00484ab1 | DAT_005c5094
    MOV dword ptr [0x005c5098],EBX      ; 00484ab7 | DAT_005c5098
    MOV dword ptr [0x005c509c],EBX      ; 00484abd | DAT_005c509c
    MOV dword ptr [0x005c50c4],EBX      ; 00484ac3 | DAT_005c50c4
    MOV dword ptr [0x005c50c8],EBX      ; 00484ac9 | DAT_005c50c8
    MOV dword ptr [0x005c50cc],EBX      ; 00484acf | DAT_005c50cc
    MOV EBX,dword ptr [0x005ae704]      ; 00484ad5 | DAT_005ae704
    MOV [0x005c5070],EAX                ; 00484adb | DAT_005c5070
    PUSH EBX                            ; 00484ae0 | DAT_01b4d738
    MOV [0x005c50a0],EAX                ; 00484ae1 | DAT_005c50a0
    MOV [0x005c50d0],EAX                ; 00484ae6 | DAT_005c50d0
    CALL FUN_00461000                   ; 00484aeb
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; undefined FUN_00461000()
    ADD ESP,0x8                         ; 00484af0
    PUSH 0x1c08d20                      ; 00484af3
    MOV EAX,[0x005ae704]                ; 00484af8 | DAT_005ae704
    PUSH EAX                            ; 00484afd | DAT_01b4d738
    CALL FUN_00460080                   ; 00484afe
        ;   XREF to: 00460080 (UNCONDITIONAL_CALL)  ; undefined FUN_00460080()
    ADD ESP,0x8                         ; 00484b03
    PUSH 0x0                            ; 00484b06
    MOV EDX,dword ptr [0x005ae704]      ; 00484b08 | DAT_005ae704
    PUSH EDX                            ; 00484b0e | DAT_01b4d738
    CALL FUN_00461000                   ; 00484b0f
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; undefined FUN_00461000()
    ADD ESP,0x8                         ; 00484b14
    MOV ECX,dword ptr [0x005ae704]      ; 00484b17 | DAT_005ae704
    PUSH ECX                            ; 00484b1d | DAT_01b4d738
    INC EDI                             ; 00484b1e
    CALL thunk_FUN_004cdbc0             ; 00484b1f
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004cdbc0()
    ADD ESP,0x4                         ; 00484b24
    CMP EDI,0x3                         ; 00484b27
    JGE 0x00484497                      ; 00484b2a
        ;   XREF to: 00484497 (CONDITIONAL_JUMP)  ; LAB_00484497
    JMP 0x004847e5                      ; 00484b30
        ;   XREF to: 004847e5 (UNCONDITIONAL_JUMP)  ; LAB_004847e5
    CMP EDX,0x2                         ; 00484b35
        ;   Label: LAB_00484b35
    JNZ 0x00484b4b                      ; 00484b38
        ;   XREF to: 00484b4b (CONDITIONAL_JUMP)  ; LAB_00484b4b
    PUSH 0x5b84fc                       ; 00484b3a | DAT_005b84fc
    MOV EDI,dword ptr [0x005ae704]      ; 00484b3f | DAT_005ae704
    PUSH EDI                            ; 00484b45 | DAT_01b4d738
    JMP 0x004846be                      ; 00484b46
        ;   XREF to: 004846be (UNCONDITIONAL_JUMP)  ; LAB_004846be
    PUSH 0x5b84cc                       ; 00484b4b | DAT_005b84cc
        ;   Label: LAB_00484b4b
    MOV EBX,dword ptr [0x005ae704]      ; 00484b50 | DAT_005ae704
    PUSH EBX                            ; 00484b56 | DAT_01b4d738
    JMP 0x004846be                      ; 00484b57
        ;   XREF to: 004846be (UNCONDITIONAL_JUMP)  ; LAB_004846be

