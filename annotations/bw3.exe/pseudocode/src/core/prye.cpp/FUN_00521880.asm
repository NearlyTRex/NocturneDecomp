; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_prye_cpp_FUN_00521880(CCharacter *param_1)
;
; Local Variables:
; undefined8       Stack[-0x118]:8  local_118
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined        Stack[-0xf8]:1  local_f8
; undefined        Stack[-0xec]:1  local_ec
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
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   unkafter_prye.cpp_FUN_00525930 at 0052597a
;
; Referenced Globals:
;   undefined4 s_actionPending_d_prye_cpp_005cd58e+1
;   undefined4 DAT_005cd5b7
;   undefined4 DAT_005cd5bf
;   undefined4 DAT_005cd5c7
;   undefined4 DAT_005cd5cf
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CCrateClassInfo.name_hash
;   undefined4 g_CActorDestinationClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408bf0
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60
;   core_dest.cpp_CActorDestination_acceptsActor_FUN_004594a0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   core_motion.cpp_FUN_004fc350
;   core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10
;   core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0
;   core_setcolid.cpp_FUN_0053bc80
;   core_setcolid.cpp_FUN_0053de10
;   core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_00517e80
;   shape_edittool.cpp_FUN_0047cee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521880
        ;   Label: core_prye.cpp_FUN_00521880
    PUSH ESI                            ; 00521881
    PUSH EDI                            ; 00521882
    PUSH EBP                            ; 00521883
    MOV EBP,ESP                         ; 00521884
    SUB ESP,0x108                       ; 00521886
    AND ESP,0xfffffff8                  ; 0052188c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052188f
    MOV EDX,dword ptr [EAX + 0x20b98]   ; 00521892
    TEST EDX,EDX                        ; 00521898
    JNZ 0x0052197d                      ; 0052189a
        ;   XREF to: 0052197d (CONDITIONAL_JUMP)  ; LAB_0052197d
    CMP dword ptr [EAX + 0x2628],0x0    ; 005218a0
    JZ 0x0052197d                       ; 005218a7
        ;   XREF to: 0052197d (CONDITIONAL_JUMP)  ; LAB_0052197d
    CMP dword ptr [EAX + 0x2f00],0x11   ; 005218ad
    JZ 0x005218dd                       ; 005218b4
        ;   XREF to: 005218dd (CONDITIONAL_JUMP)  ; LAB_005218dd
    PUSH EDX                            ; 005218b6
    PUSH EAX                            ; 005218b7
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60 ; 005218b8
        ;   XREF to: 00433a60 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0x10c],EAX     ; 005218bd
    FLD float ptr [ESP + 0x10c]         ; 005218c4
    ADD ESP,0x8                         ; 005218cb
    FCOMP double ptr [0x005cd5b7]       ; 005218ce | DAT_005cd5b7
    FNSTSW AX                           ; 005218d4
    SAHF                                ; 005218d6
    JC 0x0052197d                       ; 005218d7
        ;   XREF to: 0052197d (CONDITIONAL_JUMP)  ; LAB_0052197d
    MOV EAX,dword ptr [EBP + 0x14]      ; 005218dd
        ;   Label: LAB_005218dd
    PUSH 0x0                            ; 005218e0
    ADD EAX,0x158                       ; 005218e2
    PUSH EAX                            ; 005218e7
    CALL core_motion.cpp_FUN_004fc350   ; 005218e8
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0x10c],EAX     ; 005218ed
    FLD float ptr [ESP + 0x10c]         ; 005218f4
    FLD1                                ; 005218fb
    ADD ESP,0x8                         ; 005218fd
    FCOMPP                              ; 00521900
    FNSTSW AX                           ; 00521902
    SAHF                                ; 00521904
    JA 0x0052197d                       ; 00521905
        ;   XREF to: 0052197d (CONDITIONAL_JUMP)  ; LAB_0052197d
    XOR EDI,EDI                         ; 00521907
    MOV dword ptr [ESP + 0xfc],EDI      ; 00521909
    MOV dword ptr [ESP + 0xf4],EDI      ; 00521910
    MOV EAX,[0x00603b28]                ; 00521917 | g_CDemonSetPtr
        ;   Label: LAB_00521917
    MOV EBX,dword ptr [ESP + 0xfc]      ; 0052191c
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 00521923 | g_CDemonSetInstance.actor_count
    JGE 0x00521c18                      ; 00521929
        ;   XREF to: 00521c18 (CONDITIONAL_JUMP)  ; LAB_00521c18
    MOV ECX,dword ptr [ESP + 0xf4]      ; 0052192f
    MOV EDX,dword ptr [0x01548bfc]      ; 00521936 | g_CActorDestinationClassInfo.name_hash
    ADD EAX,ECX                         ; 0052193c
    PUSH EDX                            ; 0052193e
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 0052193f | g_CDemonSetInstance.actors[0]
    PUSH EBX                            ; 00521945
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00521946
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0052194b
    MOV EBX,EAX                         ; 0052194e
    MOV dword ptr [ESP + 0xf0],EAX      ; 00521950
    TEST EAX,EAX                        ; 00521957
    JNZ 0x00521986                      ; 00521959
        ;   XREF to: 00521986 (CONDITIONAL_JUMP)  ; LAB_00521986
    MOV ECX,dword ptr [ESP + 0xfc]      ; 0052195b
        ;   Label: LAB_0052195b
    MOV EDX,dword ptr [ESP + 0xf4]      ; 00521962
    INC ECX                             ; 00521969
    ADD EDX,0x4                         ; 0052196a
    MOV dword ptr [ESP + 0xfc],ECX      ; 0052196d
    MOV dword ptr [ESP + 0xf4],EDX      ; 00521974
    JMP 0x00521917                      ; 0052197b
        ;   XREF to: 00521917 (UNCONDITIONAL_JUMP)  ; LAB_00521917
    XOR EAX,EAX                         ; 0052197d
        ;   Label: LAB_0052197d
    MOV ESP,EBP                         ; 0052197f
    POP EBP                             ; 00521981
    POP EDI                             ; 00521982
    POP ESI                             ; 00521983
    POP EBX                             ; 00521984
    RET                                 ; 00521985
    MOV EAX,dword ptr [EBP + 0x14]      ; 00521986
        ;   Label: LAB_00521986
    MOV ESI,dword ptr [EAX + 0x2628]    ; 00521989
    PUSH ESI                            ; 0052198f
    PUSH EBX                            ; 00521990
    CALL core_dest.cpp_CActorDestination_acceptsActor_FUN_004594a0 ; 00521991
        ;   XREF to: 004594a0 (UNCONDITIONAL_CALL)  ; int core_dest.cpp_CActorDestination_acceptsActor_FUN_004594a0(CActorDestination * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00521996
    TEST EAX,EAX                        ; 00521999
    JZ 0x0052195b                       ; 0052199b
        ;   XREF to: 0052195b (CONDITIONAL_JUMP)  ; LAB_0052195b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052199d
    MOV EAX,dword ptr [EAX + 0x2628]    ; 005219a0
    ADD EAX,0x20                        ; 005219a6
    PUSH EAX                            ; 005219a9
    MOV EDI,dword ptr [EBP + 0x14]      ; 005219aa
    PUSH EDI                            ; 005219ad
    LEA ESI,[ESP + 0xd0]                ; 005219ae
    ADD EBX,0x20                        ; 005219b5
    CALL core_actor.cpp_FUN_00408bf0    ; 005219b8
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA EDI,[ESP + 0x70]                ; 005219bd
    ADD ESP,0x8                         ; 005219c1
    LEA ESI,[ESP + 0xc8]                ; 005219c4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005219cb
    PUSH EBX                            ; 005219ce
    MOVSD ES:EDI,ESI                    ; 005219cf
    MOVSD ES:EDI,ESI                    ; 005219d0
    MOVSD ES:EDI,ESI                    ; 005219d1
    PUSH EAX                            ; 005219d2
    LEA ESI,[ESP + 0x28]                ; 005219d3
    LEA EDI,[ESP + 0x40]                ; 005219d7
    CALL core_actor.cpp_FUN_00408bf0    ; 005219db
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x28]                ; 005219e0
    ADD ESP,0x8                         ; 005219e4
    MOVSD ES:EDI,ESI                    ; 005219e7
    MOVSD ES:EDI,ESI                    ; 005219e8
    MOVSD ES:EDI,ESI                    ; 005219e9
    FLD float ptr [ESP + 0x38]          ; 005219ea
    FLD float ptr [ESP + 0x3c]          ; 005219ee
    FLD float ptr [ESP + 0x40]          ; 005219f2
    LEA EDI,[ESP + 0x14]                ; 005219f6
    LEA ESI,[ESP + 0x98]                ; 005219fa
    FXCH ST2                            ; 00521a01
    FSUB float ptr [ESP + 0x68]         ; 00521a03
    FXCH                                ; 00521a07
    FSUB float ptr [ESP + 0x6c]         ; 00521a09
    FXCH ST2                            ; 00521a0d
    FSUB float ptr [ESP + 0x70]         ; 00521a0f
    FXCH                                ; 00521a13
    FSTP float ptr [ESP + 0x98]         ; 00521a15
    FXCH                                ; 00521a1c
    FSTP float ptr [ESP + 0x9c]         ; 00521a1e
    FSTP float ptr [ESP + 0xa0]         ; 00521a25
    MOVSD ES:EDI,ESI                    ; 00521a2c
    MOVSD ES:EDI,ESI                    ; 00521a2d
    MOVSD ES:EDI,ESI                    ; 00521a2e
    FLDZ                                ; 00521a2f
    FCOMP float ptr [ESP + 0x1c]        ; 00521a31
    FNSTSW AX                           ; 00521a35
    SAHF                                ; 00521a37
    JNC 0x0052195b                      ; 00521a38
        ;   XREF to: 0052195b (CONDITIONAL_JUMP)  ; LAB_0052195b
    FLD float ptr [ESP + 0x1c]          ; 00521a3e
    FCOMP double ptr [0x005cd5bf]       ; 00521a42 | DAT_005cd5bf
    FNSTSW AX                           ; 00521a48
    SAHF                                ; 00521a4a
    JNC 0x0052195b                      ; 00521a4b
        ;   XREF to: 0052195b (CONDITIONAL_JUMP)  ; LAB_0052195b
    FLD float ptr [ESP + 0x14]          ; 00521a51
    FABS                                ; 00521a55
    FCOMP double ptr [0x005cd5c7]       ; 00521a57 | DAT_005cd5c7
    FNSTSW AX                           ; 00521a5d
    SAHF                                ; 00521a5f
    JNC 0x0052195b                      ; 00521a60
        ;   XREF to: 0052195b (CONDITIONAL_JUMP)  ; LAB_0052195b
    FLD float ptr [ESP + 0x18]          ; 00521a66
    FLDZ                                ; 00521a6a
    FXCH                                ; 00521a6c
    FSTP double ptr [ESP]               ; 00521a6e
    FCOMP double ptr [ESP]              ; 00521a71
    FNSTSW AX                           ; 00521a74
    SAHF                                ; 00521a76
    JNC 0x0052195b                      ; 00521a77
        ;   XREF to: 0052195b (CONDITIONAL_JUMP)  ; LAB_0052195b
    FLD double ptr [ESP]                ; 00521a7d
    FCOMP double ptr [0x005cd5cf]       ; 00521a80 | DAT_005cd5cf
    FNSTSW AX                           ; 00521a86
    SAHF                                ; 00521a88
    JNC 0x0052195b                      ; 00521a89
        ;   XREF to: 0052195b (CONDITIONAL_JUMP)  ; LAB_0052195b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00521a8f
    MOV EAX,dword ptr [EAX + 0x2628]    ; 00521a92
    TEST EAX,EAX                        ; 00521a98
    JNZ 0x00521b3a                      ; 00521a9a
        ;   XREF to: 00521b3a (CONDITIONAL_JUMP)  ; LAB_00521b3a
    PUSH 0x1                            ; 00521aa0
        ;   Label: LAB_00521aa0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00521aa2
    PUSH 0x21                           ; 00521aa5
    ADD EAX,0x158                       ; 00521aa7
    PUSH EAX                            ; 00521aac
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00521aad
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00521ab2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00521ab5
        ;   Label: LAB_00521ab5
    MOV ESI,dword ptr [EAX + 0x20b64]   ; 00521ab8
    TEST ESI,ESI                        ; 00521abe
    JZ 0x00521adb                       ; 00521ac0
        ;   XREF to: 00521adb (CONDITIONAL_JUMP)  ; LAB_00521adb
    PUSH 0x11b5                         ; 00521ac2
    PUSH ESI                            ; 00521ac7
    PUSH 0x5cd58f                       ; 00521ac8 | s_actionPending_d_prye_cpp_005cd58e+1
    MOV EAX,[0x005fb140]                ; 00521acd | g_CEditorToolsPtr
    PUSH EAX                            ; 00521ad2
    CALL shape_edittool.cpp_FUN_0047cee0 ; 00521ad3
        ;   XREF to: 0047cee0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047cee0()
    ADD ESP,0x10                        ; 00521ad8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00521adb
        ;   Label: LAB_00521adb
    MOV EBX,dword ptr [ESP + 0xf0]      ; 00521ade
    ADD EAX,0x20bb0                     ; 00521ae5
    ADD EBX,0x20                        ; 00521aea
    MOV dword ptr [EAX + -0x4c],0x2     ; 00521aed
    CMP EAX,EBX                         ; 00521af4
    JZ 0x00521b08                       ; 00521af6
        ;   XREF to: 00521b08 (CONDITIONAL_JUMP)  ; LAB_00521b08
    MOV EDX,dword ptr [EBX]             ; 00521af8
    MOV dword ptr [EAX],EDX             ; 00521afa
    MOV EDX,dword ptr [EBX + 0x4]       ; 00521afc
    MOV dword ptr [EAX + 0x4],EDX       ; 00521aff
    MOV EDX,dword ptr [EBX + 0x8]       ; 00521b02
    MOV dword ptr [EAX + 0x8],EDX       ; 00521b05
    MOV EBX,dword ptr [ESP + 0xf0]      ; 00521b08
        ;   Label: LAB_00521b08
    MOV EAX,dword ptr [EBP + 0x14]      ; 00521b0f
    ADD EBX,0x30                        ; 00521b12
    ADD EAX,0x20bbc                     ; 00521b15
    CMP EAX,EBX                         ; 00521b1a
    JZ 0x00521b2e                       ; 00521b1c
        ;   XREF to: 00521b2e (CONDITIONAL_JUMP)  ; LAB_00521b2e
    MOV EDX,dword ptr [EBX]             ; 00521b1e
    MOV dword ptr [EAX],EDX             ; 00521b20
    MOV EDX,dword ptr [EBX + 0x4]       ; 00521b22
    MOV dword ptr [EAX + 0x4],EDX       ; 00521b25
    MOV EDX,dword ptr [EBX + 0x8]       ; 00521b28
    MOV dword ptr [EAX + 0x8],EDX       ; 00521b2b
    MOV EAX,0x1                         ; 00521b2e
        ;   Label: LAB_00521b2e
    MOV ESP,EBP                         ; 00521b33
    POP EBP                             ; 00521b35
    POP EDI                             ; 00521b36
    POP ESI                             ; 00521b37
    POP EBX                             ; 00521b38
    RET                                 ; 00521b39
    MOV EDX,dword ptr [EBP + 0x14]      ; 00521b3a
        ;   Label: LAB_00521b3a
    PUSH EDX                            ; 00521b3d
    MOV ESI,dword ptr [EAX + 0x154]     ; 00521b3e
    PUSH EAX                            ; 00521b44
    CALL dword ptr [ESI + 0x84]         ; 00521b45
    ADD ESP,0x8                         ; 00521b4b
    CMP EAX,0x4                         ; 00521b4e
    SETZ AL                             ; 00521b51
    AND EAX,0xff                        ; 00521b54
    JZ 0x00521aa0                       ; 00521b59
        ;   XREF to: 00521aa0 (CONDITIONAL_JUMP)  ; LAB_00521aa0
    PUSH 0x1                            ; 00521b5f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00521b61
    PUSH 0x25                           ; 00521b64
    ADD EAX,0x158                       ; 00521b66
    PUSH EAX                            ; 00521b6b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00521b6c
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00521b71
    PUSH EBX                            ; 00521b74
    MOV ECX,dword ptr [EBP + 0x14]      ; 00521b75
    PUSH ECX                            ; 00521b78
    LEA ESI,[ESP + 0xe8]                ; 00521b79
    LEA EDI,[ESP + 0x88]                ; 00521b80
    CALL core_actor.cpp_FUN_00408bf0    ; 00521b87
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    ADD ESP,0x8                         ; 00521b8c
    LEA ESI,[ESP + 0xe0]                ; 00521b8f
    MOV EBX,dword ptr [EBP + 0x14]      ; 00521b96
    LEA EAX,[ESP + 0x80]                ; 00521b99
    ADD EBX,0x20c8c                     ; 00521ba0
    MOVSD ES:EDI,ESI                    ; 00521ba6
    MOVSD ES:EDI,ESI                    ; 00521ba7
    MOVSD ES:EDI,ESI                    ; 00521ba8
    CMP EBX,EAX                         ; 00521ba9
    JZ 0x00521bca                       ; 00521bab
        ;   XREF to: 00521bca (CONDITIONAL_JUMP)  ; LAB_00521bca
    MOV EAX,dword ptr [ESP + 0x80]      ; 00521bad
    MOV dword ptr [EBX],EAX             ; 00521bb4
    MOV EAX,dword ptr [ESP + 0x84]      ; 00521bb6
    MOV dword ptr [EBX + 0x4],EAX       ; 00521bbd
    MOV EAX,dword ptr [ESP + 0x88]      ; 00521bc0
    MOV dword ptr [EBX + 0x8],EAX       ; 00521bc7
    MOV EAX,dword ptr [EBP + 0x14]      ; 00521bca
        ;   Label: LAB_00521bca
    FLD float ptr [EAX + 0x20ca8]       ; 00521bcd
    MOV EBX,dword ptr [EAX + 0x2628]    ; 00521bd3
    FSUB float ptr [EAX + 0x20c9c]      ; 00521bd9
    PUSH EBX                            ; 00521bdf
    FSTP float ptr [ESP + 0x104]        ; 00521be0
    CALL core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_00517e80 ; 00521be7
        ;   XREF to: 00517e80 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_00517e80()
    MOV dword ptr [ESP + 0x108],EAX     ; 00521bec
    FLD float ptr [ESP + 0x108]         ; 00521bf3
    ADD ESP,0x4                         ; 00521bfa
    FSUBR float ptr [ESP + 0x100]       ; 00521bfd
    MOV EAX,dword ptr [EBP + 0x14]      ; 00521c04
    FADD float ptr [EAX + 0x20c90]      ; 00521c07
    FSTP float ptr [EAX + 0x20c90]      ; 00521c0d
    JMP 0x00521ab5                      ; 00521c13
        ;   XREF to: 00521ab5 (UNCONDITIONAL_JUMP)  ; LAB_00521ab5
    MOV ECX,dword ptr [EBP + 0x14]      ; 00521c18
        ;   Label: LAB_00521c18
    PUSH ECX                            ; 00521c1b
    PUSH EAX                            ; 00521c1c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 00521c1d
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00521c22
    MOV EAX,dword ptr [EBP + 0x14]      ; 00521c25
    MOV EBX,dword ptr [EAX + 0x2628]    ; 00521c28
    PUSH EBX                            ; 00521c2e
    MOV ESI,dword ptr [0x00603b28]      ; 00521c2f | g_CDemonSetPtr
    PUSH ESI                            ; 00521c35 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 00521c36
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00521c3b
    MOV ESI,dword ptr [EBP + 0x14]      ; 00521c3e
    LEA EDI,[ESP + 0x5c]                ; 00521c41
    XOR EBX,EBX                         ; 00521c45
    MOV ESI,dword ptr [ESI + 0x2628]    ; 00521c47
    MOV EDX,0x3f800000                  ; 00521c4d
    LEA EAX,[ESP + 0x8]                 ; 00521c52
    LEA ESI,[ESI + 0x20]                ; 00521c56
    MOV ECX,dword ptr [EBP + 0x14]      ; 00521c59
    PUSH EAX                            ; 00521c5c
    MOVSD ES:EDI,ESI                    ; 00521c5d
    MOVSD ES:EDI,ESI                    ; 00521c5e
    MOVSD ES:EDI,ESI                    ; 00521c5f
    PUSH ECX                            ; 00521c60
    LEA ESI,[ESP + 0xac]                ; 00521c61
    XOR EDI,EDI                         ; 00521c68
    MOV dword ptr [ESP + 0x18],EDX      ; 00521c6a
    MOV dword ptr [ESP + 0x10],EDI      ; 00521c6e
    MOV dword ptr [ESP + 0x14],EDI      ; 00521c72
    CALL core_actor.cpp_FUN_00408b00    ; 00521c76
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA EDI,[ESP + 0xc4]                ; 00521c7b
    ADD ESP,0x8                         ; 00521c82
    LEA ESI,[ESP + 0xa4]                ; 00521c85
    FLD float ptr [ESP + 0x5c]          ; 00521c8c
    FLD float ptr [ESP + 0x60]          ; 00521c90
    FLD float ptr [ESP + 0x64]          ; 00521c94
    MOVSD ES:EDI,ESI                    ; 00521c98
    MOVSD ES:EDI,ESI                    ; 00521c99
    MOVSD ES:EDI,ESI                    ; 00521c9a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00521c9b
    MOV EDI,0x3fc00000                  ; 00521c9e
    LEA ESI,[ESP + 0xb0]                ; 00521ca3
    MOV EAX,dword ptr [EAX + 0x24]      ; 00521caa
    FXCH ST2                            ; 00521cad
    FADD float ptr [ESP + 0xbc]         ; 00521caf
    FXCH                                ; 00521cb6
    FADD float ptr [ESP + 0xc0]         ; 00521cb8
    FXCH ST2                            ; 00521cbf
    FADD float ptr [ESP + 0xc4]         ; 00521cc1
    FXCH                                ; 00521cc8
    FSTP float ptr [ESP + 0x5c]         ; 00521cca
    FXCH                                ; 00521cce
    FSTP float ptr [ESP + 0x60]         ; 00521cd0
    MOV dword ptr [ESP + 0x60],EAX      ; 00521cd4
    LEA EAX,[ESP + 0x50]                ; 00521cd8
    FSTP float ptr [ESP + 0x64]         ; 00521cdc
    PUSH EAX                            ; 00521ce0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00521ce1
    MOV dword ptr [ESP + 0x54],EBX      ; 00521ce4
    PUSH EAX                            ; 00521ce8
    MOV dword ptr [ESP + 0x5c],EBX      ; 00521ce9
    MOV dword ptr [ESP + 0x60],EDI      ; 00521ced
    CALL core_actor.cpp_FUN_00408b00    ; 00521cf1
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    ADD ESP,0x8                         ; 00521cf6
    LEA EDI,[ESP + 0x74]                ; 00521cf9
    PUSH 0x40400000                     ; 00521cfd
    LEA ESI,[ESP + 0xb4]                ; 00521d02
    PUSH 0x3dcccccd                     ; 00521d09
    MOVSD ES:EDI,ESI                    ; 00521d0e
    MOVSD ES:EDI,ESI                    ; 00521d0f
    MOVSD ES:EDI,ESI                    ; 00521d10
    PUSH 0x3f800000                     ; 00521d11
    PUSH dword ptr [ESP + 0x88]         ; 00521d16
    PUSH dword ptr [ESP + 0x84]         ; 00521d1d
    PUSH dword ptr [ESP + 0x78]         ; 00521d24
    MOV EDX,dword ptr [0x00603b28]      ; 00521d28 | g_CDemonSetPtr
    PUSH dword ptr [ESP + 0x74]         ; 00521d2e
    PUSH EDX                            ; 00521d32 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053de10 ; 00521d33
        ;   XREF to: 0053de10 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053de10()
    MOV dword ptr [ESP + 0x124],EAX     ; 00521d38
    FLD float ptr [ESP + 0x124]         ; 00521d3f
    FLD1                                ; 00521d46
    ADD ESP,0x20                        ; 00521d48
    FCOMPP                              ; 00521d4b
    FNSTSW AX                           ; 00521d4d
    SAHF                                ; 00521d4f
    JA 0x00521e49                       ; 00521d50
        ;   XREF to: 00521e49 (CONDITIONAL_JUMP)  ; LAB_00521e49
    FLD float ptr [ESP + 0x5c]          ; 00521d56
    FLD float ptr [ESP + 0x60]          ; 00521d5a
    FLD float ptr [ESP + 0x64]          ; 00521d5e
    PUSH 0x3f000000                     ; 00521d62
    LEA EDI,[ESP + 0x30]                ; 00521d67
    LEA ESI,[ESP + 0xd8]                ; 00521d6b
    LEA EAX,[ESP + 0x30]                ; 00521d72
    MOV ECX,dword ptr [0x00603b28]      ; 00521d76 | g_CDemonSetPtr
    FXCH ST2                            ; 00521d7c
    FADD float ptr [ESP + 0x78]         ; 00521d7e
    FXCH                                ; 00521d82
    FADD float ptr [ESP + 0x7c]         ; 00521d84
    FXCH ST2                            ; 00521d88
    FADD float ptr [ESP + 0x80]         ; 00521d8a
    PUSH EAX                            ; 00521d91
    FXCH                                ; 00521d92
    FSTP float ptr [ESP + 0xdc]         ; 00521d94
    FXCH                                ; 00521d9b
    FSTP float ptr [ESP + 0xe0]         ; 00521d9d
    FSTP float ptr [ESP + 0xe4]         ; 00521da4
    PUSH ECX                            ; 00521dab | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 00521dac
    MOVSD ES:EDI,ESI                    ; 00521dad
    MOVSD ES:EDI,ESI                    ; 00521dae
    CALL core_setcolid.cpp_FUN_0053bc80 ; 00521daf
        ;   XREF to: 0053bc80 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053bc80()
    MOV dword ptr [ESP + 0x110],EAX     ; 00521db4
    FLD float ptr [ESP + 0x110]         ; 00521dbb
    ADD ESP,0xc                         ; 00521dc2
    MOV EBX,dword ptr [0x00603b28]      ; 00521dc5 | g_CDemonSetPtr
    PUSH EBX                            ; 00521dcb | g_CDemonSetInstance
    FSTP float ptr [ESP + 0xf0]         ; 00521dcc
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 00521dd3
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00521dd8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00521ddb
    FLD float ptr [ESP + 0xec]          ; 00521dde
    FSUB float ptr [EAX + 0x24]         ; 00521de5
    FABS                                ; 00521de8
    FLD1                                ; 00521dea
    FCOMPP                              ; 00521dec
    FNSTSW AX                           ; 00521dee
    SAHF                                ; 00521df0
    JC 0x0052197d                       ; 00521df1
        ;   XREF to: 0052197d (CONDITIONAL_JUMP)  ; LAB_0052197d
    XOR EBX,EBX                         ; 00521df7
    MOV dword ptr [ESP + 0xf8],EBX      ; 00521df9
    MOV EAX,[0x00603b28]                ; 00521e00 | g_CDemonSetPtr
        ;   Label: LAB_00521e00
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 00521e05 | g_CDemonSetInstance.actor_count
    JL 0x00521e75                       ; 00521e0b
        ;   XREF to: 00521e75 (CONDITIONAL_JUMP)  ; LAB_00521e75
    MOV EAX,dword ptr [EBP + 0x14]      ; 00521e0d
    MOV dword ptr [EAX + 0x20b64],0x6   ; 00521e10
    MOV EAX,dword ptr [EAX + 0x2628]    ; 00521e1a
    TEST EAX,EAX                        ; 00521e20
    JNZ 0x00521f0a                      ; 00521e22
        ;   XREF to: 00521f0a (CONDITIONAL_JUMP)  ; LAB_00521f0a
    PUSH 0x1                            ; 00521e28
        ;   Label: LAB_00521e28
    MOV EAX,dword ptr [EBP + 0x14]      ; 00521e2a
    PUSH 0x1f                           ; 00521e2d
    ADD EAX,0x158                       ; 00521e2f
    PUSH EAX                            ; 00521e34
        ;   Label: LAB_00521e34
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00521e35
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00521e3a
    MOV EAX,0x1                         ; 00521e3d
    MOV ESP,EBP                         ; 00521e42
    POP EBP                             ; 00521e44
    POP EDI                             ; 00521e45
    POP ESI                             ; 00521e46
    POP EBX                             ; 00521e47
    RET                                 ; 00521e48
    MOV EDI,dword ptr [0x00603b28]      ; 00521e49 | g_CDemonSetPtr
        ;   Label: LAB_00521e49
    PUSH EDI                            ; 00521e4f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 00521e50
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00521e55
    XOR EAX,EAX                         ; 00521e58
    MOV ESP,EBP                         ; 00521e5a
    POP EBP                             ; 00521e5c
    POP EDI                             ; 00521e5d
    POP ESI                             ; 00521e5e
    POP EBX                             ; 00521e5f
    RET                                 ; 00521e60
    MOV EDI,dword ptr [ESP + 0xf8]      ; 00521e61
        ;   Label: LAB_00521e61
    ADD EDI,0x4                         ; 00521e68
    INC EBX                             ; 00521e6b
    MOV dword ptr [ESP + 0xf8],EDI      ; 00521e6c
    JMP 0x00521e00                      ; 00521e73
        ;   XREF to: 00521e00 (UNCONDITIONAL_JUMP)  ; LAB_00521e00
    MOV ECX,dword ptr [ESP + 0xf8]      ; 00521e75
        ;   Label: LAB_00521e75
    MOV EDX,dword ptr [0x007f8fc8]      ; 00521e7c | g_CCrateClassInfo.name_hash
    ADD EAX,ECX                         ; 00521e82
    PUSH EDX                            ; 00521e84
    MOV ESI,dword ptr [EAX + 0x14d168]  ; 00521e85 | g_CDemonSetInstance.actors[0]
    PUSH ESI                            ; 00521e8b
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00521e8c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00521e91
    TEST EAX,EAX                        ; 00521e94
    JZ 0x00521e61                       ; 00521e96
        ;   XREF to: 00521e61 (CONDITIONAL_JUMP)  ; LAB_00521e61
    FLD float ptr [EAX + 0x20]          ; 00521e98
    FLD float ptr [EAX + 0x24]          ; 00521e9b
    FLD float ptr [EAX + 0x28]          ; 00521e9e
    LEA EDI,[ESP + 0x44]                ; 00521ea1
    LEA ESI,[ESP + 0x8c]                ; 00521ea5
    FXCH ST2                            ; 00521eac
    FSUB float ptr [ESP + 0x5c]         ; 00521eae
    FXCH                                ; 00521eb2
    FSUB float ptr [ESP + 0x60]         ; 00521eb4
    FXCH ST2                            ; 00521eb8
    FSUB float ptr [ESP + 0x64]         ; 00521eba
    FXCH                                ; 00521ebe
    FSTP float ptr [ESP + 0x8c]         ; 00521ec0
    FXCH                                ; 00521ec7
    FSTP float ptr [ESP + 0x90]         ; 00521ec9
    FSTP float ptr [ESP + 0x94]         ; 00521ed0
    MOVSD ES:EDI,ESI                    ; 00521ed7
    MOVSD ES:EDI,ESI                    ; 00521ed8
    MOVSD ES:EDI,ESI                    ; 00521ed9
    FLD float ptr [ESP + 0x48]          ; 00521eda
    FMUL ST0                            ; 00521ede
    FLD float ptr [ESP + 0x44]          ; 00521ee0
    FMUL ST0                            ; 00521ee4
    FADDP                               ; 00521ee6
    FLD float ptr [ESP + 0x4c]          ; 00521ee8
    FMUL ST0                            ; 00521eec
    FADDP                               ; 00521eee
    FSQRT                               ; 00521ef0
    FCOMP double ptr [0x005cd5c7]       ; 00521ef2 | DAT_005cd5c7
    FNSTSW AX                           ; 00521ef8
    SAHF                                ; 00521efa
    JNC 0x00521e61                      ; 00521efb
        ;   XREF to: 00521e61 (CONDITIONAL_JUMP)  ; LAB_00521e61
    XOR EAX,EAX                         ; 00521f01
    MOV ESP,EBP                         ; 00521f03
    POP EBP                             ; 00521f05
    POP EDI                             ; 00521f06
    POP ESI                             ; 00521f07
    POP EBX                             ; 00521f08
    RET                                 ; 00521f09
    MOV EDI,dword ptr [EBP + 0x14]      ; 00521f0a
        ;   Label: LAB_00521f0a
    PUSH EDI                            ; 00521f0d
    MOV EBX,dword ptr [EAX + 0x154]     ; 00521f0e
    PUSH EAX                            ; 00521f14
    CALL dword ptr [EBX + 0x84]         ; 00521f15
    ADD ESP,0x8                         ; 00521f1b
    CMP EAX,0x4                         ; 00521f1e
    SETZ AL                             ; 00521f21
    AND EAX,0xff                        ; 00521f24
    JZ 0x00521e28                       ; 00521f29
        ;   XREF to: 00521e28 (CONDITIONAL_JUMP)  ; LAB_00521e28
    PUSH 0x1                            ; 00521f2f
    PUSH 0x24                           ; 00521f31
    LEA EAX,[EDI + 0x158]               ; 00521f33
    JMP 0x00521e34                      ; 00521f39
        ;   XREF to: 00521e34 (UNCONDITIONAL_JUMP)  ; LAB_00521e34

