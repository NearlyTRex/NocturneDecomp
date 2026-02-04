; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_cloth_cpp_FUN_00439710(void)
;
; Local Variables:
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined1       Stack[-0xd8]:1  local_d8
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined1       Stack[-0xc0]:1  local_c0
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
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
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
; XREF[9]:
;   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 at 0043c950
;   core_cloth.cpp_FUN_0043c290 at 0043c2bc
;   core_cloth.cpp_FUN_0043c430 at 0043c4df
;   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 at 0043d5ea
;   core_gabriela.cpp_CGabriella_setup_FUN_004d2c40 at 004d2c8b
;   core_mimic.cpp_CMimic_FUN_00520500 at 00520526
;   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 at 0051f5cb
;   core_svetlana.cpp_CSvetlana_FUN_005d88e0 at 005d8ae9
;   core_vampboss.cpp_CVampireBoss_setup_FUN_005e56c0 at 005e5748
;
; Referenced Globals:
;   float FLOAT_0065bb3c = 256
;
; Called Functions:
;   core_cloth.cpp_ConnectingVerticesCheck_FUN_004394e0
;   core_cloth.cpp_OrientBoneCheck_FUN_0043a110
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439710
        ;   Label: core_cloth.cpp_FUN_00439710
    PUSH ESI                            ; 00439711
    PUSH EDI                            ; 00439712
    PUSH EBP                            ; 00439713
    SUB ESP,0xec                        ; 00439714
    MOV EDX,dword ptr [ESP + 0x100]     ; 0043971a
    MOV ECX,dword ptr [EDX + 0x104]     ; 00439721
    XOR EAX,EAX                         ; 00439727
    TEST ECX,ECX                        ; 00439729
    JLE 0x00439760                      ; 0043972b
        ;   XREF to: 00439760 (CONDITIONAL_JUMP)  ; LAB_00439760
    XOR EDX,EDX                         ; 0043972d
    MOV ECX,dword ptr [ESP + 0x100]     ; 0043972f
        ;   Label: LAB_0043972f
    MOV ECX,dword ptr [ECX + 0x3fe3c]   ; 00439736
    MOV dword ptr [ECX + EDX*0x1],EAX   ; 0043973c
    MOV ECX,dword ptr [ESP + 0x100]     ; 0043973f
    INC EAX                             ; 00439746
    MOV EBX,dword ptr [ECX + 0x104]     ; 00439747
    ADD EDX,0x4                         ; 0043974d
    CMP EAX,EBX                         ; 00439750
    JL 0x0043972f                       ; 00439752
        ;   XREF to: 0043972f (CONDITIONAL_JUMP)  ; LAB_0043972f
    LEA EAX,[EAX]                       ; 00439754
    LEA EDX,[EDX]                       ; 0043975a
    XOR ESI,ESI                         ; 00439760
        ;   Label: LAB_00439760
    MOV dword ptr [ESP + 0xd4],ESI      ; 00439762
    MOV EAX,dword ptr [ESP + 0x100]     ; 00439769
        ;   Label: LAB_00439769
    MOV EAX,dword ptr [EAX + 0x104]     ; 00439770
    MOV EDI,dword ptr [ESP + 0xd4]      ; 00439776
    DEC EAX                             ; 0043977d
    CMP EAX,EDI                         ; 0043977e
    JLE 0x004398a7                      ; 00439780
        ;   XREF to: 004398a7 (CONDITIONAL_JUMP)  ; LAB_004398a7
    MOV EAX,dword ptr [ESP + 0x100]     ; 00439786
    LEA EBP,[EDI + 0x1]                 ; 0043978d
    CMP EBP,dword ptr [EAX + 0x104]     ; 00439790
    JGE 0x0043989b                      ; 00439796
        ;   XREF to: 0043989b (CONDITIONAL_JUMP)  ; LAB_0043989b
    LEA EAX,[EDI*0x4 + 0x0]             ; 0043979c
    LEA EBX,[EBP*0x4 + 0x0]             ; 004397a3
    MOV dword ptr [ESP + 0x74],EAX      ; 004397aa
    MOV EAX,dword ptr [ESP + 0x100]     ; 004397ae
        ;   Label: LAB_004397ae
    MOV EDX,dword ptr [ESP + 0x74]      ; 004397b5
    MOV EAX,dword ptr [EAX + 0x3fe3c]   ; 004397b9
    ADD EDX,EAX                         ; 004397bf
    MOV EDI,dword ptr [EDX]             ; 004397c1
    MOV ESI,dword ptr [EBX + EAX*0x1]   ; 004397c3
    IMUL EAX,EDI,0xc                    ; 004397c6
    MOV dword ptr [ESP + 0x84],EAX      ; 004397c9
    MOV EAX,dword ptr [ESP + 0x100]     ; 004397d0
    MOV ECX,dword ptr [ESP + 0x84]      ; 004397d7
    MOV EAX,dword ptr [EAX + 0x10c]     ; 004397de
    ADD ECX,EAX                         ; 004397e4
    MOV dword ptr [ESP + 0x84],ECX      ; 004397e6
    IMUL ECX,ESI,0xc                    ; 004397ed
    ADD ECX,EAX                         ; 004397f0
    MOV EAX,dword ptr [ESP + 0x84]      ; 004397f2
    MOV EAX,dword ptr [EAX + 0x4]       ; 004397f9
    CMP EAX,dword ptr [ECX + 0x4]       ; 004397fc
    JGE 0x00439813                      ; 004397ff
        ;   XREF to: 00439813 (CONDITIONAL_JUMP)  ; LAB_00439813
    MOV EAX,dword ptr [ESP + 0x100]     ; 00439801
    MOV dword ptr [EDX],ESI             ; 00439808
    MOV EAX,dword ptr [EAX + 0x3fe3c]   ; 0043980a
    MOV dword ptr [EBX + EAX*0x1],EDI   ; 00439810
    IMUL EDX,EDI,0xc                    ; 00439813
        ;   Label: LAB_00439813
    IMUL ECX,ESI,0xc                    ; 00439816
    MOV EAX,dword ptr [ESP + 0x100]     ; 00439819
    MOV EAX,dword ptr [EAX + 0x10c]     ; 00439820
    ADD EDX,EAX                         ; 00439826
    MOV dword ptr [ESP + 0x70],ECX      ; 00439828
    ADD EAX,ECX                         ; 0043982c
    MOV ECX,dword ptr [EDX + 0x4]       ; 0043982e
    CMP ECX,dword ptr [EAX + 0x4]       ; 00439831
    JNZ 0x00439882                      ; 00439834
        ;   XREF to: 00439882 (CONDITIONAL_JUMP)  ; LAB_00439882
    MOV EAX,dword ptr [EDX]             ; 00439836
    CDQ                                 ; 00439838
    XOR EAX,EDX                         ; 00439839
    SUB EAX,EDX                         ; 0043983b
    MOV ECX,EAX                         ; 0043983d
    MOV EAX,dword ptr [ESP + 0x100]     ; 0043983f
    MOV EDX,dword ptr [ESP + 0x70]      ; 00439846
    MOV EAX,dword ptr [EAX + 0x10c]     ; 0043984a
    ADD EAX,EDX                         ; 00439850
    MOV EAX,dword ptr [EAX]             ; 00439852
    CDQ                                 ; 00439854
    XOR EAX,EDX                         ; 00439855
    SUB EAX,EDX                         ; 00439857
    CMP ECX,EAX                         ; 00439859
    JLE 0x00439882                      ; 0043985b
        ;   XREF to: 00439882 (CONDITIONAL_JUMP)  ; LAB_00439882
    MOV EAX,dword ptr [ESP + 0x100]     ; 0043985d
    MOV ECX,dword ptr [ESP + 0x74]      ; 00439864
    MOV EAX,dword ptr [EAX + 0x3fe3c]   ; 00439868
    ADD EAX,ECX                         ; 0043986e
    MOV dword ptr [EAX],ESI             ; 00439870
    MOV EAX,dword ptr [ESP + 0x100]     ; 00439872
    MOV EAX,dword ptr [EAX + 0x3fe3c]   ; 00439879
    MOV dword ptr [EBX + EAX*0x1],EDI   ; 0043987f
    MOV EAX,dword ptr [ESP + 0x100]     ; 00439882
        ;   Label: LAB_00439882
    INC EBP                             ; 00439889
    MOV ECX,dword ptr [EAX + 0x104]     ; 0043988a
    ADD EBX,0x4                         ; 00439890
    CMP EBP,ECX                         ; 00439893
    JL 0x004397ae                       ; 00439895
        ;   XREF to: 004397ae (CONDITIONAL_JUMP)  ; LAB_004397ae
    INC dword ptr [ESP + 0xd4]          ; 0043989b
        ;   Label: LAB_0043989b
    JMP 0x00439769                      ; 004398a2
        ;   XREF to: 00439769 (UNCONDITIONAL_JUMP)  ; LAB_00439769
    MOV EAX,dword ptr [ESP + 0x100]     ; 004398a7
        ;   Label: LAB_004398a7
    MOV EBP,dword ptr [ESP + 0x104]     ; 004398ae
    ADD EAX,0x3fe48                     ; 004398b5
    CMP EAX,EBP                         ; 004398ba
    JZ 0x004398d0                       ; 004398bc
        ;   XREF to: 004398d0 (CONDITIONAL_JUMP)  ; LAB_004398d0
    MOV EDX,EBP                         ; 004398be
    MOV ECX,dword ptr [EDX]             ; 004398c0
    MOV dword ptr [EAX],ECX             ; 004398c2
    MOV ECX,dword ptr [EDX + 0x4]       ; 004398c4
    MOV dword ptr [EAX + 0x4],ECX       ; 004398c7
    MOV ECX,dword ptr [EDX + 0x8]       ; 004398ca
    MOV dword ptr [EAX + 0x8],ECX       ; 004398cd
    MOV EAX,dword ptr [ESP + 0x100]     ; 004398d0
        ;   Label: LAB_004398d0
    MOV EDX,dword ptr [ESP + 0x108]     ; 004398d7
    ADD EAX,0x3fe54                     ; 004398de
    CMP EAX,EDX                         ; 004398e3
    JZ 0x004398f7                       ; 004398e5
        ;   XREF to: 004398f7 (CONDITIONAL_JUMP)  ; LAB_004398f7
    MOV ECX,dword ptr [EDX]             ; 004398e7
    MOV dword ptr [EAX],ECX             ; 004398e9
    MOV ECX,dword ptr [EDX + 0x4]       ; 004398eb
    MOV dword ptr [EAX + 0x4],ECX       ; 004398ee
    MOV ECX,dword ptr [EDX + 0x8]       ; 004398f1
    MOV dword ptr [EAX + 0x8],ECX       ; 004398f4
    MOV EAX,dword ptr [ESP + 0x100]     ; 004398f7
        ;   Label: LAB_004398f7
    MOV ECX,dword ptr [EAX + 0x104]     ; 004398fe
    XOR EBP,EBP                         ; 00439904
    TEST ECX,ECX                        ; 00439906
    JLE 0x004399b3                      ; 00439908
        ;   XREF to: 004399b3 (CONDITIONAL_JUMP)  ; LAB_004399b3
    LEA ESI,[EAX + 0x56d8]              ; 0043990e
    LEA ECX,[ESI + 0xc0]                ; 00439914
    LEA EAX,[ESI + 0x18]                ; 0043991a
    LEA EDX,[ESI + 0xc]                 ; 0043991d
    IMUL EBX,EBP,0x11c                  ; 00439920
        ;   Label: LAB_00439920
    ADD EBX,ESI                         ; 00439926
    CMP EBX,ECX                         ; 00439928
    JZ 0x0043993c                       ; 0043992a
        ;   XREF to: 0043993c (CONDITIONAL_JUMP)  ; LAB_0043993c
    MOV EDI,dword ptr [ECX]             ; 0043992c
    MOV dword ptr [EBX],EDI             ; 0043992e
    MOV EDI,dword ptr [ECX + 0x4]       ; 00439930
    MOV dword ptr [EBX + 0x4],EDI       ; 00439933
    MOV EDI,dword ptr [ECX + 0x8]       ; 00439936
    MOV dword ptr [EBX + 0x8],EDI       ; 00439939
    MOV EBX,dword ptr [ESP + 0x100]     ; 0043993c
        ;   Label: LAB_0043993c
    MOV dword ptr [EDX + 0x8],0x0       ; 00439943
    ADD EAX,0x11c                       ; 0043994a
    MOV EDI,dword ptr [EDX + 0x8]       ; 0043994f
    MOV dword ptr [EDX + 0x4],EDI       ; 00439952
    MOV EDI,dword ptr [EDX + 0x4]       ; 00439955
    MOV dword ptr [EDX],EDI             ; 00439958
    MOV dword ptr [EAX + 0xfffffeec],0x0 ; 0043995a
    ADD ECX,0x11c                       ; 00439964
    MOV dword ptr [EAX + 0xfffffef8],0x0 ; 0043996a
    INC EBP                             ; 00439974
    FLD float ptr [EAX + 0xfffffef8]    ; 00439975
    MOV EDI,dword ptr [EAX + 0xfffffeec] ; 0043997b
    MOV dword ptr [EAX + 0xfffffee8],EDI ; 00439981
    FST float ptr [EAX + 0xfffffef4]    ; 00439987
    MOV EDI,dword ptr [EAX + 0xfffffee8] ; 0043998d
    MOV dword ptr [EAX + 0xfffffee4],EDI ; 00439993
    FSTP float ptr [EAX + 0xfffffef0]   ; 00439999
    MOV EDI,dword ptr [EBX + 0x104]     ; 0043999f
    ADD EDX,0x11c                       ; 004399a5
    CMP EBP,EDI                         ; 004399ab
    JL 0x00439920                       ; 004399ad
        ;   XREF to: 00439920 (CONDITIONAL_JUMP)  ; LAB_00439920
    MOV EBP,dword ptr [ESP + 0x100]     ; 004399b3
        ;   Label: LAB_004399b3
    PUSH EBP                            ; 004399ba
    CALL core_cloth.cpp_ConnectingVerticesCheck_FUN_004394e0 ; 004399bb
        ;   XREF to: 004394e0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_ConnectingVerticesCheck_FUN_004394e0()
    ADD ESP,0x4                         ; 004399c0
    MOV ECX,dword ptr [EBP + 0x3f028]   ; 004399c3
    XOR EAX,EAX                         ; 004399c9
    TEST ECX,ECX                        ; 004399cb
    JLE 0x00439a00                      ; 004399cd
        ;   XREF to: 00439a00 (CONDITIONAL_JUMP)  ; LAB_00439a00
    MOV EBX,dword ptr [ESP + 0x100]     ; 004399cf
    MOV EDX,dword ptr [EBP + 0x3f02c]   ; 004399d6
        ;   Label: LAB_004399d6
    IMUL EDX,EDX,0x11c                  ; 004399dc
    ADD EDX,EBX                         ; 004399e2
    MOV dword ptr [EDX + 0x574c],0x1    ; 004399e4
    INC EAX                             ; 004399ee
    MOV ESI,dword ptr [EBX + 0x3f028]   ; 004399ef
    ADD EBP,0x4                         ; 004399f5
    CMP EAX,ESI                         ; 004399f8
    JL 0x004399d6                       ; 004399fa
        ;   XREF to: 004399d6 (CONDITIONAL_JUMP)  ; LAB_004399d6
    LEA EAX,[EAX]                       ; 004399fc
    MOV EDI,dword ptr [ESP + 0x10c]     ; 00439a00
        ;   Label: LAB_00439a00
    TEST EDI,EDI                        ; 00439a07
    JZ 0x00439fc5                       ; 00439a09
        ;   XREF to: 00439fc5 (CONDITIONAL_JUMP)  ; LAB_00439fc5
    PUSH EDI                            ; 00439a0f
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 00439a10
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00439a15
    PUSH EAX                            ; 00439a18
    MOV EBX,EAX                         ; 00439a19
    MOV dword ptr [ESP + 0x7c],EAX      ; 00439a1b
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810 ; 00439a1f
        ;   XREF to: 0059a810 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 00439a24
    MOV EAX,dword ptr [ESP + 0x100]     ; 00439a27
    MOV EBP,EDI                         ; 00439a2e
    MOV EDX,dword ptr [EAX + 0x104]     ; 00439a30
    XOR EBP,EDI                         ; 00439a36
    TEST EDX,EDX                        ; 00439a38
    JLE 0x00439ae4                      ; 00439a3a
        ;   XREF to: 00439ae4 (CONDITIONAL_JUMP)  ; LAB_00439ae4
    LEA EDX,[EAX + 0x56d8]              ; 00439a40
    LEA ESI,[EBX + 0x8140]              ; 00439a46
    XOR EDI,EDI                         ; 00439a4c
    LEA ECX,[EDX + 0xc0]                ; 00439a4e
    FLD float ptr [ECX]                 ; 00439a54
        ;   Label: LAB_00439a54
    FADD float ptr [ESI]                ; 00439a56
    FSTP float ptr [ESP + 0x18]         ; 00439a58
    FLD float ptr [ECX + 0x4]           ; 00439a5c
    FADD float ptr [ESI + 0x4]          ; 00439a5f
    FSTP float ptr [ESP + 0x1c]         ; 00439a62
    FLD float ptr [ECX + 0x8]           ; 00439a66
    FADD float ptr [ESI + 0x8]          ; 00439a69
    LEA EAX,[ESP + 0x18]                ; 00439a6c
    FSTP float ptr [ESP + 0x20]         ; 00439a70
    CMP EDX,EAX                         ; 00439a74
    JZ 0x00439a8c                       ; 00439a76
        ;   XREF to: 00439a8c (CONDITIONAL_JUMP)  ; LAB_00439a8c
    MOV EAX,dword ptr [ESP + 0x18]      ; 00439a78
    MOV dword ptr [EDX],EAX             ; 00439a7c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00439a7e
    MOV dword ptr [EDX + 0x4],EAX       ; 00439a82
    MOV EAX,dword ptr [ESP + 0x20]      ; 00439a85
    MOV dword ptr [EDX + 0x8],EAX       ; 00439a89
    MOV EBX,dword ptr [ESP + 0x100]     ; 00439a8c
        ;   Label: LAB_00439a8c
    MOV EBX,dword ptr [EBX + 0x10c]     ; 00439a93
    MOV EAX,EDX                         ; 00439a99
    ADD EBX,EDI                         ; 00439a9b
    ADD ECX,0x11c                       ; 00439a9d
    FLD float ptr [EAX]                 ; 00439aa3
    FMUL float ptr [0x0065bb3c]         ; 00439aa5 | FLOAT_0065bb3c
    FISTP dword ptr [EBX]               ; 00439aab
    FLD float ptr [EAX + 0x4]           ; 00439aad
    FMUL float ptr [0x0065bb3c]         ; 00439ab0 | FLOAT_0065bb3c
    FISTP dword ptr [EBX + 0x4]         ; 00439ab6
    FLD float ptr [EAX + 0x8]           ; 00439ab9
    FMUL float ptr [0x0065bb3c]         ; 00439abc | FLOAT_0065bb3c
    FISTP dword ptr [EBX + 0x8]         ; 00439ac2
    MOV EAX,dword ptr [ESP + 0x100]     ; 00439ac5
    INC EBP                             ; 00439acc
    ADD EDX,0x11c                       ; 00439acd
    MOV EBX,dword ptr [EAX + 0x104]     ; 00439ad3
    ADD EDI,0xc                         ; 00439ad9
    CMP EBP,EBX                         ; 00439adc
    JL 0x00439a54                       ; 00439ade
        ;   XREF to: 00439a54 (CONDITIONAL_JUMP)  ; LAB_00439a54
    MOV ESI,dword ptr [ESP + 0x10c]     ; 00439ae4
        ;   Label: LAB_00439ae4
    PUSH ESI                            ; 00439aeb
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80 ; 00439aec
        ;   XREF to: 0059df80 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00439af1
    PUSH ESI                            ; 00439af4
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 00439af5
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00439afa
    MOV EAX,dword ptr [ESP + 0x100]     ; 00439afd
    XOR EBP,EBP                         ; 00439b04
    MOV EDX,dword ptr [EAX + 0x3f028]   ; 00439b06
    MOV dword ptr [ESP + 0xd0],EBP      ; 00439b0c
    TEST EDX,EDX                        ; 00439b13
    JLE 0x00439c77                      ; 00439b15
        ;   XREF to: 00439c77 (CONDITIONAL_JUMP)  ; LAB_00439c77
    LEA EAX,[ESI + 0xe80]               ; 00439b1b
    MOV dword ptr [ESP + 0x88],EAX      ; 00439b21
    MOV EAX,dword ptr [ESP + 0x100]     ; 00439b28
    ADD EAX,0x56d8                      ; 00439b2f
    MOV dword ptr [ESP + 0x7c],EAX      ; 00439b34
    MOV EAX,dword ptr [ESP + 0x100]     ; 00439b38
    MOV dword ptr [ESP + 0xb4],EAX      ; 00439b3f
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00439b46
        ;   Label: LAB_00439b46
    IMUL EAX,dword ptr [EAX + 0x3f02c],0x11c ; 00439b4d
    MOV ECX,0x7149f2ca                  ; 00439b57
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00439b5c
    XOR EBX,EBX                         ; 00439b60
    ADD EDX,EAX                         ; 00439b62
    MOV EAX,dword ptr [ESP + 0x78]      ; 00439b64
    MOV dword ptr [ESP + 0xe8],ECX      ; 00439b68
    MOV dword ptr [ESP + 0xdc],EBX      ; 00439b6f
    MOV ESI,dword ptr [EAX + 0x2c]      ; 00439b76
    MOV dword ptr [ESP + 0xe0],EDX      ; 00439b79
    TEST ESI,ESI                        ; 00439b80
    JLE 0x00439eeb                      ; 00439b82
        ;   XREF to: 00439eeb (CONDITIONAL_JUMP)  ; LAB_00439eeb
    MOV dword ptr [ESP + 0xb0],EBX      ; 00439b88
    MOV EAX,dword ptr [ESP + 0x78]      ; 00439b8f
        ;   Label: LAB_00439b8f
    MOV EDX,dword ptr [ESP + 0xb0]      ; 00439b93
    XOR EBX,EBX                         ; 00439b9a
    MOV EAX,dword ptr [EAX + 0x40]      ; 00439b9c
    MOV dword ptr [ESP + 0x30],EBX      ; 00439b9f
    MOV dword ptr [ESP + 0x34],EBX      ; 00439ba3
    ADD EDX,EAX                         ; 00439ba7
    MOV dword ptr [ESP + 0x38],EBX      ; 00439ba9
    MOV dword ptr [ESP + 0x80],EDX      ; 00439bad
    LEA EBX,[EDX + 0x4]                 ; 00439bb4
    LEA EDI,[EDX + 0x10]                ; 00439bb7
    XOR EBP,EBP                         ; 00439bba
    MOV ESI,EDX                         ; 00439bbc
    MOV EDX,dword ptr [ESP + 0x80]      ; 00439bbe
        ;   Label: LAB_00439bbe
    XOR EAX,EAX                         ; 00439bc5
    MOV AL,byte ptr [EDX]               ; 00439bc7
    CMP EBP,EAX                         ; 00439bc9
    JGE 0x00439e52                      ; 00439bcb
        ;   XREF to: 00439e52 (CONDITIONAL_JUMP)  ; LAB_00439e52
    XOR EAX,EAX                         ; 00439bd1
    MOV AL,byte ptr [ESI + 0x1]         ; 00439bd3
    IMUL EAX,EAX,0x30                   ; 00439bd6
    ADD EAX,dword ptr [ESP + 0x88]      ; 00439bd9
    PUSH EAX                            ; 00439be0
    PUSH EDI                            ; 00439be1
    LEA EAX,[ESP + 0x44]                ; 00439be2
    PUSH EAX                            ; 00439be6
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00439be7
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    FLD float ptr [EAX]                 ; 00439bec
    FMUL float ptr [EBX]                ; 00439bee
    ADD ESP,0xc                         ; 00439bf0
    FSTP float ptr [ESP + 0x54]         ; 00439bf3
    FLD float ptr [EAX + 0x4]           ; 00439bf7
    FMUL float ptr [EBX]                ; 00439bfa
    FSTP float ptr [ESP + 0x58]         ; 00439bfc
    FLD float ptr [EAX + 0x8]           ; 00439c00
    FMUL float ptr [EBX]                ; 00439c03
    INC ESI                             ; 00439c05
    ADD EBX,0x4                         ; 00439c06
    INC EBP                             ; 00439c09
    ADD EDI,0xc                         ; 00439c0a
    FLD float ptr [ESP + 0x30]          ; 00439c0d
    FLD float ptr [ESP + 0x34]          ; 00439c11
    FLD float ptr [ESP + 0x38]          ; 00439c15
    FXCH ST2                            ; 00439c19
    FADD float ptr [ESP + 0x54]         ; 00439c1b
    FXCH                                ; 00439c1f
    FADD float ptr [ESP + 0x58]         ; 00439c21
    FXCH ST3                            ; 00439c25
    FSTP float ptr [ESP + 0x5c]         ; 00439c27
    FSTP float ptr [ESP + 0x30]         ; 00439c2b
    FADD float ptr [ESP + 0x5c]         ; 00439c2f
    FXCH                                ; 00439c33
    FSTP float ptr [ESP + 0x34]         ; 00439c35
    FSTP float ptr [ESP + 0x38]         ; 00439c39
    JMP 0x00439bbe                      ; 00439c3d
        ;   XREF to: 00439bbe (UNCONDITIONAL_JUMP)  ; LAB_00439bbe
    MOV EBX,dword ptr [ESP + 0xb4]      ; 00439c42
        ;   Label: LAB_00439c42
    MOV ESI,dword ptr [ESP + 0xd0]      ; 00439c49
    MOV EDX,dword ptr [ESP + 0x100]     ; 00439c50
    ADD EBX,0x4                         ; 00439c57
    INC ESI                             ; 00439c5a
    MOV EDI,dword ptr [EDX + 0x3f028]   ; 00439c5b
    MOV dword ptr [ESP + 0xb4],EBX      ; 00439c61
    MOV dword ptr [ESP + 0xd0],ESI      ; 00439c68
    CMP ESI,EDI                         ; 00439c6f
    JL 0x00439b46                       ; 00439c71
        ;   XREF to: 00439b46 (CONDITIONAL_JUMP)  ; LAB_00439b46
    MOV EAX,dword ptr [ESP + 0x100]     ; 00439c77
        ;   Label: LAB_00439c77
    MOV EBP,dword ptr [EAX + 0x3ce8c]   ; 00439c7e
    XOR EBX,EBX                         ; 00439c84
    TEST EBP,EBP                        ; 00439c86
    JLE 0x00439cb0                      ; 00439c88
        ;   XREF to: 00439cb0 (CONDITIONAL_JUMP)  ; LAB_00439cb0
    MOV EDI,dword ptr [ESP + 0x10c]     ; 00439c8a
    MOV EBP,dword ptr [ESP + 0x100]     ; 00439c91
    PUSH EDI                            ; 00439c98
        ;   Label: LAB_00439c98
    PUSH EBX                            ; 00439c99
    PUSH EBP                            ; 00439c9a
    CALL core_cloth.cpp_OrientBoneCheck_FUN_0043a110 ; 00439c9b
        ;   XREF to: 0043a110 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_OrientBoneCheck_FUN_0043a110()
    INC EBX                             ; 00439ca0
    MOV EDX,dword ptr [EBP + 0x3ce8c]   ; 00439ca1
    ADD ESP,0xc                         ; 00439ca7
    CMP EBX,EDX                         ; 00439caa
    JL 0x00439c98                       ; 00439cac
        ;   XREF to: 00439c98 (CONDITIONAL_JUMP)  ; LAB_00439c98
    MOV EAX,EAX                         ; 00439cae
    MOV EAX,dword ptr [ESP + 0x100]     ; 00439cb0
        ;   Label: LAB_00439cb0
    XOR ECX,ECX                         ; 00439cb7
    MOV EBX,dword ptr [EAX + 0x3f028]   ; 00439cb9
    MOV dword ptr [ESP + 0x6c],ECX      ; 00439cbf
    TEST EBX,EBX                        ; 00439cc3
    JLE 0x00439fb5                      ; 00439cc5
        ;   XREF to: 00439fb5 (CONDITIONAL_JUMP)  ; LAB_00439fb5
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00439ccb
    ADD EAX,0xe80                       ; 00439cd2
    MOV dword ptr [ESP + 0xa4],EAX      ; 00439cd7
    MOV EAX,dword ptr [ESP + 0x100]     ; 00439cde
    ADD EAX,0x56d8                      ; 00439ce5
    MOV dword ptr [ESP + 0x94],EAX      ; 00439cea
    MOV EAX,dword ptr [ESP + 0x100]     ; 00439cf1
    MOV dword ptr [ESP + 0xc4],ECX      ; 00439cf8
    MOV dword ptr [ESP + 0xc8],EAX      ; 00439cff
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00439d06
        ;   Label: LAB_00439d06
    IMUL EAX,dword ptr [EAX + 0x3f02c],0x11c ; 00439d0d
    MOV ESI,dword ptr [ESP + 0x100]     ; 00439d17
    XOR ECX,ECX                         ; 00439d1e
    MOV EDX,dword ptr [ESP + 0x94]      ; 00439d20
    MOV dword ptr [ESP + 0xcc],ECX      ; 00439d27
    ADD EDX,EAX                         ; 00439d2e
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00439d30
    MOV dword ptr [ESP + 0xbc],ECX      ; 00439d37
    ADD EAX,ESI                         ; 00439d3e
    MOV dword ptr [ESP + 0x90],EDX      ; 00439d40
    MOV dword ptr [ESP + 0xc0],EAX      ; 00439d47
    MOV EAX,dword ptr [ESP + 0x78]      ; 00439d4e
        ;   Label: LAB_00439d4e
    MOV EDI,dword ptr [ESP + 0xcc]      ; 00439d52
    CMP EDI,dword ptr [EAX]             ; 00439d59
    JGE 0x00439f75                      ; 00439d5b
        ;   XREF to: 00439f75 (CONDITIONAL_JUMP)  ; LAB_00439f75
    MOV EBP,0x7149f2ca                  ; 00439d61
    XOR EAX,EAX                         ; 00439d66
    XOR EDX,EDX                         ; 00439d68
    MOV dword ptr [ESP + 0x9c],EBP      ; 00439d6a
    MOV dword ptr [ESP + 0xd8],EAX      ; 00439d71
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00439d78
    MOV dword ptr [ESP + 0xb8],EDX      ; 00439d7f
    MOV dword ptr [ESP + 0xac],EAX      ; 00439d86
    MOV EAX,dword ptr [ESP + 0x78]      ; 00439d8d
        ;   Label: LAB_00439d8d
    ADD EAX,dword ptr [ESP + 0xac]      ; 00439d91
    MOV EDX,dword ptr [ESP + 0xd8]      ; 00439d98
    CMP EDX,dword ptr [EAX + 0x2c]      ; 00439d9f
    JGE 0x0043a034                      ; 00439da2
        ;   XREF to: 0043a034 (CONDITIONAL_JUMP)  ; LAB_0043a034
    MOV EDX,dword ptr [ESP + 0xb8]      ; 00439da8
    MOV EAX,dword ptr [EAX + 0x40]      ; 00439daf
    XOR ESI,ESI                         ; 00439db2
    ADD EDX,EAX                         ; 00439db4
    XOR EAX,EAX                         ; 00439db6
    MOV dword ptr [ESP + 0xa0],EDX      ; 00439db8
    MOV dword ptr [ESP + 0xc],EAX       ; 00439dbf
    LEA EBX,[EDX + 0x4]                 ; 00439dc3
    MOV dword ptr [ESP + 0x10],EAX      ; 00439dc6
    LEA EDI,[EDX + 0x10]                ; 00439dca
    MOV dword ptr [ESP + 0x14],EAX      ; 00439dcd
    MOV EBP,EDX                         ; 00439dd1
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00439dd3
        ;   Label: LAB_00439dd3
    XOR EAX,EAX                         ; 00439dda
    MOV AL,byte ptr [EDX]               ; 00439ddc
    CMP ESI,EAX                         ; 00439dde
    JGE 0x0043a07a                      ; 00439de0
        ;   XREF to: 0043a07a (CONDITIONAL_JUMP)  ; LAB_0043a07a
    XOR EAX,EAX                         ; 00439de6
    MOV AL,byte ptr [EBP + 0x1]         ; 00439de8
    IMUL EAX,EAX,0x30                   ; 00439deb
    ADD EAX,dword ptr [ESP + 0xa4]      ; 00439dee
    PUSH EAX                            ; 00439df5
    PUSH EDI                            ; 00439df6
    LEA EAX,[ESP + 0x2c]                ; 00439df7
    PUSH EAX                            ; 00439dfb
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00439dfc
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    FLD float ptr [EAX]                 ; 00439e01
    FMUL float ptr [EBX]                ; 00439e03
    ADD ESP,0xc                         ; 00439e05
    FSTP float ptr [ESP]                ; 00439e08
    FLD float ptr [EAX + 0x4]           ; 00439e0b
    FMUL float ptr [EBX]                ; 00439e0e
    FSTP float ptr [ESP + 0x4]          ; 00439e10
    FLD float ptr [EAX + 0x8]           ; 00439e14
    FMUL float ptr [EBX]                ; 00439e17
    INC EBP                             ; 00439e19
    ADD EBX,0x4                         ; 00439e1a
    INC ESI                             ; 00439e1d
    ADD EDI,0xc                         ; 00439e1e
    FLD float ptr [ESP + 0xc]           ; 00439e21
    FLD float ptr [ESP + 0x10]          ; 00439e25
    FLD float ptr [ESP + 0x14]          ; 00439e29
    FXCH ST2                            ; 00439e2d
    FADD float ptr [ESP]                ; 00439e2f
    FXCH                                ; 00439e32
    FADD float ptr [ESP + 0x4]          ; 00439e34
    FXCH ST3                            ; 00439e38
    FSTP float ptr [ESP + 0x8]          ; 00439e3a
    FSTP float ptr [ESP + 0xc]          ; 00439e3e
    FADD float ptr [ESP + 0x8]          ; 00439e42
    FXCH                                ; 00439e46
    FSTP float ptr [ESP + 0x10]         ; 00439e48
    FSTP float ptr [ESP + 0x14]         ; 00439e4c
    JMP 0x00439dd3                      ; 00439e50
        ;   XREF to: 00439dd3 (UNCONDITIONAL_JUMP)  ; LAB_00439dd3
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00439e52
        ;   Label: LAB_00439e52
    FLD float ptr [EAX]                 ; 00439e59
    FSUB float ptr [ESP + 0x30]         ; 00439e5b
    FSTP float ptr [ESP + 0x60]         ; 00439e5f
    FLD float ptr [EAX + 0x4]           ; 00439e63
    FSUB float ptr [ESP + 0x34]         ; 00439e66
    FST float ptr [ESP + 0x64]          ; 00439e6a
    FMUL float ptr [ESP + 0x64]         ; 00439e6e
    FLD float ptr [ESP + 0x60]          ; 00439e72
    FMUL ST0                            ; 00439e76
    FLD float ptr [EAX + 0x8]           ; 00439e78
    FSUB float ptr [ESP + 0x38]         ; 00439e7b
    FXCH                                ; 00439e7f
    FADDP ST2,ST0                       ; 00439e81
    FST float ptr [ESP + 0x68]          ; 00439e83
    FMUL float ptr [ESP + 0x68]         ; 00439e87
    FADDP                               ; 00439e8b
    FST float ptr [ESP + 0x8c]          ; 00439e8d
    FCOMP float ptr [ESP + 0xe8]        ; 00439e94
    FNSTSW AX                           ; 00439e9b
    SAHF                                ; 00439e9d
    JNC 0x00439ebc                      ; 00439e9e
        ;   XREF to: 00439ebc (CONDITIONAL_JUMP)  ; LAB_00439ebc
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00439ea0
    MOV dword ptr [ESP + 0xe8],EAX      ; 00439ea7
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00439eae
    MOV dword ptr [ESP + 0xe4],EAX      ; 00439eb5
    MOV ESI,dword ptr [ESP + 0xb0]      ; 00439ebc
        ;   Label: LAB_00439ebc
    MOV EDI,dword ptr [ESP + 0xdc]      ; 00439ec3
    MOV EDX,dword ptr [ESP + 0x78]      ; 00439eca
    ADD ESI,0x34                        ; 00439ece
    INC EDI                             ; 00439ed1
    MOV EBP,dword ptr [EDX + 0x2c]      ; 00439ed2
    MOV dword ptr [ESP + 0xb0],ESI      ; 00439ed5
    MOV dword ptr [ESP + 0xdc],EDI      ; 00439edc
    CMP EDI,EBP                         ; 00439ee3
    JL 0x00439b8f                       ; 00439ee5
        ;   XREF to: 00439b8f (CONDITIONAL_JUMP)  ; LAB_00439b8f
    IMUL EBP,dword ptr [ESP + 0xe4],0x34 ; 00439eeb
        ;   Label: LAB_00439eeb
    MOV EAX,dword ptr [ESP + 0x78]      ; 00439ef3
    MOV EAX,dword ptr [EAX + 0x40]      ; 00439ef7
    ADD EBP,EAX                         ; 00439efa
    XOR EAX,EAX                         ; 00439efc
    MOV EDX,dword ptr [ESP + 0xe0]      ; 00439efe
    MOV AL,byte ptr [EBP]               ; 00439f05
    XOR EDI,EDI                         ; 00439f08
    MOV dword ptr [EDX + 0xdc],EAX      ; 00439f0a
    TEST EAX,EAX                        ; 00439f10
    JLE 0x00439c42                      ; 00439f12
        ;   XREF to: 00439c42 (CONDITIONAL_JUMP)  ; LAB_00439c42
    LEA EAX,[EDX + 0xec]                ; 00439f18
    LEA EBX,[EBP + 0x10]                ; 00439f1e
    MOV ESI,dword ptr [ESP + 0xe0]      ; 00439f21
    MOV EDX,EBP                         ; 00439f28
    XOR ECX,ECX                         ; 00439f2a
        ;   Label: LAB_00439f2a
    MOV CL,byte ptr [EDX + 0x1]         ; 00439f2c
    MOV dword ptr [ESI + 0xe0],ECX      ; 00439f2f
    CMP EAX,EBX                         ; 00439f35
    JZ 0x00439f49                       ; 00439f37
        ;   XREF to: 00439f49 (CONDITIONAL_JUMP)  ; LAB_00439f49
    MOV ECX,dword ptr [EBX]             ; 00439f39
    MOV dword ptr [EAX],ECX             ; 00439f3b
    MOV ECX,dword ptr [EBX + 0x4]       ; 00439f3d
    MOV dword ptr [EAX + 0x4],ECX       ; 00439f40
    MOV ECX,dword ptr [EBX + 0x8]       ; 00439f43
    MOV dword ptr [EAX + 0x8],ECX       ; 00439f46
    FLD float ptr [EBP + 0x4]           ; 00439f49
        ;   Label: LAB_00439f49
    MOV ECX,dword ptr [ESP + 0xe0]      ; 00439f4c
    ADD EAX,0xc                         ; 00439f53
    ADD EBX,0xc                         ; 00439f56
    INC EDX                             ; 00439f59
    ADD ESI,0x4                         ; 00439f5a
    ADD EBP,0x4                         ; 00439f5d
    INC EDI                             ; 00439f60
    FSTP float ptr [ESI + 0x10c]        ; 00439f61
    CMP EDI,dword ptr [ECX + 0xdc]      ; 00439f67
    JGE 0x00439c42                      ; 00439f6d
        ;   XREF to: 00439c42 (CONDITIONAL_JUMP)  ; LAB_00439c42
    JMP 0x00439f2a                      ; 00439f73
        ;   XREF to: 00439f2a (UNCONDITIONAL_JUMP)  ; LAB_00439f2a
    MOV ECX,dword ptr [ESP + 0xc4]      ; 00439f75
        ;   Label: LAB_00439f75
    MOV EBX,dword ptr [ESP + 0xc8]      ; 00439f7c
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00439f83
    MOV EDX,dword ptr [ESP + 0x100]     ; 00439f87
    ADD ECX,0x4                         ; 00439f8e
    ADD EBX,0x4                         ; 00439f91
    INC ESI                             ; 00439f94
    MOV EDI,dword ptr [EDX + 0x3f028]   ; 00439f95
    MOV dword ptr [ESP + 0xc4],ECX      ; 00439f9b
    MOV dword ptr [ESP + 0xc8],EBX      ; 00439fa2
    MOV dword ptr [ESP + 0x6c],ESI      ; 00439fa9
    CMP ESI,EDI                         ; 00439fad
    JL 0x00439d06                       ; 00439faf
        ;   XREF to: 00439d06 (CONDITIONAL_JUMP)  ; LAB_00439d06
    MOV EBP,dword ptr [ESP + 0x10c]     ; 00439fb5
        ;   Label: LAB_00439fb5
    PUSH EBP                            ; 00439fbc
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 ; 00439fbd
        ;   XREF to: 0059e000 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00439fc2
    MOV EAX,dword ptr [ESP + 0x100]     ; 00439fc5
        ;   Label: LAB_00439fc5
    MOV ECX,dword ptr [EAX + 0x104]     ; 00439fcc
    XOR EDX,EDX                         ; 00439fd2
    TEST ECX,ECX                        ; 00439fd4
    JLE 0x0043a000                      ; 00439fd6
        ;   XREF to: 0043a000 (CONDITIONAL_JUMP)  ; LAB_0043a000
    MOV ECX,dword ptr [ESP + 0x100]     ; 00439fd8
    MOV dword ptr [EAX + 0x57b0],0xffffffff ; 00439fdf
        ;   Label: LAB_00439fdf
    INC EDX                             ; 00439fe9
    MOV EBX,dword ptr [ECX + 0x104]     ; 00439fea
    ADD EAX,0x11c                       ; 00439ff0
    CMP EDX,EBX                         ; 00439ff5
    JL 0x00439fdf                       ; 00439ff7
        ;   XREF to: 00439fdf (CONDITIONAL_JUMP)  ; LAB_00439fdf
    LEA EAX,[EAX]                       ; 00439ff9
    NOP                                 ; 00439fff
    MOV EAX,dword ptr [ESP + 0x100]     ; 0043a000
        ;   Label: LAB_0043a000
    MOV dword ptr [EAX + 0x3fe6c],0x0   ; 0043a007
    MOV EDX,dword ptr [EAX + 0x3fe6c]   ; 0043a011
    MOV dword ptr [EAX + 0x3fe68],EDX   ; 0043a017
    MOV EDX,dword ptr [EAX + 0x3fe68]   ; 0043a01d
    MOV dword ptr [EAX + 0x3fe64],EDX   ; 0043a023
    ADD ESP,0xec                        ; 0043a029
    POP EBP                             ; 0043a02f
    POP EDI                             ; 0043a030
    POP ESI                             ; 0043a031
    POP EBX                             ; 0043a032
    RET                                 ; 0043a033
    MOV ESI,dword ptr [ESP + 0xbc]      ; 0043a034
        ;   Label: LAB_0043a034
    MOV EDX,dword ptr [ESP + 0xc0]      ; 0043a03b
    MOV EBP,dword ptr [ESP + 0xcc]      ; 0043a042
    MOV EAX,dword ptr [ESP + 0x98]      ; 0043a049
    ADD ESI,0x4                         ; 0043a050
    LEA EDI,[EDX + 0x190]               ; 0043a053
    INC EBP                             ; 0043a059
    MOV dword ptr [EDX + 0x3f1bc],EAX   ; 0043a05a
    MOV dword ptr [ESP + 0xbc],ESI      ; 0043a060
    MOV dword ptr [ESP + 0xc0],EDI      ; 0043a067
    MOV dword ptr [ESP + 0xcc],EBP      ; 0043a06e
    JMP 0x00439d4e                      ; 0043a075
        ;   XREF to: 00439d4e (UNCONDITIONAL_JUMP)  ; LAB_00439d4e
    MOV EAX,dword ptr [ESP + 0x90]      ; 0043a07a
        ;   Label: LAB_0043a07a
    FLD float ptr [EAX]                 ; 0043a081
    FSUB float ptr [ESP + 0xc]          ; 0043a083
    FSTP float ptr [ESP + 0x48]         ; 0043a087
    FLD float ptr [EAX + 0x4]           ; 0043a08b
    FSUB float ptr [ESP + 0x10]         ; 0043a08e
    FST float ptr [ESP + 0x4c]          ; 0043a092
    FMUL float ptr [ESP + 0x4c]         ; 0043a096
    FLD float ptr [ESP + 0x48]          ; 0043a09a
    FMUL ST0                            ; 0043a09e
    FLD float ptr [EAX + 0x8]           ; 0043a0a0
    FSUB float ptr [ESP + 0x14]         ; 0043a0a3
    FXCH                                ; 0043a0a7
    FADDP ST2,ST0                       ; 0043a0a9
    FST float ptr [ESP + 0x50]          ; 0043a0ab
    FMUL float ptr [ESP + 0x50]         ; 0043a0af
    FADDP                               ; 0043a0b3
    FST float ptr [ESP + 0xa8]          ; 0043a0b5
    FCOMP float ptr [ESP + 0x9c]        ; 0043a0bc
    FNSTSW AX                           ; 0043a0c3
    SAHF                                ; 0043a0c5
    JNC 0x0043a0e4                      ; 0043a0c6
        ;   XREF to: 0043a0e4 (CONDITIONAL_JUMP)  ; LAB_0043a0e4
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0043a0c8
    MOV dword ptr [ESP + 0x9c],EAX      ; 0043a0cf
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0043a0d6
    MOV dword ptr [ESP + 0x98],EAX      ; 0043a0dd
    MOV ESI,dword ptr [ESP + 0xd8]      ; 0043a0e4
        ;   Label: LAB_0043a0e4
    MOV EBX,dword ptr [ESP + 0xb8]      ; 0043a0eb
    INC ESI                             ; 0043a0f2
    ADD EBX,0x34                        ; 0043a0f3
    MOV dword ptr [ESP + 0xd8],ESI      ; 0043a0f6
    MOV dword ptr [ESP + 0xb8],EBX      ; 0043a0fd
    JMP 0x00439d8d                      ; 0043a104
        ;   XREF to: 00439d8d (UNCONDITIONAL_JUMP)  ; LAB_00439d8d

