; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spike_cpp_FUN_00533750(int param_1)
;
; Local Variables:
; undefined        Stack[-0xec]:1  local_ec
;
; XREF[1]:
;   core_spike.cpp_FUN_00533210 at 00533517
;
; Referenced Globals:
;   float FLOAT_005950ee = -0.1000000
;   float FLOAT_005950f2 = 0.1000000
;   float FLOAT_005950f6 = 2
;   float FLOAT_005950fa = 10
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fa5f34
;   undefined4 DAT_01fa5f38
;   undefined4 DAT_01fa5f3c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70
;   core_box.cpp_CBoundingBox3D_reset_FUN_0041dbc0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00533750
        ;   Label: core_spike.cpp_FUN_00533750
    PUSH ESI                            ; 00533751
    PUSH EDI                            ; 00533752
    PUSH EBP                            ; 00533753
    MOV EBP,ESP                         ; 00533754
    SUB ESP,0x1c4                       ; 00533756
    AND ESP,0xfffffff8                  ; 0053375c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0053375f
    LEA EAX,[ESP + 0xec]                ; 00533762
    PUSH EAX                            ; 00533769
    MOV EDX,dword ptr [ESI + 0x14c]     ; 0053376a
    PUSH ESI                            ; 00533770
    XOR EBX,EBX                         ; 00533771
    CALL dword ptr [EDX + 0x14]         ; 00533773
    MOV EDX,0x3dcccccd                  ; 00533776
    ADD ESP,0x8                         ; 0053377b
    LEA EAX,[ESP + 0x104]               ; 0053377e
    FLD float ptr [ESP + 0xec]          ; 00533785
    FLD float ptr [ESP + 0xf0]          ; 0053378c
    FLD float ptr [ESP + 0xf8]          ; 00533793
    FLD float ptr [ESP + 0xfc]          ; 0053379a
    MOV dword ptr [ESP + 0x14c],EDX     ; 005337a1
    MOV dword ptr [ESP + 0x150],EDX     ; 005337a8
    MOV dword ptr [ESP + 0x154],EBX     ; 005337af
    PUSH EAX                            ; 005337b6
    FXCH ST3                            ; 005337b7
    FLD float ptr [0x005950ee]          ; 005337b9 | FLOAT_005950ee
    FXCH                                ; 005337bf
    FADD ST0,ST1                        ; 005337c1
    FXCH ST3                            ; 005337c3
    FADDP                               ; 005337c5
    FXCH                                ; 005337c7
    FLD float ptr [0x005950f2]          ; 005337c9 | FLOAT_005950f2
    FXCH                                ; 005337cf
    FADD ST0,ST1                        ; 005337d1
    FXCH ST4                            ; 005337d3
    FADDP                               ; 005337d5
    FXCH ST2                            ; 005337d7
    FSTP float ptr [ESP + 0xf0]         ; 005337d9
    FSTP float ptr [ESP + 0xf4]         ; 005337e0
    FXCH                                ; 005337e7
    FSTP float ptr [ESP + 0xfc]         ; 005337e9
    FSTP float ptr [ESP + 0x100]        ; 005337f0
    CALL core_box.cpp_CBoundingBox3D_reset_FUN_0041dbc0 ; 005337f7
        ;   XREF to: 0041dbc0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_reset_FUN_0041dbc0()
    ADD ESP,0x4                         ; 005337fc
    PUSH 0x5993b0                       ; 005337ff | g_CVectorTypeInfo_005993b0
    PUSH 0x8                            ; 00533804
    LEA EAX,[ESP + 0x14]                ; 00533806
    PUSH EAX                            ; 0053380a
    XOR EDI,EDI                         ; 0053380b
    LEA EBX,[ESP + 0x18]                ; 0053380d
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00533811
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 00533816
    PUSH EDI                            ; 00533819
        ;   Label: LAB_00533819
    LEA EAX,[ESP + 0x18c]               ; 0053381a
    PUSH EAX                            ; 00533821
    LEA EAX,[ESP + 0xf4]                ; 00533822
    PUSH EAX                            ; 00533829
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70 ; 0053382a
        ;   XREF to: 0041cc70 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70()
    ADD ESP,0xc                         ; 0053382f
    PUSH EAX                            ; 00533832
    LEA EAX,[ESP + 0x168]               ; 00533833
    PUSH EAX                            ; 0053383a
    PUSH ESI                            ; 0053383b
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0053383c
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00533841
    CMP EBX,EAX                         ; 00533844
    JZ 0x00533858                       ; 00533846
        ;   XREF to: 00533858 (CONDITIONAL_JUMP)  ; LAB_00533858
    MOV EDX,dword ptr [EAX]             ; 00533848
    MOV dword ptr [EBX],EDX             ; 0053384a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0053384c
    MOV dword ptr [EBX + 0x4],EDX       ; 0053384f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00533852
    MOV dword ptr [EBX + 0x8],EDX       ; 00533855
    PUSH EBX                            ; 00533858
        ;   Label: LAB_00533858
    LEA EAX,[ESP + 0x108]               ; 00533859
    PUSH EAX                            ; 00533860
    INC EDI                             ; 00533861
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00 ; 00533862
        ;   XREF to: 0041cc00 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00()
    ADD EBX,0xc                         ; 00533867
    ADD ESP,0x8                         ; 0053386a
    CMP EDI,0x8                         ; 0053386d
    JL 0x00533819                       ; 00533870
        ;   XREF to: 00533819 (CONDITIONAL_JUMP)  ; LAB_00533819
    FLD float ptr [ESP + 0xf0]          ; 00533872
    FMUL ST0                            ; 00533879
    FLD float ptr [ESP + 0xec]          ; 0053387b
    FMUL ST0                            ; 00533882
    FADDP                               ; 00533884
    FLD float ptr [ESP + 0xf4]          ; 00533886
    FMUL ST0                            ; 0053388d
    FADDP                               ; 0053388f
    FSQRT                               ; 00533891
    FLD float ptr [ESP + 0xf8]          ; 00533893
    FMUL ST0                            ; 0053389a
    FLD float ptr [ESP + 0xfc]          ; 0053389c
    FMUL ST0                            ; 005338a3
    FADDP                               ; 005338a5
    FLD float ptr [ESP + 0x100]         ; 005338a7
    FMUL ST0                            ; 005338ae
    FXCH ST2                            ; 005338b0
    FSTP float ptr [ESP + 0x194]        ; 005338b2
    MOV EAX,dword ptr [ESP + 0x194]     ; 005338b9
    FADDP                               ; 005338c0
    MOV dword ptr [ESP + 0x1a8],EAX     ; 005338c2
    FSQRT                               ; 005338c9
    FST float ptr [ESP + 0x1a4]         ; 005338cb
    FCOMP float ptr [ESP + 0x194]       ; 005338d2
    FNSTSW AX                           ; 005338d9
    SAHF                                ; 005338db
    JA 0x005339eb                       ; 005338dc
        ;   XREF to: 005339eb (CONDITIONAL_JUMP)  ; LAB_005339eb
    FLD float ptr [ESP + 0x1a8]         ; 005338e2
        ;   Label: LAB_005338e2
    FLD float ptr [ESP + 0x100]         ; 005338e9
    FSUB float ptr [ESP + 0xf4]         ; 005338f0
    FXCH                                ; 005338f7
    FMUL float ptr [0x005950f6]         ; 005338f9 | FLOAT_005950f6
    FXCH                                ; 005338ff
    FSTP float ptr [ESP + 0x1c0]        ; 00533901
    FADD float ptr [0x005950fa]         ; 00533908 | FLOAT_005950fa
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0053390e
    FST float ptr [ESP + 0x1a8]         ; 00533915
    MOV dword ptr [ESP + 0x124],EAX     ; 0053391c
    LEA EAX,[ESP + 0x11c]               ; 00533923
    FMUL float ptr [ESP + 0x1a8]        ; 0053392a
    PUSH EAX                            ; 00533931
    LEA EAX,[ESP + 0x144]               ; 00533932
    XOR EDI,EDI                         ; 00533939
    PUSH EAX                            ; 0053393b
    MOV dword ptr [ESP + 0x124],EDI     ; 0053393c
    MOV dword ptr [ESP + 0x128],EDI     ; 00533943
    PUSH ESI                            ; 0053394a
    FSTP float ptr [ESP + 0x1b8]        ; 0053394b
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 00533952
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    ADD ESP,0xc                         ; 00533957
    LEA EAX,[ESI + 0x20]                ; 0053395a
    MOV dword ptr [ESP + 0x1bc],EDI     ; 0053395d
    MOV dword ptr [ESP + 0x1b8],EAX     ; 00533964
    MOV dword ptr [ESP + 0x1b4],EDI     ; 0053396b
    MOV EAX,[0x005be368]                ; 00533972 | DAT_005be368 | DAT_01e57284
        ;   Label: LAB_00533972
    MOV EDX,dword ptr [ESP + 0x1bc]     ; 00533977
    CMP EDX,dword ptr [EAX + 0x14ecb0]  ; 0053397e | DAT_01fa5f34
    JGE 0x00533c85                      ; 00533984
        ;   XREF to: 00533c85 (CONDITIONAL_JUMP)  ; LAB_00533c85
    ADD EAX,dword ptr [ESP + 0x1b4]     ; 0053398a
    MOV EBX,dword ptr [EAX + 0x14ecb4]  ; 00533991 | DAT_01fa5f38 | DAT_01fa5f3c
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 00533997
    LEA EDI,[EBX + 0x20]                ; 0053399e
    FLD float ptr [EAX]                 ; 005339a1
    FSUB float ptr [EDI]                ; 005339a3
    FMUL ST0                            ; 005339a5
    FLD float ptr [EAX + 0x4]           ; 005339a7
    FSUB float ptr [EDI + 0x4]          ; 005339aa
    FMUL ST0                            ; 005339ad
    FLD float ptr [EAX + 0x8]           ; 005339af
    FXCH                                ; 005339b2
    FADDP ST2,ST0                       ; 005339b4
    FSUB float ptr [EDI + 0x8]          ; 005339b6
    FMUL ST0                            ; 005339b9
    FADDP                               ; 005339bb
    FCOMP float ptr [ESP + 0x1ac]       ; 005339bd
    FNSTSW AX                           ; 005339c4
    SAHF                                ; 005339c6
    JBE 0x005339fe                      ; 005339c7
        ;   XREF to: 005339fe (CONDITIONAL_JUMP)  ; LAB_005339fe
    MOV ECX,dword ptr [ESP + 0x1bc]     ; 005339c9
        ;   Label: LAB_005339c9
    MOV EDX,dword ptr [ESP + 0x1b4]     ; 005339d0
    INC ECX                             ; 005339d7
    ADD EDX,0x4                         ; 005339d8
    MOV dword ptr [ESP + 0x1bc],ECX     ; 005339db
    MOV dword ptr [ESP + 0x1b4],EDX     ; 005339e2
    JMP 0x00533972                      ; 005339e9
        ;   XREF to: 00533972 (UNCONDITIONAL_JUMP)  ; LAB_00533972
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 005339eb
        ;   Label: LAB_005339eb
    MOV dword ptr [ESP + 0x1a8],EAX     ; 005339f2
    JMP 0x005338e2                      ; 005339f9
        ;   XREF to: 005338e2 (UNCONDITIONAL_JUMP)  ; LAB_005338e2
    LEA EAX,[ESP + 0xa8]                ; 005339fe
        ;   Label: LAB_005339fe
    PUSH EAX                            ; 00533a05
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990 ; 00533a06
        ;   XREF to: 00511990 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990()
    ADD ESP,0x4                         ; 00533a0b
    LEA EDX,[ESP + 0xa8]                ; 00533a0e
    XOR EAX,EAX                         ; 00533a15
    PUSH EDX                            ; 00533a17
    MOV dword ptr [ESP + 0xac],EAX      ; 00533a18
    PUSH EBX                            ; 00533a1f
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00533a20
    CALL dword ptr [EAX + 0x34]         ; 00533a26
    ADD ESP,0x8                         ; 00533a29
    MOV dword ptr [ESP + 0x1b0],EAX     ; 00533a2c
    TEST EAX,EAX                        ; 00533a33
    JZ 0x005339c9                       ; 00533a35
        ;   XREF to: 005339c9 (CONDITIONAL_JUMP)  ; LAB_005339c9
    PUSH EDI                            ; 00533a37
    LEA EAX,[ESP + 0x174]               ; 00533a38
    PUSH EAX                            ; 00533a3f
    XOR EDX,EDX                         ; 00533a40
    PUSH ESI                            ; 00533a42
    MOV dword ptr [ESP + 0xc8],EDX      ; 00533a43
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 00533a4a
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 00533a4f
    FLD float ptr [ESP + 0x170]         ; 00533a52
    FCOMP float ptr [ESP + 0xec]        ; 00533a59
    FNSTSW AX                           ; 00533a60
    SAHF                                ; 00533a62
    JNC 0x00533a73                      ; 00533a63
        ;   XREF to: 00533a73 (CONDITIONAL_JUMP)  ; LAB_00533a73
    MOV EAX,dword ptr [ESP + 0xec]      ; 00533a65
    MOV dword ptr [ESP + 0x170],EAX     ; 00533a6c
    FLD float ptr [ESP + 0x170]         ; 00533a73
        ;   Label: LAB_00533a73
    FCOMP float ptr [ESP + 0xf8]        ; 00533a7a
    FNSTSW AX                           ; 00533a81
    SAHF                                ; 00533a83
    JBE 0x00533a94                      ; 00533a84
        ;   XREF to: 00533a94 (CONDITIONAL_JUMP)  ; LAB_00533a94
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00533a86
    MOV dword ptr [ESP + 0x170],EAX     ; 00533a8d
    FLD float ptr [ESP + 0x174]         ; 00533a94
        ;   Label: LAB_00533a94
    FCOMP float ptr [ESP + 0xf0]        ; 00533a9b
    FNSTSW AX                           ; 00533aa2
    SAHF                                ; 00533aa4
    JNC 0x00533ab5                      ; 00533aa5
        ;   XREF to: 00533ab5 (CONDITIONAL_JUMP)  ; LAB_00533ab5
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00533aa7
    MOV dword ptr [ESP + 0x174],EAX     ; 00533aae
    FLD float ptr [ESP + 0x174]         ; 00533ab5
        ;   Label: LAB_00533ab5
    FCOMP float ptr [ESP + 0xfc]        ; 00533abc
    FNSTSW AX                           ; 00533ac3
    SAHF                                ; 00533ac5
    JBE 0x00533ad6                      ; 00533ac6
        ;   XREF to: 00533ad6 (CONDITIONAL_JUMP)  ; LAB_00533ad6
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00533ac8
    MOV dword ptr [ESP + 0x174],EAX     ; 00533acf
    LEA EAX,[ESP + 0x170]               ; 00533ad6
        ;   Label: LAB_00533ad6
    PUSH EAX                            ; 00533add
    LEA EAX,[ESP + 0x15c]               ; 00533ade
    PUSH EAX                            ; 00533ae5
    XOR ECX,ECX                         ; 00533ae6
    PUSH ESI                            ; 00533ae8
    MOV dword ptr [ESP + 0x184],ECX     ; 00533ae9
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00533af0
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00533af5
    LEA EAX,[ESP + 0x104]               ; 00533af8
    PUSH EAX                            ; 00533aff
    MOV EDI,dword ptr [ESP + 0x1b4]     ; 00533b00
    PUSH EDI                            ; 00533b07
    LEA EAX,[ESP + 0xb0]                ; 00533b08
    PUSH EAX                            ; 00533b0f
    LEA EAX,[ESP + 0xdc]                ; 00533b10
    PUSH EAX                            ; 00533b17
    LEA EAX,[ESP + 0x150]               ; 00533b18
    PUSH EAX                            ; 00533b1f
    LEA EAX,[ESP + 0x16c]               ; 00533b20
    PUSH EAX                            ; 00533b27
    PUSH EBX                            ; 00533b28
    CALL core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740 ; 00533b29
        ;   XREF to: 0040a740 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740()
    MOV dword ptr [ESP + 0x1dc],EAX     ; 00533b2e
    FLD float ptr [ESP + 0x1dc]         ; 00533b35
    ADD ESP,0x1c                        ; 00533b3c
    FLDZ                                ; 00533b3f
    FXCH                                ; 00533b41
    FST float ptr [ESP + 0x8]           ; 00533b43
    FSTP double ptr [ESP]               ; 00533b47
    FCOMP double ptr [ESP]              ; 00533b4a
    FNSTSW AX                           ; 00533b4d
    SAHF                                ; 00533b4f
    JA 0x005339c9                       ; 00533b50
        ;   XREF to: 005339c9 (CONDITIONAL_JUMP)  ; LAB_005339c9
    FLD1                                ; 00533b56
    FCOMP double ptr [ESP]              ; 00533b58
    FNSTSW AX                           ; 00533b5b
    SAHF                                ; 00533b5d
    JC 0x005339c9                       ; 00533b5e
        ;   XREF to: 005339c9 (CONDITIONAL_JUMP)  ; LAB_005339c9
    FLD float ptr [ESP + 0x8]           ; 00533b64
    FLD float ptr [ESP + 0x140]         ; 00533b68
    FMUL ST1                            ; 00533b6f
    FLD float ptr [ESP + 0x144]         ; 00533b71
    FMUL ST2                            ; 00533b78
    FLD float ptr [ESP + 0x148]         ; 00533b7a
    FMULP ST3                           ; 00533b81
    FLD float ptr [ESP + 0x158]         ; 00533b83
    FLD float ptr [ESP + 0x15c]         ; 00533b8a
    LEA EAX,[ESP + 0x128]               ; 00533b91
    FLD float ptr [ESP + 0x160]         ; 00533b98
    PUSH EAX                            ; 00533b9f
    FXCH ST4                            ; 00533ba0
    FSTP float ptr [ESP + 0x180]        ; 00533ba2
    FXCH ST2                            ; 00533ba9
    FSTP float ptr [ESP + 0x184]        ; 00533bab
    FXCH ST3                            ; 00533bb2
    FSTP float ptr [ESP + 0x188]        ; 00533bb4
    LEA EAX,[ESP + 0x138]               ; 00533bbb
    FXCH ST2                            ; 00533bc2
    FADD float ptr [ESP + 0x180]        ; 00533bc4
    FXCH ST2                            ; 00533bcb
    FADD float ptr [ESP + 0x184]        ; 00533bcd
    FXCH                                ; 00533bd4
    FADD float ptr [ESP + 0x188]        ; 00533bd6
    PUSH EAX                            ; 00533bdd
    FXCH ST2                            ; 00533bde
    FSTP float ptr [ESP + 0x130]        ; 00533be0
    FSTP float ptr [ESP + 0x134]        ; 00533be7
    PUSH EBX                            ; 00533bee
    FSTP float ptr [ESP + 0x13c]        ; 00533bef
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 00533bf6
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 00533bfb
    LEA EAX,[ESP + 0x6c]                ; 00533bfe
    PUSH EAX                            ; 00533c02
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 00533c03
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 00533c08
    MOV EAX,dword ptr [ESI + 0x550]     ; 00533c0b
    MOV dword ptr [ESP + 0x70],EAX      ; 00533c11
    MOV EAX,0x67                        ; 00533c15
    LEA EDI,[ESP + 0x88]                ; 00533c1a
    MOV dword ptr [ESP + 0x9c],EAX      ; 00533c21
    LEA EAX,[ESP + 0x134]               ; 00533c28
    CMP EDI,EAX                         ; 00533c2f
    JZ 0x00533c5d                       ; 00533c31
        ;   XREF to: 00533c5d (CONDITIONAL_JUMP)  ; LAB_00533c5d
    MOV EAX,dword ptr [ESP + 0x134]     ; 00533c33
    MOV dword ptr [ESP + 0x88],EAX      ; 00533c3a
    MOV EAX,dword ptr [ESP + 0x138]     ; 00533c41
    MOV dword ptr [ESP + 0x8c],EAX      ; 00533c48
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00533c4f
    MOV dword ptr [ESP + 0x90],EAX      ; 00533c56
    LEA EDI,[ESP + 0x6c]                ; 00533c5d
        ;   Label: LAB_00533c5d
    MOV dword ptr [ESP + 0xa0],ESI      ; 00533c61
    MOV dword ptr [ESP + 0xa4],ESI      ; 00533c68
    PUSH EDI                            ; 00533c6f
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00533c70
    PUSH EBX                            ; 00533c76
    CALL dword ptr [EAX + 0x100]        ; 00533c77
    ADD ESP,0x8                         ; 00533c7d
    JMP 0x005339c9                      ; 00533c80
        ;   XREF to: 005339c9 (UNCONDITIONAL_JUMP)  ; LAB_005339c9
    MOV ESP,EBP                         ; 00533c85
        ;   Label: LAB_00533c85
    POP EBP                             ; 00533c87
    POP EDI                             ; 00533c88
    POP ESI                             ; 00533c89
    POP EBX                             ; 00533c8a
    RET                                 ; 00533c8b

