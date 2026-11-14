; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_FUN_0043eea0(CCloth *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr)
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
;   core_cloth.cpp_CClothList_setup_FUN_00441f60 at 00441f8c
;   core_gabriela.cpp_CGabriella_setup_FUN_004c6390 at 004c63db
;   core_mimic.cpp_CMimic_setupCloth_FUN_00510530 at 00510556
;   core_mimic.cpp_CMimic_setup_FUN_0050f290 at 0050f47b
;   core_svetlana.cpp_CSvetlana_setup_FUN_00592e90 at 00593099
;   core_vampboss.cpp_CVampireBoss_setup_FUN_005a52a0 at 005a52fc
;
; Referenced Globals:
;   undefined4 DAT_005fd8d0
;
; Called Functions:
;   core_cloth.cpp_CCloth_orientBoneToChild_FUN_0043fa20
;   core_cloth.cpp_FUN_0043ec40
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580
;   core_xform.cpp_FUN_005b5080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043eea0
        ;   Label: core_cloth.cpp_FUN_0043eea0
    PUSH ESI                            ; 0043eea1
    PUSH EDI                            ; 0043eea2
    PUSH EBP                            ; 0043eea3
    SUB ESP,0x158                       ; 0043eea4
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0043eeaa
    MOV ECX,dword ptr [EDX + 0x104]     ; 0043eeb1
    XOR EAX,EAX                         ; 0043eeb7
    TEST ECX,ECX                        ; 0043eeb9
    JLE 0x0043eef0                      ; 0043eebb
        ;   XREF to: 0043eef0 (CONDITIONAL_JUMP)  ; LAB_0043eef0
    XOR EDX,EDX                         ; 0043eebd
    MOV ECX,dword ptr [ESP + 0x16c]     ; 0043eebf
        ;   Label: LAB_0043eebf
    MOV ECX,dword ptr [ECX + 0x3aafc]   ; 0043eec6
    MOV dword ptr [ECX + EDX*0x1],EAX   ; 0043eecc
    MOV ECX,dword ptr [ESP + 0x16c]     ; 0043eecf
    INC EAX                             ; 0043eed6
    MOV EBX,dword ptr [ECX + 0x104]     ; 0043eed7
    ADD EDX,0x4                         ; 0043eedd
    CMP EAX,EBX                         ; 0043eee0
    JL 0x0043eebf                       ; 0043eee2
        ;   XREF to: 0043eebf (CONDITIONAL_JUMP)  ; LAB_0043eebf
    LEA EAX,[EAX]                       ; 0043eee4
    LEA EDX,[EDX]                       ; 0043eeea
    XOR ESI,ESI                         ; 0043eef0
        ;   Label: LAB_0043eef0
    MOV dword ptr [ESP + 0x148],ESI     ; 0043eef2
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043eef9
        ;   Label: LAB_0043eef9
    MOV EAX,dword ptr [EAX + 0x104]     ; 0043ef00
    MOV EDI,dword ptr [ESP + 0x148]     ; 0043ef06
    DEC EAX                             ; 0043ef0d
    CMP EAX,EDI                         ; 0043ef0e
    JLE 0x0043f047                      ; 0043ef10
        ;   XREF to: 0043f047 (CONDITIONAL_JUMP)  ; LAB_0043f047
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043ef16
    INC EDI                             ; 0043ef1d
    CMP EDI,dword ptr [EAX + 0x104]     ; 0043ef1e
    JGE 0x0043f03b                      ; 0043ef24
        ;   XREF to: 0043f03b (CONDITIONAL_JUMP)  ; LAB_0043f03b
    MOV EAX,dword ptr [ESP + 0x148]     ; 0043ef2a
    SHL EAX,0x2                         ; 0043ef31
    LEA EBX,[EDI*0x4 + 0x0]             ; 0043ef34
    MOV dword ptr [ESP + 0xe8],EAX      ; 0043ef3b
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043ef42
        ;   Label: LAB_0043ef42
    MOV EDX,dword ptr [ESP + 0xe8]      ; 0043ef49
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 0043ef50
    ADD EDX,EAX                         ; 0043ef56
    MOV ESI,dword ptr [EDX]             ; 0043ef58
    MOV EBP,dword ptr [EBX + EAX*0x1]   ; 0043ef5a
    IMUL EAX,ESI,0xc                    ; 0043ef5d
    MOV dword ptr [ESP + 0xc4],EAX      ; 0043ef60
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043ef67
    MOV ECX,dword ptr [ESP + 0xc4]      ; 0043ef6e
    MOV EAX,dword ptr [EAX + 0x10c]     ; 0043ef75
    ADD ECX,EAX                         ; 0043ef7b
    MOV dword ptr [ESP + 0xc4],ECX      ; 0043ef7d
    IMUL ECX,EBP,0xc                    ; 0043ef84
    ADD ECX,EAX                         ; 0043ef87
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0043ef89
    MOV EAX,dword ptr [EAX + 0x4]       ; 0043ef90
    CMP EAX,dword ptr [ECX + 0x4]       ; 0043ef93
    JGE 0x0043efaa                      ; 0043ef96
        ;   XREF to: 0043efaa (CONDITIONAL_JUMP)  ; LAB_0043efaa
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043ef98
    MOV dword ptr [EDX],EBP             ; 0043ef9f
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 0043efa1
    MOV dword ptr [EBX + EAX*0x1],ESI   ; 0043efa7
    IMUL EAX,ESI,0xc                    ; 0043efaa
        ;   Label: LAB_0043efaa
    IMUL ECX,EBP,0xc                    ; 0043efad
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0043efb0
    MOV EDX,dword ptr [EDX + 0x10c]     ; 0043efb7
    ADD EAX,EDX                         ; 0043efbd
    MOV dword ptr [ESP + 0x108],ECX     ; 0043efbf
    ADD EDX,ECX                         ; 0043efc6
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043efc8
    CMP ECX,dword ptr [EDX + 0x4]       ; 0043efcb
    JNZ 0x0043f022                      ; 0043efce
        ;   XREF to: 0043f022 (CONDITIONAL_JUMP)  ; LAB_0043f022
    MOV EAX,dword ptr [EAX]             ; 0043efd0
    CDQ                                 ; 0043efd2
    XOR EAX,EDX                         ; 0043efd3
    SUB EAX,EDX                         ; 0043efd5
    MOV ECX,EAX                         ; 0043efd7
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043efd9
    MOV EDX,dword ptr [ESP + 0x108]     ; 0043efe0
    MOV EAX,dword ptr [EAX + 0x10c]     ; 0043efe7
    ADD EAX,EDX                         ; 0043efed
    MOV EAX,dword ptr [EAX]             ; 0043efef
    CDQ                                 ; 0043eff1
    XOR EAX,EDX                         ; 0043eff2
    SUB EAX,EDX                         ; 0043eff4
    CMP ECX,EAX                         ; 0043eff6
    JLE 0x0043f022                      ; 0043eff8
        ;   XREF to: 0043f022 (CONDITIONAL_JUMP)  ; LAB_0043f022
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043effa
    MOV ECX,dword ptr [ESP + 0xe8]      ; 0043f001
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 0043f008
    ADD EAX,ECX                         ; 0043f00e
    MOV dword ptr [EAX],EBP             ; 0043f010
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043f012
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 0043f019
    MOV dword ptr [EBX + EAX*0x1],ESI   ; 0043f01f
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043f022
        ;   Label: LAB_0043f022
    INC EDI                             ; 0043f029
    MOV ESI,dword ptr [EAX + 0x104]     ; 0043f02a
    ADD EBX,0x4                         ; 0043f030
    CMP EDI,ESI                         ; 0043f033
    JL 0x0043ef42                       ; 0043f035
        ;   XREF to: 0043ef42 (CONDITIONAL_JUMP)  ; LAB_0043ef42
    INC dword ptr [ESP + 0x148]         ; 0043f03b
        ;   Label: LAB_0043f03b
    JMP 0x0043eef9                      ; 0043f042
        ;   XREF to: 0043eef9 (UNCONDITIONAL_JUMP)  ; LAB_0043eef9
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043f047
        ;   Label: LAB_0043f047
    MOV EBP,dword ptr [ESP + 0x170]     ; 0043f04e
    ADD EAX,0x3ab08                     ; 0043f055
    CMP EAX,EBP                         ; 0043f05a
    JZ 0x0043f070                       ; 0043f05c
        ;   XREF to: 0043f070 (CONDITIONAL_JUMP)  ; LAB_0043f070
    MOV EDX,EBP                         ; 0043f05e
    MOV ECX,dword ptr [EDX]             ; 0043f060
    MOV dword ptr [EAX],ECX             ; 0043f062
    MOV ECX,dword ptr [EDX + 0x4]       ; 0043f064
    MOV dword ptr [EAX + 0x4],ECX       ; 0043f067
    MOV ECX,dword ptr [EDX + 0x8]       ; 0043f06a
    MOV dword ptr [EAX + 0x8],ECX       ; 0043f06d
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043f070
        ;   Label: LAB_0043f070
    MOV EDX,dword ptr [ESP + 0x174]     ; 0043f077
    ADD EAX,0x3ab14                     ; 0043f07e
    CMP EAX,EDX                         ; 0043f083
    JZ 0x0043f097                       ; 0043f085
        ;   XREF to: 0043f097 (CONDITIONAL_JUMP)  ; LAB_0043f097
    MOV ECX,dword ptr [EDX]             ; 0043f087
    MOV dword ptr [EAX],ECX             ; 0043f089
    MOV ECX,dword ptr [EDX + 0x4]       ; 0043f08b
    MOV dword ptr [EAX + 0x4],ECX       ; 0043f08e
    MOV ECX,dword ptr [EDX + 0x8]       ; 0043f091
    MOV dword ptr [EAX + 0x8],ECX       ; 0043f094
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043f097
        ;   Label: LAB_0043f097
    MOV ECX,dword ptr [EAX + 0x104]     ; 0043f09e
    XOR EDI,EDI                         ; 0043f0a4
    TEST ECX,ECX                        ; 0043f0a6
    JLE 0x0043f153                      ; 0043f0a8
        ;   XREF to: 0043f153 (CONDITIONAL_JUMP)  ; LAB_0043f153
    LEA ESI,[EAX + 0x398]               ; 0043f0ae
    LEA ECX,[ESI + 0xc0]                ; 0043f0b4
    LEA EAX,[ESI + 0x18]                ; 0043f0ba
    LEA EDX,[ESI + 0xc]                 ; 0043f0bd
    IMUL EBX,EDI,0x11c                  ; 0043f0c0
        ;   Label: LAB_0043f0c0
    ADD EBX,ESI                         ; 0043f0c6
    CMP EBX,ECX                         ; 0043f0c8
    JZ 0x0043f0dc                       ; 0043f0ca
        ;   XREF to: 0043f0dc (CONDITIONAL_JUMP)  ; LAB_0043f0dc
    MOV EBP,dword ptr [ECX]             ; 0043f0cc
    MOV dword ptr [EBX],EBP             ; 0043f0ce
    MOV EBP,dword ptr [ECX + 0x4]       ; 0043f0d0
    MOV dword ptr [EBX + 0x4],EBP       ; 0043f0d3
    MOV EBP,dword ptr [ECX + 0x8]       ; 0043f0d6
    MOV dword ptr [EBX + 0x8],EBP       ; 0043f0d9
    MOV EBX,dword ptr [ESP + 0x16c]     ; 0043f0dc
        ;   Label: LAB_0043f0dc
    MOV dword ptr [EDX + 0x8],0x0       ; 0043f0e3
    ADD EAX,0x11c                       ; 0043f0ea
    MOV EBP,dword ptr [EDX + 0x8]       ; 0043f0ef
    MOV dword ptr [EDX + 0x4],EBP       ; 0043f0f2
    MOV EBP,dword ptr [EDX + 0x4]       ; 0043f0f5
    MOV dword ptr [EDX],EBP             ; 0043f0f8
    MOV dword ptr [EAX + 0xfffffeec],0x0 ; 0043f0fa
    ADD ECX,0x11c                       ; 0043f104
    MOV dword ptr [EAX + 0xfffffef8],0x0 ; 0043f10a
    INC EDI                             ; 0043f114
    FLD float ptr [EAX + 0xfffffef8]    ; 0043f115
    MOV EBP,dword ptr [EAX + 0xfffffeec] ; 0043f11b
    MOV dword ptr [EAX + 0xfffffee8],EBP ; 0043f121
    FST float ptr [EAX + 0xfffffef4]    ; 0043f127
    MOV EBP,dword ptr [EAX + 0xfffffee8] ; 0043f12d
    MOV dword ptr [EAX + 0xfffffee4],EBP ; 0043f133
    FSTP float ptr [EAX + 0xfffffef0]   ; 0043f139
    MOV EBP,dword ptr [EBX + 0x104]     ; 0043f13f
    ADD EDX,0x11c                       ; 0043f145
    CMP EDI,EBP                         ; 0043f14b
    JL 0x0043f0c0                       ; 0043f14d
        ;   XREF to: 0043f0c0 (CONDITIONAL_JUMP)  ; LAB_0043f0c0
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043f153
        ;   Label: LAB_0043f153
    PUSH EAX                            ; 0043f15a
    CALL core_cloth.cpp_FUN_0043ec40    ; 0043f15b
        ;   XREF to: 0043ec40 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043ec40(CCloth * this_ptr)
    ADD ESP,0x4                         ; 0043f160
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0043f163
    MOV ECX,dword ptr [EDX + 0x39ce8]   ; 0043f16a
    XOR EAX,EAX                         ; 0043f170
    TEST ECX,ECX                        ; 0043f172
    JLE 0x0043f1b0                      ; 0043f174
        ;   XREF to: 0043f1b0 (CONDITIONAL_JUMP)  ; LAB_0043f1b0
    MOV EBX,dword ptr [ESP + 0x16c]     ; 0043f176
    MOV EBP,EDX                         ; 0043f17d
    MOV EDX,dword ptr [EBP + 0x39cec]   ; 0043f17f
        ;   Label: LAB_0043f17f
    IMUL EDX,EDX,0x11c                  ; 0043f185
    ADD EDX,EBX                         ; 0043f18b
    MOV dword ptr [EDX + 0x40c],0x1     ; 0043f18d
    INC EAX                             ; 0043f197
    MOV ESI,dword ptr [EBX + 0x39ce8]   ; 0043f198
    ADD EBP,0x4                         ; 0043f19e
    CMP EAX,ESI                         ; 0043f1a1
    JL 0x0043f17f                       ; 0043f1a3
        ;   XREF to: 0043f17f (CONDITIONAL_JUMP)  ; LAB_0043f17f
    LEA EAX,[EAX]                       ; 0043f1a5
    LEA EDX,[EDX]                       ; 0043f1ab
    MOV EBX,EBX                         ; 0043f1ae
    MOV EDI,dword ptr [ESP + 0x178]     ; 0043f1b0
        ;   Label: LAB_0043f1b0
    TEST EDI,EDI                        ; 0043f1b7
    JZ 0x0043f8be                       ; 0043f1b9
        ;   XREF to: 0043f8be (CONDITIONAL_JUMP)  ; LAB_0043f8be
    PUSH EDI                            ; 0043f1bf
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 0043f1c0
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0043f1c5
    PUSH EAX                            ; 0043f1c8
    MOV EBX,EAX                         ; 0043f1c9
    MOV dword ptr [ESP + 0xcc],EAX      ; 0043f1cb
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40 ; 0043f1d2
        ;   XREF to: 00563c40 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0043f1d7
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043f1da
    MOV EBP,EDI                         ; 0043f1e1
    MOV EDX,dword ptr [EAX + 0x104]     ; 0043f1e3
    XOR EBP,EDI                         ; 0043f1e9
    TEST EDX,EDX                        ; 0043f1eb
    JLE 0x0043f2d7                      ; 0043f1ed
        ;   XREF to: 0043f2d7 (CONDITIONAL_JUMP)  ; LAB_0043f2d7
    ADD EBX,0x2740                      ; 0043f1f3
    LEA EDX,[EAX + 0x398]               ; 0043f1f9
    MOV dword ptr [ESP + 0xcc],EBX      ; 0043f1ff
    XOR EBX,EBX                         ; 0043f206
    LEA ECX,[EDX + 0xc0]                ; 0043f208
    MOV dword ptr [ESP + 0x114],EBX     ; 0043f20e
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0043f215
        ;   Label: LAB_0043f215
    FLD float ptr [ECX]                 ; 0043f21c
    FADD float ptr [EAX]                ; 0043f21e
    FSTP float ptr [ESP + 0x78]         ; 0043f220
    FLD float ptr [ECX + 0x4]           ; 0043f224
    FADD float ptr [EAX + 0x4]          ; 0043f227
    LEA EDI,[ESP + 0x9c]                ; 0043f22a
    FSTP float ptr [ESP + 0x7c]         ; 0043f231
    FLD float ptr [ECX + 0x8]           ; 0043f235
    FADD float ptr [EAX + 0x8]          ; 0043f238
    LEA ESI,[ESP + 0x78]                ; 0043f23b
    FSTP float ptr [ESP + 0x80]         ; 0043f23f
    LEA EAX,[ESP + 0x9c]                ; 0043f246
    MOVSD ES:EDI,ESI                    ; 0043f24d
    MOVSD ES:EDI,ESI                    ; 0043f24e
    MOVSD ES:EDI,ESI                    ; 0043f24f
    CMP EDX,EAX                         ; 0043f250
    JZ 0x0043f271                       ; 0043f252
        ;   XREF to: 0043f271 (CONDITIONAL_JUMP)  ; LAB_0043f271
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0043f254
    MOV dword ptr [EDX],EAX             ; 0043f25b
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0043f25d
    MOV dword ptr [EDX + 0x4],EAX       ; 0043f264
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0043f267
    MOV dword ptr [EDX + 0x8],EAX       ; 0043f26e
    MOV EBX,dword ptr [ESP + 0x16c]     ; 0043f271
        ;   Label: LAB_0043f271
    MOV ESI,dword ptr [ESP + 0x114]     ; 0043f278
    MOV EAX,EDX                         ; 0043f27f
    MOV EBX,dword ptr [EBX + 0x10c]     ; 0043f281
    ADD ECX,0x11c                       ; 0043f287
    ADD EBX,ESI                         ; 0043f28d
    INC EBP                             ; 0043f28f
    FLD float ptr [EAX]                 ; 0043f290
    FMUL float ptr [0x005fd8d0]         ; 0043f292 | DAT_005fd8d0
    FISTP dword ptr [EBX]               ; 0043f298
    FLD float ptr [EAX + 0x4]           ; 0043f29a
    FMUL float ptr [0x005fd8d0]         ; 0043f29d | DAT_005fd8d0
    FISTP dword ptr [EBX + 0x4]         ; 0043f2a3
    FLD float ptr [EAX + 0x8]           ; 0043f2a6
    FMUL float ptr [0x005fd8d0]         ; 0043f2a9 | DAT_005fd8d0
    FISTP dword ptr [EBX + 0x8]         ; 0043f2af
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043f2b2
    ADD EDX,0x11c                       ; 0043f2b9
    LEA EDI,[ESI + 0xc]                 ; 0043f2bf
    MOV EBX,dword ptr [EAX + 0x104]     ; 0043f2c2
    MOV dword ptr [ESP + 0x114],EDI     ; 0043f2c8
    CMP EBP,EBX                         ; 0043f2cf
    JL 0x0043f215                       ; 0043f2d1
        ;   XREF to: 0043f215 (CONDITIONAL_JUMP)  ; LAB_0043f215
    MOV ESI,dword ptr [ESP + 0x178]     ; 0043f2d7
        ;   Label: LAB_0043f2d7
    PUSH ESI                            ; 0043f2de
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500 ; 0043f2df
        ;   XREF to: 00567500 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0043f2e4
    PUSH ESI                            ; 0043f2e7
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180 ; 0043f2e8
        ;   XREF to: 00569180 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0043f2ed
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043f2f0
    XOR EBP,EBP                         ; 0043f2f7
    MOV EDX,dword ptr [EAX + 0x39ce8]   ; 0043f2f9
    MOV dword ptr [ESP + 0x144],EBP     ; 0043f2ff
    TEST EDX,EDX                        ; 0043f306
    JLE 0x0043f4d4                      ; 0043f308
        ;   XREF to: 0043f4d4 (CONDITIONAL_JUMP)  ; LAB_0043f4d4
    LEA EAX,[ESI + 0xe80]               ; 0043f30e
    MOV dword ptr [ESP + 0xe0],EAX      ; 0043f314
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043f31b
    ADD EAX,0x398                       ; 0043f322
    MOV dword ptr [ESP + 0xd8],EAX      ; 0043f327
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043f32e
    MOV dword ptr [ESP + 0x124],EAX     ; 0043f335
    MOV EAX,dword ptr [ESP + 0x124]     ; 0043f33c
        ;   Label: LAB_0043f33c
    IMUL EAX,dword ptr [EAX + 0x39cec],0x11c ; 0043f343
    MOV ECX,0x7149f2ca                  ; 0043f34d
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0043f352
    XOR EBX,EBX                         ; 0043f359
    ADD EDX,EAX                         ; 0043f35b
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0043f35d
    MOV dword ptr [ESP + 0xd4],ECX      ; 0043f364
    MOV dword ptr [ESP + 0x150],EBX     ; 0043f36b
    MOV ESI,dword ptr [EAX + 0x2c]      ; 0043f372
    MOV dword ptr [ESP + 0xd0],EDX      ; 0043f375
    TEST ESI,ESI                        ; 0043f37c
    JLE 0x0043f7da                      ; 0043f37e
        ;   XREF to: 0043f7da (CONDITIONAL_JUMP)  ; LAB_0043f7da
    MOV dword ptr [ESP + 0x120],EBX     ; 0043f384
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0043f38b
        ;   Label: LAB_0043f38b
    XOR EBX,EBX                         ; 0043f392
    MOV EDX,dword ptr [ESP + 0x120]     ; 0043f394
    MOV dword ptr [ESP + 0x3c],EBX      ; 0043f39b
    MOV EAX,dword ptr [EAX + 0x40]      ; 0043f39f
    MOV dword ptr [ESP + 0x40],EBX      ; 0043f3a2
    ADD EDX,EAX                         ; 0043f3a6
    MOV dword ptr [ESP + 0x44],EBX      ; 0043f3a8
    MOV dword ptr [ESP + 0xdc],EDX      ; 0043f3ac
    LEA EBX,[EDX + 0x4]                 ; 0043f3b3
    LEA EAX,[EDX + 0x10]                ; 0043f3b6
    XOR EBP,EBP                         ; 0043f3b9
    MOV dword ptr [ESP + 0x118],EAX     ; 0043f3bb
    MOV dword ptr [ESP + 0x11c],EDX     ; 0043f3c2
    MOV EDX,dword ptr [ESP + 0xdc]      ; 0043f3c9
        ;   Label: LAB_0043f3c9
    XOR EAX,EAX                         ; 0043f3d0
    MOV AL,byte ptr [EDX]               ; 0043f3d2
    CMP EBP,EAX                         ; 0043f3d4
    JGE 0x0043f725                      ; 0043f3d6
        ;   XREF to: 0043f725 (CONDITIONAL_JUMP)  ; LAB_0043f725
    MOV EDX,dword ptr [ESP + 0x11c]     ; 0043f3dc
    XOR EAX,EAX                         ; 0043f3e3
    MOV AL,byte ptr [EDX + 0x1]         ; 0043f3e5
    IMUL EAX,EAX,0x30                   ; 0043f3e8
    ADD EAX,dword ptr [ESP + 0xe0]      ; 0043f3eb
    PUSH EAX                            ; 0043f3f2
    MOV ECX,dword ptr [ESP + 0x11c]     ; 0043f3f3
    PUSH ECX                            ; 0043f3fa
    LEA ESI,[ESP + 0x2c]                ; 0043f3fb
    LEA EDI,[ESP + 0xb0]                ; 0043f3ff
    CALL core_xform.cpp_FUN_005b5080    ; 0043f406
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x2c]                ; 0043f40b
    ADD ESP,0x8                         ; 0043f40f
    MOVSD ES:EDI,ESI                    ; 0043f412
    MOVSD ES:EDI,ESI                    ; 0043f413
    MOVSD ES:EDI,ESI                    ; 0043f414
    FLD float ptr [ESP + 0xa8]          ; 0043f415
    FMUL float ptr [EBX]                ; 0043f41c
    FLD float ptr [ESP + 0xac]          ; 0043f41e
    FXCH                                ; 0043f425
    FSTP float ptr [ESP]                ; 0043f427
    FMUL float ptr [EBX]                ; 0043f42a
    FLD float ptr [ESP + 0xb0]          ; 0043f42c
    FXCH                                ; 0043f433
    FSTP float ptr [ESP + 0x4]          ; 0043f435
    FMUL float ptr [EBX]                ; 0043f439
    ADD EBX,0x4                         ; 0043f43b
    INC EBP                             ; 0043f43e
    FLD float ptr [ESP + 0x3c]          ; 0043f43f
    FLD float ptr [ESP + 0x40]          ; 0043f443
    LEA EDI,[ESP + 0x48]                ; 0043f447
    MOV ESI,ESP                         ; 0043f44b
    FXCH ST2                            ; 0043f44d
    FSTP float ptr [ESP + 0x8]          ; 0043f44f
    MOVSD ES:EDI,ESI                    ; 0043f453
    MOVSD ES:EDI,ESI                    ; 0043f454
    MOVSD ES:EDI,ESI                    ; 0043f455
    FLD float ptr [ESP + 0x44]          ; 0043f456
    MOV ESI,dword ptr [ESP + 0x118]     ; 0043f45a
    MOV EDI,dword ptr [ESP + 0x11c]     ; 0043f461
    FXCH                                ; 0043f468
    FADD float ptr [ESP + 0x48]         ; 0043f46a
    FXCH ST2                            ; 0043f46e
    FADD float ptr [ESP + 0x4c]         ; 0043f470
    FXCH                                ; 0043f474
    FADD float ptr [ESP + 0x50]         ; 0043f476
    FXCH ST2                            ; 0043f47a
    FSTP float ptr [ESP + 0x3c]         ; 0043f47c
    FSTP float ptr [ESP + 0x40]         ; 0043f480
    FSTP float ptr [ESP + 0x44]         ; 0043f484
    ADD ESI,0xc                         ; 0043f488
    INC EDI                             ; 0043f48b
    MOV dword ptr [ESP + 0x118],ESI     ; 0043f48c
    MOV dword ptr [ESP + 0x11c],EDI     ; 0043f493
    JMP 0x0043f3c9                      ; 0043f49a
        ;   XREF to: 0043f3c9 (UNCONDITIONAL_JUMP)  ; LAB_0043f3c9
    MOV EBX,dword ptr [ESP + 0x124]     ; 0043f49f
        ;   Label: LAB_0043f49f
    MOV ESI,dword ptr [ESP + 0x144]     ; 0043f4a6
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0043f4ad
    ADD EBX,0x4                         ; 0043f4b4
    INC ESI                             ; 0043f4b7
    MOV EDI,dword ptr [EDX + 0x39ce8]   ; 0043f4b8
    MOV dword ptr [ESP + 0x124],EBX     ; 0043f4be
    MOV dword ptr [ESP + 0x144],ESI     ; 0043f4c5
    CMP ESI,EDI                         ; 0043f4cc
    JL 0x0043f33c                       ; 0043f4ce
        ;   XREF to: 0043f33c (CONDITIONAL_JUMP)  ; LAB_0043f33c
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043f4d4
        ;   Label: LAB_0043f4d4
    MOV EBP,dword ptr [EAX + 0x37b4c]   ; 0043f4db
    XOR EBX,EBX                         ; 0043f4e1
    TEST EBP,EBP                        ; 0043f4e3
    JLE 0x0043f510                      ; 0043f4e5
        ;   XREF to: 0043f510 (CONDITIONAL_JUMP)  ; LAB_0043f510
    MOV EDI,dword ptr [ESP + 0x178]     ; 0043f4e7
    MOV EBP,dword ptr [ESP + 0x16c]     ; 0043f4ee
    PUSH EDI                            ; 0043f4f5
        ;   Label: LAB_0043f4f5
    PUSH EBX                            ; 0043f4f6
    PUSH EBP                            ; 0043f4f7
    CALL core_cloth.cpp_CCloth_orientBoneToChild_FUN_0043fa20 ; 0043f4f8
        ;   XREF to: 0043fa20 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_orientBoneToChild_FUN_0043fa20(CCloth * this_ptr, int bone_index, CDeformableModelInstance * model_ptr)
    INC EBX                             ; 0043f4fd
    MOV EDX,dword ptr [EBP + 0x37b4c]   ; 0043f4fe
    ADD ESP,0xc                         ; 0043f504
    CMP EBX,EDX                         ; 0043f507
    JL 0x0043f4f5                       ; 0043f509
        ;   XREF to: 0043f4f5 (CONDITIONAL_JUMP)  ; LAB_0043f4f5
    LEA EAX,[EAX]                       ; 0043f50b
    MOV ECX,ECX                         ; 0043f50e
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043f510
        ;   Label: LAB_0043f510
    XOR ECX,ECX                         ; 0043f517
    MOV EBX,dword ptr [EAX + 0x39ce8]   ; 0043f519
    MOV dword ptr [ESP + 0xc0],ECX      ; 0043f51f
    TEST EBX,EBX                        ; 0043f526
    JLE 0x0043f8ae                      ; 0043f528
        ;   XREF to: 0043f8ae (CONDITIONAL_JUMP)  ; LAB_0043f8ae
    MOV EAX,dword ptr [ESP + 0x178]     ; 0043f52e
    ADD EAX,0xe80                       ; 0043f535
    MOV dword ptr [ESP + 0x104],EAX     ; 0043f53a
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043f541
    ADD EAX,0x398                       ; 0043f548
    MOV dword ptr [ESP + 0xf4],EAX      ; 0043f54d
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043f554
    MOV dword ptr [ESP + 0x138],ECX     ; 0043f55b
    MOV dword ptr [ESP + 0x13c],EAX     ; 0043f562
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0043f569
        ;   Label: LAB_0043f569
    IMUL EAX,dword ptr [EAX + 0x39cec],0x11c ; 0043f570
    MOV EDX,dword ptr [ESP + 0xf4]      ; 0043f57a
    XOR EBP,EBP                         ; 0043f581
    ADD EDX,EAX                         ; 0043f583
    MOV EAX,dword ptr [ESP + 0x138]     ; 0043f585
    MOV dword ptr [ESP + 0xf0],EDX      ; 0043f58c
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0043f593
    MOV dword ptr [ESP + 0x140],EBP     ; 0043f59a
    ADD EAX,EDX                         ; 0043f5a1
    MOV dword ptr [ESP + 0x130],EBP     ; 0043f5a3
    MOV dword ptr [ESP + 0x134],EAX     ; 0043f5aa
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0043f5b1
        ;   Label: LAB_0043f5b1
    MOV ECX,dword ptr [ESP + 0x140]     ; 0043f5b8
    CMP ECX,dword ptr [EAX]             ; 0043f5bf
    JGE 0x0043f866                      ; 0043f5c1
        ;   XREF to: 0043f866 (CONDITIONAL_JUMP)  ; LAB_0043f866
    MOV EBX,0x7149f2ca                  ; 0043f5c7
    MOV EAX,dword ptr [ESP + 0x130]     ; 0043f5cc
    XOR ESI,ESI                         ; 0043f5d3
    MOV dword ptr [ESP + 0xfc],EBX      ; 0043f5d5
    MOV dword ptr [ESP + 0x14c],ESI     ; 0043f5dc
    MOV dword ptr [ESP + 0x110],EAX     ; 0043f5e3
    MOV dword ptr [ESP + 0x12c],ESI     ; 0043f5ea
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0043f5f1
        ;   Label: LAB_0043f5f1
    ADD EAX,dword ptr [ESP + 0x110]     ; 0043f5f8
    MOV EDX,dword ptr [ESP + 0x14c]     ; 0043f5ff
    CMP EDX,dword ptr [EAX + 0x2c]      ; 0043f606
    JGE 0x0043f934                      ; 0043f609
        ;   XREF to: 0043f934 (CONDITIONAL_JUMP)  ; LAB_0043f934
    MOV EDX,dword ptr [ESP + 0x12c]     ; 0043f60f
    XOR EBP,EBP                         ; 0043f616
    MOV EAX,dword ptr [EAX + 0x40]      ; 0043f618
    MOV dword ptr [ESP + 0xc],EBP       ; 0043f61b
    ADD EDX,EAX                         ; 0043f61f
    MOV dword ptr [ESP + 0x10],EBP      ; 0043f621
    MOV dword ptr [ESP + 0x100],EDX     ; 0043f625
    LEA EBX,[EDX + 0x4]                 ; 0043f62c
    MOV dword ptr [ESP + 0x14],EBP      ; 0043f62f
    LEA EAX,[EDX + 0x10]                ; 0043f633
    MOV dword ptr [ESP + 0x154],EBP     ; 0043f636
    MOV dword ptr [ESP + 0x128],EAX     ; 0043f63d
    MOV EBP,EDX                         ; 0043f644
    MOV EDX,dword ptr [ESP + 0x100]     ; 0043f646
        ;   Label: LAB_0043f646
    XOR EAX,EAX                         ; 0043f64d
    MOV ESI,dword ptr [ESP + 0x154]     ; 0043f64f
    MOV AL,byte ptr [EDX]               ; 0043f656
    CMP EAX,ESI                         ; 0043f658
    JLE 0x0043f97a                      ; 0043f65a
        ;   XREF to: 0043f97a (CONDITIONAL_JUMP)  ; LAB_0043f97a
    XOR EAX,EAX                         ; 0043f660
    MOV AL,byte ptr [EBP + 0x1]         ; 0043f662
    IMUL EAX,EAX,0x30                   ; 0043f665
    ADD EAX,dword ptr [ESP + 0x104]     ; 0043f668
    PUSH EAX                            ; 0043f66f
    MOV ECX,dword ptr [ESP + 0x12c]     ; 0043f670
    PUSH ECX                            ; 0043f677
    LEA ESI,[ESP + 0x98]                ; 0043f678
    LEA EDI,[ESP + 0x5c]                ; 0043f67f
    CALL core_xform.cpp_FUN_005b5080    ; 0043f683
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x98]                ; 0043f688
    ADD ESP,0x8                         ; 0043f68f
    MOVSD ES:EDI,ESI                    ; 0043f692
    MOVSD ES:EDI,ESI                    ; 0043f693
    MOVSD ES:EDI,ESI                    ; 0043f694
    FLD float ptr [ESP + 0x54]          ; 0043f695
    FMUL float ptr [EBX]                ; 0043f699
    FLD float ptr [ESP + 0x58]          ; 0043f69b
    FXCH                                ; 0043f69f
    FSTP float ptr [ESP + 0x84]         ; 0043f6a1
    FMUL float ptr [EBX]                ; 0043f6a8
    FLD float ptr [ESP + 0x5c]          ; 0043f6aa
    FXCH                                ; 0043f6ae
    FSTP float ptr [ESP + 0x88]         ; 0043f6b0
    FMUL float ptr [EBX]                ; 0043f6b7
    INC EBP                             ; 0043f6b9
    ADD EBX,0x4                         ; 0043f6ba
    FLD float ptr [ESP + 0xc]           ; 0043f6bd
    FLD float ptr [ESP + 0x10]          ; 0043f6c1
    LEA EDI,[ESP + 0x60]                ; 0043f6c5
    LEA ESI,[ESP + 0x84]                ; 0043f6c9
    FXCH ST2                            ; 0043f6d0
    FSTP float ptr [ESP + 0x8c]         ; 0043f6d2
    MOVSD ES:EDI,ESI                    ; 0043f6d9
    MOVSD ES:EDI,ESI                    ; 0043f6da
    MOVSD ES:EDI,ESI                    ; 0043f6db
    FLD float ptr [ESP + 0x14]          ; 0043f6dc
    MOV ESI,dword ptr [ESP + 0x128]     ; 0043f6e0
    MOV EDI,dword ptr [ESP + 0x154]     ; 0043f6e7
    FXCH                                ; 0043f6ee
    FADD float ptr [ESP + 0x60]         ; 0043f6f0
    FXCH ST2                            ; 0043f6f4
    FADD float ptr [ESP + 0x64]         ; 0043f6f6
    FXCH                                ; 0043f6fa
    FADD float ptr [ESP + 0x68]         ; 0043f6fc
    FXCH ST2                            ; 0043f700
    FSTP float ptr [ESP + 0xc]          ; 0043f702
    FSTP float ptr [ESP + 0x10]         ; 0043f706
    FSTP float ptr [ESP + 0x14]         ; 0043f70a
    ADD ESI,0xc                         ; 0043f70e
    INC EDI                             ; 0043f711
    MOV dword ptr [ESP + 0x128],ESI     ; 0043f712
    MOV dword ptr [ESP + 0x154],EDI     ; 0043f719
    JMP 0x0043f646                      ; 0043f720
        ;   XREF to: 0043f646 (UNCONDITIONAL_JUMP)  ; LAB_0043f646
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0043f725
        ;   Label: LAB_0043f725
    FLD float ptr [EAX]                 ; 0043f72c
    FSUB float ptr [ESP + 0x3c]         ; 0043f72e
    FSTP float ptr [ESP + 0xb4]         ; 0043f732
    FLD float ptr [EAX + 0x4]           ; 0043f739
    FSUB float ptr [ESP + 0x40]         ; 0043f73c
    LEA EDI,[ESP + 0x6c]                ; 0043f740
    FSTP float ptr [ESP + 0xb8]         ; 0043f744
    FLD float ptr [EAX + 0x8]           ; 0043f74b
    FSUB float ptr [ESP + 0x44]         ; 0043f74e
    LEA ESI,[ESP + 0xb4]                ; 0043f752
    FSTP float ptr [ESP + 0xbc]         ; 0043f759
    MOVSD ES:EDI,ESI                    ; 0043f760
    MOVSD ES:EDI,ESI                    ; 0043f761
    MOVSD ES:EDI,ESI                    ; 0043f762
    FLD float ptr [ESP + 0x70]          ; 0043f763
    FMUL ST0                            ; 0043f767
    FLD float ptr [ESP + 0x6c]          ; 0043f769
    FMUL ST0                            ; 0043f76d
    FADDP                               ; 0043f76f
    FLD float ptr [ESP + 0x74]          ; 0043f771
    FMUL ST0                            ; 0043f775
    FADDP                               ; 0043f777
    FST float ptr [ESP + 0xec]          ; 0043f779
    FCOMP float ptr [ESP + 0xd4]        ; 0043f780
    FNSTSW AX                           ; 0043f787
    SAHF                                ; 0043f789
    JNC 0x0043f7a8                      ; 0043f78a
        ;   XREF to: 0043f7a8 (CONDITIONAL_JUMP)  ; LAB_0043f7a8
    MOV EAX,dword ptr [ESP + 0xec]      ; 0043f78c
    MOV dword ptr [ESP + 0xd4],EAX      ; 0043f793
    MOV EAX,dword ptr [ESP + 0x150]     ; 0043f79a
    MOV dword ptr [ESP + 0xe4],EAX      ; 0043f7a1
    MOV ESI,dword ptr [ESP + 0x120]     ; 0043f7a8
        ;   Label: LAB_0043f7a8
    MOV EDI,dword ptr [ESP + 0x150]     ; 0043f7af
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0043f7b6
    ADD ESI,0x34                        ; 0043f7bd
    INC EDI                             ; 0043f7c0
    MOV EBP,dword ptr [EDX + 0x2c]      ; 0043f7c1
    MOV dword ptr [ESP + 0x120],ESI     ; 0043f7c4
    MOV dword ptr [ESP + 0x150],EDI     ; 0043f7cb
    CMP EDI,EBP                         ; 0043f7d2
    JL 0x0043f38b                       ; 0043f7d4
        ;   XREF to: 0043f38b (CONDITIONAL_JUMP)  ; LAB_0043f38b
    IMUL EDI,dword ptr [ESP + 0xe4],0x34 ; 0043f7da
        ;   Label: LAB_0043f7da
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0043f7e2
    MOV EAX,dword ptr [EAX + 0x40]      ; 0043f7e9
    ADD EDI,EAX                         ; 0043f7ec
    XOR EAX,EAX                         ; 0043f7ee
    MOV EDX,dword ptr [ESP + 0xd0]      ; 0043f7f0
    MOV AL,byte ptr [EDI]               ; 0043f7f7
    XOR EBP,EBP                         ; 0043f7f9
    MOV dword ptr [EDX + 0xdc],EAX      ; 0043f7fb
    TEST EAX,EAX                        ; 0043f801
    JLE 0x0043f49f                      ; 0043f803
        ;   XREF to: 0043f49f (CONDITIONAL_JUMP)  ; LAB_0043f49f
    LEA EBX,[EDX + 0xec]                ; 0043f809
    LEA EAX,[EDI + 0x10]                ; 0043f80f
    MOV ESI,dword ptr [ESP + 0xd0]      ; 0043f812
    MOV EDX,EDI                         ; 0043f819
    XOR ECX,ECX                         ; 0043f81b
        ;   Label: LAB_0043f81b
    MOV CL,byte ptr [EDX + 0x1]         ; 0043f81d
    MOV dword ptr [ESI + 0xe0],ECX      ; 0043f820
    CMP EBX,EAX                         ; 0043f826
    JZ 0x0043f83a                       ; 0043f828
        ;   XREF to: 0043f83a (CONDITIONAL_JUMP)  ; LAB_0043f83a
    MOV ECX,dword ptr [EAX]             ; 0043f82a
    MOV dword ptr [EBX],ECX             ; 0043f82c
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043f82e
    MOV dword ptr [EBX + 0x4],ECX       ; 0043f831
    MOV ECX,dword ptr [EAX + 0x8]       ; 0043f834
    MOV dword ptr [EBX + 0x8],ECX       ; 0043f837
    FLD float ptr [EDI + 0x4]           ; 0043f83a
        ;   Label: LAB_0043f83a
    MOV ECX,dword ptr [ESP + 0xd0]      ; 0043f83d
    ADD EBX,0xc                         ; 0043f844
    ADD EAX,0xc                         ; 0043f847
    INC EDX                             ; 0043f84a
    ADD ESI,0x4                         ; 0043f84b
    ADD EDI,0x4                         ; 0043f84e
    INC EBP                             ; 0043f851
    FSTP float ptr [ESI + 0x10c]        ; 0043f852
    CMP EBP,dword ptr [ECX + 0xdc]      ; 0043f858
    JGE 0x0043f49f                      ; 0043f85e
        ;   XREF to: 0043f49f (CONDITIONAL_JUMP)  ; LAB_0043f49f
    JMP 0x0043f81b                      ; 0043f864
        ;   XREF to: 0043f81b (UNCONDITIONAL_JUMP)  ; LAB_0043f81b
    MOV EBP,dword ptr [ESP + 0x138]     ; 0043f866
        ;   Label: LAB_0043f866
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0043f86d
    MOV EDX,dword ptr [ESP + 0xc0]      ; 0043f874
    ADD EAX,0x4                         ; 0043f87b
    INC EDX                             ; 0043f87e
    MOV dword ptr [ESP + 0x13c],EAX     ; 0043f87f
    MOV dword ptr [ESP + 0xc0],EDX      ; 0043f886
    MOV EAX,EDX                         ; 0043f88d
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0043f88f
    ADD EBP,0x4                         ; 0043f896
    MOV ECX,dword ptr [EDX + 0x39ce8]   ; 0043f899
    MOV dword ptr [ESP + 0x138],EBP     ; 0043f89f
    CMP EAX,ECX                         ; 0043f8a6
    JL 0x0043f569                       ; 0043f8a8
        ;   XREF to: 0043f569 (CONDITIONAL_JUMP)  ; LAB_0043f569
    MOV EBX,dword ptr [ESP + 0x178]     ; 0043f8ae
        ;   Label: LAB_0043f8ae
    PUSH EBX                            ; 0043f8b5
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580 ; 0043f8b6
        ;   XREF to: 00567580 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0043f8bb
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0043f8be
        ;   Label: LAB_0043f8be
    MOV EBP,dword ptr [EDX + 0x104]     ; 0043f8c5
    XOR EAX,EAX                         ; 0043f8cb
    TEST EBP,EBP                        ; 0043f8cd
    JLE 0x0043f900                      ; 0043f8cf
        ;   XREF to: 0043f900 (CONDITIONAL_JUMP)  ; LAB_0043f900
    MOV ECX,dword ptr [ESP + 0x16c]     ; 0043f8d1
    MOV dword ptr [EDX + 0x470],0xffffffff ; 0043f8d8
        ;   Label: LAB_0043f8d8
    INC EAX                             ; 0043f8e2
    MOV EBX,dword ptr [ECX + 0x104]     ; 0043f8e3
    ADD EDX,0x11c                       ; 0043f8e9
    CMP EAX,EBX                         ; 0043f8ef
    JL 0x0043f8d8                       ; 0043f8f1
        ;   XREF to: 0043f8d8 (CONDITIONAL_JUMP)  ; LAB_0043f8d8
    LEA EAX,[EAX]                       ; 0043f8f3
    LEA EDX,[EDX]                       ; 0043f8f9
    NOP                                 ; 0043f8ff
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043f900
        ;   Label: LAB_0043f900
    MOV dword ptr [EAX + 0x3ab2c],0x0   ; 0043f907
    MOV EDX,dword ptr [EAX + 0x3ab2c]   ; 0043f911
    MOV dword ptr [EAX + 0x3ab28],EDX   ; 0043f917
    MOV EDX,dword ptr [EAX + 0x3ab28]   ; 0043f91d
    MOV dword ptr [EAX + 0x3ab24],EDX   ; 0043f923
    ADD ESP,0x158                       ; 0043f929
    POP EBP                             ; 0043f92f
    POP EDI                             ; 0043f930
    POP ESI                             ; 0043f931
    POP EBX                             ; 0043f932
    RET                                 ; 0043f933
    MOV EBX,dword ptr [ESP + 0x130]     ; 0043f934
        ;   Label: LAB_0043f934
    MOV EDX,dword ptr [ESP + 0x134]     ; 0043f93b
    MOV EDI,dword ptr [ESP + 0x140]     ; 0043f942
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0043f949
    ADD EBX,0x4                         ; 0043f950
    LEA ESI,[EDX + 0x190]               ; 0043f953
    INC EDI                             ; 0043f959
    MOV dword ptr [EDX + 0x39e7c],EAX   ; 0043f95a
    MOV dword ptr [ESP + 0x130],EBX     ; 0043f960
    MOV dword ptr [ESP + 0x134],ESI     ; 0043f967
    MOV dword ptr [ESP + 0x140],EDI     ; 0043f96e
    JMP 0x0043f5b1                      ; 0043f975
        ;   XREF to: 0043f5b1 (UNCONDITIONAL_JUMP)  ; LAB_0043f5b1
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0043f97a
        ;   Label: LAB_0043f97a
    FLD float ptr [EAX]                 ; 0043f981
    FSUB float ptr [ESP + 0xc]          ; 0043f983
    FSTP float ptr [ESP + 0x18]         ; 0043f987
    FLD float ptr [EAX + 0x4]           ; 0043f98b
    FSUB float ptr [ESP + 0x10]         ; 0043f98e
    LEA EDI,[ESP + 0x30]                ; 0043f992
    FSTP float ptr [ESP + 0x1c]         ; 0043f996
    FLD float ptr [EAX + 0x8]           ; 0043f99a
    FSUB float ptr [ESP + 0x14]         ; 0043f99d
    LEA ESI,[ESP + 0x18]                ; 0043f9a1
    FSTP float ptr [ESP + 0x20]         ; 0043f9a5
    MOVSD ES:EDI,ESI                    ; 0043f9a9
    MOVSD ES:EDI,ESI                    ; 0043f9aa
    MOVSD ES:EDI,ESI                    ; 0043f9ab
    FLD float ptr [ESP + 0x34]          ; 0043f9ac
    FMUL ST0                            ; 0043f9b0
    FLD float ptr [ESP + 0x30]          ; 0043f9b2
    FMUL ST0                            ; 0043f9b6
    FADDP                               ; 0043f9b8
    FLD float ptr [ESP + 0x38]          ; 0043f9ba
    FMUL ST0                            ; 0043f9be
    FADDP                               ; 0043f9c0
    FST float ptr [ESP + 0x10c]         ; 0043f9c2
    FCOMP float ptr [ESP + 0xfc]        ; 0043f9c9
    FNSTSW AX                           ; 0043f9d0
    SAHF                                ; 0043f9d2
    JNC 0x0043f9f1                      ; 0043f9d3
        ;   XREF to: 0043f9f1 (CONDITIONAL_JUMP)  ; LAB_0043f9f1
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0043f9d5
    MOV dword ptr [ESP + 0xfc],EAX      ; 0043f9dc
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0043f9e3
    MOV dword ptr [ESP + 0xf8],EAX      ; 0043f9ea
    MOV EBP,dword ptr [ESP + 0x14c]     ; 0043f9f1
        ;   Label: LAB_0043f9f1
    MOV EDI,dword ptr [ESP + 0x12c]     ; 0043f9f8
    INC EBP                             ; 0043f9ff
    ADD EDI,0x34                        ; 0043fa00
    MOV dword ptr [ESP + 0x14c],EBP     ; 0043fa03
    MOV dword ptr [ESP + 0x12c],EDI     ; 0043fa0a
    JMP 0x0043f5f1                      ; 0043fa11
        ;   XREF to: 0043f5f1 (UNCONDITIONAL_JUMP)  ; LAB_0043f5f1

