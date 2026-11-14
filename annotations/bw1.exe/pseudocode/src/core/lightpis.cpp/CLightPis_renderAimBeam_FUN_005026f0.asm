; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_lightpis_cpp_CLightPis_renderAimBeam_FUN_005026f0(CLightPis *this_ptr)
;
; Parameters:
; CLightPis *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005e7022
;   undefined4 DAT_005e702a
;   undefined4 DAT_005e7032
;   undefined4 DAT_005e703a
;   undefined4 DAT_00603174
;   undefined4 DAT_00612560
;   undefined4 DAT_0061c010
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_fire.cpp_CFireEffect_createLaserCone_FUN_004b60e0
;   core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0
;   core_weapon.cpp_CWeapon_renderAimBeam_FUN_005adf90
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005026f0
        ;   Label: core_lightpis.cpp_CLightPis_renderAimBeam_FUN_005026f0
    PUSH ESI                            ; 005026f1
    PUSH EDI                            ; 005026f2
    PUSH EBP                            ; 005026f3
    MOV EBP,ESP                         ; 005026f4
    SUB ESP,0x124                       ; 005026f6
    AND ESP,0xfffffff8                  ; 005026fc
    MOV EDX,dword ptr [0x00612560]      ; 005026ff | DAT_00612560
    PUSH EDX                            ; 00502705 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 00502706
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0050270b
    TEST EAX,EAX                        ; 0050270e
    JNZ 0x00502c20                      ; 00502710
        ;   XREF to: 00502c20 (CONDITIONAL_JUMP)  ; LAB_00502c20
    MOV EAX,dword ptr [EBP + 0x14]      ; 00502716
    CMP dword ptr [EAX + 0x588],0x0     ; 00502719
    JZ 0x00502c27                       ; 00502720
        ;   XREF to: 00502c27 (CONDITIONAL_JUMP)  ; LAB_00502c27
    MOV ESI,dword ptr [EBP + 0x14]      ; 00502726
    MOV EAX,dword ptr [EAX + 0x154]     ; 00502729
    PUSH ESI                            ; 0050272f
    LEA ESI,[ESP + 0x74]                ; 00502730
    LEA EDI,[ESP + 0x20]                ; 00502734
    CALL dword ptr [EAX + 0xe0]         ; 00502738
    LEA ESI,[ESP + 0x74]                ; 0050273e
    ADD ESP,0x4                         ; 00502742
    LEA EAX,[ESP + 0x1c]                ; 00502745
    MOVSD ES:EDI,ESI                    ; 00502749
    MOVSD ES:EDI,ESI                    ; 0050274a
    MOVSD ES:EDI,ESI                    ; 0050274b
    PUSH EAX                            ; 0050274c
    MOV EDI,dword ptr [EBP + 0x14]      ; 0050274d
    PUSH EDI                            ; 00502750
    LEA ESI,[ESP + 0xc]                 ; 00502751
    CALL core_actor.cpp_FUN_00408b40    ; 00502755
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA EDI,[ESP + 0xcc]                ; 0050275a
    ADD ESP,0x8                         ; 00502761
    LEA ESI,[ESP + 0x4]                 ; 00502764
    MOV EAX,dword ptr [EBP + 0x14]      ; 00502768
    MOVSD ES:EDI,ESI                    ; 0050276b
    MOVSD ES:EDI,ESI                    ; 0050276c
    MOVSD ES:EDI,ESI                    ; 0050276d
    MOV EAX,dword ptr [EAX + 0x2e8]     ; 0050276e
    MOV dword ptr [ESP + 0x110],EAX     ; 00502774
    XOR EAX,EAX                         ; 0050277b
    MOV dword ptr [ESP + 0xac],EAX      ; 0050277d
    MOV dword ptr [ESP + 0xb0],EAX      ; 00502784
    MOV EAX,dword ptr [ESP + 0x110]     ; 0050278b
    MOV dword ptr [ESP + 0xb4],EAX      ; 00502792
    LEA EAX,[ESP + 0xac]                ; 00502799
    PUSH EAX                            ; 005027a0
    MOV ECX,dword ptr [EBP + 0x14]      ; 005027a1
    LEA EBX,[ESP + 0x8c]                ; 005027a4
    PUSH ECX                            ; 005027ab
    LEA ESI,[ESP + 0xe4]                ; 005027ac
    LEA EDI,[ESP + 0x18]                ; 005027b3
    CALL core_actor.cpp_FUN_00408ac0    ; 005027b7
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0xe4]                ; 005027bc
    ADD ESP,0x8                         ; 005027c3
    LEA EAX,[ESP + 0xf4]                ; 005027c6
    FLD float ptr [ESP + 0xc4]          ; 005027cd
    FLD float ptr [ESP + 0xc8]          ; 005027d4
    MOVSD ES:EDI,ESI                    ; 005027db
    MOVSD ES:EDI,ESI                    ; 005027dc
    MOVSD ES:EDI,ESI                    ; 005027dd
    FLD float ptr [ESP + 0xcc]          ; 005027de
    FLD float ptr [ESP + 0x10]          ; 005027e5
    FLD float ptr [ESP + 0x14]          ; 005027e9
    FLD float ptr [ESP + 0x18]          ; 005027ed
    LEA EDI,[ESP + 0x4c]                ; 005027f1
    LEA ESI,[ESP + 0xb8]                ; 005027f5
    FXCH ST2                            ; 005027fc
    FCHS                                ; 005027fe
    FXCH                                ; 00502800
    FCHS                                ; 00502802
    FXCH ST2                            ; 00502804
    FCHS                                ; 00502806
    FXCH ST5                            ; 00502808
    FADD float ptr [ESP + 0x10]         ; 0050280a
    FXCH ST4                            ; 0050280e
    FADD float ptr [ESP + 0x14]         ; 00502810
    FXCH ST3                            ; 00502814
    FADD float ptr [ESP + 0x18]         ; 00502816
    FXCH                                ; 0050281a
    FSTP float ptr [ESP + 0x58]         ; 0050281c
    FXCH ST3                            ; 00502820
    FSTP float ptr [ESP + 0xb8]         ; 00502822
    FXCH                                ; 00502829
    FSTP float ptr [ESP + 0xbc]         ; 0050282b
    FXCH                                ; 00502832
    FSTP float ptr [ESP + 0xc0]         ; 00502834
    MOVSD ES:EDI,ESI                    ; 0050283b
    MOVSD ES:EDI,ESI                    ; 0050283c
    MOVSD ES:EDI,ESI                    ; 0050283d
    FSTP float ptr [ESP + 0x5c]         ; 0050283e
    LEA EDI,[ESP + 0xf4]                ; 00502842
    LEA ESI,[ESP + 0x58]                ; 00502849
    FSTP float ptr [ESP + 0x60]         ; 0050284d
    MOVSD ES:EDI,ESI                    ; 00502851
    MOVSD ES:EDI,ESI                    ; 00502852
    MOVSD ES:EDI,ESI                    ; 00502853
    CMP EBX,EAX                         ; 00502854
    JZ 0x00502882                       ; 00502856
        ;   XREF to: 00502882 (CONDITIONAL_JUMP)  ; LAB_00502882
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00502858
    MOV dword ptr [ESP + 0x88],EAX      ; 0050285f
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00502866
    MOV dword ptr [ESP + 0x8c],EAX      ; 0050286d
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00502874
    MOV dword ptr [ESP + 0x90],EAX      ; 0050287b
    FLD float ptr [ESP + 0x8c]          ; 00502882
        ;   Label: LAB_00502882
    FMUL ST0                            ; 00502889
    FLD float ptr [ESP + 0x88]          ; 0050288b
    FMUL ST0                            ; 00502892
    FADDP                               ; 00502894
    FLD float ptr [ESP + 0x90]          ; 00502896
    FMUL ST0                            ; 0050289d
    FADDP                               ; 0050289f
    FSQRT                               ; 005028a1
    FLDZ                                ; 005028a3
    FXCH                                ; 005028a5
    FSTP float ptr [ESP + 0x118]        ; 005028a7
    FCOMP float ptr [ESP + 0x118]       ; 005028ae
    FNSTSW AX                           ; 005028b5
    SAHF                                ; 005028b7
    JNC 0x00502c37                      ; 005028b8
        ;   XREF to: 00502c37 (CONDITIONAL_JUMP)  ; LAB_00502c37
    FLD1                                ; 005028be
    FLD float ptr [ESP + 0x88]          ; 005028c0
    FXCH                                ; 005028c7
    FDIV float ptr [ESP + 0x118]        ; 005028c9
    FXCH                                ; 005028d0
    FMUL ST1                            ; 005028d2
    FLD float ptr [ESP + 0x8c]          ; 005028d4
    FMUL ST2                            ; 005028db
    FLD float ptr [ESP + 0x90]          ; 005028dd
    FMULP ST3                           ; 005028e4
    FXCH                                ; 005028e6
    FSTP float ptr [ESP + 0x88]         ; 005028e8
    FSTP float ptr [ESP + 0x8c]         ; 005028ef
    FSTP float ptr [ESP + 0x90]         ; 005028f6
    FLD float ptr [0x00603174]          ; 005028fd | DAT_00603174
        ;   Label: LAB_005028fd
    FDIVR double ptr [0x005e7022]       ; 00502903 | DAT_005e7022
    FLD1                                ; 00502909
    FPATAN                              ; 0050290b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050290d
    LEA ESI,[ESP + 0xe8]                ; 00502910
    MOV EAX,dword ptr [EBP + 0x14]      ; 00502917
    LEA EDI,[ESP + 0xd0]                ; 0050291a
    PUSH EDX                            ; 00502921
    MOV EAX,dword ptr [EAX + 0x154]     ; 00502922
    FSTP float ptr [ESP + 0x4]          ; 00502928
    CALL dword ptr [EAX + 0xe0]         ; 0050292c
    LEA ESI,[ESP + 0xec]                ; 00502932
    ADD ESP,0x4                         ; 00502939
    LEA EAX,[ESP + 0xd0]                ; 0050293c
    MOV ECX,dword ptr [EBP + 0x14]      ; 00502943
    PUSH EAX                            ; 00502946
    MOVSD ES:EDI,ESI                    ; 00502947
    MOVSD ES:EDI,ESI                    ; 00502948
    MOVSD ES:EDI,ESI                    ; 00502949
    PUSH ECX                            ; 0050294a
    LEA ESI,[ESP + 0x3c]                ; 0050294b
    CALL core_actor.cpp_FUN_00408b40    ; 0050294f
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00502954
    PUSH dword ptr [ESP]                ; 00502957
    PUSH 0x0                            ; 0050295a
    PUSH 0x0                            ; 0050295c
    PUSH 0xff                           ; 0050295e
    LEA EAX,[ESP + 0x5c]                ; 00502963
    PUSH 0x3f800000                     ; 00502967
    PUSH EAX                            ; 0050296c
    LEA EAX,[ESP + 0xdc]                ; 0050296d
    PUSH EAX                            ; 00502974
    MOV EBX,dword ptr [0x0061c010]      ; 00502975 | DAT_0061c010
    PUSH EBX                            ; 0050297b
    CALL core_fire.cpp_CFireEffect_createLaserCone_FUN_004b60e0 ; 0050297c
        ;   XREF to: 004b60e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserCone_FUN_004b60e0(CFireEffect * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    ADD ESP,0x20                        ; 00502981
    MOV EAX,dword ptr [EBP + 0x14]      ; 00502984
    CMP dword ptr [EAX + 0x588],0x0     ; 00502987
    JZ 0x00502c20                       ; 0050298e
        ;   XREF to: 00502c20 (CONDITIONAL_JUMP)  ; LAB_00502c20
    MOV EBX,0x1                         ; 00502994
    MOV dword ptr [EAX + 0x588],0x0     ; 00502999
    XOR ESI,ESI                         ; 005029a3
    FLD float ptr [ESP]                 ; 005029a5
        ;   Label: LAB_005029a5
    FMUL double ptr [0x005e702a]        ; 005029a8 | DAT_005e702a
    MOV dword ptr [ESP + 0x120],EBX     ; 005029ae
    FILD dword ptr [ESP + 0x120]        ; 005029b5
    FMULP                               ; 005029bc
    SUB ESP,0x4                         ; 005029be
    FSTP float ptr [ESP]                ; 005029c1
    PUSH ESI                            ; 005029c4
    PUSH ESI                            ; 005029c5
    PUSH 0xff                           ; 005029c6
    LEA EAX,[ESP + 0x5c]                ; 005029cb
    PUSH 0x3f800000                     ; 005029cf
    PUSH EAX                            ; 005029d4
    LEA EAX,[ESP + 0xdc]                ; 005029d5
    PUSH EAX                            ; 005029dc
    MOV EDI,dword ptr [0x0061c010]      ; 005029dd | DAT_0061c010
    PUSH EDI                            ; 005029e3
    INC EBX                             ; 005029e4
    CALL core_fire.cpp_CFireEffect_createLaserCone_FUN_004b60e0 ; 005029e5
        ;   XREF to: 004b60e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserCone_FUN_004b60e0(CFireEffect * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    ADD ESP,0x20                        ; 005029ea
    CMP EBX,0xa                         ; 005029ed
    JL 0x005029a5                       ; 005029f0
        ;   XREF to: 005029a5 (CONDITIONAL_JUMP)  ; LAB_005029a5
    FLD float ptr [ESP + 0x4c]          ; 005029f2
    FLD float ptr [ESP + 0x50]          ; 005029f6
    FLD float ptr [ESP + 0x54]          ; 005029fa
    LEA EDI,[ESP + 0x40]                ; 005029fe
    LEA ESI,[ESP + 0xc4]                ; 00502a02
    FXCH ST2                            ; 00502a09
    FSUB float ptr [ESP + 0xc4]         ; 00502a0b
    FXCH                                ; 00502a12
    FSUB float ptr [ESP + 0xc8]         ; 00502a14
    FXCH ST2                            ; 00502a1b
    FSUB float ptr [ESP + 0xcc]         ; 00502a1d
    MOVSD ES:EDI,ESI                    ; 00502a24
    MOVSD ES:EDI,ESI                    ; 00502a25
    MOVSD ES:EDI,ESI                    ; 00502a26
    FXCH                                ; 00502a27
    FSTP float ptr [ESP + 0x7c]         ; 00502a29
    FXCH                                ; 00502a2d
    FSTP float ptr [ESP + 0x80]         ; 00502a2f
    LEA EDI,[ESP + 0xa0]                ; 00502a36
    LEA ESI,[ESP + 0x7c]                ; 00502a3d
    FSTP float ptr [ESP + 0x84]         ; 00502a41
    MOVSD ES:EDI,ESI                    ; 00502a48
    MOVSD ES:EDI,ESI                    ; 00502a49
    MOVSD ES:EDI,ESI                    ; 00502a4a
    FLD float ptr [ESP + 0xa4]          ; 00502a4b
    FMUL ST0                            ; 00502a52
    FLD float ptr [ESP + 0xa0]          ; 00502a54
    FMUL ST0                            ; 00502a5b
    FADDP                               ; 00502a5d
    FLD float ptr [ESP + 0xa8]          ; 00502a5f
    FMUL ST0                            ; 00502a66
    FADDP                               ; 00502a68
    FSQRT                               ; 00502a6a
    FLDZ                                ; 00502a6c
    FXCH                                ; 00502a6e
    FSTP float ptr [ESP + 0x114]        ; 00502a70
    FCOMP float ptr [ESP + 0x114]       ; 00502a77
    FNSTSW AX                           ; 00502a7e
    SAHF                                ; 00502a80
    JC 0x00502c53                       ; 00502a81
        ;   XREF to: 00502c53 (CONDITIONAL_JUMP)  ; LAB_00502c53
    XOR EAX,EAX                         ; 00502a87
    MOV dword ptr [ESP + 0xa4],EAX      ; 00502a89
    MOV dword ptr [ESP + 0xa0],EAX      ; 00502a90
    MOV dword ptr [ESP + 0xa8],EAX      ; 00502a97
    MOV EAX,dword ptr [EBP + 0x14]      ; 00502a9e
        ;   Label: LAB_00502a9e
    FLD float ptr [EAX + 0x594]         ; 00502aa1
    FMUL double ptr [0x005e7032]        ; 00502aa7 | DAT_005e7032
    FLD float ptr [ESP + 0xa0]          ; 00502aad
    FXCH                                ; 00502ab4
    FSTP float ptr [ESP + 0x11c]        ; 00502ab6
    FMUL float ptr [ESP + 0x11c]        ; 00502abd
    FLD float ptr [ESP + 0xa4]          ; 00502ac4
    FMUL float ptr [ESP + 0x11c]        ; 00502acb
    FLD float ptr [ESP + 0xa8]          ; 00502ad2
    FMUL float ptr [ESP + 0x11c]        ; 00502ad9
    LEA EDI,[ESP + 0x64]                ; 00502ae0
    LEA ESI,[ESP + 0x28]                ; 00502ae4
    LEA EBX,[ESP + 0xa0]                ; 00502ae8
    LEA EAX,[ESP + 0x64]                ; 00502aef
    FXCH ST2                            ; 00502af3
    FSTP float ptr [ESP + 0x28]         ; 00502af5
    FSTP float ptr [ESP + 0x2c]         ; 00502af9
    FSTP float ptr [ESP + 0x30]         ; 00502afd
    MOVSD ES:EDI,ESI                    ; 00502b01
    MOVSD ES:EDI,ESI                    ; 00502b02
    MOVSD ES:EDI,ESI                    ; 00502b03
    CMP EBX,EAX                         ; 00502b04
    JNZ 0x00502c97                      ; 00502b06
        ;   XREF to: 00502c97 (CONDITIONAL_JUMP)  ; LAB_00502c97
    XOR EBX,EBX                         ; 00502b0c
        ;   Label: LAB_00502b0c
    MOV ESI,0x1388                      ; 00502b0e
    PUSH 0x40a00000                     ; 00502b13
        ;   Label: LAB_00502b13
    PUSH 0xc0a00000                     ; 00502b18
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00502b1d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x128],EAX     ; 00502b22
    FLD float ptr [ESP + 0x128]         ; 00502b29
    ADD ESP,0x8                         ; 00502b30
    MOV dword ptr [ESP + 0x120],EBX     ; 00502b33
    FILD dword ptr [ESP + 0x120]        ; 00502b3a
    FMUL double ptr [0x005e703a]        ; 00502b41 | DAT_005e703a
    FSTP double ptr [ESP + 0x100]       ; 00502b47
    FMUL double ptr [ESP + 0x100]       ; 00502b4e
    PUSH 0x40a00000                     ; 00502b55
    PUSH 0xc0a00000                     ; 00502b5a
    FSTP float ptr [ESP + 0x9c]         ; 00502b5f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00502b66
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x128],EAX     ; 00502b6b
    FLD float ptr [ESP + 0x128]         ; 00502b72
    ADD ESP,0x8                         ; 00502b79
    FMUL double ptr [ESP + 0x100]       ; 00502b7c
    PUSH 0x40a00000                     ; 00502b83
    PUSH 0xc0a00000                     ; 00502b88
    FSTP float ptr [ESP + 0xa0]         ; 00502b8d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00502b94
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x128],EAX     ; 00502b99
    FLD float ptr [ESP + 0x128]         ; 00502ba0
    ADD ESP,0x8                         ; 00502ba7
    PUSH ESI                            ; 00502baa
    PUSH 0x3                            ; 00502bab
    PUSH ESI                            ; 00502bad
    PUSH 0xffdc                         ; 00502bae
    LEA EAX,[ESP + 0xa4]                ; 00502bb3
    PUSH EAX                            ; 00502bba
    LEA EAX,[ESP + 0x54]                ; 00502bbb
    MOV EDI,dword ptr [0x0061c010]      ; 00502bbf | DAT_0061c010
    PUSH EAX                            ; 00502bc5
    FMUL double ptr [ESP + 0x118]       ; 00502bc6
    PUSH EDI                            ; 00502bcd
    FSTP float ptr [ESP + 0xb8]         ; 00502bce
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0 ; 00502bd5
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 00502bda
    INC EBX                             ; 00502bdd
    FLD float ptr [ESP + 0x40]          ; 00502bde
    FLD float ptr [ESP + 0x44]          ; 00502be2
    FLD float ptr [ESP + 0x48]          ; 00502be6
    FXCH ST2                            ; 00502bea
    FADD float ptr [ESP + 0xa0]         ; 00502bec
    FXCH                                ; 00502bf3
    FADD float ptr [ESP + 0xa4]         ; 00502bf5
    FXCH ST2                            ; 00502bfc
    FADD float ptr [ESP + 0xa8]         ; 00502bfe
    FXCH                                ; 00502c05
    FSTP float ptr [ESP + 0x40]         ; 00502c07
    FXCH                                ; 00502c0b
    FSTP float ptr [ESP + 0x44]         ; 00502c0d
    FSTP float ptr [ESP + 0x48]         ; 00502c11
    CMP EBX,0x40                        ; 00502c15
    JL 0x00502b13                       ; 00502c18
        ;   XREF to: 00502b13 (CONDITIONAL_JUMP)  ; LAB_00502b13
    MOV EAX,EAX                         ; 00502c1e
    MOV ESP,EBP                         ; 00502c20
        ;   Label: LAB_00502c20
    POP EBP                             ; 00502c22
    POP EDI                             ; 00502c23
    POP ESI                             ; 00502c24
    POP EBX                             ; 00502c25
    RET                                 ; 00502c26
    PUSH EAX                            ; 00502c27
        ;   Label: LAB_00502c27
    CALL core_weapon.cpp_CWeapon_renderAimBeam_FUN_005adf90 ; 00502c28
        ;   XREF to: 005adf90 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_renderAimBeam_FUN_005adf90(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 00502c2d
    MOV ESP,EBP                         ; 00502c30
    POP EBP                             ; 00502c32
    POP EDI                             ; 00502c33
    POP ESI                             ; 00502c34
    POP EBX                             ; 00502c35
    RET                                 ; 00502c36
    XOR EBX,EBX                         ; 00502c37
        ;   Label: LAB_00502c37
    MOV dword ptr [ESP + 0x8c],EBX      ; 00502c39
    MOV dword ptr [ESP + 0x88],EBX      ; 00502c40
    MOV dword ptr [ESP + 0x90],EBX      ; 00502c47
    JMP 0x005028fd                      ; 00502c4e
        ;   XREF to: 005028fd (UNCONDITIONAL_JUMP)  ; LAB_005028fd
    FLD1                                ; 00502c53
        ;   Label: LAB_00502c53
    FLD float ptr [ESP + 0xa0]          ; 00502c55
    FXCH                                ; 00502c5c
    FDIV float ptr [ESP + 0x114]        ; 00502c5e
    FXCH                                ; 00502c65
    FMUL ST1                            ; 00502c67
    FLD float ptr [ESP + 0xa4]          ; 00502c69
    FMUL ST2                            ; 00502c70
    FLD float ptr [ESP + 0xa8]          ; 00502c72
    FMULP ST3                           ; 00502c79
    FXCH                                ; 00502c7b
    FSTP float ptr [ESP + 0xa0]         ; 00502c7d
    FSTP float ptr [ESP + 0xa4]         ; 00502c84
    FSTP float ptr [ESP + 0xa8]         ; 00502c8b
    JMP 0x00502a9e                      ; 00502c92
        ;   XREF to: 00502a9e (UNCONDITIONAL_JUMP)  ; LAB_00502a9e
    MOV EAX,dword ptr [ESP + 0x64]      ; 00502c97
        ;   Label: LAB_00502c97
    MOV dword ptr [ESP + 0xa0],EAX      ; 00502c9b
    MOV EAX,dword ptr [ESP + 0x68]      ; 00502ca2
    MOV dword ptr [ESP + 0xa4],EAX      ; 00502ca6
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00502cad
    MOV dword ptr [ESP + 0xa8],EAX      ; 00502cb1
    JMP 0x00502b0c                      ; 00502cb8
        ;   XREF to: 00502b0c (UNCONDITIONAL_JUMP)  ; LAB_00502b0c

