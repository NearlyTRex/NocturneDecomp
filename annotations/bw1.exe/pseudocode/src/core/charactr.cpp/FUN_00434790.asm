; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00434790(CDemonActor *param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x8c]:1  local_8c
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[9]:
;   core_bird.cpp_CBird_process_FUN_00415340 at 0041536d
;   core_doc.cpp_FUN_00469550 at 00469744
;   core_dog.cpp_CZombieDog_process_FUN_004768a0 at 004768d7
;   core_npc.cpp_CNPC_process_FUN_005317c0 at 005317ed
;   core_shadow.cpp_CShadow_process_FUN_0055de50 at 0055de99
;   core_shadowsc.cpp_CShadowsc_process_FUN_00560630 at 00560691
;   core_stranger.cpp_CStranger_processFrame_FUN_00585b00 at 00585ce2
;   core_svetlana.cpp_CSvetlana_process_FUN_00593150 at 005931ca
;   core_yow.cpp_CYow_process_FUN_005b8440 at 005b849b
;
; Referenced Globals:
;   undefined4 s_CZombieDog_005d5ef6+1
;   TerminatedCString s_Bip01_head_005d5f02
;   TerminatedCString s_Bip01_head_005d5f0d
;   undefined4 DAT_005d5f1f
;   undefined4 DAT_005d5f27
;   undefined4 DAT_005d5f2b
;   undefined4 DAT_0061c010
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_007c6340
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.active_fog.temperature
;
; Called Functions:
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
;   core_setcolid.cpp_CDemonSet_isPointInWater_FUN_005595a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;   core_xform.cpp_FUN_005b5080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434790
        ;   Label: core_charactr.cpp_FUN_00434790
    PUSH ESI                            ; 00434791
    PUSH EDI                            ; 00434792
    PUSH EBP                            ; 00434793
    MOV EBP,ESP                         ; 00434794
    SUB ESP,0xa0                        ; 00434796
    SUB EBP,0x7a                        ; 0043479c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0043479f
    MOV EDX,dword ptr [EBX + 0x27bc]    ; 004347a5
    TEST EDX,EDX                        ; 004347ab
    JZ 0x00434814                       ; 004347ad
        ;   XREF to: 00434814 (CONDITIONAL_JUMP)  ; LAB_00434814
    CMP dword ptr [EBX + 0x27a8],0x0    ; 004347af
    JZ 0x0043481c                       ; 004347b6
        ;   XREF to: 0043481c (CONDITIONAL_JUMP)  ; LAB_0043481c
    CMP dword ptr [EBX + 0x27a8],0x0    ; 004347b8
        ;   Label: LAB_004347b8
    JZ 0x00434842                       ; 004347bf
        ;   XREF to: 00434842 (CONDITIONAL_JUMP)  ; LAB_00434842
    FLD float ptr [EBX + 0x2e60]        ; 004347c5
    FSUB float ptr [EBP + 0x92]         ; 004347cb
    FST float ptr [EBX + 0x2e60]        ; 004347d1
    FLDZ                                ; 004347d7
    FCOMPP                              ; 004347d9
    FNSTSW AX                           ; 004347db
    SAHF                                ; 004347dd
    JBE 0x00434814                      ; 004347de
        ;   XREF to: 00434814 (CONDITIONAL_JUMP)  ; LAB_00434814
    CMP dword ptr [EBX + 0x2e64],0x0    ; 004347e0
    JZ 0x00434822                       ; 004347e7
        ;   XREF to: 00434822 (CONDITIONAL_JUMP)  ; LAB_00434822
    FLD1                                ; 004347e9
    FADD float ptr [EBX + 0x2e60]       ; 004347eb
    FSTP float ptr [EBX + 0x2e60]       ; 004347f1
        ;   Label: LAB_004347f1
    CMP dword ptr [EBX + 0x2e64],0x0    ; 004347f7
    SETZ AL                             ; 004347fe
    XOR ECX,ECX                         ; 00434801
    AND EAX,0xff                        ; 00434803
    MOV dword ptr [0x007c6340],ECX      ; 00434808 | DAT_007c6340
    MOV dword ptr [EBX + 0x2e64],EAX    ; 0043480e
    LEA ESP,[EBP + 0x7a]                ; 00434814
        ;   Label: LAB_00434814
    POP EBP                             ; 00434817
    POP EDI                             ; 00434818
    POP ESI                             ; 00434819
    POP EBX                             ; 0043481a
    RET                                 ; 0043481b
    TEST EDX,EDX                        ; 0043481c
        ;   Label: LAB_0043481c
    JNZ 0x004347b8                      ; 0043481e
        ;   XREF to: 004347b8 (CONDITIONAL_JUMP)  ; LAB_004347b8
    JMP 0x00434814                      ; 00434820
        ;   XREF to: 00434814 (UNCONDITIONAL_JUMP)  ; LAB_00434814
    PUSH 0x41000000                     ; 00434822
        ;   Label: LAB_00434822
    PUSH 0x40a00000                     ; 00434827
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0043482c
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00434831
    FLD float ptr [EBP + 0x76]          ; 00434834
    FADD float ptr [EBX + 0x2e60]       ; 00434837
    ADD ESP,0x8                         ; 0043483d
    JMP 0x004347f1                      ; 00434840
        ;   XREF to: 004347f1 (UNCONDITIONAL_JUMP)  ; LAB_004347f1
    MOV EAX,[0x00622c18]                ; 00434842 | g_CDemonSetPtr
        ;   Label: LAB_00434842
    FLD float ptr [EAX + 0x15ac84]      ; 00434847 | g_CDemonSetInstance.active_fog.temperature
    FCOMP double ptr [0x005d5f1f]       ; 0043484d | DAT_005d5f1f
    FNSTSW AX                           ; 00434853
    SAHF                                ; 00434855
    JNC 0x00434952                      ; 00434856
        ;   XREF to: 00434952 (CONDITIONAL_JUMP)  ; LAB_00434952
    MOV EDX,dword ptr [EBX + 0x2e64]    ; 0043485c
        ;   Label: LAB_0043485c
    TEST EDX,EDX                        ; 00434862
    JZ 0x0043497a                       ; 00434864
        ;   XREF to: 0043497a (CONDITIONAL_JUMP)  ; LAB_0043497a
    FLD float ptr [EBX + 0x2e60]        ; 0043486a
        ;   Label: LAB_0043486a
    FSUB float ptr [EBP + 0x92]         ; 00434870
    FST float ptr [EBX + 0x2e60]        ; 00434876
    FLDZ                                ; 0043487c
    FCOMPP                              ; 0043487e
    FNSTSW AX                           ; 00434880
    SAHF                                ; 00434882
    JBE 0x00434814                      ; 00434883
        ;   XREF to: 00434814 (CONDITIONAL_JUMP)  ; LAB_00434814
    FLD float ptr [EBX + 0x2e60]        ; 00434885
    LEA EAX,[EBX + 0x158]               ; 0043488b
    FADD float ptr [0x005d5f2b]         ; 00434891 | DAT_005d5f2b
    PUSH EAX                            ; 00434897
    FSTP float ptr [EBX + 0x2e60]       ; 00434898
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0043489e
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004348a3
    PUSH 0x0                            ; 004348a6
    PUSH 0x5d5f0d                       ; 004348a8 | = "Bip01 head"
    PUSH EAX                            ; 004348ad
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004348ae
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004348b3
    CMP EAX,-0x1                        ; 004348b6
    JZ 0x00434814                       ; 004348b9
        ;   XREF to: 00434814 (CONDITIONAL_JUMP)  ; LAB_00434814
    MOV EDX,EAX                         ; 004348bf
    SHL EAX,0x2                         ; 004348c1
    SUB EAX,EDX                         ; 004348c4
    MOV EDX,EAX                         ; 004348c6
    SHL EDX,0x4                         ; 004348c8
    LEA EAX,[EBX + 0xfd8]               ; 004348cb
    LEA ESI,[EBP + -0x1a]               ; 004348d1
    ADD EAX,EDX                         ; 004348d4
    XOR EDI,EDI                         ; 004348d6
    PUSH EAX                            ; 004348d8
    MOV EAX,0x3e4ccccd                  ; 004348d9
    MOV dword ptr [EBP + 0x46],EDI      ; 004348de
    MOV dword ptr [EBP + 0x4a],EAX      ; 004348e1
    LEA EAX,[EBP + 0x46]                ; 004348e4
    MOV EDX,0x3f000000                  ; 004348e7
    PUSH EAX                            ; 004348ec
    LEA EDI,[EBP + 0x6a]                ; 004348ed
    MOV dword ptr [EBP + 0x4e],EDX      ; 004348f0
    CALL core_xform.cpp_FUN_005b5080    ; 004348f3
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 004348f8
    LEA EAX,[EBP + 0x6a]                ; 004348fb
    LEA ESI,[EBP + -0x1a]               ; 004348fe
    PUSH EAX                            ; 00434901
    MOVSD ES:EDI,ESI                    ; 00434902
    MOVSD ES:EDI,ESI                    ; 00434903
    MOVSD ES:EDI,ESI                    ; 00434904
    PUSH EBX                            ; 00434905
    LEA ESI,[EBP + -0x2]                ; 00434906
    CALL core_actor.cpp_FUN_00408b40    ; 00434909
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0043490e
    LEA EAX,[EBP + 0x22]                ; 00434911
    LEA EDI,[EBP + 0x22]                ; 00434914
    PUSH EAX                            ; 00434917
    MOV ECX,dword ptr [0x00622c18]      ; 00434918 | g_CDemonSetPtr
    LEA ESI,[EBP + -0x2]                ; 0043491e
    PUSH ECX                            ; 00434921 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 00434922
    MOVSD ES:EDI,ESI                    ; 00434923
    MOVSD ES:EDI,ESI                    ; 00434924
    CALL core_setcolid.cpp_CDemonSet_isPointInWater_FUN_005595a0 ; 00434925
        ;   XREF to: 005595a0 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_isPointInWater_FUN_005595a0(CDemonSet * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0043492a
    TEST EAX,EAX                        ; 0043492d
    JNZ 0x00434814                      ; 0043492f
        ;   XREF to: 00434814 (CONDITIONAL_JUMP)  ; LAB_00434814
    CMP dword ptr [EBX + 0x2e64],0x0    ; 00434935
    SETZ AL                             ; 0043493c
    AND EAX,0xff                        ; 0043493f
    MOV dword ptr [EBX + 0x2e64],EAX    ; 00434944
    LEA ESP,[EBP + 0x7a]                ; 0043494a
    POP EBP                             ; 0043494d
    POP EDI                             ; 0043494e
    POP ESI                             ; 0043494f
    POP EBX                             ; 00434950
    RET                                 ; 00434951
    PUSH 0x5d5ef7                       ; 00434952 | s_CZombieDog_005d5ef6+1
        ;   Label: LAB_00434952
    PUSH EBX                            ; 00434957
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 00434958
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0043495d
    TEST EAX,EAX                        ; 00434960
    JZ 0x00434814                       ; 00434962
        ;   XREF to: 00434814 (CONDITIONAL_JUMP)  ; LAB_00434814
    CMP dword ptr [EBX + 0x27a8],0x0    ; 00434968
    JNZ 0x00434814                      ; 0043496f
        ;   XREF to: 00434814 (CONDITIONAL_JUMP)  ; LAB_00434814
    JMP 0x0043485c                      ; 00434975
        ;   XREF to: 0043485c (UNCONDITIONAL_JUMP)  ; LAB_0043485c
    FLD float ptr [EBX + 0x2e5c]        ; 0043497a
        ;   Label: LAB_0043497a
    FSUB float ptr [EBP + 0x92]         ; 00434980
    FST float ptr [EBX + 0x2e5c]        ; 00434986
    FLDZ                                ; 0043498c
    FCOMPP                              ; 0043498e
    FNSTSW AX                           ; 00434990
    SAHF                                ; 00434992
    JBE 0x0043486a                      ; 00434993
        ;   XREF to: 0043486a (CONDITIONAL_JUMP)  ; LAB_0043486a
    FLD float ptr [EBX + 0x2e5c]        ; 00434999
    MOV ESI,0xbf000000                  ; 0043499f
    MOV EDI,0x3f800000                  ; 004349a4
    LEA EAX,[EBP + 0x52]                ; 004349a9
    FADD float ptr [0x005d5f27]         ; 004349ac | DAT_005d5f27
    PUSH EAX                            ; 004349b2
    FSTP float ptr [EBX + 0x2e5c]       ; 004349b3
    PUSH EBX                            ; 004349b9
    MOV dword ptr [EBP + 0x52],EDX      ; 004349ba
    MOV dword ptr [EBP + 0x56],ESI      ; 004349bd
    MOV dword ptr [EBP + 0x5a],EDI      ; 004349c0
    LEA ESI,[EBP + 0xa]                 ; 004349c3
    LEA EDI,[EBP + 0x3a]                ; 004349c6
    CALL core_actor.cpp_FUN_00408ac0    ; 004349c9
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 004349ce
    LEA EAX,[EBX + 0x158]               ; 004349d1
    LEA ESI,[EBP + 0xa]                 ; 004349d7
    PUSH EAX                            ; 004349da
    MOVSD ES:EDI,ESI                    ; 004349db
    MOVSD ES:EDI,ESI                    ; 004349dc
    MOVSD ES:EDI,ESI                    ; 004349dd
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 004349de
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004349e3
    PUSH 0x0                            ; 004349e6
    PUSH 0x5d5f02                       ; 004349e8 | = "Bip01 head"
    PUSH EAX                            ; 004349ed
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004349ee
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004349f3
    CMP EAX,-0x1                        ; 004349f6
    JZ 0x0043486a                       ; 004349f9
        ;   XREF to: 0043486a (CONDITIONAL_JUMP)  ; LAB_0043486a
    MOV EDX,EAX                         ; 004349ff
    SHL EAX,0x2                         ; 00434a01
    SUB EAX,EDX                         ; 00434a04
    MOV EDX,EAX                         ; 00434a06
    SHL EDX,0x4                         ; 00434a08
    LEA EAX,[EBX + 0xfd8]               ; 00434a0b
    MOV ECX,0x3f000000                  ; 00434a11
    ADD EAX,EDX                         ; 00434a16
    LEA ESI,[EBP + 0x16]                ; 00434a18
    PUSH EAX                            ; 00434a1b
    XOR EAX,EAX                         ; 00434a1c
    LEA EDI,[EBP + -0xe]                ; 00434a1e
    MOV dword ptr [EBP + -0x26],EAX     ; 00434a21
    LEA EAX,[EBP + -0x26]               ; 00434a24
    MOV EDX,0x3e4ccccd                  ; 00434a27
    PUSH EAX                            ; 00434a2c
    MOV dword ptr [EBP + -0x1e],ECX     ; 00434a2d
    MOV dword ptr [EBP + -0x22],EDX     ; 00434a30
    CALL core_xform.cpp_FUN_005b5080    ; 00434a33
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 00434a38
    LEA EAX,[EBP + -0xe]                ; 00434a3b
    LEA ESI,[EBP + 0x16]                ; 00434a3e
    PUSH EAX                            ; 00434a41
    MOVSD ES:EDI,ESI                    ; 00434a42
    MOVSD ES:EDI,ESI                    ; 00434a43
    MOVSD ES:EDI,ESI                    ; 00434a44
    PUSH EBX                            ; 00434a45
    LEA ESI,[EBP + 0x2e]                ; 00434a46
    CALL core_actor.cpp_FUN_00408b40    ; 00434a49
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00434a4e
    PUSH 0x8000                         ; 00434a51
    LEA EAX,[EBP + 0x3a]                ; 00434a56
    PUSH EAX                            ; 00434a59
    LEA EDI,[EBP + 0x5e]                ; 00434a5a
    LEA ESI,[EBP + 0x2e]                ; 00434a5d
    PUSH 0x3f000000                     ; 00434a60
    LEA EAX,[EBP + 0x5e]                ; 00434a65
    MOVSD ES:EDI,ESI                    ; 00434a68
    MOVSD ES:EDI,ESI                    ; 00434a69
    MOVSD ES:EDI,ESI                    ; 00434a6a
    PUSH EAX                            ; 00434a6b
    MOV ESI,dword ptr [0x0061c010]      ; 00434a6c | DAT_0061c010
    PUSH ESI                            ; 00434a72
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30 ; 00434a73
        ;   XREF to: 004b5b30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 00434a78
    JMP 0x0043486a                      ; 00434a7b
        ;   XREF to: 0043486a (UNCONDITIONAL_JUMP)  ; LAB_0043486a

