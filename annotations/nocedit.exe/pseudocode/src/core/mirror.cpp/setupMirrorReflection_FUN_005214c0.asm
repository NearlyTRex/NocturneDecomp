; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mirror_cpp_setupMirrorReflection_FUN_005214c0(SMirrorReflection *reflection)
;
; Parameters:
; SMirrorReflection * Stack[0x4]:4   reflection
; Local Variables:
; undefined8       Stack[-0x4d0]:8  local_4d0
; undefined8       Stack[-0x4c8]:8  local_4c8
; undefined8       Stack[-0x4c0]:8  local_4c0
; undefined4       Stack[-0x4b8]:4  local_4b8
; undefined4       Stack[-0x4b4]:4  local_4b4
; undefined4       Stack[-0x4b0]:4  local_4b0
; undefined4       Stack[-0x4ac]:4  local_4ac
; undefined4       Stack[-0x4a8]:4  local_4a8
; undefined1       Stack[-0x4a4]:1  local_4a4
; undefined1       Stack[-0x474]:1  local_474
; undefined1       Stack[-0x444]:1  local_444
; undefined1       Stack[-0x414]:1  local_414
; undefined1       Stack[-0x3e4]:1  local_3e4
; undefined4       Stack[-0x3d8]:4  local_3d8
; undefined4       Stack[-0x3c8]:4  local_3c8
; undefined4       Stack[-0x3b8]:4  local_3b8
; undefined1       Stack[-0x3b4]:1  local_3b4
; undefined1       Stack[-0x384]:1  local_384
; undefined1       Stack[-0x354]:1  local_354
; undefined4       Stack[-0x32c]:4  local_32c
; undefined1       Stack[-0x324]:1  local_324
; undefined1       Stack[-0x2f4]:1  local_2f4
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
; undefined1       Stack[-0x294]:1  local_294
; undefined1       Stack[-0x264]:1  local_264
; undefined1       Stack[-0x234]:1  local_234
; undefined1       Stack[-0x204]:1  local_204
; undefined1       Stack[-0x1d4]:1  local_1d4
; char             Stack[-0x1a4]:1  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined1       Stack[-0x188]:1  local_188
; undefined1       Stack[-0x17c]:1  local_17c
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
; undefined1       Stack[-0x140]:1  local_140
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined1       Stack[-0x11c]:1  local_11c
; undefined1       Stack[-0x110]:1  local_110
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
; undefined1       Stack[-0x8c]:1  local_8c
; undefined1       Stack[-0x80]:1  local_80
; undefined1       Stack[-0x74]:1  local_74
; undefined1       Stack[-0x68]:1  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined1       Stack[-0x50]:1  local_50
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
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 at 00570a99
;
; Referenced Globals:
;   double DOUBLE_00638995 = 0.0000152587890625
;   CMatrix3x3i g_TransformMatrix
;   undefined4 g_TransformMatrix[0][1]
;   undefined4 g_TransformMatrix[0][2]
;   undefined4 g_TransformMatrix[1][0]
;   undefined4 g_TransformMatrix[1][1]
;   undefined4 g_TransformMatrix[1][2]
;   undefined4 g_TransformMatrix[2][0]
;   undefined4 g_TransformMatrix[2][1]
;   undefined4 g_TransformMatrix[2][2]
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0
;   core_mirror.cpp_setupMirrorCamera_FUN_00521480
;   core_xform.cpp_inverse_FUN_005f6210
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;   core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005214c0
        ;   Label: core_mirror.cpp_setupMirrorReflection_FUN_005214c0
    PUSH ESI                            ; 005214c1
    PUSH EDI                            ; 005214c2
    PUSH EBP                            ; 005214c3
    MOV EBP,ESP                         ; 005214c4
    SUB ESP,0x4c0                       ; 005214c6
    AND ESP,0xfffffff8                  ; 005214cc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005214cf
    LEA EAX,[EBX + 0x18]                ; 005214d2
    PUSH EAX                            ; 005214d5
    LEA EAX,[EBX + 0xc]                 ; 005214d6
    PUSH EAX                            ; 005214d9
    PUSH EBX                            ; 005214da
    LEA EAX,[ESP + 0x338]               ; 005214db
    PUSH EAX                            ; 005214e2
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0 ; 005214e3
        ;   XREF to: 00520fe0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0(SClipPlane * out_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * vertex_c)
    ADD ESP,0x10                        ; 005214e8
    MOV EAX,dword ptr [ESP + 0x32c]     ; 005214eb
    FLD float ptr [ESP + 0x32c]         ; 005214f2
    MOV dword ptr [ESP + 0x20],EAX      ; 005214f9
    MOV EAX,dword ptr [ESP + 0x330]     ; 005214fd
    FSTP double ptr [ESP + 0x8]         ; 00521504
    MOV dword ptr [ESP + 0x24],EAX      ; 00521508
    MOV EAX,dword ptr [ESP + 0x334]     ; 0052150c
    FLD double ptr [ESP + 0x8]          ; 00521513
    MOV dword ptr [ESP + 0x28],EAX      ; 00521517
    FABS                                ; 0052151b
    FLD float ptr [ESP + 0x330]         ; 0052151d
    FABS                                ; 00521524
    FXCH                                ; 00521526
    FSTP double ptr [ESP + 0x10]        ; 00521528
    FCOMP double ptr [ESP + 0x10]       ; 0052152c
    FNSTSW AX                           ; 00521530
    SAHF                                ; 00521532
    JNC 0x0052224f                      ; 00521533
        ;   XREF to: 0052224f (CONDITIONAL_JUMP)  ; LAB_0052224f
    FLD float ptr [ESP + 0x334]         ; 00521539
    FABS                                ; 00521540
    FCOMP double ptr [ESP + 0x10]       ; 00521542
    FNSTSW AX                           ; 00521546
    SAHF                                ; 00521548
    JNC 0x0052224f                      ; 00521549
        ;   XREF to: 0052224f (CONDITIONAL_JUMP)  ; LAB_0052224f
    MOV ESI,0x3f800000                  ; 0052154f
    XOR ECX,ECX                         ; 00521554
    MOV dword ptr [ESP + 0x370],ESI     ; 00521556
    MOV dword ptr [ESP + 0x374],ECX     ; 0052155d
    MOV dword ptr [ESP + 0x36c],ECX     ; 00521564
    FLD float ptr [ESP + 0x370]         ; 0052156b
        ;   Label: LAB_0052156b
    FMUL float ptr [ESP + 0x28]         ; 00521572
    FLD float ptr [ESP + 0x374]         ; 00521576
    FMUL float ptr [ESP + 0x20]         ; 0052157d
    FLD float ptr [ESP + 0x36c]         ; 00521581
    FMUL float ptr [ESP + 0x24]         ; 00521588
    FLD float ptr [ESP + 0x374]         ; 0052158c
    FMUL float ptr [ESP + 0x24]         ; 00521593
    FLD float ptr [ESP + 0x36c]         ; 00521597
    FMUL float ptr [ESP + 0x28]         ; 0052159e
    MOV EAX,dword ptr [ESP + 0x20]      ; 005215a2
    FLD float ptr [ESP + 0x370]         ; 005215a6
    FMUL float ptr [ESP + 0x20]         ; 005215ad
    MOV dword ptr [ESP + 0x384],EAX     ; 005215b1
    MOV EAX,dword ptr [ESP + 0x24]      ; 005215b8
    LEA EDX,[ESP + 0x33c]               ; 005215bc
    MOV dword ptr [ESP + 0x388],EAX     ; 005215c3
    MOV EAX,dword ptr [ESP + 0x28]      ; 005215ca
    FXCH ST2                            ; 005215ce
    FSUBP ST5,ST0                       ; 005215d0
    FSUBP ST3,ST0                       ; 005215d2
    FSUBP                               ; 005215d4
    MOV dword ptr [ESP + 0x38c],EAX     ; 005215d6
    FXCH ST2                            ; 005215dd
    FSTP float ptr [ESP + 0x420]        ; 005215df
    FSTP float ptr [ESP + 0x424]        ; 005215e6
    LEA EAX,[ESP + 0x420]               ; 005215ed
    FSTP float ptr [ESP + 0x428]        ; 005215f4
    CMP EDX,EAX                         ; 005215fb
    JZ 0x00521629                       ; 005215fd
        ;   XREF to: 00521629 (CONDITIONAL_JUMP)  ; LAB_00521629
    MOV EAX,dword ptr [ESP + 0x420]     ; 005215ff
    MOV dword ptr [ESP + 0x33c],EAX     ; 00521606
    MOV EAX,dword ptr [ESP + 0x424]     ; 0052160d
    MOV dword ptr [ESP + 0x340],EAX     ; 00521614
    MOV EAX,dword ptr [ESP + 0x428]     ; 0052161b
    MOV dword ptr [ESP + 0x344],EAX     ; 00521622
    FLD float ptr [ESP + 0x340]         ; 00521629
        ;   Label: LAB_00521629
    FMUL ST0                            ; 00521630
    FLD float ptr [ESP + 0x33c]         ; 00521632
    FMUL ST0                            ; 00521639
    FADDP                               ; 0052163b
    FLD float ptr [ESP + 0x344]         ; 0052163d
    FMUL ST0                            ; 00521644
    FADDP                               ; 00521646
    FSQRT                               ; 00521648
    FST float ptr [ESP + 0x18]          ; 0052164a
    FLDZ                                ; 0052164e
    FCOMPP                              ; 00521650
    FNSTSW AX                           ; 00521652
    SAHF                                ; 00521654
    JNC 0x005222b6                      ; 00521655
        ;   XREF to: 005222b6 (CONDITIONAL_JUMP)  ; LAB_005222b6
    FLD1                                ; 0052165b
    FLD float ptr [ESP + 0x33c]         ; 0052165d
    FXCH                                ; 00521664
    FDIV float ptr [ESP + 0x18]         ; 00521666
    FXCH                                ; 0052166a
    FMUL ST1                            ; 0052166c
    FLD float ptr [ESP + 0x340]         ; 0052166e
    FMUL ST2                            ; 00521675
    FLD float ptr [ESP + 0x344]         ; 00521677
    FMULP ST3                           ; 0052167e
    FXCH                                ; 00521680
    FSTP float ptr [ESP + 0x33c]        ; 00521682
    FSTP float ptr [ESP + 0x340]        ; 00521689
    FSTP float ptr [ESP + 0x344]        ; 00521690
    FLD float ptr [ESP + 0x388]         ; 00521697
        ;   Label: LAB_00521697
    FMUL float ptr [ESP + 0x344]        ; 0052169e
    FLD float ptr [ESP + 0x38c]         ; 005216a5
    FMUL float ptr [ESP + 0x33c]        ; 005216ac
    FLD float ptr [ESP + 0x384]         ; 005216b3
    FMUL float ptr [ESP + 0x340]        ; 005216ba
    FLD float ptr [ESP + 0x38c]         ; 005216c1
    FMUL float ptr [ESP + 0x340]        ; 005216c8
    FLD float ptr [ESP + 0x384]         ; 005216cf
    FMUL float ptr [ESP + 0x344]        ; 005216d6
    FLD float ptr [ESP + 0x388]         ; 005216dd
    FMUL float ptr [ESP + 0x33c]        ; 005216e4
    LEA EAX,[ESP + 0x378]               ; 005216eb
    LEA EDX,[ESP + 0x36c]               ; 005216f2
    FXCH ST2                            ; 005216f9
    FSUBP ST5,ST0                       ; 005216fb
    FSUBP ST3,ST0                       ; 005216fd
    FSUBP                               ; 005216ff
    FXCH                                ; 00521701
    FSTP float ptr [ESP + 0x37c]        ; 00521703
    FSTP float ptr [ESP + 0x380]        ; 0052170a
    FSTP float ptr [ESP + 0x378]        ; 00521711
    CMP EDX,EAX                         ; 00521718
    JZ 0x00521746                       ; 0052171a
        ;   XREF to: 00521746 (CONDITIONAL_JUMP)  ; LAB_00521746
    MOV EAX,dword ptr [ESP + 0x378]     ; 0052171c
    MOV dword ptr [ESP + 0x36c],EAX     ; 00521723
    MOV EAX,dword ptr [ESP + 0x37c]     ; 0052172a
    MOV dword ptr [ESP + 0x370],EAX     ; 00521731
    MOV EAX,dword ptr [ESP + 0x380]     ; 00521738
    MOV dword ptr [ESP + 0x374],EAX     ; 0052173f
    FLD float ptr [ESP + 0x370]         ; 00521746
        ;   Label: LAB_00521746
    FMUL ST0                            ; 0052174d
    FLD float ptr [ESP + 0x36c]         ; 0052174f
    FMUL ST0                            ; 00521756
    FADDP                               ; 00521758
    FLD float ptr [ESP + 0x374]         ; 0052175a
    FMUL ST0                            ; 00521761
    FADDP                               ; 00521763
    FSQRT                               ; 00521765
    FST float ptr [ESP + 0x1c]          ; 00521767
    FLDZ                                ; 0052176b
    FCOMPP                              ; 0052176d
    FNSTSW AX                           ; 0052176f
    SAHF                                ; 00521771
    JNC 0x005222d2                      ; 00521772
        ;   XREF to: 005222d2 (CONDITIONAL_JUMP)  ; LAB_005222d2
    FLD1                                ; 00521778
    FLD float ptr [ESP + 0x36c]         ; 0052177a
    FXCH                                ; 00521781
    FDIV float ptr [ESP + 0x1c]         ; 00521783
    FXCH                                ; 00521787
    FMUL ST1                            ; 00521789
    FLD float ptr [ESP + 0x370]         ; 0052178b
    FMUL ST2                            ; 00521792
    FLD float ptr [ESP + 0x374]         ; 00521794
    FMULP ST3                           ; 0052179b
    FXCH                                ; 0052179d
    FSTP float ptr [ESP + 0x36c]        ; 0052179f
    FSTP float ptr [ESP + 0x370]        ; 005217a6
    FSTP float ptr [ESP + 0x374]        ; 005217ad
    LEA EAX,[ESP + 0xec]                ; 005217b4
        ;   Label: LAB_005217b4
    PUSH EAX                            ; 005217bb
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100 ; 005217bc
        ;   XREF to: 005f5100 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100(CMatrix3x4f * matrix)
    FLD float ptr [EBX]                 ; 005217c1
    ADD ESP,0x4                         ; 005217c3
    FCHS                                ; 005217c6
    FSTP float ptr [ESP + 0xf8]         ; 005217c8
    MOV EAX,dword ptr [ESP + 0x33c]     ; 005217cf
    FLD float ptr [EBX + 0x4]           ; 005217d6
    FCHS                                ; 005217d9
    FSTP float ptr [ESP + 0x108]        ; 005217db
    FLD float ptr [EBX + 0x8]           ; 005217e2
    MOV dword ptr [ESP + 0x20c],EAX     ; 005217e5
    MOV EAX,dword ptr [ESP + 0x340]     ; 005217ec
    MOV dword ptr [ESP + 0x210],EAX     ; 005217f3
    MOV EAX,dword ptr [ESP + 0x344]     ; 005217fa
    MOV dword ptr [ESP + 0x214],EAX     ; 00521801
    MOV EAX,dword ptr [ESP + 0x36c]     ; 00521808
    MOV dword ptr [ESP + 0x21c],EAX     ; 0052180f
    MOV EAX,dword ptr [ESP + 0x370]     ; 00521816
    MOV dword ptr [ESP + 0x220],EAX     ; 0052181d
    MOV EAX,dword ptr [ESP + 0x374]     ; 00521824
    MOV dword ptr [ESP + 0x224],EAX     ; 0052182b
    MOV EAX,dword ptr [ESP + 0x384]     ; 00521832
    XOR EDX,EDX                         ; 00521839
    MOV dword ptr [ESP + 0x22c],EAX     ; 0052183b
    MOV EAX,dword ptr [ESP + 0x388]     ; 00521842
    FCHS                                ; 00521849
    MOV dword ptr [ESP + 0x230],EAX     ; 0052184b
    MOV EAX,dword ptr [ESP + 0x38c]     ; 00521852
    FSTP float ptr [ESP + 0x118]        ; 00521859
    MOV dword ptr [ESP + 0x234],EAX     ; 00521860
    LEA EAX,[ESP + 0x17c]               ; 00521867
    MOV dword ptr [ESP + 0x218],EDX     ; 0052186e
    PUSH EAX                            ; 00521875
    MOV dword ptr [ESP + 0x22c],EDX     ; 00521876
    MOV dword ptr [ESP + 0x23c],EDX     ; 0052187d
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100 ; 00521884
        ;   XREF to: 005f5100 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100(CMatrix3x4f * matrix)
    ADD ESP,0x4                         ; 00521889
    LEA EAX,[ESP + 0xec]                ; 0052188c
    MOV EDI,0xbf800000                  ; 00521893
    PUSH EAX                            ; 00521898
    LEA ESI,[ESP + 0x270]               ; 00521899
    MOV dword ptr [ESP + 0x1a8],EDI     ; 005218a0
    CALL core_xform.cpp_inverse_FUN_005f6210 ; 005218a7
        ;   XREF to: 005f6210 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * matrix_in, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005218ac
    LEA EDI,[ESP + 0x2a0]               ; 005218b1
    ADD ESP,0x4                         ; 005218b8
    LEA EAX,[ESP + 0x29c]               ; 005218bb
    LEA ESI,[ESP + 0x26c]               ; 005218c2
    PUSH EAX                            ; 005218c9
    LEA EAX,[ESP + 0x210]               ; 005218ca
    MOVSD.REP ES:EDI,ESI                ; 005218d1
    PUSH EAX                            ; 005218d3
    LEA ESI,[ESP + 0x2d4]               ; 005218d4
    CALL core_xform.cpp_inverse_FUN_005f6210 ; 005218db
        ;   XREF to: 005f6210 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * matrix_in, CMatrix3x4f * matrix_out)
    ADD ESP,0x4                         ; 005218e0
    LEA EAX,[ESP + 0x120]               ; 005218e3
    LEA EDI,[ESP + 0x120]               ; 005218ea
    PUSH EAX                            ; 005218f1
    LEA EAX,[ESP + 0x184]               ; 005218f2
    MOV ECX,0xc                         ; 005218f9
    PUSH EAX                            ; 005218fe
    LEA EAX,[ESP + 0x218]               ; 005218ff
    LEA ESI,[ESP + 0x2d8]               ; 00521906
    PUSH EAX                            ; 0052190d
    LEA EAX,[ESP + 0xfc]                ; 0052190e
    MOVSD.REP ES:EDI,ESI                ; 00521915
    PUSH EAX                            ; 00521917
    LEA ESI,[ESP + 0x1f0]               ; 00521918
    LEA EDI,[ESP + 0x310]               ; 0052191f
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 00521926
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0052192b
    LEA ESI,[ESP + 0x1f0]               ; 00521930
    ADD ESP,0x8                         ; 00521937
    LEA EAX,[ESP + 0x308]               ; 0052193a
    MOVSD.REP ES:EDI,ESI                ; 00521941
    PUSH EAX                            ; 00521943
    LEA ESI,[ESP + 0xcc]                ; 00521944
    LEA EDI,[ESP + 0x6c]                ; 0052194b
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0052194f
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00521954
    LEA ESI,[ESP + 0xcc]                ; 00521959
    ADD ESP,0x8                         ; 00521960
    LEA EAX,[ESP + 0x64]                ; 00521963
    MOVSD.REP ES:EDI,ESI                ; 00521967
    PUSH EAX                            ; 00521969
    LEA ESI,[ESP + 0x98]                ; 0052196a
    LEA EDI,[ESP + 0x158]               ; 00521971
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 00521978
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0052197d
    LEA ESI,[ESP + 0x98]                ; 00521982
    ADD ESP,0x8                         ; 00521989
    LEA EAX,[ESP + 0x150]               ; 0052198c
    MOVSD.REP ES:EDI,ESI                ; 00521993
    PUSH EAX                            ; 00521995
    LEA ESI,[ESP + 0x244]               ; 00521996
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0052199d
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 005219a2
    LEA EAX,[EBX + 0x30]                ; 005219a5
    MOV ECX,0xc                         ; 005219a8
    PUSH EAX                            ; 005219ad
    MOV EAX,dword ptr [EBP + 0x18]      ; 005219ae
    LEA ESI,[ESP + 0x240]               ; 005219b1
    PUSH EAX                            ; 005219b8
    LEA EAX,[ESP + 0x44c]               ; 005219b9
    LEA EDI,[EBX + 0x30]                ; 005219c0
    PUSH EAX                            ; 005219c3
    MOVSD.REP ES:EDI,ESI                ; 005219c4
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 005219c6
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    LEA EDX,[EBX + 0x60]                ; 005219cb
    ADD ESP,0xc                         ; 005219ce
    CMP EDX,EAX                         ; 005219d1
    JZ 0x005219e5                       ; 005219d3
        ;   XREF to: 005219e5 (CONDITIONAL_JUMP)  ; LAB_005219e5
    MOV ECX,dword ptr [EAX]             ; 005219d5
    MOV dword ptr [EDX],ECX             ; 005219d7
    MOV ECX,dword ptr [EAX + 0x4]       ; 005219d9
    MOV dword ptr [EDX + 0x4],ECX       ; 005219dc
    MOV ECX,dword ptr [EAX + 0x8]       ; 005219df
    MOV dword ptr [EDX + 0x8],ECX       ; 005219e2
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005219e5
        ;   Label: LAB_005219e5
    PUSH EDX                            ; 005219e8
    LEA EAX,[EBX + 0x70]                ; 005219e9
    PUSH EAX                            ; 005219ec
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 005219ed
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 005219f2
    MOV EAX,dword ptr [EBX + 0x74]      ; 005219f5
    MOV dword ptr [ESP + 0x498],EAX     ; 005219f8
    MOV EAX,dword ptr [EBX + 0x80]      ; 005219ff
    MOV dword ptr [ESP + 0x4b8],EAX     ; 00521a05
    MOV EAX,dword ptr [EBX + 0x8c]      ; 00521a0c
    MOV dword ptr [ESP + 0x49c],EAX     ; 00521a12
    MOV EAX,dword ptr [ESP + 0x498]     ; 00521a19
    MOV dword ptr [ESP + 0x3a8],EAX     ; 00521a20
    MOV EAX,dword ptr [ESP + 0x4b8]     ; 00521a27
    MOV dword ptr [ESP + 0x3ac],EAX     ; 00521a2e
    MOV EAX,dword ptr [ESP + 0x49c]     ; 00521a35
    MOV dword ptr [ESP + 0x3b0],EAX     ; 00521a3c
    MOV EAX,dword ptr [EBX + 0x70]      ; 00521a43
    MOV dword ptr [ESP + 0x4a0],EAX     ; 00521a46
    MOV EAX,dword ptr [EBX + 0x7c]      ; 00521a4d
    MOV dword ptr [ESP + 0x4a4],EAX     ; 00521a50
    MOV EAX,dword ptr [EBX + 0x88]      ; 00521a57
    MOV dword ptr [ESP + 0x4a8],EAX     ; 00521a5d
    MOV EAX,dword ptr [ESP + 0x4a0]     ; 00521a64
    MOV dword ptr [ESP + 0x3f0],EAX     ; 00521a6b
    MOV EAX,dword ptr [ESP + 0x4a4]     ; 00521a72
    MOV dword ptr [ESP + 0x3f4],EAX     ; 00521a79
    MOV EAX,dword ptr [ESP + 0x4a8]     ; 00521a80
    MOV dword ptr [ESP + 0x3f8],EAX     ; 00521a87
    MOV EAX,dword ptr [EBX + 0x78]      ; 00521a8e
    MOV dword ptr [ESP + 0x4ac],EAX     ; 00521a91
    MOV EAX,dword ptr [EBX + 0x84]      ; 00521a98
    MOV dword ptr [ESP + 0x4b0],EAX     ; 00521a9e
    MOV EAX,dword ptr [EBX + 0x90]      ; 00521aa5
    MOV dword ptr [ESP + 0x4b4],EAX     ; 00521aab
    MOV EAX,dword ptr [ESP + 0x4ac]     ; 00521ab2
    MOV dword ptr [ESP + 0x474],EAX     ; 00521ab9
    MOV EAX,dword ptr [ESP + 0x4b0]     ; 00521ac0
    MOV dword ptr [ESP + 0x478],EAX     ; 00521ac7
    MOV EAX,dword ptr [ESP + 0x4b4]     ; 00521ace
    LEA EDX,[ESP + 0x3a8]               ; 00521ad5
    MOV dword ptr [ESP + 0x47c],EAX     ; 00521adc
    MOV EAX,dword ptr [EBP + 0x18]      ; 00521ae3
    FLD float ptr [ESP + 0x498]         ; 00521ae6
    FADD float ptr [EAX]                ; 00521aed
    FLD float ptr [ESP + 0x4b8]         ; 00521aef
    FXCH                                ; 00521af6
    FSTP float ptr [ESP + 0x3cc]        ; 00521af8
    FADD float ptr [EAX + 0x4]          ; 00521aff
    FLD float ptr [ESP + 0x49c]         ; 00521b02
    FXCH                                ; 00521b09
    FSTP float ptr [ESP + 0x3d0]        ; 00521b0b
    FADD float ptr [EAX + 0x8]          ; 00521b12
    LEA EAX,[ESP + 0x3cc]               ; 00521b15
    FSTP float ptr [ESP + 0x3d4]        ; 00521b1c
    CMP EDX,EAX                         ; 00521b23
    JZ 0x00521b51                       ; 00521b25
        ;   XREF to: 00521b51 (CONDITIONAL_JUMP)  ; LAB_00521b51
    MOV EAX,dword ptr [ESP + 0x3cc]     ; 00521b27
    MOV dword ptr [ESP + 0x3a8],EAX     ; 00521b2e
    MOV EAX,dword ptr [ESP + 0x3d0]     ; 00521b35
    MOV dword ptr [ESP + 0x3ac],EAX     ; 00521b3c
    MOV EAX,dword ptr [ESP + 0x3d4]     ; 00521b43
    MOV dword ptr [ESP + 0x3b0],EAX     ; 00521b4a
    FLD float ptr [ESP + 0x3f0]         ; 00521b51
        ;   Label: LAB_00521b51
    MOV EAX,dword ptr [EBP + 0x18]      ; 00521b58
    FLD float ptr [ESP + 0x3f4]         ; 00521b5b
    FXCH                                ; 00521b62
    FADD float ptr [EAX]                ; 00521b64
    FLD float ptr [ESP + 0x3f8]         ; 00521b66
    FXCH                                ; 00521b6d
    FSTP float ptr [ESP + 0x408]        ; 00521b6f
    FXCH                                ; 00521b76
    FADD float ptr [EAX + 0x4]          ; 00521b78
    LEA EDX,[ESP + 0x3f0]               ; 00521b7b
    FSTP float ptr [ESP + 0x40c]        ; 00521b82
    FADD float ptr [EAX + 0x8]          ; 00521b89
    LEA EAX,[ESP + 0x408]               ; 00521b8c
    FSTP float ptr [ESP + 0x410]        ; 00521b93
    CMP EDX,EAX                         ; 00521b9a
    JZ 0x00521bc8                       ; 00521b9c
        ;   XREF to: 00521bc8 (CONDITIONAL_JUMP)  ; LAB_00521bc8
    MOV EAX,dword ptr [ESP + 0x408]     ; 00521b9e
    MOV dword ptr [ESP + 0x3f0],EAX     ; 00521ba5
    MOV EAX,dword ptr [ESP + 0x40c]     ; 00521bac
    MOV dword ptr [ESP + 0x3f4],EAX     ; 00521bb3
    MOV EAX,dword ptr [ESP + 0x410]     ; 00521bba
    MOV dword ptr [ESP + 0x3f8],EAX     ; 00521bc1
    FLD float ptr [ESP + 0x474]         ; 00521bc8
        ;   Label: LAB_00521bc8
    MOV EAX,dword ptr [EBP + 0x18]      ; 00521bcf
    FLD float ptr [ESP + 0x478]         ; 00521bd2
    FXCH                                ; 00521bd9
    FADD float ptr [EAX]                ; 00521bdb
    FLD float ptr [ESP + 0x47c]         ; 00521bdd
    FXCH                                ; 00521be4
    FSTP float ptr [ESP + 0x3e4]        ; 00521be6
    FXCH                                ; 00521bed
    FADD float ptr [EAX + 0x4]          ; 00521bef
    LEA EDX,[ESP + 0x3e4]               ; 00521bf2
    FSTP float ptr [ESP + 0x3e8]        ; 00521bf9
    FADD float ptr [EAX + 0x8]          ; 00521c00
    LEA EAX,[ESP + 0x474]               ; 00521c03
    FSTP float ptr [ESP + 0x3ec]        ; 00521c0a
    CMP EAX,EDX                         ; 00521c11
    JZ 0x00521c3f                       ; 00521c13
        ;   XREF to: 00521c3f (CONDITIONAL_JUMP)  ; LAB_00521c3f
    MOV EAX,dword ptr [ESP + 0x3e4]     ; 00521c15
    MOV dword ptr [ESP + 0x474],EAX     ; 00521c1c
    MOV EAX,dword ptr [ESP + 0x3e8]     ; 00521c23
    MOV dword ptr [ESP + 0x478],EAX     ; 00521c2a
    MOV EAX,dword ptr [ESP + 0x3ec]     ; 00521c31
    MOV dword ptr [ESP + 0x47c],EAX     ; 00521c38
    LEA EAX,[EBX + 0x30]                ; 00521c3f
        ;   Label: LAB_00521c3f
    PUSH EAX                            ; 00521c42
    LEA EAX,[ESP + 0x3ac]               ; 00521c43
    PUSH EAX                            ; 00521c4a
    LEA EAX,[ESP + 0x458]               ; 00521c4b
    PUSH EAX                            ; 00521c52
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00521c53
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    MOV EDX,EAX                         ; 00521c58
    LEA EAX,[ESP + 0x3b4]               ; 00521c5a
    ADD ESP,0xc                         ; 00521c61
    CMP EAX,EDX                         ; 00521c64
    JZ 0x00521c85                       ; 00521c66
        ;   XREF to: 00521c85 (CONDITIONAL_JUMP)  ; LAB_00521c85
    MOV EAX,dword ptr [EDX]             ; 00521c68
    MOV dword ptr [ESP + 0x3a8],EAX     ; 00521c6a
    MOV EAX,dword ptr [EDX + 0x4]       ; 00521c71
    MOV dword ptr [ESP + 0x3ac],EAX     ; 00521c74
    MOV EAX,dword ptr [EDX + 0x8]       ; 00521c7b
    MOV dword ptr [ESP + 0x3b0],EAX     ; 00521c7e
    LEA EAX,[EBX + 0x30]                ; 00521c85
        ;   Label: LAB_00521c85
    PUSH EAX                            ; 00521c88
    LEA EAX,[ESP + 0x3f4]               ; 00521c89
    PUSH EAX                            ; 00521c90
    LEA EAX,[ESP + 0x3c8]               ; 00521c91
    PUSH EAX                            ; 00521c98
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00521c99
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    MOV EDX,EAX                         ; 00521c9e
    LEA EAX,[ESP + 0x3fc]               ; 00521ca0
    ADD ESP,0xc                         ; 00521ca7
    CMP EAX,EDX                         ; 00521caa
    JZ 0x00521ccb                       ; 00521cac
        ;   XREF to: 00521ccb (CONDITIONAL_JUMP)  ; LAB_00521ccb
    MOV EAX,dword ptr [EDX]             ; 00521cae
    MOV dword ptr [ESP + 0x3f0],EAX     ; 00521cb0
    MOV EAX,dword ptr [EDX + 0x4]       ; 00521cb7
    MOV dword ptr [ESP + 0x3f4],EAX     ; 00521cba
    MOV EAX,dword ptr [EDX + 0x8]       ; 00521cc1
    MOV dword ptr [ESP + 0x3f8],EAX     ; 00521cc4
    LEA EAX,[EBX + 0x30]                ; 00521ccb
        ;   Label: LAB_00521ccb
    PUSH EAX                            ; 00521cce
    LEA EAX,[ESP + 0x478]               ; 00521ccf
    PUSH EAX                            ; 00521cd6
    LEA EAX,[ESP + 0x470]               ; 00521cd7
    PUSH EAX                            ; 00521cde
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00521cdf
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    MOV EDX,EAX                         ; 00521ce4
    LEA EAX,[ESP + 0x480]               ; 00521ce6
    ADD ESP,0xc                         ; 00521ced
    CMP EAX,EDX                         ; 00521cf0
    JZ 0x00521d11                       ; 00521cf2
        ;   XREF to: 00521d11 (CONDITIONAL_JUMP)  ; LAB_00521d11
    MOV EAX,dword ptr [EDX]             ; 00521cf4
    MOV dword ptr [ESP + 0x474],EAX     ; 00521cf6
    MOV EAX,dword ptr [EDX + 0x4]       ; 00521cfd
    MOV dword ptr [ESP + 0x478],EAX     ; 00521d00
    MOV EAX,dword ptr [EDX + 0x8]       ; 00521d07
    MOV dword ptr [ESP + 0x47c],EAX     ; 00521d0a
    FLD float ptr [ESP + 0x3a8]         ; 00521d11
        ;   Label: LAB_00521d11
    LEA EAX,[EBX + 0x60]                ; 00521d18
    FLD float ptr [ESP + 0x3ac]         ; 00521d1b
    FXCH                                ; 00521d22
    FSUB float ptr [EAX]                ; 00521d24
    FLD float ptr [ESP + 0x3b0]         ; 00521d26
    FXCH                                ; 00521d2d
    FSTP float ptr [ESP + 0x3d8]        ; 00521d2f
    FXCH                                ; 00521d36
    FSUB float ptr [EAX + 0x4]          ; 00521d38
    LEA EDX,[ESP + 0x3a8]               ; 00521d3b
    FSTP float ptr [ESP + 0x3dc]        ; 00521d42
    FSUB float ptr [EAX + 0x8]          ; 00521d49
    LEA EAX,[ESP + 0x3d8]               ; 00521d4c
    FSTP float ptr [ESP + 0x3e0]        ; 00521d53
    CMP EDX,EAX                         ; 00521d5a
    JZ 0x00521d88                       ; 00521d5c
        ;   XREF to: 00521d88 (CONDITIONAL_JUMP)  ; LAB_00521d88
    MOV EAX,dword ptr [ESP + 0x3d8]     ; 00521d5e
    MOV dword ptr [ESP + 0x3a8],EAX     ; 00521d65
    MOV EAX,dword ptr [ESP + 0x3dc]     ; 00521d6c
    MOV dword ptr [ESP + 0x3ac],EAX     ; 00521d73
    MOV EAX,dword ptr [ESP + 0x3e0]     ; 00521d7a
    MOV dword ptr [ESP + 0x3b0],EAX     ; 00521d81
    FLD float ptr [ESP + 0x3f0]         ; 00521d88
        ;   Label: LAB_00521d88
    LEA EAX,[EBX + 0x60]                ; 00521d8f
    FLD float ptr [ESP + 0x3f4]         ; 00521d92
    FXCH                                ; 00521d99
    FSUB float ptr [EAX]                ; 00521d9b
    FLD float ptr [ESP + 0x3f8]         ; 00521d9d
    FXCH                                ; 00521da4
    FSTP float ptr [ESP + 0x48c]        ; 00521da6
    FXCH                                ; 00521dad
    FSUB float ptr [EAX + 0x4]          ; 00521daf
    LEA EDX,[ESP + 0x3f0]               ; 00521db2
    FSTP float ptr [ESP + 0x490]        ; 00521db9
    FSUB float ptr [EAX + 0x8]          ; 00521dc0
    LEA EAX,[ESP + 0x48c]               ; 00521dc3
    FSTP float ptr [ESP + 0x494]        ; 00521dca
    CMP EDX,EAX                         ; 00521dd1
    JZ 0x00521dff                       ; 00521dd3
        ;   XREF to: 00521dff (CONDITIONAL_JUMP)  ; LAB_00521dff
    MOV EAX,dword ptr [ESP + 0x48c]     ; 00521dd5
    MOV dword ptr [ESP + 0x3f0],EAX     ; 00521ddc
    MOV EAX,dword ptr [ESP + 0x490]     ; 00521de3
    MOV dword ptr [ESP + 0x3f4],EAX     ; 00521dea
    MOV EAX,dword ptr [ESP + 0x494]     ; 00521df1
    MOV dword ptr [ESP + 0x3f8],EAX     ; 00521df8
    FLD float ptr [ESP + 0x474]         ; 00521dff
        ;   Label: LAB_00521dff
    LEA EAX,[EBX + 0x60]                ; 00521e06
    FLD float ptr [ESP + 0x478]         ; 00521e09
    FXCH                                ; 00521e10
    FSUB float ptr [EAX]                ; 00521e12
    FLD float ptr [ESP + 0x47c]         ; 00521e14
    FXCH                                ; 00521e1b
    FSTP float ptr [ESP + 0x39c]        ; 00521e1d
    FXCH                                ; 00521e24
    FSUB float ptr [EAX + 0x4]          ; 00521e26
    LEA EDX,[ESP + 0x474]               ; 00521e29
    FSTP float ptr [ESP + 0x3a0]        ; 00521e30
    FSUB float ptr [EAX + 0x8]          ; 00521e37
    LEA EAX,[ESP + 0x39c]               ; 00521e3a
    FSTP float ptr [ESP + 0x3a4]        ; 00521e41
    CMP EDX,EAX                         ; 00521e48
    JZ 0x00521e76                       ; 00521e4a
        ;   XREF to: 00521e76 (CONDITIONAL_JUMP)  ; LAB_00521e76
    MOV EAX,dword ptr [ESP + 0x39c]     ; 00521e4c
    MOV dword ptr [ESP + 0x474],EAX     ; 00521e53
    MOV EAX,dword ptr [ESP + 0x3a0]     ; 00521e5a
    MOV dword ptr [ESP + 0x478],EAX     ; 00521e61
    MOV EAX,dword ptr [ESP + 0x3a4]     ; 00521e68
    MOV dword ptr [ESP + 0x47c],EAX     ; 00521e6f
    MOV EAX,dword ptr [ESP + 0x3f0]     ; 00521e76
        ;   Label: LAB_00521e76
    MOV dword ptr [EBX + 0x70],EAX      ; 00521e7d
    MOV EAX,dword ptr [ESP + 0x3f4]     ; 00521e80
    MOV dword ptr [EBX + 0x7c],EAX      ; 00521e87
    MOV EAX,dword ptr [ESP + 0x3f8]     ; 00521e8a
    MOV dword ptr [EBX + 0x88],EAX      ; 00521e91
    MOV EAX,dword ptr [ESP + 0x3a8]     ; 00521e97
    MOV dword ptr [EBX + 0x74],EAX      ; 00521e9e
    MOV EAX,dword ptr [ESP + 0x3ac]     ; 00521ea1
    MOV dword ptr [EBX + 0x80],EAX      ; 00521ea8
    MOV EAX,dword ptr [ESP + 0x3b0]     ; 00521eae
    MOV dword ptr [EBX + 0x8c],EAX      ; 00521eb5
    MOV EAX,dword ptr [ESP + 0x474]     ; 00521ebb
    MOV dword ptr [EBX + 0x78],EAX      ; 00521ec2
    MOV EAX,dword ptr [ESP + 0x478]     ; 00521ec5
    MOV dword ptr [EBX + 0x84],EAX      ; 00521ecc
    MOV EAX,dword ptr [ESP + 0x47c]     ; 00521ed2
    MOV dword ptr [EBX + 0x90],EAX      ; 00521ed9
    MOV EAX,dword ptr [EBP + 0x20]      ; 00521edf
    PUSH EBX                            ; 00521ee2
    MOV dword ptr [EBX + 0x6c],EAX      ; 00521ee3
    CALL core_mirror.cpp_setupMirrorCamera_FUN_00521480 ; 00521ee6
        ;   XREF to: 00521480 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_setupMirrorCamera_FUN_00521480(SMirrorReflection * reflection)
    ADD ESP,0x4                         ; 00521eeb
    LEA EAX,[ESP + 0xec]                ; 00521eee
    PUSH EAX                            ; 00521ef5
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100 ; 00521ef6
        ;   XREF to: 005f5100 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100(CMatrix3x4f * matrix)
    FLD float ptr [EBX + 0x60]          ; 00521efb
    LEA EAX,[ESP + 0x210]               ; 00521efe
    ADD ESP,0x4                         ; 00521f05
    FCHS                                ; 00521f08
    FSTP float ptr [ESP + 0xf8]         ; 00521f0a
    PUSH EAX                            ; 00521f11
    FLD float ptr [EBX + 0x64]          ; 00521f12
    FCHS                                ; 00521f15
    FSTP float ptr [ESP + 0x10c]        ; 00521f17
    FLD float ptr [EBX + 0x68]          ; 00521f1e
    FCHS                                ; 00521f21
    FSTP float ptr [ESP + 0x11c]        ; 00521f23
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100 ; 00521f2a
        ;   XREF to: 005f5100 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100(CMatrix3x4f * matrix)
    FILD dword ptr [0x02d052e8]         ; 00521f2f | g_TransformMatrix
    FMUL double ptr [0x00638995]        ; 00521f35 | DOUBLE_00638995
    FILD dword ptr [0x02d052ec]         ; 00521f3b | g_TransformMatrix[0][1]
    FMUL double ptr [0x00638995]        ; 00521f41 | DOUBLE_00638995
    FILD dword ptr [0x02d052f0]         ; 00521f47 | g_TransformMatrix[0][2]
    FMUL double ptr [0x00638995]        ; 00521f4d | DOUBLE_00638995
    FILD dword ptr [0x02d052f4]         ; 00521f53 | g_TransformMatrix[1][0]
    FMUL double ptr [0x00638995]        ; 00521f59 | DOUBLE_00638995
    FILD dword ptr [0x02d052f8]         ; 00521f5f | g_TransformMatrix[1][1]
    FMUL double ptr [0x00638995]        ; 00521f65 | DOUBLE_00638995
    FILD dword ptr [0x02d052fc]         ; 00521f6b | g_TransformMatrix[1][2]
    FMUL double ptr [0x00638995]        ; 00521f71 | DOUBLE_00638995
    FILD dword ptr [0x02d05300]         ; 00521f77 | g_TransformMatrix[2][0]
    ADD ESP,0x4                         ; 00521f7d
    FMUL double ptr [0x00638995]        ; 00521f80 | DOUBLE_00638995
    FXCH ST6                            ; 00521f86
    FSTP float ptr [ESP + 0x20c]        ; 00521f88
    FILD dword ptr [0x02d05304]         ; 00521f8f | g_TransformMatrix[2][1]
    FMUL double ptr [0x00638995]        ; 00521f95 | DOUBLE_00638995
    FXCH ST5                            ; 00521f9b
    FSTP float ptr [ESP + 0x21c]        ; 00521f9d
    FILD dword ptr [0x02d05308]         ; 00521fa4 | g_TransformMatrix[2][2]
    FMUL double ptr [0x00638995]        ; 00521faa | DOUBLE_00638995
    LEA EAX,[ESP + 0x20c]               ; 00521fb0
    LEA ESI,[ESP + 0x2c]                ; 00521fb7
    PUSH EAX                            ; 00521fbb
    FXCH ST4                            ; 00521fbc
    FSTP float ptr [ESP + 0x230]        ; 00521fbe
    FXCH ST2                            ; 00521fc5
    FSTP float ptr [ESP + 0x214]        ; 00521fc7
    FSTP float ptr [ESP + 0x224]        ; 00521fce
    FSTP float ptr [ESP + 0x234]        ; 00521fd5
    FXCH ST2                            ; 00521fdc
    FSTP float ptr [ESP + 0x218]        ; 00521fde
    LEA EAX,[ESP + 0xf0]                ; 00521fe5
    FSTP float ptr [ESP + 0x228]        ; 00521fec
    PUSH EAX                            ; 00521ff3
    FSTP float ptr [ESP + 0x23c]        ; 00521ff4
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 00521ffb
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 00522000
    LEA EAX,[ESP + 0x1ac]               ; 00522003
    PUSH EAX                            ; 0052200a
    LEA EDI,[ESP + 0x1b0]               ; 0052200b
    MOV ECX,0xc                         ; 00522012
    PUSH EBX                            ; 00522017
    LEA EAX,[ESP + 0x488]               ; 00522018
    LEA ESI,[ESP + 0x34]                ; 0052201f
    PUSH EAX                            ; 00522023
    MOVSD.REP ES:EDI,ESI                ; 00522024
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00522026
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    MOV EDX,EAX                         ; 0052202b
    LEA EAX,[ESP + 0x36c]               ; 0052202d
    ADD ESP,0xc                         ; 00522034
    CMP EAX,EDX                         ; 00522037
    JZ 0x00522058                       ; 00522039
        ;   XREF to: 00522058 (CONDITIONAL_JUMP)  ; LAB_00522058
    MOV EAX,dword ptr [EDX]             ; 0052203b
    MOV dword ptr [ESP + 0x360],EAX     ; 0052203d
    MOV EAX,dword ptr [EDX + 0x4]       ; 00522044
    MOV dword ptr [ESP + 0x364],EAX     ; 00522047
    MOV EAX,dword ptr [EDX + 0x8]       ; 0052204e
    MOV dword ptr [ESP + 0x368],EAX     ; 00522051
    LEA EAX,[ESP + 0x1ac]               ; 00522058
        ;   Label: LAB_00522058
    PUSH EAX                            ; 0052205f
    LEA EAX,[EBX + 0xc]                 ; 00522060
    PUSH EAX                            ; 00522063
    LEA EAX,[ESP + 0x464]               ; 00522064
    PUSH EAX                            ; 0052206b
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0052206c
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    MOV EDX,EAX                         ; 00522071
    LEA EAX,[ESP + 0x408]               ; 00522073
    ADD ESP,0xc                         ; 0052207a
    CMP EAX,EDX                         ; 0052207d
    JZ 0x0052209e                       ; 0052207f
        ;   XREF to: 0052209e (CONDITIONAL_JUMP)  ; LAB_0052209e
    MOV EAX,dword ptr [EDX]             ; 00522081
    MOV dword ptr [ESP + 0x3fc],EAX     ; 00522083
    MOV EAX,dword ptr [EDX + 0x4]       ; 0052208a
    MOV dword ptr [ESP + 0x400],EAX     ; 0052208d
    MOV EAX,dword ptr [EDX + 0x8]       ; 00522094
    MOV dword ptr [ESP + 0x404],EAX     ; 00522097
    LEA EAX,[ESP + 0x1ac]               ; 0052209e
        ;   Label: LAB_0052209e
    PUSH EAX                            ; 005220a5
    LEA EAX,[EBX + 0x18]                ; 005220a6
    PUSH EAX                            ; 005220a9
    LEA EAX,[ESP + 0x398]               ; 005220aa
    PUSH EAX                            ; 005220b1
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 005220b2
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    MOV EDX,EAX                         ; 005220b7
    LEA EAX,[ESP + 0x438]               ; 005220b9
    ADD ESP,0xc                         ; 005220c0
    CMP EAX,EDX                         ; 005220c3
    JZ 0x005220e4                       ; 005220c5
        ;   XREF to: 005220e4 (CONDITIONAL_JUMP)  ; LAB_005220e4
    MOV EAX,dword ptr [EDX]             ; 005220c7
    MOV dword ptr [ESP + 0x42c],EAX     ; 005220c9
    MOV EAX,dword ptr [EDX + 0x4]       ; 005220d0
    MOV dword ptr [ESP + 0x430],EAX     ; 005220d3
    MOV EAX,dword ptr [EDX + 0x8]       ; 005220da
    MOV dword ptr [ESP + 0x434],EAX     ; 005220dd
    LEA EAX,[ESP + 0x1ac]               ; 005220e4
        ;   Label: LAB_005220e4
    PUSH EAX                            ; 005220eb
    LEA EAX,[EBX + 0x24]                ; 005220ec
    PUSH EAX                            ; 005220ef
    LEA EAX,[ESP + 0x350]               ; 005220f0
    PUSH EAX                            ; 005220f7
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 005220f8
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    MOV EDX,EAX                         ; 005220fd
    LEA EAX,[ESP + 0x420]               ; 005220ff
    ADD ESP,0xc                         ; 00522106
    CMP EAX,EDX                         ; 00522109
    JZ 0x0052212a                       ; 0052210b
        ;   XREF to: 0052212a (CONDITIONAL_JUMP)  ; LAB_0052212a
    MOV EAX,dword ptr [EDX]             ; 0052210d
    MOV dword ptr [ESP + 0x414],EAX     ; 0052210f
    MOV EAX,dword ptr [EDX + 0x4]       ; 00522116
    MOV dword ptr [ESP + 0x418],EAX     ; 00522119
    MOV EAX,dword ptr [EDX + 0x8]       ; 00522120
    MOV dword ptr [ESP + 0x41c],EAX     ; 00522123
    LEA EAX,[ESP + 0x1ac]               ; 0052212a
        ;   Label: LAB_0052212a
    PUSH EAX                            ; 00522131
    LEA EAX,[EBX + 0x30]                ; 00522132
    PUSH EAX                            ; 00522135
    MOV ECX,dword ptr [EBP + 0x18]      ; 00522136
    PUSH ECX                            ; 00522139
    LEA EAX,[ESP + 0x360]               ; 0052213a
    PUSH EAX                            ; 00522141
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00522142
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00522147
    PUSH EAX                            ; 0052214a
    LEA EAX,[ESP + 0x3bc]               ; 0052214b
    PUSH EAX                            ; 00522152
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00522153
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    MOV EDX,EAX                         ; 00522158
    LEA EAX,[ESP + 0x444]               ; 0052215a
    ADD ESP,0xc                         ; 00522161
    CMP EAX,EDX                         ; 00522164
    JZ 0x00522185                       ; 00522166
        ;   XREF to: 00522185 (CONDITIONAL_JUMP)  ; LAB_00522185
    MOV EAX,dword ptr [EDX]             ; 00522168
    MOV dword ptr [ESP + 0x438],EAX     ; 0052216a
    MOV EAX,dword ptr [EDX + 0x4]       ; 00522171
    MOV dword ptr [ESP + 0x43c],EAX     ; 00522174
    MOV EAX,dword ptr [EDX + 0x8]       ; 0052217b
    MOV dword ptr [ESP + 0x440],EAX     ; 0052217e
    LEA EAX,[ESP + 0x42c]               ; 00522185
        ;   Label: LAB_00522185
    PUSH EAX                            ; 0052218c
    LEA EAX,[ESP + 0x400]               ; 0052218d
    PUSH EAX                            ; 00522194
    LEA EAX,[ESP + 0x368]               ; 00522195
    PUSH EAX                            ; 0052219c
    LEA EAX,[EBX + 0x98]                ; 0052219d
    PUSH EAX                            ; 005221a3
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0 ; 005221a4
        ;   XREF to: 00520fe0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0(SClipPlane * out_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * vertex_c)
    ADD ESP,0x10                        ; 005221a9
    LEA EAX,[ESP + 0x3fc]               ; 005221ac
    PUSH EAX                            ; 005221b3
    LEA EAX,[ESP + 0x364]               ; 005221b4
    PUSH EAX                            ; 005221bb
    LEA EAX,[ESP + 0x440]               ; 005221bc
    PUSH EAX                            ; 005221c3
    LEA EAX,[EBX + 0xa8]                ; 005221c4
    PUSH EAX                            ; 005221ca
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0 ; 005221cb
        ;   XREF to: 00520fe0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0(SClipPlane * out_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * vertex_c)
    ADD ESP,0x10                        ; 005221d0
    LEA EAX,[ESP + 0x42c]               ; 005221d3
    PUSH EAX                            ; 005221da
    LEA EAX,[ESP + 0x400]               ; 005221db
    PUSH EAX                            ; 005221e2
    LEA EAX,[ESP + 0x440]               ; 005221e3
    PUSH EAX                            ; 005221ea
    LEA EAX,[EBX + 0xb8]                ; 005221eb
    PUSH EAX                            ; 005221f1
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0 ; 005221f2
        ;   XREF to: 00520fe0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0(SClipPlane * out_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * vertex_c)
    ADD ESP,0x10                        ; 005221f7
    LEA EAX,[ESP + 0x414]               ; 005221fa
    PUSH EAX                            ; 00522201
    LEA EAX,[ESP + 0x430]               ; 00522202
    PUSH EAX                            ; 00522209
    LEA EAX,[ESP + 0x440]               ; 0052220a
    PUSH EAX                            ; 00522211
    LEA EAX,[EBX + 0xc8]                ; 00522212
    PUSH EAX                            ; 00522218
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0 ; 00522219
        ;   XREF to: 00520fe0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0(SClipPlane * out_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * vertex_c)
    ADD ESP,0x10                        ; 0052221e
    LEA EAX,[ESP + 0x360]               ; 00522221
    PUSH EAX                            ; 00522228
    LEA EAX,[ESP + 0x418]               ; 00522229
    PUSH EAX                            ; 00522230
    LEA EAX,[ESP + 0x440]               ; 00522231
    PUSH EAX                            ; 00522238
    ADD EBX,0xd8                        ; 00522239
    PUSH EBX                            ; 0052223f
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0 ; 00522240
        ;   XREF to: 00520fe0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0(SClipPlane * out_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * vertex_c)
    ADD ESP,0x10                        ; 00522245
    MOV ESP,EBP                         ; 00522248
    POP EBP                             ; 0052224a
    POP EDI                             ; 0052224b
    POP ESI                             ; 0052224c
    POP EBX                             ; 0052224d
    RET                                 ; 0052224e
    FLD float ptr [ESP + 0x20]          ; 0052224f
        ;   Label: LAB_0052224f
    FABS                                ; 00522253
    FLD float ptr [ESP + 0x24]          ; 00522255
    FABS                                ; 00522259
    FSTP double ptr [ESP]               ; 0052225b
    FCOMP double ptr [ESP]              ; 0052225e
    FNSTSW AX                           ; 00522261
    SAHF                                ; 00522263
    JNC 0x00522295                      ; 00522264
        ;   XREF to: 00522295 (CONDITIONAL_JUMP)  ; LAB_00522295
    FLD float ptr [ESP + 0x28]          ; 00522266
    FABS                                ; 0052226a
    FCOMP double ptr [ESP]              ; 0052226c
    FNSTSW AX                           ; 0052226f
    SAHF                                ; 00522271
    JNC 0x00522295                      ; 00522272
        ;   XREF to: 00522295 (CONDITIONAL_JUMP)  ; LAB_00522295
    XOR EDI,EDI                         ; 00522274
    MOV EDX,0x3f800000                  ; 00522276
    MOV dword ptr [ESP + 0x370],EDI     ; 0052227b
    MOV dword ptr [ESP + 0x374],EDX     ; 00522282
    MOV dword ptr [ESP + 0x36c],EDI     ; 00522289
    JMP 0x0052156b                      ; 00522290
        ;   XREF to: 0052156b (UNCONDITIONAL_JUMP)  ; LAB_0052156b
    MOV ECX,0x3f800000                  ; 00522295
        ;   Label: LAB_00522295
    XOR EDX,EDX                         ; 0052229a
    MOV dword ptr [ESP + 0x370],ECX     ; 0052229c
    MOV dword ptr [ESP + 0x374],EDX     ; 005222a3
    MOV dword ptr [ESP + 0x36c],EDX     ; 005222aa
    JMP 0x0052156b                      ; 005222b1
        ;   XREF to: 0052156b (UNCONDITIONAL_JUMP)  ; LAB_0052156b
    XOR EAX,EAX                         ; 005222b6
        ;   Label: LAB_005222b6
    MOV dword ptr [ESP + 0x340],EAX     ; 005222b8
    MOV dword ptr [ESP + 0x33c],EAX     ; 005222bf
    MOV dword ptr [ESP + 0x344],EAX     ; 005222c6
    JMP 0x00521697                      ; 005222cd
        ;   XREF to: 00521697 (UNCONDITIONAL_JUMP)  ; LAB_00521697
    XOR ESI,ESI                         ; 005222d2
        ;   Label: LAB_005222d2
    MOV dword ptr [ESP + 0x370],ESI     ; 005222d4
    MOV dword ptr [ESP + 0x36c],ESI     ; 005222db
    MOV dword ptr [ESP + 0x374],ESI     ; 005222e2
    JMP 0x005217b4                      ; 005222e9
        ;   XREF to: 005217b4 (UNCONDITIONAL_JUMP)  ; LAB_005217b4

