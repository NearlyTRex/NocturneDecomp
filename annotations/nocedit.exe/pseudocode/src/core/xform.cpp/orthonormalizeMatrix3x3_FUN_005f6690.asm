; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_orthonormalizeMatrix3x3_FUN_005f6690(CMatrix3x3f *matrix,int preserve_scale)
;
; Parameters:
; CMatrix3x3f *    Stack[0x4]:4   matrix
; int              Stack[0x8]:4   preserve_scale
; Local Variables:
; double           Stack[-0xf0]:8  local_f0
; double           Stack[-0xe8]:8  local_e8
; double           Stack[-0xe0]:8  local_e0
; double           Stack[-0xd8]:8  local_d8
; double           Stack[-0xd0]:8  local_d0
; double           Stack[-0xc8]:8  local_c8
; double           Stack[-0xc0]:8  local_c0
; double           Stack[-0xb8]:8  local_b8
; double           Stack[-0xb0]:8  local_b0
; double           Stack[-0xa8]:8  local_a8
; double           Stack[-0xa0]:8  local_a0
; double           Stack[-0x98]:8  local_98
; double           Stack[-0x90]:8  local_90
; double           Stack[-0x88]:8  local_88
; double           Stack[-0x80]:8  local_80
;
; XREF[3]:
;   core_course.cpp_CCourse_importMatrices_FUN_00442ea0 at 00442fae
;   core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0 at 0058ae73
;   core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10 at 0058ab5e
;
; Referenced Globals:
;   double g_GramSchmidtBlendFactor = 0.5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f6690
        ;   Label: core_xform.cpp_orthonormalizeMatrix3x3_FUN_005f6690
    PUSH ESI                            ; 005f6691
    PUSH EDI                            ; 005f6692
    PUSH EBP                            ; 005f6693
    MOV EBP,ESP                         ; 005f6694
    SUB ESP,0xe0                        ; 005f6696
    AND ESP,0xfffffff8                  ; 005f669c
    MOV ECX,dword ptr [EBP + 0x14]      ; 005f669f
    FLD float ptr [ECX]                 ; 005f66a2
    FST double ptr [ESP]                ; 005f66a4
    FMUL double ptr [ESP]               ; 005f66a7
    FLD float ptr [ECX + 0x4]           ; 005f66aa
    FST double ptr [ESP + 0x60]         ; 005f66ad
    FMUL double ptr [ESP + 0x60]        ; 005f66b1
    FLD float ptr [ECX + 0x8]           ; 005f66b5
    FXCH                                ; 005f66b8
    FADDP ST2,ST0                       ; 005f66ba
    FST double ptr [ESP + 0x8]          ; 005f66bc
    FMUL double ptr [ESP + 0x8]         ; 005f66c0
    FADDP                               ; 005f66c4
    FSQRT                               ; 005f66c6
    FLD float ptr [ECX + 0x10]          ; 005f66c8
    FST double ptr [ESP + 0x38]         ; 005f66cb
    FMUL double ptr [ESP + 0x38]        ; 005f66cf
    FLD float ptr [ECX + 0x14]          ; 005f66d3
    FST double ptr [ESP + 0x10]         ; 005f66d6
    FMUL double ptr [ESP + 0x10]        ; 005f66da
    FLD float ptr [ECX + 0x18]          ; 005f66de
    FXCH                                ; 005f66e1
    FADDP ST2,ST0                       ; 005f66e3
    FST double ptr [ESP + 0x28]         ; 005f66e5
    FMUL double ptr [ESP + 0x28]        ; 005f66e9
    FADDP                               ; 005f66ed
    FSQRT                               ; 005f66ef
    FLD float ptr [ECX + 0x20]          ; 005f66f1
    FST double ptr [ESP + 0x30]         ; 005f66f4
    FMUL double ptr [ESP + 0x30]        ; 005f66f8
    FLD float ptr [ECX + 0x24]          ; 005f66fc
    FST double ptr [ESP + 0x18]         ; 005f66ff
    FMUL double ptr [ESP + 0x18]        ; 005f6703
    FLD float ptr [ECX + 0x28]          ; 005f6707
    FXCH                                ; 005f670a
    FADDP ST2,ST0                       ; 005f670c
    FST double ptr [ESP + 0x20]         ; 005f670e
    FMUL double ptr [ESP + 0x20]        ; 005f6712
    FADDP                               ; 005f6716
    FSQRT                               ; 005f6718
    FLDZ                                ; 005f671a
    FXCH ST3                            ; 005f671c
    FSTP double ptr [ESP + 0x40]        ; 005f671e
    FXCH                                ; 005f6722
    FSTP double ptr [ESP + 0x70]        ; 005f6724
    FSTP double ptr [ESP + 0x68]        ; 005f6728
    FCOMP double ptr [ESP + 0x40]       ; 005f672c
    FNSTSW AX                           ; 005f6730
    SAHF                                ; 005f6732
    JNC 0x005f6b2e                      ; 005f6733
        ;   XREF to: 005f6b2e (CONDITIONAL_JUMP)  ; LAB_005f6b2e
    FLDZ                                ; 005f6739
        ;   Label: LAB_005f6739
    FCOMP double ptr [ESP + 0x70]       ; 005f673b
    FNSTSW AX                           ; 005f673f
    SAHF                                ; 005f6741
    JC 0x005f6753                       ; 005f6742
        ;   XREF to: 005f6753 (CONDITIONAL_JUMP)  ; LAB_005f6753
    XOR ESI,ESI                         ; 005f6744
    MOV EDI,0x3ff00000                  ; 005f6746
    MOV dword ptr [ESP + 0x70],ESI      ; 005f674b
    MOV dword ptr [ESP + 0x74],EDI      ; 005f674f
    FLDZ                                ; 005f6753
        ;   Label: LAB_005f6753
    FCOMP double ptr [ESP + 0x68]       ; 005f6755
    FNSTSW AX                           ; 005f6759
    SAHF                                ; 005f675b
    JNC 0x005f6b42                      ; 005f675c
        ;   XREF to: 005f6b42 (CONDITIONAL_JUMP)  ; LAB_005f6b42
    FLD1                                ; 005f6762
        ;   Label: LAB_005f6762
    FDIV double ptr [ESP + 0x40]        ; 005f6764
    FLD1                                ; 005f6768
    FDIV double ptr [ESP + 0x70]        ; 005f676a
    FLD double ptr [ESP]                ; 005f676e
    FMUL ST2                            ; 005f6771
    FLD double ptr [ESP + 0x60]         ; 005f6773
    FMUL ST3                            ; 005f6777
    FLD double ptr [ESP + 0x8]          ; 005f6779
    FMULP ST4                           ; 005f677d
    FLD double ptr [ESP + 0x38]         ; 005f677f
    FXCH ST3                            ; 005f6783
    FSTP double ptr [ESP + 0xb8]        ; 005f6785
    FXCH ST2                            ; 005f678c
    FMUL double ptr [ESP + 0xb8]        ; 005f678e
    FLD double ptr [ESP + 0x10]         ; 005f6795
    FMUL double ptr [ESP + 0xb8]        ; 005f6799
    FLD double ptr [ESP + 0x28]         ; 005f67a0
    FXCH ST3                            ; 005f67a4
    FSTP double ptr [ESP]               ; 005f67a6
    FLD1                                ; 005f67a9
    FLD double ptr [ESP + 0x30]         ; 005f67ab
    FXCH ST4                            ; 005f67af
    FMUL double ptr [ESP + 0xb8]        ; 005f67b1
    FXCH                                ; 005f67b8
    FDIV double ptr [ESP + 0x68]        ; 005f67ba
    FSTP double ptr [ESP + 0xb8]        ; 005f67be
    FXCH ST3                            ; 005f67c5
    FMUL double ptr [ESP + 0xb8]        ; 005f67c7
    FXCH ST4                            ; 005f67ce
    FSTP double ptr [ESP + 0x60]        ; 005f67d0
    FLD double ptr [ESP + 0x18]         ; 005f67d4
    FMUL double ptr [ESP + 0xb8]        ; 005f67d8
    FXCH ST5                            ; 005f67df
    FSTP double ptr [ESP + 0x8]         ; 005f67e1
    FLD double ptr [ESP + 0x20]         ; 005f67e5
    FMUL double ptr [ESP + 0xb8]        ; 005f67e9
    XOR EDX,EDX                         ; 005f67f0
    FXCH ST2                            ; 005f67f2
    FSTP double ptr [ESP + 0x38]        ; 005f67f4
    FSTP double ptr [ESP + 0x10]        ; 005f67f8
    FXCH                                ; 005f67fc
    FSTP double ptr [ESP + 0x28]        ; 005f67fe
    FXCH                                ; 005f6802
    FSTP double ptr [ESP + 0x30]        ; 005f6804
    FXCH                                ; 005f6808
    FSTP double ptr [ESP + 0x18]        ; 005f680a
    FSTP double ptr [ESP + 0x20]        ; 005f680e
    FLD double ptr [ESP + 0x10]         ; 005f6812
        ;   Label: LAB_005f6812
    FMUL double ptr [ESP + 0x20]        ; 005f6816
    FLD double ptr [ESP + 0x28]         ; 005f681a
    FMUL double ptr [ESP + 0x30]        ; 005f681e
    FLD double ptr [ESP + 0x38]         ; 005f6822
    FMUL double ptr [ESP + 0x18]        ; 005f6826
    FLD double ptr [ESP + 0x28]         ; 005f682a
    FMUL double ptr [ESP + 0x18]        ; 005f682e
    FLD double ptr [ESP + 0x38]         ; 005f6832
    FMUL double ptr [ESP + 0x20]        ; 005f6836
    FLD double ptr [ESP + 0x30]         ; 005f683a
    FMUL double ptr [ESP + 0x10]        ; 005f683e
    FXCH ST2                            ; 005f6842
    FSUBP ST5,ST0                       ; 005f6844
    FSUBP ST3,ST0                       ; 005f6846
    FLD double ptr [0x006583bd]         ; 005f6848 | g_GramSchmidtBlendFactor
    FLD double ptr [ESP]                ; 005f684e
    FMUL ST1                            ; 005f6851
    FLD double ptr [ESP + 0x60]         ; 005f6853
    FMUL ST2                            ; 005f6857
    FXCH                                ; 005f6859
    FADDP ST6,ST0                       ; 005f685b
    FXCH ST5                            ; 005f685d
    FST double ptr [ESP + 0xb0]         ; 005f685f
    FMUL double ptr [ESP + 0xb0]        ; 005f6866
    FXCH ST2                            ; 005f686d
    FSUBP ST3,ST0                       ; 005f686f
    FXCH ST4                            ; 005f6871
    FADDP ST3,ST0                       ; 005f6873
    FXCH ST2                            ; 005f6875
    FST double ptr [ESP + 0x78]         ; 005f6877
    FMUL double ptr [ESP + 0x78]        ; 005f687b
    FLD double ptr [ESP + 0x8]          ; 005f687f
    FMUL ST4                            ; 005f6883
    FXCH                                ; 005f6885
    FADDP ST3,ST0                       ; 005f6887
    FADDP                               ; 005f6889
    FST double ptr [ESP + 0x80]         ; 005f688b
    FMUL double ptr [ESP + 0x80]        ; 005f6892
    FADDP                               ; 005f6899
    FSQRT                               ; 005f689b
    FLD double ptr [ESP + 0x18]         ; 005f689d
    FMUL double ptr [ESP + 0x8]         ; 005f68a1
    FLD double ptr [ESP + 0x20]         ; 005f68a5
    FMUL double ptr [ESP]               ; 005f68a9
    FLD double ptr [ESP + 0x30]         ; 005f68ac
    FMUL double ptr [ESP + 0x60]        ; 005f68b0
    FLD double ptr [ESP + 0x20]         ; 005f68b4
    FMUL double ptr [ESP + 0x60]        ; 005f68b8
    FLD double ptr [ESP + 0x30]         ; 005f68bc
    FMUL double ptr [ESP + 0x8]         ; 005f68c0
    FXCH                                ; 005f68c4
    FSUBP ST4,ST0                       ; 005f68c6
    FLD double ptr [ESP + 0x18]         ; 005f68c8
    FMUL double ptr [ESP]               ; 005f68cc
    FXCH                                ; 005f68cf
    FSUBP ST3,ST0                       ; 005f68d1
    FLD double ptr [ESP + 0x38]         ; 005f68d3
    FMUL ST6                            ; 005f68d7
    FXCH                                ; 005f68d9
    FSUBP ST2,ST0                       ; 005f68db
    FLD double ptr [ESP + 0x10]         ; 005f68dd
    FMUL ST6                            ; 005f68e1
    FXCH                                ; 005f68e3
    FADDP ST4,ST0                       ; 005f68e5
    FXCH ST3                            ; 005f68e7
    FSTP double ptr [ESP + 0x88]        ; 005f68e9
    FLD double ptr [ESP + 0x28]         ; 005f68f0
    FMUL ST5                            ; 005f68f4
    FLD double ptr [ESP + 0x88]         ; 005f68f6
    FMUL ST0                            ; 005f68fd
    FXCH ST4                            ; 005f68ff
    FADDP ST3,ST0                       ; 005f6901
    FXCH ST2                            ; 005f6903
    FST double ptr [ESP + 0x90]         ; 005f6905
    FMUL double ptr [ESP + 0x90]        ; 005f690c
    FXCH ST2                            ; 005f6913
    FADDP                               ; 005f6915
    FXCH                                ; 005f6917
    FADDP ST2,ST0                       ; 005f6919
    FST double ptr [ESP + 0x98]         ; 005f691b
    FMUL double ptr [ESP + 0x98]        ; 005f6922
    FADDP                               ; 005f6929
    FSQRT                               ; 005f692b
    FLD double ptr [ESP + 0x60]         ; 005f692d
    FMUL double ptr [ESP + 0x28]        ; 005f6931
    FLD double ptr [ESP + 0x8]          ; 005f6935
    FMUL double ptr [ESP + 0x10]        ; 005f6939
    FLD double ptr [ESP + 0x8]          ; 005f693d
    FXCH                                ; 005f6941
    FSUBP ST2,ST0                       ; 005f6943
    FMUL double ptr [ESP + 0x38]        ; 005f6945
    FLD double ptr [ESP + 0x30]         ; 005f6949
    FMUL ST5                            ; 005f694d
    FLD double ptr [ESP]                ; 005f694f
    FMUL double ptr [ESP + 0x28]        ; 005f6952
    FXCH                                ; 005f6956
    FADDP ST3,ST0                       ; 005f6958
    FLD double ptr [ESP]                ; 005f695a
    FMUL double ptr [ESP + 0x10]        ; 005f695d
    FXCH                                ; 005f6961
    FSUBP ST2,ST0                       ; 005f6963
    FXCH ST2                            ; 005f6965
    FSTP double ptr [ESP + 0xa0]        ; 005f6967
    FLD double ptr [ESP + 0x18]         ; 005f696e
    FMUL ST5                            ; 005f6972
    FLD double ptr [ESP + 0x60]         ; 005f6974
    FMUL double ptr [ESP + 0x38]        ; 005f6978
    FXCH                                ; 005f697c
    FADDP ST2,ST0                       ; 005f697e
    FLD double ptr [ESP + 0xa0]         ; 005f6980
    FMUL ST0                            ; 005f6987
    FXCH                                ; 005f6989
    FSUBP ST3,ST0                       ; 005f698b
    FXCH                                ; 005f698d
    FST double ptr [ESP + 0xa8]         ; 005f698f
    FMUL double ptr [ESP + 0xa8]        ; 005f6996
    FLD double ptr [ESP + 0x20]         ; 005f699d
    FMULP ST6                           ; 005f69a1
    FADDP                               ; 005f69a3
    FXCH ST4                            ; 005f69a5
    FADDP                               ; 005f69a7
    FST double ptr [ESP + 0xc0]         ; 005f69a9
    FMUL double ptr [ESP + 0xc0]        ; 005f69b0
    FADDP ST3,ST0                       ; 005f69b7
    FXCH ST2                            ; 005f69b9
    FSQRT                               ; 005f69bb
    FLD1                                ; 005f69bd
    FDIVRP ST3,ST0                      ; 005f69bf
    FLD1                                ; 005f69c1
    FDIVRP ST2,ST0                      ; 005f69c3
    FLD double ptr [ESP + 0xb0]         ; 005f69c5
    FMUL ST2                            ; 005f69cc
    FLD double ptr [ESP + 0x78]         ; 005f69ce
    FMUL ST3                            ; 005f69d2
    FLD double ptr [ESP + 0x80]         ; 005f69d4
    FMULP ST4                           ; 005f69db
    FLD double ptr [ESP + 0x88]         ; 005f69dd
    FXCH ST5                            ; 005f69e4
    FSTP double ptr [ESP + 0xb8]        ; 005f69e6
    FXCH ST4                            ; 005f69ed
    FMUL double ptr [ESP + 0xb8]        ; 005f69ef
    FXCH ST2                            ; 005f69f6
    FSTP double ptr [ESP + 0xd8]        ; 005f69f8
    FLD double ptr [ESP + 0x90]         ; 005f69ff
    FMUL double ptr [ESP + 0xb8]        ; 005f6a06
    FLD1                                ; 005f6a0d
    FXCH ST2                            ; 005f6a0f
    FSTP double ptr [ESP]               ; 005f6a11
    FLD double ptr [ESP + 0xa0]         ; 005f6a14
    FLD double ptr [ESP + 0x98]         ; 005f6a1b
    FMUL double ptr [ESP + 0xb8]        ; 005f6a22
    FXCH ST3                            ; 005f6a29
    FDIV double ptr [ESP + 0xd8]        ; 005f6a2b
    FSTP double ptr [ESP + 0xb8]        ; 005f6a32
    FMUL double ptr [ESP + 0xb8]        ; 005f6a39
    FXCH ST5                            ; 005f6a40
    FSTP double ptr [ESP + 0x60]        ; 005f6a42
    FLD double ptr [ESP + 0xa8]         ; 005f6a46
    FMUL double ptr [ESP + 0xb8]        ; 005f6a4d
    FXCH ST4                            ; 005f6a54
    FSTP double ptr [ESP + 0x8]         ; 005f6a56
    FLD double ptr [ESP + 0xc0]         ; 005f6a5a
    FMUL double ptr [ESP + 0xb8]        ; 005f6a61
    INC EDX                             ; 005f6a68
    FXCH ST3                            ; 005f6a69
    FSTP double ptr [ESP + 0x38]        ; 005f6a6b
    FSTP double ptr [ESP + 0x10]        ; 005f6a6f
    FSTP double ptr [ESP + 0x28]        ; 005f6a73
    FXCH ST2                            ; 005f6a77
    FSTP double ptr [ESP + 0x30]        ; 005f6a79
    FSTP double ptr [ESP + 0x18]        ; 005f6a7d
    FSTP double ptr [ESP + 0x20]        ; 005f6a81
    CMP EDX,0xa                         ; 005f6a85
    JL 0x005f6812                       ; 005f6a88
        ;   XREF to: 005f6812 (CONDITIONAL_JUMP)  ; LAB_005f6812
    FLD double ptr [ESP + 0x20]         ; 005f6a8e
    FLD double ptr [ESP + 0x10]         ; 005f6a92
    FMUL ST1                            ; 005f6a96
    FLD double ptr [ESP + 0x28]         ; 005f6a98
    FLD ST0                             ; 005f6a9c
    FLD double ptr [ESP + 0x30]         ; 005f6a9e
    FXCH                                ; 005f6aa2
    FMUL ST1                            ; 005f6aa4
    FLD double ptr [ESP + 0x38]         ; 005f6aa6
    FLD ST0                             ; 005f6aaa
    FMUL double ptr [ESP + 0x18]        ; 005f6aac
    FXCH ST4                            ; 005f6ab0
    FMUL double ptr [ESP + 0x18]        ; 005f6ab2
    FXCH                                ; 005f6ab6
    FMULP ST6                           ; 005f6ab8
    FXCH ST2                            ; 005f6aba
    FMUL double ptr [ESP + 0x10]        ; 005f6abc
    MOV EBX,dword ptr [EBP + 0x18]      ; 005f6ac0
    FXCH ST2                            ; 005f6ac3
    FSUBP ST4,ST0                       ; 005f6ac5
    FSUBRP ST4,ST0                      ; 005f6ac7
    FSUBP                               ; 005f6ac9
    FXCH ST2                            ; 005f6acb
    FSTP double ptr [ESP + 0x50]        ; 005f6acd
    FXCH                                ; 005f6ad1
    FSTP double ptr [ESP + 0x58]        ; 005f6ad3
    FSTP double ptr [ESP + 0x48]        ; 005f6ad7
    TEST EBX,EBX                        ; 005f6adb
    JNZ 0x005f6b56                      ; 005f6add
        ;   XREF to: 005f6b56 (CONDITIONAL_JUMP)  ; LAB_005f6b56
    FLD double ptr [ESP + 0x48]         ; 005f6adf
        ;   Label: LAB_005f6adf
    FLD double ptr [ESP + 0x50]         ; 005f6ae3
    FLD double ptr [ESP + 0x58]         ; 005f6ae7
    FLD double ptr [ESP + 0x38]         ; 005f6aeb
    FLD double ptr [ESP + 0x10]         ; 005f6aef
    FLD double ptr [ESP + 0x28]         ; 005f6af3
    FLD double ptr [ESP + 0x30]         ; 005f6af7
    FXCH ST5                            ; 005f6afb
    FSTP float ptr [ECX + 0x4]          ; 005f6afd
    FLD double ptr [ESP + 0x18]         ; 005f6b00
    FXCH ST4                            ; 005f6b04
    FSTP float ptr [ECX + 0x8]          ; 005f6b06
    FLD double ptr [ESP + 0x20]         ; 005f6b09
    FXCH ST3                            ; 005f6b0d
    FSTP float ptr [ECX + 0x10]         ; 005f6b0f
    FXCH                                ; 005f6b12
    FSTP float ptr [ECX + 0x14]         ; 005f6b14
    FSTP float ptr [ECX + 0x18]         ; 005f6b17
    FXCH ST2                            ; 005f6b1a
    FSTP float ptr [ECX + 0x20]         ; 005f6b1c
    FSTP float ptr [ECX + 0x24]         ; 005f6b1f
    FSTP float ptr [ECX + 0x28]         ; 005f6b22
    FSTP float ptr [ECX]                ; 005f6b25
    MOV ESP,EBP                         ; 005f6b27
    POP EBP                             ; 005f6b29
    POP EDI                             ; 005f6b2a
    POP ESI                             ; 005f6b2b
    POP EBX                             ; 005f6b2c
    RET                                 ; 005f6b2d
    XOR EDX,EDX                         ; 005f6b2e
        ;   Label: LAB_005f6b2e
    MOV EBX,0x3ff00000                  ; 005f6b30
    MOV dword ptr [ESP + 0x40],EDX      ; 005f6b35
    MOV dword ptr [ESP + 0x44],EBX      ; 005f6b39
    JMP 0x005f6739                      ; 005f6b3d
        ;   XREF to: 005f6739 (UNCONDITIONAL_JUMP)  ; LAB_005f6739
    XOR EAX,EAX                         ; 005f6b42
        ;   Label: LAB_005f6b42
    MOV EDX,0x3ff00000                  ; 005f6b44
    MOV dword ptr [ESP + 0x68],EAX      ; 005f6b49
    MOV dword ptr [ESP + 0x6c],EDX      ; 005f6b4d
    JMP 0x005f6762                      ; 005f6b51
        ;   XREF to: 005f6762 (UNCONDITIONAL_JUMP)  ; LAB_005f6762
    FLD double ptr [ESP + 0x40]         ; 005f6b56
        ;   Label: LAB_005f6b56
    FLD double ptr [ESP + 0x48]         ; 005f6b5a
    FMUL ST1                            ; 005f6b5e
    FLD double ptr [ESP + 0x50]         ; 005f6b60
    FMUL ST2                            ; 005f6b64
    FLD double ptr [ESP + 0x58]         ; 005f6b66
    FMULP ST3                           ; 005f6b6a
    FLD double ptr [ESP + 0x70]         ; 005f6b6c
    FLD double ptr [ESP + 0x38]         ; 005f6b70
    FMUL ST1                            ; 005f6b74
    FLD double ptr [ESP + 0x10]         ; 005f6b76
    FMUL ST2                            ; 005f6b7a
    FLD double ptr [ESP + 0x28]         ; 005f6b7c
    FMULP ST3                           ; 005f6b80
    FLD double ptr [ESP + 0x30]         ; 005f6b82
    FMUL double ptr [ESP + 0x68]        ; 005f6b86
    FXCH ST4                            ; 005f6b8a
    FSTP double ptr [ESP + 0x50]        ; 005f6b8c
    FLD double ptr [ESP + 0x18]         ; 005f6b90
    FMUL double ptr [ESP + 0x68]        ; 005f6b94
    FXCH ST6                            ; 005f6b98
    FSTP double ptr [ESP + 0x58]        ; 005f6b9a
    FLD double ptr [ESP + 0x20]         ; 005f6b9e
    FMUL double ptr [ESP + 0x68]        ; 005f6ba2
    FXCH ST2                            ; 005f6ba6
    FSTP double ptr [ESP + 0x38]        ; 005f6ba8
    FSTP double ptr [ESP + 0x10]        ; 005f6bac
    FXCH                                ; 005f6bb0
    FSTP double ptr [ESP + 0x28]        ; 005f6bb2
    FXCH                                ; 005f6bb6
    FSTP double ptr [ESP + 0x30]        ; 005f6bb8
    FXCH ST2                            ; 005f6bbc
    FSTP double ptr [ESP + 0x18]        ; 005f6bbe
    FXCH                                ; 005f6bc2
    FSTP double ptr [ESP + 0x20]        ; 005f6bc4
    FSTP double ptr [ESP + 0x48]        ; 005f6bc8
    JMP 0x005f6adf                      ; 005f6bcc
        ;   XREF to: 005f6adf (UNCONDITIONAL_JUMP)  ; LAB_005f6adf

