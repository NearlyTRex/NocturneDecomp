; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_drawLineAA_FUN_0042f600(int x0,int y0,int x1,int y1,int color)
;
; Parameters:
; int              Stack[0x4]:4   x0
; int              Stack[0x8]:4   y0
; int              Stack[0xc]:4   x1
; int              Stack[0x10]:4   y1
; int              Stack[0x14]:4   color
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_0045ca50 at 0045cad4
;
; Referenced Globals:
;   undefined4 DAT_005ad280
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;
; Called Functions:
;   cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042fd60
;   cockpit_ckptutil.c_putPixel_FUN_00430140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f600
        ;   Label: cockpit_ckptutil.c_drawLineAA_FUN_0042f600
    PUSH ESI                            ; 0042f601
    PUSH EDI                            ; 0042f602
    PUSH EBP                            ; 0042f603
    MOV EBP,ESP                         ; 0042f604
    SUB ESP,0x30                        ; 0042f606
    AND ESP,0xfffffff8                  ; 0042f609
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042f60c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0042f60f
    MOV EDX,0x3b800000                  ; 0042f612
    MOV ECX,dword ptr [EBP + 0x20]      ; 0042f617
    MOV dword ptr [ESP],EDX             ; 0042f61a
    CMP EBX,ECX                         ; 0042f61d
    JG 0x0042f6c7                       ; 0042f61f
        ;   XREF to: 0042f6c7 (CONDITIONAL_JUMP)  ; LAB_0042f6c7
    CMP dword ptr [0x005ad280],0x0      ; 0042f625 | DAT_005ad280
        ;   Label: LAB_0042f625
    JNZ 0x0042f67a                      ; 0042f62c
        ;   XREF to: 0042f67a (CONDITIONAL_JUMP)  ; LAB_0042f67a
    CMP ESI,dword ptr [0x01c00c58]      ; 0042f62e | g_ClipLeft
    JGE 0x0042f645                      ; 0042f634
        ;   XREF to: 0042f645 (CONDITIONAL_JUMP)  ; LAB_0042f645
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0042f636
    CMP EAX,dword ptr [0x01c00c58]      ; 0042f639 | g_ClipLeft
    JL 0x0042f6c0                       ; 0042f63f
        ;   XREF to: 0042f6c0 (CONDITIONAL_JUMP)  ; LAB_0042f6c0
    MOV ECX,dword ptr [0x01c00c60]      ; 0042f645 | g_ClipRight
        ;   Label: LAB_0042f645
    CMP ESI,ECX                         ; 0042f64b
    JLE 0x0042f658                      ; 0042f64d
        ;   XREF to: 0042f658 (CONDITIONAL_JUMP)  ; LAB_0042f658
    CMP ECX,dword ptr [EBP + 0x1c]      ; 0042f64f
    JL 0x0042f6c0                       ; 0042f652
        ;   XREF to: 0042f6c0 (CONDITIONAL_JUMP)  ; LAB_0042f6c0
    CMP EBX,dword ptr [0x01c00c5c]      ; 0042f658 | g_ClipTop
        ;   Label: LAB_0042f658
    JGE 0x0042f66b                      ; 0042f65e
        ;   XREF to: 0042f66b (CONDITIONAL_JUMP)  ; LAB_0042f66b
    MOV EAX,dword ptr [EBP + 0x20]      ; 0042f660
    CMP EAX,dword ptr [0x01c00c5c]      ; 0042f663 | g_ClipTop
    JL 0x0042f6c0                       ; 0042f669
        ;   XREF to: 0042f6c0 (CONDITIONAL_JUMP)  ; LAB_0042f6c0
    MOV ECX,dword ptr [0x01c00c64]      ; 0042f66b | g_ClipBottom
        ;   Label: LAB_0042f66b
    CMP EBX,ECX                         ; 0042f671
    JLE 0x0042f67a                      ; 0042f673
        ;   XREF to: 0042f67a (CONDITIONAL_JUMP)  ; LAB_0042f67a
    CMP ECX,dword ptr [EBP + 0x20]      ; 0042f675
    JL 0x0042f6c0                       ; 0042f678
        ;   XREF to: 0042f6c0 (CONDITIONAL_JUMP)  ; LAB_0042f6c0
    MOV EAX,dword ptr [EBP + 0x24]      ; 0042f67a
        ;   Label: LAB_0042f67a
    PUSH EAX                            ; 0042f67d
    PUSH EBX                            ; 0042f67e
    PUSH ESI                            ; 0042f67f
    CALL cockpit_ckptutil.c_putPixel_FUN_00430140 ; 0042f680
        ;   XREF to: 00430140 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_00430140(int x, int y, int color)
    ADD ESP,0xc                         ; 0042f685
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0042f688
    SUB EAX,ESI                         ; 0042f68b
    MOV dword ptr [ESP + 0x28],EAX      ; 0042f68d
    TEST EAX,EAX                        ; 0042f691
    JL 0x0042f6db                       ; 0042f693
        ;   XREF to: 0042f6db (CONDITIONAL_JUMP)  ; LAB_0042f6db
    MOV dword ptr [ESP + 0x24],0x1      ; 0042f695
    MOV EAX,dword ptr [EBP + 0x20]      ; 0042f69d
        ;   Label: LAB_0042f69d
    SUB EAX,EBX                         ; 0042f6a0
    MOV dword ptr [ESP + 0x2c],EAX      ; 0042f6a2
    JNZ 0x0042f704                      ; 0042f6a6
        ;   XREF to: 0042f704 (CONDITIONAL_JUMP)  ; LAB_0042f704
    MOV EDI,0xffffffff                  ; 0042f6a8
    MOV ECX,dword ptr [ESP + 0x28]      ; 0042f6ad
        ;   Label: LAB_0042f6ad
    ADD ECX,EDI                         ; 0042f6b1
    MOV dword ptr [ESP + 0x28],ECX      ; 0042f6b3
    CMP EDI,ECX                         ; 0042f6b7
    JNZ 0x0042f6ee                      ; 0042f6b9
        ;   XREF to: 0042f6ee (CONDITIONAL_JUMP)  ; LAB_0042f6ee
    LEA EAX,[EAX]                       ; 0042f6bb
    MOV ECX,ECX                         ; 0042f6be
    MOV ESP,EBP                         ; 0042f6c0
        ;   Label: LAB_0042f6c0
    POP EBP                             ; 0042f6c2
    POP EDI                             ; 0042f6c3
    POP ESI                             ; 0042f6c4
    POP EBX                             ; 0042f6c5
    RET                                 ; 0042f6c6
    MOV EAX,EBX                         ; 0042f6c7
        ;   Label: LAB_0042f6c7
    MOV EBX,ECX                         ; 0042f6c9
    MOV dword ptr [EBP + 0x20],EAX      ; 0042f6cb
    MOV EAX,ESI                         ; 0042f6ce
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0042f6d0
    MOV dword ptr [EBP + 0x1c],EAX      ; 0042f6d3
    JMP 0x0042f625                      ; 0042f6d6
        ;   XREF to: 0042f625 (UNCONDITIONAL_JUMP)  ; LAB_0042f625
    MOV EDI,EAX                         ; 0042f6db
        ;   Label: LAB_0042f6db
    MOV ECX,0xffffffff                  ; 0042f6dd
    NEG EDI                             ; 0042f6e2
    MOV dword ptr [ESP + 0x24],ECX      ; 0042f6e4
    MOV dword ptr [ESP + 0x28],EDI      ; 0042f6e8
    JMP 0x0042f69d                      ; 0042f6ec
        ;   XREF to: 0042f69d (UNCONDITIONAL_JUMP)  ; LAB_0042f69d
    MOV ECX,dword ptr [EBP + 0x24]      ; 0042f6ee
        ;   Label: LAB_0042f6ee
    PUSH ECX                            ; 0042f6f1
    MOV EDX,dword ptr [ESP + 0x28]      ; 0042f6f2
    PUSH EBX                            ; 0042f6f6
    ADD ESI,EDX                         ; 0042f6f7
    PUSH ESI                            ; 0042f6f9
    CALL cockpit_ckptutil.c_putPixel_FUN_00430140 ; 0042f6fa
        ;   XREF to: 00430140 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_00430140(int x, int y, int color)
    ADD ESP,0xc                         ; 0042f6ff
    JMP 0x0042f6ad                      ; 0042f702
        ;   XREF to: 0042f6ad (UNCONDITIONAL_JUMP)  ; LAB_0042f6ad
    MOV ECX,dword ptr [ESP + 0x28]      ; 0042f704
        ;   Label: LAB_0042f704
    TEST ECX,ECX                        ; 0042f708
    JNZ 0x0042f72d                      ; 0042f70a
        ;   XREF to: 0042f72d (CONDITIONAL_JUMP)  ; LAB_0042f72d
    MOV EDI,dword ptr [EBP + 0x24]      ; 0042f70c
    PUSH EDI                            ; 0042f70f
        ;   Label: LAB_0042f70f
    INC EBX                             ; 0042f710
    PUSH EBX                            ; 0042f711
    PUSH ESI                            ; 0042f712
    CALL cockpit_ckptutil.c_putPixel_FUN_00430140 ; 0042f713
        ;   XREF to: 00430140 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_00430140(int x, int y, int color)
    ADD ESP,0xc                         ; 0042f718
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042f71b
    DEC EAX                             ; 0042f71f
    MOV dword ptr [ESP + 0x2c],EAX      ; 0042f720
    JNZ 0x0042f70f                      ; 0042f724
        ;   XREF to: 0042f70f (CONDITIONAL_JUMP)  ; LAB_0042f70f
    MOV ESP,EBP                         ; 0042f726
    POP EBP                             ; 0042f728
    POP EDI                             ; 0042f729
    POP ESI                             ; 0042f72a
    POP EBX                             ; 0042f72b
    RET                                 ; 0042f72c
    CMP ECX,EAX                         ; 0042f72d
        ;   Label: LAB_0042f72d
    JNZ 0x0042f758                      ; 0042f72f
        ;   XREF to: 0042f758 (CONDITIONAL_JUMP)  ; LAB_0042f758
    MOV EDI,dword ptr [ESP + 0x24]      ; 0042f731
    MOV EAX,dword ptr [EBP + 0x24]      ; 0042f735
        ;   Label: LAB_0042f735
    PUSH EAX                            ; 0042f738
    INC EBX                             ; 0042f739
    PUSH EBX                            ; 0042f73a
    ADD ESI,EDI                         ; 0042f73b
    PUSH ESI                            ; 0042f73d
    CALL cockpit_ckptutil.c_putPixel_FUN_00430140 ; 0042f73e
        ;   XREF to: 00430140 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_00430140(int x, int y, int color)
    ADD ESP,0xc                         ; 0042f743
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0042f746
    DEC EDX                             ; 0042f74a
    MOV dword ptr [ESP + 0x2c],EDX      ; 0042f74b
    JNZ 0x0042f735                      ; 0042f74f
        ;   XREF to: 0042f735 (CONDITIONAL_JUMP)  ; LAB_0042f735
    MOV ESP,EBP                         ; 0042f751
    POP EBP                             ; 0042f753
    POP EDI                             ; 0042f754
    POP ESI                             ; 0042f755
    POP EBX                             ; 0042f756
    RET                                 ; 0042f757
    XOR EDI,EDI                         ; 0042f758
        ;   Label: LAB_0042f758
    CMP ECX,EAX                         ; 0042f75a
    JLE 0x0042f7f9                      ; 0042f75c
        ;   XREF to: 0042f7f9 (CONDITIONAL_JUMP)  ; LAB_0042f7f9
    SHL EAX,0x10                        ; 0042f762
    XOR EDX,EDX                         ; 0042f765
    DIV ECX                             ; 0042f767
    MOV dword ptr [ESP + 0x20],EAX      ; 0042f769
    MOV ECX,dword ptr [ESP + 0x28]      ; 0042f76d
        ;   Label: LAB_0042f76d
    DEC ECX                             ; 0042f771
    MOV dword ptr [ESP + 0x28],ECX      ; 0042f772
    JZ 0x0042f897                       ; 0042f776
        ;   XREF to: 0042f897 (CONDITIONAL_JUMP)  ; LAB_0042f897
    MOV EDX,dword ptr [ESP + 0x20]      ; 0042f77c
    MOV EAX,EDI                         ; 0042f780
    ADD EDI,EDX                         ; 0042f782
    AND EDI,0xffff                      ; 0042f784
    CMP EDI,EAX                         ; 0042f78a
    JBE 0x0042f7f6                      ; 0042f78c
        ;   XREF to: 0042f7f6 (CONDITIONAL_JUMP)  ; LAB_0042f7f6
    MOV EAX,EDI                         ; 0042f78e
        ;   Label: LAB_0042f78e
    XOR EDX,EDX                         ; 0042f790
    SHR EAX,0x8                         ; 0042f792
    MOV dword ptr [ESP + 0x8],EDX       ; 0042f795
    MOV dword ptr [ESP + 0x4],EAX       ; 0042f799
    FILD qword ptr [ESP + 0x4]          ; 0042f79d
    FLD1                                ; 0042f7a1
    FADDP                               ; 0042f7a3
    FLD float ptr [ESP]                 ; 0042f7a5
    FMUL ST1                            ; 0042f7a8
    MOV ECX,dword ptr [ESP + 0x24]      ; 0042f7aa
    XOR AL,0xff                         ; 0042f7ae
    MOV dword ptr [ESP + 0x8],EDX       ; 0042f7b0
    MOV dword ptr [ESP + 0x4],EAX       ; 0042f7b4
    MOV EAX,dword ptr [EBP + 0x24]      ; 0042f7b8
    ADD ESI,ECX                         ; 0042f7bb
    PUSH EAX                            ; 0042f7bd
    FXCH                                ; 0042f7be
    FSTP float ptr [ESP + 0x10]         ; 0042f7c0
    PUSH dword ptr [ESP + 0x10]         ; 0042f7c4
    FILD qword ptr [ESP + 0xc]          ; 0042f7c8
    PUSH EBX                            ; 0042f7cc
    FMULP                               ; 0042f7cd
    PUSH ESI                            ; 0042f7cf
    FSTP float ptr [ESP + 0x20]         ; 0042f7d0
    CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042fd60 ; 0042f7d4
        ;   XREF to: 0042fd60 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042fd60(int x, int y, float blend_factor, int palette_index)
    ADD ESP,0x10                        ; 0042f7d9
    MOV EDX,dword ptr [EBP + 0x24]      ; 0042f7dc
    PUSH EDX                            ; 0042f7df
    LEA EAX,[EBX + 0x1]                 ; 0042f7e0
    PUSH dword ptr [ESP + 0x14]         ; 0042f7e3
    PUSH EAX                            ; 0042f7e7
    PUSH ESI                            ; 0042f7e8
    CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042fd60 ; 0042f7e9
        ;   XREF to: 0042fd60 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042fd60(int x, int y, float blend_factor, int palette_index)
    ADD ESP,0x10                        ; 0042f7ee
    JMP 0x0042f76d                      ; 0042f7f1
        ;   XREF to: 0042f76d (UNCONDITIONAL_JUMP)  ; LAB_0042f76d
    INC EBX                             ; 0042f7f6
        ;   Label: LAB_0042f7f6
    JMP 0x0042f78e                      ; 0042f7f7
        ;   XREF to: 0042f78e (UNCONDITIONAL_JUMP)  ; LAB_0042f78e
    MOV EAX,ECX                         ; 0042f7f9
        ;   Label: LAB_0042f7f9
    XOR EDX,EDX                         ; 0042f7fb
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0042f7fd
    SHL EAX,0x10                        ; 0042f801
    DIV ECX                             ; 0042f804
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042f806
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042f80a
        ;   Label: LAB_0042f80a
    DEC EAX                             ; 0042f80e
    MOV dword ptr [ESP + 0x2c],EAX      ; 0042f80f
    JZ 0x0042f897                       ; 0042f813
        ;   XREF to: 0042f897 (CONDITIONAL_JUMP)  ; LAB_0042f897
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0042f819
    MOV EAX,EDI                         ; 0042f81d
    ADD EDI,ECX                         ; 0042f81f
    AND EDI,0xffff                      ; 0042f821
    CMP EDI,EAX                         ; 0042f827
    JBE 0x0042f891                      ; 0042f829
        ;   XREF to: 0042f891 (CONDITIONAL_JUMP)  ; LAB_0042f891
    MOV EAX,EDI                         ; 0042f82b
        ;   Label: LAB_0042f82b
    XOR EDX,EDX                         ; 0042f82d
    SHR EAX,0x8                         ; 0042f82f
    MOV dword ptr [ESP + 0x8],EDX       ; 0042f832
    MOV dword ptr [ESP + 0x4],EAX       ; 0042f836
    FILD qword ptr [ESP + 0x4]          ; 0042f83a
    FLD1                                ; 0042f83e
    FADDP                               ; 0042f840
    FLD float ptr [ESP]                 ; 0042f842
    FMUL ST1                            ; 0042f845
    XOR AL,0xff                         ; 0042f847
    INC EBX                             ; 0042f849
    MOV dword ptr [ESP + 0x4],EAX       ; 0042f84a
    MOV EAX,dword ptr [EBP + 0x24]      ; 0042f84e
    MOV dword ptr [ESP + 0x8],EDX       ; 0042f851
    PUSH EAX                            ; 0042f855
    FXCH                                ; 0042f856
    FSTP float ptr [ESP + 0x18]         ; 0042f858
    PUSH dword ptr [ESP + 0x18]         ; 0042f85c
    FILD qword ptr [ESP + 0xc]          ; 0042f860
    PUSH EBX                            ; 0042f864
    FMULP                               ; 0042f865
    PUSH ESI                            ; 0042f867
    FSTP float ptr [ESP + 0x28]         ; 0042f868
    CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042fd60 ; 0042f86c
        ;   XREF to: 0042fd60 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042fd60(int x, int y, float blend_factor, int palette_index)
    ADD ESP,0x10                        ; 0042f871
    MOV EDX,dword ptr [EBP + 0x24]      ; 0042f874
    PUSH EDX                            ; 0042f877
    PUSH dword ptr [ESP + 0x1c]         ; 0042f878
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042f87c
    PUSH EBX                            ; 0042f880
    ADD EAX,ESI                         ; 0042f881
    PUSH EAX                            ; 0042f883
    CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042fd60 ; 0042f884
        ;   XREF to: 0042fd60 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042fd60(int x, int y, float blend_factor, int palette_index)
    ADD ESP,0x10                        ; 0042f889
    JMP 0x0042f80a                      ; 0042f88c
        ;   XREF to: 0042f80a (UNCONDITIONAL_JUMP)  ; LAB_0042f80a
    ADD ESI,dword ptr [ESP + 0x24]      ; 0042f891
        ;   Label: LAB_0042f891
    JMP 0x0042f82b                      ; 0042f895
        ;   XREF to: 0042f82b (UNCONDITIONAL_JUMP)  ; LAB_0042f82b
    MOV ECX,dword ptr [EBP + 0x24]      ; 0042f897
        ;   Label: LAB_0042f897
    PUSH ECX                            ; 0042f89a
    MOV EBX,dword ptr [EBP + 0x20]      ; 0042f89b
    PUSH EBX                            ; 0042f89e
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0042f89f
    PUSH ESI                            ; 0042f8a2
    CALL cockpit_ckptutil.c_putPixel_FUN_00430140 ; 0042f8a3
        ;   XREF to: 00430140 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_00430140(int x, int y, int color)
    ADD ESP,0xc                         ; 0042f8a8
    MOV ESP,EBP                         ; 0042f8ab
    POP EBP                             ; 0042f8ad
    POP EDI                             ; 0042f8ae
    POP ESI                             ; 0042f8af
    POP EBX                             ; 0042f8b0
    RET                                 ; 0042f8b1

