; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_areVectorsCollinear_FUN_005d66e0(CVector3d *vec1,CVector3d *vec2)
;
; Parameters:
; CVector3d *      Stack[0x4]:4   vec1
; CVector3d *      Stack[0x8]:4   vec2
; Local Variables:
; double           Stack[-0x158]:8  local_158
; double           Stack[-0x150]:8  local_150
; double           Stack[-0x148]:8  local_148
; undefined8       Stack[-0x140]:8  local_140
; undefined8       Stack[-0x138]:8  local_138
; undefined8       Stack[-0x130]:8  local_130
; undefined8       Stack[-0x128]:8  local_128
; undefined8       Stack[-0x120]:8  local_120
; undefined8       Stack[-0x118]:8  local_118
; undefined8       Stack[-0x110]:8  local_110
; undefined8       Stack[-0x108]:8  local_108
; undefined8       Stack[-0x100]:8  local_100
; undefined8       Stack[-0xf8]:8  local_f8
; undefined8       Stack[-0xf0]:8  local_f0
; undefined8       Stack[-0xe8]:8  local_e8
; undefined8       Stack[-0xe0]:8  local_e0
; undefined8       Stack[-0xd8]:8  local_d8
; undefined8       Stack[-0xd0]:8  local_d0
; undefined8       Stack[-0xc8]:8  local_c8
; double           Stack[-0xc0]:8  local_c0
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined8       Stack[-0xa8]:8  local_a8
; double           Stack[-0xa0]:8  local_a0
; double           Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined8       Stack[-0x70]:8  local_70
; double           Stack[-0x68]:8  local_68
; double           Stack[-0x60]:8  local_60
; double           Stack[-0x58]:8  local_58
; double           Stack[-0x50]:8  local_50
; double           Stack[-0x48]:8  local_48
; double           Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[2]:
;   shape_superopt.cpp_CComplexPolygon_canMergeEdges_FUN_005c7fb0 at 005c8146
;   shape_superopt.cpp_isPointOnLineSegment_FUN_005d6c10 at 005d6f72
;
; Referenced Globals:
;   double DOUBLE_0065455a = 0.000100000000000000
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005d66e0
        ;   Label: shape_superopt.cpp_areVectorsCollinear_FUN_005d66e0
    MOV EBP,ESP                         ; 005d66e1
    SUB ESP,0x150                       ; 005d66e3
    AND ESP,0xfffffff8                  ; 005d66e9
    MOV EDX,dword ptr [EBP + 0x8]       ; 005d66ec
    MOV ECX,dword ptr [EBP + 0xc]       ; 005d66ef
    MOV EAX,dword ptr [EDX]             ; 005d66f2
    MOV dword ptr [ESP + 0x108],EAX     ; 005d66f4
    MOV EAX,dword ptr [EDX + 0x4]       ; 005d66fb
    MOV dword ptr [ESP + 0x10c],EAX     ; 005d66fe
    MOV EAX,dword ptr [EDX + 0x8]       ; 005d6705
    FLD double ptr [ESP + 0x108]        ; 005d6708
    MOV dword ptr [ESP + 0x110],EAX     ; 005d670f
    FMUL double ptr [ESP + 0x108]       ; 005d6716
    MOV EAX,dword ptr [EDX + 0xc]       ; 005d671d
    MOV dword ptr [ESP + 0x114],EAX     ; 005d6720
    MOV EAX,dword ptr [EDX + 0x10]      ; 005d6727
    FLD double ptr [ESP + 0x110]        ; 005d672a
    MOV dword ptr [ESP + 0x118],EAX     ; 005d6731
    FMUL double ptr [ESP + 0x110]       ; 005d6738
    MOV EAX,dword ptr [EDX + 0x14]      ; 005d673f
    MOV dword ptr [ESP + 0x11c],EAX     ; 005d6742
    FLD double ptr [ESP + 0x118]        ; 005d6749
    MOV EAX,dword ptr [ECX]             ; 005d6750
    FMUL double ptr [ESP + 0x118]       ; 005d6752
    MOV dword ptr [ESP + 0xf0],EAX      ; 005d6759
    FXCH ST2                            ; 005d6760
    FSTP double ptr [ESP + 0x58]        ; 005d6762
    MOV EAX,dword ptr [ECX + 0x4]       ; 005d6766
    FLD double ptr [ESP + 0x58]         ; 005d6769
    MOV dword ptr [ESP + 0xf4],EAX      ; 005d676d
    FXCH                                ; 005d6774
    FSTP double ptr [ESP + 0x90]        ; 005d6776
    MOV EAX,dword ptr [ECX + 0x8]       ; 005d677d
    FADD double ptr [ESP + 0x90]        ; 005d6780
    MOV dword ptr [ESP + 0xf8],EAX      ; 005d6787
    FSTP double ptr [ESP + 0x68]        ; 005d678e
    MOV EAX,dword ptr [ECX + 0xc]       ; 005d6792
    FLD double ptr [ESP + 0x68]         ; 005d6795
    MOV dword ptr [ESP + 0xfc],EAX      ; 005d6799
    FXCH                                ; 005d67a0
    FSTP double ptr [ESP + 0x88]        ; 005d67a2
    MOV EAX,dword ptr [ECX + 0x10]      ; 005d67a9
    FADD double ptr [ESP + 0x88]        ; 005d67ac
    MOV dword ptr [ESP + 0x100],EAX     ; 005d67b3
    FSTP double ptr [ESP + 0x70]        ; 005d67ba
    MOV EAX,dword ptr [ECX + 0x14]      ; 005d67be
    FLD double ptr [ESP + 0x70]         ; 005d67c1
    MOV dword ptr [ESP + 0x104],EAX     ; 005d67c5
    FSQRT                               ; 005d67cc
    FLD double ptr [ESP + 0xf0]         ; 005d67ce
    FMUL ST0                            ; 005d67d5
    FLD double ptr [ESP + 0xf8]         ; 005d67d7
    FMUL ST0                            ; 005d67de
    FXCH                                ; 005d67e0
    FXCH                                ; 005d67e2
    FSTP double ptr [ESP + 0x60]        ; 005d67e4
    FADD double ptr [ESP + 0x60]        ; 005d67e8
    FLD double ptr [ESP + 0x100]        ; 005d67ec
    FMUL ST0                            ; 005d67f3
    FXCH                                ; 005d67f5
    FXCH                                ; 005d67f7
    FSTP double ptr [ESP + 0x20]        ; 005d67f9
    FADD double ptr [ESP + 0x20]        ; 005d67fd
    FSQRT                               ; 005d6801
    FXCH                                ; 005d6803
    FST double ptr [ESP + 0xd0]         ; 005d6805
    FXCH                                ; 005d680c
    FSTP double ptr [ESP + 0xc8]        ; 005d680e
    FCOMP double ptr [ESP + 0xc8]       ; 005d6815
    FNSTSW AX                           ; 005d681c
    SAHF                                ; 005d681e
    JC 0x005d6b47                       ; 005d681f
        ;   XREF to: 005d6b47 (CONDITIONAL_JUMP)  ; LAB_005d6b47
    FLD double ptr [ESP + 0x108]        ; 005d6825
    FLD double ptr [ESP + 0xc8]         ; 005d682c
    FDIV double ptr [ESP + 0xd0]        ; 005d6833
    FXCH                                ; 005d683a
    FMUL ST1                            ; 005d683c
    FLD double ptr [ESP + 0x110]        ; 005d683e
    FMUL ST2                            ; 005d6845
    FLD double ptr [ESP + 0x118]        ; 005d6847
    FMULP ST3                           ; 005d684e
    FXCH                                ; 005d6850
    FSTP double ptr [ESP + 0x108]       ; 005d6852
    FSTP double ptr [ESP + 0x110]       ; 005d6859
    FSTP double ptr [ESP + 0x118]       ; 005d6860
    MOV EAX,dword ptr [ESP + 0x108]     ; 005d6867
        ;   Label: LAB_005d6867
    MOV dword ptr [ESP + 0x78],EAX      ; 005d686e
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005d6872
    MOV dword ptr [ESP + 0x7c],EAX      ; 005d6879
    MOV EAX,dword ptr [ESP + 0x110]     ; 005d687d
    MOV dword ptr [ESP + 0x80],EAX      ; 005d6884
    MOV EAX,dword ptr [ESP + 0x114]     ; 005d688b
    MOV dword ptr [ESP + 0x84],EAX      ; 005d6892
    MOV EAX,dword ptr [ESP + 0x118]     ; 005d6899
    MOV dword ptr [ESP + 0x50],EAX      ; 005d68a0
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005d68a4
    MOV dword ptr [ESP + 0x54],EAX      ; 005d68ab
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005d68af
    FLD double ptr [ESP + 0x118]        ; 005d68b6
    MOV dword ptr [ESP + 0x30],EAX      ; 005d68bd
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005d68c1
    FLD double ptr [ESP + 0x110]        ; 005d68c8
    MOV dword ptr [ESP + 0x34],EAX      ; 005d68cf
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005d68d3
    FLD double ptr [ESP + 0x108]        ; 005d68da
    MOV dword ptr [ESP + 0xa8],EAX      ; 005d68e1
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005d68e8
    FLDZ                                ; 005d68ef
    MOV dword ptr [ESP + 0xac],EAX      ; 005d68f1
    MOV EAX,dword ptr [ESP + 0x100]     ; 005d68f8
    FXCH ST2                            ; 005d68ff
    FSUB double ptr [ESP + 0xf8]        ; 005d6901
    MOV dword ptr [ESP + 0x38],EAX      ; 005d6908
    MOV EAX,dword ptr [ESP + 0x104]     ; 005d690c
    FSTP double ptr [ESP + 0xb0]        ; 005d6913
    MOV dword ptr [ESP + 0x3c],EAX      ; 005d691a
    MOV EAX,dword ptr [ESP + 0xb0]      ; 005d691e
    FXCH ST2                            ; 005d6925
    FSUB double ptr [ESP + 0x100]       ; 005d6927
    MOV dword ptr [ESP + 0xe0],EAX      ; 005d692e
    MOV EAX,dword ptr [ESP + 0xb4]      ; 005d6935
    FSTP double ptr [ESP + 0x148]       ; 005d693c
    MOV dword ptr [ESP + 0xe4],EAX      ; 005d6943
    MOV EAX,dword ptr [ESP + 0x148]     ; 005d694a
    FXCH                                ; 005d6951
    FSUB double ptr [ESP + 0xf0]        ; 005d6953
    MOV dword ptr [ESP + 0xe8],EAX      ; 005d695a
    MOV EAX,dword ptr [ESP + 0x14c]     ; 005d6961
    FSTP double ptr [ESP + 0xd8]        ; 005d6968
    MOV dword ptr [ESP + 0xec],EAX      ; 005d696f
    FCOMP double ptr [ESP + 0xb0]       ; 005d6976
    FNSTSW AX                           ; 005d697d
    SAHF                                ; 005d697f
    JA 0x005d6b8e                       ; 005d6980
        ;   XREF to: 005d6b8e (CONDITIONAL_JUMP)  ; LAB_005d6b8e
    MOV EAX,dword ptr [ESP + 0xb0]      ; 005d6986
    MOV dword ptr [ESP + 0x98],EAX      ; 005d698d
    MOV EAX,dword ptr [ESP + 0xb4]      ; 005d6994
    MOV dword ptr [ESP + 0x9c],EAX      ; 005d699b
    FLDZ                                ; 005d69a2
        ;   Label: LAB_005d69a2
    FCOMP double ptr [ESP + 0xd8]       ; 005d69a4
    FNSTSW AX                           ; 005d69ab
    SAHF                                ; 005d69ad
    JA 0x005d6ba3                       ; 005d69ae
        ;   XREF to: 005d6ba3 (CONDITIONAL_JUMP)  ; LAB_005d6ba3
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005d69b4
    MOV dword ptr [ESP + 0xc0],EAX      ; 005d69bb
    MOV EAX,dword ptr [ESP + 0xdc]      ; 005d69c2
    MOV dword ptr [ESP + 0xc4],EAX      ; 005d69c9
    FLD double ptr [ESP + 0xc0]         ; 005d69d0
        ;   Label: LAB_005d69d0
    FADD double ptr [ESP + 0x98]        ; 005d69d7
    FLDZ                                ; 005d69de
    FXCH                                ; 005d69e0
    FSTP double ptr [ESP + 0x40]        ; 005d69e2
    FCOMP double ptr [ESP + 0xe8]       ; 005d69e6
    FNSTSW AX                           ; 005d69ed
    SAHF                                ; 005d69ef
    JA 0x005d6bb8                       ; 005d69f0
        ;   XREF to: 005d6bb8 (CONDITIONAL_JUMP)  ; LAB_005d6bb8
    MOV EAX,dword ptr [ESP + 0xe8]      ; 005d69f6
    MOV dword ptr [ESP + 0x10],EAX      ; 005d69fd
    MOV EAX,dword ptr [ESP + 0xec]      ; 005d6a01
    MOV dword ptr [ESP + 0x14],EAX      ; 005d6a08
    FLD double ptr [ESP + 0x40]         ; 005d6a0c
        ;   Label: LAB_005d6a0c
    FLD double ptr [ESP + 0x50]         ; 005d6a10
    FLD double ptr [ESP + 0x80]         ; 005d6a14
    FLD double ptr [ESP + 0x78]         ; 005d6a1b
    FLDZ                                ; 005d6a1f
    FXCH ST4                            ; 005d6a21
    FADD double ptr [ESP + 0x10]        ; 005d6a23
    FXCH ST2                            ; 005d6a27
    FADD double ptr [ESP + 0xa8]        ; 005d6a29
    FXCH ST3                            ; 005d6a30
    FADD double ptr [ESP + 0x38]        ; 005d6a32
    FXCH ST3                            ; 005d6a36
    FSTP double ptr [ESP + 0x18]        ; 005d6a38
    MOV EAX,dword ptr [ESP + 0x18]      ; 005d6a3c
    FADD double ptr [ESP + 0x30]        ; 005d6a40
    MOV dword ptr [ESP + 0x128],EAX     ; 005d6a44
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005d6a4b
    FXCH ST2                            ; 005d6a4f
    FSTP double ptr [ESP + 0x148]       ; 005d6a51
    MOV dword ptr [ESP + 0x12c],EAX     ; 005d6a58
    MOV EAX,dword ptr [ESP + 0x148]     ; 005d6a5f
    FSTP double ptr [ESP + 0x48]        ; 005d6a66
    MOV dword ptr [ESP + 0x130],EAX     ; 005d6a6a
    MOV EAX,dword ptr [ESP + 0x14c]     ; 005d6a71
    FSTP double ptr [ESP + 0x120]       ; 005d6a78
    MOV dword ptr [ESP + 0x134],EAX     ; 005d6a7f
    FCOMP double ptr [ESP + 0x18]       ; 005d6a86
    FNSTSW AX                           ; 005d6a8a
    SAHF                                ; 005d6a8c
    JA 0x005d6bca                       ; 005d6a8d
        ;   XREF to: 005d6bca (CONDITIONAL_JUMP)  ; LAB_005d6bca
    MOV EAX,dword ptr [ESP + 0x18]      ; 005d6a93
    MOV dword ptr [ESP + 0xb8],EAX      ; 005d6a97
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005d6a9e
    MOV dword ptr [ESP + 0xbc],EAX      ; 005d6aa2
    FLDZ                                ; 005d6aa9
        ;   Label: LAB_005d6aa9
    FCOMP double ptr [ESP + 0x120]      ; 005d6aab
    FNSTSW AX                           ; 005d6ab2
    SAHF                                ; 005d6ab4
    JA 0x005d6bdc                       ; 005d6ab5
        ;   XREF to: 005d6bdc (CONDITIONAL_JUMP)  ; LAB_005d6bdc
    MOV EAX,dword ptr [ESP + 0x120]     ; 005d6abb
    MOV dword ptr [ESP + 0x8],EAX       ; 005d6ac2
    MOV EAX,dword ptr [ESP + 0x124]     ; 005d6ac6
    MOV dword ptr [ESP + 0xc],EAX       ; 005d6acd
    FLD double ptr [ESP + 0x8]          ; 005d6ad1
        ;   Label: LAB_005d6ad1
    FADD double ptr [ESP + 0xb8]        ; 005d6ad5
    FLDZ                                ; 005d6adc
    FXCH                                ; 005d6ade
    FSTP double ptr [ESP + 0xa0]        ; 005d6ae0
    FCOMP double ptr [ESP + 0x130]      ; 005d6ae7
    FNSTSW AX                           ; 005d6aee
    SAHF                                ; 005d6af0
    JA 0x005d6bee                       ; 005d6af1
        ;   XREF to: 005d6bee (CONDITIONAL_JUMP)  ; LAB_005d6bee
    MOV EAX,dword ptr [ESP + 0x130]     ; 005d6af7
    MOV dword ptr [ESP],EAX             ; 005d6afe
    MOV EAX,dword ptr [ESP + 0x134]     ; 005d6b01
    MOV dword ptr [ESP + 0x4],EAX       ; 005d6b08
    FLD double ptr [ESP + 0xa0]         ; 005d6b0c
        ;   Label: LAB_005d6b0c
    FADD double ptr [ESP]               ; 005d6b13
    FLD double ptr [ESP + 0x48]         ; 005d6b16
    FXCH                                ; 005d6b1a
    FSTP double ptr [ESP + 0x28]        ; 005d6b1c
    FCOMP double ptr [0x0065455a]       ; 005d6b20 | DOUBLE_0065455a
    FNSTSW AX                           ; 005d6b26
    SAHF                                ; 005d6b28
    JC 0x005d6b3e                       ; 005d6b29
        ;   XREF to: 005d6b3e (CONDITIONAL_JUMP)  ; LAB_005d6b3e
    FLD double ptr [ESP + 0x28]         ; 005d6b2b
    FCOMP double ptr [0x0065455a]       ; 005d6b2f | DOUBLE_0065455a
    FNSTSW AX                           ; 005d6b35
    SAHF                                ; 005d6b37
    JNC 0x005d6bff                      ; 005d6b38
        ;   XREF to: 005d6bff (CONDITIONAL_JUMP)  ; LAB_005d6bff
    MOV EAX,0x1                         ; 005d6b3e
        ;   Label: LAB_005d6b3e
    MOV ESP,EBP                         ; 005d6b43
    POP EBP                             ; 005d6b45
    RET                                 ; 005d6b46
    FLD double ptr [ESP + 0xf0]         ; 005d6b47
        ;   Label: LAB_005d6b47
    FLD double ptr [ESP + 0xd0]         ; 005d6b4e
    FDIV double ptr [ESP + 0xc8]        ; 005d6b55
    FXCH                                ; 005d6b5c
    FMUL ST1                            ; 005d6b5e
    FLD double ptr [ESP + 0xf8]         ; 005d6b60
    FMUL ST2                            ; 005d6b67
    FLD double ptr [ESP + 0x100]        ; 005d6b69
    FMULP ST3                           ; 005d6b70
    FXCH                                ; 005d6b72
    FSTP double ptr [ESP + 0xf0]        ; 005d6b74
    FSTP double ptr [ESP + 0xf8]        ; 005d6b7b
    FSTP double ptr [ESP + 0x100]       ; 005d6b82
    JMP 0x005d6867                      ; 005d6b89
        ;   XREF to: 005d6867 (UNCONDITIONAL_JUMP)  ; LAB_005d6867
    FLD double ptr [ESP + 0xb0]         ; 005d6b8e
        ;   Label: LAB_005d6b8e
    FCHS                                ; 005d6b95
    FSTP double ptr [ESP + 0x98]        ; 005d6b97
    JMP 0x005d69a2                      ; 005d6b9e
        ;   XREF to: 005d69a2 (UNCONDITIONAL_JUMP)  ; LAB_005d69a2
    FLD double ptr [ESP + 0xd8]         ; 005d6ba3
        ;   Label: LAB_005d6ba3
    FCHS                                ; 005d6baa
    FSTP double ptr [ESP + 0xc0]        ; 005d6bac
    JMP 0x005d69d0                      ; 005d6bb3
        ;   XREF to: 005d69d0 (UNCONDITIONAL_JUMP)  ; LAB_005d69d0
    FLD double ptr [ESP + 0xe8]         ; 005d6bb8
        ;   Label: LAB_005d6bb8
    FCHS                                ; 005d6bbf
    FSTP double ptr [ESP + 0x10]        ; 005d6bc1
    JMP 0x005d6a0c                      ; 005d6bc5
        ;   XREF to: 005d6a0c (UNCONDITIONAL_JUMP)  ; LAB_005d6a0c
    FLD double ptr [ESP + 0x18]         ; 005d6bca
        ;   Label: LAB_005d6bca
    FCHS                                ; 005d6bce
    FSTP double ptr [ESP + 0xb8]        ; 005d6bd0
    JMP 0x005d6aa9                      ; 005d6bd7
        ;   XREF to: 005d6aa9 (UNCONDITIONAL_JUMP)  ; LAB_005d6aa9
    FLD double ptr [ESP + 0x120]        ; 005d6bdc
        ;   Label: LAB_005d6bdc
    FCHS                                ; 005d6be3
    FSTP double ptr [ESP + 0x8]         ; 005d6be5
    JMP 0x005d6ad1                      ; 005d6be9
        ;   XREF to: 005d6ad1 (UNCONDITIONAL_JUMP)  ; LAB_005d6ad1
    FLD double ptr [ESP + 0x130]        ; 005d6bee
        ;   Label: LAB_005d6bee
    FCHS                                ; 005d6bf5
    FSTP double ptr [ESP]               ; 005d6bf7
    JMP 0x005d6b0c                      ; 005d6bfa
        ;   XREF to: 005d6b0c (UNCONDITIONAL_JUMP)  ; LAB_005d6b0c
    XOR EAX,EAX                         ; 005d6bff
        ;   Label: LAB_005d6bff
    MOV ESP,EBP                         ; 005d6c01
    POP EBP                             ; 005d6c03
    RET                                 ; 005d6c04

