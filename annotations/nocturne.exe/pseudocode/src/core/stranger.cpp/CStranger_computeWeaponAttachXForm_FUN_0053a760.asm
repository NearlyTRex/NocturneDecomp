; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_stranger_cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760(int param_1,CDemonActor *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0xd64]:4  local_d64
; undefined        Stack[-0xd5c]:1  local_d5c
; undefined        Stack[-0xd2c]:1  local_d2c
; undefined        Stack[-0xcfc]:1  local_cfc
; undefined        Stack[-0xccc]:1  local_ccc
; undefined        Stack[-0xc9c]:1  local_c9c
; undefined        Stack[-0xc6c]:1  local_c6c
; undefined        Stack[-0xc3c]:1  local_c3c
; undefined        Stack[-0xc0c]:1  local_c0c
; undefined        Stack[-0xbdc]:1  local_bdc
; undefined        Stack[-0xbac]:1  local_bac
; undefined        Stack[-0xb7c]:1  local_b7c
; undefined        Stack[-0xb4c]:1  local_b4c
; undefined        Stack[-0xb1c]:1  local_b1c
; undefined        Stack[-0xaec]:1  local_aec
; undefined        Stack[-0xabc]:1  local_abc
; undefined        Stack[-0xa8c]:1  local_a8c
; undefined        Stack[-0xa5c]:1  local_a5c
; undefined4       Stack[-0xa50]:4  local_a50
; undefined4       Stack[-0xa40]:4  local_a40
; undefined4       Stack[-0xa30]:4  local_a30
; undefined        Stack[-0xa2c]:1  local_a2c
; undefined        Stack[-0x9fc]:1  local_9fc
; undefined        Stack[-0x9cc]:1  local_9cc
; undefined        Stack[-0x99c]:1  local_99c
; undefined        Stack[-0x96c]:1  local_96c
; undefined        Stack[-0x93c]:1  local_93c
; undefined        Stack[-0x90c]:1  local_90c
; undefined        Stack[-0x8dc]:1  local_8dc
; undefined        Stack[-0x8ac]:1  local_8ac
; undefined        Stack[-0x87c]:1  local_87c
; undefined        Stack[-0x84c]:1  local_84c
; undefined        Stack[-0x81c]:1  local_81c
; undefined        Stack[-0x7ec]:1  local_7ec
; undefined        Stack[-0x7bc]:1  local_7bc
; undefined        Stack[-0x78c]:1  local_78c
; undefined        Stack[-0x75c]:1  local_75c
; undefined        Stack[-0x72c]:1  local_72c
; undefined        Stack[-0x6fc]:1  local_6fc
; undefined        Stack[-0x6cc]:1  local_6cc
; undefined        Stack[-0x69c]:1  local_69c
; undefined        Stack[-0x66c]:1  local_66c
; undefined        Stack[-0x63c]:1  local_63c
; undefined        Stack[-0x60c]:1  local_60c
; undefined        Stack[-0x5dc]:1  local_5dc
; undefined        Stack[-0x5ac]:1  local_5ac
; undefined        Stack[-0x57c]:1  local_57c
; undefined        Stack[-0x54c]:1  local_54c
; undefined        Stack[-0x51c]:1  local_51c
; undefined        Stack[-0x4ec]:1  local_4ec
; undefined        Stack[-0x4bc]:1  local_4bc
; undefined        Stack[-0x48c]:1  local_48c
; undefined        Stack[-0x45c]:1  local_45c
; undefined        Stack[-0x42c]:1  local_42c
; undefined        Stack[-0x3fc]:1  local_3fc
; undefined        Stack[-0x3cc]:1  local_3cc
; undefined        Stack[-0x39c]:1  local_39c
; undefined        Stack[-0x36c]:1  local_36c
; undefined        Stack[-0x33c]:1  local_33c
; undefined        Stack[-0x30c]:1  local_30c
; undefined        Stack[-0x2dc]:1  local_2dc
; undefined        Stack[-0x2ac]:1  local_2ac
; undefined4       Stack[-0x2a0]:4  local_2a0
; undefined4       Stack[-0x290]:4  local_290
; undefined4       Stack[-0x280]:4  local_280
; undefined        Stack[-0x27c]:1  local_27c
; undefined        Stack[-0x24c]:1  local_24c
; undefined4       Stack[-0x21c]:4  local_21c
; undefined4       Stack[-0x218]:4  local_218
; undefined4       Stack[-0x214]:4  local_214
; undefined4       Stack[-0x210]:4  local_210
; undefined4       Stack[-0x20c]:4  local_20c
; undefined4       Stack[-0x208]:4  local_208
; undefined        Stack[-0x204]:1  local_204
; undefined4       Stack[-0x200]:4  local_200
; undefined4       Stack[-0x1f4]:4  local_1f4
; undefined4       Stack[-0x1ec]:4  local_1ec
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  local_1d4
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined4       Stack[-0x1cc]:4  local_1cc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined4       Stack[-0x1bc]:4  local_1bc
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined4       Stack[-0x1b4]:4  local_1b4
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
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
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined        Stack[-0x114]:1  local_114
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
; undefined        Stack[-0x90]:1  local_90
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x78]:1  local_78
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
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined        Stack[-0xc]:1  local_c
;
; XREF[2]:
;   core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0053a660 at 0053a6b6
;   core_stranger.cpp_FUN_0053f210 at 0053f236
;
; Referenced Globals:
;   TerminatedCString s_core_stranger_cpp_0059596f
;   TerminatedCString s_Don_t_know_how_to_carry_00595984
;   float FLOAT_005959a7 = 0.5
;   double DOUBLE_005959af = 0.700000000000000
;   double DOUBLE_005959b7 = 0.300000000000000
;   float FLOAT_005959bf = 0.3330000
;   undefined4 g_CLightActorActorType_00764a9c.name_hash
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_02dc9f84
;   undefined4 DAT_02dc9f88
;   undefined4 DAT_02dd1184
;   undefined4 g_CWeaponActorType_02ddf970.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
;   core_main.c_FUN_004c8440
;   core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_00534fc0
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_buildRotationX_FUN_0055c730
;   core_xform.cpp_buildRotationY_FUN_0055c7b0
;   core_xform.cpp_lerpMatrix3x4_FUN_0055cc30
;   core_xform.cpp_matrixToEulerAngles_FUN_0055b180
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;   core_xform.cpp_setIdentityMatrix3x4_FUN_0055abf0
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;   core_xform.cpp_transformVector3x4InPlace_FUN_0055a910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a760
        ;   Label: core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760
    PUSH EDI                            ; 0053a761
    PUSH EBP                            ; 0053a762
    MOV EBP,ESP                         ; 0053a763
    SUB ESP,0xd50                       ; 0053a765
    SUB EBP,0x7a                        ; 0053a76b
    MOV EBX,dword ptr [EBP + 0x8a]      ; 0053a76e
    MOV dword ptr [EBP + 0x6e],ESI      ; 0053a774
    MOV EDX,dword ptr [EBP + 0x92]      ; 0053a777
    MOV EAX,EDX                         ; 0053a77d
    SHL EAX,0x4                         ; 0053a77f
    ADD EAX,EDX                         ; 0053a782
    MOV EDX,dword ptr [0x02ddf9a8]      ; 0053a784 | g_CWeaponActorType_02ddf970.name_hash
    PUSH EDX                            ; 0053a78a
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0053a78b
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x24a4] ; 0053a791
    PUSH ECX                            ; 0053a798
    LEA EDI,[EBX + 0xfd0]               ; 0053a799
    MOV dword ptr [EBP + 0x72],EAX      ; 0053a79f
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0053a7a2
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0053a7a7
    TEST EAX,EAX                        ; 0053a7aa
    JZ 0x0053af46                       ; 0053a7ac
        ;   XREF to: 0053af46 (CONDITIONAL_JUMP)  ; LAB_0053af46
    MOV EDX,dword ptr [EBP + 0x72]      ; 0053a7b2
    LEA ESI,[EDX*0x4 + 0x0]             ; 0053a7b5
    SUB ESI,EDX                         ; 0053a7bc
    SHL ESI,0x4                         ; 0053a7be
    MOV EDX,dword ptr [EAX + 0x2d8]     ; 0053a7c1
    ADD ESI,EDI                         ; 0053a7c7
    CMP EDX,0x1                         ; 0053a7c9
    JZ 0x0053a912                       ; 0053a7cc
        ;   XREF to: 0053a912 (CONDITIONAL_JUMP)  ; LAB_0053a912
    CMP EDX,0x2                         ; 0053a7d2
    JZ 0x0053aa2b                       ; 0053a7d5
        ;   XREF to: 0053aa2b (CONDITIONAL_JUMP)  ; LAB_0053aa2b
    CMP EDX,0x4                         ; 0053a7db
    JZ 0x0053ab50                       ; 0053a7de
        ;   XREF to: 0053ab50 (CONDITIONAL_JUMP)  ; LAB_0053ab50
    CMP EDX,0x3                         ; 0053a7e4
    JZ 0x0053ac5d                       ; 0053a7e7
        ;   XREF to: 0053ac5d (CONDITIONAL_JUMP)  ; LAB_0053ac5d
    CMP EDX,0x5                         ; 0053a7ed
    JZ 0x0053accd                       ; 0053a7f0
        ;   XREF to: 0053accd (CONDITIONAL_JUMP)  ; LAB_0053accd
    CMP EDX,0x7                         ; 0053a7f6
    JZ 0x0053ad4d                       ; 0053a7f9
        ;   XREF to: 0053ad4d (CONDITIONAL_JUMP)  ; LAB_0053ad4d
    CMP dword ptr [EBP + 0x92],0x0      ; 0053a7ff
    JNZ 0x0053ae5a                      ; 0053a806
        ;   XREF to: 0053ae5a (CONDITIONAL_JUMP)  ; LAB_0053ae5a
    PUSH 0x2dd1184                      ; 0053a80c | DAT_02dd1184
    PUSH 0x2dc9f40                      ; 0053a811
    LEA EAX,[EBP + 0xfffff92a]          ; 0053a816
    PUSH EAX                            ; 0053a81c
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0053a81d
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    ADD ESP,0xc                         ; 0053a822
    PUSH ESI                            ; 0053a825
    LEA EAX,[EBP + 0xfffff92a]          ; 0053a826
    PUSH EAX                            ; 0053a82c
    LEA ESI,[EBP + 0xfffffa1a]          ; 0053a82d
    PUSH 0x3fc90fdb                     ; 0053a833
    LEA EDI,[EBP + 0xfffff41a]          ; 0053a838
    CALL core_xform.cpp_buildRotationX_FUN_0055c730 ; 0053a83e
        ;   XREF to: 0055c730 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildRotationX_FUN_0055c730()
    MOV ECX,0xc                         ; 0053a843
    ADD ESP,0x4                         ; 0053a848
    LEA EAX,[EBP + 0xfffff41a]          ; 0053a84b
    LEA ESI,[EBP + 0xfffffa1a]          ; 0053a851
    PUSH EAX                            ; 0053a857
    MOVSD.REP ES:EDI,ESI                ; 0053a858
    PUSH 0xbfc90fdb                     ; 0053a85a
    LEA ESI,[EBP + 0xfffff4da]          ; 0053a85f
    LEA EDI,[EBP + 0xfffff3ea]          ; 0053a865
    CALL core_xform.cpp_buildRotationY_FUN_0055c7b0 ; 0053a86b
        ;   XREF to: 0055c7b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildRotationY_FUN_0055c7b0()
    MOV ECX,0xc                         ; 0053a870
    LEA ESI,[EBP + 0xfffff4da]          ; 0053a875
    LEA EAX,[EBP + 0xfffff3ea]          ; 0053a87b
    ADD ESP,0x4                         ; 0053a881
    MOVSD.REP ES:EDI,ESI                ; 0053a884
    PUSH EAX                            ; 0053a886
    LEA ESI,[EBP + 0xfffff50a]          ; 0053a887
    LEA EDI,[EBP + 0xfffff98a]          ; 0053a88d
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0053a893
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 0053a898
    LEA ESI,[EBP + 0xfffff50a]          ; 0053a89d
    LEA EAX,[EBP + 0xfffff98a]          ; 0053a8a3
    ADD ESP,0x8                         ; 0053a8a9
    MOVSD.REP ES:EDI,ESI                ; 0053a8ac
    PUSH EAX                            ; 0053a8ae
    LEA ESI,[EBP + 0xfffff53a]          ; 0053a8af
    LEA EDI,[EBP + 0xfffff9ea]          ; 0053a8b5
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0053a8bb
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 0053a8c0
    LEA ESI,[EBP + 0xfffff53a]          ; 0053a8c5
    LEA EAX,[EBP + 0xfffff9ea]          ; 0053a8cb
    ADD ESP,0x8                         ; 0053a8d1
    MOVSD.REP ES:EDI,ESI                ; 0053a8d4
    PUSH EAX                            ; 0053a8d6
    LEA ESI,[EBP + 0xfffffada]          ; 0053a8d7
    LEA EDI,[EBP + 0xfffff65a]          ; 0053a8dd
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0053a8e3
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 0053a8e8
    LEA ESI,[EBP + 0xfffffada]          ; 0053a8ed
    ADD ESP,0x8                         ; 0053a8f3
        ;   Label: LAB_0053a8f3
    MOVSD.REP ES:EDI,ESI                ; 0053a8f6
        ;   Label: LAB_0053a8f6
    MOV ECX,0xc                         ; 0053a8f8
    MOV EDI,dword ptr [EBP + 0x6e]      ; 0053a8fd
    LEA ESI,[EBP + 0xfffff65a]          ; 0053a900
    MOVSD.REP ES:EDI,ESI                ; 0053a906
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0053a908
    LEA ESP,[EBP + 0x7a]                ; 0053a90b
    POP EBP                             ; 0053a90e
    POP EDI                             ; 0053a90f
    POP EBX                             ; 0053a910
    RET                                 ; 0053a911
    MOV EDI,0x3e44330d                  ; 0053a912
        ;   Label: LAB_0053a912
    MOV EAX,0x3f7838d2                  ; 0053a917
    MOV EDX,0x40131412                  ; 0053a91c
    MOV ECX,0x3f0a1c04                  ; 0053a921
    MOV dword ptr [EBP + -0x1a],EAX     ; 0053a926
    LEA EAX,[EBP + -0x22]               ; 0053a929
    MOV dword ptr [EBP + -0x22],EDI     ; 0053a92c
    PUSH EAX                            ; 0053a92f
    MOV EAX,0xbed321a3                  ; 0053a930
    MOV dword ptr [EBP + -0x1e],EDX     ; 0053a935
    MOV dword ptr [EBP + 0xfffffea2],EAX ; 0053a938
    LEA EAX,[EBP + 0xfffffe9a]          ; 0053a93e
    MOV dword ptr [EBP + 0xfffffe9a],ECX ; 0053a944
    PUSH EAX                            ; 0053a94a
    LEA EAX,[EBP + 0xfffff80a]          ; 0053a94b
    MOV EDI,0xbe7183f9                  ; 0053a951
    PUSH EAX                            ; 0053a956
    MOV dword ptr [EBP + 0xfffffe9e],EDI ; 0053a957
    MOV EDI,0x3f6f2b67                  ; 0053a95d
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0053a962
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    MOV EDX,0xbed430d3                  ; 0053a967
    MOV ECX,0x3feb40a3                  ; 0053a96c
    LEA EAX,[EBP + 0x56]                ; 0053a971
    ADD ESP,0xc                         ; 0053a974
    MOV dword ptr [EBP + 0x5a],EDI      ; 0053a977
    MOV dword ptr [EBP + 0x56],EDX      ; 0053a97a
    PUSH EAX                            ; 0053a97d
    MOV EAX,0x3ece4b88                  ; 0053a97e
    MOV dword ptr [EBP + 0x5e],ECX      ; 0053a983
    MOV dword ptr [EBP + 0xfffffed6],EAX ; 0053a986
    LEA EAX,[EBP + 0xfffffed6]          ; 0053a98c
    MOV EDX,0x3dc29521                  ; 0053a992
    PUSH EAX                            ; 0053a997
    LEA EAX,[EBP + 0xfffff9ba]          ; 0053a998
    MOV ECX,0x3e85d4e9                  ; 0053a99e
    PUSH EAX                            ; 0053a9a3
    MOV dword ptr [EBP + 0xfffffeda],EDX ; 0053a9a4
    MOV dword ptr [EBP + 0xfffffede],ECX ; 0053a9aa
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0053a9b0
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    ADD ESP,0xc                         ; 0053a9b5
    PUSH ESI                            ; 0053a9b8
    PUSH 0x3                            ; 0053a9b9
    PUSH EBX                            ; 0053a9bb
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0 ; 0053a9bc
        ;   XREF to: 0042a9d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0()
    MOV dword ptr [EBP + 0x76],EAX      ; 0053a9c1
    ADD ESP,0x8                         ; 0053a9c4
    FLD float ptr [EBP + 0x76]          ; 0053a9c7
    SUB ESP,0x4                         ; 0053a9ca
    FLD1                                ; 0053a9cd
    FSUBRP                              ; 0053a9cf
    LEA EAX,[EBP + 0xfffff9ba]          ; 0053a9d1
    FSTP float ptr [ESP]                ; 0053a9d7
    PUSH EAX                            ; 0053a9da
    LEA EAX,[EBP + 0xfffff80a]          ; 0053a9db
    PUSH EAX                            ; 0053a9e1
    LEA ESI,[EBP + 0xfffffb6a]          ; 0053a9e2
    LEA EDI,[EBP + 0xfffff5fa]          ; 0053a9e8
    CALL core_xform.cpp_lerpMatrix3x4_FUN_0055cc30 ; 0053a9ee
        ;   XREF to: 0055cc30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_lerpMatrix3x4_FUN_0055cc30()
    MOV ECX,0xc                         ; 0053a9f3
    LEA ESI,[EBP + 0xfffffb6a]          ; 0053a9f8
    LEA EAX,[EBP + 0xfffff5fa]          ; 0053a9fe
    ADD ESP,0xc                         ; 0053aa04
    MOVSD.REP ES:EDI,ESI                ; 0053aa07
    PUSH EAX                            ; 0053aa09
    LEA ESI,[EBP + 0xfffffc8a]          ; 0053aa0a
    LEA EDI,[EBP + 0xfffff65a]          ; 0053aa10
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0053aa16
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 0053aa1b
    LEA ESI,[EBP + 0xfffffc8a]          ; 0053aa20
    JMP 0x0053a8f3                      ; 0053aa26
        ;   XREF to: 0053a8f3 (UNCONDITIONAL_JUMP)  ; LAB_0053a8f3
    MOV EDI,0x3e3b65aa                  ; 0053aa2b
        ;   Label: LAB_0053aa2b
    MOV EAX,0x3fd4f5c3                  ; 0053aa30
    MOV EDX,0x400ffdb5                  ; 0053aa35
    MOV ECX,0x3ed3380d                  ; 0053aa3a
    MOV dword ptr [EBP + 0xfffffed2],EAX ; 0053aa3f
    LEA EAX,[EBP + 0xfffffeca]          ; 0053aa45
    MOV dword ptr [EBP + 0xfffffeca],EDI ; 0053aa4b
    PUSH EAX                            ; 0053aa51
    MOV EAX,0xbe6ec850                  ; 0053aa52
    MOV dword ptr [EBP + 0xfffffece],EDX ; 0053aa57
    MOV dword ptr [EBP + 0xffffff02],EAX ; 0053aa5d
    LEA EAX,[EBP + 0xfffffefa]          ; 0053aa63
    MOV dword ptr [EBP + 0xfffffefa],ECX ; 0053aa69
    PUSH EAX                            ; 0053aa6f
    LEA EAX,[EBP + 0xfffffcba]          ; 0053aa70
    MOV EDI,0xbdc42bdf                  ; 0053aa76
    PUSH EAX                            ; 0053aa7b
    MOV dword ptr [EBP + 0xfffffefe],EDI ; 0053aa7c
    MOV EDI,0x3fac74a7                  ; 0053aa82
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0053aa87
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    MOV EDX,0xbe93c947                  ; 0053aa8c
    MOV ECX,0x3fdd1cc1                  ; 0053aa91
    LEA EAX,[EBP + 0xfffffea6]          ; 0053aa96
    ADD ESP,0xc                         ; 0053aa9c
    MOV dword ptr [EBP + 0xfffffeaa],EDI ; 0053aa9f
    MOV dword ptr [EBP + 0xfffffea6],EDX ; 0053aaa5
    PUSH EAX                            ; 0053aaab
    MOV EAX,0x3ef7baed                  ; 0053aaac
    MOV dword ptr [EBP + 0xfffffeae],ECX ; 0053aab1
    MOV dword ptr [EBP + 0x3e],EAX      ; 0053aab7
    LEA EAX,[EBP + 0x3e]                ; 0053aaba
    MOV EDX,0x3d957802                  ; 0053aabd
    PUSH EAX                            ; 0053aac2
    LEA EAX,[EBP + 0xfffff3ba]          ; 0053aac3
    MOV ECX,0x3d95d158                  ; 0053aac9
    PUSH EAX                            ; 0053aace
    MOV dword ptr [EBP + 0x42],EDX      ; 0053aacf
    MOV dword ptr [EBP + 0x46],ECX      ; 0053aad2
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0053aad5
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    ADD ESP,0xc                         ; 0053aada
    PUSH ESI                            ; 0053aadd
    PUSH 0x3                            ; 0053aade
    PUSH EBX                            ; 0053aae0
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0 ; 0053aae1
        ;   XREF to: 0042a9d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0()
    MOV dword ptr [EBP + 0x76],EAX      ; 0053aae6
    ADD ESP,0x8                         ; 0053aae9
    FLD float ptr [EBP + 0x76]          ; 0053aaec
    SUB ESP,0x4                         ; 0053aaef
    FLD1                                ; 0053aaf2
    FSUBRP                              ; 0053aaf4
    LEA EAX,[EBP + 0xfffff3ba]          ; 0053aaf6
    FSTP float ptr [ESP]                ; 0053aafc
    PUSH EAX                            ; 0053aaff
    LEA EAX,[EBP + 0xfffffcba]          ; 0053ab00
    PUSH EAX                            ; 0053ab06
    LEA ESI,[EBP + 0xfffff8ca]          ; 0053ab07
    LEA EDI,[EBP + 0xfffff56a]          ; 0053ab0d
    CALL core_xform.cpp_lerpMatrix3x4_FUN_0055cc30 ; 0053ab13
        ;   XREF to: 0055cc30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_lerpMatrix3x4_FUN_0055cc30()
    MOV ECX,0xc                         ; 0053ab18
    LEA ESI,[EBP + 0xfffff8ca]          ; 0053ab1d
    LEA EAX,[EBP + 0xfffff56a]          ; 0053ab23
    ADD ESP,0xc                         ; 0053ab29
    MOVSD.REP ES:EDI,ESI                ; 0053ab2c
    PUSH EAX                            ; 0053ab2e
    LEA ESI,[EBP + 0xfffff68a]          ; 0053ab2f
    LEA EDI,[EBP + 0xfffff65a]          ; 0053ab35
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0053ab3b
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 0053ab40
    LEA ESI,[EBP + 0xfffff68a]          ; 0053ab45
    JMP 0x0053a8f3                      ; 0053ab4b
        ;   XREF to: 0053a8f3 (UNCONDITIONAL_JUMP)  ; LAB_0053a8f3
    MOV EDI,0x3e44c7f3                  ; 0053ab50
        ;   Label: LAB_0053ab50
    MOV EAX,0x3fd16bba                  ; 0053ab55
    MOV EDX,0x4013aee6                  ; 0053ab5a
    MOV ECX,0x3eab23dd                  ; 0053ab5f
    MOV dword ptr [EBP + 0xfffffec6],EAX ; 0053ab64
    LEA EAX,[EBP + 0xfffffebe]          ; 0053ab6a
    MOV dword ptr [EBP + 0xfffffebe],EDI ; 0053ab70
    PUSH EAX                            ; 0053ab76
    MOV EAX,0xbed19f3c                  ; 0053ab77
    MOV dword ptr [EBP + 0xfffffec2],EDX ; 0053ab7c
    MOV dword ptr [EBP + -0xe],EAX      ; 0053ab82
    LEA EAX,[EBP + -0x16]               ; 0053ab85
    MOV dword ptr [EBP + -0x16],ECX     ; 0053ab88
    PUSH EAX                            ; 0053ab8b
    LEA EAX,[EBP + 0xfffffe0a]          ; 0053ab8c
    MOV EDI,0xbe3daa50                  ; 0053ab92
    PUSH EAX                            ; 0053ab97
    MOV dword ptr [EBP + -0x12],EDI     ; 0053ab98
    MOV EDI,0x3f93df3b                  ; 0053ab9b
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0053aba0
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    MOV EDX,0xbeedcbbc                  ; 0053aba5
    MOV ECX,0x3fe3381d                  ; 0053abaa
    LEA EAX,[EBP + 0x32]                ; 0053abaf
    ADD ESP,0xc                         ; 0053abb2
    MOV dword ptr [EBP + 0x36],EDI      ; 0053abb5
    MOV dword ptr [EBP + 0x32],EDX      ; 0053abb8
    PUSH EAX                            ; 0053abbb
    MOV EAX,0x3ec327aa                  ; 0053abbc
    MOV dword ptr [EBP + 0x3a],ECX      ; 0053abc1
    MOV dword ptr [EBP + -0x46],EAX     ; 0053abc4
    LEA EAX,[EBP + -0x46]               ; 0053abc7
    MOV EDX,0x3d8dbbaa                  ; 0053abca
    PUSH EAX                            ; 0053abcf
    LEA EAX,[EBP + 0xfffff86a]          ; 0053abd0
    MOV ECX,0xbe66cd6c                  ; 0053abd6
    PUSH EAX                            ; 0053abdb
    MOV dword ptr [EBP + -0x42],EDX     ; 0053abdc
    MOV dword ptr [EBP + -0x3e],ECX     ; 0053abdf
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0053abe2
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    ADD ESP,0xc                         ; 0053abe7
    PUSH ESI                            ; 0053abea
    PUSH 0x3                            ; 0053abeb
    PUSH EBX                            ; 0053abed
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0 ; 0053abee
        ;   XREF to: 0042a9d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0()
    MOV dword ptr [EBP + 0x76],EAX      ; 0053abf3
    ADD ESP,0x8                         ; 0053abf6
    FLD float ptr [EBP + 0x76]          ; 0053abf9
    SUB ESP,0x4                         ; 0053abfc
    FLD1                                ; 0053abff
    FSUBRP                              ; 0053ac01
    LEA EAX,[EBP + 0xfffff86a]          ; 0053ac03
    FSTP float ptr [ESP]                ; 0053ac09
    PUSH EAX                            ; 0053ac0c
    LEA EAX,[EBP + 0xfffffe0a]          ; 0053ac0d
    PUSH EAX                            ; 0053ac13
    LEA ESI,[EBP + 0xfffffaaa]          ; 0053ac14
    LEA EDI,[EBP + 0xfffffa4a]          ; 0053ac1a
    CALL core_xform.cpp_lerpMatrix3x4_FUN_0055cc30 ; 0053ac20
        ;   XREF to: 0055cc30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_lerpMatrix3x4_FUN_0055cc30()
    MOV ECX,0xc                         ; 0053ac25
    LEA ESI,[EBP + 0xfffffaaa]          ; 0053ac2a
    LEA EAX,[EBP + 0xfffffa4a]          ; 0053ac30
    ADD ESP,0xc                         ; 0053ac36
    MOVSD.REP ES:EDI,ESI                ; 0053ac39
    PUSH EAX                            ; 0053ac3b
    LEA ESI,[EBP + 0xfffffb0a]          ; 0053ac3c
    LEA EDI,[EBP + 0xfffff65a]          ; 0053ac42
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0053ac48
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 0053ac4d
    LEA ESI,[EBP + 0xfffffb0a]          ; 0053ac52
    JMP 0x0053a8f3                      ; 0053ac58
        ;   XREF to: 0053a8f3 (UNCONDITIONAL_JUMP)  ; LAB_0053a8f3
    MOV ECX,0x3e740e9d                  ; 0053ac5d
        ;   Label: LAB_0053ac5d
    MOV EBX,0xbd868280                  ; 0053ac62
    MOV EDI,0x3d093cf5                  ; 0053ac67
    MOV EAX,0xbf3e6506                  ; 0053ac6c
    MOV EDX,0xbf4eefe5                  ; 0053ac71
    MOV dword ptr [EBP + -0x3a],ECX     ; 0053ac76
    MOV dword ptr [EBP + 0x62],EAX      ; 0053ac79
    LEA EAX,[EBP + 0x62]                ; 0053ac7c
    MOV dword ptr [EBP + -0x36],EBX     ; 0053ac7f
    PUSH EAX                            ; 0053ac82
    LEA EAX,[EBP + -0x3a]               ; 0053ac83
    MOV dword ptr [EBP + -0x32],EDI     ; 0053ac86
    PUSH EAX                            ; 0053ac89
    LEA EAX,[EBP + 0xfffff89a]          ; 0053ac8a
    MOV ECX,0x3f31884c                  ; 0053ac90
    PUSH EAX                            ; 0053ac95
    MOV dword ptr [EBP + 0x6a],EDX      ; 0053ac96
    MOV dword ptr [EBP + 0x66],ECX      ; 0053ac99
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0053ac9c
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    ADD ESP,0xc                         ; 0053aca1
    PUSH ESI                            ; 0053aca4
    LEA EAX,[EBP + 0xfffff89a]          ; 0053aca5
    PUSH EAX                            ; 0053acab
    LEA ESI,[EBP + 0xfffff7aa]          ; 0053acac
    LEA EDI,[EBP + 0xfffff65a]          ; 0053acb2
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0053acb8
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 0053acbd
    LEA ESI,[EBP + 0xfffff7aa]          ; 0053acc2
    JMP 0x0053a8f3                      ; 0053acc8
        ;   XREF to: 0053a8f3 (UNCONDITIONAL_JUMP)  ; LAB_0053a8f3
    MOV EDX,0x3f1eb852                  ; 0053accd
        ;   Label: LAB_0053accd
    MOV EBX,0x3e5e353f                  ; 0053acd2
    MOV EAX,0xbfc8f5c3                  ; 0053acd7
    XOR ECX,ECX                         ; 0053acdc
    MOV dword ptr [EBP + 0xffffff12],EDX ; 0053acde
    MOV dword ptr [EBP + 0xffffff26],EAX ; 0053ace4
    LEA EAX,[EBP + 0xffffff1e]          ; 0053acea
    MOV dword ptr [EBP + 0xffffff16],ECX ; 0053acf0
    PUSH EAX                            ; 0053acf6
    LEA EAX,[EBP + 0xffffff12]          ; 0053acf7
    MOV dword ptr [EBP + 0xffffff1a],EBX ; 0053acfd
    PUSH EAX                            ; 0053ad03
    LEA EAX,[EBP + 0xfffffd4a]          ; 0053ad04
    MOV EDX,0x3fc8f5c3                  ; 0053ad0a
    PUSH EAX                            ; 0053ad0f
    MOV dword ptr [EBP + 0xffffff1e],ECX ; 0053ad10
    MOV dword ptr [EBP + 0xffffff22],EDX ; 0053ad16
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0053ad1c
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    ADD ESP,0xc                         ; 0053ad21
    PUSH ESI                            ; 0053ad24
    LEA EAX,[EBP + 0xfffffd4a]          ; 0053ad25
    PUSH EAX                            ; 0053ad2b
    LEA ESI,[EBP + 0xfffff44a]          ; 0053ad2c
    LEA EDI,[EBP + 0xfffff65a]          ; 0053ad32
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0053ad38
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 0053ad3d
    LEA ESI,[EBP + 0xfffff44a]          ; 0053ad42
    JMP 0x0053a8f3                      ; 0053ad48
        ;   XREF to: 0053a8f3 (UNCONDITIONAL_JUMP)  ; LAB_0053a8f3
    MOV EDX,0xbdb87c8b                  ; 0053ad4d
        ;   Label: LAB_0053ad4d
    MOV ECX,0x3f262846                  ; 0053ad52
    MOV EDI,0xbe78bef9                  ; 0053ad57
    LEA EAX,[EBP + 0x26]                ; 0053ad5c
    MOV dword ptr [EBP + 0x26],EDX      ; 0053ad5f
    MOV dword ptr [EBP + 0x2e],ECX      ; 0053ad62
    MOV dword ptr [EBP + 0x2a],EDI      ; 0053ad65
    PUSH EAX                            ; 0053ad68
    MOV EAX,0x3ed45e4e                  ; 0053ad69
    MOV EDX,0xbe258d9b                  ; 0053ad6e
    MOV dword ptr [EBP + 0xfffffee2],EAX ; 0053ad73
    LEA EAX,[EBP + 0xfffffee2]          ; 0053ad79
    MOV ECX,0xbefad3c8                  ; 0053ad7f
    PUSH EAX                            ; 0053ad84
    LEA EAX,[EBP + 0xfffff47a]          ; 0053ad85
    MOV EDI,0x3e99e450                  ; 0053ad8b
    PUSH EAX                            ; 0053ad90
    MOV dword ptr [EBP + 0xfffffee6],EDX ; 0053ad91
    MOV dword ptr [EBP + 0xfffffeea],ECX ; 0053ad97
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0053ad9d
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    MOV EAX,0x3f252f1b                  ; 0053ada2
    MOV EDX,0xbe083dff                  ; 0053ada7
    ADD ESP,0xc                         ; 0053adac
    MOV dword ptr [EBP + 0x22],EAX      ; 0053adaf
    LEA EAX,[EBP + 0x1a]                ; 0053adb2
    MOV ECX,0x3e9b7f17                  ; 0053adb5
    PUSH EAX                            ; 0053adba
    MOV EAX,0xbe8c011d                  ; 0053adbb
    MOV dword ptr [EBP + 0x1a],EDI      ; 0053adc0
    MOV dword ptr [EBP + -0x62],EAX     ; 0053adc3
    LEA EAX,[EBP + -0x6a]               ; 0053adc6
    MOV EDI,0x3d8513c3                  ; 0053adc9
    PUSH EAX                            ; 0053adce
    LEA EAX,[EBP + 0xfffff4aa]          ; 0053adcf
    MOV dword ptr [EBP + 0x1e],EDX      ; 0053add5
    PUSH EAX                            ; 0053add8
    MOV dword ptr [EBP + -0x6a],ECX     ; 0053add9
    MOV dword ptr [EBP + -0x66],EDI     ; 0053addc
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0053addf
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    ADD ESP,0xc                         ; 0053ade4
    PUSH ESI                            ; 0053ade7
    PUSH 0x0                            ; 0053ade8
    PUSH EBX                            ; 0053adea
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0 ; 0053adeb
        ;   XREF to: 0042a9d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0()
    MOV dword ptr [EBP + 0x76],EAX      ; 0053adf0
    ADD ESP,0x8                         ; 0053adf3
    FLD float ptr [EBP + 0x76]          ; 0053adf6
    SUB ESP,0x4                         ; 0053adf9
    FLD1                                ; 0053adfc
    FSUBRP                              ; 0053adfe
    LEA EAX,[EBP + 0xfffff4aa]          ; 0053ae00
    FSTP float ptr [ESP]                ; 0053ae06
    PUSH EAX                            ; 0053ae09
    LEA EAX,[EBP + 0xfffff47a]          ; 0053ae0a
    PUSH EAX                            ; 0053ae10
    LEA ESI,[EBP + 0xfffffb3a]          ; 0053ae11
    LEA EDI,[EBP + 0xfffff7da]          ; 0053ae17
    CALL core_xform.cpp_lerpMatrix3x4_FUN_0055cc30 ; 0053ae1d
        ;   XREF to: 0055cc30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_lerpMatrix3x4_FUN_0055cc30()
    MOV ECX,0xc                         ; 0053ae22
    LEA ESI,[EBP + 0xfffffb3a]          ; 0053ae27
    LEA EAX,[EBP + 0xfffff7da]          ; 0053ae2d
    ADD ESP,0xc                         ; 0053ae33
    MOVSD.REP ES:EDI,ESI                ; 0053ae36
    PUSH EAX                            ; 0053ae38
    LEA ESI,[EBP + 0xfffff8fa]          ; 0053ae39
    LEA EDI,[EBP + 0xfffff65a]          ; 0053ae3f
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0053ae45
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 0053ae4a
    LEA ESI,[EBP + 0xfffff8fa]          ; 0053ae4f
    JMP 0x0053a8f3                      ; 0053ae55
        ;   XREF to: 0053a8f3 (UNCONDITIONAL_JUMP)  ; LAB_0053a8f3
    PUSH 0x2dd1184                      ; 0053ae5a | DAT_02dd1184
        ;   Label: LAB_0053ae5a
    PUSH 0x2dc9f34                      ; 0053ae5f
    LEA EAX,[EBP + 0xfffff59a]          ; 0053ae64
    PUSH EAX                            ; 0053ae6a
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0053ae6b
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    ADD ESP,0xc                         ; 0053ae70
    PUSH ESI                            ; 0053ae73
    LEA EAX,[EBP + 0xfffff59a]          ; 0053ae74
    PUSH EAX                            ; 0053ae7a
    LEA ESI,[EBP + 0xfffff95a]          ; 0053ae7b
    PUSH 0x3fc90fdb                     ; 0053ae81
    LEA EDI,[EBP + 0xfffffd1a]          ; 0053ae86
    CALL core_xform.cpp_buildRotationX_FUN_0055c730 ; 0053ae8c
        ;   XREF to: 0055c730 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildRotationX_FUN_0055c730()
    MOV ECX,0xc                         ; 0053ae91
    ADD ESP,0x4                         ; 0053ae96
    LEA EAX,[EBP + 0xfffffd1a]          ; 0053ae99
    LEA ESI,[EBP + 0xfffff95a]          ; 0053ae9f
    PUSH EAX                            ; 0053aea5
    MOVSD.REP ES:EDI,ESI                ; 0053aea6
    PUSH 0x3fc90fdb                     ; 0053aea8
    LEA ESI,[EBP + 0xfffffa7a]          ; 0053aead
    LEA EDI,[EBP + 0xfffff5ca]          ; 0053aeb3
    CALL core_xform.cpp_buildRotationY_FUN_0055c7b0 ; 0053aeb9
        ;   XREF to: 0055c7b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildRotationY_FUN_0055c7b0()
    MOV ECX,0xc                         ; 0053aebe
    LEA ESI,[EBP + 0xfffffa7a]          ; 0053aec3
    LEA EAX,[EBP + 0xfffff5ca]          ; 0053aec9
    ADD ESP,0x4                         ; 0053aecf
    MOVSD.REP ES:EDI,ESI                ; 0053aed2
    PUSH EAX                            ; 0053aed4
    LEA ESI,[EBP + 0xfffffc5a]          ; 0053aed5
    LEA EDI,[EBP + 0xfffffb9a]          ; 0053aedb
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0053aee1
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 0053aee6
    LEA ESI,[EBP + 0xfffffc5a]          ; 0053aeeb
    LEA EAX,[EBP + 0xfffffb9a]          ; 0053aef1
    ADD ESP,0x8                         ; 0053aef7
    MOVSD.REP ES:EDI,ESI                ; 0053aefa
    PUSH EAX                            ; 0053aefc
    LEA ESI,[EBP + 0xfffffcea]          ; 0053aefd
    LEA EDI,[EBP + 0xfffffbca]          ; 0053af03
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0053af09
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 0053af0e
    LEA ESI,[EBP + 0xfffffcea]          ; 0053af13
    LEA EAX,[EBP + 0xfffffbca]          ; 0053af19
    ADD ESP,0x8                         ; 0053af1f
    MOVSD.REP ES:EDI,ESI                ; 0053af22
    PUSH EAX                            ; 0053af24
    LEA ESI,[EBP + 0xfffffe3a]          ; 0053af25
    LEA EDI,[EBP + 0xfffff65a]          ; 0053af2b
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0053af31
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 0053af36
    LEA ESI,[EBP + 0xfffffe3a]          ; 0053af3b
    JMP 0x0053a8f3                      ; 0053af41
        ;   XREF to: 0053a8f3 (UNCONDITIONAL_JUMP)  ; LAB_0053a8f3
    MOV dword ptr [EBP + 0x6],EAX       ; 0053af46
        ;   Label: LAB_0053af46
    MOV dword ptr [EBP + 0x2],EAX       ; 0053af49
    MOV dword ptr [EBP + 0xffffff0e],EAX ; 0053af4c
    MOV dword ptr [EBP + 0xffffff0a],EAX ; 0053af52
    MOV dword ptr [EBP + 0xffffff06],EAX ; 0053af58
    MOV dword ptr [EBP + 0xa],EAX       ; 0053af5e
    CMP dword ptr [EBX + 0x2a84],0xe    ; 0053af61
    JZ 0x0053b2e9                       ; 0053af68
        ;   XREF to: 0053b2e9 (CONDITIONAL_JUMP)  ; LAB_0053b2e9
    MOV ECX,dword ptr [0x00764ad4]      ; 0053af6e | g_CLightActorActorType_00764a9c.name_hash
    PUSH ECX                            ; 0053af74
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0053af75
    PUSH ESI                            ; 0053af7b
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0053af7c
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0053af81
    MOV ESI,EAX                         ; 0053af84
    TEST EAX,EAX                        ; 0053af86
    JZ 0x0053b05b                       ; 0053af88
        ;   XREF to: 0053b05b (CONDITIONAL_JUMP)  ; LAB_0053b05b
    LEA EAX,[EBP + 0xfffffe6a]          ; 0053af8e
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0053af94
    PUSH EAX                            ; 0053af9a
    MOV EDI,dword ptr [EBP + 0x8e]      ; 0053af9b
    MOV EDX,dword ptr [EDX + 0x14c]     ; 0053afa1
    PUSH EDI                            ; 0053afa7
    CALL dword ptr [EDX + 0x14]         ; 0053afa8
    FLD float ptr [EBP + 0xfffffe6a]    ; 0053afab
    FADD float ptr [EBP + 0xfffffe76]   ; 0053afb1
    FST float ptr [EBP + 0xffffff4e]    ; 0053afb7
    FLD float ptr [0x005959a7]          ; 0053afbd | FLOAT_005959a7
    FXCH                                ; 0053afc3
    FMUL ST1                            ; 0053afc5
    FLD float ptr [EBP + 0xfffffe72]    ; 0053afc7
    FLD float ptr [EBP + 0xfffffe6e]    ; 0053afcd
    FADD float ptr [EBP + 0xfffffe7a]   ; 0053afd3
    FXCH                                ; 0053afd9
    FADD float ptr [EBP + 0xfffffe7e]   ; 0053afdb
    FXCH                                ; 0053afe1
    FST float ptr [EBP + 0xffffff52]    ; 0053afe3
    FMUL ST3                            ; 0053afe9
    FXCH                                ; 0053afeb
    FST float ptr [EBP + 0xffffff56]    ; 0053afed
    FMULP ST3                           ; 0053aff3
    LEA EAX,[EBP + 0xffffff36]          ; 0053aff5
    LEA EDX,[EBP + 0xffffff06]          ; 0053affb
    ADD ESP,0x8                         ; 0053b001
    FXCH                                ; 0053b004
    FSTP float ptr [EBP + 0xffffff36]   ; 0053b006
    FSTP float ptr [EBP + 0xffffff3a]   ; 0053b00c
    FSTP float ptr [EBP + 0xffffff3e]   ; 0053b012
    CMP EDX,EAX                         ; 0053b018
    JZ 0x0053b040                       ; 0053b01a
        ;   XREF to: 0053b040 (CONDITIONAL_JUMP)  ; LAB_0053b040
    MOV EAX,dword ptr [EBP + 0xffffff36] ; 0053b01c
    MOV dword ptr [EBP + 0xffffff06],EAX ; 0053b022
    MOV EAX,dword ptr [EBP + 0xffffff3a] ; 0053b028
    MOV dword ptr [EBP + 0xffffff0a],EAX ; 0053b02e
    MOV EAX,dword ptr [EBP + 0xffffff3e] ; 0053b034
    MOV dword ptr [EBP + 0xffffff0e],EAX ; 0053b03a
    MOV EAX,dword ptr [ESI + 0x664]     ; 0053b040
        ;   Label: LAB_0053b040
    CMP EAX,0x2                         ; 0053b046
    JNZ 0x0053b47c                      ; 0053b049
        ;   XREF to: 0053b47c (CONDITIONAL_JUMP)  ; LAB_0053b47c
    MOV EAX,dword ptr [EBP + 0xfffffe7a] ; 0053b04f
        ;   Label: LAB_0053b04f
    MOV dword ptr [EBP + 0xffffff0a],EAX ; 0053b055
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0053b05b
        ;   Label: LAB_0053b05b
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0053b061
    PUSH ESI                            ; 0053b067
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0053b068
    CALL dword ptr [EAX + 0x6c]         ; 0053b06e
    ADD ESP,0x4                         ; 0053b071
    TEST EAX,EAX                        ; 0053b074
    JZ 0x0053b1f1                       ; 0053b076
        ;   XREF to: 0053b1f1 (CONDITIONAL_JUMP)  ; LAB_0053b1f1
    MOV EDI,0xbdb87c8b                  ; 0053b07c
    MOV EAX,0x3f262846                  ; 0053b081
    MOV EDX,0xbe78bef9                  ; 0053b086
    MOV ECX,0x3ed45e4e                  ; 0053b08b
    MOV ESI,0xbe258d9b                  ; 0053b090
    MOV dword ptr [EBP + 0xffffff5a],EDI ; 0053b095
    MOV dword ptr [EBP + 0xffffff62],EAX ; 0053b09b
    MOV dword ptr [EBP + 0xffffff5e],EDX ; 0053b0a1
    MOV dword ptr [EBP + 0xfffffeb2],ECX ; 0053b0a7
    LEA EAX,[EBP + 0xffffff5a]          ; 0053b0ad
    MOV dword ptr [EBP + 0xfffffeb6],ESI ; 0053b0b3
    PUSH EAX                            ; 0053b0b9
    LEA EAX,[EBP + 0xfffffeb2]          ; 0053b0ba
    MOV EDI,0xbefad3c8                  ; 0053b0c0
    PUSH EAX                            ; 0053b0c5
    LEA EAX,[EBP + 0xfffff35a]          ; 0053b0c6
    MOV ESI,0x3ec5521a                  ; 0053b0cc
    PUSH EAX                            ; 0053b0d1
    MOV dword ptr [EBP + 0xfffffeba],EDI ; 0053b0d2
    MOV EDI,0xbc47e649                  ; 0053b0d8
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0053b0dd
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    MOV EAX,0x3e99e450                  ; 0053b0e2
    ADD ESP,0xc                         ; 0053b0e7
    MOV dword ptr [EBP + 0xffffff2a],EAX ; 0053b0ea
    LEA EAX,[EBP + 0xffffff2a]          ; 0053b0f0
    MOV EDX,0x3f252f1b                  ; 0053b0f6
    PUSH EAX                            ; 0053b0fb
    MOV EAX,0xbefd0529                  ; 0053b0fc
    MOV ECX,0xbe083dff                  ; 0053b101
    MOV dword ptr [EBP + 0xffffff6e],EAX ; 0053b106
    LEA EAX,[EBP + 0xffffff66]          ; 0053b10c
    MOV dword ptr [EBP + 0xffffff66],ESI ; 0053b112
    PUSH EAX                            ; 0053b118
    LEA EAX,[EBP + 0xfffff38a]          ; 0053b119
    MOV dword ptr [EBP + 0xffffff6a],EDI ; 0053b11f
    PUSH EAX                            ; 0053b125
    MOV dword ptr [EBP + 0xffffff32],EDX ; 0053b126
    MOV dword ptr [EBP + 0xffffff2e],ECX ; 0053b12c
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0053b132
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    MOV EDX,dword ptr [EBP + 0x72]      ; 0053b137
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053b13a
    SUB EAX,EDX                         ; 0053b141
    SHL EAX,0x4                         ; 0053b143
    LEA EDX,[EBX + 0xfd0]               ; 0053b146
    ADD ESP,0xc                         ; 0053b14c
    ADD EAX,EDX                         ; 0053b14f
    PUSH EAX                            ; 0053b151
    PUSH 0x0                            ; 0053b152
    PUSH EBX                            ; 0053b154
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0 ; 0053b155
        ;   XREF to: 0042a9d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0()
    MOV dword ptr [EBP + 0x76],EAX      ; 0053b15a
    ADD ESP,0x8                         ; 0053b15d
    FLD float ptr [EBP + 0x76]          ; 0053b160
    SUB ESP,0x4                         ; 0053b163
    FLD1                                ; 0053b166
    FSUBRP                              ; 0053b168
    LEA EAX,[EBP + 0xfffff38a]          ; 0053b16a
    FSTP float ptr [ESP]                ; 0053b170
    PUSH EAX                            ; 0053b173
    LEA EAX,[EBP + 0xfffff35a]          ; 0053b174
    PUSH EAX                            ; 0053b17a
    LEA ESI,[EBP + 0xfffff83a]          ; 0053b17b
    LEA EDI,[EBP + 0xfffff6ea]          ; 0053b181
    CALL core_xform.cpp_lerpMatrix3x4_FUN_0055cc30 ; 0053b187
        ;   XREF to: 0055cc30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_lerpMatrix3x4_FUN_0055cc30()
    MOV ECX,0xc                         ; 0053b18c
    LEA ESI,[EBP + 0xfffff83a]          ; 0053b191
    LEA EAX,[EBP + 0xfffff6ea]          ; 0053b197
    ADD ESP,0xc                         ; 0053b19d
    MOVSD.REP ES:EDI,ESI                ; 0053b1a0
    PUSH EAX                            ; 0053b1a2
    LEA ESI,[EBP + 0xfffff32a]          ; 0053b1a3
    LEA EDI,[EBP + 0xfffff6ba]          ; 0053b1a9
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0053b1af
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    ADD ESP,0x8                         ; 0053b1b4
    LEA EAX,[EBP + 0xe]                 ; 0053b1b7
    MOV ECX,0xc                         ; 0053b1ba
    PUSH EAX                            ; 0053b1bf
    LEA EAX,[EBP + 0xfffff6ba]          ; 0053b1c0
    LEA ESI,[EBP + 0xfffff32a]          ; 0053b1c6
    PUSH EAX                            ; 0053b1cc
    MOVSD.REP ES:EDI,ESI                ; 0053b1cd
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 0053b1cf
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_0055b180(CMatrix3x4f * matrix_in, CVector3f * euler_out)
    MOV ESI,EAX                         ; 0053b1d4
    LEA EAX,[EBP + 0x2]                 ; 0053b1d6
    ADD ESP,0x8                         ; 0053b1d9
    CMP EAX,ESI                         ; 0053b1dc
    JZ 0x0053b1f1                       ; 0053b1de
        ;   XREF to: 0053b1f1 (CONDITIONAL_JUMP)  ; LAB_0053b1f1
    MOV EAX,dword ptr [ESI]             ; 0053b1e0
    MOV dword ptr [EBP + 0x2],EAX       ; 0053b1e2
    MOV EAX,dword ptr [ESI + 0x4]       ; 0053b1e5
    MOV dword ptr [EBP + 0x6],EAX       ; 0053b1e8
    MOV EAX,dword ptr [ESI + 0x8]       ; 0053b1eb
    MOV dword ptr [EBP + 0xa],EAX       ; 0053b1ee
    MOV EDX,dword ptr [EBP + 0x92]      ; 0053b1f1
        ;   Label: LAB_0053b1f1
    TEST EDX,EDX                        ; 0053b1f7
    JNZ 0x0053b5ba                      ; 0053b1f9
        ;   XREF to: 0053b5ba (CONDITIONAL_JUMP)  ; LAB_0053b5ba
    MOV ECX,0xbecccccd                  ; 0053b1ff
    LEA EAX,[EBP + -0x2e]               ; 0053b204
    MOV dword ptr [EBP + -0x2a],EDX     ; 0053b207
    MOV dword ptr [EBP + -0x26],EDX     ; 0053b20a
    LEA EDX,[EBP + -0x5e]               ; 0053b20d
    MOV dword ptr [EBP + -0x2e],ECX     ; 0053b210
    CMP EDX,EAX                         ; 0053b213
    JZ 0x0053b222                       ; 0053b215
        ;   XREF to: 0053b222 (CONDITIONAL_JUMP)  ; LAB_0053b222
    XOR EDX,EDX                         ; 0053b217
    MOV dword ptr [EBP + -0x5e],ECX     ; 0053b219
    MOV dword ptr [EBP + -0x5a],EDX     ; 0053b21c
    MOV dword ptr [EBP + -0x56],EDX     ; 0053b21f
    MOV ESI,dword ptr [EBP + 0x72]      ; 0053b222
        ;   Label: LAB_0053b222
    LEA EAX,[ESI*0x4 + 0x0]             ; 0053b225
    SUB EAX,ESI                         ; 0053b22c
    ADD EBX,0xfd0                       ; 0053b22e
    SHL EAX,0x4                         ; 0053b234
    ADD EAX,EBX                         ; 0053b237
    PUSH EAX                            ; 0053b239
    LEA EAX,[EBP + -0x5e]               ; 0053b23a
    PUSH EAX                            ; 0053b23d
    CALL core_xform.cpp_transformVector3x4InPlace_FUN_0055a910 ; 0053b23e
        ;   XREF to: 0055a910 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4InPlace_FUN_0055a910(CVector3f * input_output_vector, CMatrix3x4f * matrix)
    ADD ESP,0x8                         ; 0053b243
    LEA EAX,[EBP + 0x2]                 ; 0053b246
    PUSH EAX                            ; 0053b249
    LEA EAX,[EBP + -0x5e]               ; 0053b24a
    PUSH EAX                            ; 0053b24d
    LEA EAX,[EBP + 0xfffff62a]          ; 0053b24e
    PUSH EAX                            ; 0053b254
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0053b255
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    ADD ESP,0xc                         ; 0053b25a
    LEA EAX,[EBP + 0xfffff62a]          ; 0053b25d
    PUSH EAX                            ; 0053b263
    LEA EAX,[EBP + 0xffffff06]          ; 0053b264
    PUSH EAX                            ; 0053b26a
    LEA EAX,[EBP + 0xffffff72]          ; 0053b26b
    PUSH EAX                            ; 0053b271
    LEA EDI,[EBP + 0xfffff65a]          ; 0053b272
    LEA ESI,[EBP + 0xfffff62a]          ; 0053b278
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 0053b27e
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    FLD float ptr [EBP + -0x5e]         ; 0053b283
    FLD float ptr [EBP + -0x5a]         ; 0053b286
    FLD float ptr [EBP + -0x56]         ; 0053b289
    FLD float ptr [EBP + 0xfffff636]    ; 0053b28c
    FLD float ptr [EBP + 0xfffff646]    ; 0053b292
    FLD float ptr [EBP + 0xfffff656]    ; 0053b298
    MOV ECX,0xc                         ; 0053b29e
    FXCH ST5                            ; 0053b2a3
    FSUB float ptr [EAX]                ; 0053b2a5
    ADD ESP,0xc                         ; 0053b2a7
    FSTP float ptr [EBP + -0x76]        ; 0053b2aa
    FXCH ST3                            ; 0053b2ad
    FSUB float ptr [EAX + 0x4]          ; 0053b2af
    FXCH                                ; 0053b2b2
    FADD float ptr [EBP + -0x76]        ; 0053b2b4
    FXCH                                ; 0053b2b7
    FSTP float ptr [EBP + -0x72]        ; 0053b2b9
    FXCH                                ; 0053b2bc
    FSUB float ptr [EAX + 0x8]          ; 0053b2be
    FXCH ST2                            ; 0053b2c1
    FADD float ptr [EBP + -0x72]        ; 0053b2c3
    FXCH ST2                            ; 0053b2c6
    FSTP float ptr [EBP + -0x6e]        ; 0053b2c8
    FSTP float ptr [EBP + 0xfffff636]   ; 0053b2cb
    FXCH                                ; 0053b2d1
    FADD float ptr [EBP + -0x6e]        ; 0053b2d3
    FXCH                                ; 0053b2d6
    FSTP float ptr [EBP + 0xfffff646]   ; 0053b2d8
    FSTP float ptr [EBP + 0xfffff656]   ; 0053b2de
    JMP 0x0053a8f6                      ; 0053b2e4
        ;   XREF to: 0053a8f6 (UNCONDITIONAL_JUMP)  ; LAB_0053a8f6
    MOV EDX,dword ptr [0x02dc9f88]      ; 0053b2e9 | DAT_02dc9f88
        ;   Label: LAB_0053b2e9
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053b2ef
    SUB EAX,EDX                         ; 0053b2f6
    SHL EAX,0x4                         ; 0053b2f8
    ADD EAX,EDI                         ; 0053b2fb
    PUSH EAX                            ; 0053b2fd
    PUSH 0x2dd1184                      ; 0053b2fe | DAT_02dd1184
    LEA EAX,[EBP + -0x52]               ; 0053b303
    PUSH EAX                            ; 0053b306
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 0053b307
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    MOV EDX,dword ptr [0x02dc9f84]      ; 0053b30c | DAT_02dc9f84
    MOV ESI,EAX                         ; 0053b312
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053b314
    SUB EAX,EDX                         ; 0053b31b
    SHL EAX,0x4                         ; 0053b31d
    ADD ESP,0xc                         ; 0053b320
    ADD EAX,EDI                         ; 0053b323
    PUSH EAX                            ; 0053b325
    PUSH 0x2dd1184                      ; 0053b326 | DAT_02dd1184
    LEA EAX,[EBP + -0xa]                ; 0053b32b
    PUSH EAX                            ; 0053b32e
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 0053b32f
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    FLD float ptr [EAX]                 ; 0053b334
    FADD float ptr [ESI]                ; 0053b336
    FST float ptr [EBP + 0xfffffeee]    ; 0053b338
    FLD float ptr [EAX + 0x4]           ; 0053b33e
    FADD float ptr [ESI + 0x4]          ; 0053b341
    FXCH                                ; 0053b344
    FLD float ptr [0x005959a7]          ; 0053b346 | FLOAT_005959a7
    FXCH                                ; 0053b34c
    FMUL ST1                            ; 0053b34e
    FXCH ST2                            ; 0053b350
    FST float ptr [EBP + 0xfffffef2]    ; 0053b352
    FLD float ptr [EAX + 0x8]           ; 0053b358
    FADD float ptr [ESI + 0x8]          ; 0053b35b
    FXCH                                ; 0053b35e
    FMUL ST2                            ; 0053b360
    FXCH                                ; 0053b362
    FST float ptr [EBP + 0xfffffef6]    ; 0053b364
    FMULP ST2                           ; 0053b36a
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0053b36c
    ADD ESP,0xc                         ; 0053b372
    LEA EAX,[EBP + 0xfffffe82]          ; 0053b375
    FXCH ST2                            ; 0053b37b
    FSTP float ptr [EBP + 0xffffff7e]   ; 0053b37d
    PUSH EAX                            ; 0053b383
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0053b384
    FXCH                                ; 0053b38a
    FSTP float ptr [EBP + -0x7e]        ; 0053b38c
    PUSH ESI                            ; 0053b38f
    FSTP float ptr [EBP + -0x7a]        ; 0053b390
    MOV EDX,dword ptr [EDX + 0x14c]     ; 0053b393
    CALL dword ptr [EDX + 0x14]         ; 0053b399
    FLD float ptr [EBP + 0xfffffe92]    ; 0053b39c
    FLD float ptr [EBP + -0x7a]         ; 0053b3a2
    ADD ESP,0x8                         ; 0053b3a5
    FXCH                                ; 0053b3a8
    FSUB float ptr [EBP + 0xfffffe86]   ; 0053b3aa
    PUSH ESI                            ; 0053b3b0
    FXCH                                ; 0053b3b1
    FADD float ptr [0x005959bf]         ; 0053b3b3 | FLOAT_005959bf
    FXCH                                ; 0053b3b9
    FSUBR float ptr [EBP + -0x7e]       ; 0053b3bb
    FXCH                                ; 0053b3be
    FSTP float ptr [EBP + -0x7a]        ; 0053b3c0
    FSTP float ptr [EBP + -0x7e]        ; 0053b3c3
    CALL core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_00534fc0 ; 0053b3c6
        ;   XREF to: 00534fc0 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_00534fc0()
    MOV dword ptr [EBP + 0x76],EAX      ; 0053b3cb
    ADD ESP,0x4                         ; 0053b3ce
    FLD float ptr [EBP + 0x76]          ; 0053b3d1
    LEA EAX,[EBP + 0xfffffdda]          ; 0053b3d4
    FADD float ptr [EBP + -0x7e]        ; 0053b3da
    PUSH EAX                            ; 0053b3dd
    FSTP float ptr [EBP + -0x7e]        ; 0053b3de
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_0055abf0 ; 0053b3e1
        ;   XREF to: 0055abf0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityMatrix3x4_FUN_0055abf0()
    MOV EAX,dword ptr [EBP + 0xffffff7e] ; 0053b3e6
    MOV dword ptr [EBP + 0xfffffde6],EAX ; 0053b3ec
    MOV EAX,dword ptr [EBP + -0x7e]     ; 0053b3f2
    MOV dword ptr [EBP + 0xfffffdf6],EAX ; 0053b3f5
    MOV EAX,dword ptr [EBP + -0x7a]     ; 0053b3fb
    MOV dword ptr [EBP + 0xfffffe06],EAX ; 0053b3fe
    MOV EAX,dword ptr [EBX + 0x1faf0]   ; 0053b404
    ADD ESP,0x4                         ; 0053b40a
    TEST EAX,EAX                        ; 0053b40d
    JZ 0x0053b466                       ; 0053b40f
        ;   XREF to: 0053b466 (CONDITIONAL_JUMP)  ; LAB_0053b466
    LEA EAX,[EBP + 0xfffffdda]          ; 0053b411
    PUSH EAX                            ; 0053b417
    LEA ESI,[EBP + 0xfffff74a]          ; 0053b418
    PUSH 0x40490fdb                     ; 0053b41e
    LEA EDI,[EBP + 0xfffff71a]          ; 0053b423
    CALL core_xform.cpp_buildRotationY_FUN_0055c7b0 ; 0053b429
        ;   XREF to: 0055c7b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildRotationY_FUN_0055c7b0()
    MOV ECX,0xc                         ; 0053b42e
    LEA ESI,[EBP + 0xfffff74a]          ; 0053b433
    LEA EAX,[EBP + 0xfffff71a]          ; 0053b439
    ADD ESP,0x4                         ; 0053b43f
    MOVSD.REP ES:EDI,ESI                ; 0053b442
    PUSH EAX                            ; 0053b444
    LEA ESI,[EBP + 0xfffff77a]          ; 0053b445
    LEA EDI,[EBP + 0xfffffdda]          ; 0053b44b
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0053b451
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 0053b456
    LEA ESI,[EBP + 0xfffff77a]          ; 0053b45b
    ADD ESP,0x8                         ; 0053b461
    MOVSD.REP ES:EDI,ESI                ; 0053b464
    MOV ECX,0xc                         ; 0053b466
        ;   Label: LAB_0053b466
    LEA EDI,[EBP + 0xfffff65a]          ; 0053b46b
    LEA ESI,[EBP + 0xfffffdda]          ; 0053b471
    JMP 0x0053a8f6                      ; 0053b477
        ;   XREF to: 0053a8f6 (UNCONDITIONAL_JUMP)  ; LAB_0053a8f6
    CMP EAX,0x1                         ; 0053b47c
        ;   Label: LAB_0053b47c
    JNZ 0x0053b589                      ; 0053b47f
        ;   XREF to: 0053b589 (CONDITIONAL_JUMP)  ; LAB_0053b589
    MOV EDX,dword ptr [EBP + 0x92]      ; 0053b485
    TEST EDX,EDX                        ; 0053b48b
    JNZ 0x0053b54b                      ; 0053b48d
        ;   XREF to: 0053b54b (CONDITIONAL_JUMP)  ; LAB_0053b54b
    PUSH 0xbfc90fdb                     ; 0053b493
    LEA ESI,[EBP + 0xfffffd7a]          ; 0053b498
    LEA EDI,[EBP + 0xfffffc2a]          ; 0053b49e
    CALL core_xform.cpp_buildRotationY_FUN_0055c7b0 ; 0053b4a4
        ;   XREF to: 0055c7b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildRotationY_FUN_0055c7b0()
    MOV ECX,0xc                         ; 0053b4a9
    LEA ESI,[EBP + 0xfffffd7a]          ; 0053b4ae
    ADD ESP,0x4                         ; 0053b4b4
        ;   Label: LAB_0053b4b4
    MOVSD.REP ES:EDI,ESI                ; 0053b4b7
    MOV ESI,dword ptr [EBP + 0x72]      ; 0053b4b9
        ;   Label: LAB_0053b4b9
    LEA EAX,[ESI*0x4 + 0x0]             ; 0053b4bc
    SUB EAX,ESI                         ; 0053b4c3
    LEA EDX,[EBX + 0xfd0]               ; 0053b4c5
    SHL EAX,0x4                         ; 0053b4cb
    ADD EAX,EDX                         ; 0053b4ce
    PUSH EAX                            ; 0053b4d0
    LEA EAX,[EBP + 0xfffffc2a]          ; 0053b4d1
    PUSH EAX                            ; 0053b4d7
    LEA ESI,[EBP + 0xfffffbfa]          ; 0053b4d8
    LEA EDI,[EBP + 0xfffffc2a]          ; 0053b4de
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0053b4e4
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    ADD ESP,0x8                         ; 0053b4e9
    LEA EAX,[EBP + 0x4a]                ; 0053b4ec
    MOV ECX,0xc                         ; 0053b4ef
    PUSH EAX                            ; 0053b4f4
    LEA EAX,[EBP + 0xfffffc2a]          ; 0053b4f5
    LEA ESI,[EBP + 0xfffffbfa]          ; 0053b4fb
    PUSH EAX                            ; 0053b501
    MOVSD.REP ES:EDI,ESI                ; 0053b502
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 0053b504
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_0055b180(CMatrix3x4f * matrix_in, CVector3f * euler_out)
    MOV ESI,EAX                         ; 0053b509
    LEA EAX,[EBP + 0x2]                 ; 0053b50b
    ADD ESP,0x8                         ; 0053b50e
    CMP EAX,ESI                         ; 0053b511
    JZ 0x0053b526                       ; 0053b513
        ;   XREF to: 0053b526 (CONDITIONAL_JUMP)  ; LAB_0053b526
    MOV EAX,dword ptr [ESI]             ; 0053b515
    MOV dword ptr [EBP + 0x2],EAX       ; 0053b517
    MOV EAX,dword ptr [ESI + 0x4]       ; 0053b51a
    MOV dword ptr [EBP + 0x6],EAX       ; 0053b51d
    MOV EAX,dword ptr [ESI + 0x8]       ; 0053b520
    MOV dword ptr [EBP + 0xa],EAX       ; 0053b523
    FLD float ptr [EBP + 0xfffffe72]    ; 0053b526
        ;   Label: LAB_0053b526
    FMUL double ptr [0x005959af]        ; 0053b52c | DOUBLE_005959af
    FLD float ptr [EBP + 0xfffffe7e]    ; 0053b532
    FMUL double ptr [0x005959b7]        ; 0053b538 | DOUBLE_005959b7
    FADDP                               ; 0053b53e
    FSTP float ptr [EBP + 0xffffff0e]   ; 0053b540
    JMP 0x0053b05b                      ; 0053b546
        ;   XREF to: 0053b05b (UNCONDITIONAL_JUMP)  ; LAB_0053b05b
    CMP EDX,EAX                         ; 0053b54b
        ;   Label: LAB_0053b54b
    JNZ 0x0053b575                      ; 0053b54d
        ;   XREF to: 0053b575 (CONDITIONAL_JUMP)  ; LAB_0053b575
    PUSH 0x3fc90fdb                     ; 0053b54f
    LEA ESI,[EBP + 0xfffffdaa]          ; 0053b554
    LEA EDI,[EBP + 0xfffffc2a]          ; 0053b55a
    CALL core_xform.cpp_buildRotationY_FUN_0055c7b0 ; 0053b560
        ;   XREF to: 0055c7b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildRotationY_FUN_0055c7b0()
    MOV ECX,0xc                         ; 0053b565
    LEA ESI,[EBP + 0xfffffdaa]          ; 0053b56a
    JMP 0x0053b4b4                      ; 0053b570
        ;   XREF to: 0053b4b4 (UNCONDITIONAL_JUMP)  ; LAB_0053b4b4
    LEA EAX,[EBP + 0xfffffc2a]          ; 0053b575
        ;   Label: LAB_0053b575
    PUSH EAX                            ; 0053b57b
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_0055abf0 ; 0053b57c
        ;   XREF to: 0055abf0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityMatrix3x4_FUN_0055abf0()
    ADD ESP,0x4                         ; 0053b581
    JMP 0x0053b4b9                      ; 0053b584
        ;   XREF to: 0053b4b9 (UNCONDITIONAL_JUMP)  ; LAB_0053b4b9
    CMP EAX,0x3                         ; 0053b589
        ;   Label: LAB_0053b589
    JZ 0x0053b04f                       ; 0053b58c
        ;   XREF to: 0053b04f (CONDITIONAL_JUMP)  ; LAB_0053b04f
    PUSH ESI                            ; 0053b592
    MOV EDI,0x59596f                    ; 0053b593 | = "..\\core\\stranger.cpp"
    MOV EAX,0xc44                       ; 0053b598
    PUSH 0x595984                       ; 0053b59d | = "Don't know how to carry light %s"
    MOV dword ptr [0x01cc4800],EDI      ; 0053b5a2 | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 0053b5a8 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0053b5ad
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 0053b5b2
    JMP 0x0053b05b                      ; 0053b5b5
        ;   XREF to: 0053b05b (UNCONDITIONAL_JUMP)  ; LAB_0053b05b
    CMP EDX,0x1                         ; 0053b5ba
        ;   Label: LAB_0053b5ba
    JNZ 0x0053b5fc                      ; 0053b5bd
        ;   XREF to: 0053b5fc (CONDITIONAL_JUMP)  ; LAB_0053b5fc
    MOV EDX,0x3ecccccd                  ; 0053b5bf
    LEA EAX,[EBP + 0xffffff42]          ; 0053b5c4
    XOR ECX,ECX                         ; 0053b5ca
    MOV dword ptr [EBP + 0xffffff42],EDX ; 0053b5cc
    MOV dword ptr [EBP + 0xffffff46],ECX ; 0053b5d2
    LEA EDX,[EBP + -0x5e]               ; 0053b5d8
    MOV dword ptr [EBP + 0xffffff4a],ECX ; 0053b5db
    CMP EDX,EAX                         ; 0053b5e1
    JZ 0x0053b222                       ; 0053b5e3
        ;   XREF to: 0053b222 (CONDITIONAL_JUMP)  ; LAB_0053b222
    MOV EDI,0x3ecccccd                  ; 0053b5e9
    MOV dword ptr [EBP + -0x5a],ECX     ; 0053b5ee
    MOV dword ptr [EBP + -0x56],ECX     ; 0053b5f1
    MOV dword ptr [EBP + -0x5e],EDI     ; 0053b5f4
    JMP 0x0053b222                      ; 0053b5f7
        ;   XREF to: 0053b222 (UNCONDITIONAL_JUMP)  ; LAB_0053b222
    XOR ESI,ESI                         ; 0053b5fc
        ;   Label: LAB_0053b5fc
    MOV dword ptr [EBP + -0x5a],ESI     ; 0053b5fe
    MOV dword ptr [EBP + -0x5e],ESI     ; 0053b601
    MOV dword ptr [EBP + -0x56],ESI     ; 0053b604
    JMP 0x0053b222                      ; 0053b607
        ;   XREF to: 0053b222 (UNCONDITIONAL_JUMP)  ; LAB_0053b222

