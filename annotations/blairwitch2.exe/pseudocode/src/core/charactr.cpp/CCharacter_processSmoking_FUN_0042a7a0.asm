; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_processSmoking_FUN_0042a7a0(CCharacter *this_ptr,float delta_time)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
; undefined        Stack[-0x10]:1  local_10
;
; XREF[5]:
;   core_dog.cpp_CZombieDog_process_FUN_0045e360 at 0045e397
;   core_npc.cpp_CNPC_process_FUN_005105b0 at 005105dd
;   core_shadow.cpp_FUN_0053c500 at 0053c54c
;   core_stranger.cpp_CStranger_processFrame_FUN_00563060 at 00563242
;   core_svetlana.cpp_CSvetlana_process_FUN_00570510 at 0057058a
;
; Referenced Globals:
;   undefined4 s_CZombieDog_005cd23d+1
;   TerminatedCString s_Bip01_head_005cd249
;   TerminatedCString s_Bip01_head_005cd254
;   undefined4 DAT_005cd266
;   undefined4 DAT_005cd26e
;   undefined4 DAT_005cd272
;   undefined4 DAT_00614d30
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.active_fog.temperature
;
; Called Functions:
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_isOfClass_FUN_0040c840
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230
;   core_setcolid.cpp_CDemonSet_isPointInWater_FUN_00538180
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;   core_xform.cpp_FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a7a0
        ;   Label: core_charactr.cpp_CCharacter_processSmoking_FUN_0042a7a0
    PUSH ESI                            ; 0042a7a1
    PUSH EDI                            ; 0042a7a2
    PUSH EBP                            ; 0042a7a3
    MOV EBP,ESP                         ; 0042a7a4
    SUB ESP,0x9c                        ; 0042a7a6
    SUB EBP,0x7a                        ; 0042a7ac
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0042a7af
    MOV EDX,dword ptr [EBX + 0x2828]    ; 0042a7b5
    TEST EDX,EDX                        ; 0042a7bb
    JZ 0x0042a807                       ; 0042a7bd
        ;   XREF to: 0042a807 (CONDITIONAL_JUMP)  ; LAB_0042a807
    CMP dword ptr [EBX + 0x2814],0x0    ; 0042a7bf
    JZ 0x0042a80f                       ; 0042a7c6
        ;   XREF to: 0042a80f (CONDITIONAL_JUMP)  ; LAB_0042a80f
    MOV EAX,[0x0061b5a8]                ; 0042a7c8 | g_CDemonSetPtr
        ;   Label: LAB_0042a7c8
    FLD float ptr [EAX + 0x15ac84]      ; 0042a7cd | g_CDemonSetInstance.active_fog.temperature
    FCOMP double ptr [0x005cd266]       ; 0042a7d3 | DAT_005cd266
    FNSTSW AX                           ; 0042a7d9
    SAHF                                ; 0042a7db
    JNC 0x0042a815                      ; 0042a7dc
        ;   XREF to: 0042a815 (CONDITIONAL_JUMP)  ; LAB_0042a815
    MOV EDI,dword ptr [EBX + 0x2ed0]    ; 0042a7de
        ;   Label: LAB_0042a7de
    TEST EDI,EDI                        ; 0042a7e4
    JZ 0x0042a829                       ; 0042a7e6
        ;   XREF to: 0042a829 (CONDITIONAL_JUMP)  ; LAB_0042a829
    FLD float ptr [EBX + 0x2ecc]        ; 0042a7e8
        ;   Label: LAB_0042a7e8
    FSUB float ptr [EBP + 0x92]         ; 0042a7ee
    FST float ptr [EBX + 0x2ecc]        ; 0042a7f4
    FLDZ                                ; 0042a7fa
    FCOMPP                              ; 0042a7fc
    FNSTSW AX                           ; 0042a7fe
    SAHF                                ; 0042a800
    JA 0x0042a92b                       ; 0042a801
        ;   XREF to: 0042a92b (CONDITIONAL_JUMP)  ; LAB_0042a92b
    LEA ESP,[EBP + 0x7a]                ; 0042a807
        ;   Label: LAB_0042a807
    POP EBP                             ; 0042a80a
    POP EDI                             ; 0042a80b
    POP ESI                             ; 0042a80c
    POP EBX                             ; 0042a80d
    RET                                 ; 0042a80e
    TEST EDX,EDX                        ; 0042a80f
        ;   Label: LAB_0042a80f
    JNZ 0x0042a7c8                      ; 0042a811
        ;   XREF to: 0042a7c8 (CONDITIONAL_JUMP)  ; LAB_0042a7c8
    JMP 0x0042a807                      ; 0042a813
        ;   XREF to: 0042a807 (UNCONDITIONAL_JUMP)  ; LAB_0042a807
    PUSH 0x5cd23e                       ; 0042a815 | s_CZombieDog_005cd23d+1
        ;   Label: LAB_0042a815
    PUSH EBX                            ; 0042a81a
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 0042a81b
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0042a820
    TEST EAX,EAX                        ; 0042a823
    JNZ 0x0042a7de                      ; 0042a825
        ;   XREF to: 0042a7de (CONDITIONAL_JUMP)  ; LAB_0042a7de
    JMP 0x0042a807                      ; 0042a827
        ;   XREF to: 0042a807 (UNCONDITIONAL_JUMP)  ; LAB_0042a807
    FLD float ptr [EBX + 0x2ec8]        ; 0042a829
        ;   Label: LAB_0042a829
    FSUB float ptr [EBP + 0x92]         ; 0042a82f
    FST float ptr [EBX + 0x2ec8]        ; 0042a835
    FLDZ                                ; 0042a83b
    FCOMPP                              ; 0042a83d
    FNSTSW AX                           ; 0042a83f
    SAHF                                ; 0042a841
    JBE 0x0042a7e8                      ; 0042a842
        ;   XREF to: 0042a7e8 (CONDITIONAL_JUMP)  ; LAB_0042a7e8
    FLD float ptr [EBX + 0x2ec8]        ; 0042a844
    MOV EDX,0xbf000000                  ; 0042a84a
    MOV ECX,0x3f800000                  ; 0042a84f
    LEA EAX,[EBP + -0x16]               ; 0042a854
    LEA ESI,[EBP + 0x62]                ; 0042a857
    FADD float ptr [0x005cd26e]         ; 0042a85a | DAT_005cd26e
    PUSH EAX                            ; 0042a860
    FSTP float ptr [EBX + 0x2ec8]       ; 0042a861
    PUSH EBX                            ; 0042a867
    MOV dword ptr [EBP + -0x16],EDI     ; 0042a868
    MOV dword ptr [EBP + -0x12],EDX     ; 0042a86b
    MOV dword ptr [EBP + -0xe],ECX      ; 0042a86e
    CALL core_actor.cpp_FUN_00408cf0    ; 0042a871
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA EDI,[EBP + 0x26]                ; 0042a876
    ADD ESP,0x8                         ; 0042a879
    LEA EAX,[EBX + 0x2b4]               ; 0042a87c
    LEA ESI,[EBP + 0x62]                ; 0042a882
    PUSH EAX                            ; 0042a885
    MOVSD ES:EDI,ESI                    ; 0042a886
    MOVSD ES:EDI,ESI                    ; 0042a887
    MOVSD ES:EDI,ESI                    ; 0042a888
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 0042a889
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042a88e
    PUSH 0x0                            ; 0042a891
    PUSH 0x5cd249                       ; 0042a893 | = "Bip01 head"
    PUSH EAX                            ; 0042a898
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0042a899
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0042a89e
    CMP EAX,-0x1                        ; 0042a8a1
    JZ 0x0042a7e8                       ; 0042a8a4
        ;   XREF to: 0042a7e8 (CONDITIONAL_JUMP)  ; LAB_0042a7e8
    MOV ESI,EAX                         ; 0042a8aa
    SHL EAX,0x2                         ; 0042a8ac
    SUB EAX,ESI                         ; 0042a8af
    MOV ESI,EAX                         ; 0042a8b1
    SHL ESI,0x4                         ; 0042a8b3
    LEA EAX,[EBX + 0x1134]              ; 0042a8b6
    MOV EDI,0x3e4ccccd                  ; 0042a8bc
    ADD EAX,ESI                         ; 0042a8c1
    MOV dword ptr [EBP + 0x5a],EDI      ; 0042a8c3
    PUSH EAX                            ; 0042a8c6
    MOV EAX,0x3f000000                  ; 0042a8c7
    XOR ESI,ESI                         ; 0042a8cc
    MOV dword ptr [EBP + 0x5e],EAX      ; 0042a8ce
    LEA EAX,[EBP + 0x56]                ; 0042a8d1
    MOV dword ptr [EBP + 0x56],ESI      ; 0042a8d4
    PUSH EAX                            ; 0042a8d7
    LEA ESI,[EBP + 0x6e]                ; 0042a8d8
    LEA EDI,[EBP + -0xa]                ; 0042a8db
    CALL core_xform.cpp_FUN_00591530    ; 0042a8de
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0042a8e3
    LEA EAX,[EBP + -0xa]                ; 0042a8e6
    LEA ESI,[EBP + 0x6e]                ; 0042a8e9
    PUSH EAX                            ; 0042a8ec
    MOVSD ES:EDI,ESI                    ; 0042a8ed
    MOVSD ES:EDI,ESI                    ; 0042a8ee
    MOVSD ES:EDI,ESI                    ; 0042a8ef
    PUSH EBX                            ; 0042a8f0
    LEA ESI,[EBP + 0x32]                ; 0042a8f1
    CALL core_actor.cpp_FUN_00408d70    ; 0042a8f4
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0042a8f9
    PUSH 0x8000                         ; 0042a8fc
    LEA EAX,[EBP + 0x26]                ; 0042a901
    PUSH EAX                            ; 0042a904
    PUSH 0x3f000000                     ; 0042a905
    LEA EAX,[EBP + 0x4a]                ; 0042a90a
    LEA EDI,[EBP + 0x4a]                ; 0042a90d
    PUSH EAX                            ; 0042a910
    MOV EDX,dword ptr [0x00614d30]      ; 0042a911 | DAT_00614d30
    LEA ESI,[EBP + 0x32]                ; 0042a917
    PUSH EDX                            ; 0042a91a
    MOVSD ES:EDI,ESI                    ; 0042a91b
    MOVSD ES:EDI,ESI                    ; 0042a91c
    MOVSD ES:EDI,ESI                    ; 0042a91d
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230 ; 0042a91e
        ;   XREF to: 0049d230 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 0042a923
    JMP 0x0042a7e8                      ; 0042a926
        ;   XREF to: 0042a7e8 (UNCONDITIONAL_JUMP)  ; LAB_0042a7e8
    FLD float ptr [EBX + 0x2ecc]        ; 0042a92b
        ;   Label: LAB_0042a92b
    LEA EAX,[EBX + 0x2b4]               ; 0042a931
    FADD float ptr [0x005cd272]         ; 0042a937 | DAT_005cd272
    PUSH EAX                            ; 0042a93d
    FSTP float ptr [EBX + 0x2ecc]       ; 0042a93e
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 0042a944
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042a949
    PUSH 0x0                            ; 0042a94c
    PUSH 0x5cd254                       ; 0042a94e | = "Bip01 head"
    PUSH EAX                            ; 0042a953
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 0042a954
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0042a959
    CMP EAX,-0x1                        ; 0042a95c
    JZ 0x0042a807                       ; 0042a95f
        ;   XREF to: 0042a807 (CONDITIONAL_JUMP)  ; LAB_0042a807
    MOV ESI,EAX                         ; 0042a965
    SHL EAX,0x2                         ; 0042a967
    MOV EDI,0x3f000000                  ; 0042a96a
    SUB EAX,ESI                         ; 0042a96f
    XOR ECX,ECX                         ; 0042a971
    MOV ESI,EAX                         ; 0042a973
    MOV dword ptr [EBP + 0x3e],ECX      ; 0042a975
    SHL ESI,0x4                         ; 0042a978
    LEA EAX,[EBX + 0x1134]              ; 0042a97b
    MOV dword ptr [EBP + 0x46],EDI      ; 0042a981
    ADD EAX,ESI                         ; 0042a984
    MOV ESI,0x3e4ccccd                  ; 0042a986
    PUSH EAX                            ; 0042a98b
    LEA EAX,[EBP + 0x3e]                ; 0042a98c
    MOV dword ptr [EBP + 0x42],ESI      ; 0042a98f
    PUSH EAX                            ; 0042a992
    LEA ESI,[EBP + 0x2]                 ; 0042a993
    LEA EDI,[EBP + -0x22]               ; 0042a996
    CALL core_xform.cpp_FUN_00591530    ; 0042a999
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0042a99e
    LEA EAX,[EBP + -0x22]               ; 0042a9a1
    LEA ESI,[EBP + 0x2]                 ; 0042a9a4
    PUSH EAX                            ; 0042a9a7
    MOVSD ES:EDI,ESI                    ; 0042a9a8
    MOVSD ES:EDI,ESI                    ; 0042a9a9
    MOVSD ES:EDI,ESI                    ; 0042a9aa
    PUSH EBX                            ; 0042a9ab
    LEA ESI,[EBP + 0x1a]                ; 0042a9ac
    CALL core_actor.cpp_FUN_00408d70    ; 0042a9af
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0042a9b4
    LEA EAX,[EBP + 0xe]                 ; 0042a9b7
    LEA EDI,[EBP + 0xe]                 ; 0042a9ba
    PUSH EAX                            ; 0042a9bd
    MOV EAX,[0x0061b5a8]                ; 0042a9be | g_CDemonSetPtr
    LEA ESI,[EBP + 0x1a]                ; 0042a9c3
    PUSH EAX                            ; 0042a9c6 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 0042a9c7
    MOVSD ES:EDI,ESI                    ; 0042a9c8
    MOVSD ES:EDI,ESI                    ; 0042a9c9
    CALL core_setcolid.cpp_CDemonSet_isPointInWater_FUN_00538180 ; 0042a9ca
        ;   XREF to: 00538180 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_isPointInWater_FUN_00538180(CDemonSet * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0042a9cf
    TEST EAX,EAX                        ; 0042a9d2
    JNZ 0x0042a807                      ; 0042a9d4
        ;   XREF to: 0042a807 (CONDITIONAL_JUMP)  ; LAB_0042a807
    CMP dword ptr [EBX + 0x2ed0],0x0    ; 0042a9da
    SETZ AL                             ; 0042a9e1
    AND EAX,0xff                        ; 0042a9e4
    MOV dword ptr [EBX + 0x2ed0],EAX    ; 0042a9e9
    LEA ESP,[EBP + 0x7a]                ; 0042a9ef
    POP EBP                             ; 0042a9f2
    POP EDI                             ; 0042a9f3
    POP ESI                             ; 0042a9f4
    POP EBX                             ; 0042a9f5
    RET                                 ; 0042a9f6

