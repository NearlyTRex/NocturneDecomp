; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_xform_cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f *matrix_in,CVector3f *euler_out)
;
; Parameters:
; CMatrix3x3f *    Stack[0x4]:4   matrix_in
; CVector3f *      Stack[0x8]:4   euler_out
; Local Variables:
; undefined8       Stack[-0xb0]:8  local_b0
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
; XREF[26]:
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_0041a630 at 0041a9eb
;   core_boxactor.cpp_CLightActor_process_FUN_00422a50 at 00422c34
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30 at 0042beb6
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042a420 at 0042a4b6
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_0042d090 at 0042d1f4
;   core_course.cpp_CCourse_evaluate_FUN_00442710 at 0044276b
;   core_fire.cpp_CBulletHole_init_FUN_004bf7f0 at 004bf99b
;   core_gabriela.cpp_CGabriella_getCarryObjToBodyXForm_FUN_004d7120 at 004d743f
;   core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004d5550 at 004d5790
;   core_ladder.cpp_CLadder_cacheRelativePosition_FUN_00502b80 at 00502c60
;   ... and 16 more
;
; Referenced Globals:
;   double g_MatrixToEulerNegativeOne = -1
;   double g_MatrixToEulerNegativePi = -3.14159265359000
;   float g_MatrixToEulerTwoPi = 6.283185
;   double g_MatrixToEulerGimbalLockThreshold = 0.707000000000000
;   double g_MatrixToEulerNegativeGimbalThreshold = -0.707000000000000
;   double g_MatrixToEulerPi = 3.14159265359000
;   float g_MatrixToEulerNegativeTwoPi = -6.283185
;
; Called Functions:
;   crt_math.c_acos_FUN_00600162
;   crt_math.c_asin_FUN_00600b94
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f5690
        ;   Label: core_xform.cpp_matrixToEulerAngles_FUN_005f5690
    PUSH EDI                            ; 005f5691
    PUSH EBP                            ; 005f5692
    MOV EBP,ESP                         ; 005f5693
    SUB ESP,0x9c                        ; 005f5695
    AND ESP,0xfffffff8                  ; 005f569b
    MOV EDX,dword ptr [EBP + 0x10]      ; 005f569e
    MOV ECX,dword ptr [EBP + 0x14]      ; 005f56a1
    FLD float ptr [EDX + 0x4]           ; 005f56a4
    FMUL ST0                            ; 005f56a7
    FLD float ptr [EDX]                 ; 005f56a9
    FMUL ST0                            ; 005f56ab
    FADDP                               ; 005f56ad
    FLD float ptr [EDX + 0x8]           ; 005f56af
    FMUL ST0                            ; 005f56b2
    FADDP                               ; 005f56b4
    FSQRT                               ; 005f56b6
    FLDZ                                ; 005f56b8
    FXCH                                ; 005f56ba
    FSTP double ptr [ESP + 0x10]        ; 005f56bc
    FCOMP double ptr [ESP + 0x10]       ; 005f56c0
    FNSTSW AX                           ; 005f56c4
    SAHF                                ; 005f56c6
    JC 0x005f5844                       ; 005f56c7
        ;   XREF to: 005f5844 (CONDITIONAL_JUMP)  ; LAB_005f5844
    FLD float ptr [EDX + 0x10]          ; 005f56cd
        ;   Label: LAB_005f56cd
    FMUL ST0                            ; 005f56d0
    FLD float ptr [EDX + 0x14]          ; 005f56d2
    FMUL ST0                            ; 005f56d5
    FADDP                               ; 005f56d7
    FLD float ptr [EDX + 0x18]          ; 005f56d9
    FMUL ST0                            ; 005f56dc
    FADDP                               ; 005f56de
    FSQRT                               ; 005f56e0
    FLDZ                                ; 005f56e2
    FXCH                                ; 005f56e4
    FSTP double ptr [ESP + 0x28]        ; 005f56e6
    FCOMP double ptr [ESP + 0x28]       ; 005f56ea
    FNSTSW AX                           ; 005f56ee
    SAHF                                ; 005f56f0
    JNC 0x005f56fd                      ; 005f56f1
        ;   XREF to: 005f56fd (CONDITIONAL_JUMP)  ; LAB_005f56fd
    FLD1                                ; 005f56f3
    FDIV double ptr [ESP + 0x28]        ; 005f56f5
    FSTP double ptr [ESP + 0x28]        ; 005f56f9
    FLD float ptr [EDX + 0x20]          ; 005f56fd
        ;   Label: LAB_005f56fd
    FMUL ST0                            ; 005f5700
    FLD float ptr [EDX + 0x24]          ; 005f5702
    FMUL ST0                            ; 005f5705
    FADDP                               ; 005f5707
    FLD float ptr [EDX + 0x28]          ; 005f5709
    FMUL ST0                            ; 005f570c
    FADDP                               ; 005f570e
    FSQRT                               ; 005f5710
    FLDZ                                ; 005f5712
    FXCH                                ; 005f5714
    FSTP double ptr [ESP + 0x20]        ; 005f5716
    FCOMP double ptr [ESP + 0x20]       ; 005f571a
    FNSTSW AX                           ; 005f571e
    SAHF                                ; 005f5720
    JNC 0x005f572d                      ; 005f5721
        ;   XREF to: 005f572d (CONDITIONAL_JUMP)  ; LAB_005f572d
    FLD1                                ; 005f5723
    FDIV double ptr [ESP + 0x20]        ; 005f5725
    FSTP double ptr [ESP + 0x20]        ; 005f5729
    FLD float ptr [EDX + 0x18]          ; 005f572d
        ;   Label: LAB_005f572d
    FCHS                                ; 005f5730
    FMUL double ptr [ESP + 0x28]        ; 005f5732
    FST double ptr [ESP + 0x18]         ; 005f5736
    FCOMP double ptr [0x0065831d]       ; 005f573a | g_MatrixToEulerNegativeOne
    FNSTSW AX                           ; 005f5740
    SAHF                                ; 005f5742
    JA 0x005f5853                       ; 005f5743
        ;   XREF to: 005f5853 (CONDITIONAL_JUMP)  ; LAB_005f5853
    MOV dword ptr [ECX],0xbfc90fdb      ; 005f5749
    MOV dword ptr [ECX + 0x8],0x0       ; 005f574f
        ;   Label: LAB_005f574f
    FLD float ptr [EDX + 0x20]          ; 005f5756
    FCHS                                ; 005f5759
    FMUL double ptr [ESP + 0x20]        ; 005f575b
    FLD float ptr [EDX]                 ; 005f575f
    FMUL double ptr [ESP + 0x10]        ; 005f5761
    FXCH                                ; 005f5765
    FSTP double ptr [ESP + 0x8]         ; 005f5767
    MOV EAX,dword ptr [ESP + 0x8]       ; 005f576b
    MOV dword ptr [ESP + 0x30],EAX      ; 005f576f
    MOV EAX,dword ptr [ESP + 0xc]       ; 005f5773
    FSTP double ptr [ESP + 0x40]        ; 005f5777
    MOV dword ptr [ESP + 0x34],EAX      ; 005f577b
    MOV EAX,dword ptr [ESP + 0x40]      ; 005f577f
    MOV dword ptr [ESP + 0x68],EAX      ; 005f5783
    MOV EAX,dword ptr [ESP + 0x44]      ; 005f5787
    FLD double ptr [ESP + 0x8]          ; 005f578b
    MOV dword ptr [ESP + 0x6c],EAX      ; 005f578f
    FCOMP double ptr [0x00658335]       ; 005f5793 | g_MatrixToEulerGimbalLockThreshold
    FNSTSW AX                           ; 005f5799
    SAHF                                ; 005f579b
    JNC 0x005f5aab                      ; 005f579c
        ;   XREF to: 005f5aab (CONDITIONAL_JUMP)  ; LAB_005f5aab
    FLD double ptr [ESP + 0x8]          ; 005f57a2
    FCOMP double ptr [0x0065833d]       ; 005f57a6 | g_MatrixToEulerNegativeGimbalThreshold
    FNSTSW AX                           ; 005f57ac
    SAHF                                ; 005f57ae
    JBE 0x005f5aab                      ; 005f57af
        ;   XREF to: 005f5aab (CONDITIONAL_JUMP)  ; LAB_005f5aab
    FLD double ptr [ESP + 0x8]          ; 005f57b5
    CALL crt_math.c_asin_FUN_00600b94   ; 005f57b9
        ;   XREF to: 00600b94 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_asin_FUN_00600b94(float10 sine_value)
    FLDZ                                ; 005f57be
    FXCH                                ; 005f57c0
    FSTP float ptr [ESP + 0x94]         ; 005f57c2
    FCOMP double ptr [ESP + 0x40]       ; 005f57c9
    FNSTSW AX                           ; 005f57cd
    SAHF                                ; 005f57cf
    JBE 0x005f57e6                      ; 005f57d0
        ;   XREF to: 005f57e6 (CONDITIONAL_JUMP)  ; LAB_005f57e6
    FLD float ptr [ESP + 0x94]          ; 005f57d2
    FSUBR double ptr [0x00658345]       ; 005f57d9 | g_MatrixToEulerPi
    FSTP float ptr [ESP + 0x94]         ; 005f57df
    FLD float ptr [ESP + 0x94]          ; 005f57e6
        ;   Label: LAB_005f57e6
    FCOMP double ptr [0x00658325]       ; 005f57ed | g_MatrixToEulerNegativePi
    FNSTSW AX                           ; 005f57f3
    SAHF                                ; 005f57f5
    JNC 0x005f580c                      ; 005f57f6
        ;   XREF to: 005f580c (CONDITIONAL_JUMP)  ; LAB_005f580c
    FLD float ptr [ESP + 0x94]          ; 005f57f8
    FADD float ptr [0x0065832d]         ; 005f57ff | g_MatrixToEulerTwoPi
    FSTP float ptr [ESP + 0x94]         ; 005f5805
    FLD float ptr [ESP + 0x94]          ; 005f580c
        ;   Label: LAB_005f580c
    FCOMP double ptr [0x00658345]       ; 005f5813 | g_MatrixToEulerPi
    FNSTSW AX                           ; 005f5819
    SAHF                                ; 005f581b
    JBE 0x005f5832                      ; 005f581c
        ;   XREF to: 005f5832 (CONDITIONAL_JUMP)  ; LAB_005f5832
    FLD float ptr [ESP + 0x94]          ; 005f581e
    FADD float ptr [0x0065834d]         ; 005f5825 | g_MatrixToEulerNegativeTwoPi
    FSTP float ptr [ESP + 0x94]         ; 005f582b
    MOV EAX,dword ptr [ESP + 0x94]      ; 005f5832
        ;   Label: LAB_005f5832
    MOV dword ptr [ECX + 0x4],EAX       ; 005f5839
    MOV EAX,ECX                         ; 005f583c
    MOV ESP,EBP                         ; 005f583e
    POP EBP                             ; 005f5840
    POP EDI                             ; 005f5841
    POP EBX                             ; 005f5842
    RET                                 ; 005f5843
    FLD1                                ; 005f5844
        ;   Label: LAB_005f5844
    FDIV double ptr [ESP + 0x10]        ; 005f5846
    FSTP double ptr [ESP + 0x10]        ; 005f584a
    JMP 0x005f56cd                      ; 005f584e
        ;   XREF to: 005f56cd (UNCONDITIONAL_JUMP)  ; LAB_005f56cd
    FLD1                                ; 005f5853
        ;   Label: LAB_005f5853
    FCOMP double ptr [ESP + 0x18]       ; 005f5855
    FNSTSW AX                           ; 005f5859
    SAHF                                ; 005f585b
    JA 0x005f5869                       ; 005f585c
        ;   XREF to: 005f5869 (CONDITIONAL_JUMP)  ; LAB_005f5869
    MOV dword ptr [ECX],0x3fc90fdb      ; 005f585e
    JMP 0x005f574f                      ; 005f5864
        ;   XREF to: 005f574f (UNCONDITIONAL_JUMP)  ; LAB_005f574f
    FLD double ptr [ESP + 0x18]         ; 005f5869
        ;   Label: LAB_005f5869
    FLD ST0                             ; 005f586d
    CALL crt_math.c_asin_FUN_00600b94   ; 005f586f
        ;   XREF to: 00600b94 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_asin_FUN_00600b94(float10 sine_value)
    FLD ST1                             ; 005f5874
    FMULP ST2                           ; 005f5876
    FLD1                                ; 005f5878
    FSUBRP ST2,ST0                      ; 005f587a
    FXCH                                ; 005f587c
    FSQRT                               ; 005f587e
    FXCH                                ; 005f5880
    FST float ptr [ECX]                 ; 005f5882
    FXCH                                ; 005f5884
    FSTP double ptr [ESP + 0x50]        ; 005f5886
    FCOMP double ptr [0x00658325]       ; 005f588a | g_MatrixToEulerNegativePi
    FNSTSW AX                           ; 005f5890
    SAHF                                ; 005f5892
    JNC 0x005f589f                      ; 005f5893
        ;   XREF to: 005f589f (CONDITIONAL_JUMP)  ; LAB_005f589f
    FLD float ptr [ECX]                 ; 005f5895
    FADD float ptr [0x0065832d]         ; 005f5897 | g_MatrixToEulerTwoPi
    FSTP float ptr [ECX]                ; 005f589d
    FLDZ                                ; 005f589f
        ;   Label: LAB_005f589f
    FCOMP double ptr [ESP + 0x50]       ; 005f58a1
    FNSTSW AX                           ; 005f58a5
    SAHF                                ; 005f58a7
    JNC 0x005f574f                      ; 005f58a8
        ;   XREF to: 005f574f (CONDITIONAL_JUMP)  ; LAB_005f574f
    FLD1                                ; 005f58ae
    FDIV double ptr [ESP + 0x50]        ; 005f58b0
    FLD float ptr [EDX + 0x28]          ; 005f58b4
    FMUL double ptr [ESP + 0x20]        ; 005f58b7
    FLD float ptr [EDX + 0x8]           ; 005f58bb
    FMUL double ptr [ESP + 0x10]        ; 005f58be
    FXCH ST2                            ; 005f58c2
    FSTP double ptr [ESP + 0x70]        ; 005f58c4
    FXCH                                ; 005f58c8
    FMUL double ptr [ESP + 0x70]        ; 005f58ca
    FXCH                                ; 005f58ce
    FMUL double ptr [ESP + 0x70]        ; 005f58d0
    FXCH                                ; 005f58d4
    FSTP double ptr [ESP + 0x78]        ; 005f58d6
    MOV EAX,dword ptr [ESP + 0x78]      ; 005f58da
    MOV dword ptr [ESP + 0x80],EAX      ; 005f58de
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005f58e5
    FSTP double ptr [ESP + 0x48]        ; 005f58e9
    MOV dword ptr [ESP + 0x84],EAX      ; 005f58ed
    MOV EAX,dword ptr [ESP + 0x48]      ; 005f58f4
    MOV dword ptr [ESP + 0x58],EAX      ; 005f58f8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005f58fc
    FLD double ptr [ESP + 0x78]         ; 005f5900
    MOV dword ptr [ESP + 0x5c],EAX      ; 005f5904
    FCOMP double ptr [0x00658335]       ; 005f5908 | g_MatrixToEulerGimbalLockThreshold
    FNSTSW AX                           ; 005f590e
    SAHF                                ; 005f5910
    JNC 0x005f5b09                      ; 005f5911
        ;   XREF to: 005f5b09 (CONDITIONAL_JUMP)  ; LAB_005f5b09
    FLD double ptr [ESP + 0x78]         ; 005f5917
    FCOMP double ptr [0x0065833d]       ; 005f591b | g_MatrixToEulerNegativeGimbalThreshold
    FNSTSW AX                           ; 005f5921
    SAHF                                ; 005f5923
    JBE 0x005f5b09                      ; 005f5924
        ;   XREF to: 005f5b09 (CONDITIONAL_JUMP)  ; LAB_005f5b09
    FLD double ptr [ESP + 0x78]         ; 005f592a
    CALL crt_math.c_asin_FUN_00600b94   ; 005f592e
        ;   XREF to: 00600b94 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_asin_FUN_00600b94(float10 sine_value)
    FLDZ                                ; 005f5933
    FXCH                                ; 005f5935
    FSTP float ptr [ESP + 0x98]         ; 005f5937
    FCOMP double ptr [ESP + 0x48]       ; 005f593e
    FNSTSW AX                           ; 005f5942
    SAHF                                ; 005f5944
    JBE 0x005f595b                      ; 005f5945
        ;   XREF to: 005f595b (CONDITIONAL_JUMP)  ; LAB_005f595b
    FLD float ptr [ESP + 0x98]          ; 005f5947
    FSUBR double ptr [0x00658345]       ; 005f594e | g_MatrixToEulerPi
    FSTP float ptr [ESP + 0x98]         ; 005f5954
    FLD float ptr [ESP + 0x98]          ; 005f595b
        ;   Label: LAB_005f595b
    FCOMP double ptr [0x00658325]       ; 005f5962 | g_MatrixToEulerNegativePi
    FNSTSW AX                           ; 005f5968
    SAHF                                ; 005f596a
    JNC 0x005f5981                      ; 005f596b
        ;   XREF to: 005f5981 (CONDITIONAL_JUMP)  ; LAB_005f5981
    FLD float ptr [ESP + 0x98]          ; 005f596d
    FADD float ptr [0x0065832d]         ; 005f5974 | g_MatrixToEulerTwoPi
    FSTP float ptr [ESP + 0x98]         ; 005f597a
    FLD float ptr [ESP + 0x98]          ; 005f5981
        ;   Label: LAB_005f5981
    FCOMP double ptr [0x00658345]       ; 005f5988 | g_MatrixToEulerPi
    FNSTSW AX                           ; 005f598e
    SAHF                                ; 005f5990
    JBE 0x005f59a7                      ; 005f5991
        ;   XREF to: 005f59a7 (CONDITIONAL_JUMP)  ; LAB_005f59a7
    FLD float ptr [ESP + 0x98]          ; 005f5993
    FADD float ptr [0x0065834d]         ; 005f599a | g_MatrixToEulerNegativeTwoPi
    FSTP float ptr [ESP + 0x98]         ; 005f59a0
    MOV EAX,dword ptr [ESP + 0x98]      ; 005f59a7
        ;   Label: LAB_005f59a7
    MOV dword ptr [ECX + 0x4],EAX       ; 005f59ae
    FLD double ptr [ESP + 0x28]         ; 005f59b1
    FLD float ptr [EDX + 0x10]          ; 005f59b5
    FMUL ST1                            ; 005f59b8
    FLD float ptr [EDX + 0x14]          ; 005f59ba
    FMULP ST2                           ; 005f59bd
    FLD double ptr [ESP + 0x70]         ; 005f59bf
    FXCH                                ; 005f59c3
    FMUL ST1                            ; 005f59c5
    FXCH ST2                            ; 005f59c7
    FMULP                               ; 005f59c9
    FXCH                                ; 005f59cb
    FSTP double ptr [ESP]               ; 005f59cd
    MOV EAX,dword ptr [ESP]             ; 005f59d0
    MOV dword ptr [ESP + 0x88],EAX      ; 005f59d3
    MOV EAX,dword ptr [ESP + 0x4]       ; 005f59da
    FSTP double ptr [ESP + 0x38]        ; 005f59de
    MOV dword ptr [ESP + 0x8c],EAX      ; 005f59e2
    MOV EAX,dword ptr [ESP + 0x38]      ; 005f59e9
    MOV dword ptr [ESP + 0x60],EAX      ; 005f59ed
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005f59f1
    FLD double ptr [ESP]                ; 005f59f5
    MOV dword ptr [ESP + 0x64],EAX      ; 005f59f8
    FCOMP double ptr [0x00658335]       ; 005f59fc | g_MatrixToEulerGimbalLockThreshold
    FNSTSW AX                           ; 005f5a02
    SAHF                                ; 005f5a04
    JNC 0x005f5b6a                      ; 005f5a05
        ;   XREF to: 005f5b6a (CONDITIONAL_JUMP)  ; LAB_005f5b6a
    FLD double ptr [ESP]                ; 005f5a0b
    FCOMP double ptr [0x0065833d]       ; 005f5a0e | g_MatrixToEulerNegativeGimbalThreshold
    FNSTSW AX                           ; 005f5a14
    SAHF                                ; 005f5a16
    JBE 0x005f5b6a                      ; 005f5a17
        ;   XREF to: 005f5b6a (CONDITIONAL_JUMP)  ; LAB_005f5b6a
    FLD double ptr [ESP]                ; 005f5a1d
    CALL crt_math.c_asin_FUN_00600b94   ; 005f5a20
        ;   XREF to: 00600b94 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_asin_FUN_00600b94(float10 sine_value)
    FLDZ                                ; 005f5a25
    FXCH                                ; 005f5a27
    FSTP float ptr [ESP + 0x90]         ; 005f5a29
    FCOMP double ptr [ESP + 0x38]       ; 005f5a30
    FNSTSW AX                           ; 005f5a34
    SAHF                                ; 005f5a36
    JBE 0x005f5a4d                      ; 005f5a37
        ;   XREF to: 005f5a4d (CONDITIONAL_JUMP)  ; LAB_005f5a4d
    FLD float ptr [ESP + 0x90]          ; 005f5a39
    FSUBR double ptr [0x00658345]       ; 005f5a40 | g_MatrixToEulerPi
    FSTP float ptr [ESP + 0x90]         ; 005f5a46
    FLD float ptr [ESP + 0x90]          ; 005f5a4d
        ;   Label: LAB_005f5a4d
    FCOMP double ptr [0x00658325]       ; 005f5a54 | g_MatrixToEulerNegativePi
    FNSTSW AX                           ; 005f5a5a
    SAHF                                ; 005f5a5c
    JNC 0x005f5a73                      ; 005f5a5d
        ;   XREF to: 005f5a73 (CONDITIONAL_JUMP)  ; LAB_005f5a73
    FLD float ptr [ESP + 0x90]          ; 005f5a5f
    FADD float ptr [0x0065832d]         ; 005f5a66 | g_MatrixToEulerTwoPi
    FSTP float ptr [ESP + 0x90]         ; 005f5a6c
    FLD float ptr [ESP + 0x90]          ; 005f5a73
        ;   Label: LAB_005f5a73
    FCOMP double ptr [0x00658345]       ; 005f5a7a | g_MatrixToEulerPi
    FNSTSW AX                           ; 005f5a80
    SAHF                                ; 005f5a82
    JBE 0x005f5a99                      ; 005f5a83
        ;   XREF to: 005f5a99 (CONDITIONAL_JUMP)  ; LAB_005f5a99
    FLD float ptr [ESP + 0x90]          ; 005f5a85
    FADD float ptr [0x0065834d]         ; 005f5a8c | g_MatrixToEulerNegativeTwoPi
    FSTP float ptr [ESP + 0x90]         ; 005f5a92
    MOV EAX,dword ptr [ESP + 0x90]      ; 005f5a99
        ;   Label: LAB_005f5a99
    MOV dword ptr [ECX + 0x8],EAX       ; 005f5aa0
    MOV EAX,ECX                         ; 005f5aa3
    MOV ESP,EBP                         ; 005f5aa5
    POP EBP                             ; 005f5aa7
    POP EDI                             ; 005f5aa8
    POP EBX                             ; 005f5aa9
    RET                                 ; 005f5aaa
    FLD double ptr [ESP + 0x68]         ; 005f5aab
        ;   Label: LAB_005f5aab
    FCOMP double ptr [0x0065831d]       ; 005f5aaf | g_MatrixToEulerNegativeOne
    FNSTSW AX                           ; 005f5ab5
    SAHF                                ; 005f5ab7
    JA 0x005f5ae1                       ; 005f5ab8
        ;   XREF to: 005f5ae1 (CONDITIONAL_JUMP)  ; LAB_005f5ae1
    MOV dword ptr [ESP + 0x94],0x40490fdb ; 005f5aba
    FLDZ                                ; 005f5ac5
        ;   Label: LAB_005f5ac5
    FCOMP double ptr [ESP + 0x30]       ; 005f5ac7
    FNSTSW AX                           ; 005f5acb
    SAHF                                ; 005f5acd
    JBE 0x005f57e6                      ; 005f5ace
        ;   XREF to: 005f57e6 (CONDITIONAL_JUMP)  ; LAB_005f57e6
    XOR byte ptr [ESP + 0x97],0x80      ; 005f5ad4
    JMP 0x005f57e6                      ; 005f5adc
        ;   XREF to: 005f57e6 (UNCONDITIONAL_JUMP)  ; LAB_005f57e6
    FLD1                                ; 005f5ae1
        ;   Label: LAB_005f5ae1
    FCOMP double ptr [ESP + 0x68]       ; 005f5ae3
    FNSTSW AX                           ; 005f5ae7
    SAHF                                ; 005f5ae9
    JA 0x005f5af7                       ; 005f5aea
        ;   XREF to: 005f5af7 (CONDITIONAL_JUMP)  ; LAB_005f5af7
    XOR EDX,EDX                         ; 005f5aec
    MOV dword ptr [ESP + 0x94],EDX      ; 005f5aee
    JMP 0x005f5ac5                      ; 005f5af5
        ;   XREF to: 005f5ac5 (UNCONDITIONAL_JUMP)  ; LAB_005f5ac5
    FLD double ptr [ESP + 0x68]         ; 005f5af7
        ;   Label: LAB_005f5af7
    CALL crt_math.c_acos_FUN_00600162   ; 005f5afb
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00600162(double x)
    FSTP float ptr [ESP + 0x94]         ; 005f5b00
    JMP 0x005f5ac5                      ; 005f5b07
        ;   XREF to: 005f5ac5 (UNCONDITIONAL_JUMP)  ; LAB_005f5ac5
    FLD double ptr [ESP + 0x58]         ; 005f5b09
        ;   Label: LAB_005f5b09
    FCOMP double ptr [0x0065831d]       ; 005f5b0d | g_MatrixToEulerNegativeOne
    FNSTSW AX                           ; 005f5b13
    SAHF                                ; 005f5b15
    JA 0x005f5b42                       ; 005f5b16
        ;   XREF to: 005f5b42 (CONDITIONAL_JUMP)  ; LAB_005f5b42
    MOV dword ptr [ESP + 0x98],0x40490fdb ; 005f5b18
    FLDZ                                ; 005f5b23
        ;   Label: LAB_005f5b23
    FCOMP double ptr [ESP + 0x80]       ; 005f5b25
    FNSTSW AX                           ; 005f5b2c
    SAHF                                ; 005f5b2e
    JBE 0x005f595b                      ; 005f5b2f
        ;   XREF to: 005f595b (CONDITIONAL_JUMP)  ; LAB_005f595b
    XOR byte ptr [ESP + 0x9b],0x80      ; 005f5b35
    JMP 0x005f595b                      ; 005f5b3d
        ;   XREF to: 005f595b (UNCONDITIONAL_JUMP)  ; LAB_005f595b
    FLD1                                ; 005f5b42
        ;   Label: LAB_005f5b42
    FCOMP double ptr [ESP + 0x58]       ; 005f5b44
    FNSTSW AX                           ; 005f5b48
    SAHF                                ; 005f5b4a
    JA 0x005f5b58                       ; 005f5b4b
        ;   XREF to: 005f5b58 (CONDITIONAL_JUMP)  ; LAB_005f5b58
    XOR EBX,EBX                         ; 005f5b4d
    MOV dword ptr [ESP + 0x98],EBX      ; 005f5b4f
    JMP 0x005f5b23                      ; 005f5b56
        ;   XREF to: 005f5b23 (UNCONDITIONAL_JUMP)  ; LAB_005f5b23
    FLD double ptr [ESP + 0x58]         ; 005f5b58
        ;   Label: LAB_005f5b58
    CALL crt_math.c_acos_FUN_00600162   ; 005f5b5c
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00600162(double x)
    FSTP float ptr [ESP + 0x98]         ; 005f5b61
    JMP 0x005f5b23                      ; 005f5b68
        ;   XREF to: 005f5b23 (UNCONDITIONAL_JUMP)  ; LAB_005f5b23
    FLD double ptr [ESP + 0x60]         ; 005f5b6a
        ;   Label: LAB_005f5b6a
    FCOMP double ptr [0x0065831d]       ; 005f5b6e | g_MatrixToEulerNegativeOne
    FNSTSW AX                           ; 005f5b74
    SAHF                                ; 005f5b76
    JA 0x005f5ba3                       ; 005f5b77
        ;   XREF to: 005f5ba3 (CONDITIONAL_JUMP)  ; LAB_005f5ba3
    MOV dword ptr [ESP + 0x90],0x40490fdb ; 005f5b79
    FLDZ                                ; 005f5b84
        ;   Label: LAB_005f5b84
    FCOMP double ptr [ESP + 0x88]       ; 005f5b86
    FNSTSW AX                           ; 005f5b8d
    SAHF                                ; 005f5b8f
    JBE 0x005f5a4d                      ; 005f5b90
        ;   XREF to: 005f5a4d (CONDITIONAL_JUMP)  ; LAB_005f5a4d
    XOR byte ptr [ESP + 0x93],0x80      ; 005f5b96
    JMP 0x005f5a4d                      ; 005f5b9e
        ;   XREF to: 005f5a4d (UNCONDITIONAL_JUMP)  ; LAB_005f5a4d
    FLD1                                ; 005f5ba3
        ;   Label: LAB_005f5ba3
    FCOMP double ptr [ESP + 0x60]       ; 005f5ba5
    FNSTSW AX                           ; 005f5ba9
    SAHF                                ; 005f5bab
    JA 0x005f5bb9                       ; 005f5bac
        ;   XREF to: 005f5bb9 (CONDITIONAL_JUMP)  ; LAB_005f5bb9
    XOR EDI,EDI                         ; 005f5bae
    MOV dword ptr [ESP + 0x90],EDI      ; 005f5bb0
    JMP 0x005f5b84                      ; 005f5bb7
        ;   XREF to: 005f5b84 (UNCONDITIONAL_JUMP)  ; LAB_005f5b84
    FLD double ptr [ESP + 0x60]         ; 005f5bb9
        ;   Label: LAB_005f5bb9
    CALL crt_math.c_acos_FUN_00600162   ; 005f5bbd
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00600162(double x)
    FSTP float ptr [ESP + 0x90]         ; 005f5bc2
    JMP 0x005f5b84                      ; 005f5bc9
        ;   XREF to: 005f5b84 (UNCONDITIONAL_JUMP)  ; LAB_005f5b84

