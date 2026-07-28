; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_CCrater_activate_FUN_004876d0(CCrater *param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createCrater_FUN_0048c370 at 0048c38e
;
; Referenced Globals:
;   double DOUBLE_0058129c = 0.5
;   double DOUBLE_005812a4 = 0.150000000000000
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_fire.cpp_CCrater_render_FUN_00487af0
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004876d0
        ;   Label: core_fire.cpp_CCrater_activate_FUN_004876d0
    PUSH ESI                            ; 004876d1
    PUSH EDI                            ; 004876d2
    PUSH EBP                            ; 004876d3
    SUB ESP,0x68                        ; 004876d4
    MOV ESI,dword ptr [ESP + 0x7c]      ; 004876d7
    MOV EBX,dword ptr [ESP + 0x80]      ; 004876db
    LEA EAX,[ESI + 0xc]                 ; 004876e2
    CMP EAX,EBX                         ; 004876e5
    JZ 0x004876f9                       ; 004876e7
        ;   XREF to: 004876f9 (CONDITIONAL_JUMP)  ; LAB_004876f9
    MOV EDX,dword ptr [EBX]             ; 004876e9
    MOV dword ptr [EAX],EDX             ; 004876eb
    MOV EDX,dword ptr [EBX + 0x4]       ; 004876ed
    MOV dword ptr [EAX + 0x4],EDX       ; 004876f0
    MOV EDX,dword ptr [EBX + 0x8]       ; 004876f3
    MOV dword ptr [EAX + 0x8],EDX       ; 004876f6
    PUSH ESI                            ; 004876f9
        ;   Label: LAB_004876f9
    CALL core_fire.cpp_CCrater_render_FUN_00487af0 ; 004876fa
        ;   XREF to: 00487af0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_render_FUN_00487af0(CCrater * this_ptr)
    ADD ESP,0x4                         ; 004876ff
    LEA EAX,[ESI + 0xc]                 ; 00487702
    PUSH 0x0                            ; 00487705
    MOV dword ptr [ESI],0x1             ; 00487707
    PUSH EAX                            ; 0048770d
    MOV EDX,dword ptr [0x005be368]      ; 0048770e | DAT_005be368
    MOV dword ptr [ESI + 0x4],0x0       ; 00487714
    PUSH EDX                            ; 0048771b | DAT_01e57284
    MOV dword ptr [ESI + 0x8],0x3dcccccd ; 0048771c
    MOV EBX,ESI                         ; 00487723
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80 ; 00487725
        ;   XREF to: 0050ec80 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80()
    MOV dword ptr [ESP + 0x70],EAX      ; 0048772a
    LEA EDI,[ESI + 0x24]                ; 0048772e
    MOV EAX,dword ptr [ESP + 0x70]      ; 00487731
    MOV dword ptr [ESI + 0x10],EAX      ; 00487735
    ADD ESP,0xc                         ; 00487738
    PUSH dword ptr [ESP + 0x84]         ; 0048773b
        ;   Label: LAB_0048773b
    FLD float ptr [ESP + 0x88]          ; 00487742
    FCHS                                ; 00487749
    FSTP float ptr [ESP + 0x64]         ; 0048774b
    PUSH dword ptr [ESP + 0x64]         ; 0048774f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00487753
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x6c],EAX      ; 00487758
    FLD float ptr [ESP + 0x6c]          ; 0048775c
    ADD ESP,0x8                         ; 00487760
    FMUL double ptr [0x0058129c]        ; 00487763 | DOUBLE_0058129c
    PUSH dword ptr [ESP + 0x84]         ; 00487769
    FADD float ptr [ESI + 0xc]          ; 00487770
    PUSH dword ptr [ESP + 0x64]         ; 00487773
    FSTP float ptr [EBX + 0x1c]         ; 00487777
    MOV EAX,dword ptr [ESI + 0x10]      ; 0048777a
    MOV dword ptr [EBX + 0x20],EAX      ; 0048777d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00487780
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x6c],EAX      ; 00487785
    FLD float ptr [ESP + 0x6c]          ; 00487789
    FMUL double ptr [0x0058129c]        ; 0048778d | DOUBLE_0058129c
    ADD EBX,0xc                         ; 00487793
    FADD float ptr [ESI + 0x14]         ; 00487796
    ADD ESP,0x8                         ; 00487799
    FSTP float ptr [EBX + 0x18]         ; 0048779c
    CMP EBX,EDI                         ; 0048779f
    JNZ 0x0048773b                      ; 004877a1
        ;   XREF to: 0048773b (CONDITIONAL_JUMP)  ; LAB_0048773b
    MOV EAX,dword ptr [ESP + 0x60]      ; 004877a3
    LEA EBX,[ESI + 0xc]                 ; 004877a7
    XOR ECX,ECX                         ; 004877aa
    MOV dword ptr [ESP],EAX             ; 004877ac
    MOV dword ptr [ESP + 0x4],ECX       ; 004877af
    MOV dword ptr [ESP + 0x8],EAX       ; 004877b3
    FLD float ptr [EBX]                 ; 004877b7
    FADD float ptr [ESP + 0x60]         ; 004877b9
    FSTP float ptr [ESP + 0x30]         ; 004877bd
    MOV EAX,dword ptr [EBX + 0x4]       ; 004877c1
    MOV dword ptr [ESP + 0x34],EAX      ; 004877c4
    FLD float ptr [EBX + 0x8]           ; 004877c8
    LEA EAX,[ESP + 0x30]                ; 004877cb
    FADD float ptr [ESP + 0x60]         ; 004877cf
    LEA EBX,[ESI + 0x40]                ; 004877d3
    FSTP float ptr [ESP + 0x38]         ; 004877d6
    CMP EBX,EAX                         ; 004877da
    JZ 0x004877f2                       ; 004877dc
        ;   XREF to: 004877f2 (CONDITIONAL_JUMP)  ; LAB_004877f2
    MOV EAX,dword ptr [ESP + 0x30]      ; 004877de
    MOV dword ptr [EBX],EAX             ; 004877e2
    MOV EAX,dword ptr [ESP + 0x34]      ; 004877e4
    MOV dword ptr [EBX + 0x4],EAX       ; 004877e8
    MOV EAX,dword ptr [ESP + 0x38]      ; 004877eb
    MOV dword ptr [EBX + 0x8],EAX       ; 004877ef
    FLD float ptr [ESP + 0x84]          ; 004877f2
        ;   Label: LAB_004877f2
    MOV EAX,dword ptr [ESP + 0x84]      ; 004877f9
    FCHS                                ; 00487800
    XOR EBX,EBX                         ; 00487802
    FSTP float ptr [ESP + 0x64]         ; 00487804
    MOV dword ptr [ESP + 0x18],EAX      ; 00487808
    MOV dword ptr [ESP + 0x1c],EBX      ; 0048780c
    MOV EAX,dword ptr [ESP + 0x64]      ; 00487810
    LEA EBX,[ESI + 0xc]                 ; 00487814
    MOV dword ptr [ESP + 0x20],EAX      ; 00487817
    FLD float ptr [EBX]                 ; 0048781b
    FADD float ptr [ESP + 0x84]         ; 0048781d
    FSTP float ptr [ESP + 0x54]         ; 00487824
    MOV EAX,dword ptr [EBX + 0x4]       ; 00487828
    MOV dword ptr [ESP + 0x58],EAX      ; 0048782b
    FLD float ptr [EBX + 0x8]           ; 0048782f
    LEA EAX,[ESP + 0x54]                ; 00487832
    FADD float ptr [ESP + 0x64]         ; 00487836
    LEA EBX,[ESI + 0x4c]                ; 0048783a
    FSTP float ptr [ESP + 0x5c]         ; 0048783d
    CMP EBX,EAX                         ; 00487841
    JZ 0x00487859                       ; 00487843
        ;   XREF to: 00487859 (CONDITIONAL_JUMP)  ; LAB_00487859
    MOV EAX,dword ptr [ESP + 0x54]      ; 00487845
    MOV dword ptr [EBX],EAX             ; 00487849
    MOV EAX,dword ptr [ESP + 0x58]      ; 0048784b
    MOV dword ptr [EBX + 0x4],EAX       ; 0048784f
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00487852
    MOV dword ptr [EBX + 0x8],EAX       ; 00487856
    MOV EAX,dword ptr [ESP + 0x84]      ; 00487859
        ;   Label: LAB_00487859
    LEA EBX,[ESI + 0xc]                 ; 00487860
    XOR EDI,EDI                         ; 00487863
    MOV dword ptr [ESP + 0xc],EAX       ; 00487865
    MOV dword ptr [ESP + 0x10],EDI      ; 00487869
    MOV dword ptr [ESP + 0x14],EAX      ; 0048786d
    FLD float ptr [EBX]                 ; 00487871
    FADD float ptr [ESP + 0x84]         ; 00487873
    FSTP float ptr [ESP + 0x3c]         ; 0048787a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0048787e
    MOV dword ptr [ESP + 0x40],EAX      ; 00487881
    FLD float ptr [EBX + 0x8]           ; 00487885
    LEA EAX,[ESP + 0x3c]                ; 00487888
    FADD float ptr [ESP + 0x84]         ; 0048788c
    LEA EBX,[ESI + 0x58]                ; 00487893
    FSTP float ptr [ESP + 0x44]         ; 00487896
    CMP EBX,EAX                         ; 0048789a
    JZ 0x004878b2                       ; 0048789c
        ;   XREF to: 004878b2 (CONDITIONAL_JUMP)  ; LAB_004878b2
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0048789e
    MOV dword ptr [EBX],EAX             ; 004878a2
    MOV EAX,dword ptr [ESP + 0x40]      ; 004878a4
    MOV dword ptr [EBX + 0x4],EAX       ; 004878a8
    MOV EAX,dword ptr [ESP + 0x44]      ; 004878ab
    MOV dword ptr [EBX + 0x8],EAX       ; 004878af
    FLD float ptr [ESP + 0x84]          ; 004878b2
        ;   Label: LAB_004878b2
    FCHS                                ; 004878b9
    LEA EBX,[ESI + 0xc]                 ; 004878bb
    FSTP float ptr [ESP + 0x64]         ; 004878be
    MOV EAX,dword ptr [ESP + 0x64]      ; 004878c2
    XOR EBP,EBP                         ; 004878c6
    MOV dword ptr [ESP + 0x48],EAX      ; 004878c8
    MOV EAX,dword ptr [ESP + 0x84]      ; 004878cc
    MOV dword ptr [ESP + 0x4c],EBP      ; 004878d3
    MOV dword ptr [ESP + 0x50],EAX      ; 004878d7
    FLD float ptr [EBX]                 ; 004878db
    FADD float ptr [ESP + 0x64]         ; 004878dd
    FSTP float ptr [ESP + 0x24]         ; 004878e1
    MOV EAX,dword ptr [EBX + 0x4]       ; 004878e5
    MOV dword ptr [ESP + 0x28],EAX      ; 004878e8
    FLD float ptr [EBX + 0x8]           ; 004878ec
    LEA EAX,[ESP + 0x24]                ; 004878ef
    FADD float ptr [ESP + 0x84]         ; 004878f3
    LEA EBX,[ESI + 0x64]                ; 004878fa
    FSTP float ptr [ESP + 0x2c]         ; 004878fd
    CMP EBX,EAX                         ; 00487901
    JZ 0x00487919                       ; 00487903
        ;   XREF to: 00487919 (CONDITIONAL_JUMP)  ; LAB_00487919
    MOV EAX,dword ptr [ESP + 0x24]      ; 00487905
    MOV dword ptr [EBX],EAX             ; 00487909
    MOV EAX,dword ptr [ESP + 0x28]      ; 0048790b
    MOV dword ptr [EBX + 0x4],EAX       ; 0048790f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00487912
    MOV dword ptr [EBX + 0x8],EAX       ; 00487916
    LEA EAX,[ESI + 0x40]                ; 00487919
        ;   Label: LAB_00487919
    PUSH 0x0                            ; 0048791c
    PUSH EAX                            ; 0048791e
    MOV EAX,[0x005be368]                ; 0048791f | DAT_005be368
    PUSH EAX                            ; 00487924 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80 ; 00487925
        ;   XREF to: 0050ec80 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80()
    MOV dword ptr [ESP + 0x70],EAX      ; 0048792a
    FLD float ptr [ESP + 0x70]          ; 0048792e
    ADD ESP,0xc                         ; 00487932
    LEA EAX,[ESI + 0x4c]                ; 00487935
    PUSH 0x0                            ; 00487938
    MOV EDX,dword ptr [0x005be368]      ; 0048793a | DAT_005be368
    PUSH EAX                            ; 00487940
    FADD double ptr [0x005812a4]        ; 00487941 | DOUBLE_005812a4
    PUSH EDX                            ; 00487947 | DAT_01e57284
    FSTP float ptr [ESI + 0x44]         ; 00487948
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80 ; 0048794b
        ;   XREF to: 0050ec80 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80()
    MOV dword ptr [ESP + 0x70],EAX      ; 00487950
    FLD float ptr [ESP + 0x70]          ; 00487954
    ADD ESP,0xc                         ; 00487958
    LEA EAX,[ESI + 0x58]                ; 0048795b
    PUSH 0x0                            ; 0048795e
    MOV ECX,dword ptr [0x005be368]      ; 00487960 | DAT_005be368
    PUSH EAX                            ; 00487966
    FADD double ptr [0x005812a4]        ; 00487967 | DOUBLE_005812a4
    PUSH ECX                            ; 0048796d | DAT_01e57284
    FSTP float ptr [ESI + 0x50]         ; 0048796e
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80 ; 00487971
        ;   XREF to: 0050ec80 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80()
    MOV dword ptr [ESP + 0x70],EAX      ; 00487976
    FLD float ptr [ESP + 0x70]          ; 0048797a
    ADD ESP,0xc                         ; 0048797e
    LEA EAX,[ESI + 0x64]                ; 00487981
    PUSH 0x0                            ; 00487984
    MOV EBX,dword ptr [0x005be368]      ; 00487986 | DAT_005be368
    PUSH EAX                            ; 0048798c
    FADD double ptr [0x005812a4]        ; 0048798d | DOUBLE_005812a4
    PUSH EBX                            ; 00487993 | DAT_01e57284
    FSTP float ptr [ESI + 0x5c]         ; 00487994
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80 ; 00487997
        ;   XREF to: 0050ec80 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80()
    FLD float ptr [ESI + 0x44]          ; 0048799c
    FSUB float ptr [ESI + 0x10]         ; 0048799f
    MOV dword ptr [ESP + 0x70],EAX      ; 004879a2
    FABS                                ; 004879a6
    FLD float ptr [ESP + 0x70]          ; 004879a8
    FADD double ptr [0x005812a4]        ; 004879ac | DOUBLE_005812a4
    ADD ESP,0xc                         ; 004879b2
    FSTP float ptr [ESI + 0x68]         ; 004879b5
    FLD1                                ; 004879b8
    FCOMPP                              ; 004879ba
    FNSTSW AX                           ; 004879bc
    SAHF                                ; 004879be
    JNC 0x004879c7                      ; 004879bf
        ;   XREF to: 004879c7 (CONDITIONAL_JUMP)  ; LAB_004879c7
    MOV EAX,dword ptr [ESI + 0x10]      ; 004879c1
    MOV dword ptr [ESI + 0x44],EAX      ; 004879c4
    FLD float ptr [ESI + 0x50]          ; 004879c7
        ;   Label: LAB_004879c7
    FSUB float ptr [ESI + 0x10]         ; 004879ca
    FABS                                ; 004879cd
    FLD1                                ; 004879cf
    FCOMPP                              ; 004879d1
    FNSTSW AX                           ; 004879d3
    SAHF                                ; 004879d5
    JNC 0x004879de                      ; 004879d6
        ;   XREF to: 004879de (CONDITIONAL_JUMP)  ; LAB_004879de
    MOV EAX,dword ptr [ESI + 0x10]      ; 004879d8
    MOV dword ptr [ESI + 0x50],EAX      ; 004879db
    FLD float ptr [ESI + 0x5c]          ; 004879de
        ;   Label: LAB_004879de
    FSUB float ptr [ESI + 0x10]         ; 004879e1
    FABS                                ; 004879e4
    FLD1                                ; 004879e6
    FCOMPP                              ; 004879e8
    FNSTSW AX                           ; 004879ea
    SAHF                                ; 004879ec
    JNC 0x004879f5                      ; 004879ed
        ;   XREF to: 004879f5 (CONDITIONAL_JUMP)  ; LAB_004879f5
    MOV EAX,dword ptr [ESI + 0x10]      ; 004879ef
    MOV dword ptr [ESI + 0x5c],EAX      ; 004879f2
    FLD float ptr [ESI + 0x68]          ; 004879f5
        ;   Label: LAB_004879f5
    FSUB float ptr [ESI + 0x10]         ; 004879f8
    FABS                                ; 004879fb
    FLD1                                ; 004879fd
    FCOMPP                              ; 004879ff
    FNSTSW AX                           ; 00487a01
    SAHF                                ; 00487a03
    JC 0x00487a0e                       ; 00487a04
        ;   XREF to: 00487a0e (CONDITIONAL_JUMP)  ; LAB_00487a0e
    ADD ESP,0x68                        ; 00487a06
    POP EBP                             ; 00487a09
    POP EDI                             ; 00487a0a
    POP ESI                             ; 00487a0b
    POP EBX                             ; 00487a0c
    RET                                 ; 00487a0d
    MOV EAX,dword ptr [ESI + 0x10]      ; 00487a0e
        ;   Label: LAB_00487a0e
    MOV dword ptr [ESI + 0x68],EAX      ; 00487a11
    ADD ESP,0x68                        ; 00487a14
    POP EBP                             ; 00487a17
    POP EDI                             ; 00487a18
    POP ESI                             ; 00487a19
    POP EBX                             ; 00487a1a
    RET                                 ; 00487a1b

