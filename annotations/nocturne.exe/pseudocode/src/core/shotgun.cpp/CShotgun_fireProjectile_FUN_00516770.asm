; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_shotgun_cpp_CShotgun_fireProjectile_FUN_00516770(CShotgun *this_ptr)
;
; Parameters:
; CShotgun *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x44]:1  local_44
;
; Referenced Globals:
;   double DOUBLE_005910ad = 3.14159265350000
;   double DOUBLE_005910b5 = 0.00555555555555555
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CFireEffect* g_CFireEffect_PTR_005b80f0 = 01c08d04
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_fire.cpp_CFireEffect_createLaserCone_FUN_0048b3e0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516770
        ;   Label: core_shotgun.cpp_CShotgun_fireProjectile_FUN_00516770
    PUSH EDI                            ; 00516771
    PUSH EBP                            ; 00516772
    MOV EBP,ESP                         ; 00516773
    SUB ESP,0x68                        ; 00516775
    AND ESP,0xfffffff8                  ; 00516778
    MOV EBX,dword ptr [EBP + 0x10]      ; 0051677b
    MOV EDX,dword ptr [0x005ae704]      ; 0051677e | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 00516784 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 00516785
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0051678a
    TEST EAX,EAX                        ; 0051678d
    JZ 0x00516797                       ; 0051678f
        ;   XREF to: 00516797 (CONDITIONAL_JUMP)  ; LAB_00516797
    MOV ESP,EBP                         ; 00516791
    POP EBP                             ; 00516793
    POP EDI                             ; 00516794
    POP EBX                             ; 00516795
    RET                                 ; 00516796
    LEA EAX,[ESP + 0x34]                ; 00516797
        ;   Label: LAB_00516797
    PUSH EAX                            ; 0051679b
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0051679c
    PUSH EBX                            ; 005167a2
    CALL dword ptr [EDX + 0xd8]         ; 005167a3
    ADD ESP,0x8                         ; 005167a9
    PUSH EAX                            ; 005167ac
    LEA EAX,[ESP + 0x14]                ; 005167ad
    PUSH EAX                            ; 005167b1
    PUSH EBX                            ; 005167b2
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 005167b3
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005167b8
    MOV EAX,dword ptr [EBX + 0x2e0]     ; 005167bb
    MOV dword ptr [ESP + 0x60],EAX      ; 005167c1
    LEA EAX,[ESP + 0x58]                ; 005167c5
    PUSH EAX                            ; 005167c9
    LEA EAX,[ESP + 0x8]                 ; 005167ca
    PUSH EAX                            ; 005167ce
    XOR ECX,ECX                         ; 005167cf
    PUSH EBX                            ; 005167d1
    MOV dword ptr [ESP + 0x64],ECX      ; 005167d2
    MOV dword ptr [ESP + 0x68],ECX      ; 005167d6
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 005167da
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    LEA EAX,[ESP + 0x4c]                ; 005167df
    ADD ESP,0xc                         ; 005167e3
    LEA EDX,[ESP + 0x28]                ; 005167e6
    FLD float ptr [ESP + 0x10]          ; 005167ea
    FLD float ptr [ESP + 0x14]          ; 005167ee
    FLD float ptr [ESP + 0x18]          ; 005167f2
    FLD float ptr [ESP + 0x4]           ; 005167f6
    FLD float ptr [ESP + 0x8]           ; 005167fa
    FLD float ptr [ESP + 0xc]           ; 005167fe
    FXCH ST2                            ; 00516802
    FCHS                                ; 00516804
    FXCH                                ; 00516806
    FCHS                                ; 00516808
    FXCH ST2                            ; 0051680a
    FCHS                                ; 0051680c
    FXCH                                ; 0051680e
    FSTP float ptr [ESP + 0x40]         ; 00516810
    FXCH                                ; 00516814
    FSTP float ptr [ESP + 0x44]         ; 00516816
    FSTP float ptr [ESP + 0x48]         ; 0051681a
    FXCH ST2                            ; 0051681e
    FADD float ptr [ESP + 0x4]          ; 00516820
    FXCH                                ; 00516824
    FADD float ptr [ESP + 0x8]          ; 00516826
    FXCH ST2                            ; 0051682a
    FADD float ptr [ESP + 0xc]          ; 0051682c
    FXCH                                ; 00516830
    FSTP float ptr [ESP + 0x4c]         ; 00516832
    FXCH                                ; 00516836
    FSTP float ptr [ESP + 0x50]         ; 00516838
    FSTP float ptr [ESP + 0x54]         ; 0051683c
    CMP EDX,EAX                         ; 00516840
    JZ 0x0051685c                       ; 00516842
        ;   XREF to: 0051685c (CONDITIONAL_JUMP)  ; LAB_0051685c
    MOV EAX,dword ptr [ESP + 0x40]      ; 00516844
    MOV dword ptr [ESP + 0x28],EAX      ; 00516848
    MOV EAX,dword ptr [ESP + 0x44]      ; 0051684c
    MOV dword ptr [ESP + 0x2c],EAX      ; 00516850
    MOV EAX,dword ptr [ESP + 0x48]      ; 00516854
    MOV dword ptr [ESP + 0x30],EAX      ; 00516858
    FLD float ptr [ESP + 0x2c]          ; 0051685c
        ;   Label: LAB_0051685c
    FMUL ST0                            ; 00516860
    FLD float ptr [ESP + 0x28]          ; 00516862
    FMUL ST0                            ; 00516866
    FADDP                               ; 00516868
    FLD float ptr [ESP + 0x30]          ; 0051686a
    FMUL ST0                            ; 0051686e
    FADDP                               ; 00516870
    FSQRT                               ; 00516872
    FST float ptr [ESP]                 ; 00516874
    FLDZ                                ; 00516877
    FCOMPP                              ; 00516879
    FNSTSW AX                           ; 0051687b
    SAHF                                ; 0051687d
    JNC 0x00516940                      ; 0051687e
        ;   XREF to: 00516940 (CONDITIONAL_JUMP)  ; LAB_00516940
    FLD1                                ; 00516884
    FLD float ptr [ESP + 0x28]          ; 00516886
    FXCH                                ; 0051688a
    FDIV float ptr [ESP]                ; 0051688c
    FXCH                                ; 0051688f
    FMUL ST1                            ; 00516891
    FLD float ptr [ESP + 0x2c]          ; 00516893
    FMUL ST2                            ; 00516897
    FLD float ptr [ESP + 0x30]          ; 00516899
    FMULP ST3                           ; 0051689d
    FXCH                                ; 0051689f
    FSTP float ptr [ESP + 0x28]         ; 005168a1
    FSTP float ptr [ESP + 0x2c]         ; 005168a5
    FSTP float ptr [ESP + 0x30]         ; 005168a9
    FLD float ptr [EBX + 0x570]         ; 005168ad
        ;   Label: LAB_005168ad
    FMUL double ptr [0x005910ad]        ; 005168b3 | DOUBLE_005910ad
    FMUL double ptr [0x005910b5]        ; 005168b9 | DOUBLE_005910b5
    SUB ESP,0x4                         ; 005168bf
    FSTP float ptr [ESP]                ; 005168c2
    PUSH 0x0                            ; 005168c5
    PUSH 0xff                           ; 005168c7
    PUSH 0x0                            ; 005168cc
    LEA EAX,[ESP + 0x5c]                ; 005168ce
    PUSH 0x3f800000                     ; 005168d2
    PUSH EAX                            ; 005168d7
    LEA EAX,[ESP + 0x28]                ; 005168d8
    PUSH EAX                            ; 005168dc
    MOV ECX,dword ptr [0x005b80f0]      ; 005168dd | g_CFireEffect_PTR_005b80f0
    PUSH ECX                            ; 005168e3
    CALL core_fire.cpp_CFireEffect_createLaserCone_FUN_0048b3e0 ; 005168e4
        ;   XREF to: 0048b3e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserCone_FUN_0048b3e0(CFireEffect * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    ADD ESP,0x20                        ; 005168e9
    MOV dword ptr [EBX + 0x574],0x1     ; 005168ec
    FLD float ptr [ESP + 0x4c]          ; 005168f6
    FLD float ptr [ESP + 0x50]          ; 005168fa
    FSUB float ptr [ESP + 0x14]         ; 005168fe
    FXCH                                ; 00516902
    FSUB float ptr [ESP + 0x10]         ; 00516904
    FXCH                                ; 00516908
    FST float ptr [ESP + 0x20]          ; 0051690a
    FMUL float ptr [ESP + 0x20]         ; 0051690e
    FXCH                                ; 00516912
    FST float ptr [ESP + 0x1c]          ; 00516914
    FMUL float ptr [ESP + 0x1c]         ; 00516918
    FLD float ptr [ESP + 0x54]          ; 0051691c
    FSUB float ptr [ESP + 0x18]         ; 00516920
    FXCH                                ; 00516924
    FADDP ST2,ST0                       ; 00516926
    FST float ptr [ESP + 0x24]          ; 00516928
    FMUL float ptr [ESP + 0x24]         ; 0051692c
    FADDP                               ; 00516930
    FSQRT                               ; 00516932
    FSTP float ptr [EBX + 0x578]        ; 00516934
    MOV ESP,EBP                         ; 0051693a
    POP EBP                             ; 0051693c
    POP EDI                             ; 0051693d
    POP EBX                             ; 0051693e
    RET                                 ; 0051693f
    XOR EDI,EDI                         ; 00516940
        ;   Label: LAB_00516940
    MOV dword ptr [ESP + 0x2c],EDI      ; 00516942
    MOV dword ptr [ESP + 0x28],EDI      ; 00516946
    MOV dword ptr [ESP + 0x30],EDI      ; 0051694a
    JMP 0x005168ad                      ; 0051694e
        ;   XREF to: 005168ad (UNCONDITIONAL_JUMP)  ; LAB_005168ad

