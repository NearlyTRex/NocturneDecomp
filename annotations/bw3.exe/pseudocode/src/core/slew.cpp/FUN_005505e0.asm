; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_slew_cpp_FUN_005505e0(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
;
; XREF[1]:
;   core_game.cpp_FUN_004b6f30 at 004b70e5
;
; Referenced Globals:
;   undefined4 DAT_005d2316
;   undefined4 DAT_005d231e
;   undefined4 DAT_005d2326
;   undefined4 DAT_005d232e
;   undefined4 DAT_005d2336
;   undefined4 DAT_005d233e
;   undefined4 DAT_005d2342
;   undefined4 DAT_005d2346
;   undefined4 DAT_005d234a
;   undefined4 DAT_005d234e
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_00600284
;   undefined4 g_CGameInstance.field788_0x314
;   undefined4 DAT_01d70a78
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005505e0
        ;   Label: core_slew.cpp_FUN_005505e0
    PUSH EBP                            ; 005505e1
    MOV EBP,ESP                         ; 005505e2
    SUB ESP,0x24                        ; 005505e4
    AND ESP,0xfffffff8                  ; 005505e7
    MOV EBX,dword ptr [EBP + 0xc]       ; 005505ea
    MOV EAX,[0x005fe9dc]                ; 005505ed | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x314]     ; 005505f2 | g_CGameInstance.field788_0x314
    PUSH 0x38                           ; 005505f8
    MOV dword ptr [ESP + 0x8],EAX       ; 005505fa
    MOV dword ptr [ESP + 0xc],EAX       ; 005505fe
    MOV EAX,[0x00600284]                ; 00550602 | DAT_00600284
    PUSH EAX                            ; 00550607 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 00550608 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 0055060a
    ADD ESP,0x8                         ; 0055060c
    TEST EAX,EAX                        ; 0055060f
    JZ 0x0055093d                       ; 00550611
        ;   XREF to: 0055093d (CONDITIONAL_JUMP)  ; LAB_0055093d
    FLD float ptr [ESP + 0x4]           ; 00550617
    FMUL double ptr [0x005d231e]        ; 0055061b | DAT_005d231e
    FSTP float ptr [ESP + 0x8]          ; 00550621
        ;   Label: LAB_00550621
    FLD float ptr [ESP + 0x8]           ; 00550625
        ;   Label: LAB_00550625
    FLD ST0                             ; 00550629
    FMUL float ptr [0x005d2326]         ; 0055062b | DAT_005d2326
    FLD ST1                             ; 00550631
    FMUL double ptr [0x005d232e]        ; 00550633 | DAT_005d232e
    PUSH 0x4f                           ; 00550639
    MOV EAX,[0x00600284]                ; 0055063b | DAT_00600284
    FXCH ST2                            ; 00550640
    FMUL double ptr [0x005d2336]        ; 00550642 | DAT_005d2336
    PUSH EAX                            ; 00550648 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 00550649 | DAT_01d70a78
    FXCH                                ; 0055064b
    FSTP float ptr [ESP + 0x24]         ; 0055064d
    FXCH                                ; 00550651
    FSTP float ptr [ESP + 0x8]          ; 00550653
    FSTP float ptr [ESP + 0x28]         ; 00550657
    CALL dword ptr [EDX]                ; 0055065b
    ADD ESP,0x8                         ; 0055065d
    TEST EAX,EAX                        ; 00550660
    JZ 0x0055066e                       ; 00550662
        ;   XREF to: 0055066e (CONDITIONAL_JUMP)  ; LAB_0055066e
    FLD float ptr [EBX + 0x10]          ; 00550664
    FSUB float ptr [ESP + 0x1c]         ; 00550667
    FSTP float ptr [EBX + 0x10]         ; 0055066b
    PUSH 0x51                           ; 0055066e
        ;   Label: LAB_0055066e
    MOV EAX,[0x00600284]                ; 00550670 | DAT_00600284
    PUSH EAX                            ; 00550675 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 00550676 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 00550678
    ADD ESP,0x8                         ; 0055067a
    TEST EAX,EAX                        ; 0055067d
    JZ 0x0055068b                       ; 0055067f
        ;   XREF to: 0055068b (CONDITIONAL_JUMP)  ; LAB_0055068b
    FLD float ptr [EBX + 0x10]          ; 00550681
    FADD float ptr [ESP + 0x1c]         ; 00550684
    FSTP float ptr [EBX + 0x10]         ; 00550688
    PUSH 0x48                           ; 0055068b
        ;   Label: LAB_0055068b
    MOV EAX,[0x00600284]                ; 0055068d | DAT_00600284
    PUSH EAX                            ; 00550692 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 00550693 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 00550695
    ADD ESP,0x8                         ; 00550697
    TEST EAX,EAX                        ; 0055069a
    JZ 0x005506ca                       ; 0055069c
        ;   XREF to: 005506ca (CONDITIONAL_JUMP)  ; LAB_005506ca
    FLD float ptr [EBX + 0x10]          ; 0055069e
    FSINCOS                             ; 005506a1
    FLD float ptr [ESP]                 ; 005506a3
    FXCH ST2                            ; 005506a6
    FMUL ST2                            ; 005506a8
    FXCH                                ; 005506aa
    FMULP ST2                           ; 005506ac
    FLD float ptr [EBX]                 ; 005506ae
    FLD float ptr [EBX + 0x8]           ; 005506b0
    FXCH ST2                            ; 005506b3
    FADD ST0,ST1                        ; 005506b5
    FXCH ST3                            ; 005506b7
    FADD ST0,ST2                        ; 005506b9
    FXCH ST3                            ; 005506bb
    FSTP ST1                            ; 005506bd
    FXCH ST2                            ; 005506bf
    FSTP ST1                            ; 005506c1
    FXCH                                ; 005506c3
    FSTP float ptr [EBX]                ; 005506c5
    FSTP float ptr [EBX + 0x8]          ; 005506c7
    PUSH 0x50                           ; 005506ca
        ;   Label: LAB_005506ca
    MOV EAX,[0x00600284]                ; 005506cc | DAT_00600284
    PUSH EAX                            ; 005506d1 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 005506d2 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 005506d4
    ADD ESP,0x8                         ; 005506d6
    TEST EAX,EAX                        ; 005506d9
    JZ 0x00550709                       ; 005506db
        ;   XREF to: 00550709 (CONDITIONAL_JUMP)  ; LAB_00550709
    FLD float ptr [EBX + 0x10]          ; 005506dd
    FSINCOS                             ; 005506e0
    FLD float ptr [ESP]                 ; 005506e2
    FXCH ST2                            ; 005506e5
    FMUL ST2                            ; 005506e7
    FXCH                                ; 005506e9
    FMULP ST2                           ; 005506eb
    FLD float ptr [EBX]                 ; 005506ed
    FLD float ptr [EBX + 0x8]           ; 005506ef
    FXCH ST2                            ; 005506f2
    FSUBR ST0,ST1                       ; 005506f4
    FXCH ST3                            ; 005506f6
    FSUBR ST0,ST2                       ; 005506f8
    FXCH ST3                            ; 005506fa
    FSTP ST1                            ; 005506fc
    FXCH ST2                            ; 005506fe
    FSTP ST1                            ; 00550700
    FXCH                                ; 00550702
    FSTP float ptr [EBX]                ; 00550704
    FSTP float ptr [EBX + 0x8]          ; 00550706
    PUSH 0x4b                           ; 00550709
        ;   Label: LAB_00550709
    MOV EAX,[0x00600284]                ; 0055070b | DAT_00600284
    PUSH EAX                            ; 00550710 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 00550711 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 00550713
    ADD ESP,0x8                         ; 00550715
    TEST EAX,EAX                        ; 00550718
    JZ 0x00550759                       ; 0055071a
        ;   XREF to: 00550759 (CONDITIONAL_JUMP)  ; LAB_00550759
    FLD float ptr [0x005d233e]          ; 0055071c | DAT_005d233e
    FLD float ptr [EBX + 0x10]          ; 00550722
    FADD ST0,ST1                        ; 00550725
    FSIN                                ; 00550727
    FLD float ptr [EBX + 0x10]          ; 00550729
    FADDP ST2,ST0                       ; 0055072c
    FXCH                                ; 0055072e
    FCOS                                ; 00550730
    FLD float ptr [ESP]                 ; 00550732
    FXCH ST2                            ; 00550735
    FMUL ST2                            ; 00550737
    FXCH                                ; 00550739
    FMULP ST2                           ; 0055073b
    FLD float ptr [EBX]                 ; 0055073d
    FLD float ptr [EBX + 0x8]           ; 0055073f
    FXCH ST2                            ; 00550742
    FADD ST0,ST1                        ; 00550744
    FXCH ST3                            ; 00550746
    FADD ST0,ST2                        ; 00550748
    FXCH ST3                            ; 0055074a
    FSTP ST1                            ; 0055074c
    FXCH ST2                            ; 0055074e
    FSTP ST1                            ; 00550750
    FXCH                                ; 00550752
    FSTP float ptr [EBX]                ; 00550754
    FSTP float ptr [EBX + 0x8]          ; 00550756
    PUSH 0x4d                           ; 00550759
        ;   Label: LAB_00550759
    MOV EAX,[0x00600284]                ; 0055075b | DAT_00600284
    PUSH EAX                            ; 00550760 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 00550761 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 00550763
    ADD ESP,0x8                         ; 00550765
    TEST EAX,EAX                        ; 00550768
    JZ 0x005507a9                       ; 0055076a
        ;   XREF to: 005507a9 (CONDITIONAL_JUMP)  ; LAB_005507a9
    FLD float ptr [0x005d2342]          ; 0055076c | DAT_005d2342
    FLD float ptr [EBX + 0x10]          ; 00550772
    FADD ST0,ST1                        ; 00550775
    FSIN                                ; 00550777
    FLD float ptr [EBX + 0x10]          ; 00550779
    FADDP ST2,ST0                       ; 0055077c
    FXCH                                ; 0055077e
    FCOS                                ; 00550780
    FLD float ptr [ESP]                 ; 00550782
    FXCH ST2                            ; 00550785
    FMUL ST2                            ; 00550787
    FXCH                                ; 00550789
    FMULP ST2                           ; 0055078b
    FLD float ptr [EBX]                 ; 0055078d
    FLD float ptr [EBX + 0x8]           ; 0055078f
    FXCH ST2                            ; 00550792
    FADD ST0,ST1                        ; 00550794
    FXCH ST3                            ; 00550796
    FADD ST0,ST2                        ; 00550798
    FXCH ST3                            ; 0055079a
    FSTP ST1                            ; 0055079c
    FXCH ST2                            ; 0055079e
    FSTP ST1                            ; 005507a0
    FXCH                                ; 005507a2
    FSTP float ptr [EBX]                ; 005507a4
    FSTP float ptr [EBX + 0x8]          ; 005507a6
    PUSH 0x10                           ; 005507a9
        ;   Label: LAB_005507a9
    MOV EAX,[0x00600284]                ; 005507ab | DAT_00600284
    PUSH EAX                            ; 005507b0 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 005507b1 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 005507b3
    ADD ESP,0x8                         ; 005507b5
    TEST EAX,EAX                        ; 005507b8
    JZ 0x005507c5                       ; 005507ba
        ;   XREF to: 005507c5 (CONDITIONAL_JUMP)  ; LAB_005507c5
    FLD float ptr [EBX + 0x4]           ; 005507bc
    FADD float ptr [ESP]                ; 005507bf
    FSTP float ptr [EBX + 0x4]          ; 005507c2
    PUSH 0x1e                           ; 005507c5
        ;   Label: LAB_005507c5
    MOV EAX,[0x00600284]                ; 005507c7 | DAT_00600284
    PUSH EAX                            ; 005507cc | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 005507cd | DAT_01d70a78
    CALL dword ptr [EDX]                ; 005507cf
    ADD ESP,0x8                         ; 005507d1
    TEST EAX,EAX                        ; 005507d4
    JZ 0x005507e1                       ; 005507d6
        ;   XREF to: 005507e1 (CONDITIONAL_JUMP)  ; LAB_005507e1
    FLD float ptr [EBX + 0x4]           ; 005507d8
    FSUB float ptr [ESP]                ; 005507db
    FSTP float ptr [EBX + 0x4]          ; 005507de
    PUSH 0x3f                           ; 005507e1
        ;   Label: LAB_005507e1
    MOV EAX,[0x00600284]                ; 005507e3 | DAT_00600284
    PUSH EAX                            ; 005507e8 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 005507e9 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 005507eb
    ADD ESP,0x8                         ; 005507ed
    TEST EAX,EAX                        ; 005507f0
    JZ 0x005507fe                       ; 005507f2
        ;   XREF to: 005507fe (CONDITIONAL_JUMP)  ; LAB_005507fe
    FLD float ptr [EBX + 0xc]           ; 005507f4
    FSUB float ptr [ESP + 0x1c]         ; 005507f7
    FSTP float ptr [EBX + 0xc]          ; 005507fb
    PUSH 0x42                           ; 005507fe
        ;   Label: LAB_005507fe
    MOV EAX,[0x00600284]                ; 00550800 | DAT_00600284
    PUSH EAX                            ; 00550805 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 00550806 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 00550808
    ADD ESP,0x8                         ; 0055080a
    TEST EAX,EAX                        ; 0055080d
    JZ 0x0055081b                       ; 0055080f
        ;   XREF to: 0055081b (CONDITIONAL_JUMP)  ; LAB_0055081b
    FLD float ptr [EBX + 0xc]           ; 00550811
    FADD float ptr [ESP + 0x1c]         ; 00550814
    FSTP float ptr [EBX + 0xc]          ; 00550818
    PUSH 0x47                           ; 0055081b
        ;   Label: LAB_0055081b
    MOV EAX,[0x00600284]                ; 0055081d | DAT_00600284
    PUSH EAX                            ; 00550822 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 00550823 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 00550825
    ADD ESP,0x8                         ; 00550827
    TEST EAX,EAX                        ; 0055082a
    JZ 0x00550838                       ; 0055082c
        ;   XREF to: 00550838 (CONDITIONAL_JUMP)  ; LAB_00550838
    FLD float ptr [EBX + 0x14]          ; 0055082e
    FSUB float ptr [ESP + 0x1c]         ; 00550831
    FSTP float ptr [EBX + 0x14]         ; 00550835
    PUSH 0x49                           ; 00550838
        ;   Label: LAB_00550838
    MOV EAX,[0x00600284]                ; 0055083a | DAT_00600284
    PUSH EAX                            ; 0055083f | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 00550840 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 00550842
    ADD ESP,0x8                         ; 00550844
    TEST EAX,EAX                        ; 00550847
    JZ 0x00550855                       ; 00550849
        ;   XREF to: 00550855 (CONDITIONAL_JUMP)  ; LAB_00550855
    FLD float ptr [EBX + 0x14]          ; 0055084b
    FADD float ptr [ESP + 0x1c]         ; 0055084e
    FSTP float ptr [EBX + 0x14]         ; 00550852
    PUSH 0xc                            ; 00550855
        ;   Label: LAB_00550855
    MOV EAX,[0x00600284]                ; 00550857 | DAT_00600284
    PUSH EAX                            ; 0055085c | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 0055085d | DAT_01d70a78
    CALL dword ptr [EDX]                ; 0055085f
    ADD ESP,0x8                         ; 00550861
    TEST EAX,EAX                        ; 00550864
    JZ 0x00550872                       ; 00550866
        ;   XREF to: 00550872 (CONDITIONAL_JUMP)  ; LAB_00550872
    FLD float ptr [EBX + 0x18]          ; 00550868
    FSUB float ptr [ESP + 0x20]         ; 0055086b
    FSTP float ptr [EBX + 0x18]         ; 0055086f
    PUSH 0xd                            ; 00550872
        ;   Label: LAB_00550872
    MOV EAX,[0x00600284]                ; 00550874 | DAT_00600284
    PUSH EAX                            ; 00550879 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 0055087a | DAT_01d70a78
    CALL dword ptr [EDX]                ; 0055087c
    ADD ESP,0x8                         ; 0055087e
    TEST EAX,EAX                        ; 00550881
    JZ 0x0055088f                       ; 00550883
        ;   XREF to: 0055088f (CONDITIONAL_JUMP)  ; LAB_0055088f
    FLD float ptr [EBX + 0x18]          ; 00550885
    FADD float ptr [ESP + 0x20]         ; 00550888
    FSTP float ptr [EBX + 0x18]         ; 0055088c
    PUSH 0x4c                           ; 0055088f
        ;   Label: LAB_0055088f
    MOV EAX,[0x00600284]                ; 00550891 | DAT_00600284
    PUSH EAX                            ; 00550896 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 00550897 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 00550899
    ADD ESP,0x8                         ; 0055089b
    TEST EAX,EAX                        ; 0055089e
    JZ 0x005508b7                       ; 005508a0
        ;   XREF to: 005508b7 (CONDITIONAL_JUMP)  ; LAB_005508b7
    LEA EAX,[EBX + 0xc]                 ; 005508a2
    MOV dword ptr [EAX + 0x8],0x0       ; 005508a5
    MOV EDX,dword ptr [EAX + 0x8]       ; 005508ac
    MOV dword ptr [EAX + 0x4],EDX       ; 005508af
    MOV EDX,dword ptr [EAX + 0x4]       ; 005508b2
    MOV dword ptr [EAX],EDX             ; 005508b5
    FLD float ptr [EBX + 0x10]          ; 005508b7
        ;   Label: LAB_005508b7
    FCOMP float ptr [0x005d2346]        ; 005508ba | DAT_005d2346
    FNSTSW AX                           ; 005508c0
    SAHF                                ; 005508c2
    JNC 0x005508d1                      ; 005508c3
        ;   XREF to: 005508d1 (CONDITIONAL_JUMP)  ; LAB_005508d1
    FLD float ptr [EBX + 0x10]          ; 005508c5
    FADD float ptr [0x005d234a]         ; 005508c8 | DAT_005d234a
    FSTP float ptr [EBX + 0x10]         ; 005508ce
    CMP dword ptr [EBX + 0x10],0x40490fdb ; 005508d1
        ;   Label: LAB_005508d1
    JLE 0x005508e6                      ; 005508d8
        ;   XREF to: 005508e6 (CONDITIONAL_JUMP)  ; LAB_005508e6
    FLD float ptr [EBX + 0x10]          ; 005508da
    FADD float ptr [0x005d234e]         ; 005508dd | DAT_005d234e
    FSTP float ptr [EBX + 0x10]         ; 005508e3
    FLD float ptr [EBX + 0xc]           ; 005508e6
        ;   Label: LAB_005508e6
    FCOMP float ptr [0x005d2346]        ; 005508e9 | DAT_005d2346
    FNSTSW AX                           ; 005508ef
    SAHF                                ; 005508f1
    JNC 0x00550900                      ; 005508f2
        ;   XREF to: 00550900 (CONDITIONAL_JUMP)  ; LAB_00550900
    FLD float ptr [EBX + 0xc]           ; 005508f4
    FADD float ptr [0x005d234a]         ; 005508f7 | DAT_005d234a
    FSTP float ptr [EBX + 0xc]          ; 005508fd
    CMP dword ptr [EBX + 0xc],0x40490fdb ; 00550900
        ;   Label: LAB_00550900
    JLE 0x00550915                      ; 00550907
        ;   XREF to: 00550915 (CONDITIONAL_JUMP)  ; LAB_00550915
    FLD float ptr [EBX + 0xc]           ; 00550909
    FADD float ptr [0x005d234e]         ; 0055090c | DAT_005d234e
    FSTP float ptr [EBX + 0xc]          ; 00550912
    FLD float ptr [EBX + 0x14]          ; 00550915
        ;   Label: LAB_00550915
    FCOMP float ptr [0x005d2346]        ; 00550918 | DAT_005d2346
    FNSTSW AX                           ; 0055091e
    SAHF                                ; 00550920
    JNC 0x0055092f                      ; 00550921
        ;   XREF to: 0055092f (CONDITIONAL_JUMP)  ; LAB_0055092f
    FLD float ptr [EBX + 0x14]          ; 00550923
    FADD float ptr [0x005d234a]         ; 00550926 | DAT_005d234a
    FSTP float ptr [EBX + 0x14]         ; 0055092c
    CMP dword ptr [EBX + 0x14],0x40490fdb ; 0055092f
        ;   Label: LAB_0055092f
    JG 0x00550967                       ; 00550936
        ;   XREF to: 00550967 (CONDITIONAL_JUMP)  ; LAB_00550967
    MOV ESP,EBP                         ; 00550938
    POP EBP                             ; 0055093a
    POP EBX                             ; 0055093b
    RET                                 ; 0055093c
    PUSH 0x2a                           ; 0055093d
        ;   Label: LAB_0055093d
    MOV EAX,[0x00600284]                ; 0055093f | DAT_00600284
    PUSH EAX                            ; 00550944 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 00550945 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 00550947
    ADD ESP,0x8                         ; 00550949
    TEST EAX,EAX                        ; 0055094c
    JZ 0x00550625                       ; 0055094e
        ;   XREF to: 00550625 (CONDITIONAL_JUMP)  ; LAB_00550625
    FLD float ptr [ESP + 0x4]           ; 00550954
    FLD ST0                             ; 00550958
    FMUL double ptr [0x005d2316]        ; 0055095a | DAT_005d2316
    FSTP ST1                            ; 00550960
    JMP 0x00550621                      ; 00550962
        ;   XREF to: 00550621 (UNCONDITIONAL_JUMP)  ; LAB_00550621
    FLD float ptr [EBX + 0x14]          ; 00550967
        ;   Label: LAB_00550967
    FADD float ptr [0x005d234e]         ; 0055096a | DAT_005d234e
    FSTP float ptr [EBX + 0x14]         ; 00550970
    MOV ESP,EBP                         ; 00550973
    POP EBP                             ; 00550975
    POP EBX                             ; 00550976
    RET                                 ; 00550977

