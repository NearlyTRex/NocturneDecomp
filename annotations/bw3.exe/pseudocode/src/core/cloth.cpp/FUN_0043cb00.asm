; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cloth_cpp_FUN_0043cb00(CCloth *param_1,CCloth *param_2,CCloth *param_3,CDeformableModelInstance *param_4)
;
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
; XREF[1]:
;   core_cloth.cpp_CClothList_setup_FUN_0043fbc0 at 0043fbec
;
; Referenced Globals:
;   undefined4 DAT_005dd3b0
;
; Called Functions:
;   core_cloth.cpp_CCloth_orientBoneToChild_FUN_0043d680
;   core_cloth.cpp_FUN_0043c8a0
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005487e0
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110
;   core_xform.cpp_FUN_00583260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043cb00
        ;   Label: core_cloth.cpp_FUN_0043cb00
    PUSH ESI                            ; 0043cb01
    PUSH EDI                            ; 0043cb02
    PUSH EBP                            ; 0043cb03
    SUB ESP,0x158                       ; 0043cb04
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0043cb0a
    MOV ECX,dword ptr [EDX + 0x104]     ; 0043cb11
    XOR EAX,EAX                         ; 0043cb17
    TEST ECX,ECX                        ; 0043cb19
    JLE 0x0043cb50                      ; 0043cb1b
        ;   XREF to: 0043cb50 (CONDITIONAL_JUMP)  ; LAB_0043cb50
    XOR EDX,EDX                         ; 0043cb1d
    MOV ECX,dword ptr [ESP + 0x16c]     ; 0043cb1f
        ;   Label: LAB_0043cb1f
    MOV ECX,dword ptr [ECX + 0x3aafc]   ; 0043cb26
    MOV dword ptr [ECX + EDX*0x1],EAX   ; 0043cb2c
    MOV ECX,dword ptr [ESP + 0x16c]     ; 0043cb2f
    INC EAX                             ; 0043cb36
    MOV EBX,dword ptr [ECX + 0x104]     ; 0043cb37
    ADD EDX,0x4                         ; 0043cb3d
    CMP EAX,EBX                         ; 0043cb40
    JL 0x0043cb1f                       ; 0043cb42
        ;   XREF to: 0043cb1f (CONDITIONAL_JUMP)  ; LAB_0043cb1f
    LEA EAX,[EAX]                       ; 0043cb44
    LEA EDX,[EDX]                       ; 0043cb4a
    XOR ESI,ESI                         ; 0043cb50
        ;   Label: LAB_0043cb50
    MOV dword ptr [ESP + 0x148],ESI     ; 0043cb52
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043cb59
        ;   Label: LAB_0043cb59
    MOV EAX,dword ptr [EAX + 0x104]     ; 0043cb60
    MOV EDI,dword ptr [ESP + 0x148]     ; 0043cb66
    DEC EAX                             ; 0043cb6d
    CMP EAX,EDI                         ; 0043cb6e
    JLE 0x0043cca7                      ; 0043cb70
        ;   XREF to: 0043cca7 (CONDITIONAL_JUMP)  ; LAB_0043cca7
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043cb76
    INC EDI                             ; 0043cb7d
    CMP EDI,dword ptr [EAX + 0x104]     ; 0043cb7e
    JGE 0x0043cc9b                      ; 0043cb84
        ;   XREF to: 0043cc9b (CONDITIONAL_JUMP)  ; LAB_0043cc9b
    MOV EAX,dword ptr [ESP + 0x148]     ; 0043cb8a
    SHL EAX,0x2                         ; 0043cb91
    LEA EBX,[EDI*0x4 + 0x0]             ; 0043cb94
    MOV dword ptr [ESP + 0xe8],EAX      ; 0043cb9b
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043cba2
        ;   Label: LAB_0043cba2
    MOV EDX,dword ptr [ESP + 0xe8]      ; 0043cba9
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 0043cbb0
    ADD EDX,EAX                         ; 0043cbb6
    MOV ESI,dword ptr [EDX]             ; 0043cbb8
    MOV EBP,dword ptr [EBX + EAX*0x1]   ; 0043cbba
    IMUL EAX,ESI,0xc                    ; 0043cbbd
    MOV dword ptr [ESP + 0xc4],EAX      ; 0043cbc0
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043cbc7
    MOV ECX,dword ptr [ESP + 0xc4]      ; 0043cbce
    MOV EAX,dword ptr [EAX + 0x10c]     ; 0043cbd5
    ADD ECX,EAX                         ; 0043cbdb
    MOV dword ptr [ESP + 0xc4],ECX      ; 0043cbdd
    IMUL ECX,EBP,0xc                    ; 0043cbe4
    ADD ECX,EAX                         ; 0043cbe7
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0043cbe9
    MOV EAX,dword ptr [EAX + 0x4]       ; 0043cbf0
    CMP EAX,dword ptr [ECX + 0x4]       ; 0043cbf3
    JGE 0x0043cc0a                      ; 0043cbf6
        ;   XREF to: 0043cc0a (CONDITIONAL_JUMP)  ; LAB_0043cc0a
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043cbf8
    MOV dword ptr [EDX],EBP             ; 0043cbff
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 0043cc01
    MOV dword ptr [EBX + EAX*0x1],ESI   ; 0043cc07
    IMUL EAX,ESI,0xc                    ; 0043cc0a
        ;   Label: LAB_0043cc0a
    IMUL ECX,EBP,0xc                    ; 0043cc0d
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0043cc10
    MOV EDX,dword ptr [EDX + 0x10c]     ; 0043cc17
    ADD EAX,EDX                         ; 0043cc1d
    MOV dword ptr [ESP + 0x108],ECX     ; 0043cc1f
    ADD EDX,ECX                         ; 0043cc26
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043cc28
    CMP ECX,dword ptr [EDX + 0x4]       ; 0043cc2b
    JNZ 0x0043cc82                      ; 0043cc2e
        ;   XREF to: 0043cc82 (CONDITIONAL_JUMP)  ; LAB_0043cc82
    MOV EAX,dword ptr [EAX]             ; 0043cc30
    CDQ                                 ; 0043cc32
    XOR EAX,EDX                         ; 0043cc33
    SUB EAX,EDX                         ; 0043cc35
    MOV ECX,EAX                         ; 0043cc37
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043cc39
    MOV EDX,dword ptr [ESP + 0x108]     ; 0043cc40
    MOV EAX,dword ptr [EAX + 0x10c]     ; 0043cc47
    ADD EAX,EDX                         ; 0043cc4d
    MOV EAX,dword ptr [EAX]             ; 0043cc4f
    CDQ                                 ; 0043cc51
    XOR EAX,EDX                         ; 0043cc52
    SUB EAX,EDX                         ; 0043cc54
    CMP ECX,EAX                         ; 0043cc56
    JLE 0x0043cc82                      ; 0043cc58
        ;   XREF to: 0043cc82 (CONDITIONAL_JUMP)  ; LAB_0043cc82
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043cc5a
    MOV ECX,dword ptr [ESP + 0xe8]      ; 0043cc61
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 0043cc68
    ADD EAX,ECX                         ; 0043cc6e
    MOV dword ptr [EAX],EBP             ; 0043cc70
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043cc72
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 0043cc79
    MOV dword ptr [EBX + EAX*0x1],ESI   ; 0043cc7f
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043cc82
        ;   Label: LAB_0043cc82
    INC EDI                             ; 0043cc89
    MOV ESI,dword ptr [EAX + 0x104]     ; 0043cc8a
    ADD EBX,0x4                         ; 0043cc90
    CMP EDI,ESI                         ; 0043cc93
    JL 0x0043cba2                       ; 0043cc95
        ;   XREF to: 0043cba2 (CONDITIONAL_JUMP)  ; LAB_0043cba2
    INC dword ptr [ESP + 0x148]         ; 0043cc9b
        ;   Label: LAB_0043cc9b
    JMP 0x0043cb59                      ; 0043cca2
        ;   XREF to: 0043cb59 (UNCONDITIONAL_JUMP)  ; LAB_0043cb59
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043cca7
        ;   Label: LAB_0043cca7
    MOV EBP,dword ptr [ESP + 0x170]     ; 0043ccae
    ADD EAX,0x3ab08                     ; 0043ccb5
    CMP EAX,EBP                         ; 0043ccba
    JZ 0x0043ccd0                       ; 0043ccbc
        ;   XREF to: 0043ccd0 (CONDITIONAL_JUMP)  ; LAB_0043ccd0
    MOV EDX,EBP                         ; 0043ccbe
    MOV ECX,dword ptr [EDX]             ; 0043ccc0
    MOV dword ptr [EAX],ECX             ; 0043ccc2
    MOV ECX,dword ptr [EDX + 0x4]       ; 0043ccc4
    MOV dword ptr [EAX + 0x4],ECX       ; 0043ccc7
    MOV ECX,dword ptr [EDX + 0x8]       ; 0043ccca
    MOV dword ptr [EAX + 0x8],ECX       ; 0043cccd
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043ccd0
        ;   Label: LAB_0043ccd0
    MOV EDX,dword ptr [ESP + 0x174]     ; 0043ccd7
    ADD EAX,0x3ab14                     ; 0043ccde
    CMP EAX,EDX                         ; 0043cce3
    JZ 0x0043ccf7                       ; 0043cce5
        ;   XREF to: 0043ccf7 (CONDITIONAL_JUMP)  ; LAB_0043ccf7
    MOV ECX,dword ptr [EDX]             ; 0043cce7
    MOV dword ptr [EAX],ECX             ; 0043cce9
    MOV ECX,dword ptr [EDX + 0x4]       ; 0043cceb
    MOV dword ptr [EAX + 0x4],ECX       ; 0043ccee
    MOV ECX,dword ptr [EDX + 0x8]       ; 0043ccf1
    MOV dword ptr [EAX + 0x8],ECX       ; 0043ccf4
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043ccf7
        ;   Label: LAB_0043ccf7
    MOV ECX,dword ptr [EAX + 0x104]     ; 0043ccfe
    XOR EDI,EDI                         ; 0043cd04
    TEST ECX,ECX                        ; 0043cd06
    JLE 0x0043cdb3                      ; 0043cd08
        ;   XREF to: 0043cdb3 (CONDITIONAL_JUMP)  ; LAB_0043cdb3
    LEA ESI,[EAX + 0x398]               ; 0043cd0e
    LEA ECX,[ESI + 0xc0]                ; 0043cd14
    LEA EAX,[ESI + 0x18]                ; 0043cd1a
    LEA EDX,[ESI + 0xc]                 ; 0043cd1d
    IMUL EBX,EDI,0x11c                  ; 0043cd20
        ;   Label: LAB_0043cd20
    ADD EBX,ESI                         ; 0043cd26
    CMP EBX,ECX                         ; 0043cd28
    JZ 0x0043cd3c                       ; 0043cd2a
        ;   XREF to: 0043cd3c (CONDITIONAL_JUMP)  ; LAB_0043cd3c
    MOV EBP,dword ptr [ECX]             ; 0043cd2c
    MOV dword ptr [EBX],EBP             ; 0043cd2e
    MOV EBP,dword ptr [ECX + 0x4]       ; 0043cd30
    MOV dword ptr [EBX + 0x4],EBP       ; 0043cd33
    MOV EBP,dword ptr [ECX + 0x8]       ; 0043cd36
    MOV dword ptr [EBX + 0x8],EBP       ; 0043cd39
    MOV EBX,dword ptr [ESP + 0x16c]     ; 0043cd3c
        ;   Label: LAB_0043cd3c
    MOV dword ptr [EDX + 0x8],0x0       ; 0043cd43
    ADD EAX,0x11c                       ; 0043cd4a
    MOV EBP,dword ptr [EDX + 0x8]       ; 0043cd4f
    MOV dword ptr [EDX + 0x4],EBP       ; 0043cd52
    MOV EBP,dword ptr [EDX + 0x4]       ; 0043cd55
    MOV dword ptr [EDX],EBP             ; 0043cd58
    MOV dword ptr [EAX + 0xfffffeec],0x0 ; 0043cd5a
    ADD ECX,0x11c                       ; 0043cd64
    MOV dword ptr [EAX + 0xfffffef8],0x0 ; 0043cd6a
    INC EDI                             ; 0043cd74
    FLD float ptr [EAX + 0xfffffef8]    ; 0043cd75
    MOV EBP,dword ptr [EAX + 0xfffffeec] ; 0043cd7b
    MOV dword ptr [EAX + 0xfffffee8],EBP ; 0043cd81
    FST float ptr [EAX + 0xfffffef4]    ; 0043cd87
    MOV EBP,dword ptr [EAX + 0xfffffee8] ; 0043cd8d
    MOV dword ptr [EAX + 0xfffffee4],EBP ; 0043cd93
    FSTP float ptr [EAX + 0xfffffef0]   ; 0043cd99
    MOV EBP,dword ptr [EBX + 0x104]     ; 0043cd9f
    ADD EDX,0x11c                       ; 0043cda5
    CMP EDI,EBP                         ; 0043cdab
    JL 0x0043cd20                       ; 0043cdad
        ;   XREF to: 0043cd20 (CONDITIONAL_JUMP)  ; LAB_0043cd20
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043cdb3
        ;   Label: LAB_0043cdb3
    PUSH EAX                            ; 0043cdba
    CALL core_cloth.cpp_FUN_0043c8a0    ; 0043cdbb
        ;   XREF to: 0043c8a0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043c8a0(CCloth * this_ptr)
    ADD ESP,0x4                         ; 0043cdc0
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0043cdc3
    MOV ECX,dword ptr [EDX + 0x39ce8]   ; 0043cdca
    XOR EAX,EAX                         ; 0043cdd0
    TEST ECX,ECX                        ; 0043cdd2
    JLE 0x0043ce10                      ; 0043cdd4
        ;   XREF to: 0043ce10 (CONDITIONAL_JUMP)  ; LAB_0043ce10
    MOV EBX,dword ptr [ESP + 0x16c]     ; 0043cdd6
    MOV EBP,EDX                         ; 0043cddd
    MOV EDX,dword ptr [EBP + 0x39cec]   ; 0043cddf
        ;   Label: LAB_0043cddf
    IMUL EDX,EDX,0x11c                  ; 0043cde5
    ADD EDX,EBX                         ; 0043cdeb
    MOV dword ptr [EDX + 0x40c],0x1     ; 0043cded
    INC EAX                             ; 0043cdf7
    MOV ESI,dword ptr [EBX + 0x39ce8]   ; 0043cdf8
    ADD EBP,0x4                         ; 0043cdfe
    CMP EAX,ESI                         ; 0043ce01
    JL 0x0043cddf                       ; 0043ce03
        ;   XREF to: 0043cddf (CONDITIONAL_JUMP)  ; LAB_0043cddf
    LEA EAX,[EAX]                       ; 0043ce05
    LEA EDX,[EDX]                       ; 0043ce0b
    MOV EBX,EBX                         ; 0043ce0e
    MOV EDI,dword ptr [ESP + 0x178]     ; 0043ce10
        ;   Label: LAB_0043ce10
    TEST EDI,EDI                        ; 0043ce17
    JZ 0x0043d51e                       ; 0043ce19
        ;   XREF to: 0043d51e (CONDITIONAL_JUMP)  ; LAB_0043d51e
    PUSH EDI                            ; 0043ce1f
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0043ce20
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0043ce25
    PUSH EAX                            ; 0043ce28
    MOV EBX,EAX                         ; 0043ce29
    MOV dword ptr [ESP + 0xcc],EAX      ; 0043ce2b
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005487e0 ; 0043ce32
        ;   XREF to: 005487e0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005487e0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0043ce37
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043ce3a
    MOV EBP,EDI                         ; 0043ce41
    MOV EDX,dword ptr [EAX + 0x104]     ; 0043ce43
    XOR EBP,EDI                         ; 0043ce49
    TEST EDX,EDX                        ; 0043ce4b
    JLE 0x0043cf37                      ; 0043ce4d
        ;   XREF to: 0043cf37 (CONDITIONAL_JUMP)  ; LAB_0043cf37
    ADD EBX,0x2740                      ; 0043ce53
    LEA EDX,[EAX + 0x398]               ; 0043ce59
    MOV dword ptr [ESP + 0xcc],EBX      ; 0043ce5f
    XOR EBX,EBX                         ; 0043ce66
    LEA ECX,[EDX + 0xc0]                ; 0043ce68
    MOV dword ptr [ESP + 0x114],EBX     ; 0043ce6e
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0043ce75
        ;   Label: LAB_0043ce75
    FLD float ptr [ECX]                 ; 0043ce7c
    FADD float ptr [EAX]                ; 0043ce7e
    FSTP float ptr [ESP + 0x78]         ; 0043ce80
    FLD float ptr [ECX + 0x4]           ; 0043ce84
    FADD float ptr [EAX + 0x4]          ; 0043ce87
    LEA EDI,[ESP + 0x9c]                ; 0043ce8a
    FSTP float ptr [ESP + 0x7c]         ; 0043ce91
    FLD float ptr [ECX + 0x8]           ; 0043ce95
    FADD float ptr [EAX + 0x8]          ; 0043ce98
    LEA ESI,[ESP + 0x78]                ; 0043ce9b
    FSTP float ptr [ESP + 0x80]         ; 0043ce9f
    LEA EAX,[ESP + 0x9c]                ; 0043cea6
    MOVSD ES:EDI,ESI                    ; 0043cead
    MOVSD ES:EDI,ESI                    ; 0043ceae
    MOVSD ES:EDI,ESI                    ; 0043ceaf
    CMP EDX,EAX                         ; 0043ceb0
    JZ 0x0043ced1                       ; 0043ceb2
        ;   XREF to: 0043ced1 (CONDITIONAL_JUMP)  ; LAB_0043ced1
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0043ceb4
    MOV dword ptr [EDX],EAX             ; 0043cebb
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0043cebd
    MOV dword ptr [EDX + 0x4],EAX       ; 0043cec4
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0043cec7
    MOV dword ptr [EDX + 0x8],EAX       ; 0043cece
    MOV EBX,dword ptr [ESP + 0x16c]     ; 0043ced1
        ;   Label: LAB_0043ced1
    MOV ESI,dword ptr [ESP + 0x114]     ; 0043ced8
    MOV EAX,EDX                         ; 0043cedf
    MOV EBX,dword ptr [EBX + 0x10c]     ; 0043cee1
    ADD ECX,0x11c                       ; 0043cee7
    ADD EBX,ESI                         ; 0043ceed
    INC EBP                             ; 0043ceef
    FLD float ptr [EAX]                 ; 0043cef0
    FMUL float ptr [0x005dd3b0]         ; 0043cef2 | DAT_005dd3b0
    FISTP dword ptr [EBX]               ; 0043cef8
    FLD float ptr [EAX + 0x4]           ; 0043cefa
    FMUL float ptr [0x005dd3b0]         ; 0043cefd | DAT_005dd3b0
    FISTP dword ptr [EBX + 0x4]         ; 0043cf03
    FLD float ptr [EAX + 0x8]           ; 0043cf06
    FMUL float ptr [0x005dd3b0]         ; 0043cf09 | DAT_005dd3b0
    FISTP dword ptr [EBX + 0x8]         ; 0043cf0f
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043cf12
    ADD EDX,0x11c                       ; 0043cf19
    LEA EDI,[ESI + 0xc]                 ; 0043cf1f
    MOV EBX,dword ptr [EAX + 0x104]     ; 0043cf22
    MOV dword ptr [ESP + 0x114],EDI     ; 0043cf28
    CMP EBP,EBX                         ; 0043cf2f
    JL 0x0043ce75                       ; 0043cf31
        ;   XREF to: 0043ce75 (CONDITIONAL_JUMP)  ; LAB_0043ce75
    MOV ESI,dword ptr [ESP + 0x178]     ; 0043cf37
        ;   Label: LAB_0043cf37
    PUSH ESI                            ; 0043cf3e
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090 ; 0043cf3f
        ;   XREF to: 0054c090 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0043cf44
    PUSH ESI                            ; 0043cf47
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10 ; 0043cf48
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0043cf4d
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043cf50
    XOR EBP,EBP                         ; 0043cf57
    MOV EDX,dword ptr [EAX + 0x39ce8]   ; 0043cf59
    MOV dword ptr [ESP + 0x144],EBP     ; 0043cf5f
    TEST EDX,EDX                        ; 0043cf66
    JLE 0x0043d134                      ; 0043cf68
        ;   XREF to: 0043d134 (CONDITIONAL_JUMP)  ; LAB_0043d134
    LEA EAX,[ESI + 0xe80]               ; 0043cf6e
    MOV dword ptr [ESP + 0xe0],EAX      ; 0043cf74
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043cf7b
    ADD EAX,0x398                       ; 0043cf82
    MOV dword ptr [ESP + 0xd8],EAX      ; 0043cf87
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043cf8e
    MOV dword ptr [ESP + 0x124],EAX     ; 0043cf95
    MOV EAX,dword ptr [ESP + 0x124]     ; 0043cf9c
        ;   Label: LAB_0043cf9c
    IMUL EAX,dword ptr [EAX + 0x39cec],0x11c ; 0043cfa3
    MOV ECX,0x7149f2ca                  ; 0043cfad
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0043cfb2
    XOR EBX,EBX                         ; 0043cfb9
    ADD EDX,EAX                         ; 0043cfbb
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0043cfbd
    MOV dword ptr [ESP + 0xd4],ECX      ; 0043cfc4
    MOV dword ptr [ESP + 0x150],EBX     ; 0043cfcb
    MOV ESI,dword ptr [EAX + 0x2c]      ; 0043cfd2
    MOV dword ptr [ESP + 0xd0],EDX      ; 0043cfd5
    TEST ESI,ESI                        ; 0043cfdc
    JLE 0x0043d43a                      ; 0043cfde
        ;   XREF to: 0043d43a (CONDITIONAL_JUMP)  ; LAB_0043d43a
    MOV dword ptr [ESP + 0x120],EBX     ; 0043cfe4
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0043cfeb
        ;   Label: LAB_0043cfeb
    XOR EBX,EBX                         ; 0043cff2
    MOV EDX,dword ptr [ESP + 0x120]     ; 0043cff4
    MOV dword ptr [ESP + 0x3c],EBX      ; 0043cffb
    MOV EAX,dword ptr [EAX + 0x40]      ; 0043cfff
    MOV dword ptr [ESP + 0x40],EBX      ; 0043d002
    ADD EDX,EAX                         ; 0043d006
    MOV dword ptr [ESP + 0x44],EBX      ; 0043d008
    MOV dword ptr [ESP + 0xdc],EDX      ; 0043d00c
    LEA EBX,[EDX + 0x4]                 ; 0043d013
    LEA EAX,[EDX + 0x10]                ; 0043d016
    XOR EBP,EBP                         ; 0043d019
    MOV dword ptr [ESP + 0x118],EAX     ; 0043d01b
    MOV dword ptr [ESP + 0x11c],EDX     ; 0043d022
    MOV EDX,dword ptr [ESP + 0xdc]      ; 0043d029
        ;   Label: LAB_0043d029
    XOR EAX,EAX                         ; 0043d030
    MOV AL,byte ptr [EDX]               ; 0043d032
    CMP EBP,EAX                         ; 0043d034
    JGE 0x0043d385                      ; 0043d036
        ;   XREF to: 0043d385 (CONDITIONAL_JUMP)  ; LAB_0043d385
    MOV EDX,dword ptr [ESP + 0x11c]     ; 0043d03c
    XOR EAX,EAX                         ; 0043d043
    MOV AL,byte ptr [EDX + 0x1]         ; 0043d045
    IMUL EAX,EAX,0x30                   ; 0043d048
    ADD EAX,dword ptr [ESP + 0xe0]      ; 0043d04b
    PUSH EAX                            ; 0043d052
    MOV ECX,dword ptr [ESP + 0x11c]     ; 0043d053
    PUSH ECX                            ; 0043d05a
    LEA ESI,[ESP + 0x2c]                ; 0043d05b
    LEA EDI,[ESP + 0xb0]                ; 0043d05f
    CALL core_xform.cpp_FUN_00583260    ; 0043d066
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[ESP + 0x2c]                ; 0043d06b
    ADD ESP,0x8                         ; 0043d06f
    MOVSD ES:EDI,ESI                    ; 0043d072
    MOVSD ES:EDI,ESI                    ; 0043d073
    MOVSD ES:EDI,ESI                    ; 0043d074
    FLD float ptr [ESP + 0xa8]          ; 0043d075
    FMUL float ptr [EBX]                ; 0043d07c
    FLD float ptr [ESP + 0xac]          ; 0043d07e
    FXCH                                ; 0043d085
    FSTP float ptr [ESP]                ; 0043d087
    FMUL float ptr [EBX]                ; 0043d08a
    FLD float ptr [ESP + 0xb0]          ; 0043d08c
    FXCH                                ; 0043d093
    FSTP float ptr [ESP + 0x4]          ; 0043d095
    FMUL float ptr [EBX]                ; 0043d099
    ADD EBX,0x4                         ; 0043d09b
    INC EBP                             ; 0043d09e
    FLD float ptr [ESP + 0x3c]          ; 0043d09f
    FLD float ptr [ESP + 0x40]          ; 0043d0a3
    LEA EDI,[ESP + 0x48]                ; 0043d0a7
    MOV ESI,ESP                         ; 0043d0ab
    FXCH ST2                            ; 0043d0ad
    FSTP float ptr [ESP + 0x8]          ; 0043d0af
    MOVSD ES:EDI,ESI                    ; 0043d0b3
    MOVSD ES:EDI,ESI                    ; 0043d0b4
    MOVSD ES:EDI,ESI                    ; 0043d0b5
    FLD float ptr [ESP + 0x44]          ; 0043d0b6
    MOV ESI,dword ptr [ESP + 0x118]     ; 0043d0ba
    MOV EDI,dword ptr [ESP + 0x11c]     ; 0043d0c1
    FXCH                                ; 0043d0c8
    FADD float ptr [ESP + 0x48]         ; 0043d0ca
    FXCH ST2                            ; 0043d0ce
    FADD float ptr [ESP + 0x4c]         ; 0043d0d0
    FXCH                                ; 0043d0d4
    FADD float ptr [ESP + 0x50]         ; 0043d0d6
    FXCH ST2                            ; 0043d0da
    FSTP float ptr [ESP + 0x3c]         ; 0043d0dc
    FSTP float ptr [ESP + 0x40]         ; 0043d0e0
    FSTP float ptr [ESP + 0x44]         ; 0043d0e4
    ADD ESI,0xc                         ; 0043d0e8
    INC EDI                             ; 0043d0eb
    MOV dword ptr [ESP + 0x118],ESI     ; 0043d0ec
    MOV dword ptr [ESP + 0x11c],EDI     ; 0043d0f3
    JMP 0x0043d029                      ; 0043d0fa
        ;   XREF to: 0043d029 (UNCONDITIONAL_JUMP)  ; LAB_0043d029
    MOV EBX,dword ptr [ESP + 0x124]     ; 0043d0ff
        ;   Label: LAB_0043d0ff
    MOV ESI,dword ptr [ESP + 0x144]     ; 0043d106
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0043d10d
    ADD EBX,0x4                         ; 0043d114
    INC ESI                             ; 0043d117
    MOV EDI,dword ptr [EDX + 0x39ce8]   ; 0043d118
    MOV dword ptr [ESP + 0x124],EBX     ; 0043d11e
    MOV dword ptr [ESP + 0x144],ESI     ; 0043d125
    CMP ESI,EDI                         ; 0043d12c
    JL 0x0043cf9c                       ; 0043d12e
        ;   XREF to: 0043cf9c (CONDITIONAL_JUMP)  ; LAB_0043cf9c
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043d134
        ;   Label: LAB_0043d134
    MOV EBP,dword ptr [EAX + 0x37b4c]   ; 0043d13b
    XOR EBX,EBX                         ; 0043d141
    TEST EBP,EBP                        ; 0043d143
    JLE 0x0043d170                      ; 0043d145
        ;   XREF to: 0043d170 (CONDITIONAL_JUMP)  ; LAB_0043d170
    MOV EDI,dword ptr [ESP + 0x178]     ; 0043d147
    MOV EBP,dword ptr [ESP + 0x16c]     ; 0043d14e
    PUSH EDI                            ; 0043d155
        ;   Label: LAB_0043d155
    PUSH EBX                            ; 0043d156
    PUSH EBP                            ; 0043d157
    CALL core_cloth.cpp_CCloth_orientBoneToChild_FUN_0043d680 ; 0043d158
        ;   XREF to: 0043d680 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_orientBoneToChild_FUN_0043d680(CCloth * this_ptr, int bone_index, CDeformableModelInstance * model_ptr)
    INC EBX                             ; 0043d15d
    MOV EDX,dword ptr [EBP + 0x37b4c]   ; 0043d15e
    ADD ESP,0xc                         ; 0043d164
    CMP EBX,EDX                         ; 0043d167
    JL 0x0043d155                       ; 0043d169
        ;   XREF to: 0043d155 (CONDITIONAL_JUMP)  ; LAB_0043d155
    LEA EAX,[EAX]                       ; 0043d16b
    MOV ECX,ECX                         ; 0043d16e
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043d170
        ;   Label: LAB_0043d170
    XOR ECX,ECX                         ; 0043d177
    MOV EBX,dword ptr [EAX + 0x39ce8]   ; 0043d179
    MOV dword ptr [ESP + 0xc0],ECX      ; 0043d17f
    TEST EBX,EBX                        ; 0043d186
    JLE 0x0043d50e                      ; 0043d188
        ;   XREF to: 0043d50e (CONDITIONAL_JUMP)  ; LAB_0043d50e
    MOV EAX,dword ptr [ESP + 0x178]     ; 0043d18e
    ADD EAX,0xe80                       ; 0043d195
    MOV dword ptr [ESP + 0x104],EAX     ; 0043d19a
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043d1a1
    ADD EAX,0x398                       ; 0043d1a8
    MOV dword ptr [ESP + 0xf4],EAX      ; 0043d1ad
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043d1b4
    MOV dword ptr [ESP + 0x138],ECX     ; 0043d1bb
    MOV dword ptr [ESP + 0x13c],EAX     ; 0043d1c2
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0043d1c9
        ;   Label: LAB_0043d1c9
    IMUL EAX,dword ptr [EAX + 0x39cec],0x11c ; 0043d1d0
    MOV EDX,dword ptr [ESP + 0xf4]      ; 0043d1da
    XOR EBP,EBP                         ; 0043d1e1
    ADD EDX,EAX                         ; 0043d1e3
    MOV EAX,dword ptr [ESP + 0x138]     ; 0043d1e5
    MOV dword ptr [ESP + 0xf0],EDX      ; 0043d1ec
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0043d1f3
    MOV dword ptr [ESP + 0x140],EBP     ; 0043d1fa
    ADD EAX,EDX                         ; 0043d201
    MOV dword ptr [ESP + 0x130],EBP     ; 0043d203
    MOV dword ptr [ESP + 0x134],EAX     ; 0043d20a
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0043d211
        ;   Label: LAB_0043d211
    MOV ECX,dword ptr [ESP + 0x140]     ; 0043d218
    CMP ECX,dword ptr [EAX]             ; 0043d21f
    JGE 0x0043d4c6                      ; 0043d221
        ;   XREF to: 0043d4c6 (CONDITIONAL_JUMP)  ; LAB_0043d4c6
    MOV EBX,0x7149f2ca                  ; 0043d227
    MOV EAX,dword ptr [ESP + 0x130]     ; 0043d22c
    XOR ESI,ESI                         ; 0043d233
    MOV dword ptr [ESP + 0xfc],EBX      ; 0043d235
    MOV dword ptr [ESP + 0x14c],ESI     ; 0043d23c
    MOV dword ptr [ESP + 0x110],EAX     ; 0043d243
    MOV dword ptr [ESP + 0x12c],ESI     ; 0043d24a
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0043d251
        ;   Label: LAB_0043d251
    ADD EAX,dword ptr [ESP + 0x110]     ; 0043d258
    MOV EDX,dword ptr [ESP + 0x14c]     ; 0043d25f
    CMP EDX,dword ptr [EAX + 0x2c]      ; 0043d266
    JGE 0x0043d594                      ; 0043d269
        ;   XREF to: 0043d594 (CONDITIONAL_JUMP)  ; LAB_0043d594
    MOV EDX,dword ptr [ESP + 0x12c]     ; 0043d26f
    XOR EBP,EBP                         ; 0043d276
    MOV EAX,dword ptr [EAX + 0x40]      ; 0043d278
    MOV dword ptr [ESP + 0xc],EBP       ; 0043d27b
    ADD EDX,EAX                         ; 0043d27f
    MOV dword ptr [ESP + 0x10],EBP      ; 0043d281
    MOV dword ptr [ESP + 0x100],EDX     ; 0043d285
    LEA EBX,[EDX + 0x4]                 ; 0043d28c
    MOV dword ptr [ESP + 0x14],EBP      ; 0043d28f
    LEA EAX,[EDX + 0x10]                ; 0043d293
    MOV dword ptr [ESP + 0x154],EBP     ; 0043d296
    MOV dword ptr [ESP + 0x128],EAX     ; 0043d29d
    MOV EBP,EDX                         ; 0043d2a4
    MOV EDX,dword ptr [ESP + 0x100]     ; 0043d2a6
        ;   Label: LAB_0043d2a6
    XOR EAX,EAX                         ; 0043d2ad
    MOV ESI,dword ptr [ESP + 0x154]     ; 0043d2af
    MOV AL,byte ptr [EDX]               ; 0043d2b6
    CMP EAX,ESI                         ; 0043d2b8
    JLE 0x0043d5da                      ; 0043d2ba
        ;   XREF to: 0043d5da (CONDITIONAL_JUMP)  ; LAB_0043d5da
    XOR EAX,EAX                         ; 0043d2c0
    MOV AL,byte ptr [EBP + 0x1]         ; 0043d2c2
    IMUL EAX,EAX,0x30                   ; 0043d2c5
    ADD EAX,dword ptr [ESP + 0x104]     ; 0043d2c8
    PUSH EAX                            ; 0043d2cf
    MOV ECX,dword ptr [ESP + 0x12c]     ; 0043d2d0
    PUSH ECX                            ; 0043d2d7
    LEA ESI,[ESP + 0x98]                ; 0043d2d8
    LEA EDI,[ESP + 0x5c]                ; 0043d2df
    CALL core_xform.cpp_FUN_00583260    ; 0043d2e3
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[ESP + 0x98]                ; 0043d2e8
    ADD ESP,0x8                         ; 0043d2ef
    MOVSD ES:EDI,ESI                    ; 0043d2f2
    MOVSD ES:EDI,ESI                    ; 0043d2f3
    MOVSD ES:EDI,ESI                    ; 0043d2f4
    FLD float ptr [ESP + 0x54]          ; 0043d2f5
    FMUL float ptr [EBX]                ; 0043d2f9
    FLD float ptr [ESP + 0x58]          ; 0043d2fb
    FXCH                                ; 0043d2ff
    FSTP float ptr [ESP + 0x84]         ; 0043d301
    FMUL float ptr [EBX]                ; 0043d308
    FLD float ptr [ESP + 0x5c]          ; 0043d30a
    FXCH                                ; 0043d30e
    FSTP float ptr [ESP + 0x88]         ; 0043d310
    FMUL float ptr [EBX]                ; 0043d317
    INC EBP                             ; 0043d319
    ADD EBX,0x4                         ; 0043d31a
    FLD float ptr [ESP + 0xc]           ; 0043d31d
    FLD float ptr [ESP + 0x10]          ; 0043d321
    LEA EDI,[ESP + 0x60]                ; 0043d325
    LEA ESI,[ESP + 0x84]                ; 0043d329
    FXCH ST2                            ; 0043d330
    FSTP float ptr [ESP + 0x8c]         ; 0043d332
    MOVSD ES:EDI,ESI                    ; 0043d339
    MOVSD ES:EDI,ESI                    ; 0043d33a
    MOVSD ES:EDI,ESI                    ; 0043d33b
    FLD float ptr [ESP + 0x14]          ; 0043d33c
    MOV ESI,dword ptr [ESP + 0x128]     ; 0043d340
    MOV EDI,dword ptr [ESP + 0x154]     ; 0043d347
    FXCH                                ; 0043d34e
    FADD float ptr [ESP + 0x60]         ; 0043d350
    FXCH ST2                            ; 0043d354
    FADD float ptr [ESP + 0x64]         ; 0043d356
    FXCH                                ; 0043d35a
    FADD float ptr [ESP + 0x68]         ; 0043d35c
    FXCH ST2                            ; 0043d360
    FSTP float ptr [ESP + 0xc]          ; 0043d362
    FSTP float ptr [ESP + 0x10]         ; 0043d366
    FSTP float ptr [ESP + 0x14]         ; 0043d36a
    ADD ESI,0xc                         ; 0043d36e
    INC EDI                             ; 0043d371
    MOV dword ptr [ESP + 0x128],ESI     ; 0043d372
    MOV dword ptr [ESP + 0x154],EDI     ; 0043d379
    JMP 0x0043d2a6                      ; 0043d380
        ;   XREF to: 0043d2a6 (UNCONDITIONAL_JUMP)  ; LAB_0043d2a6
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0043d385
        ;   Label: LAB_0043d385
    FLD float ptr [EAX]                 ; 0043d38c
    FSUB float ptr [ESP + 0x3c]         ; 0043d38e
    FSTP float ptr [ESP + 0xb4]         ; 0043d392
    FLD float ptr [EAX + 0x4]           ; 0043d399
    FSUB float ptr [ESP + 0x40]         ; 0043d39c
    LEA EDI,[ESP + 0x6c]                ; 0043d3a0
    FSTP float ptr [ESP + 0xb8]         ; 0043d3a4
    FLD float ptr [EAX + 0x8]           ; 0043d3ab
    FSUB float ptr [ESP + 0x44]         ; 0043d3ae
    LEA ESI,[ESP + 0xb4]                ; 0043d3b2
    FSTP float ptr [ESP + 0xbc]         ; 0043d3b9
    MOVSD ES:EDI,ESI                    ; 0043d3c0
    MOVSD ES:EDI,ESI                    ; 0043d3c1
    MOVSD ES:EDI,ESI                    ; 0043d3c2
    FLD float ptr [ESP + 0x70]          ; 0043d3c3
    FMUL ST0                            ; 0043d3c7
    FLD float ptr [ESP + 0x6c]          ; 0043d3c9
    FMUL ST0                            ; 0043d3cd
    FADDP                               ; 0043d3cf
    FLD float ptr [ESP + 0x74]          ; 0043d3d1
    FMUL ST0                            ; 0043d3d5
    FADDP                               ; 0043d3d7
    FST float ptr [ESP + 0xec]          ; 0043d3d9
    FCOMP float ptr [ESP + 0xd4]        ; 0043d3e0
    FNSTSW AX                           ; 0043d3e7
    SAHF                                ; 0043d3e9
    JNC 0x0043d408                      ; 0043d3ea
        ;   XREF to: 0043d408 (CONDITIONAL_JUMP)  ; LAB_0043d408
    MOV EAX,dword ptr [ESP + 0xec]      ; 0043d3ec
    MOV dword ptr [ESP + 0xd4],EAX      ; 0043d3f3
    MOV EAX,dword ptr [ESP + 0x150]     ; 0043d3fa
    MOV dword ptr [ESP + 0xe4],EAX      ; 0043d401
    MOV ESI,dword ptr [ESP + 0x120]     ; 0043d408
        ;   Label: LAB_0043d408
    MOV EDI,dword ptr [ESP + 0x150]     ; 0043d40f
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0043d416
    ADD ESI,0x34                        ; 0043d41d
    INC EDI                             ; 0043d420
    MOV EBP,dword ptr [EDX + 0x2c]      ; 0043d421
    MOV dword ptr [ESP + 0x120],ESI     ; 0043d424
    MOV dword ptr [ESP + 0x150],EDI     ; 0043d42b
    CMP EDI,EBP                         ; 0043d432
    JL 0x0043cfeb                       ; 0043d434
        ;   XREF to: 0043cfeb (CONDITIONAL_JUMP)  ; LAB_0043cfeb
    IMUL EDI,dword ptr [ESP + 0xe4],0x34 ; 0043d43a
        ;   Label: LAB_0043d43a
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0043d442
    MOV EAX,dword ptr [EAX + 0x40]      ; 0043d449
    ADD EDI,EAX                         ; 0043d44c
    XOR EAX,EAX                         ; 0043d44e
    MOV EDX,dword ptr [ESP + 0xd0]      ; 0043d450
    MOV AL,byte ptr [EDI]               ; 0043d457
    XOR EBP,EBP                         ; 0043d459
    MOV dword ptr [EDX + 0xdc],EAX      ; 0043d45b
    TEST EAX,EAX                        ; 0043d461
    JLE 0x0043d0ff                      ; 0043d463
        ;   XREF to: 0043d0ff (CONDITIONAL_JUMP)  ; LAB_0043d0ff
    LEA EBX,[EDX + 0xec]                ; 0043d469
    LEA EAX,[EDI + 0x10]                ; 0043d46f
    MOV ESI,dword ptr [ESP + 0xd0]      ; 0043d472
    MOV EDX,EDI                         ; 0043d479
    XOR ECX,ECX                         ; 0043d47b
        ;   Label: LAB_0043d47b
    MOV CL,byte ptr [EDX + 0x1]         ; 0043d47d
    MOV dword ptr [ESI + 0xe0],ECX      ; 0043d480
    CMP EBX,EAX                         ; 0043d486
    JZ 0x0043d49a                       ; 0043d488
        ;   XREF to: 0043d49a (CONDITIONAL_JUMP)  ; LAB_0043d49a
    MOV ECX,dword ptr [EAX]             ; 0043d48a
    MOV dword ptr [EBX],ECX             ; 0043d48c
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043d48e
    MOV dword ptr [EBX + 0x4],ECX       ; 0043d491
    MOV ECX,dword ptr [EAX + 0x8]       ; 0043d494
    MOV dword ptr [EBX + 0x8],ECX       ; 0043d497
    FLD float ptr [EDI + 0x4]           ; 0043d49a
        ;   Label: LAB_0043d49a
    MOV ECX,dword ptr [ESP + 0xd0]      ; 0043d49d
    ADD EBX,0xc                         ; 0043d4a4
    ADD EAX,0xc                         ; 0043d4a7
    INC EDX                             ; 0043d4aa
    ADD ESI,0x4                         ; 0043d4ab
    ADD EDI,0x4                         ; 0043d4ae
    INC EBP                             ; 0043d4b1
    FSTP float ptr [ESI + 0x10c]        ; 0043d4b2
    CMP EBP,dword ptr [ECX + 0xdc]      ; 0043d4b8
    JGE 0x0043d0ff                      ; 0043d4be
        ;   XREF to: 0043d0ff (CONDITIONAL_JUMP)  ; LAB_0043d0ff
    JMP 0x0043d47b                      ; 0043d4c4
        ;   XREF to: 0043d47b (UNCONDITIONAL_JUMP)  ; LAB_0043d47b
    MOV EBP,dword ptr [ESP + 0x138]     ; 0043d4c6
        ;   Label: LAB_0043d4c6
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0043d4cd
    MOV EDX,dword ptr [ESP + 0xc0]      ; 0043d4d4
    ADD EAX,0x4                         ; 0043d4db
    INC EDX                             ; 0043d4de
    MOV dword ptr [ESP + 0x13c],EAX     ; 0043d4df
    MOV dword ptr [ESP + 0xc0],EDX      ; 0043d4e6
    MOV EAX,EDX                         ; 0043d4ed
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0043d4ef
    ADD EBP,0x4                         ; 0043d4f6
    MOV ECX,dword ptr [EDX + 0x39ce8]   ; 0043d4f9
    MOV dword ptr [ESP + 0x138],EBP     ; 0043d4ff
    CMP EAX,ECX                         ; 0043d506
    JL 0x0043d1c9                       ; 0043d508
        ;   XREF to: 0043d1c9 (CONDITIONAL_JUMP)  ; LAB_0043d1c9
    MOV EBX,dword ptr [ESP + 0x178]     ; 0043d50e
        ;   Label: LAB_0043d50e
    PUSH EBX                            ; 0043d515
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110 ; 0043d516
        ;   XREF to: 0054c110 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0043d51b
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0043d51e
        ;   Label: LAB_0043d51e
    MOV EBP,dword ptr [EDX + 0x104]     ; 0043d525
    XOR EAX,EAX                         ; 0043d52b
    TEST EBP,EBP                        ; 0043d52d
    JLE 0x0043d560                      ; 0043d52f
        ;   XREF to: 0043d560 (CONDITIONAL_JUMP)  ; LAB_0043d560
    MOV ECX,dword ptr [ESP + 0x16c]     ; 0043d531
    MOV dword ptr [EDX + 0x470],0xffffffff ; 0043d538
        ;   Label: LAB_0043d538
    INC EAX                             ; 0043d542
    MOV EBX,dword ptr [ECX + 0x104]     ; 0043d543
    ADD EDX,0x11c                       ; 0043d549
    CMP EAX,EBX                         ; 0043d54f
    JL 0x0043d538                       ; 0043d551
        ;   XREF to: 0043d538 (CONDITIONAL_JUMP)  ; LAB_0043d538
    LEA EAX,[EAX]                       ; 0043d553
    LEA EDX,[EDX]                       ; 0043d559
    NOP                                 ; 0043d55f
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0043d560
        ;   Label: LAB_0043d560
    MOV dword ptr [EAX + 0x3ab2c],0x0   ; 0043d567
    MOV EDX,dword ptr [EAX + 0x3ab2c]   ; 0043d571
    MOV dword ptr [EAX + 0x3ab28],EDX   ; 0043d577
    MOV EDX,dword ptr [EAX + 0x3ab28]   ; 0043d57d
    MOV dword ptr [EAX + 0x3ab24],EDX   ; 0043d583
    ADD ESP,0x158                       ; 0043d589
    POP EBP                             ; 0043d58f
    POP EDI                             ; 0043d590
    POP ESI                             ; 0043d591
    POP EBX                             ; 0043d592
    RET                                 ; 0043d593
    MOV EBX,dword ptr [ESP + 0x130]     ; 0043d594
        ;   Label: LAB_0043d594
    MOV EDX,dword ptr [ESP + 0x134]     ; 0043d59b
    MOV EDI,dword ptr [ESP + 0x140]     ; 0043d5a2
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0043d5a9
    ADD EBX,0x4                         ; 0043d5b0
    LEA ESI,[EDX + 0x190]               ; 0043d5b3
    INC EDI                             ; 0043d5b9
    MOV dword ptr [EDX + 0x39e7c],EAX   ; 0043d5ba
    MOV dword ptr [ESP + 0x130],EBX     ; 0043d5c0
    MOV dword ptr [ESP + 0x134],ESI     ; 0043d5c7
    MOV dword ptr [ESP + 0x140],EDI     ; 0043d5ce
    JMP 0x0043d211                      ; 0043d5d5
        ;   XREF to: 0043d211 (UNCONDITIONAL_JUMP)  ; LAB_0043d211
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0043d5da
        ;   Label: LAB_0043d5da
    FLD float ptr [EAX]                 ; 0043d5e1
    FSUB float ptr [ESP + 0xc]          ; 0043d5e3
    FSTP float ptr [ESP + 0x18]         ; 0043d5e7
    FLD float ptr [EAX + 0x4]           ; 0043d5eb
    FSUB float ptr [ESP + 0x10]         ; 0043d5ee
    LEA EDI,[ESP + 0x30]                ; 0043d5f2
    FSTP float ptr [ESP + 0x1c]         ; 0043d5f6
    FLD float ptr [EAX + 0x8]           ; 0043d5fa
    FSUB float ptr [ESP + 0x14]         ; 0043d5fd
    LEA ESI,[ESP + 0x18]                ; 0043d601
    FSTP float ptr [ESP + 0x20]         ; 0043d605
    MOVSD ES:EDI,ESI                    ; 0043d609
    MOVSD ES:EDI,ESI                    ; 0043d60a
    MOVSD ES:EDI,ESI                    ; 0043d60b
    FLD float ptr [ESP + 0x34]          ; 0043d60c
    FMUL ST0                            ; 0043d610
    FLD float ptr [ESP + 0x30]          ; 0043d612
    FMUL ST0                            ; 0043d616
    FADDP                               ; 0043d618
    FLD float ptr [ESP + 0x38]          ; 0043d61a
    FMUL ST0                            ; 0043d61e
    FADDP                               ; 0043d620
    FST float ptr [ESP + 0x10c]         ; 0043d622
    FCOMP float ptr [ESP + 0xfc]        ; 0043d629
    FNSTSW AX                           ; 0043d630
    SAHF                                ; 0043d632
    JNC 0x0043d651                      ; 0043d633
        ;   XREF to: 0043d651 (CONDITIONAL_JUMP)  ; LAB_0043d651
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0043d635
    MOV dword ptr [ESP + 0xfc],EAX      ; 0043d63c
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0043d643
    MOV dword ptr [ESP + 0xf8],EAX      ; 0043d64a
    MOV EBP,dword ptr [ESP + 0x14c]     ; 0043d651
        ;   Label: LAB_0043d651
    MOV EDI,dword ptr [ESP + 0x12c]     ; 0043d658
    INC EBP                             ; 0043d65f
    ADD EDI,0x34                        ; 0043d660
    MOV dword ptr [ESP + 0x14c],EBP     ; 0043d663
    MOV dword ptr [ESP + 0x12c],EDI     ; 0043d66a
    JMP 0x0043d251                      ; 0043d671
        ;   XREF to: 0043d251 (UNCONDITIONAL_JUMP)  ; LAB_0043d251

