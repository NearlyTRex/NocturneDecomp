; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_xform_cpp_matrixToEulerAnglesZYX_FUN_0055b6c0(CMatrix3x4f *matrix_ptr,CVector3f *euler_out)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_ptr
; CVector3f *      Stack[0x8]:4   euler_out
; Local Variables:
; undefined8       Stack[-0xa8]:8  local_a8
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_00417320 at 004175b4
;   core_xform.cpp_quaternionToEulerAnglesZYX_FUN_0055d5e0 at 0055d600
;
; Referenced Globals:
;   double DOUBLE_005982c6 = -1
;   double DOUBLE_005982ce = -3.14159265359000
;   double DOUBLE_005982d6 = 5.37009149473111E-315
;   double DOUBLE_005982de = 0.707000000000000
;   double DOUBLE_005982e6 = -0.707000000000000
;   double DOUBLE_005982ee = 3.14159265359000
;   float FLOAT_005982f6 = -6.283185
;
; Called Functions:
;   crt_math.c_acos_FUN_00565ca4
;   crt_math.c_asin_FUN_00565c76
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055b6c0
        ;   Label: core_xform.cpp_matrixToEulerAnglesZYX_FUN_0055b6c0
    PUSH EDI                            ; 0055b6c1
    PUSH EBP                            ; 0055b6c2
    MOV EBP,ESP                         ; 0055b6c3
    SUB ESP,0x9c                        ; 0055b6c5
    AND ESP,0xfffffff8                  ; 0055b6cb
    MOV EDX,dword ptr [EBP + 0x10]      ; 0055b6ce
    MOV ECX,dword ptr [EBP + 0x14]      ; 0055b6d1
    FLD float ptr [EDX + 0x4]           ; 0055b6d4
    FMUL ST0                            ; 0055b6d7
    FLD float ptr [EDX]                 ; 0055b6d9
    FMUL ST0                            ; 0055b6db
    FADDP                               ; 0055b6dd
    FLD float ptr [EDX + 0x8]           ; 0055b6df
    FMUL ST0                            ; 0055b6e2
    FADDP                               ; 0055b6e4
    FSQRT                               ; 0055b6e6
    FLDZ                                ; 0055b6e8
    FXCH                                ; 0055b6ea
    FSTP double ptr [ESP + 0x20]        ; 0055b6ec
    FCOMP double ptr [ESP + 0x20]       ; 0055b6f0
    FNSTSW AX                           ; 0055b6f4
    SAHF                                ; 0055b6f6
    JC 0x0055b874                       ; 0055b6f7
        ;   XREF to: 0055b874 (CONDITIONAL_JUMP)  ; LAB_0055b874
    FLD float ptr [EDX + 0x10]          ; 0055b6fd
        ;   Label: LAB_0055b6fd
    FMUL ST0                            ; 0055b700
    FLD float ptr [EDX + 0x14]          ; 0055b702
    FMUL ST0                            ; 0055b705
    FADDP                               ; 0055b707
    FLD float ptr [EDX + 0x18]          ; 0055b709
    FMUL ST0                            ; 0055b70c
    FADDP                               ; 0055b70e
    FSQRT                               ; 0055b710
    FLDZ                                ; 0055b712
    FXCH                                ; 0055b714
    FSTP double ptr [ESP + 0x10]        ; 0055b716
    FCOMP double ptr [ESP + 0x10]       ; 0055b71a
    FNSTSW AX                           ; 0055b71e
    SAHF                                ; 0055b720
    JNC 0x0055b72d                      ; 0055b721
        ;   XREF to: 0055b72d (CONDITIONAL_JUMP)  ; LAB_0055b72d
    FLD1                                ; 0055b723
    FDIV double ptr [ESP + 0x10]        ; 0055b725
    FSTP double ptr [ESP + 0x10]        ; 0055b729
    FLD float ptr [EDX + 0x20]          ; 0055b72d
        ;   Label: LAB_0055b72d
    FMUL ST0                            ; 0055b730
    FLD float ptr [EDX + 0x24]          ; 0055b732
    FMUL ST0                            ; 0055b735
    FADDP                               ; 0055b737
    FLD float ptr [EDX + 0x28]          ; 0055b739
    FMUL ST0                            ; 0055b73c
    FADDP                               ; 0055b73e
    FSQRT                               ; 0055b740
    FLDZ                                ; 0055b742
    FXCH                                ; 0055b744
    FSTP double ptr [ESP + 0x28]        ; 0055b746
    FCOMP double ptr [ESP + 0x28]       ; 0055b74a
    FNSTSW AX                           ; 0055b74e
    SAHF                                ; 0055b750
    JNC 0x0055b75d                      ; 0055b751
        ;   XREF to: 0055b75d (CONDITIONAL_JUMP)  ; LAB_0055b75d
    FLD1                                ; 0055b753
    FDIV double ptr [ESP + 0x28]        ; 0055b755
    FSTP double ptr [ESP + 0x28]        ; 0055b759
    FLD float ptr [EDX + 0x24]          ; 0055b75d
        ;   Label: LAB_0055b75d
    FCHS                                ; 0055b760
    FMUL double ptr [ESP + 0x28]        ; 0055b762
    FST double ptr [ESP + 0x18]         ; 0055b766
    FCOMP double ptr [0x005982c6]       ; 0055b76a | DOUBLE_005982c6
    FNSTSW AX                           ; 0055b770
    SAHF                                ; 0055b772
    JA 0x0055b883                       ; 0055b773
        ;   XREF to: 0055b883 (CONDITIONAL_JUMP)  ; LAB_0055b883
    MOV dword ptr [ECX],0xbfc90fdb      ; 0055b779
    MOV dword ptr [ECX + 0x8],0x0       ; 0055b77f
        ;   Label: LAB_0055b77f
    FLD float ptr [EDX + 0x8]           ; 0055b786
    FCHS                                ; 0055b789
    FLD double ptr [ESP + 0x20]         ; 0055b78b
    FXCH                                ; 0055b78f
    FMUL ST1                            ; 0055b791
    FLD float ptr [EDX]                 ; 0055b793
    FMULP ST2                           ; 0055b795
    FSTP double ptr [ESP + 0x8]         ; 0055b797
    MOV EAX,dword ptr [ESP + 0x8]       ; 0055b79b
    MOV dword ptr [ESP + 0x30],EAX      ; 0055b79f
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055b7a3
    FSTP double ptr [ESP + 0x40]        ; 0055b7a7
    MOV dword ptr [ESP + 0x34],EAX      ; 0055b7ab
    MOV EAX,dword ptr [ESP + 0x40]      ; 0055b7af
    MOV dword ptr [ESP + 0x68],EAX      ; 0055b7b3
    MOV EAX,dword ptr [ESP + 0x44]      ; 0055b7b7
    FLD double ptr [ESP + 0x8]          ; 0055b7bb
    MOV dword ptr [ESP + 0x6c],EAX      ; 0055b7bf
    FCOMP double ptr [0x005982de]       ; 0055b7c3 | DOUBLE_005982de
    FNSTSW AX                           ; 0055b7c9
    SAHF                                ; 0055b7cb
    JNC 0x0055badb                      ; 0055b7cc
        ;   XREF to: 0055badb (CONDITIONAL_JUMP)  ; LAB_0055badb
    FLD double ptr [ESP + 0x8]          ; 0055b7d2
    FCOMP double ptr [0x005982e6]       ; 0055b7d6 | DOUBLE_005982e6
    FNSTSW AX                           ; 0055b7dc
    SAHF                                ; 0055b7de
    JBE 0x0055badb                      ; 0055b7df
        ;   XREF to: 0055badb (CONDITIONAL_JUMP)  ; LAB_0055badb
    FLD double ptr [ESP + 0x8]          ; 0055b7e5
    CALL crt_math.c_asin_FUN_00565c76   ; 0055b7e9
        ;   XREF to: 00565c76 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_asin_FUN_00565c76(float10 sine_value)
    FLDZ                                ; 0055b7ee
    FXCH                                ; 0055b7f0
    FSTP float ptr [ESP + 0x94]         ; 0055b7f2
    FCOMP double ptr [ESP + 0x40]       ; 0055b7f9
    FNSTSW AX                           ; 0055b7fd
    SAHF                                ; 0055b7ff
    JBE 0x0055b816                      ; 0055b800
        ;   XREF to: 0055b816 (CONDITIONAL_JUMP)  ; LAB_0055b816
    FLD float ptr [ESP + 0x94]          ; 0055b802
    FSUBR double ptr [0x005982ee]       ; 0055b809 | DOUBLE_005982ee
    FSTP float ptr [ESP + 0x94]         ; 0055b80f
    FLD float ptr [ESP + 0x94]          ; 0055b816
        ;   Label: LAB_0055b816
    FCOMP double ptr [0x005982ce]       ; 0055b81d | DOUBLE_005982ce
    FNSTSW AX                           ; 0055b823
    SAHF                                ; 0055b825
    JNC 0x0055b83c                      ; 0055b826
        ;   XREF to: 0055b83c (CONDITIONAL_JUMP)  ; LAB_0055b83c
    FLD float ptr [ESP + 0x94]          ; 0055b828
    FADD float ptr [0x005982d6]         ; 0055b82f | DOUBLE_005982d6
    FSTP float ptr [ESP + 0x94]         ; 0055b835
    FLD float ptr [ESP + 0x94]          ; 0055b83c
        ;   Label: LAB_0055b83c
    FCOMP double ptr [0x005982ee]       ; 0055b843 | DOUBLE_005982ee
    FNSTSW AX                           ; 0055b849
    SAHF                                ; 0055b84b
    JBE 0x0055b862                      ; 0055b84c
        ;   XREF to: 0055b862 (CONDITIONAL_JUMP)  ; LAB_0055b862
    FLD float ptr [ESP + 0x94]          ; 0055b84e
    FADD float ptr [0x005982f6]         ; 0055b855 | FLOAT_005982f6
    FSTP float ptr [ESP + 0x94]         ; 0055b85b
    MOV EAX,dword ptr [ESP + 0x94]      ; 0055b862
        ;   Label: LAB_0055b862
    MOV dword ptr [ECX + 0x4],EAX       ; 0055b869
    MOV EAX,ECX                         ; 0055b86c
    MOV ESP,EBP                         ; 0055b86e
    POP EBP                             ; 0055b870
    POP EDI                             ; 0055b871
    POP EBX                             ; 0055b872
    RET                                 ; 0055b873
    FLD1                                ; 0055b874
        ;   Label: LAB_0055b874
    FDIV double ptr [ESP + 0x20]        ; 0055b876
    FSTP double ptr [ESP + 0x20]        ; 0055b87a
    JMP 0x0055b6fd                      ; 0055b87e
        ;   XREF to: 0055b6fd (UNCONDITIONAL_JUMP)  ; LAB_0055b6fd
    FLD1                                ; 0055b883
        ;   Label: LAB_0055b883
    FCOMP double ptr [ESP + 0x18]       ; 0055b885
    FNSTSW AX                           ; 0055b889
    SAHF                                ; 0055b88b
    JA 0x0055b899                       ; 0055b88c
        ;   XREF to: 0055b899 (CONDITIONAL_JUMP)  ; LAB_0055b899
    MOV dword ptr [ECX],0x3fc90fdb      ; 0055b88e
    JMP 0x0055b77f                      ; 0055b894
        ;   XREF to: 0055b77f (UNCONDITIONAL_JUMP)  ; LAB_0055b77f
    FLD double ptr [ESP + 0x18]         ; 0055b899
        ;   Label: LAB_0055b899
    FLD ST0                             ; 0055b89d
    CALL crt_math.c_asin_FUN_00565c76   ; 0055b89f
        ;   XREF to: 00565c76 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_asin_FUN_00565c76(float10 sine_value)
    FLD ST1                             ; 0055b8a4
    FMULP ST2                           ; 0055b8a6
    FLD1                                ; 0055b8a8
    FSUBRP ST2,ST0                      ; 0055b8aa
    FXCH                                ; 0055b8ac
    FSQRT                               ; 0055b8ae
    FXCH                                ; 0055b8b0
    FST float ptr [ECX]                 ; 0055b8b2
    FXCH                                ; 0055b8b4
    FSTP double ptr [ESP + 0x50]        ; 0055b8b6
    FCOMP double ptr [0x005982ce]       ; 0055b8ba | DOUBLE_005982ce
    FNSTSW AX                           ; 0055b8c0
    SAHF                                ; 0055b8c2
    JNC 0x0055b8cf                      ; 0055b8c3
        ;   XREF to: 0055b8cf (CONDITIONAL_JUMP)  ; LAB_0055b8cf
    FLD float ptr [ECX]                 ; 0055b8c5
    FADD float ptr [0x005982d6]         ; 0055b8c7 | DOUBLE_005982d6
    FSTP float ptr [ECX]                ; 0055b8cd
    FLDZ                                ; 0055b8cf
        ;   Label: LAB_0055b8cf
    FCOMP double ptr [ESP + 0x50]       ; 0055b8d1
    FNSTSW AX                           ; 0055b8d5
    SAHF                                ; 0055b8d7
    JNC 0x0055b77f                      ; 0055b8d8
        ;   XREF to: 0055b77f (CONDITIONAL_JUMP)  ; LAB_0055b77f
    FLD1                                ; 0055b8de
    FDIV double ptr [ESP + 0x50]        ; 0055b8e0
    FLD double ptr [ESP + 0x28]         ; 0055b8e4
    FLD float ptr [EDX + 0x28]          ; 0055b8e8
    FMUL ST1                            ; 0055b8eb
    FLD float ptr [EDX + 0x20]          ; 0055b8ed
    FMULP ST2                           ; 0055b8f0
    FXCH ST2                            ; 0055b8f2
    FSTP double ptr [ESP + 0x70]        ; 0055b8f4
    FMUL double ptr [ESP + 0x70]        ; 0055b8f8
    FXCH                                ; 0055b8fc
    FMUL double ptr [ESP + 0x70]        ; 0055b8fe
    FXCH                                ; 0055b902
    FSTP double ptr [ESP + 0x78]        ; 0055b904
    MOV EAX,dword ptr [ESP + 0x78]      ; 0055b908
    MOV dword ptr [ESP + 0x80],EAX      ; 0055b90c
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0055b913
    FSTP double ptr [ESP + 0x48]        ; 0055b917
    MOV dword ptr [ESP + 0x84],EAX      ; 0055b91b
    MOV EAX,dword ptr [ESP + 0x48]      ; 0055b922
    MOV dword ptr [ESP + 0x58],EAX      ; 0055b926
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0055b92a
    FLD double ptr [ESP + 0x78]         ; 0055b92e
    MOV dword ptr [ESP + 0x5c],EAX      ; 0055b932
    FCOMP double ptr [0x005982de]       ; 0055b936 | DOUBLE_005982de
    FNSTSW AX                           ; 0055b93c
    SAHF                                ; 0055b93e
    JNC 0x0055bb39                      ; 0055b93f
        ;   XREF to: 0055bb39 (CONDITIONAL_JUMP)  ; LAB_0055bb39
    FLD double ptr [ESP + 0x78]         ; 0055b945
    FCOMP double ptr [0x005982e6]       ; 0055b949 | DOUBLE_005982e6
    FNSTSW AX                           ; 0055b94f
    SAHF                                ; 0055b951
    JBE 0x0055bb39                      ; 0055b952
        ;   XREF to: 0055bb39 (CONDITIONAL_JUMP)  ; LAB_0055bb39
    FLD double ptr [ESP + 0x78]         ; 0055b958
    CALL crt_math.c_asin_FUN_00565c76   ; 0055b95c
        ;   XREF to: 00565c76 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_asin_FUN_00565c76(float10 sine_value)
    FLDZ                                ; 0055b961
    FXCH                                ; 0055b963
    FSTP float ptr [ESP + 0x98]         ; 0055b965
    FCOMP double ptr [ESP + 0x48]       ; 0055b96c
    FNSTSW AX                           ; 0055b970
    SAHF                                ; 0055b972
    JBE 0x0055b989                      ; 0055b973
        ;   XREF to: 0055b989 (CONDITIONAL_JUMP)  ; LAB_0055b989
    FLD float ptr [ESP + 0x98]          ; 0055b975
    FSUBR double ptr [0x005982ee]       ; 0055b97c | DOUBLE_005982ee
    FSTP float ptr [ESP + 0x98]         ; 0055b982
    FLD float ptr [ESP + 0x98]          ; 0055b989
        ;   Label: LAB_0055b989
    FCOMP double ptr [0x005982ce]       ; 0055b990 | DOUBLE_005982ce
    FNSTSW AX                           ; 0055b996
    SAHF                                ; 0055b998
    JNC 0x0055b9af                      ; 0055b999
        ;   XREF to: 0055b9af (CONDITIONAL_JUMP)  ; LAB_0055b9af
    FLD float ptr [ESP + 0x98]          ; 0055b99b
    FADD float ptr [0x005982d6]         ; 0055b9a2 | DOUBLE_005982d6
    FSTP float ptr [ESP + 0x98]         ; 0055b9a8
    FLD float ptr [ESP + 0x98]          ; 0055b9af
        ;   Label: LAB_0055b9af
    FCOMP double ptr [0x005982ee]       ; 0055b9b6 | DOUBLE_005982ee
    FNSTSW AX                           ; 0055b9bc
    SAHF                                ; 0055b9be
    JBE 0x0055b9d5                      ; 0055b9bf
        ;   XREF to: 0055b9d5 (CONDITIONAL_JUMP)  ; LAB_0055b9d5
    FLD float ptr [ESP + 0x98]          ; 0055b9c1
    FADD float ptr [0x005982f6]         ; 0055b9c8 | FLOAT_005982f6
    FSTP float ptr [ESP + 0x98]         ; 0055b9ce
    MOV EAX,dword ptr [ESP + 0x98]      ; 0055b9d5
        ;   Label: LAB_0055b9d5
    MOV dword ptr [ECX + 0x4],EAX       ; 0055b9dc
    FLD float ptr [EDX + 0x4]           ; 0055b9df
    FMUL double ptr [ESP + 0x20]        ; 0055b9e2
    FLD float ptr [EDX + 0x14]          ; 0055b9e6
    FMUL double ptr [ESP + 0x10]        ; 0055b9e9
    FXCH                                ; 0055b9ed
    FLD double ptr [ESP + 0x70]         ; 0055b9ef
    FXCH                                ; 0055b9f3
    FMUL ST1                            ; 0055b9f5
    FXCH ST2                            ; 0055b9f7
    FMULP                               ; 0055b9f9
    FXCH                                ; 0055b9fb
    FSTP double ptr [ESP]               ; 0055b9fd
    MOV EAX,dword ptr [ESP]             ; 0055ba00
    MOV dword ptr [ESP + 0x88],EAX      ; 0055ba03
    MOV EAX,dword ptr [ESP + 0x4]       ; 0055ba0a
    FSTP double ptr [ESP + 0x38]        ; 0055ba0e
    MOV dword ptr [ESP + 0x8c],EAX      ; 0055ba12
    MOV EAX,dword ptr [ESP + 0x38]      ; 0055ba19
    MOV dword ptr [ESP + 0x60],EAX      ; 0055ba1d
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0055ba21
    FLD double ptr [ESP]                ; 0055ba25
    MOV dword ptr [ESP + 0x64],EAX      ; 0055ba28
    FCOMP double ptr [0x005982de]       ; 0055ba2c | DOUBLE_005982de
    FNSTSW AX                           ; 0055ba32
    SAHF                                ; 0055ba34
    JNC 0x0055bb9a                      ; 0055ba35
        ;   XREF to: 0055bb9a (CONDITIONAL_JUMP)  ; LAB_0055bb9a
    FLD double ptr [ESP]                ; 0055ba3b
    FCOMP double ptr [0x005982e6]       ; 0055ba3e | DOUBLE_005982e6
    FNSTSW AX                           ; 0055ba44
    SAHF                                ; 0055ba46
    JBE 0x0055bb9a                      ; 0055ba47
        ;   XREF to: 0055bb9a (CONDITIONAL_JUMP)  ; LAB_0055bb9a
    FLD double ptr [ESP]                ; 0055ba4d
    CALL crt_math.c_asin_FUN_00565c76   ; 0055ba50
        ;   XREF to: 00565c76 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_asin_FUN_00565c76(float10 sine_value)
    FLDZ                                ; 0055ba55
    FXCH                                ; 0055ba57
    FSTP float ptr [ESP + 0x90]         ; 0055ba59
    FCOMP double ptr [ESP + 0x38]       ; 0055ba60
    FNSTSW AX                           ; 0055ba64
    SAHF                                ; 0055ba66
    JBE 0x0055ba7d                      ; 0055ba67
        ;   XREF to: 0055ba7d (CONDITIONAL_JUMP)  ; LAB_0055ba7d
    FLD float ptr [ESP + 0x90]          ; 0055ba69
    FSUBR double ptr [0x005982ee]       ; 0055ba70 | DOUBLE_005982ee
    FSTP float ptr [ESP + 0x90]         ; 0055ba76
    FLD float ptr [ESP + 0x90]          ; 0055ba7d
        ;   Label: LAB_0055ba7d
    FCOMP double ptr [0x005982ce]       ; 0055ba84 | DOUBLE_005982ce
    FNSTSW AX                           ; 0055ba8a
    SAHF                                ; 0055ba8c
    JNC 0x0055baa3                      ; 0055ba8d
        ;   XREF to: 0055baa3 (CONDITIONAL_JUMP)  ; LAB_0055baa3
    FLD float ptr [ESP + 0x90]          ; 0055ba8f
    FADD float ptr [0x005982d6]         ; 0055ba96 | DOUBLE_005982d6
    FSTP float ptr [ESP + 0x90]         ; 0055ba9c
    FLD float ptr [ESP + 0x90]          ; 0055baa3
        ;   Label: LAB_0055baa3
    FCOMP double ptr [0x005982ee]       ; 0055baaa | DOUBLE_005982ee
    FNSTSW AX                           ; 0055bab0
    SAHF                                ; 0055bab2
    JBE 0x0055bac9                      ; 0055bab3
        ;   XREF to: 0055bac9 (CONDITIONAL_JUMP)  ; LAB_0055bac9
    FLD float ptr [ESP + 0x90]          ; 0055bab5
    FADD float ptr [0x005982f6]         ; 0055babc | FLOAT_005982f6
    FSTP float ptr [ESP + 0x90]         ; 0055bac2
    MOV EAX,dword ptr [ESP + 0x90]      ; 0055bac9
        ;   Label: LAB_0055bac9
    MOV dword ptr [ECX + 0x8],EAX       ; 0055bad0
    MOV EAX,ECX                         ; 0055bad3
    MOV ESP,EBP                         ; 0055bad5
    POP EBP                             ; 0055bad7
    POP EDI                             ; 0055bad8
    POP EBX                             ; 0055bad9
    RET                                 ; 0055bada
    FLD double ptr [ESP + 0x68]         ; 0055badb
        ;   Label: LAB_0055badb
    FCOMP double ptr [0x005982c6]       ; 0055badf | DOUBLE_005982c6
    FNSTSW AX                           ; 0055bae5
    SAHF                                ; 0055bae7
    JA 0x0055bb11                       ; 0055bae8
        ;   XREF to: 0055bb11 (CONDITIONAL_JUMP)  ; LAB_0055bb11
    MOV dword ptr [ESP + 0x94],0x40490fdb ; 0055baea
    FLDZ                                ; 0055baf5
        ;   Label: LAB_0055baf5
    FCOMP double ptr [ESP + 0x30]       ; 0055baf7
    FNSTSW AX                           ; 0055bafb
    SAHF                                ; 0055bafd
    JBE 0x0055b816                      ; 0055bafe
        ;   XREF to: 0055b816 (CONDITIONAL_JUMP)  ; LAB_0055b816
    XOR byte ptr [ESP + 0x97],0x80      ; 0055bb04
    JMP 0x0055b816                      ; 0055bb0c
        ;   XREF to: 0055b816 (UNCONDITIONAL_JUMP)  ; LAB_0055b816
    FLD1                                ; 0055bb11
        ;   Label: LAB_0055bb11
    FCOMP double ptr [ESP + 0x68]       ; 0055bb13
    FNSTSW AX                           ; 0055bb17
    SAHF                                ; 0055bb19
    JA 0x0055bb27                       ; 0055bb1a
        ;   XREF to: 0055bb27 (CONDITIONAL_JUMP)  ; LAB_0055bb27
    XOR EDX,EDX                         ; 0055bb1c
    MOV dword ptr [ESP + 0x94],EDX      ; 0055bb1e
    JMP 0x0055baf5                      ; 0055bb25
        ;   XREF to: 0055baf5 (UNCONDITIONAL_JUMP)  ; LAB_0055baf5
    FLD double ptr [ESP + 0x68]         ; 0055bb27
        ;   Label: LAB_0055bb27
    CALL crt_math.c_acos_FUN_00565ca4   ; 0055bb2b
        ;   XREF to: 00565ca4 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00565ca4(double x)
    FSTP float ptr [ESP + 0x94]         ; 0055bb30
    JMP 0x0055baf5                      ; 0055bb37
        ;   XREF to: 0055baf5 (UNCONDITIONAL_JUMP)  ; LAB_0055baf5
    FLD double ptr [ESP + 0x58]         ; 0055bb39
        ;   Label: LAB_0055bb39
    FCOMP double ptr [0x005982c6]       ; 0055bb3d | DOUBLE_005982c6
    FNSTSW AX                           ; 0055bb43
    SAHF                                ; 0055bb45
    JA 0x0055bb72                       ; 0055bb46
        ;   XREF to: 0055bb72 (CONDITIONAL_JUMP)  ; LAB_0055bb72
    MOV dword ptr [ESP + 0x98],0x40490fdb ; 0055bb48
    FLDZ                                ; 0055bb53
        ;   Label: LAB_0055bb53
    FCOMP double ptr [ESP + 0x80]       ; 0055bb55
    FNSTSW AX                           ; 0055bb5c
    SAHF                                ; 0055bb5e
    JBE 0x0055b989                      ; 0055bb5f
        ;   XREF to: 0055b989 (CONDITIONAL_JUMP)  ; LAB_0055b989
    XOR byte ptr [ESP + 0x9b],0x80      ; 0055bb65
    JMP 0x0055b989                      ; 0055bb6d
        ;   XREF to: 0055b989 (UNCONDITIONAL_JUMP)  ; LAB_0055b989
    FLD1                                ; 0055bb72
        ;   Label: LAB_0055bb72
    FCOMP double ptr [ESP + 0x58]       ; 0055bb74
    FNSTSW AX                           ; 0055bb78
    SAHF                                ; 0055bb7a
    JA 0x0055bb88                       ; 0055bb7b
        ;   XREF to: 0055bb88 (CONDITIONAL_JUMP)  ; LAB_0055bb88
    XOR EBX,EBX                         ; 0055bb7d
    MOV dword ptr [ESP + 0x98],EBX      ; 0055bb7f
    JMP 0x0055bb53                      ; 0055bb86
        ;   XREF to: 0055bb53 (UNCONDITIONAL_JUMP)  ; LAB_0055bb53
    FLD double ptr [ESP + 0x58]         ; 0055bb88
        ;   Label: LAB_0055bb88
    CALL crt_math.c_acos_FUN_00565ca4   ; 0055bb8c
        ;   XREF to: 00565ca4 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00565ca4(double x)
    FSTP float ptr [ESP + 0x98]         ; 0055bb91
    JMP 0x0055bb53                      ; 0055bb98
        ;   XREF to: 0055bb53 (UNCONDITIONAL_JUMP)  ; LAB_0055bb53
    FLD double ptr [ESP + 0x60]         ; 0055bb9a
        ;   Label: LAB_0055bb9a
    FCOMP double ptr [0x005982c6]       ; 0055bb9e | DOUBLE_005982c6
    FNSTSW AX                           ; 0055bba4
    SAHF                                ; 0055bba6
    JA 0x0055bbd3                       ; 0055bba7
        ;   XREF to: 0055bbd3 (CONDITIONAL_JUMP)  ; LAB_0055bbd3
    MOV dword ptr [ESP + 0x90],0x40490fdb ; 0055bba9
    FLDZ                                ; 0055bbb4
        ;   Label: LAB_0055bbb4
    FCOMP double ptr [ESP + 0x88]       ; 0055bbb6
    FNSTSW AX                           ; 0055bbbd
    SAHF                                ; 0055bbbf
    JBE 0x0055ba7d                      ; 0055bbc0
        ;   XREF to: 0055ba7d (CONDITIONAL_JUMP)  ; LAB_0055ba7d
    XOR byte ptr [ESP + 0x93],0x80      ; 0055bbc6
    JMP 0x0055ba7d                      ; 0055bbce
        ;   XREF to: 0055ba7d (UNCONDITIONAL_JUMP)  ; LAB_0055ba7d
    FLD1                                ; 0055bbd3
        ;   Label: LAB_0055bbd3
    FCOMP double ptr [ESP + 0x60]       ; 0055bbd5
    FNSTSW AX                           ; 0055bbd9
    SAHF                                ; 0055bbdb
    JA 0x0055bbe9                       ; 0055bbdc
        ;   XREF to: 0055bbe9 (CONDITIONAL_JUMP)  ; LAB_0055bbe9
    XOR EDI,EDI                         ; 0055bbde
    MOV dword ptr [ESP + 0x90],EDI      ; 0055bbe0
    JMP 0x0055bbb4                      ; 0055bbe7
        ;   XREF to: 0055bbb4 (UNCONDITIONAL_JUMP)  ; LAB_0055bbb4
    FLD double ptr [ESP + 0x60]         ; 0055bbe9
        ;   Label: LAB_0055bbe9
    CALL crt_math.c_acos_FUN_00565ca4   ; 0055bbed
        ;   XREF to: 00565ca4 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00565ca4(double x)
    FSTP float ptr [ESP + 0x90]         ; 0055bbf2
    JMP 0x0055bbb4                      ; 0055bbf9
        ;   XREF to: 0055bbb4 (UNCONDITIONAL_JUMP)  ; LAB_0055bbb4

