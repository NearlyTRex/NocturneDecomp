; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_lightgun_cpp_FUN_005066b0(void)
;
; Local Variables:
; undefined1       Stack[-0x94]:1  local_94
;
; Referenced Globals:
;   double DOUBLE_0063151e = 18
;   double DOUBLE_00631526 = 0.100000000000000
;   double g_CLightConeObj = 0.015625
;   float FLOAT_00660a44 = 112
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonRenderer g_CDemonRendererInstance
;   CFireEffect g_CFireEffectInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_fire.cpp_CFireEffect_FUN_004c79d0
;   core_fire.cpp_CFireEffect_FUN_004c7f20
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005066b0
        ;   Label: core_lightgun.cpp_FUN_005066b0
    PUSH ESI                            ; 005066b1
    PUSH EDI                            ; 005066b2
    PUSH EBP                            ; 005066b3
    MOV EBP,ESP                         ; 005066b4
    SUB ESP,0x8c                        ; 005066b6
    AND ESP,0xfffffff8                  ; 005066bc
    MOV ESI,dword ptr [EBP + 0x14]      ; 005066bf
    MOV EDX,dword ptr [0x006703ec]      ; 005066c2 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 005066c8 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 005066c9
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005066ce
    TEST EAX,EAX                        ; 005066d1
    JZ 0x005066f1                       ; 005066d3
        ;   XREF to: 005066f1 (CONDITIONAL_JUMP)  ; LAB_005066f1
    LEA EAX,[EAX]                       ; 005066d5
    LEA EDX,[EDX]                       ; 005066db | g_CDemonRendererInstance
    MOV EBX,EBX                         ; 005066de
    MOV ESP,EBP                         ; 005066e0
        ;   Label: LAB_005066e0
    POP EBP                             ; 005066e2
    POP EDI                             ; 005066e3
    POP ESI                             ; 005066e4
    POP EBX                             ; 005066e5
    LEA EAX,[EAX]                       ; 005066e6
    LEA EDX,[EDX]                       ; 005066ec | g_CDemonRendererInstance
    LEA EAX,[ESP + 0xc]                 ; 005066f1
        ;   Label: LAB_005066f1
    PUSH EAX                            ; 005066f5
    MOV EBX,dword ptr [ESI + 0x154]     ; 005066f6
    PUSH ESI                            ; 005066fc
    CALL dword ptr [EBX + 0xf4]         ; 005066fd
    ADD ESP,0x8                         ; 00506703
    PUSH EAX                            ; 00506706
    LEA EAX,[ESP + 0x58]                ; 00506707
    PUSH EAX                            ; 0050670b
    PUSH ESI                            ; 0050670c
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0050670d
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00506712
    MOV EAX,dword ptr [ESI + 0x2e8]     ; 00506715
    MOV dword ptr [ESP + 0x44],EAX      ; 0050671b
    LEA EAX,[ESP + 0x3c]                ; 0050671f
    PUSH EAX                            ; 00506723
    LEA EAX,[ESP + 0x7c]                ; 00506724
    PUSH EAX                            ; 00506728
    LEA EBX,[ESP + 0x74]                ; 00506729
    XOR ECX,ECX                         ; 0050672d
    PUSH ESI                            ; 0050672f
    MOV dword ptr [ESP + 0x48],ECX      ; 00506730
    MOV dword ptr [ESP + 0x4c],ECX      ; 00506734
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 00506738
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0050673d
    LEA EAX,[ESP + 0x48]                ; 00506740
    FLD float ptr [ESP + 0x54]          ; 00506744
    FLD float ptr [ESP + 0x58]          ; 00506748
    FLD float ptr [ESP + 0x5c]          ; 0050674c
    FLD float ptr [ESP + 0x78]          ; 00506750
    FLD float ptr [ESP + 0x7c]          ; 00506754
    FLD float ptr [ESP + 0x80]          ; 00506758
    FXCH ST2                            ; 0050675f
    FCHS                                ; 00506761
    FXCH                                ; 00506763
    FCHS                                ; 00506765
    FXCH ST2                            ; 00506767
    FCHS                                ; 00506769
    FXCH                                ; 0050676b
    FSTP float ptr [ESP + 0x48]         ; 0050676d
    FXCH                                ; 00506771
    FSTP float ptr [ESP + 0x4c]         ; 00506773
    FSTP float ptr [ESP + 0x50]         ; 00506777
    FXCH ST2                            ; 0050677b
    FADD float ptr [ESP + 0x78]         ; 0050677d
    FXCH                                ; 00506781
    FADD float ptr [ESP + 0x7c]         ; 00506783
    FXCH ST2                            ; 00506787
    FADD float ptr [ESP + 0x80]         ; 00506789
    FXCH                                ; 00506790
    FSTP float ptr [ESP + 0x60]         ; 00506792
    FXCH                                ; 00506796
    FSTP float ptr [ESP + 0x64]         ; 00506798
    FSTP float ptr [ESP + 0x68]         ; 0050679c
    CMP EBX,EAX                         ; 005067a0
    JZ 0x005067bc                       ; 005067a2
        ;   XREF to: 005067bc (CONDITIONAL_JUMP)  ; LAB_005067bc
    MOV EAX,dword ptr [ESP + 0x48]      ; 005067a4
    MOV dword ptr [ESP + 0x6c],EAX      ; 005067a8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005067ac
    MOV dword ptr [ESP + 0x70],EAX      ; 005067b0
    MOV EAX,dword ptr [ESP + 0x50]      ; 005067b4
    MOV dword ptr [ESP + 0x74],EAX      ; 005067b8
    FLD float ptr [ESP + 0x70]          ; 005067bc
        ;   Label: LAB_005067bc
    FMUL ST0                            ; 005067c0
    FLD float ptr [ESP + 0x6c]          ; 005067c2
    FMUL ST0                            ; 005067c6
    FADDP                               ; 005067c8
    FLD float ptr [ESP + 0x74]          ; 005067ca
    FMUL ST0                            ; 005067ce
    FADDP                               ; 005067d0
    FSQRT                               ; 005067d2
    FST float ptr [ESP]                 ; 005067d4
    FLDZ                                ; 005067d7
    FCOMPP                              ; 005067d9
    FNSTSW AX                           ; 005067db
    SAHF                                ; 005067dd
    JNC 0x005069ef                      ; 005067de
        ;   XREF to: 005069ef (CONDITIONAL_JUMP)  ; LAB_005069ef
    FLD1                                ; 005067e4
    FLD float ptr [ESP + 0x6c]          ; 005067e6
    FXCH                                ; 005067ea
    FDIV float ptr [ESP]                ; 005067ec
    FXCH                                ; 005067ef
    FMUL ST1                            ; 005067f1
    FLD float ptr [ESP + 0x70]          ; 005067f3
    FMUL ST2                            ; 005067f7
    FLD float ptr [ESP + 0x74]          ; 005067f9
    FMULP ST3                           ; 005067fd
    FXCH                                ; 005067ff
    FSTP float ptr [ESP + 0x6c]         ; 00506801
    FSTP float ptr [ESP + 0x70]         ; 00506805
    FSTP float ptr [ESP + 0x74]         ; 00506809
    FLD float ptr [0x00660a44]          ; 0050680d | FLOAT_00660a44
        ;   Label: LAB_0050680d
    FDIVR double ptr [0x0063151e]       ; 00506813 | DOUBLE_0063151e
    FLD1                                ; 00506819
    FPATAN                              ; 0050681b
    FSTP float ptr [ESP + 0x4]          ; 0050681d
    PUSH dword ptr [ESP + 0x4]          ; 00506821
    PUSH 0xb4                           ; 00506825
    PUSH 0xff                           ; 0050682a
    PUSH 0xff                           ; 0050682f
    LEA EAX,[ESP + 0x70]                ; 00506834
    PUSH 0x3f800000                     ; 00506838
    PUSH EAX                            ; 0050683d
    LEA EAX,[ESP + 0x6c]                ; 0050683e
    PUSH EAX                            ; 00506842
    MOV ECX,dword ptr [0x0067a3d0]      ; 00506843 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH ECX                            ; 00506849 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_FUN_004c7f20 ; 0050684a
        ;   XREF to: 004c7f20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c7f20(CFireEffect * this_ptr)
    MOV EBX,dword ptr [ESI + 0x588]     ; 0050684f
    ADD ESP,0x20                        ; 00506855
    TEST EBX,EBX                        ; 00506858
    JZ 0x005066e0                       ; 0050685a
        ;   XREF to: 005066e0 (CONDITIONAL_JUMP)  ; LAB_005066e0
    MOV EBX,0x1                         ; 00506860
    MOV dword ptr [ESI + 0x588],0x0     ; 00506865
    FLD float ptr [ESP + 0x4]           ; 0050686f
        ;   Label: LAB_0050686f
    FMUL double ptr [0x00631526]        ; 00506873 | DOUBLE_00631526
    MOV dword ptr [ESP + 0x88],EBX      ; 00506879
    FILD dword ptr [ESP + 0x88]         ; 00506880
    FMULP                               ; 00506887
    SUB ESP,0x4                         ; 00506889
    FSTP float ptr [ESP]                ; 0050688c
    PUSH 0xb4                           ; 0050688f
    PUSH 0xff                           ; 00506894
    PUSH 0xff                           ; 00506899
    LEA EAX,[ESP + 0x70]                ; 0050689e
    PUSH 0x3f800000                     ; 005068a2
    PUSH EAX                            ; 005068a7
    LEA EAX,[ESP + 0x6c]                ; 005068a8
    PUSH EAX                            ; 005068ac
    MOV EDI,dword ptr [0x0067a3d0]      ; 005068ad | g_CFireEffectPtr
    PUSH EDI                            ; 005068b3 | g_CFireEffectInstance
    INC EBX                             ; 005068b4
    CALL core_fire.cpp_CFireEffect_FUN_004c7f20 ; 005068b5
        ;   XREF to: 004c7f20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c7f20(CFireEffect * this_ptr)
    ADD ESP,0x20                        ; 005068ba
    CMP EBX,0xa                         ; 005068bd
    JL 0x0050686f                       ; 005068c0
        ;   XREF to: 0050686f (CONDITIONAL_JUMP)  ; LAB_0050686f
    FLD float ptr [ESP + 0x60]          ; 005068c2
    FLD float ptr [ESP + 0x64]          ; 005068c6
    FSUB float ptr [ESP + 0x58]         ; 005068ca
    FXCH                                ; 005068ce
    FSUB float ptr [ESP + 0x54]         ; 005068d0
    FXCH                                ; 005068d4
    FST float ptr [ESP + 0x34]          ; 005068d6
    FMUL float ptr [ESP + 0x34]         ; 005068da
    FXCH                                ; 005068de
    FST float ptr [ESP + 0x30]          ; 005068e0
    FMUL float ptr [ESP + 0x30]         ; 005068e4
    FLD float ptr [ESP + 0x68]          ; 005068e8
    MOV EAX,dword ptr [ESP + 0x54]      ; 005068ec
    FSUB float ptr [ESP + 0x5c]         ; 005068f0
    MOV dword ptr [ESP + 0x18],EAX      ; 005068f4
    FSTP float ptr [ESP + 0x38]         ; 005068f8
    FADDP                               ; 005068fc
    MOV EAX,dword ptr [ESP + 0x58]      ; 005068fe
    FLD float ptr [ESP + 0x38]          ; 00506902
    FMUL ST0                            ; 00506906
    MOV dword ptr [ESP + 0x1c],EAX      ; 00506908
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0050690c
    FADDP                               ; 00506910
    MOV dword ptr [ESP + 0x20],EAX      ; 00506912
    FSQRT                               ; 00506916
    FST float ptr [ESP + 0x8]           ; 00506918
    FLDZ                                ; 0050691c
    FCOMPP                              ; 0050691e
    FNSTSW AX                           ; 00506920
    SAHF                                ; 00506922
    JC 0x00506a02                       ; 00506923
        ;   XREF to: 00506a02 (CONDITIONAL_JUMP)  ; LAB_00506a02
    XOR EAX,EAX                         ; 00506929
    MOV dword ptr [ESP + 0x34],EAX      ; 0050692b
    MOV dword ptr [ESP + 0x30],EAX      ; 0050692f
    MOV dword ptr [ESP + 0x38],EAX      ; 00506933
    FLD float ptr [ESI + 0x58c]         ; 00506937
        ;   Label: LAB_00506937
    FMUL double ptr [0x0063152e]        ; 0050693d | g_CLightConeObj
    FLD float ptr [ESP + 0x30]          ; 00506943
    FXCH                                ; 00506947
    FSTP float ptr [ESP + 0x84]         ; 00506949
    FMUL float ptr [ESP + 0x84]         ; 00506950
    FLD float ptr [ESP + 0x34]          ; 00506957
    FMUL float ptr [ESP + 0x84]         ; 0050695b
    FLD float ptr [ESP + 0x38]          ; 00506962
    FMUL float ptr [ESP + 0x84]         ; 00506966
    LEA EAX,[ESP + 0x24]                ; 0050696d
    LEA EBX,[ESP + 0x30]                ; 00506971
    FXCH ST2                            ; 00506975
    FSTP float ptr [ESP + 0x24]         ; 00506977
    FSTP float ptr [ESP + 0x28]         ; 0050697b
    FSTP float ptr [ESP + 0x2c]         ; 0050697f
    CMP EBX,EAX                         ; 00506983
    JNZ 0x00506a31                      ; 00506985
        ;   XREF to: 00506a31 (CONDITIONAL_JUMP)  ; LAB_00506a31
    XOR EBX,EBX                         ; 0050698b
        ;   Label: LAB_0050698b
    XOR ESI,ESI                         ; 0050698d
    PUSH 0x3333                         ; 0050698f
        ;   Label: LAB_0050698f
    PUSH ESI                            ; 00506994
    PUSH 0x4000                         ; 00506995
    PUSH 0x8000                         ; 0050699a
    PUSH ESI                            ; 0050699f
    LEA EAX,[ESP + 0x2c]                ; 005069a0
    PUSH EAX                            ; 005069a4
    MOV EDI,dword ptr [0x0067a3d0]      ; 005069a5 | g_CFireEffectPtr
    PUSH EDI                            ; 005069ab | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_FUN_004c79d0 ; 005069ac
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c79d0(CFireEffect * this_ptr)
    ADD ESP,0x1c                        ; 005069b1
    INC EBX                             ; 005069b4
    FLD float ptr [ESP + 0x18]          ; 005069b5
    FLD float ptr [ESP + 0x1c]          ; 005069b9
    FLD float ptr [ESP + 0x20]          ; 005069bd
    FXCH ST2                            ; 005069c1
    FADD float ptr [ESP + 0x30]         ; 005069c3
    FXCH                                ; 005069c7
    FADD float ptr [ESP + 0x34]         ; 005069c9
    FXCH ST2                            ; 005069cd
    FADD float ptr [ESP + 0x38]         ; 005069cf
    FXCH                                ; 005069d3
    FSTP float ptr [ESP + 0x18]         ; 005069d5
    FXCH                                ; 005069d9
    FSTP float ptr [ESP + 0x1c]         ; 005069db
    FSTP float ptr [ESP + 0x20]         ; 005069df
    CMP EBX,0x40                        ; 005069e3
    JL 0x0050698f                       ; 005069e6
        ;   XREF to: 0050698f (CONDITIONAL_JUMP)  ; LAB_0050698f
    MOV ESP,EBP                         ; 005069e8
    POP EBP                             ; 005069ea
    POP EDI                             ; 005069eb
    POP ESI                             ; 005069ec
    POP EBX                             ; 005069ed
    RET                                 ; 005069ee
    XOR EDI,EDI                         ; 005069ef
        ;   Label: LAB_005069ef
    MOV dword ptr [ESP + 0x70],EDI      ; 005069f1
    MOV dword ptr [ESP + 0x6c],EDI      ; 005069f5
    MOV dword ptr [ESP + 0x74],EDI      ; 005069f9
    JMP 0x0050680d                      ; 005069fd
        ;   XREF to: 0050680d (UNCONDITIONAL_JUMP)  ; LAB_0050680d
    FLD1                                ; 00506a02
        ;   Label: LAB_00506a02
    FLD float ptr [ESP + 0x30]          ; 00506a04
    FXCH                                ; 00506a08
    FDIV float ptr [ESP + 0x8]          ; 00506a0a
    FXCH                                ; 00506a0e
    FMUL ST1                            ; 00506a10
    FLD float ptr [ESP + 0x34]          ; 00506a12
    FMUL ST2                            ; 00506a16
    FLD float ptr [ESP + 0x38]          ; 00506a18
    FMULP ST3                           ; 00506a1c
    FXCH                                ; 00506a1e
    FSTP float ptr [ESP + 0x30]         ; 00506a20
    FSTP float ptr [ESP + 0x34]         ; 00506a24
    FSTP float ptr [ESP + 0x38]         ; 00506a28
    JMP 0x00506937                      ; 00506a2c
        ;   XREF to: 00506937 (UNCONDITIONAL_JUMP)  ; LAB_00506937
    MOV EAX,dword ptr [ESP + 0x24]      ; 00506a31
        ;   Label: LAB_00506a31
    MOV dword ptr [ESP + 0x30],EAX      ; 00506a35
    MOV EAX,dword ptr [ESP + 0x28]      ; 00506a39
    MOV dword ptr [ESP + 0x34],EAX      ; 00506a3d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00506a41
    MOV dword ptr [ESP + 0x38],EAX      ; 00506a45
    JMP 0x0050698b                      ; 00506a49
        ;   XREF to: 0050698b (UNCONDITIONAL_JUMP)  ; LAB_0050698b

