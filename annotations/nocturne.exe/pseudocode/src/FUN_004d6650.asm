; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d6650(float *param_1,float *param_2,undefined4 param_3,float param_4)
;
; Local Variables:
; undefined8       Stack[-0x4d0]:8  local_4d0
; undefined8       Stack[-0x4c8]:8  local_4c8
; undefined8       Stack[-0x4c0]:8  local_4c0
; undefined4       Stack[-0x4b8]:4  local_4b8
; undefined4       Stack[-0x4b4]:4  local_4b4
; undefined4       Stack[-0x4b0]:4  local_4b0
; undefined4       Stack[-0x4ac]:4  local_4ac
; undefined4       Stack[-0x4a8]:4  local_4a8
; undefined        Stack[-0x4a4]:1  local_4a4
; undefined        Stack[-0x474]:1  local_474
; undefined        Stack[-0x444]:1  local_444
; undefined        Stack[-0x414]:1  local_414
; undefined        Stack[-0x3e4]:1  local_3e4
; undefined4       Stack[-0x3d8]:4  local_3d8
; undefined4       Stack[-0x3c8]:4  local_3c8
; undefined4       Stack[-0x3b8]:4  local_3b8
; undefined        Stack[-0x3b4]:1  local_3b4
; undefined        Stack[-0x384]:1  local_384
; undefined        Stack[-0x354]:1  local_354
; undefined4       Stack[-0x32c]:4  local_32c
; undefined        Stack[-0x324]:1  local_324
; undefined        Stack[-0x2f4]:1  local_2f4
; undefined4       Stack[-0x2c4]:4  local_2c4
; undefined4       Stack[-0x2c0]:4  local_2c0
; undefined4       Stack[-0x2bc]:4  local_2bc
; undefined4       Stack[-0x2b8]:4  local_2b8
; undefined4       Stack[-0x2b4]:4  local_2b4
; undefined4       Stack[-0x2b0]:4  local_2b0
; undefined4       Stack[-0x2ac]:4  local_2ac
; undefined4       Stack[-0x2a8]:4  local_2a8
; undefined4       Stack[-0x2a4]:4  local_2a4
; undefined4       Stack[-0x2a0]:4  local_2a0
; undefined4       Stack[-0x29c]:4  local_29c
; undefined4       Stack[-0x298]:4  local_298
; undefined        Stack[-0x294]:1  local_294
; undefined        Stack[-0x264]:1  local_264
; undefined        Stack[-0x234]:1  local_234
; undefined        Stack[-0x204]:1  local_204
; undefined        Stack[-0x1d4]:1  local_1d4
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined        Stack[-0x188]:1  local_188
; undefined        Stack[-0x17c]:1  local_17c
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined        Stack[-0x140]:1  local_140
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined        Stack[-0x11c]:1  local_11c
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined        Stack[-0x8c]:1  local_8c
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x50]:1  local_50
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
;
; XREF[1]:
;   core_set.cpp_FUN_0050e080 at 0050e139
;
; Referenced Globals:
;   double DOUBLE_0058960a = 0.0000152587890625
;   undefined4 DAT_01c039e8
;   undefined4 DAT_01c039ec
;   undefined4 DAT_01c039f0
;   undefined4 DAT_01c039f4
;   undefined4 DAT_01c039f8
;   undefined4 DAT_01c039fc
;   undefined4 DAT_01c03a00
;   undefined4 DAT_01c03a04
;   undefined4 DAT_01c03a08
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004d6610
;   core_mirror.cpp_computePlaneFromTriangle_FUN_004d6170
;   core_xform.cpp_inverse_FUN_0055bd00
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;   core_xform.cpp_setIdentityMatrix3x4_FUN_0055abf0
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6650
        ;   Label: FUN_004d6650
    PUSH ESI                            ; 004d6651
    PUSH EDI                            ; 004d6652
    PUSH EBP                            ; 004d6653
    MOV EBP,ESP                         ; 004d6654
    SUB ESP,0x4c0                       ; 004d6656
    AND ESP,0xfffffff8                  ; 004d665c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d665f
    LEA EAX,[EBX + 0x18]                ; 004d6662
    PUSH EAX                            ; 004d6665
    LEA EAX,[EBX + 0xc]                 ; 004d6666
    PUSH EAX                            ; 004d6669
    PUSH EBX                            ; 004d666a
    LEA EAX,[ESP + 0x338]               ; 004d666b
    PUSH EAX                            ; 004d6672
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_004d6170 ; 004d6673
        ;   XREF to: 004d6170 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_computePlaneFromTriangle_FUN_004d6170()
    ADD ESP,0x10                        ; 004d6678
    MOV EAX,dword ptr [ESP + 0x32c]     ; 004d667b
    FLD float ptr [ESP + 0x32c]         ; 004d6682
    MOV dword ptr [ESP + 0x20],EAX      ; 004d6689
    MOV EAX,dword ptr [ESP + 0x330]     ; 004d668d
    FSTP double ptr [ESP + 0x8]         ; 004d6694
    MOV dword ptr [ESP + 0x24],EAX      ; 004d6698
    MOV EAX,dword ptr [ESP + 0x334]     ; 004d669c
    FLD double ptr [ESP + 0x8]          ; 004d66a3
    MOV dword ptr [ESP + 0x28],EAX      ; 004d66a7
    FABS                                ; 004d66ab
    FLD float ptr [ESP + 0x330]         ; 004d66ad
    FABS                                ; 004d66b4
    FXCH                                ; 004d66b6
    FSTP double ptr [ESP + 0x10]        ; 004d66b8
    FCOMP double ptr [ESP + 0x10]       ; 004d66bc
    FNSTSW AX                           ; 004d66c0
    SAHF                                ; 004d66c2
    JNC 0x004d73df                      ; 004d66c3
        ;   XREF to: 004d73df (CONDITIONAL_JUMP)  ; LAB_004d73df
    FLD float ptr [ESP + 0x334]         ; 004d66c9
    FABS                                ; 004d66d0
    FCOMP double ptr [ESP + 0x10]       ; 004d66d2
    FNSTSW AX                           ; 004d66d6
    SAHF                                ; 004d66d8
    JNC 0x004d73df                      ; 004d66d9
        ;   XREF to: 004d73df (CONDITIONAL_JUMP)  ; LAB_004d73df
    MOV ESI,0x3f800000                  ; 004d66df
    XOR ECX,ECX                         ; 004d66e4
    MOV dword ptr [ESP + 0x370],ESI     ; 004d66e6
    MOV dword ptr [ESP + 0x374],ECX     ; 004d66ed
    MOV dword ptr [ESP + 0x36c],ECX     ; 004d66f4
    FLD float ptr [ESP + 0x370]         ; 004d66fb
        ;   Label: LAB_004d66fb
    FMUL float ptr [ESP + 0x28]         ; 004d6702
    FLD float ptr [ESP + 0x374]         ; 004d6706
    FMUL float ptr [ESP + 0x20]         ; 004d670d
    FLD float ptr [ESP + 0x36c]         ; 004d6711
    FMUL float ptr [ESP + 0x24]         ; 004d6718
    FLD float ptr [ESP + 0x374]         ; 004d671c
    FMUL float ptr [ESP + 0x24]         ; 004d6723
    FLD float ptr [ESP + 0x36c]         ; 004d6727
    FMUL float ptr [ESP + 0x28]         ; 004d672e
    MOV EAX,dword ptr [ESP + 0x20]      ; 004d6732
    FLD float ptr [ESP + 0x370]         ; 004d6736
    FMUL float ptr [ESP + 0x20]         ; 004d673d
    MOV dword ptr [ESP + 0x384],EAX     ; 004d6741
    MOV EAX,dword ptr [ESP + 0x24]      ; 004d6748
    LEA EDX,[ESP + 0x33c]               ; 004d674c
    MOV dword ptr [ESP + 0x388],EAX     ; 004d6753
    MOV EAX,dword ptr [ESP + 0x28]      ; 004d675a
    FXCH ST2                            ; 004d675e
    FSUBP ST5,ST0                       ; 004d6760
    FSUBP ST3,ST0                       ; 004d6762
    FSUBP                               ; 004d6764
    MOV dword ptr [ESP + 0x38c],EAX     ; 004d6766
    FXCH ST2                            ; 004d676d
    FSTP float ptr [ESP + 0x420]        ; 004d676f
    FSTP float ptr [ESP + 0x424]        ; 004d6776
    LEA EAX,[ESP + 0x420]               ; 004d677d
    FSTP float ptr [ESP + 0x428]        ; 004d6784
    CMP EDX,EAX                         ; 004d678b
    JZ 0x004d67b9                       ; 004d678d
        ;   XREF to: 004d67b9 (CONDITIONAL_JUMP)  ; LAB_004d67b9
    MOV EAX,dword ptr [ESP + 0x420]     ; 004d678f
    MOV dword ptr [ESP + 0x33c],EAX     ; 004d6796
    MOV EAX,dword ptr [ESP + 0x424]     ; 004d679d
    MOV dword ptr [ESP + 0x340],EAX     ; 004d67a4
    MOV EAX,dword ptr [ESP + 0x428]     ; 004d67ab
    MOV dword ptr [ESP + 0x344],EAX     ; 004d67b2
    FLD float ptr [ESP + 0x340]         ; 004d67b9
        ;   Label: LAB_004d67b9
    FMUL ST0                            ; 004d67c0
    FLD float ptr [ESP + 0x33c]         ; 004d67c2
    FMUL ST0                            ; 004d67c9
    FADDP                               ; 004d67cb
    FLD float ptr [ESP + 0x344]         ; 004d67cd
    FMUL ST0                            ; 004d67d4
    FADDP                               ; 004d67d6
    FSQRT                               ; 004d67d8
    FST float ptr [ESP + 0x18]          ; 004d67da
    FLDZ                                ; 004d67de
    FCOMPP                              ; 004d67e0
    FNSTSW AX                           ; 004d67e2
    SAHF                                ; 004d67e4
    JNC 0x004d7446                      ; 004d67e5
        ;   XREF to: 004d7446 (CONDITIONAL_JUMP)  ; LAB_004d7446
    FLD1                                ; 004d67eb
    FLD float ptr [ESP + 0x33c]         ; 004d67ed
    FXCH                                ; 004d67f4
    FDIV float ptr [ESP + 0x18]         ; 004d67f6
    FXCH                                ; 004d67fa
    FMUL ST1                            ; 004d67fc
    FLD float ptr [ESP + 0x340]         ; 004d67fe
    FMUL ST2                            ; 004d6805
    FLD float ptr [ESP + 0x344]         ; 004d6807
    FMULP ST3                           ; 004d680e
    FXCH                                ; 004d6810
    FSTP float ptr [ESP + 0x33c]        ; 004d6812
    FSTP float ptr [ESP + 0x340]        ; 004d6819
    FSTP float ptr [ESP + 0x344]        ; 004d6820
    FLD float ptr [ESP + 0x388]         ; 004d6827
        ;   Label: LAB_004d6827
    FMUL float ptr [ESP + 0x344]        ; 004d682e
    FLD float ptr [ESP + 0x38c]         ; 004d6835
    FMUL float ptr [ESP + 0x33c]        ; 004d683c
    FLD float ptr [ESP + 0x384]         ; 004d6843
    FMUL float ptr [ESP + 0x340]        ; 004d684a
    FLD float ptr [ESP + 0x38c]         ; 004d6851
    FMUL float ptr [ESP + 0x340]        ; 004d6858
    FLD float ptr [ESP + 0x384]         ; 004d685f
    FMUL float ptr [ESP + 0x344]        ; 004d6866
    FLD float ptr [ESP + 0x388]         ; 004d686d
    FMUL float ptr [ESP + 0x33c]        ; 004d6874
    LEA EAX,[ESP + 0x378]               ; 004d687b
    LEA EDX,[ESP + 0x36c]               ; 004d6882
    FXCH ST2                            ; 004d6889
    FSUBP ST5,ST0                       ; 004d688b
    FSUBP ST3,ST0                       ; 004d688d
    FSUBP                               ; 004d688f
    FXCH                                ; 004d6891
    FSTP float ptr [ESP + 0x37c]        ; 004d6893
    FSTP float ptr [ESP + 0x380]        ; 004d689a
    FSTP float ptr [ESP + 0x378]        ; 004d68a1
    CMP EDX,EAX                         ; 004d68a8
    JZ 0x004d68d6                       ; 004d68aa
        ;   XREF to: 004d68d6 (CONDITIONAL_JUMP)  ; LAB_004d68d6
    MOV EAX,dword ptr [ESP + 0x378]     ; 004d68ac
    MOV dword ptr [ESP + 0x36c],EAX     ; 004d68b3
    MOV EAX,dword ptr [ESP + 0x37c]     ; 004d68ba
    MOV dword ptr [ESP + 0x370],EAX     ; 004d68c1
    MOV EAX,dword ptr [ESP + 0x380]     ; 004d68c8
    MOV dword ptr [ESP + 0x374],EAX     ; 004d68cf
    FLD float ptr [ESP + 0x370]         ; 004d68d6
        ;   Label: LAB_004d68d6
    FMUL ST0                            ; 004d68dd
    FLD float ptr [ESP + 0x36c]         ; 004d68df
    FMUL ST0                            ; 004d68e6
    FADDP                               ; 004d68e8
    FLD float ptr [ESP + 0x374]         ; 004d68ea
    FMUL ST0                            ; 004d68f1
    FADDP                               ; 004d68f3
    FSQRT                               ; 004d68f5
    FST float ptr [ESP + 0x1c]          ; 004d68f7
    FLDZ                                ; 004d68fb
    FCOMPP                              ; 004d68fd
    FNSTSW AX                           ; 004d68ff
    SAHF                                ; 004d6901
    JNC 0x004d7462                      ; 004d6902
        ;   XREF to: 004d7462 (CONDITIONAL_JUMP)  ; LAB_004d7462
    FLD1                                ; 004d6908
    FLD float ptr [ESP + 0x36c]         ; 004d690a
    FXCH                                ; 004d6911
    FDIV float ptr [ESP + 0x1c]         ; 004d6913
    FXCH                                ; 004d6917
    FMUL ST1                            ; 004d6919
    FLD float ptr [ESP + 0x370]         ; 004d691b
    FMUL ST2                            ; 004d6922
    FLD float ptr [ESP + 0x374]         ; 004d6924
    FMULP ST3                           ; 004d692b
    FXCH                                ; 004d692d
    FSTP float ptr [ESP + 0x36c]        ; 004d692f
    FSTP float ptr [ESP + 0x370]        ; 004d6936
    FSTP float ptr [ESP + 0x374]        ; 004d693d
    LEA EAX,[ESP + 0xec]                ; 004d6944
        ;   Label: LAB_004d6944
    PUSH EAX                            ; 004d694b
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_0055abf0 ; 004d694c
        ;   XREF to: 0055abf0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityMatrix3x4_FUN_0055abf0()
    FLD float ptr [EBX]                 ; 004d6951
    ADD ESP,0x4                         ; 004d6953
    FCHS                                ; 004d6956
    FSTP float ptr [ESP + 0xf8]         ; 004d6958
    MOV EAX,dword ptr [ESP + 0x33c]     ; 004d695f
    FLD float ptr [EBX + 0x4]           ; 004d6966
    FCHS                                ; 004d6969
    FSTP float ptr [ESP + 0x108]        ; 004d696b
    FLD float ptr [EBX + 0x8]           ; 004d6972
    MOV dword ptr [ESP + 0x20c],EAX     ; 004d6975
    MOV EAX,dword ptr [ESP + 0x340]     ; 004d697c
    MOV dword ptr [ESP + 0x210],EAX     ; 004d6983
    MOV EAX,dword ptr [ESP + 0x344]     ; 004d698a
    MOV dword ptr [ESP + 0x214],EAX     ; 004d6991
    MOV EAX,dword ptr [ESP + 0x36c]     ; 004d6998
    MOV dword ptr [ESP + 0x21c],EAX     ; 004d699f
    MOV EAX,dword ptr [ESP + 0x370]     ; 004d69a6
    MOV dword ptr [ESP + 0x220],EAX     ; 004d69ad
    MOV EAX,dword ptr [ESP + 0x374]     ; 004d69b4
    MOV dword ptr [ESP + 0x224],EAX     ; 004d69bb
    MOV EAX,dword ptr [ESP + 0x384]     ; 004d69c2
    XOR EDX,EDX                         ; 004d69c9
    MOV dword ptr [ESP + 0x22c],EAX     ; 004d69cb
    MOV EAX,dword ptr [ESP + 0x388]     ; 004d69d2
    FCHS                                ; 004d69d9
    MOV dword ptr [ESP + 0x230],EAX     ; 004d69db
    MOV EAX,dword ptr [ESP + 0x38c]     ; 004d69e2
    FSTP float ptr [ESP + 0x118]        ; 004d69e9
    MOV dword ptr [ESP + 0x234],EAX     ; 004d69f0
    LEA EAX,[ESP + 0x17c]               ; 004d69f7
    MOV dword ptr [ESP + 0x218],EDX     ; 004d69fe
    PUSH EAX                            ; 004d6a05
    MOV dword ptr [ESP + 0x22c],EDX     ; 004d6a06
    MOV dword ptr [ESP + 0x23c],EDX     ; 004d6a0d
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_0055abf0 ; 004d6a14
        ;   XREF to: 0055abf0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityMatrix3x4_FUN_0055abf0()
    ADD ESP,0x4                         ; 004d6a19
    LEA EAX,[ESP + 0xec]                ; 004d6a1c
    MOV EDI,0xbf800000                  ; 004d6a23
    PUSH EAX                            ; 004d6a28
    LEA ESI,[ESP + 0x270]               ; 004d6a29
    MOV dword ptr [ESP + 0x1a8],EDI     ; 004d6a30
    CALL core_xform.cpp_inverse_FUN_0055bd00 ; 004d6a37
        ;   XREF to: 0055bd00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_inverse_FUN_0055bd00()
    MOV ECX,0xc                         ; 004d6a3c
    LEA EDI,[ESP + 0x2a0]               ; 004d6a41
    ADD ESP,0x4                         ; 004d6a48
    LEA EAX,[ESP + 0x29c]               ; 004d6a4b
    LEA ESI,[ESP + 0x26c]               ; 004d6a52
    PUSH EAX                            ; 004d6a59
    LEA EAX,[ESP + 0x210]               ; 004d6a5a
    MOVSD.REP ES:EDI,ESI                ; 004d6a61
    PUSH EAX                            ; 004d6a63
    LEA ESI,[ESP + 0x2d4]               ; 004d6a64
    CALL core_xform.cpp_inverse_FUN_0055bd00 ; 004d6a6b
        ;   XREF to: 0055bd00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_inverse_FUN_0055bd00()
    ADD ESP,0x4                         ; 004d6a70
    LEA EAX,[ESP + 0x120]               ; 004d6a73
    LEA EDI,[ESP + 0x120]               ; 004d6a7a
    PUSH EAX                            ; 004d6a81
    LEA EAX,[ESP + 0x184]               ; 004d6a82
    MOV ECX,0xc                         ; 004d6a89
    PUSH EAX                            ; 004d6a8e
    LEA EAX,[ESP + 0x218]               ; 004d6a8f
    LEA ESI,[ESP + 0x2d8]               ; 004d6a96
    PUSH EAX                            ; 004d6a9d
    LEA EAX,[ESP + 0xfc]                ; 004d6a9e
    MOVSD.REP ES:EDI,ESI                ; 004d6aa5
    PUSH EAX                            ; 004d6aa7
    LEA ESI,[ESP + 0x1f0]               ; 004d6aa8
    LEA EDI,[ESP + 0x310]               ; 004d6aaf
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004d6ab6
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 004d6abb
    LEA ESI,[ESP + 0x1f0]               ; 004d6ac0
    ADD ESP,0x8                         ; 004d6ac7
    LEA EAX,[ESP + 0x308]               ; 004d6aca
    MOVSD.REP ES:EDI,ESI                ; 004d6ad1
    PUSH EAX                            ; 004d6ad3
    LEA ESI,[ESP + 0xcc]                ; 004d6ad4
    LEA EDI,[ESP + 0x6c]                ; 004d6adb
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004d6adf
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 004d6ae4
    LEA ESI,[ESP + 0xcc]                ; 004d6ae9
    ADD ESP,0x8                         ; 004d6af0
    LEA EAX,[ESP + 0x64]                ; 004d6af3
    MOVSD.REP ES:EDI,ESI                ; 004d6af7
    PUSH EAX                            ; 004d6af9
    LEA ESI,[ESP + 0x98]                ; 004d6afa
    LEA EDI,[ESP + 0x158]               ; 004d6b01
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004d6b08
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 004d6b0d
    LEA ESI,[ESP + 0x98]                ; 004d6b12
    ADD ESP,0x8                         ; 004d6b19
    LEA EAX,[ESP + 0x150]               ; 004d6b1c
    MOVSD.REP ES:EDI,ESI                ; 004d6b23
    PUSH EAX                            ; 004d6b25
    LEA ESI,[ESP + 0x244]               ; 004d6b26
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004d6b2d
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    ADD ESP,0x8                         ; 004d6b32
    LEA EAX,[EBX + 0x30]                ; 004d6b35
    MOV ECX,0xc                         ; 004d6b38
    PUSH EAX                            ; 004d6b3d
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d6b3e
    LEA ESI,[ESP + 0x240]               ; 004d6b41
    PUSH EAX                            ; 004d6b48
    LEA EAX,[ESP + 0x44c]               ; 004d6b49
    LEA EDI,[EBX + 0x30]                ; 004d6b50
    PUSH EAX                            ; 004d6b53
    MOVSD.REP ES:EDI,ESI                ; 004d6b54
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004d6b56
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    LEA EDX,[EBX + 0x60]                ; 004d6b5b
    ADD ESP,0xc                         ; 004d6b5e
    CMP EDX,EAX                         ; 004d6b61
    JZ 0x004d6b75                       ; 004d6b63
        ;   XREF to: 004d6b75 (CONDITIONAL_JUMP)  ; LAB_004d6b75
    MOV ECX,dword ptr [EAX]             ; 004d6b65
    MOV dword ptr [EDX],ECX             ; 004d6b67
    MOV ECX,dword ptr [EAX + 0x4]       ; 004d6b69
    MOV dword ptr [EDX + 0x4],ECX       ; 004d6b6c
    MOV ECX,dword ptr [EAX + 0x8]       ; 004d6b6f
    MOV dword ptr [EDX + 0x8],ECX       ; 004d6b72
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004d6b75
        ;   Label: LAB_004d6b75
    PUSH EDX                            ; 004d6b78
    LEA EAX,[EBX + 0x70]                ; 004d6b79
    PUSH EAX                            ; 004d6b7c
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 004d6b7d
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0()
    ADD ESP,0x8                         ; 004d6b82
    MOV EAX,dword ptr [EBX + 0x74]      ; 004d6b85
    MOV dword ptr [ESP + 0x498],EAX     ; 004d6b88
    MOV EAX,dword ptr [EBX + 0x80]      ; 004d6b8f
    MOV dword ptr [ESP + 0x4b8],EAX     ; 004d6b95
    MOV EAX,dword ptr [EBX + 0x8c]      ; 004d6b9c
    MOV dword ptr [ESP + 0x49c],EAX     ; 004d6ba2
    MOV EAX,dword ptr [ESP + 0x498]     ; 004d6ba9
    MOV dword ptr [ESP + 0x3a8],EAX     ; 004d6bb0
    MOV EAX,dword ptr [ESP + 0x4b8]     ; 004d6bb7
    MOV dword ptr [ESP + 0x3ac],EAX     ; 004d6bbe
    MOV EAX,dword ptr [ESP + 0x49c]     ; 004d6bc5
    MOV dword ptr [ESP + 0x3b0],EAX     ; 004d6bcc
    MOV EAX,dword ptr [EBX + 0x70]      ; 004d6bd3
    MOV dword ptr [ESP + 0x4a0],EAX     ; 004d6bd6
    MOV EAX,dword ptr [EBX + 0x7c]      ; 004d6bdd
    MOV dword ptr [ESP + 0x4a4],EAX     ; 004d6be0
    MOV EAX,dword ptr [EBX + 0x88]      ; 004d6be7
    MOV dword ptr [ESP + 0x4a8],EAX     ; 004d6bed
    MOV EAX,dword ptr [ESP + 0x4a0]     ; 004d6bf4
    MOV dword ptr [ESP + 0x3f0],EAX     ; 004d6bfb
    MOV EAX,dword ptr [ESP + 0x4a4]     ; 004d6c02
    MOV dword ptr [ESP + 0x3f4],EAX     ; 004d6c09
    MOV EAX,dword ptr [ESP + 0x4a8]     ; 004d6c10
    MOV dword ptr [ESP + 0x3f8],EAX     ; 004d6c17
    MOV EAX,dword ptr [EBX + 0x78]      ; 004d6c1e
    MOV dword ptr [ESP + 0x4ac],EAX     ; 004d6c21
    MOV EAX,dword ptr [EBX + 0x84]      ; 004d6c28
    MOV dword ptr [ESP + 0x4b0],EAX     ; 004d6c2e
    MOV EAX,dword ptr [EBX + 0x90]      ; 004d6c35
    MOV dword ptr [ESP + 0x4b4],EAX     ; 004d6c3b
    MOV EAX,dword ptr [ESP + 0x4ac]     ; 004d6c42
    MOV dword ptr [ESP + 0x474],EAX     ; 004d6c49
    MOV EAX,dword ptr [ESP + 0x4b0]     ; 004d6c50
    MOV dword ptr [ESP + 0x478],EAX     ; 004d6c57
    MOV EAX,dword ptr [ESP + 0x4b4]     ; 004d6c5e
    LEA EDX,[ESP + 0x3a8]               ; 004d6c65
    MOV dword ptr [ESP + 0x47c],EAX     ; 004d6c6c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d6c73
    FLD float ptr [ESP + 0x498]         ; 004d6c76
    FADD float ptr [EAX]                ; 004d6c7d
    FLD float ptr [ESP + 0x4b8]         ; 004d6c7f
    FXCH                                ; 004d6c86
    FSTP float ptr [ESP + 0x3cc]        ; 004d6c88
    FADD float ptr [EAX + 0x4]          ; 004d6c8f
    FLD float ptr [ESP + 0x49c]         ; 004d6c92
    FXCH                                ; 004d6c99
    FSTP float ptr [ESP + 0x3d0]        ; 004d6c9b
    FADD float ptr [EAX + 0x8]          ; 004d6ca2
    LEA EAX,[ESP + 0x3cc]               ; 004d6ca5
    FSTP float ptr [ESP + 0x3d4]        ; 004d6cac
    CMP EDX,EAX                         ; 004d6cb3
    JZ 0x004d6ce1                       ; 004d6cb5
        ;   XREF to: 004d6ce1 (CONDITIONAL_JUMP)  ; LAB_004d6ce1
    MOV EAX,dword ptr [ESP + 0x3cc]     ; 004d6cb7
    MOV dword ptr [ESP + 0x3a8],EAX     ; 004d6cbe
    MOV EAX,dword ptr [ESP + 0x3d0]     ; 004d6cc5
    MOV dword ptr [ESP + 0x3ac],EAX     ; 004d6ccc
    MOV EAX,dword ptr [ESP + 0x3d4]     ; 004d6cd3
    MOV dword ptr [ESP + 0x3b0],EAX     ; 004d6cda
    FLD float ptr [ESP + 0x3f0]         ; 004d6ce1
        ;   Label: LAB_004d6ce1
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d6ce8
    FLD float ptr [ESP + 0x3f4]         ; 004d6ceb
    FXCH                                ; 004d6cf2
    FADD float ptr [EAX]                ; 004d6cf4
    FLD float ptr [ESP + 0x3f8]         ; 004d6cf6
    FXCH                                ; 004d6cfd
    FSTP float ptr [ESP + 0x408]        ; 004d6cff
    FXCH                                ; 004d6d06
    FADD float ptr [EAX + 0x4]          ; 004d6d08
    LEA EDX,[ESP + 0x3f0]               ; 004d6d0b
    FSTP float ptr [ESP + 0x40c]        ; 004d6d12
    FADD float ptr [EAX + 0x8]          ; 004d6d19
    LEA EAX,[ESP + 0x408]               ; 004d6d1c
    FSTP float ptr [ESP + 0x410]        ; 004d6d23
    CMP EDX,EAX                         ; 004d6d2a
    JZ 0x004d6d58                       ; 004d6d2c
        ;   XREF to: 004d6d58 (CONDITIONAL_JUMP)  ; LAB_004d6d58
    MOV EAX,dword ptr [ESP + 0x408]     ; 004d6d2e
    MOV dword ptr [ESP + 0x3f0],EAX     ; 004d6d35
    MOV EAX,dword ptr [ESP + 0x40c]     ; 004d6d3c
    MOV dword ptr [ESP + 0x3f4],EAX     ; 004d6d43
    MOV EAX,dword ptr [ESP + 0x410]     ; 004d6d4a
    MOV dword ptr [ESP + 0x3f8],EAX     ; 004d6d51
    FLD float ptr [ESP + 0x474]         ; 004d6d58
        ;   Label: LAB_004d6d58
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d6d5f
    FLD float ptr [ESP + 0x478]         ; 004d6d62
    FXCH                                ; 004d6d69
    FADD float ptr [EAX]                ; 004d6d6b
    FLD float ptr [ESP + 0x47c]         ; 004d6d6d
    FXCH                                ; 004d6d74
    FSTP float ptr [ESP + 0x3e4]        ; 004d6d76
    FXCH                                ; 004d6d7d
    FADD float ptr [EAX + 0x4]          ; 004d6d7f
    LEA EDX,[ESP + 0x3e4]               ; 004d6d82
    FSTP float ptr [ESP + 0x3e8]        ; 004d6d89
    FADD float ptr [EAX + 0x8]          ; 004d6d90
    LEA EAX,[ESP + 0x474]               ; 004d6d93
    FSTP float ptr [ESP + 0x3ec]        ; 004d6d9a
    CMP EAX,EDX                         ; 004d6da1
    JZ 0x004d6dcf                       ; 004d6da3
        ;   XREF to: 004d6dcf (CONDITIONAL_JUMP)  ; LAB_004d6dcf
    MOV EAX,dword ptr [ESP + 0x3e4]     ; 004d6da5
    MOV dword ptr [ESP + 0x474],EAX     ; 004d6dac
    MOV EAX,dword ptr [ESP + 0x3e8]     ; 004d6db3
    MOV dword ptr [ESP + 0x478],EAX     ; 004d6dba
    MOV EAX,dword ptr [ESP + 0x3ec]     ; 004d6dc1
    MOV dword ptr [ESP + 0x47c],EAX     ; 004d6dc8
    LEA EAX,[EBX + 0x30]                ; 004d6dcf
        ;   Label: LAB_004d6dcf
    PUSH EAX                            ; 004d6dd2
    LEA EAX,[ESP + 0x3ac]               ; 004d6dd3
    PUSH EAX                            ; 004d6dda
    LEA EAX,[ESP + 0x458]               ; 004d6ddb
    PUSH EAX                            ; 004d6de2
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004d6de3
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    MOV EDX,EAX                         ; 004d6de8
    LEA EAX,[ESP + 0x3b4]               ; 004d6dea
    ADD ESP,0xc                         ; 004d6df1
    CMP EAX,EDX                         ; 004d6df4
    JZ 0x004d6e15                       ; 004d6df6
        ;   XREF to: 004d6e15 (CONDITIONAL_JUMP)  ; LAB_004d6e15
    MOV EAX,dword ptr [EDX]             ; 004d6df8
    MOV dword ptr [ESP + 0x3a8],EAX     ; 004d6dfa
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d6e01
    MOV dword ptr [ESP + 0x3ac],EAX     ; 004d6e04
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d6e0b
    MOV dword ptr [ESP + 0x3b0],EAX     ; 004d6e0e
    LEA EAX,[EBX + 0x30]                ; 004d6e15
        ;   Label: LAB_004d6e15
    PUSH EAX                            ; 004d6e18
    LEA EAX,[ESP + 0x3f4]               ; 004d6e19
    PUSH EAX                            ; 004d6e20
    LEA EAX,[ESP + 0x3c8]               ; 004d6e21
    PUSH EAX                            ; 004d6e28
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004d6e29
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    MOV EDX,EAX                         ; 004d6e2e
    LEA EAX,[ESP + 0x3fc]               ; 004d6e30
    ADD ESP,0xc                         ; 004d6e37
    CMP EAX,EDX                         ; 004d6e3a
    JZ 0x004d6e5b                       ; 004d6e3c
        ;   XREF to: 004d6e5b (CONDITIONAL_JUMP)  ; LAB_004d6e5b
    MOV EAX,dword ptr [EDX]             ; 004d6e3e
    MOV dword ptr [ESP + 0x3f0],EAX     ; 004d6e40
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d6e47
    MOV dword ptr [ESP + 0x3f4],EAX     ; 004d6e4a
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d6e51
    MOV dword ptr [ESP + 0x3f8],EAX     ; 004d6e54
    LEA EAX,[EBX + 0x30]                ; 004d6e5b
        ;   Label: LAB_004d6e5b
    PUSH EAX                            ; 004d6e5e
    LEA EAX,[ESP + 0x478]               ; 004d6e5f
    PUSH EAX                            ; 004d6e66
    LEA EAX,[ESP + 0x470]               ; 004d6e67
    PUSH EAX                            ; 004d6e6e
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004d6e6f
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    MOV EDX,EAX                         ; 004d6e74
    LEA EAX,[ESP + 0x480]               ; 004d6e76
    ADD ESP,0xc                         ; 004d6e7d
    CMP EAX,EDX                         ; 004d6e80
    JZ 0x004d6ea1                       ; 004d6e82
        ;   XREF to: 004d6ea1 (CONDITIONAL_JUMP)  ; LAB_004d6ea1
    MOV EAX,dword ptr [EDX]             ; 004d6e84
    MOV dword ptr [ESP + 0x474],EAX     ; 004d6e86
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d6e8d
    MOV dword ptr [ESP + 0x478],EAX     ; 004d6e90
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d6e97
    MOV dword ptr [ESP + 0x47c],EAX     ; 004d6e9a
    FLD float ptr [ESP + 0x3a8]         ; 004d6ea1
        ;   Label: LAB_004d6ea1
    LEA EAX,[EBX + 0x60]                ; 004d6ea8
    FLD float ptr [ESP + 0x3ac]         ; 004d6eab
    FXCH                                ; 004d6eb2
    FSUB float ptr [EAX]                ; 004d6eb4
    FLD float ptr [ESP + 0x3b0]         ; 004d6eb6
    FXCH                                ; 004d6ebd
    FSTP float ptr [ESP + 0x3d8]        ; 004d6ebf
    FXCH                                ; 004d6ec6
    FSUB float ptr [EAX + 0x4]          ; 004d6ec8
    LEA EDX,[ESP + 0x3a8]               ; 004d6ecb
    FSTP float ptr [ESP + 0x3dc]        ; 004d6ed2
    FSUB float ptr [EAX + 0x8]          ; 004d6ed9
    LEA EAX,[ESP + 0x3d8]               ; 004d6edc
    FSTP float ptr [ESP + 0x3e0]        ; 004d6ee3
    CMP EDX,EAX                         ; 004d6eea
    JZ 0x004d6f18                       ; 004d6eec
        ;   XREF to: 004d6f18 (CONDITIONAL_JUMP)  ; LAB_004d6f18
    MOV EAX,dword ptr [ESP + 0x3d8]     ; 004d6eee
    MOV dword ptr [ESP + 0x3a8],EAX     ; 004d6ef5
    MOV EAX,dword ptr [ESP + 0x3dc]     ; 004d6efc
    MOV dword ptr [ESP + 0x3ac],EAX     ; 004d6f03
    MOV EAX,dword ptr [ESP + 0x3e0]     ; 004d6f0a
    MOV dword ptr [ESP + 0x3b0],EAX     ; 004d6f11
    FLD float ptr [ESP + 0x3f0]         ; 004d6f18
        ;   Label: LAB_004d6f18
    LEA EAX,[EBX + 0x60]                ; 004d6f1f
    FLD float ptr [ESP + 0x3f4]         ; 004d6f22
    FXCH                                ; 004d6f29
    FSUB float ptr [EAX]                ; 004d6f2b
    FLD float ptr [ESP + 0x3f8]         ; 004d6f2d
    FXCH                                ; 004d6f34
    FSTP float ptr [ESP + 0x48c]        ; 004d6f36
    FXCH                                ; 004d6f3d
    FSUB float ptr [EAX + 0x4]          ; 004d6f3f
    LEA EDX,[ESP + 0x3f0]               ; 004d6f42
    FSTP float ptr [ESP + 0x490]        ; 004d6f49
    FSUB float ptr [EAX + 0x8]          ; 004d6f50
    LEA EAX,[ESP + 0x48c]               ; 004d6f53
    FSTP float ptr [ESP + 0x494]        ; 004d6f5a
    CMP EDX,EAX                         ; 004d6f61
    JZ 0x004d6f8f                       ; 004d6f63
        ;   XREF to: 004d6f8f (CONDITIONAL_JUMP)  ; LAB_004d6f8f
    MOV EAX,dword ptr [ESP + 0x48c]     ; 004d6f65
    MOV dword ptr [ESP + 0x3f0],EAX     ; 004d6f6c
    MOV EAX,dword ptr [ESP + 0x490]     ; 004d6f73
    MOV dword ptr [ESP + 0x3f4],EAX     ; 004d6f7a
    MOV EAX,dword ptr [ESP + 0x494]     ; 004d6f81
    MOV dword ptr [ESP + 0x3f8],EAX     ; 004d6f88
    FLD float ptr [ESP + 0x474]         ; 004d6f8f
        ;   Label: LAB_004d6f8f
    LEA EAX,[EBX + 0x60]                ; 004d6f96
    FLD float ptr [ESP + 0x478]         ; 004d6f99
    FXCH                                ; 004d6fa0
    FSUB float ptr [EAX]                ; 004d6fa2
    FLD float ptr [ESP + 0x47c]         ; 004d6fa4
    FXCH                                ; 004d6fab
    FSTP float ptr [ESP + 0x39c]        ; 004d6fad
    FXCH                                ; 004d6fb4
    FSUB float ptr [EAX + 0x4]          ; 004d6fb6
    LEA EDX,[ESP + 0x474]               ; 004d6fb9
    FSTP float ptr [ESP + 0x3a0]        ; 004d6fc0
    FSUB float ptr [EAX + 0x8]          ; 004d6fc7
    LEA EAX,[ESP + 0x39c]               ; 004d6fca
    FSTP float ptr [ESP + 0x3a4]        ; 004d6fd1
    CMP EDX,EAX                         ; 004d6fd8
    JZ 0x004d7006                       ; 004d6fda
        ;   XREF to: 004d7006 (CONDITIONAL_JUMP)  ; LAB_004d7006
    MOV EAX,dword ptr [ESP + 0x39c]     ; 004d6fdc
    MOV dword ptr [ESP + 0x474],EAX     ; 004d6fe3
    MOV EAX,dword ptr [ESP + 0x3a0]     ; 004d6fea
    MOV dword ptr [ESP + 0x478],EAX     ; 004d6ff1
    MOV EAX,dword ptr [ESP + 0x3a4]     ; 004d6ff8
    MOV dword ptr [ESP + 0x47c],EAX     ; 004d6fff
    MOV EAX,dword ptr [ESP + 0x3f0]     ; 004d7006
        ;   Label: LAB_004d7006
    MOV dword ptr [EBX + 0x70],EAX      ; 004d700d
    MOV EAX,dword ptr [ESP + 0x3f4]     ; 004d7010
    MOV dword ptr [EBX + 0x7c],EAX      ; 004d7017
    MOV EAX,dword ptr [ESP + 0x3f8]     ; 004d701a
    MOV dword ptr [EBX + 0x88],EAX      ; 004d7021
    MOV EAX,dword ptr [ESP + 0x3a8]     ; 004d7027
    MOV dword ptr [EBX + 0x74],EAX      ; 004d702e
    MOV EAX,dword ptr [ESP + 0x3ac]     ; 004d7031
    MOV dword ptr [EBX + 0x80],EAX      ; 004d7038
    MOV EAX,dword ptr [ESP + 0x3b0]     ; 004d703e
    MOV dword ptr [EBX + 0x8c],EAX      ; 004d7045
    MOV EAX,dword ptr [ESP + 0x474]     ; 004d704b
    MOV dword ptr [EBX + 0x78],EAX      ; 004d7052
    MOV EAX,dword ptr [ESP + 0x478]     ; 004d7055
    MOV dword ptr [EBX + 0x84],EAX      ; 004d705c
    MOV EAX,dword ptr [ESP + 0x47c]     ; 004d7062
    MOV dword ptr [EBX + 0x90],EAX      ; 004d7069
    MOV EAX,dword ptr [EBP + 0x20]      ; 004d706f
    PUSH EBX                            ; 004d7072
    MOV dword ptr [EBX + 0x6c],EAX      ; 004d7073
    CALL core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004d6610 ; 004d7076
        ;   XREF to: 004d6610 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004d6610()
    ADD ESP,0x4                         ; 004d707b
    LEA EAX,[ESP + 0xec]                ; 004d707e
    PUSH EAX                            ; 004d7085
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_0055abf0 ; 004d7086
        ;   XREF to: 0055abf0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityMatrix3x4_FUN_0055abf0()
    FLD float ptr [EBX + 0x60]          ; 004d708b
    LEA EAX,[ESP + 0x210]               ; 004d708e
    ADD ESP,0x4                         ; 004d7095
    FCHS                                ; 004d7098
    FSTP float ptr [ESP + 0xf8]         ; 004d709a
    PUSH EAX                            ; 004d70a1
    FLD float ptr [EBX + 0x64]          ; 004d70a2
    FCHS                                ; 004d70a5
    FSTP float ptr [ESP + 0x10c]        ; 004d70a7
    FLD float ptr [EBX + 0x68]          ; 004d70ae
    FCHS                                ; 004d70b1
    FSTP float ptr [ESP + 0x11c]        ; 004d70b3
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_0055abf0 ; 004d70ba
        ;   XREF to: 0055abf0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityMatrix3x4_FUN_0055abf0()
    FILD dword ptr [0x01c039e8]         ; 004d70bf | DAT_01c039e8
    FMUL double ptr [0x0058960a]        ; 004d70c5 | DOUBLE_0058960a
    FILD dword ptr [0x01c039ec]         ; 004d70cb | DAT_01c039ec
    FMUL double ptr [0x0058960a]        ; 004d70d1 | DOUBLE_0058960a
    FILD dword ptr [0x01c039f0]         ; 004d70d7 | DAT_01c039f0
    FMUL double ptr [0x0058960a]        ; 004d70dd | DOUBLE_0058960a
    FILD dword ptr [0x01c039f4]         ; 004d70e3 | DAT_01c039f4
    FMUL double ptr [0x0058960a]        ; 004d70e9 | DOUBLE_0058960a
    FILD dword ptr [0x01c039f8]         ; 004d70ef | DAT_01c039f8
    FMUL double ptr [0x0058960a]        ; 004d70f5 | DOUBLE_0058960a
    FILD dword ptr [0x01c039fc]         ; 004d70fb | DAT_01c039fc
    FMUL double ptr [0x0058960a]        ; 004d7101 | DOUBLE_0058960a
    FILD dword ptr [0x01c03a00]         ; 004d7107 | DAT_01c03a00
    ADD ESP,0x4                         ; 004d710d
    FMUL double ptr [0x0058960a]        ; 004d7110 | DOUBLE_0058960a
    FXCH ST6                            ; 004d7116
    FSTP float ptr [ESP + 0x20c]        ; 004d7118
    FILD dword ptr [0x01c03a04]         ; 004d711f | DAT_01c03a04
    FMUL double ptr [0x0058960a]        ; 004d7125 | DOUBLE_0058960a
    FXCH ST5                            ; 004d712b
    FSTP float ptr [ESP + 0x21c]        ; 004d712d
    FILD dword ptr [0x01c03a08]         ; 004d7134 | DAT_01c03a08
    FMUL double ptr [0x0058960a]        ; 004d713a | DOUBLE_0058960a
    LEA EAX,[ESP + 0x20c]               ; 004d7140
    LEA ESI,[ESP + 0x2c]                ; 004d7147
    PUSH EAX                            ; 004d714b
    FXCH ST4                            ; 004d714c
    FSTP float ptr [ESP + 0x230]        ; 004d714e
    FXCH ST2                            ; 004d7155
    FSTP float ptr [ESP + 0x214]        ; 004d7157
    FSTP float ptr [ESP + 0x224]        ; 004d715e
    FSTP float ptr [ESP + 0x234]        ; 004d7165
    FXCH ST2                            ; 004d716c
    FSTP float ptr [ESP + 0x218]        ; 004d716e
    LEA EAX,[ESP + 0xf0]                ; 004d7175
    FSTP float ptr [ESP + 0x228]        ; 004d717c
    PUSH EAX                            ; 004d7183
    FSTP float ptr [ESP + 0x23c]        ; 004d7184
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004d718b
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    ADD ESP,0x8                         ; 004d7190
    LEA EAX,[ESP + 0x1ac]               ; 004d7193
    PUSH EAX                            ; 004d719a
    LEA EDI,[ESP + 0x1b0]               ; 004d719b
    MOV ECX,0xc                         ; 004d71a2
    PUSH EBX                            ; 004d71a7
    LEA EAX,[ESP + 0x488]               ; 004d71a8
    LEA ESI,[ESP + 0x34]                ; 004d71af
    PUSH EAX                            ; 004d71b3
    MOVSD.REP ES:EDI,ESI                ; 004d71b4
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004d71b6
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    MOV EDX,EAX                         ; 004d71bb
    LEA EAX,[ESP + 0x36c]               ; 004d71bd
    ADD ESP,0xc                         ; 004d71c4
    CMP EAX,EDX                         ; 004d71c7
    JZ 0x004d71e8                       ; 004d71c9
        ;   XREF to: 004d71e8 (CONDITIONAL_JUMP)  ; LAB_004d71e8
    MOV EAX,dword ptr [EDX]             ; 004d71cb
    MOV dword ptr [ESP + 0x360],EAX     ; 004d71cd
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d71d4
    MOV dword ptr [ESP + 0x364],EAX     ; 004d71d7
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d71de
    MOV dword ptr [ESP + 0x368],EAX     ; 004d71e1
    LEA EAX,[ESP + 0x1ac]               ; 004d71e8
        ;   Label: LAB_004d71e8
    PUSH EAX                            ; 004d71ef
    LEA EAX,[EBX + 0xc]                 ; 004d71f0
    PUSH EAX                            ; 004d71f3
    LEA EAX,[ESP + 0x464]               ; 004d71f4
    PUSH EAX                            ; 004d71fb
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004d71fc
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    MOV EDX,EAX                         ; 004d7201
    LEA EAX,[ESP + 0x408]               ; 004d7203
    ADD ESP,0xc                         ; 004d720a
    CMP EAX,EDX                         ; 004d720d
    JZ 0x004d722e                       ; 004d720f
        ;   XREF to: 004d722e (CONDITIONAL_JUMP)  ; LAB_004d722e
    MOV EAX,dword ptr [EDX]             ; 004d7211
    MOV dword ptr [ESP + 0x3fc],EAX     ; 004d7213
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d721a
    MOV dword ptr [ESP + 0x400],EAX     ; 004d721d
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d7224
    MOV dword ptr [ESP + 0x404],EAX     ; 004d7227
    LEA EAX,[ESP + 0x1ac]               ; 004d722e
        ;   Label: LAB_004d722e
    PUSH EAX                            ; 004d7235
    LEA EAX,[EBX + 0x18]                ; 004d7236
    PUSH EAX                            ; 004d7239
    LEA EAX,[ESP + 0x398]               ; 004d723a
    PUSH EAX                            ; 004d7241
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004d7242
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    MOV EDX,EAX                         ; 004d7247
    LEA EAX,[ESP + 0x438]               ; 004d7249
    ADD ESP,0xc                         ; 004d7250
    CMP EAX,EDX                         ; 004d7253
    JZ 0x004d7274                       ; 004d7255
        ;   XREF to: 004d7274 (CONDITIONAL_JUMP)  ; LAB_004d7274
    MOV EAX,dword ptr [EDX]             ; 004d7257
    MOV dword ptr [ESP + 0x42c],EAX     ; 004d7259
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d7260
    MOV dword ptr [ESP + 0x430],EAX     ; 004d7263
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d726a
    MOV dword ptr [ESP + 0x434],EAX     ; 004d726d
    LEA EAX,[ESP + 0x1ac]               ; 004d7274
        ;   Label: LAB_004d7274
    PUSH EAX                            ; 004d727b
    LEA EAX,[EBX + 0x24]                ; 004d727c
    PUSH EAX                            ; 004d727f
    LEA EAX,[ESP + 0x350]               ; 004d7280
    PUSH EAX                            ; 004d7287
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004d7288
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    MOV EDX,EAX                         ; 004d728d
    LEA EAX,[ESP + 0x420]               ; 004d728f
    ADD ESP,0xc                         ; 004d7296
    CMP EAX,EDX                         ; 004d7299
    JZ 0x004d72ba                       ; 004d729b
        ;   XREF to: 004d72ba (CONDITIONAL_JUMP)  ; LAB_004d72ba
    MOV EAX,dword ptr [EDX]             ; 004d729d
    MOV dword ptr [ESP + 0x414],EAX     ; 004d729f
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d72a6
    MOV dword ptr [ESP + 0x418],EAX     ; 004d72a9
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d72b0
    MOV dword ptr [ESP + 0x41c],EAX     ; 004d72b3
    LEA EAX,[ESP + 0x1ac]               ; 004d72ba
        ;   Label: LAB_004d72ba
    PUSH EAX                            ; 004d72c1
    LEA EAX,[EBX + 0x30]                ; 004d72c2
    PUSH EAX                            ; 004d72c5
    MOV ECX,dword ptr [EBP + 0x18]      ; 004d72c6
    PUSH ECX                            ; 004d72c9
    LEA EAX,[ESP + 0x360]               ; 004d72ca
    PUSH EAX                            ; 004d72d1
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004d72d2
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 004d72d7
    PUSH EAX                            ; 004d72da
    LEA EAX,[ESP + 0x3bc]               ; 004d72db
    PUSH EAX                            ; 004d72e2
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004d72e3
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    MOV EDX,EAX                         ; 004d72e8
    LEA EAX,[ESP + 0x444]               ; 004d72ea
    ADD ESP,0xc                         ; 004d72f1
    CMP EAX,EDX                         ; 004d72f4
    JZ 0x004d7315                       ; 004d72f6
        ;   XREF to: 004d7315 (CONDITIONAL_JUMP)  ; LAB_004d7315
    MOV EAX,dword ptr [EDX]             ; 004d72f8
    MOV dword ptr [ESP + 0x438],EAX     ; 004d72fa
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d7301
    MOV dword ptr [ESP + 0x43c],EAX     ; 004d7304
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d730b
    MOV dword ptr [ESP + 0x440],EAX     ; 004d730e
    LEA EAX,[ESP + 0x42c]               ; 004d7315
        ;   Label: LAB_004d7315
    PUSH EAX                            ; 004d731c
    LEA EAX,[ESP + 0x400]               ; 004d731d
    PUSH EAX                            ; 004d7324
    LEA EAX,[ESP + 0x368]               ; 004d7325
    PUSH EAX                            ; 004d732c
    LEA EAX,[EBX + 0x98]                ; 004d732d
    PUSH EAX                            ; 004d7333
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_004d6170 ; 004d7334
        ;   XREF to: 004d6170 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_computePlaneFromTriangle_FUN_004d6170()
    ADD ESP,0x10                        ; 004d7339
    LEA EAX,[ESP + 0x3fc]               ; 004d733c
    PUSH EAX                            ; 004d7343
    LEA EAX,[ESP + 0x364]               ; 004d7344
    PUSH EAX                            ; 004d734b
    LEA EAX,[ESP + 0x440]               ; 004d734c
    PUSH EAX                            ; 004d7353
    LEA EAX,[EBX + 0xa8]                ; 004d7354
    PUSH EAX                            ; 004d735a
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_004d6170 ; 004d735b
        ;   XREF to: 004d6170 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_computePlaneFromTriangle_FUN_004d6170()
    ADD ESP,0x10                        ; 004d7360
    LEA EAX,[ESP + 0x42c]               ; 004d7363
    PUSH EAX                            ; 004d736a
    LEA EAX,[ESP + 0x400]               ; 004d736b
    PUSH EAX                            ; 004d7372
    LEA EAX,[ESP + 0x440]               ; 004d7373
    PUSH EAX                            ; 004d737a
    LEA EAX,[EBX + 0xb8]                ; 004d737b
    PUSH EAX                            ; 004d7381
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_004d6170 ; 004d7382
        ;   XREF to: 004d6170 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_computePlaneFromTriangle_FUN_004d6170()
    ADD ESP,0x10                        ; 004d7387
    LEA EAX,[ESP + 0x414]               ; 004d738a
    PUSH EAX                            ; 004d7391
    LEA EAX,[ESP + 0x430]               ; 004d7392
    PUSH EAX                            ; 004d7399
    LEA EAX,[ESP + 0x440]               ; 004d739a
    PUSH EAX                            ; 004d73a1
    LEA EAX,[EBX + 0xc8]                ; 004d73a2
    PUSH EAX                            ; 004d73a8
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_004d6170 ; 004d73a9
        ;   XREF to: 004d6170 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_computePlaneFromTriangle_FUN_004d6170()
    ADD ESP,0x10                        ; 004d73ae
    LEA EAX,[ESP + 0x360]               ; 004d73b1
    PUSH EAX                            ; 004d73b8
    LEA EAX,[ESP + 0x418]               ; 004d73b9
    PUSH EAX                            ; 004d73c0
    LEA EAX,[ESP + 0x440]               ; 004d73c1
    PUSH EAX                            ; 004d73c8
    ADD EBX,0xd8                        ; 004d73c9
    PUSH EBX                            ; 004d73cf
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_004d6170 ; 004d73d0
        ;   XREF to: 004d6170 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_computePlaneFromTriangle_FUN_004d6170()
    ADD ESP,0x10                        ; 004d73d5
    MOV ESP,EBP                         ; 004d73d8
    POP EBP                             ; 004d73da
    POP EDI                             ; 004d73db
    POP ESI                             ; 004d73dc
    POP EBX                             ; 004d73dd
    RET                                 ; 004d73de
    FLD float ptr [ESP + 0x20]          ; 004d73df
        ;   Label: LAB_004d73df
    FABS                                ; 004d73e3
    FLD float ptr [ESP + 0x24]          ; 004d73e5
    FABS                                ; 004d73e9
    FSTP double ptr [ESP]               ; 004d73eb
    FCOMP double ptr [ESP]              ; 004d73ee
    FNSTSW AX                           ; 004d73f1
    SAHF                                ; 004d73f3
    JNC 0x004d7425                      ; 004d73f4
        ;   XREF to: 004d7425 (CONDITIONAL_JUMP)  ; LAB_004d7425
    FLD float ptr [ESP + 0x28]          ; 004d73f6
    FABS                                ; 004d73fa
    FCOMP double ptr [ESP]              ; 004d73fc
    FNSTSW AX                           ; 004d73ff
    SAHF                                ; 004d7401
    JNC 0x004d7425                      ; 004d7402
        ;   XREF to: 004d7425 (CONDITIONAL_JUMP)  ; LAB_004d7425
    XOR EDI,EDI                         ; 004d7404
    MOV EDX,0x3f800000                  ; 004d7406
    MOV dword ptr [ESP + 0x370],EDI     ; 004d740b
    MOV dword ptr [ESP + 0x374],EDX     ; 004d7412
    MOV dword ptr [ESP + 0x36c],EDI     ; 004d7419
    JMP 0x004d66fb                      ; 004d7420
        ;   XREF to: 004d66fb (UNCONDITIONAL_JUMP)  ; LAB_004d66fb
    MOV ECX,0x3f800000                  ; 004d7425
        ;   Label: LAB_004d7425
    XOR EDX,EDX                         ; 004d742a
    MOV dword ptr [ESP + 0x370],ECX     ; 004d742c
    MOV dword ptr [ESP + 0x374],EDX     ; 004d7433
    MOV dword ptr [ESP + 0x36c],EDX     ; 004d743a
    JMP 0x004d66fb                      ; 004d7441
        ;   XREF to: 004d66fb (UNCONDITIONAL_JUMP)  ; LAB_004d66fb
    XOR EAX,EAX                         ; 004d7446
        ;   Label: LAB_004d7446
    MOV dword ptr [ESP + 0x340],EAX     ; 004d7448
    MOV dword ptr [ESP + 0x33c],EAX     ; 004d744f
    MOV dword ptr [ESP + 0x344],EAX     ; 004d7456
    JMP 0x004d6827                      ; 004d745d
        ;   XREF to: 004d6827 (UNCONDITIONAL_JUMP)  ; LAB_004d6827
    XOR ESI,ESI                         ; 004d7462
        ;   Label: LAB_004d7462
    MOV dword ptr [ESP + 0x370],ESI     ; 004d7464
    MOV dword ptr [ESP + 0x36c],ESI     ; 004d746b
    MOV dword ptr [ESP + 0x374],ESI     ; 004d7472
    JMP 0x004d6944                      ; 004d7479
        ;   XREF to: 004d6944 (UNCONDITIONAL_JUMP)  ; LAB_004d6944

