; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stranger_cpp_CStranger_renderOpaque_FUN_0056b770(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined1* switchdataD_0056b748 = 0056b956
;   undefined4 DAT_005ebc45
;   undefined4 DAT_005ebc4d
;   undefined4 DAT_0060b280
;   undefined4 DAT_00614d30
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ba5c50
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.collision_normal.x
;   undefined4 DAT_0264be30
;   undefined4 DAT_0264be68
;   undefined4 DAT_0264be88
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_actor.cpp_FUN_00408cf0
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0
;   core_cloth.cpp_CClothList_reset_FUN_005b1550
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   core_fire.cpp_CFireEffect_createLaserPath_FUN_0049d840
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0
;   core_setcolid.cpp_FUN_00536210
;   core_stranger.cpp_CStranger_updateWeaponPosition_FUN_005683d0
;   core_stranger.cpp_FUN_0056da90
;   core_xform.cpp_FUN_00591c10
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b770
        ;   Label: core_stranger.cpp_CStranger_renderOpaque_FUN_0056b770
    PUSH ESI                            ; 0056b771
    PUSH EDI                            ; 0056b772
    PUSH EBP                            ; 0056b773
    MOV EBP,ESP                         ; 0056b774
    SUB ESP,0x1ac                       ; 0056b776
    SUB EBP,0x7e                        ; 0056b77c
    MOV EBX,dword ptr [EBP + 0x92]      ; 0056b77f
    PUSH EBX                            ; 0056b785
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0 ; 0056b786
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0056b78b
    TEST EAX,EAX                        ; 0056b78e
    JNZ 0x0056b79a                      ; 0056b790
        ;   XREF to: 0056b79a (CONDITIONAL_JUMP)  ; LAB_0056b79a
    LEA ESP,[EBP + 0x7e]                ; 0056b792
    POP EBP                             ; 0056b795
    POP EDI                             ; 0056b796
    POP ESI                             ; 0056b797
    POP EBX                             ; 0056b798
    RET                                 ; 0056b799
    PUSH 0x6                            ; 0056b79a
        ;   Label: LAB_0056b79a
    PUSH EBX                            ; 0056b79c
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0 ; 0056b79d
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [EBP + 0x7a],EAX      ; 0056b7a2
    ADD ESP,0x8                         ; 0056b7a5
    FLD float ptr [EBP + 0x7a]          ; 0056b7a8
    FCOMP double ptr [0x005ebc45]       ; 0056b7ab | DAT_005ebc45
    FNSTSW AX                           ; 0056b7b1
    SAHF                                ; 0056b7b3
    JBE 0x0056b8ea                      ; 0056b7b4
        ;   XREF to: 0056b8ea (CONDITIONAL_JUMP)  ; LAB_0056b8ea
    XOR EDX,EDX                         ; 0056b7ba
    MOV ECX,dword ptr [EBX + 0x2698]    ; 0056b7bc
    MOV dword ptr [EBP + 0x76],EDX      ; 0056b7c2
    TEST ECX,ECX                        ; 0056b7c5
    JZ 0x0056b7cf                       ; 0056b7c7
        ;   XREF to: 0056b7cf (CONDITIONAL_JUMP)  ; LAB_0056b7cf
    LEA EAX,[ECX + 0x20]                ; 0056b7c9
    MOV dword ptr [EBP + 0x76],EAX      ; 0056b7cc
    MOV ESI,dword ptr [EBX + 0x25698]   ; 0056b7cf
        ;   Label: LAB_0056b7cf
    TEST ESI,ESI                        ; 0056b7d5
    JZ 0x0056b7df                       ; 0056b7d7
        ;   XREF to: 0056b7df (CONDITIONAL_JUMP)  ; LAB_0056b7df
    LEA EAX,[ESI + 0x20]                ; 0056b7d9
    MOV dword ptr [EBP + 0x76],EAX      ; 0056b7dc
    CMP dword ptr [EBP + 0x76],0x0      ; 0056b7df
        ;   Label: LAB_0056b7df
    JZ 0x0056b8ea                       ; 0056b7e3
        ;   XREF to: 0056b8ea (CONDITIONAL_JUMP)  ; LAB_0056b8ea
    MOV EAX,[0x0061b5a8]                ; 0056b7e9 | g_CDemonSetPtr
    PUSH EAX                            ; 0056b7ee | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 0056b7ef
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0056b7f4
    PUSH 0x1                            ; 0056b7f7
    MOV EDX,dword ptr [0x0061b5a8]      ; 0056b7f9 | g_CDemonSetPtr
    PUSH EDX                            ; 0056b7ff | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0 ; 0056b800
        ;   XREF to: 00537eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 0056b805
    PUSH EBX                            ; 0056b808
    MOV ECX,dword ptr [0x0061b5a8]      ; 0056b809 | g_CDemonSetPtr
    PUSH ECX                            ; 0056b80f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0056b810
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0056b815
    MOV ESI,dword ptr [EBX + 0x25698]   ; 0056b818
    PUSH ESI                            ; 0056b81e
    MOV EDI,dword ptr [0x0061b5a8]      ; 0056b81f | g_CDemonSetPtr
    PUSH EDI                            ; 0056b825 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0056b826
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0056b82b
    MOV EAX,dword ptr [EBX + 0x2698]    ; 0056b82e
    PUSH EAX                            ; 0056b834
    MOV EDX,dword ptr [0x0061b5a8]      ; 0056b835 | g_CDemonSetPtr
    PUSH EDX                            ; 0056b83b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0056b83c
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0056b841
    PUSH EBX                            ; 0056b844
    LEA ESI,[EBP + -0x26]               ; 0056b845
    LEA EDI,[EBP + -0x2]                ; 0056b848
    CALL core_stranger.cpp_FUN_0056da90 ; 0056b84b
        ;   XREF to: 0056da90 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_0056da90()
    ADD ESP,0x4                         ; 0056b850
    LEA EAX,[EBP + -0x2]                ; 0056b853
    LEA ESI,[EBP + -0x26]               ; 0056b856
    PUSH EAX                            ; 0056b859
    MOVSD ES:EDI,ESI                    ; 0056b85a
    MOVSD ES:EDI,ESI                    ; 0056b85b
    MOVSD ES:EDI,ESI                    ; 0056b85c
    PUSH EBX                            ; 0056b85d
    LEA ESI,[EBP + -0x3e]               ; 0056b85e
    LEA EDI,[EBP + 0x22]                ; 0056b861
    CALL core_actor.cpp_FUN_00408cf0    ; 0056b864
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[EBP + -0x3e]               ; 0056b869
    ADD ESP,0x8                         ; 0056b86c
    LEA EAX,[EBP + 0x22]                ; 0056b86f
    MOV ECX,dword ptr [EBP + 0x76]      ; 0056b872
    PUSH EAX                            ; 0056b875
    MOVSD ES:EDI,ESI                    ; 0056b876
    MOVSD ES:EDI,ESI                    ; 0056b877
    MOVSD ES:EDI,ESI                    ; 0056b878
    PUSH ECX                            ; 0056b879
    MOV ESI,dword ptr [0x0061b5a8]      ; 0056b87a | g_CDemonSetPtr
    PUSH ESI                            ; 0056b880 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00536210 ; 0056b881
        ;   XREF to: 00536210 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00536210()
    FLDZ                                ; 0056b886
    MOV dword ptr [EBP + 0x7a],EAX      ; 0056b888
    ADD ESP,0xc                         ; 0056b88b
    MOV EAX,dword ptr [EBP + 0x7a]      ; 0056b88e
    MOV dword ptr [EBP + 0x72],EAX      ; 0056b891
    FCOMP float ptr [EBP + 0x72]        ; 0056b894
    FNSTSW AX                           ; 0056b897
    SAHF                                ; 0056b899
    JBE 0x0056b8a3                      ; 0056b89a
        ;   XREF to: 0056b8a3 (CONDITIONAL_JUMP)  ; LAB_0056b8a3
    MOV dword ptr [EBP + 0x72],0x41200000 ; 0056b89c
    PUSH 0x0                            ; 0056b8a3
        ;   Label: LAB_0056b8a3
    PUSH 0x0                            ; 0056b8a5
    MOV EAX,[0x0061b5a8]                ; 0056b8a7 | g_CDemonSetPtr
    PUSH 0xff                           ; 0056b8ac
    ADD EAX,0x14d128                    ; 0056b8b1
    PUSH dword ptr [EBP + 0x72]         ; 0056b8b6
    PUSH EAX                            ; 0056b8b9 | g_CDemonSetInstance.collision_normal.x
    PUSH 0x3f800000                     ; 0056b8ba
    LEA EAX,[EBP + 0x22]                ; 0056b8bf
    PUSH 0x3f800000                     ; 0056b8c2
    PUSH EAX                            ; 0056b8c7
    MOV EAX,dword ptr [EBP + 0x76]      ; 0056b8c8
    PUSH EAX                            ; 0056b8cb
    MOV EDX,dword ptr [0x00614d30]      ; 0056b8cc | DAT_00614d30
    PUSH EDX                            ; 0056b8d2
    CALL core_fire.cpp_CFireEffect_createLaserPath_FUN_0049d840 ; 0056b8d3
        ;   XREF to: 0049d840 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserPath_FUN_0049d840(CFireEffect * this_ptr, CVector3f * start_position, CVector3f * velocity, float beam_width, ...)
    ADD ESP,0x28                        ; 0056b8d8
    MOV ECX,dword ptr [0x0061b5a8]      ; 0056b8db | g_CDemonSetPtr
    PUSH ECX                            ; 0056b8e1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 0056b8e2
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0056b8e7
    MOV ESI,dword ptr [EBX + 0x25698]   ; 0056b8ea
        ;   Label: LAB_0056b8ea
    TEST ESI,ESI                        ; 0056b8f0
    JZ 0x0056ba07                       ; 0056b8f2
        ;   XREF to: 0056ba07 (CONDITIONAL_JUMP)  ; LAB_0056ba07
    CMP ESI,dword ptr [EBX + 0x2620]    ; 0056b8f8
    JZ 0x0056ba07                       ; 0056b8fe
        ;   XREF to: 0056ba07 (CONDITIONAL_JUMP)  ; LAB_0056ba07
    CMP ESI,dword ptr [EBX + 0x2698]    ; 0056b904
    JZ 0x0056ba07                       ; 0056b90a
        ;   XREF to: 0056ba07 (CONDITIONAL_JUMP)  ; LAB_0056ba07
    MOV EAX,[0x0264be88]                ; 0056b910 | DAT_0264be88
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 0056b915
    JZ 0x0056ba07                       ; 0056b91d
        ;   XREF to: 0056ba07 (CONDITIONAL_JUMP)  ; LAB_0056ba07
    PUSH ESI                            ; 0056b923
    MOV EDX,dword ptr [ESI + 0x2b0]     ; 0056b924
    CALL dword ptr [EDX + 0x18]         ; 0056b92a
    ADD ESP,0x4                         ; 0056b92d
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056b930
    XOR ESI,ESI                         ; 0056b936
    TEST EAX,EAX                        ; 0056b938
    JZ 0x0056bbd4                       ; 0056b93a
        ;   XREF to: 0056bbd4 (CONDITIONAL_JUMP)  ; caseD_9
    MOV EAX,dword ptr [EAX + 0x43c]     ; 0056b940
    CMP EAX,0x9                         ; 0056b946
    JA 0x0056bbd4                       ; 0056b949
        ;   XREF to: 0056bbd4 (CONDITIONAL_JUMP)  ; caseD_9
    JMP dword ptr [EAX*0x4 + 0x56b748]  ; 0056b94f | caseD_5 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x2                         ; 0056b956
        ;   Label: caseD_0
    PUSH EAX                            ; 0056b95b
        ;   Label: LAB_0056b95b
    PUSH EBX                            ; 0056b95c
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0 ; 0056b95d
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [EBP + 0x7a],EAX      ; 0056b962
    ADD ESP,0x8                         ; 0056b965
    FLD float ptr [EBP + 0x7a]          ; 0056b968
    FCOMP double ptr [0x005ebc4d]       ; 0056b96b | DAT_005ebc4d
    FNSTSW AX                           ; 0056b971
    SAHF                                ; 0056b973
    JBE 0x0056b97b                      ; 0056b974
        ;   XREF to: 0056b97b (CONDITIONAL_JUMP)  ; LAB_0056b97b
    MOV ESI,0x1                         ; 0056b976
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056b97b
        ;   Label: LAB_0056b97b
    MOV EDI,dword ptr [EAX + 0x43c]     ; 0056b981
    CMP EDI,0x1                         ; 0056b987
    JNZ 0x0056bbdb                      ; 0056b98a
        ;   XREF to: 0056bbdb (CONDITIONAL_JUMP)  ; LAB_0056bbdb
    CMP dword ptr [EBX + 0x2d04],0x8    ; 0056b990
    JNZ 0x0056bbdb                      ; 0056b997
        ;   XREF to: 0056bbdb (CONDITIONAL_JUMP)  ; LAB_0056bbdb
    MOV ESI,EDI                         ; 0056b99d
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056b99f
        ;   Label: LAB_0056b99f
    PUSH EAX                            ; 0056b9a5
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0056b9a6
    CALL dword ptr [EDX + 0xf8]         ; 0056b9ac
    ADD ESP,0x4                         ; 0056b9b2
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056b9b5
        ;   Label: LAB_0056b9b5
    CMP dword ptr [EAX + 0x43c],0x0     ; 0056b9bb
    JNZ 0x0056b9fc                      ; 0056b9c2
        ;   XREF to: 0056b9fc (CONDITIONAL_JUMP)  ; LAB_0056b9fc
    PUSH 0x1                            ; 0056b9c4
    PUSH EBX                            ; 0056b9c6
    CALL core_stranger.cpp_CStranger_updateWeaponPosition_FUN_005683d0 ; 0056b9c7
        ;   XREF to: 005683d0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateWeaponPosition_FUN_005683d0(CStranger * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 0056b9cc
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056b9cf
    PUSH EAX                            ; 0056b9d5
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0056b9d6
    CALL dword ptr [EDX + 0x18]         ; 0056b9dc
    ADD ESP,0x4                         ; 0056b9df
    TEST ESI,ESI                        ; 0056b9e2
    JZ 0x0056b9fc                       ; 0056b9e4
        ;   XREF to: 0056b9fc (CONDITIONAL_JUMP)  ; LAB_0056b9fc
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056b9e6
    PUSH EAX                            ; 0056b9ec
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0056b9ed
    CALL dword ptr [EDX + 0xf8]         ; 0056b9f3
    ADD ESP,0x4                         ; 0056b9f9
    PUSH 0x0                            ; 0056b9fc
        ;   Label: LAB_0056b9fc
    PUSH EBX                            ; 0056b9fe
    CALL core_stranger.cpp_CStranger_updateWeaponPosition_FUN_005683d0 ; 0056b9ff
        ;   XREF to: 005683d0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateWeaponPosition_FUN_005683d0(CStranger * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 0056ba04
    CMP dword ptr [EBX + 0x255e8],0x0   ; 0056ba07
        ;   Label: LAB_0056ba07
    JZ 0x0056bb65                       ; 0056ba0e
        ;   XREF to: 0056bb65 (CONDITIONAL_JUMP)  ; LAB_0056bb65
    MOV EAX,[0x0264be88]                ; 0056ba14 | DAT_0264be88
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 0056ba19
    JZ 0x0056bb65                       ; 0056ba21
        ;   XREF to: 0056bb65 (CONDITIONAL_JUMP)  ; LAB_0056bb65
    LEA EAX,[EBX + 0x2437c]             ; 0056ba27
    MOV EAX,dword ptr [EAX + 0x458]     ; 0056ba2d
    MOV dword ptr [EBP + 0x6a],EAX      ; 0056ba33
    TEST EAX,EAX                        ; 0056ba36
    JZ 0x0056bb65                       ; 0056ba38
        ;   XREF to: 0056bb65 (CONDITIONAL_JUMP)  ; LAB_0056bb65
    PUSH EBX                            ; 0056ba3e
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 0056ba3f
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0056ba44
    LEA EAX,[EBX + 0x1134]              ; 0056ba47
    MOV EDI,dword ptr [EBX + 0x255e8]   ; 0056ba4d
    MOV dword ptr [EBP + 0x6e],EAX      ; 0056ba53
    CMP EDI,0x2                         ; 0056ba56
    JNZ 0x0056bbe8                      ; 0056ba59
        ;   XREF to: 0056bbe8 (CONDITIONAL_JUMP)  ; LAB_0056bbe8
    MOV ECX,0xbe0fd3f6                  ; 0056ba5f
    MOV EDI,0xc04507c8                  ; 0056ba64
    LEA EAX,[EBP + 0x2e]                ; 0056ba69
    MOV EDX,0x3e9135db                  ; 0056ba6c
    XOR ESI,ESI                         ; 0056ba71
    MOV dword ptr [EBP + 0x5e],ECX      ; 0056ba73
    MOV dword ptr [EBP + 0x66],ESI      ; 0056ba76
    MOV dword ptr [EBP + 0x62],EDI      ; 0056ba79
    PUSH EAX                            ; 0056ba7c
    MOV dword ptr [EBP + 0x4a],EDX      ; 0056ba7d
    LEA EDI,[EBP + 0x2e]                ; 0056ba80
    MOV EAX,0x3bc63091                  ; 0056ba83
    LEA ESI,[EBP + 0x5e]                ; 0056ba88
    MOV dword ptr [EBP + 0x46],EAX      ; 0056ba8b
    LEA EAX,[EBP + 0x46]                ; 0056ba8e
    MOV ECX,0x3f09a30a                  ; 0056ba91
    PUSH EAX                            ; 0056ba96
    LEA EAX,[EBP + 0xffffff02]          ; 0056ba97
    MOV dword ptr [EBP + 0x4e],ECX      ; 0056ba9d
    PUSH EAX                            ; 0056baa0
    MOVSD ES:EDI,ESI                    ; 0056baa1
    MOVSD ES:EDI,ESI                    ; 0056baa2
    MOVSD ES:EDI,ESI                    ; 0056baa3
    CALL core_xform.cpp_FUN_00591c10    ; 0056baa4
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    MOV ESI,dword ptr [0x0264be30]      ; 0056baa9 | DAT_0264be30
    LEA EAX,[ESI*0x4 + 0x0]             ; 0056baaf
    SUB EAX,ESI                         ; 0056bab6
    MOV ESI,dword ptr [EBP + 0x6e]      ; 0056bab8
    SHL EAX,0x4                         ; 0056babb
    ADD ESP,0xc                         ; 0056babe
    ADD EAX,ESI                         ; 0056bac1
    PUSH EAX                            ; 0056bac3
    LEA EAX,[EBP + 0xffffff02]          ; 0056bac4
    PUSH EAX                            ; 0056baca
    LEA ESI,[EBP + 0xfffffed2]          ; 0056bacb
    LEA EDI,[EBP + 0xffffff32]          ; 0056bad1
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 0056bad7
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 0056badc
    LEA ESI,[EBP + 0xfffffed2]          ; 0056bae1
    ADD ESP,0x8                         ; 0056bae7
        ;   Label: LAB_0056bae7
    MOVSD.REP ES:EDI,ESI                ; 0056baea
    LEA EAX,[EBP + 0xffffff32]          ; 0056baec
    PUSH EAX                            ; 0056baf2
    LEA ESI,[EBP + 0x3a]                ; 0056baf3
    LEA EDI,[EBP + -0x32]               ; 0056baf6
    CALL core_xform.cpp_matrixToEulerAngles_FUN_00591de0 ; 0056baf9
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_00591de0()
    LEA ESI,[EBP + 0x3a]                ; 0056bafe
    LEA EAX,[EBP + 0xffffff32]          ; 0056bb01
    ADD ESP,0x4                         ; 0056bb07
    MOVSD ES:EDI,ESI                    ; 0056bb0a
    MOVSD ES:EDI,ESI                    ; 0056bb0b
    MOVSD ES:EDI,ESI                    ; 0056bb0c
    PUSH EAX                            ; 0056bb0d
    LEA ESI,[EBP + -0x1a]               ; 0056bb0e
    LEA EDI,[EBP + 0x16]                ; 0056bb11
    CALL core_xform.cpp_FUN_00592720    ; 0056bb14
        ;   XREF to: 00592720 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00592720()
    ADD ESP,0x4                         ; 0056bb19
    LEA EAX,[EBP + 0x16]                ; 0056bb1c
    LEA ESI,[EBP + -0x1a]               ; 0056bb1f
    PUSH EAX                            ; 0056bb22
    LEA EAX,[EBP + -0x32]               ; 0056bb23
    MOVSD ES:EDI,ESI                    ; 0056bb26
    MOVSD ES:EDI,ESI                    ; 0056bb27
    MOVSD ES:EDI,ESI                    ; 0056bb28
    PUSH EAX                            ; 0056bb29
    MOV EDI,dword ptr [0x0060b280]      ; 0056bb2a | DAT_0060b280
    PUSH EDI                            ; 0056bb30 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0056bb31
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0056bb36
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0056bb39
    PUSH -0x1                           ; 0056bb3c
    ADD EAX,0x2b4                       ; 0056bb3e
    PUSH 0x0                            ; 0056bb43
    PUSH EAX                            ; 0056bb45
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 0056bb46
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0056bb4b
    MOV EAX,[0x0060b280]                ; 0056bb4e | DAT_0060b280
    PUSH EAX                            ; 0056bb53 | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 0056bb54
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0056bb59
    PUSH EBX                            ; 0056bb5c
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0056bb5d
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0056bb62
    MOV EAX,[0x0264be88]                ; 0056bb65 | DAT_0264be88
        ;   Label: LAB_0056bb65
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 0056bb6a
    JNZ 0x0056bb9f                      ; 0056bb72
        ;   XREF to: 0056bb9f (CONDITIONAL_JUMP)  ; LAB_0056bb9f
    MOV ECX,dword ptr [0x0060b280]      ; 0056bb74 | DAT_0060b280
    PUSH ECX                            ; 0056bb7a | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 0056bb7b
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0056bb80
    TEST EAX,EAX                        ; 0056bb83
    JNZ 0x0056bb9f                      ; 0056bb85
        ;   XREF to: 0056bb9f (CONDITIONAL_JUMP)  ; LAB_0056bb9f
    CMP dword ptr [EBX + 0x2d0c],0x0    ; 0056bb87
    JLE 0x0056bb9f                      ; 0056bb8e
        ;   XREF to: 0056bb9f (CONDITIONAL_JUMP)  ; LAB_0056bb9f
    ADD EBX,0x2d0c                      ; 0056bb90
    PUSH EBX                            ; 0056bb96
    CALL core_cloth.cpp_CClothList_reset_FUN_005b1550 ; 0056bb97
        ;   XREF to: 005b1550 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_reset_FUN_005b1550(CClothList * this_ptr)
    ADD ESP,0x4                         ; 0056bb9c
    MOV EAX,0x1                         ; 0056bb9f
        ;   Label: LAB_0056bb9f
    LEA ESP,[EBP + 0x7e]                ; 0056bba4
    POP EBP                             ; 0056bba7
    POP EDI                             ; 0056bba8
    POP ESI                             ; 0056bba9
    POP EBX                             ; 0056bbaa
    RET                                 ; 0056bbab
    MOV EAX,0x4                         ; 0056bbac
        ;   Label: caseD_1
    JMP 0x0056b95b                      ; 0056bbb1
        ;   XREF to: 0056b95b (UNCONDITIONAL_JUMP)  ; LAB_0056b95b
    MOV EAX,0x7                         ; 0056bbb6
        ;   Label: caseD_4
    JMP 0x0056b95b                      ; 0056bbbb
        ;   XREF to: 0056b95b (UNCONDITIONAL_JUMP)  ; LAB_0056b95b
    MOV EAX,0x5                         ; 0056bbc0
        ;   Label: caseD_2
    JMP 0x0056b95b                      ; 0056bbc5
        ;   XREF to: 0056b95b (UNCONDITIONAL_JUMP)  ; LAB_0056b95b
    MOV EAX,0x8                         ; 0056bbca
        ;   Label: caseD_7
    JMP 0x0056b95b                      ; 0056bbcf
        ;   XREF to: 0056b95b (UNCONDITIONAL_JUMP)  ; LAB_0056b95b
    XOR EAX,EAX                         ; 0056bbd4
        ;   Label: caseD_3
    JMP 0x0056b95b                      ; 0056bbd6
        ;   XREF to: 0056b95b (UNCONDITIONAL_JUMP)  ; LAB_0056b95b
    TEST ESI,ESI                        ; 0056bbdb
        ;   Label: LAB_0056bbdb
    JNZ 0x0056b99f                      ; 0056bbdd
        ;   XREF to: 0056b99f (CONDITIONAL_JUMP)  ; LAB_0056b99f
    JMP 0x0056b9b5                      ; 0056bbe3
        ;   XREF to: 0056b9b5 (UNCONDITIONAL_JUMP)  ; LAB_0056b9b5
    MOV EAX,0x3f94bac7                  ; 0056bbe8
        ;   Label: LAB_0056bbe8
    MOV EDX,0x3d488e0e                  ; 0056bbed
    MOV ECX,0x3ebc7410                  ; 0056bbf2
    LEA EDI,[EBP + 0xa]                 ; 0056bbf7
    LEA ESI,[EBP + 0x52]                ; 0056bbfa
    MOV dword ptr [EBP + 0x52],EAX      ; 0056bbfd
    MOV dword ptr [EBP + 0x5a],EDX      ; 0056bc00
    LEA EAX,[EBP + 0xa]                 ; 0056bc03
    MOV dword ptr [EBP + 0x56],ECX      ; 0056bc06
    PUSH EAX                            ; 0056bc09
    MOV EAX,0x3e05d9a1                  ; 0056bc0a
    MOVSD ES:EDI,ESI                    ; 0056bc0f
    MOVSD ES:EDI,ESI                    ; 0056bc10
    MOVSD ES:EDI,ESI                    ; 0056bc11
    MOV dword ptr [EBP + -0x6],EAX      ; 0056bc12
    LEA EAX,[EBP + -0xe]                ; 0056bc15
    MOV ESI,0x3f033b43                  ; 0056bc18
    PUSH EAX                            ; 0056bc1d
    LEA EAX,[EBP + -0x6e]               ; 0056bc1e
    MOV EDI,0xbca5f882                  ; 0056bc21
    PUSH EAX                            ; 0056bc26
    MOV dword ptr [EBP + -0xe],ESI      ; 0056bc27
    MOV dword ptr [EBP + -0xa],EDI      ; 0056bc2a
    CALL core_xform.cpp_FUN_00591c10    ; 0056bc2d
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    MOV ESI,dword ptr [0x0264be68]      ; 0056bc32 | DAT_0264be68
    LEA EAX,[ESI*0x4 + 0x0]             ; 0056bc38
    SUB EAX,ESI                         ; 0056bc3f
    MOV EDX,dword ptr [EBP + 0x6e]      ; 0056bc41
    SHL EAX,0x4                         ; 0056bc44
    ADD ESP,0xc                         ; 0056bc47
    ADD EAX,EDX                         ; 0056bc4a
    PUSH EAX                            ; 0056bc4c
    LEA EAX,[EBP + -0x6e]               ; 0056bc4d
    PUSH EAX                            ; 0056bc50
    LEA ESI,[EBP + 0xffffff62]          ; 0056bc51
    LEA EDI,[EBP + 0xffffff32]          ; 0056bc57
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 0056bc5d
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 0056bc62
    LEA ESI,[EBP + 0xffffff62]          ; 0056bc67
    JMP 0x0056bae7                      ; 0056bc6d
        ;   XREF to: 0056bae7 (UNCONDITIONAL_JUMP)  ; LAB_0056bae7

