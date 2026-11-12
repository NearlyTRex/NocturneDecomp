; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_xform_cpp_computeOrthogonalityError_FUN_00584790(CMatrix3x4f *matrix)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00584790
        ;   Label: core_xform.cpp_computeOrthogonalityError_FUN_00584790
    PUSH ESI                            ; 00584791
    PUSH EDI                            ; 00584792
    PUSH EBP                            ; 00584793
    MOV EBP,ESP                         ; 00584794
    SUB ESP,0x84                        ; 00584796
    AND ESP,0xfffffff8                  ; 0058479c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058479f
    FLD float ptr [EAX]                 ; 005847a2
    FST double ptr [ESP]                ; 005847a4
    FMUL double ptr [ESP]               ; 005847a7
    FLD float ptr [EAX + 0x4]           ; 005847aa
    FST double ptr [ESP + 0x8]          ; 005847ad
    FMUL double ptr [ESP + 0x8]         ; 005847b1
    FLD float ptr [EAX + 0x8]           ; 005847b5
    FXCH                                ; 005847b8
    FADDP ST2,ST0                       ; 005847ba
    FST double ptr [ESP + 0x10]         ; 005847bc
    FMUL double ptr [ESP + 0x10]        ; 005847c0
    FLD float ptr [EAX + 0x10]          ; 005847c4
    FLD float ptr [EAX + 0x14]          ; 005847c7
    FLD float ptr [EAX + 0x18]          ; 005847ca
    FLD float ptr [EAX + 0x20]          ; 005847cd
    FLD float ptr [EAX + 0x24]          ; 005847d0
    FXCH ST4                            ; 005847d3
    FSTP double ptr [ESP + 0x18]        ; 005847d5
    FXCH ST4                            ; 005847d9
    FADDP ST5,ST0                       ; 005847db
    FLD float ptr [EAX + 0x28]          ; 005847dd
    FXCH ST5                            ; 005847e0
    FSQRT                               ; 005847e2
    FXCH ST2                            ; 005847e4
    FSTP double ptr [ESP + 0x20]        ; 005847e6
    FLD double ptr [ESP + 0x18]         ; 005847ea
    FMUL ST0                            ; 005847ee
    FLD double ptr [ESP + 0x20]         ; 005847f0
    FMUL ST0                            ; 005847f4
    FADDP                               ; 005847f6
    FXCH                                ; 005847f8
    FST double ptr [ESP + 0x28]         ; 005847fa
    FMUL double ptr [ESP + 0x28]        ; 005847fe
    FADDP                               ; 00584802
    FSQRT                               ; 00584804
    FXCH ST3                            ; 00584806
    FST double ptr [ESP + 0x50]         ; 00584808
    FMUL double ptr [ESP + 0x50]        ; 0058480c
    FXCH ST2                            ; 00584810
    FST double ptr [ESP + 0x48]         ; 00584812
    FMUL double ptr [ESP + 0x48]        ; 00584816
    FADDP ST2,ST0                       ; 0058481a
    FXCH ST3                            ; 0058481c
    FST double ptr [ESP + 0x58]         ; 0058481e
    FMUL double ptr [ESP + 0x58]        ; 00584822
    FADDP                               ; 00584826
    FSQRT                               ; 00584828
    FLDZ                                ; 0058482a
    FXCH ST3                            ; 0058482c
    FSTP double ptr [ESP + 0x40]        ; 0058482e
    FXCH                                ; 00584832
    FSTP double ptr [ESP + 0x38]        ; 00584834
    FSTP double ptr [ESP + 0x30]        ; 00584838
    FCOMP double ptr [ESP + 0x40]       ; 0058483c
    FNSTSW AX                           ; 00584840
    SAHF                                ; 00584842
    JNC 0x0058498f                      ; 00584843
        ;   XREF to: 0058498f (CONDITIONAL_JUMP)  ; LAB_0058498f
    FLDZ                                ; 00584849
        ;   Label: LAB_00584849
    FCOMP double ptr [ESP + 0x38]       ; 0058484b
    FNSTSW AX                           ; 0058484f
    SAHF                                ; 00584851
    JC 0x00584863                       ; 00584852
        ;   XREF to: 00584863 (CONDITIONAL_JUMP)  ; LAB_00584863
    XOR EBX,EBX                         ; 00584854
    MOV ESI,0x3ff00000                  ; 00584856
    MOV dword ptr [ESP + 0x38],EBX      ; 0058485b
    MOV dword ptr [ESP + 0x3c],ESI      ; 0058485f
    FLDZ                                ; 00584863
        ;   Label: LAB_00584863
    FCOMP double ptr [ESP + 0x30]       ; 00584865
    FNSTSW AX                           ; 00584869
    SAHF                                ; 0058486b
    JNC 0x005849a3                      ; 0058486c
        ;   XREF to: 005849a3 (CONDITIONAL_JUMP)  ; LAB_005849a3
    FLD1                                ; 00584872
        ;   Label: LAB_00584872
    FDIV double ptr [ESP + 0x40]        ; 00584874
    FLD1                                ; 00584878
    FDIV double ptr [ESP + 0x38]        ; 0058487a
    FLD double ptr [ESP]                ; 0058487e
    FMUL ST2                            ; 00584881
    FLD double ptr [ESP + 0x8]          ; 00584883
    FMUL ST3                            ; 00584887
    FLD double ptr [ESP + 0x10]         ; 00584889
    FMULP ST4                           ; 0058488d
    FLD double ptr [ESP + 0x18]         ; 0058488f
    FXCH ST3                            ; 00584893
    FSTP double ptr [ESP + 0x78]        ; 00584895
    FXCH ST2                            ; 00584899
    FMUL double ptr [ESP + 0x78]        ; 0058489b
    FLD double ptr [ESP + 0x20]         ; 0058489f
    FMUL double ptr [ESP + 0x78]        ; 005848a3
    FLD double ptr [ESP + 0x28]         ; 005848a7
    FXCH ST3                            ; 005848ab
    FSTP double ptr [ESP]               ; 005848ad
    FLD1                                ; 005848b0
    FLD double ptr [ESP + 0x50]         ; 005848b2
    FXCH ST4                            ; 005848b6
    FMUL double ptr [ESP + 0x78]        ; 005848b8
    FXCH                                ; 005848bc
    FDIV double ptr [ESP + 0x30]        ; 005848be
    FSTP double ptr [ESP + 0x78]        ; 005848c2
    FXCH ST3                            ; 005848c6
    FMUL double ptr [ESP + 0x78]        ; 005848c8
    FXCH ST4                            ; 005848cc
    FSTP double ptr [ESP + 0x8]         ; 005848ce
    FLD double ptr [ESP + 0x48]         ; 005848d2
    FMUL double ptr [ESP + 0x78]        ; 005848d6
    FXCH ST5                            ; 005848da
    FSTP double ptr [ESP + 0x10]        ; 005848dc
    FLD double ptr [ESP + 0x58]         ; 005848e0
    FMUL double ptr [ESP + 0x78]        ; 005848e4
    FXCH ST2                            ; 005848e8
    FSTP double ptr [ESP + 0x18]        ; 005848ea
    FLD double ptr [ESP]                ; 005848ee
    FMUL double ptr [ESP + 0x18]        ; 005848f1
    FXCH ST4                            ; 005848f5
    FSTP double ptr [ESP + 0x50]        ; 005848f7
    FLD double ptr [ESP]                ; 005848fb
    FMUL double ptr [ESP + 0x50]        ; 005848fe
    FXCH                                ; 00584902
    FSTP double ptr [ESP + 0x20]        ; 00584904
    FLD double ptr [ESP + 0x18]         ; 00584908
    FMUL double ptr [ESP + 0x50]        ; 0058490c
    FXCH ST3                            ; 00584910
    FSTP double ptr [ESP + 0x28]        ; 00584912
    FLD double ptr [ESP + 0x8]          ; 00584916
    FMUL double ptr [ESP + 0x20]        ; 0058491a
    FXCH ST5                            ; 0058491e
    FSTP double ptr [ESP + 0x48]        ; 00584920
    FLD double ptr [ESP + 0x8]          ; 00584924
    FMUL double ptr [ESP + 0x48]        ; 00584928
    FLD double ptr [ESP + 0x20]         ; 0058492c
    FXCH ST6                            ; 00584930
    FADDP ST5,ST0                       ; 00584932
    FXCH ST5                            ; 00584934
    FMUL double ptr [ESP + 0x48]        ; 00584936
    FLD double ptr [ESP + 0x10]         ; 0058493a
    FMUL double ptr [ESP + 0x28]        ; 0058493e
    FXCH ST6                            ; 00584942
    FADDP ST2,ST0                       ; 00584944
    FXCH ST2                            ; 00584946
    FSTP double ptr [ESP + 0x58]        ; 00584948
    FLD double ptr [ESP + 0x10]         ; 0058494c
    FMUL double ptr [ESP + 0x58]        ; 00584950
    FXCH ST5                            ; 00584954
    FADDP ST4,ST0                       ; 00584956
    FLD ST3                             ; 00584958
    FMULP ST4                           ; 0058495a
    FXCH                                ; 0058495c
    FADDP ST2,ST0                       ; 0058495e
    FADDP ST3,ST0                       ; 00584960
    FLD ST2                             ; 00584962
    FMULP ST3                           ; 00584964
    FLD double ptr [ESP + 0x28]         ; 00584966
    FMUL double ptr [ESP + 0x58]        ; 0058496a
    FXCH ST3                            ; 0058496e
    FADDP ST2,ST0                       ; 00584970
    FADDP ST2,ST0                       ; 00584972
    FLD ST1                             ; 00584974
    FMULP ST2                           ; 00584976
    FADDP                               ; 00584978
    FSTP float ptr [ESP + 0x80]         ; 0058497a
    MOV EAX,dword ptr [ESP + 0x80]      ; 00584981
    MOV ESP,EBP                         ; 00584988
    POP EBP                             ; 0058498a
    POP EDI                             ; 0058498b
    POP ESI                             ; 0058498c
    POP EBX                             ; 0058498d
    RET                                 ; 0058498e
    XOR EDX,EDX                         ; 0058498f
        ;   Label: LAB_0058498f
    MOV ECX,0x3ff00000                  ; 00584991
    MOV dword ptr [ESP + 0x40],EDX      ; 00584996
    MOV dword ptr [ESP + 0x44],ECX      ; 0058499a
    JMP 0x00584849                      ; 0058499e
        ;   XREF to: 00584849 (UNCONDITIONAL_JUMP)  ; LAB_00584849
    XOR EDI,EDI                         ; 005849a3
        ;   Label: LAB_005849a3
    MOV EAX,0x3ff00000                  ; 005849a5
    MOV dword ptr [ESP + 0x30],EDI      ; 005849aa
    MOV dword ptr [ESP + 0x34],EAX      ; 005849ae
    JMP 0x00584872                      ; 005849b2
        ;   XREF to: 00584872 (UNCONDITIONAL_JUMP)  ; LAB_00584872

