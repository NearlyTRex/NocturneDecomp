; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_FUN_005ae680(CCloth *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler
; CDeformableModelInstance * Stack[0x10]:4   model_ptr
; Local Variables:
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined        Stack[-0x144]:1  local_144
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
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
; undefined        Stack[-0xd8]:1  local_d8
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
; XREF[6]:
;   core_cloth.cpp_CClothList_setup_FUN_005b1740 at 005b176c
;   core_gabriela.cpp_CGabriella_setup_FUN_004ad3e0 at 004ad42b
;   core_mimic.cpp_CMimic_setupCloth_FUN_004f17a0 at 004f17c6
;   core_mimic.cpp_CMimic_setup_FUN_004f04f0 at 004f06db
;   core_svetlana.cpp_CSvetlana_setup_FUN_00570250 at 00570459
;   core_vampboss.cpp_CVampireBoss_setup_FUN_00581660 at 005816bc
;
; Referenced Globals:
;   undefined4 DAT_006011a0
;
; Called Functions:
;   core_cloth.cpp_CCloth_orientBoneToChild_FUN_005af200
;   core_cloth.cpp_FUN_005ae420
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
;   core_xform.cpp_FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae680
        ;   Label: core_cloth.cpp_FUN_005ae680
    PUSH ESI                            ; 005ae681
    PUSH EDI                            ; 005ae682
    PUSH EBP                            ; 005ae683
    SUB ESP,0x158                       ; 005ae684
    MOV EDX,dword ptr [ESP + 0x16c]     ; 005ae68a
    MOV ECX,dword ptr [EDX + 0x104]     ; 005ae691
    XOR EAX,EAX                         ; 005ae697
    TEST ECX,ECX                        ; 005ae699
    JLE 0x005ae6d0                      ; 005ae69b
        ;   XREF to: 005ae6d0 (CONDITIONAL_JUMP)  ; LAB_005ae6d0
    XOR EDX,EDX                         ; 005ae69d
    MOV ECX,dword ptr [ESP + 0x16c]     ; 005ae69f
        ;   Label: LAB_005ae69f
    MOV ECX,dword ptr [ECX + 0x3aafc]   ; 005ae6a6
    MOV dword ptr [ECX + EDX*0x1],EAX   ; 005ae6ac
    MOV ECX,dword ptr [ESP + 0x16c]     ; 005ae6af
    INC EAX                             ; 005ae6b6
    MOV EBX,dword ptr [ECX + 0x104]     ; 005ae6b7
    ADD EDX,0x4                         ; 005ae6bd
    CMP EAX,EBX                         ; 005ae6c0
    JL 0x005ae69f                       ; 005ae6c2
        ;   XREF to: 005ae69f (CONDITIONAL_JUMP)  ; LAB_005ae69f
    LEA EAX,[EAX]                       ; 005ae6c4
    LEA EDX,[EDX]                       ; 005ae6ca
    XOR ESI,ESI                         ; 005ae6d0
        ;   Label: LAB_005ae6d0
    MOV dword ptr [ESP + 0x148],ESI     ; 005ae6d2
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005ae6d9
        ;   Label: LAB_005ae6d9
    MOV EAX,dword ptr [EAX + 0x104]     ; 005ae6e0
    MOV EDI,dword ptr [ESP + 0x148]     ; 005ae6e6
    DEC EAX                             ; 005ae6ed
    CMP EAX,EDI                         ; 005ae6ee
    JLE 0x005ae827                      ; 005ae6f0
        ;   XREF to: 005ae827 (CONDITIONAL_JUMP)  ; LAB_005ae827
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005ae6f6
    INC EDI                             ; 005ae6fd
    CMP EDI,dword ptr [EAX + 0x104]     ; 005ae6fe
    JGE 0x005ae81b                      ; 005ae704
        ;   XREF to: 005ae81b (CONDITIONAL_JUMP)  ; LAB_005ae81b
    MOV EAX,dword ptr [ESP + 0x148]     ; 005ae70a
    SHL EAX,0x2                         ; 005ae711
    LEA EBX,[EDI*0x4 + 0x0]             ; 005ae714
    MOV dword ptr [ESP + 0xe8],EAX      ; 005ae71b
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005ae722
        ;   Label: LAB_005ae722
    MOV EDX,dword ptr [ESP + 0xe8]      ; 005ae729
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 005ae730
    ADD EDX,EAX                         ; 005ae736
    MOV ESI,dword ptr [EDX]             ; 005ae738
    MOV EBP,dword ptr [EBX + EAX*0x1]   ; 005ae73a
    IMUL EAX,ESI,0xc                    ; 005ae73d
    MOV dword ptr [ESP + 0xc4],EAX      ; 005ae740
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005ae747
    MOV ECX,dword ptr [ESP + 0xc4]      ; 005ae74e
    MOV EAX,dword ptr [EAX + 0x10c]     ; 005ae755
    ADD ECX,EAX                         ; 005ae75b
    MOV dword ptr [ESP + 0xc4],ECX      ; 005ae75d
    IMUL ECX,EBP,0xc                    ; 005ae764
    ADD ECX,EAX                         ; 005ae767
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005ae769
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ae770
    CMP EAX,dword ptr [ECX + 0x4]       ; 005ae773
    JGE 0x005ae78a                      ; 005ae776
        ;   XREF to: 005ae78a (CONDITIONAL_JUMP)  ; LAB_005ae78a
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005ae778
    MOV dword ptr [EDX],EBP             ; 005ae77f
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 005ae781
    MOV dword ptr [EBX + EAX*0x1],ESI   ; 005ae787
    IMUL EAX,ESI,0xc                    ; 005ae78a
        ;   Label: LAB_005ae78a
    IMUL ECX,EBP,0xc                    ; 005ae78d
    MOV EDX,dword ptr [ESP + 0x16c]     ; 005ae790
    MOV EDX,dword ptr [EDX + 0x10c]     ; 005ae797
    ADD EAX,EDX                         ; 005ae79d
    MOV dword ptr [ESP + 0x108],ECX     ; 005ae79f
    ADD EDX,ECX                         ; 005ae7a6
    MOV ECX,dword ptr [EAX + 0x4]       ; 005ae7a8
    CMP ECX,dword ptr [EDX + 0x4]       ; 005ae7ab
    JNZ 0x005ae802                      ; 005ae7ae
        ;   XREF to: 005ae802 (CONDITIONAL_JUMP)  ; LAB_005ae802
    MOV EAX,dword ptr [EAX]             ; 005ae7b0
    CDQ                                 ; 005ae7b2
    XOR EAX,EDX                         ; 005ae7b3
    SUB EAX,EDX                         ; 005ae7b5
    MOV ECX,EAX                         ; 005ae7b7
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005ae7b9
    MOV EDX,dword ptr [ESP + 0x108]     ; 005ae7c0
    MOV EAX,dword ptr [EAX + 0x10c]     ; 005ae7c7
    ADD EAX,EDX                         ; 005ae7cd
    MOV EAX,dword ptr [EAX]             ; 005ae7cf
    CDQ                                 ; 005ae7d1
    XOR EAX,EDX                         ; 005ae7d2
    SUB EAX,EDX                         ; 005ae7d4
    CMP ECX,EAX                         ; 005ae7d6
    JLE 0x005ae802                      ; 005ae7d8
        ;   XREF to: 005ae802 (CONDITIONAL_JUMP)  ; LAB_005ae802
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005ae7da
    MOV ECX,dword ptr [ESP + 0xe8]      ; 005ae7e1
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 005ae7e8
    ADD EAX,ECX                         ; 005ae7ee
    MOV dword ptr [EAX],EBP             ; 005ae7f0
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005ae7f2
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 005ae7f9
    MOV dword ptr [EBX + EAX*0x1],ESI   ; 005ae7ff
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005ae802
        ;   Label: LAB_005ae802
    INC EDI                             ; 005ae809
    MOV ESI,dword ptr [EAX + 0x104]     ; 005ae80a
    ADD EBX,0x4                         ; 005ae810
    CMP EDI,ESI                         ; 005ae813
    JL 0x005ae722                       ; 005ae815
        ;   XREF to: 005ae722 (CONDITIONAL_JUMP)  ; LAB_005ae722
    INC dword ptr [ESP + 0x148]         ; 005ae81b
        ;   Label: LAB_005ae81b
    JMP 0x005ae6d9                      ; 005ae822
        ;   XREF to: 005ae6d9 (UNCONDITIONAL_JUMP)  ; LAB_005ae6d9
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005ae827
        ;   Label: LAB_005ae827
    MOV EBP,dword ptr [ESP + 0x170]     ; 005ae82e
    ADD EAX,0x3ab08                     ; 005ae835
    CMP EAX,EBP                         ; 005ae83a
    JZ 0x005ae850                       ; 005ae83c
        ;   XREF to: 005ae850 (CONDITIONAL_JUMP)  ; LAB_005ae850
    MOV EDX,EBP                         ; 005ae83e
    MOV ECX,dword ptr [EDX]             ; 005ae840
    MOV dword ptr [EAX],ECX             ; 005ae842
    MOV ECX,dword ptr [EDX + 0x4]       ; 005ae844
    MOV dword ptr [EAX + 0x4],ECX       ; 005ae847
    MOV ECX,dword ptr [EDX + 0x8]       ; 005ae84a
    MOV dword ptr [EAX + 0x8],ECX       ; 005ae84d
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005ae850
        ;   Label: LAB_005ae850
    MOV EDX,dword ptr [ESP + 0x174]     ; 005ae857
    ADD EAX,0x3ab14                     ; 005ae85e
    CMP EAX,EDX                         ; 005ae863
    JZ 0x005ae877                       ; 005ae865
        ;   XREF to: 005ae877 (CONDITIONAL_JUMP)  ; LAB_005ae877
    MOV ECX,dword ptr [EDX]             ; 005ae867
    MOV dword ptr [EAX],ECX             ; 005ae869
    MOV ECX,dword ptr [EDX + 0x4]       ; 005ae86b
    MOV dword ptr [EAX + 0x4],ECX       ; 005ae86e
    MOV ECX,dword ptr [EDX + 0x8]       ; 005ae871
    MOV dword ptr [EAX + 0x8],ECX       ; 005ae874
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005ae877
        ;   Label: LAB_005ae877
    MOV ECX,dword ptr [EAX + 0x104]     ; 005ae87e
    XOR EDI,EDI                         ; 005ae884
    TEST ECX,ECX                        ; 005ae886
    JLE 0x005ae933                      ; 005ae888
        ;   XREF to: 005ae933 (CONDITIONAL_JUMP)  ; LAB_005ae933
    LEA ESI,[EAX + 0x398]               ; 005ae88e
    LEA ECX,[ESI + 0xc0]                ; 005ae894
    LEA EAX,[ESI + 0x18]                ; 005ae89a
    LEA EDX,[ESI + 0xc]                 ; 005ae89d
    IMUL EBX,EDI,0x11c                  ; 005ae8a0
        ;   Label: LAB_005ae8a0
    ADD EBX,ESI                         ; 005ae8a6
    CMP EBX,ECX                         ; 005ae8a8
    JZ 0x005ae8bc                       ; 005ae8aa
        ;   XREF to: 005ae8bc (CONDITIONAL_JUMP)  ; LAB_005ae8bc
    MOV EBP,dword ptr [ECX]             ; 005ae8ac
    MOV dword ptr [EBX],EBP             ; 005ae8ae
    MOV EBP,dword ptr [ECX + 0x4]       ; 005ae8b0
    MOV dword ptr [EBX + 0x4],EBP       ; 005ae8b3
    MOV EBP,dword ptr [ECX + 0x8]       ; 005ae8b6
    MOV dword ptr [EBX + 0x8],EBP       ; 005ae8b9
    MOV EBX,dword ptr [ESP + 0x16c]     ; 005ae8bc
        ;   Label: LAB_005ae8bc
    MOV dword ptr [EDX + 0x8],0x0       ; 005ae8c3
    ADD EAX,0x11c                       ; 005ae8ca
    MOV EBP,dword ptr [EDX + 0x8]       ; 005ae8cf
    MOV dword ptr [EDX + 0x4],EBP       ; 005ae8d2
    MOV EBP,dword ptr [EDX + 0x4]       ; 005ae8d5
    MOV dword ptr [EDX],EBP             ; 005ae8d8
    MOV dword ptr [EAX + 0xfffffeec],0x0 ; 005ae8da
    ADD ECX,0x11c                       ; 005ae8e4
    MOV dword ptr [EAX + 0xfffffef8],0x0 ; 005ae8ea
    INC EDI                             ; 005ae8f4
    FLD float ptr [EAX + 0xfffffef8]    ; 005ae8f5
    MOV EBP,dword ptr [EAX + 0xfffffeec] ; 005ae8fb
    MOV dword ptr [EAX + 0xfffffee8],EBP ; 005ae901
    FST float ptr [EAX + 0xfffffef4]    ; 005ae907
    MOV EBP,dword ptr [EAX + 0xfffffee8] ; 005ae90d
    MOV dword ptr [EAX + 0xfffffee4],EBP ; 005ae913
    FSTP float ptr [EAX + 0xfffffef0]   ; 005ae919
    MOV EBP,dword ptr [EBX + 0x104]     ; 005ae91f
    ADD EDX,0x11c                       ; 005ae925
    CMP EDI,EBP                         ; 005ae92b
    JL 0x005ae8a0                       ; 005ae92d
        ;   XREF to: 005ae8a0 (CONDITIONAL_JUMP)  ; LAB_005ae8a0
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005ae933
        ;   Label: LAB_005ae933
    PUSH EAX                            ; 005ae93a
    CALL core_cloth.cpp_FUN_005ae420    ; 005ae93b
        ;   XREF to: 005ae420 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_005ae420(CCloth * this_ptr)
    ADD ESP,0x4                         ; 005ae940
    MOV EDX,dword ptr [ESP + 0x16c]     ; 005ae943
    MOV ECX,dword ptr [EDX + 0x39ce8]   ; 005ae94a
    XOR EAX,EAX                         ; 005ae950
    TEST ECX,ECX                        ; 005ae952
    JLE 0x005ae990                      ; 005ae954
        ;   XREF to: 005ae990 (CONDITIONAL_JUMP)  ; LAB_005ae990
    MOV EBX,dword ptr [ESP + 0x16c]     ; 005ae956
    MOV EBP,EDX                         ; 005ae95d
    MOV EDX,dword ptr [EBP + 0x39cec]   ; 005ae95f
        ;   Label: LAB_005ae95f
    IMUL EDX,EDX,0x11c                  ; 005ae965
    ADD EDX,EBX                         ; 005ae96b
    MOV dword ptr [EDX + 0x40c],0x1     ; 005ae96d
    INC EAX                             ; 005ae977
    MOV ESI,dword ptr [EBX + 0x39ce8]   ; 005ae978
    ADD EBP,0x4                         ; 005ae97e
    CMP EAX,ESI                         ; 005ae981
    JL 0x005ae95f                       ; 005ae983
        ;   XREF to: 005ae95f (CONDITIONAL_JUMP)  ; LAB_005ae95f
    LEA EAX,[EAX]                       ; 005ae985
    LEA EDX,[EDX]                       ; 005ae98b
    MOV EBX,EBX                         ; 005ae98e
    MOV EDI,dword ptr [ESP + 0x178]     ; 005ae990
        ;   Label: LAB_005ae990
    TEST EDI,EDI                        ; 005ae997
    JZ 0x005af09e                       ; 005ae999
        ;   XREF to: 005af09e (CONDITIONAL_JUMP)  ; LAB_005af09e
    PUSH EDI                            ; 005ae99f
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 005ae9a0
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005ae9a5
    PUSH EAX                            ; 005ae9a8
    MOV EBX,EAX                         ; 005ae9a9
    MOV dword ptr [ESP + 0xcc],EAX      ; 005ae9ab
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0 ; 005ae9b2
        ;   XREF to: 005415d0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 005ae9b7
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005ae9ba
    MOV EBP,EDI                         ; 005ae9c1
    MOV EDX,dword ptr [EAX + 0x104]     ; 005ae9c3
    XOR EBP,EDI                         ; 005ae9c9
    TEST EDX,EDX                        ; 005ae9cb
    JLE 0x005aeab7                      ; 005ae9cd
        ;   XREF to: 005aeab7 (CONDITIONAL_JUMP)  ; LAB_005aeab7
    ADD EBX,0x1c00                      ; 005ae9d3
    LEA EDX,[EAX + 0x398]               ; 005ae9d9
    MOV dword ptr [ESP + 0xcc],EBX      ; 005ae9df
    XOR EBX,EBX                         ; 005ae9e6
    LEA ECX,[EDX + 0xc0]                ; 005ae9e8
    MOV dword ptr [ESP + 0x114],EBX     ; 005ae9ee
    MOV EAX,dword ptr [ESP + 0xcc]      ; 005ae9f5
        ;   Label: LAB_005ae9f5
    FLD float ptr [ECX]                 ; 005ae9fc
    FADD float ptr [EAX]                ; 005ae9fe
    FSTP float ptr [ESP + 0x78]         ; 005aea00
    FLD float ptr [ECX + 0x4]           ; 005aea04
    FADD float ptr [EAX + 0x4]          ; 005aea07
    LEA EDI,[ESP + 0x9c]                ; 005aea0a
    FSTP float ptr [ESP + 0x7c]         ; 005aea11
    FLD float ptr [ECX + 0x8]           ; 005aea15
    FADD float ptr [EAX + 0x8]          ; 005aea18
    LEA ESI,[ESP + 0x78]                ; 005aea1b
    FSTP float ptr [ESP + 0x80]         ; 005aea1f
    LEA EAX,[ESP + 0x9c]                ; 005aea26
    MOVSD ES:EDI,ESI                    ; 005aea2d
    MOVSD ES:EDI,ESI                    ; 005aea2e
    MOVSD ES:EDI,ESI                    ; 005aea2f
    CMP EDX,EAX                         ; 005aea30
    JZ 0x005aea51                       ; 005aea32
        ;   XREF to: 005aea51 (CONDITIONAL_JUMP)  ; LAB_005aea51
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005aea34
    MOV dword ptr [EDX],EAX             ; 005aea3b
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005aea3d
    MOV dword ptr [EDX + 0x4],EAX       ; 005aea44
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005aea47
    MOV dword ptr [EDX + 0x8],EAX       ; 005aea4e
    MOV EBX,dword ptr [ESP + 0x16c]     ; 005aea51
        ;   Label: LAB_005aea51
    MOV ESI,dword ptr [ESP + 0x114]     ; 005aea58
    MOV EAX,EDX                         ; 005aea5f
    MOV EBX,dword ptr [EBX + 0x10c]     ; 005aea61
    ADD ECX,0x11c                       ; 005aea67
    ADD EBX,ESI                         ; 005aea6d
    INC EBP                             ; 005aea6f
    FLD float ptr [EAX]                 ; 005aea70
    FMUL float ptr [0x006011a0]         ; 005aea72 | DAT_006011a0
    FISTP dword ptr [EBX]               ; 005aea78
    FLD float ptr [EAX + 0x4]           ; 005aea7a
    FMUL float ptr [0x006011a0]         ; 005aea7d | DAT_006011a0
    FISTP dword ptr [EBX + 0x4]         ; 005aea83
    FLD float ptr [EAX + 0x8]           ; 005aea86
    FMUL float ptr [0x006011a0]         ; 005aea89 | DAT_006011a0
    FISTP dword ptr [EBX + 0x8]         ; 005aea8f
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005aea92
    ADD EDX,0x11c                       ; 005aea99
    LEA EDI,[ESI + 0xc]                 ; 005aea9f
    MOV EBX,dword ptr [EAX + 0x104]     ; 005aeaa2
    MOV dword ptr [ESP + 0x114],EDI     ; 005aeaa8
    CMP EBP,EBX                         ; 005aeaaf
    JL 0x005ae9f5                       ; 005aeab1
        ;   XREF to: 005ae9f5 (CONDITIONAL_JUMP)  ; LAB_005ae9f5
    MOV ESI,dword ptr [ESP + 0x178]     ; 005aeab7
        ;   Label: LAB_005aeab7
    PUSH ESI                            ; 005aeabe
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60 ; 005aeabf
        ;   XREF to: 00544e60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005aeac4
    PUSH ESI                            ; 005aeac7
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0 ; 005aeac8
        ;   XREF to: 00546ae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005aeacd
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005aead0
    XOR EBP,EBP                         ; 005aead7
    MOV EDX,dword ptr [EAX + 0x39ce8]   ; 005aead9
    MOV dword ptr [ESP + 0x144],EBP     ; 005aeadf
    TEST EDX,EDX                        ; 005aeae6
    JLE 0x005aecb4                      ; 005aeae8
        ;   XREF to: 005aecb4 (CONDITIONAL_JUMP)  ; LAB_005aecb4
    LEA EAX,[ESI + 0xe80]               ; 005aeaee
    MOV dword ptr [ESP + 0xe0],EAX      ; 005aeaf4
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005aeafb
    ADD EAX,0x398                       ; 005aeb02
    MOV dword ptr [ESP + 0xd8],EAX      ; 005aeb07
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005aeb0e
    MOV dword ptr [ESP + 0x124],EAX     ; 005aeb15
    MOV EAX,dword ptr [ESP + 0x124]     ; 005aeb1c
        ;   Label: LAB_005aeb1c
    IMUL EAX,dword ptr [EAX + 0x39cec],0x11c ; 005aeb23
    MOV ECX,0x7149f2ca                  ; 005aeb2d
    MOV EDX,dword ptr [ESP + 0xd8]      ; 005aeb32
    XOR EBX,EBX                         ; 005aeb39
    ADD EDX,EAX                         ; 005aeb3b
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005aeb3d
    MOV dword ptr [ESP + 0xd4],ECX      ; 005aeb44
    MOV dword ptr [ESP + 0x150],EBX     ; 005aeb4b
    MOV ESI,dword ptr [EAX + 0x2c]      ; 005aeb52
    MOV dword ptr [ESP + 0xd0],EDX      ; 005aeb55
    TEST ESI,ESI                        ; 005aeb5c
    JLE 0x005aefba                      ; 005aeb5e
        ;   XREF to: 005aefba (CONDITIONAL_JUMP)  ; LAB_005aefba
    MOV dword ptr [ESP + 0x120],EBX     ; 005aeb64
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005aeb6b
        ;   Label: LAB_005aeb6b
    XOR EBX,EBX                         ; 005aeb72
    MOV EDX,dword ptr [ESP + 0x120]     ; 005aeb74
    MOV dword ptr [ESP + 0x3c],EBX      ; 005aeb7b
    MOV EAX,dword ptr [EAX + 0x40]      ; 005aeb7f
    MOV dword ptr [ESP + 0x40],EBX      ; 005aeb82
    ADD EDX,EAX                         ; 005aeb86
    MOV dword ptr [ESP + 0x44],EBX      ; 005aeb88
    MOV dword ptr [ESP + 0xdc],EDX      ; 005aeb8c
    LEA EBX,[EDX + 0x4]                 ; 005aeb93
    LEA EAX,[EDX + 0x10]                ; 005aeb96
    XOR EBP,EBP                         ; 005aeb99
    MOV dword ptr [ESP + 0x118],EAX     ; 005aeb9b
    MOV dword ptr [ESP + 0x11c],EDX     ; 005aeba2
    MOV EDX,dword ptr [ESP + 0xdc]      ; 005aeba9
        ;   Label: LAB_005aeba9
    XOR EAX,EAX                         ; 005aebb0
    MOV AL,byte ptr [EDX]               ; 005aebb2
    CMP EBP,EAX                         ; 005aebb4
    JGE 0x005aef05                      ; 005aebb6
        ;   XREF to: 005aef05 (CONDITIONAL_JUMP)  ; LAB_005aef05
    MOV EDX,dword ptr [ESP + 0x11c]     ; 005aebbc
    XOR EAX,EAX                         ; 005aebc3
    MOV AL,byte ptr [EDX + 0x1]         ; 005aebc5
    IMUL EAX,EAX,0x30                   ; 005aebc8
    ADD EAX,dword ptr [ESP + 0xe0]      ; 005aebcb
    PUSH EAX                            ; 005aebd2
    MOV ECX,dword ptr [ESP + 0x11c]     ; 005aebd3
    PUSH ECX                            ; 005aebda
    LEA ESI,[ESP + 0x2c]                ; 005aebdb
    LEA EDI,[ESP + 0xb0]                ; 005aebdf
    CALL core_xform.cpp_FUN_00591530    ; 005aebe6
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[ESP + 0x2c]                ; 005aebeb
    ADD ESP,0x8                         ; 005aebef
    MOVSD ES:EDI,ESI                    ; 005aebf2
    MOVSD ES:EDI,ESI                    ; 005aebf3
    MOVSD ES:EDI,ESI                    ; 005aebf4
    FLD float ptr [ESP + 0xa8]          ; 005aebf5
    FMUL float ptr [EBX]                ; 005aebfc
    FLD float ptr [ESP + 0xac]          ; 005aebfe
    FXCH                                ; 005aec05
    FSTP float ptr [ESP]                ; 005aec07
    FMUL float ptr [EBX]                ; 005aec0a
    FLD float ptr [ESP + 0xb0]          ; 005aec0c
    FXCH                                ; 005aec13
    FSTP float ptr [ESP + 0x4]          ; 005aec15
    FMUL float ptr [EBX]                ; 005aec19
    ADD EBX,0x4                         ; 005aec1b
    INC EBP                             ; 005aec1e
    FLD float ptr [ESP + 0x3c]          ; 005aec1f
    FLD float ptr [ESP + 0x40]          ; 005aec23
    LEA EDI,[ESP + 0x48]                ; 005aec27
    MOV ESI,ESP                         ; 005aec2b
    FXCH ST2                            ; 005aec2d
    FSTP float ptr [ESP + 0x8]          ; 005aec2f
    MOVSD ES:EDI,ESI                    ; 005aec33
    MOVSD ES:EDI,ESI                    ; 005aec34
    MOVSD ES:EDI,ESI                    ; 005aec35
    FLD float ptr [ESP + 0x44]          ; 005aec36
    MOV ESI,dword ptr [ESP + 0x118]     ; 005aec3a
    MOV EDI,dword ptr [ESP + 0x11c]     ; 005aec41
    FXCH                                ; 005aec48
    FADD float ptr [ESP + 0x48]         ; 005aec4a
    FXCH ST2                            ; 005aec4e
    FADD float ptr [ESP + 0x4c]         ; 005aec50
    FXCH                                ; 005aec54
    FADD float ptr [ESP + 0x50]         ; 005aec56
    FXCH ST2                            ; 005aec5a
    FSTP float ptr [ESP + 0x3c]         ; 005aec5c
    FSTP float ptr [ESP + 0x40]         ; 005aec60
    FSTP float ptr [ESP + 0x44]         ; 005aec64
    ADD ESI,0xc                         ; 005aec68
    INC EDI                             ; 005aec6b
    MOV dword ptr [ESP + 0x118],ESI     ; 005aec6c
    MOV dword ptr [ESP + 0x11c],EDI     ; 005aec73
    JMP 0x005aeba9                      ; 005aec7a
        ;   XREF to: 005aeba9 (UNCONDITIONAL_JUMP)  ; LAB_005aeba9
    MOV EBX,dword ptr [ESP + 0x124]     ; 005aec7f
        ;   Label: LAB_005aec7f
    MOV ESI,dword ptr [ESP + 0x144]     ; 005aec86
    MOV EDX,dword ptr [ESP + 0x16c]     ; 005aec8d
    ADD EBX,0x4                         ; 005aec94
    INC ESI                             ; 005aec97
    MOV EDI,dword ptr [EDX + 0x39ce8]   ; 005aec98
    MOV dword ptr [ESP + 0x124],EBX     ; 005aec9e
    MOV dword ptr [ESP + 0x144],ESI     ; 005aeca5
    CMP ESI,EDI                         ; 005aecac
    JL 0x005aeb1c                       ; 005aecae
        ;   XREF to: 005aeb1c (CONDITIONAL_JUMP)  ; LAB_005aeb1c
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005aecb4
        ;   Label: LAB_005aecb4
    MOV EBP,dword ptr [EAX + 0x37b4c]   ; 005aecbb
    XOR EBX,EBX                         ; 005aecc1
    TEST EBP,EBP                        ; 005aecc3
    JLE 0x005aecf0                      ; 005aecc5
        ;   XREF to: 005aecf0 (CONDITIONAL_JUMP)  ; LAB_005aecf0
    MOV EDI,dword ptr [ESP + 0x178]     ; 005aecc7
    MOV EBP,dword ptr [ESP + 0x16c]     ; 005aecce
    PUSH EDI                            ; 005aecd5
        ;   Label: LAB_005aecd5
    PUSH EBX                            ; 005aecd6
    PUSH EBP                            ; 005aecd7
    CALL core_cloth.cpp_CCloth_orientBoneToChild_FUN_005af200 ; 005aecd8
        ;   XREF to: 005af200 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_orientBoneToChild_FUN_005af200(CCloth * this_ptr, int bone_index, CDeformableModelInstance * model_ptr)
    INC EBX                             ; 005aecdd
    MOV EDX,dword ptr [EBP + 0x37b4c]   ; 005aecde
    ADD ESP,0xc                         ; 005aece4
    CMP EBX,EDX                         ; 005aece7
    JL 0x005aecd5                       ; 005aece9
        ;   XREF to: 005aecd5 (CONDITIONAL_JUMP)  ; LAB_005aecd5
    LEA EAX,[EAX]                       ; 005aeceb
    MOV ECX,ECX                         ; 005aecee
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005aecf0
        ;   Label: LAB_005aecf0
    XOR ECX,ECX                         ; 005aecf7
    MOV EBX,dword ptr [EAX + 0x39ce8]   ; 005aecf9
    MOV dword ptr [ESP + 0xc0],ECX      ; 005aecff
    TEST EBX,EBX                        ; 005aed06
    JLE 0x005af08e                      ; 005aed08
        ;   XREF to: 005af08e (CONDITIONAL_JUMP)  ; LAB_005af08e
    MOV EAX,dword ptr [ESP + 0x178]     ; 005aed0e
    ADD EAX,0xe80                       ; 005aed15
    MOV dword ptr [ESP + 0x104],EAX     ; 005aed1a
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005aed21
    ADD EAX,0x398                       ; 005aed28
    MOV dword ptr [ESP + 0xf4],EAX      ; 005aed2d
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005aed34
    MOV dword ptr [ESP + 0x138],ECX     ; 005aed3b
    MOV dword ptr [ESP + 0x13c],EAX     ; 005aed42
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005aed49
        ;   Label: LAB_005aed49
    IMUL EAX,dword ptr [EAX + 0x39cec],0x11c ; 005aed50
    MOV EDX,dword ptr [ESP + 0xf4]      ; 005aed5a
    XOR EBP,EBP                         ; 005aed61
    ADD EDX,EAX                         ; 005aed63
    MOV EAX,dword ptr [ESP + 0x138]     ; 005aed65
    MOV dword ptr [ESP + 0xf0],EDX      ; 005aed6c
    MOV EDX,dword ptr [ESP + 0x16c]     ; 005aed73
    MOV dword ptr [ESP + 0x140],EBP     ; 005aed7a
    ADD EAX,EDX                         ; 005aed81
    MOV dword ptr [ESP + 0x130],EBP     ; 005aed83
    MOV dword ptr [ESP + 0x134],EAX     ; 005aed8a
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005aed91
        ;   Label: LAB_005aed91
    MOV ECX,dword ptr [ESP + 0x140]     ; 005aed98
    CMP ECX,dword ptr [EAX]             ; 005aed9f
    JGE 0x005af046                      ; 005aeda1
        ;   XREF to: 005af046 (CONDITIONAL_JUMP)  ; LAB_005af046
    MOV EBX,0x7149f2ca                  ; 005aeda7
    MOV EAX,dword ptr [ESP + 0x130]     ; 005aedac
    XOR ESI,ESI                         ; 005aedb3
    MOV dword ptr [ESP + 0xfc],EBX      ; 005aedb5
    MOV dword ptr [ESP + 0x14c],ESI     ; 005aedbc
    MOV dword ptr [ESP + 0x110],EAX     ; 005aedc3
    MOV dword ptr [ESP + 0x12c],ESI     ; 005aedca
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005aedd1
        ;   Label: LAB_005aedd1
    ADD EAX,dword ptr [ESP + 0x110]     ; 005aedd8
    MOV EDX,dword ptr [ESP + 0x14c]     ; 005aeddf
    CMP EDX,dword ptr [EAX + 0x2c]      ; 005aede6
    JGE 0x005af114                      ; 005aede9
        ;   XREF to: 005af114 (CONDITIONAL_JUMP)  ; LAB_005af114
    MOV EDX,dword ptr [ESP + 0x12c]     ; 005aedef
    XOR EBP,EBP                         ; 005aedf6
    MOV EAX,dword ptr [EAX + 0x40]      ; 005aedf8
    MOV dword ptr [ESP + 0xc],EBP       ; 005aedfb
    ADD EDX,EAX                         ; 005aedff
    MOV dword ptr [ESP + 0x10],EBP      ; 005aee01
    MOV dword ptr [ESP + 0x100],EDX     ; 005aee05
    LEA EBX,[EDX + 0x4]                 ; 005aee0c
    MOV dword ptr [ESP + 0x14],EBP      ; 005aee0f
    LEA EAX,[EDX + 0x10]                ; 005aee13
    MOV dword ptr [ESP + 0x154],EBP     ; 005aee16
    MOV dword ptr [ESP + 0x128],EAX     ; 005aee1d
    MOV EBP,EDX                         ; 005aee24
    MOV EDX,dword ptr [ESP + 0x100]     ; 005aee26
        ;   Label: LAB_005aee26
    XOR EAX,EAX                         ; 005aee2d
    MOV ESI,dword ptr [ESP + 0x154]     ; 005aee2f
    MOV AL,byte ptr [EDX]               ; 005aee36
    CMP EAX,ESI                         ; 005aee38
    JLE 0x005af15a                      ; 005aee3a
        ;   XREF to: 005af15a (CONDITIONAL_JUMP)  ; LAB_005af15a
    XOR EAX,EAX                         ; 005aee40
    MOV AL,byte ptr [EBP + 0x1]         ; 005aee42
    IMUL EAX,EAX,0x30                   ; 005aee45
    ADD EAX,dword ptr [ESP + 0x104]     ; 005aee48
    PUSH EAX                            ; 005aee4f
    MOV ECX,dword ptr [ESP + 0x12c]     ; 005aee50
    PUSH ECX                            ; 005aee57
    LEA ESI,[ESP + 0x98]                ; 005aee58
    LEA EDI,[ESP + 0x5c]                ; 005aee5f
    CALL core_xform.cpp_FUN_00591530    ; 005aee63
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[ESP + 0x98]                ; 005aee68
    ADD ESP,0x8                         ; 005aee6f
    MOVSD ES:EDI,ESI                    ; 005aee72
    MOVSD ES:EDI,ESI                    ; 005aee73
    MOVSD ES:EDI,ESI                    ; 005aee74
    FLD float ptr [ESP + 0x54]          ; 005aee75
    FMUL float ptr [EBX]                ; 005aee79
    FLD float ptr [ESP + 0x58]          ; 005aee7b
    FXCH                                ; 005aee7f
    FSTP float ptr [ESP + 0x84]         ; 005aee81
    FMUL float ptr [EBX]                ; 005aee88
    FLD float ptr [ESP + 0x5c]          ; 005aee8a
    FXCH                                ; 005aee8e
    FSTP float ptr [ESP + 0x88]         ; 005aee90
    FMUL float ptr [EBX]                ; 005aee97
    INC EBP                             ; 005aee99
    ADD EBX,0x4                         ; 005aee9a
    FLD float ptr [ESP + 0xc]           ; 005aee9d
    FLD float ptr [ESP + 0x10]          ; 005aeea1
    LEA EDI,[ESP + 0x60]                ; 005aeea5
    LEA ESI,[ESP + 0x84]                ; 005aeea9
    FXCH ST2                            ; 005aeeb0
    FSTP float ptr [ESP + 0x8c]         ; 005aeeb2
    MOVSD ES:EDI,ESI                    ; 005aeeb9
    MOVSD ES:EDI,ESI                    ; 005aeeba
    MOVSD ES:EDI,ESI                    ; 005aeebb
    FLD float ptr [ESP + 0x14]          ; 005aeebc
    MOV ESI,dword ptr [ESP + 0x128]     ; 005aeec0
    MOV EDI,dword ptr [ESP + 0x154]     ; 005aeec7
    FXCH                                ; 005aeece
    FADD float ptr [ESP + 0x60]         ; 005aeed0
    FXCH ST2                            ; 005aeed4
    FADD float ptr [ESP + 0x64]         ; 005aeed6
    FXCH                                ; 005aeeda
    FADD float ptr [ESP + 0x68]         ; 005aeedc
    FXCH ST2                            ; 005aeee0
    FSTP float ptr [ESP + 0xc]          ; 005aeee2
    FSTP float ptr [ESP + 0x10]         ; 005aeee6
    FSTP float ptr [ESP + 0x14]         ; 005aeeea
    ADD ESI,0xc                         ; 005aeeee
    INC EDI                             ; 005aeef1
    MOV dword ptr [ESP + 0x128],ESI     ; 005aeef2
    MOV dword ptr [ESP + 0x154],EDI     ; 005aeef9
    JMP 0x005aee26                      ; 005aef00
        ;   XREF to: 005aee26 (UNCONDITIONAL_JUMP)  ; LAB_005aee26
    MOV EAX,dword ptr [ESP + 0xd0]      ; 005aef05
        ;   Label: LAB_005aef05
    FLD float ptr [EAX]                 ; 005aef0c
    FSUB float ptr [ESP + 0x3c]         ; 005aef0e
    FSTP float ptr [ESP + 0xb4]         ; 005aef12
    FLD float ptr [EAX + 0x4]           ; 005aef19
    FSUB float ptr [ESP + 0x40]         ; 005aef1c
    LEA EDI,[ESP + 0x6c]                ; 005aef20
    FSTP float ptr [ESP + 0xb8]         ; 005aef24
    FLD float ptr [EAX + 0x8]           ; 005aef2b
    FSUB float ptr [ESP + 0x44]         ; 005aef2e
    LEA ESI,[ESP + 0xb4]                ; 005aef32
    FSTP float ptr [ESP + 0xbc]         ; 005aef39
    MOVSD ES:EDI,ESI                    ; 005aef40
    MOVSD ES:EDI,ESI                    ; 005aef41
    MOVSD ES:EDI,ESI                    ; 005aef42
    FLD float ptr [ESP + 0x70]          ; 005aef43
    FMUL ST0                            ; 005aef47
    FLD float ptr [ESP + 0x6c]          ; 005aef49
    FMUL ST0                            ; 005aef4d
    FADDP                               ; 005aef4f
    FLD float ptr [ESP + 0x74]          ; 005aef51
    FMUL ST0                            ; 005aef55
    FADDP                               ; 005aef57
    FST float ptr [ESP + 0xec]          ; 005aef59
    FCOMP float ptr [ESP + 0xd4]        ; 005aef60
    FNSTSW AX                           ; 005aef67
    SAHF                                ; 005aef69
    JNC 0x005aef88                      ; 005aef6a
        ;   XREF to: 005aef88 (CONDITIONAL_JUMP)  ; LAB_005aef88
    MOV EAX,dword ptr [ESP + 0xec]      ; 005aef6c
    MOV dword ptr [ESP + 0xd4],EAX      ; 005aef73
    MOV EAX,dword ptr [ESP + 0x150]     ; 005aef7a
    MOV dword ptr [ESP + 0xe4],EAX      ; 005aef81
    MOV ESI,dword ptr [ESP + 0x120]     ; 005aef88
        ;   Label: LAB_005aef88
    MOV EDI,dword ptr [ESP + 0x150]     ; 005aef8f
    MOV EDX,dword ptr [ESP + 0xc8]      ; 005aef96
    ADD ESI,0x34                        ; 005aef9d
    INC EDI                             ; 005aefa0
    MOV EBP,dword ptr [EDX + 0x2c]      ; 005aefa1
    MOV dword ptr [ESP + 0x120],ESI     ; 005aefa4
    MOV dword ptr [ESP + 0x150],EDI     ; 005aefab
    CMP EDI,EBP                         ; 005aefb2
    JL 0x005aeb6b                       ; 005aefb4
        ;   XREF to: 005aeb6b (CONDITIONAL_JUMP)  ; LAB_005aeb6b
    IMUL EDI,dword ptr [ESP + 0xe4],0x34 ; 005aefba
        ;   Label: LAB_005aefba
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005aefc2
    MOV EAX,dword ptr [EAX + 0x40]      ; 005aefc9
    ADD EDI,EAX                         ; 005aefcc
    XOR EAX,EAX                         ; 005aefce
    MOV EDX,dword ptr [ESP + 0xd0]      ; 005aefd0
    MOV AL,byte ptr [EDI]               ; 005aefd7
    XOR EBP,EBP                         ; 005aefd9
    MOV dword ptr [EDX + 0xdc],EAX      ; 005aefdb
    TEST EAX,EAX                        ; 005aefe1
    JLE 0x005aec7f                      ; 005aefe3
        ;   XREF to: 005aec7f (CONDITIONAL_JUMP)  ; LAB_005aec7f
    LEA EBX,[EDX + 0xec]                ; 005aefe9
    LEA EAX,[EDI + 0x10]                ; 005aefef
    MOV ESI,dword ptr [ESP + 0xd0]      ; 005aeff2
    MOV EDX,EDI                         ; 005aeff9
    XOR ECX,ECX                         ; 005aeffb
        ;   Label: LAB_005aeffb
    MOV CL,byte ptr [EDX + 0x1]         ; 005aeffd
    MOV dword ptr [ESI + 0xe0],ECX      ; 005af000
    CMP EBX,EAX                         ; 005af006
    JZ 0x005af01a                       ; 005af008
        ;   XREF to: 005af01a (CONDITIONAL_JUMP)  ; LAB_005af01a
    MOV ECX,dword ptr [EAX]             ; 005af00a
    MOV dword ptr [EBX],ECX             ; 005af00c
    MOV ECX,dword ptr [EAX + 0x4]       ; 005af00e
    MOV dword ptr [EBX + 0x4],ECX       ; 005af011
    MOV ECX,dword ptr [EAX + 0x8]       ; 005af014
    MOV dword ptr [EBX + 0x8],ECX       ; 005af017
    FLD float ptr [EDI + 0x4]           ; 005af01a
        ;   Label: LAB_005af01a
    MOV ECX,dword ptr [ESP + 0xd0]      ; 005af01d
    ADD EBX,0xc                         ; 005af024
    ADD EAX,0xc                         ; 005af027
    INC EDX                             ; 005af02a
    ADD ESI,0x4                         ; 005af02b
    ADD EDI,0x4                         ; 005af02e
    INC EBP                             ; 005af031
    FSTP float ptr [ESI + 0x10c]        ; 005af032
    CMP EBP,dword ptr [ECX + 0xdc]      ; 005af038
    JGE 0x005aec7f                      ; 005af03e
        ;   XREF to: 005aec7f (CONDITIONAL_JUMP)  ; LAB_005aec7f
    JMP 0x005aeffb                      ; 005af044
        ;   XREF to: 005aeffb (UNCONDITIONAL_JUMP)  ; LAB_005aeffb
    MOV EBP,dword ptr [ESP + 0x138]     ; 005af046
        ;   Label: LAB_005af046
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005af04d
    MOV EDX,dword ptr [ESP + 0xc0]      ; 005af054
    ADD EAX,0x4                         ; 005af05b
    INC EDX                             ; 005af05e
    MOV dword ptr [ESP + 0x13c],EAX     ; 005af05f
    MOV dword ptr [ESP + 0xc0],EDX      ; 005af066
    MOV EAX,EDX                         ; 005af06d
    MOV EDX,dword ptr [ESP + 0x16c]     ; 005af06f
    ADD EBP,0x4                         ; 005af076
    MOV ECX,dword ptr [EDX + 0x39ce8]   ; 005af079
    MOV dword ptr [ESP + 0x138],EBP     ; 005af07f
    CMP EAX,ECX                         ; 005af086
    JL 0x005aed49                       ; 005af088
        ;   XREF to: 005aed49 (CONDITIONAL_JUMP)  ; LAB_005aed49
    MOV EBX,dword ptr [ESP + 0x178]     ; 005af08e
        ;   Label: LAB_005af08e
    PUSH EBX                            ; 005af095
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0 ; 005af096
        ;   XREF to: 00544ee0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005af09b
    MOV EDX,dword ptr [ESP + 0x16c]     ; 005af09e
        ;   Label: LAB_005af09e
    MOV EBP,dword ptr [EDX + 0x104]     ; 005af0a5
    XOR EAX,EAX                         ; 005af0ab
    TEST EBP,EBP                        ; 005af0ad
    JLE 0x005af0e0                      ; 005af0af
        ;   XREF to: 005af0e0 (CONDITIONAL_JUMP)  ; LAB_005af0e0
    MOV ECX,dword ptr [ESP + 0x16c]     ; 005af0b1
    MOV dword ptr [EDX + 0x470],0xffffffff ; 005af0b8
        ;   Label: LAB_005af0b8
    INC EAX                             ; 005af0c2
    MOV EBX,dword ptr [ECX + 0x104]     ; 005af0c3
    ADD EDX,0x11c                       ; 005af0c9
    CMP EAX,EBX                         ; 005af0cf
    JL 0x005af0b8                       ; 005af0d1
        ;   XREF to: 005af0b8 (CONDITIONAL_JUMP)  ; LAB_005af0b8
    LEA EAX,[EAX]                       ; 005af0d3
    LEA EDX,[EDX]                       ; 005af0d9
    NOP                                 ; 005af0df
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005af0e0
        ;   Label: LAB_005af0e0
    MOV dword ptr [EAX + 0x3ab2c],0x0   ; 005af0e7
    MOV EDX,dword ptr [EAX + 0x3ab2c]   ; 005af0f1
    MOV dword ptr [EAX + 0x3ab28],EDX   ; 005af0f7
    MOV EDX,dword ptr [EAX + 0x3ab28]   ; 005af0fd
    MOV dword ptr [EAX + 0x3ab24],EDX   ; 005af103
    ADD ESP,0x158                       ; 005af109
    POP EBP                             ; 005af10f
    POP EDI                             ; 005af110
    POP ESI                             ; 005af111
    POP EBX                             ; 005af112
    RET                                 ; 005af113
    MOV EBX,dword ptr [ESP + 0x130]     ; 005af114
        ;   Label: LAB_005af114
    MOV EDX,dword ptr [ESP + 0x134]     ; 005af11b
    MOV EDI,dword ptr [ESP + 0x140]     ; 005af122
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005af129
    ADD EBX,0x4                         ; 005af130
    LEA ESI,[EDX + 0x190]               ; 005af133
    INC EDI                             ; 005af139
    MOV dword ptr [EDX + 0x39e7c],EAX   ; 005af13a
    MOV dword ptr [ESP + 0x130],EBX     ; 005af140
    MOV dword ptr [ESP + 0x134],ESI     ; 005af147
    MOV dword ptr [ESP + 0x140],EDI     ; 005af14e
    JMP 0x005aed91                      ; 005af155
        ;   XREF to: 005aed91 (UNCONDITIONAL_JUMP)  ; LAB_005aed91
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005af15a
        ;   Label: LAB_005af15a
    FLD float ptr [EAX]                 ; 005af161
    FSUB float ptr [ESP + 0xc]          ; 005af163
    FSTP float ptr [ESP + 0x18]         ; 005af167
    FLD float ptr [EAX + 0x4]           ; 005af16b
    FSUB float ptr [ESP + 0x10]         ; 005af16e
    LEA EDI,[ESP + 0x30]                ; 005af172
    FSTP float ptr [ESP + 0x1c]         ; 005af176
    FLD float ptr [EAX + 0x8]           ; 005af17a
    FSUB float ptr [ESP + 0x14]         ; 005af17d
    LEA ESI,[ESP + 0x18]                ; 005af181
    FSTP float ptr [ESP + 0x20]         ; 005af185
    MOVSD ES:EDI,ESI                    ; 005af189
    MOVSD ES:EDI,ESI                    ; 005af18a
    MOVSD ES:EDI,ESI                    ; 005af18b
    FLD float ptr [ESP + 0x34]          ; 005af18c
    FMUL ST0                            ; 005af190
    FLD float ptr [ESP + 0x30]          ; 005af192
    FMUL ST0                            ; 005af196
    FADDP                               ; 005af198
    FLD float ptr [ESP + 0x38]          ; 005af19a
    FMUL ST0                            ; 005af19e
    FADDP                               ; 005af1a0
    FST float ptr [ESP + 0x10c]         ; 005af1a2
    FCOMP float ptr [ESP + 0xfc]        ; 005af1a9
    FNSTSW AX                           ; 005af1b0
    SAHF                                ; 005af1b2
    JNC 0x005af1d1                      ; 005af1b3
        ;   XREF to: 005af1d1 (CONDITIONAL_JUMP)  ; LAB_005af1d1
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005af1b5
    MOV dword ptr [ESP + 0xfc],EAX      ; 005af1bc
    MOV EAX,dword ptr [ESP + 0x14c]     ; 005af1c3
    MOV dword ptr [ESP + 0xf8],EAX      ; 005af1ca
    MOV EBP,dword ptr [ESP + 0x14c]     ; 005af1d1
        ;   Label: LAB_005af1d1
    MOV EDI,dword ptr [ESP + 0x12c]     ; 005af1d8
    INC EBP                             ; 005af1df
    ADD EDI,0x34                        ; 005af1e0
    MOV dword ptr [ESP + 0x14c],EBP     ; 005af1e3
    MOV dword ptr [ESP + 0x12c],EDI     ; 005af1ea
    JMP 0x005aedd1                      ; 005af1f1
        ;   XREF to: 005aedd1 (UNCONDITIONAL_JUMP)  ; LAB_005aedd1

