; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_CDemonSet_processActors_FUN_0056b810(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004e3190 at 004e3576
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_00645cbf
;   TerminatedCString s_d_s_3_2f_ms_00645ccf
;   TerminatedCString s_Process_time_d_actors_3__00645ce2
;   TerminatedCString s_core_set_cpp_00645d07
;   double DOUBLE_00645d1b = 0.0555555555555556
;   double DOUBLE_00645d23 = 0.0000152587890625
;   double DOUBLE_00645d2b = 1000
;   CConsole* g_CConsolePtr = 0083b1a4
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonActor* g_CurrentProcessingActor
;   undefined4 g_CCharacterClassInfo.name_hash
;   CConsole g_CConsoleInstance
;   CFireEffect g_CFireEffectInstance
;   undefined4 g_CFlameCanClassInfo.name_hash
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_fire.cpp_CFireEffect_checkExplosionDamage_FUN_004c8c90
;   core_flamecan.cpp_CFlameCan_FUN_004cb340
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0
;   core_glass.cpp_CGlass_shatter_FUN_004eaef0
;   core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60
;   core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005743e0
;   core_trigger.cpp_CTrigger_applyDamage_FUN_005e0b00
;   engine_console.cpp_CConsole_printf_FUN_00441890
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b810
        ;   Label: core_set.cpp_CDemonSet_processActors_FUN_0056b810
    PUSH ESI                            ; 0056b811
    PUSH EDI                            ; 0056b812
    PUSH EBP                            ; 0056b813
    MOV EBP,ESP                         ; 0056b814
    SUB ESP,0x94                        ; 0056b816
    AND ESP,0xfffffff8                  ; 0056b81c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056b81f
    MOV EDX,dword ptr [EAX + 0x14d154]  ; 0056b822
    XOR ESI,ESI                         ; 0056b828
    TEST EDX,EDX                        ; 0056b82a
    JLE 0x0056b860                      ; 0056b82c
        ;   XREF to: 0056b860 (CONDITIONAL_JUMP)  ; LAB_0056b860
    MOV EBX,EAX                         ; 0056b82e
    PUSH 0x593                          ; 0056b830
        ;   Label: LAB_0056b830
    PUSH 0x645cbf                       ; 0056b835 | = "..\\core\\set.cpp"
    MOV ECX,dword ptr [EBX + 0x14d158]  ; 0056b83a
    PUSH ECX                            ; 0056b840
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 0056b841
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 0056b846
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056b849
    INC ESI                             ; 0056b84c
    MOV EDI,dword ptr [EAX + 0x14d154]  ; 0056b84d
    ADD EBX,0x4                         ; 0056b853
    CMP ESI,EDI                         ; 0056b856
    JL 0x0056b830                       ; 0056b858
        ;   XREF to: 0056b830 (CONDITIONAL_JUMP)  ; LAB_0056b830
    LEA EAX,[EAX]                       ; 0056b85a
    MOV EAX,[0x0067b654]                ; 0056b860 | g_CGamePtr
        ;   Label: LAB_0056b860
    CMP dword ptr [EAX + 0x20c],0x0     ; 0056b865 | DAT_02d81ca8
    JNZ 0x0056b95e                      ; 0056b86c
        ;   XREF to: 0056b95e (CONDITIONAL_JUMP)  ; LAB_0056b95e
    XOR EBX,EBX                         ; 0056b872
        ;   Label: LAB_0056b872
    MOV EAX,[0x0067b654]                ; 0056b874 | g_CGamePtr
    MOV dword ptr [0x032776b4],EBX      ; 0056b879 | g_DynamicLightCount
    MOV EAX,dword ptr [EAX + 0x264]     ; 0056b87f | g_CGameInstance.delta_time_float
    MOV dword ptr [0x032776c8],EBX      ; 0056b885 | g_CoronaGlobeCount
    MOV dword ptr [ESP + 0x58],EAX      ; 0056b88b
    MOV dword ptr [ESP],EAX             ; 0056b88f
    FLD float ptr [ESP + 0x58]          ; 0056b892
    FLDZ                                ; 0056b896
    FCOMPP                              ; 0056b898
    FNSTSW AX                           ; 0056b89a
    SAHF                                ; 0056b89c
    JNC 0x0056be70                      ; 0056b89d
        ;   XREF to: 0056be70 (CONDITIONAL_JUMP)  ; LAB_0056be70
    MOV EDI,dword ptr [EBP + 0x14]      ; 0056b8a3
    PUSH EDI                            ; 0056b8a6
    CALL core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005743e0 ; 0056b8a7
        ;   XREF to: 005743e0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005743e0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0056b8ac
    MOV ECX,dword ptr [EDI + 0x14d154]  ; 0056b8af
    XOR EAX,EAX                         ; 0056b8b5
    TEST ECX,ECX                        ; 0056b8b7
    JLE 0x0056b8e0                      ; 0056b8b9
        ;   XREF to: 0056b8e0 (CONDITIONAL_JUMP)  ; LAB_0056b8e0
    MOV EDX,EDI                         ; 0056b8bb
    MOV ECX,dword ptr [EDX + 0x14d158]  ; 0056b8bd
        ;   Label: LAB_0056b8bd
    MOV dword ptr [ECX + 0x6c],EAX      ; 0056b8c3
    MOV ECX,dword ptr [EBP + 0x14]      ; 0056b8c6
    INC EAX                             ; 0056b8c9
    MOV EBX,dword ptr [ECX + 0x14d154]  ; 0056b8ca
    ADD EDX,0x4                         ; 0056b8d0
    CMP EAX,EBX                         ; 0056b8d3
    JL 0x0056b8bd                       ; 0056b8d5
        ;   XREF to: 0056b8bd (CONDITIONAL_JUMP)  ; LAB_0056b8bd
    LEA EAX,[EAX]                       ; 0056b8d7
    LEA EDX,[EDX]                       ; 0056b8dd
    FLD float ptr [ESP]                 ; 0056b8e0
        ;   Label: LAB_0056b8e0
    FLDZ                                ; 0056b8e3
    FCOMPP                              ; 0056b8e5
    FNSTSW AX                           ; 0056b8e7
    SAHF                                ; 0056b8e9
    JNC 0x0056babf                      ; 0056b8ea
        ;   XREF to: 0056babf (CONDITIONAL_JUMP)  ; LAB_0056babf
    MOV dword ptr [ESP + 0x84],0xfff0bdc1 ; 0056b8f0
    MOV EDI,0xf423f                     ; 0056b8fb
        ;   Label: LAB_0056b8fb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056b900
    MOV dword ptr [ESP + 0x8c],EDI      ; 0056b903
    MOV EDX,dword ptr [EAX + 0x14d154]  ; 0056b90a
    XOR EDI,EDI                         ; 0056b910
    TEST EDX,EDX                        ; 0056b912
    JLE 0x0056b942                      ; 0056b914
        ;   XREF to: 0056b942 (CONDITIONAL_JUMP)  ; LAB_0056b942
    MOV EBX,dword ptr [ESP + 0x88]      ; 0056b916
    MOV ESI,EAX                         ; 0056b91d
    SHL EBX,0x2                         ; 0056b91f
    MOV EAX,dword ptr [ESI + 0x14d158]  ; 0056b922
        ;   Label: LAB_0056b922
    CMP dword ptr [EAX + 0x104],0x0     ; 0056b928
    JZ 0x0056b975                       ; 0056b92f
        ;   XREF to: 0056b975 (CONDITIONAL_JUMP)  ; LAB_0056b975
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056b931
        ;   Label: LAB_0056b931
    INC EDI                             ; 0056b934
    MOV ECX,dword ptr [EAX + 0x14d154]  ; 0056b935
    ADD ESI,0x4                         ; 0056b93b
    CMP EDI,ECX                         ; 0056b93e
    JL 0x0056b922                       ; 0056b940
        ;   XREF to: 0056b922 (CONDITIONAL_JUMP)  ; LAB_0056b922
    MOV EBX,dword ptr [ESP + 0x8c]      ; 0056b942
        ;   Label: LAB_0056b942
    CMP EBX,0xf423f                     ; 0056b949
    JGE 0x0056babf                      ; 0056b94f
        ;   XREF to: 0056babf (CONDITIONAL_JUMP)  ; LAB_0056babf
    MOV dword ptr [ESP + 0x84],EBX      ; 0056b955
    JMP 0x0056b8fb                      ; 0056b95c
        ;   XREF to: 0056b8fb (UNCONDITIONAL_JUMP)  ; LAB_0056b8fb
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0056b95e
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_0056b95e
    XOR ECX,ECX                         ; 0056b963
    MOV dword ptr [ESP + 0x68],EAX      ; 0056b965
    MOV dword ptr [ESP + 0x88],ECX      ; 0056b969
    JMP 0x0056b872                      ; 0056b970
        ;   XREF to: 0056b872 (UNCONDITIONAL_JUMP)  ; LAB_0056b872
    MOV ECX,dword ptr [ESP + 0x84]      ; 0056b975
        ;   Label: LAB_0056b975
    MOV EDX,dword ptr [EAX + 0x64]      ; 0056b97c
    CMP EDX,ECX                         ; 0056b97f
    JNZ 0x0056baa0                      ; 0056b981
        ;   XREF to: 0056baa0 (CONDITIONAL_JUMP)  ; LAB_0056baa0
    MOV [0x00821ff4],EAX                ; 0056b987 | g_CurrentProcessingActor
    LEA EDX,[EAX + 0x30]                ; 0056b98c
    MOV EAX,dword ptr [EDX]             ; 0056b98f
    MOV dword ptr [ESP + 0x40],EAX      ; 0056b991
    LEA EAX,[EDX + 0x4]                 ; 0056b995
    MOV EAX,dword ptr [EAX]             ; 0056b998
    MOV dword ptr [ESP + 0x44],EAX      ; 0056b99a
    LEA EAX,[EDX + 0x8]                 ; 0056b99e
    MOV EAX,dword ptr [EAX]             ; 0056b9a1
    MOV dword ptr [ESP + 0x48],EAX      ; 0056b9a3
    MOV EAX,[0x0067b654]                ; 0056b9a7 | g_CGamePtr
    CMP dword ptr [EAX + 0x20c],0x2     ; 0056b9ac | DAT_02d81ca8
    JNZ 0x0056b9be                      ; 0056b9b3
        ;   XREF to: 0056b9be (CONDITIONAL_JUMP)  ; LAB_0056b9be
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0056b9b5
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV dword ptr [ESP + 0x64],EAX      ; 0056b9ba
    MOV EAX,[0x00821ff4]                ; 0056b9be | g_CurrentProcessingActor
        ;   Label: LAB_0056b9be
    PUSH dword ptr [ESP]                ; 0056b9c3
    PUSH EAX                            ; 0056b9c6
    MOV EDX,dword ptr [EAX + 0x154]     ; 0056b9c7
    CALL dword ptr [EDX + 0x4]          ; 0056b9cd
    MOV EAX,[0x0067b654]                ; 0056b9d0 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x20c]     ; 0056b9d5 | DAT_02d81ca8
    ADD ESP,0x8                         ; 0056b9db
    CMP ECX,0x2                         ; 0056b9de
    JNZ 0x0056b9ff                      ; 0056b9e1
        ;   XREF to: 0056b9ff (CONDITIONAL_JUMP)  ; LAB_0056b9ff
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0056b9e3
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV EDX,dword ptr [ESP + 0x64]      ; 0056b9e8
    SUB EAX,EDX                         ; 0056b9ec
    MOV dword ptr [EBX + 0x32bd794],EAX ; 0056b9ee | g_ActorProfileTimes
    MOV EAX,[0x00821ff4]                ; 0056b9f4 | g_CurrentProcessingActor
    MOV dword ptr [EBX + 0x32bf6d4],EAX ; 0056b9f9 | g_ActorProfileActors
    MOV EAX,[0x0067b654]                ; 0056b9ff | g_CGamePtr
        ;   Label: LAB_0056b9ff
    CMP dword ptr [EAX + 0x20c],0x0     ; 0056ba04 | DAT_02d81ca8
    JZ 0x0056ba1f                       ; 0056ba0b
        ;   XREF to: 0056ba1f (CONDITIONAL_JUMP)  ; LAB_0056ba1f
    MOV EAX,dword ptr [ESP + 0x88]      ; 0056ba0d
    INC EAX                             ; 0056ba14
    ADD EBX,0x4                         ; 0056ba15
    MOV dword ptr [ESP + 0x88],EAX      ; 0056ba18
    MOV EAX,[0x00821ff4]                ; 0056ba1f | g_CurrentProcessingActor
        ;   Label: LAB_0056ba1f
    PUSH EAX                            ; 0056ba24
    MOV EDX,dword ptr [EAX + 0x154]     ; 0056ba25
    CALL dword ptr [EDX + 0xbc]         ; 0056ba2b
    ADD ESP,0x4                         ; 0056ba31
    TEST EAX,EAX                        ; 0056ba34
    JZ 0x0056ba4d                       ; 0056ba36
        ;   XREF to: 0056ba4d (CONDITIONAL_JUMP)  ; LAB_0056ba4d
    MOV EDX,dword ptr [0x00821ff4]      ; 0056ba38 | g_CurrentProcessingActor
    PUSH 0x0                            ; 0056ba3e
    ADD EDX,0x20                        ; 0056ba40
    PUSH EDX                            ; 0056ba43
    PUSH EAX                            ; 0056ba44
    CALL core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60 ; 0056ba45
        ;   XREF to: 00546a60 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60(CPathMap * this_ptr, CVector3f * source_position, int force_update)
    ADD ESP,0xc                         ; 0056ba4a
    MOV EDX,dword ptr [0x00821ff4]      ; 0056ba4d | g_CurrentProcessingActor
        ;   Label: LAB_0056ba4d
    FLD float ptr [ESP + 0x44]          ; 0056ba53
    FCOMP float ptr [EDX + 0x34]        ; 0056ba57
    FNSTSW AX                           ; 0056ba5a
    SAHF                                ; 0056ba5c
    JZ 0x0056ba7b                       ; 0056ba5d
        ;   XREF to: 0056ba7b (CONDITIONAL_JUMP)  ; LAB_0056ba7b
    MOV EDX,dword ptr [0x00821ff4]      ; 0056ba5f | g_CurrentProcessingActor
        ;   Label: LAB_0056ba5f
    PUSH EDX                            ; 0056ba65
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 0056ba66
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0056ba6b
    XOR ECX,ECX                         ; 0056ba6e
    MOV dword ptr [0x00821ff4],ECX      ; 0056ba70 | g_CurrentProcessingActor
    JMP 0x0056b931                      ; 0056ba76
        ;   XREF to: 0056b931 (UNCONDITIONAL_JUMP)  ; LAB_0056b931
    FLD float ptr [ESP + 0x40]          ; 0056ba7b
        ;   Label: LAB_0056ba7b
    FCOMP float ptr [EDX + 0x30]        ; 0056ba7f
    FNSTSW AX                           ; 0056ba82
    SAHF                                ; 0056ba84
    JNZ 0x0056ba5f                      ; 0056ba85
        ;   XREF to: 0056ba5f (CONDITIONAL_JUMP)  ; LAB_0056ba5f
    FLD float ptr [ESP + 0x48]          ; 0056ba87
    FCOMP float ptr [EDX + 0x38]        ; 0056ba8b
    FNSTSW AX                           ; 0056ba8e
    SAHF                                ; 0056ba90
    JNZ 0x0056ba5f                      ; 0056ba91
        ;   XREF to: 0056ba5f (CONDITIONAL_JUMP)  ; LAB_0056ba5f
    XOR ECX,ECX                         ; 0056ba93
    MOV dword ptr [0x00821ff4],ECX      ; 0056ba95 | g_CurrentProcessingActor
    JMP 0x0056b931                      ; 0056ba9b
        ;   XREF to: 0056b931 (UNCONDITIONAL_JUMP)  ; LAB_0056b931
    JLE 0x0056b931                      ; 0056baa0
        ;   XREF to: 0056b931 (CONDITIONAL_JUMP)  ; LAB_0056b931
        ;   Label: LAB_0056baa0
    CMP EDX,dword ptr [ESP + 0x8c]      ; 0056baa6
    JGE 0x0056b931                      ; 0056baad
        ;   XREF to: 0056b931 (CONDITIONAL_JUMP)  ; LAB_0056b931
    MOV dword ptr [ESP + 0x8c],EDX      ; 0056bab3
    JMP 0x0056b931                      ; 0056baba
        ;   XREF to: 0056b931 (UNCONDITIONAL_JUMP)  ; LAB_0056b931
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056babf
        ;   Label: LAB_0056babf
    MOV EBX,dword ptr [EAX + 0x14d154]  ; 0056bac2
    XOR EDI,EDI                         ; 0056bac8
    TEST EBX,EBX                        ; 0056baca
    JLE 0x0056bca6                      ; 0056bacc
        ;   XREF to: 0056bca6 (CONDITIONAL_JUMP)  ; LAB_0056bca6
    MOV ESI,EAX                         ; 0056bad2
    MOV EDX,dword ptr [0x00823c4c]      ; 0056bad4 | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_0056bad4
    PUSH EDX                            ; 0056bada
    MOV ECX,dword ptr [ESI + 0x14d158]  ; 0056badb
    PUSH ECX                            ; 0056bae1
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0056bae2
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0056bae7
    MOV EBX,EAX                         ; 0056baea
    MOV dword ptr [ESP + 0x74],EAX      ; 0056baec
    TEST EAX,EAX                        ; 0056baf0
    JZ 0x0056bb96                       ; 0056baf2
        ;   XREF to: 0056bb96 (CONDITIONAL_JUMP)  ; LAB_0056bb96
    PUSH EBX                            ; 0056baf8
    MOV EAX,dword ptr [EAX + 0x154]     ; 0056baf9
    CALL dword ptr [EAX + 0x120]        ; 0056baff
    ADD ESP,0x4                         ; 0056bb05
    TEST EAX,EAX                        ; 0056bb08
    JNZ 0x0056bb96                      ; 0056bb0a
        ;   XREF to: 0056bb96 (CONDITIONAL_JUMP)  ; LAB_0056bb96
    MOV dword ptr [ESP + 0x5c],EAX      ; 0056bb10
    LEA EAX,[ESP + 0x5c]                ; 0056bb14
    PUSH EAX                            ; 0056bb18
    LEA EAX,[ESP + 0x50]                ; 0056bb19
    PUSH EAX                            ; 0056bb1d
    ADD EBX,0x20                        ; 0056bb1e
    PUSH 0x0                            ; 0056bb21
    PUSH EBX                            ; 0056bb23
    MOV EDX,dword ptr [0x0067a3d0]      ; 0056bb24 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EDX                            ; 0056bb2a | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_checkExplosionDamage_FUN_004c8c90 ; 0056bb2b
        ;   XREF to: 004c8c90 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_checkExplosionDamage_FUN_004c8c90(CFireEffect * this_ptr, CVector3f * position, float radius, CVector3f * out_force_dir, ...)
    ADD ESP,0x14                        ; 0056bb30
    TEST EAX,EAX                        ; 0056bb33
    JZ 0x0056bb96                       ; 0056bb35
        ;   XREF to: 0056bb96 (CONDITIONAL_JUMP)  ; LAB_0056bb96
    LEA EAX,[ESP + 0x4]                 ; 0056bb37
    PUSH EAX                            ; 0056bb3b
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 0056bb3c
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0056bb41
    MOV ECX,0x4                         ; 0056bb44
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0056bb49
    LEA EDX,[ESP + 0x10]                ; 0056bb4d
    MOV dword ptr [ESP + 0x8],EAX       ; 0056bb51
    LEA EAX,[ESP + 0x4c]                ; 0056bb55
    MOV dword ptr [ESP + 0x34],ECX      ; 0056bb59
    CMP EDX,EAX                         ; 0056bb5d
    JZ 0x0056bb79                       ; 0056bb5f
        ;   XREF to: 0056bb79 (CONDITIONAL_JUMP)  ; LAB_0056bb79
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0056bb61
    MOV dword ptr [ESP + 0x10],EAX      ; 0056bb65
    MOV EAX,dword ptr [ESP + 0x50]      ; 0056bb69
    MOV dword ptr [ESP + 0x14],EAX      ; 0056bb6d
    MOV EAX,dword ptr [ESP + 0x54]      ; 0056bb71
    MOV dword ptr [ESP + 0x18],EAX      ; 0056bb75
    LEA EDX,[ESP + 0x4]                 ; 0056bb79
        ;   Label: LAB_0056bb79
    MOV EAX,dword ptr [ESP + 0x74]      ; 0056bb7d
    PUSH EDX                            ; 0056bb81
    MOV EBX,dword ptr [ESP + 0x78]      ; 0056bb82
    MOV EAX,dword ptr [EAX + 0x154]     ; 0056bb86
    PUSH EBX                            ; 0056bb8c
    CALL dword ptr [EAX + 0x11c]        ; 0056bb8d
    ADD ESP,0x8                         ; 0056bb93
    MOV EAX,[0x02d83360]                ; 0056bb96 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_0056bb96
    PUSH EAX                            ; 0056bb9b
    MOV EDX,dword ptr [ESI + 0x14d158]  ; 0056bb9c
    PUSH EDX                            ; 0056bba2
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0056bba3
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 0056bba8
    ADD ESP,0x8                         ; 0056bbaa
    TEST EAX,EAX                        ; 0056bbad
    JZ 0x0056bbef                       ; 0056bbaf
        ;   XREF to: 0056bbef (CONDITIONAL_JUMP)  ; LAB_0056bbef
    PUSH 0x0                            ; 0056bbb1
    PUSH 0x0                            ; 0056bbb3
    ADD EAX,0x20                        ; 0056bbb5
    PUSH 0x0                            ; 0056bbb8
    PUSH EAX                            ; 0056bbba
    MOV dword ptr [ESP + 0x88],EAX      ; 0056bbbb
    MOV EAX,[0x0067a3d0]                ; 0056bbc2 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EAX                            ; 0056bbc7 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_checkExplosionDamage_FUN_004c8c90 ; 0056bbc8
        ;   XREF to: 004c8c90 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_checkExplosionDamage_FUN_004c8c90(CFireEffect * this_ptr, CVector3f * position, float radius, CVector3f * out_force_dir, ...)
    ADD ESP,0x14                        ; 0056bbcd
    TEST EAX,EAX                        ; 0056bbd0
    JZ 0x0056bbef                       ; 0056bbd2
        ;   XREF to: 0056bbef (CONDITIONAL_JUMP)  ; LAB_0056bbef
    PUSH EBX                            ; 0056bbd4
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0 ; 0056bbd5
        ;   XREF to: 004eb3a0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 0056bbda
    TEST EAX,EAX                        ; 0056bbdd
    JZ 0x0056bbef                       ; 0056bbdf
        ;   XREF to: 0056bbef (CONDITIONAL_JUMP)  ; LAB_0056bbef
    MOV EDX,dword ptr [ESP + 0x78]      ; 0056bbe1
    PUSH EDX                            ; 0056bbe5
    PUSH EBX                            ; 0056bbe6
    CALL core_glass.cpp_CGlass_shatter_FUN_004eaef0 ; 0056bbe7
        ;   XREF to: 004eaef0 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_shatter_FUN_004eaef0(CGlass * this_ptr, CVector3f * location)
    ADD ESP,0x8                         ; 0056bbec
    MOV ECX,dword ptr [0x03f87490]      ; 0056bbef | g_CTriggerClassInfo.name_hash
        ;   Label: LAB_0056bbef
    PUSH ECX                            ; 0056bbf5
    MOV EBX,dword ptr [ESI + 0x14d158]  ; 0056bbf6
    PUSH EBX                            ; 0056bbfc
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0056bbfd
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 0056bc02
    ADD ESP,0x8                         ; 0056bc04
    TEST EAX,EAX                        ; 0056bc07
    JZ 0x0056bc4f                       ; 0056bc09
        ;   XREF to: 0056bc4f (CONDITIONAL_JUMP)  ; LAB_0056bc4f
    CMP dword ptr [EAX + 0x174],0x7     ; 0056bc0b
    JNZ 0x0056bc4f                      ; 0056bc12
        ;   XREF to: 0056bc4f (CONDITIONAL_JUMP)  ; LAB_0056bc4f
    CMP byte ptr [EBX + 0x304],0x0      ; 0056bc14
    JNZ 0x0056bc4f                      ; 0056bc1b
        ;   XREF to: 0056bc4f (CONDITIONAL_JUMP)  ; LAB_0056bc4f
    LEA EAX,[ESP + 0x60]                ; 0056bc1d
    PUSH EAX                            ; 0056bc21
    XOR EDX,EDX                         ; 0056bc22
    PUSH EDX                            ; 0056bc24
    LEA EAX,[EBX + 0x20]                ; 0056bc25
    PUSH 0x0                            ; 0056bc28
    PUSH EAX                            ; 0056bc2a
    MOV ECX,dword ptr [0x0067a3d0]      ; 0056bc2b | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH ECX                            ; 0056bc31 | g_CFireEffectInstance
    MOV dword ptr [ESP + 0x74],EDX      ; 0056bc32
    CALL core_fire.cpp_CFireEffect_checkExplosionDamage_FUN_004c8c90 ; 0056bc36
        ;   XREF to: 004c8c90 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_checkExplosionDamage_FUN_004c8c90(CFireEffect * this_ptr, CVector3f * position, float radius, CVector3f * out_force_dir, ...)
    ADD ESP,0x14                        ; 0056bc3b
    TEST EAX,EAX                        ; 0056bc3e
    JZ 0x0056bc4f                       ; 0056bc40
        ;   XREF to: 0056bc4f (CONDITIONAL_JUMP)  ; LAB_0056bc4f
    PUSH dword ptr [ESP + 0x60]         ; 0056bc42
    PUSH EBX                            ; 0056bc46
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005e0b00 ; 0056bc47
        ;   XREF to: 005e0b00 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_005e0b00(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 0056bc4c
    MOV EBX,dword ptr [0x02d7a738]      ; 0056bc4f | g_CFlameCanClassInfo.name_hash
        ;   Label: LAB_0056bc4f
    PUSH EBX                            ; 0056bc55
    MOV EAX,dword ptr [ESI + 0x14d158]  ; 0056bc56
    PUSH EAX                            ; 0056bc5c
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0056bc5d
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 0056bc62
    ADD ESP,0x8                         ; 0056bc64
    TEST EAX,EAX                        ; 0056bc67
    JZ 0x0056bc91                       ; 0056bc69
        ;   XREF to: 0056bc91 (CONDITIONAL_JUMP)  ; LAB_0056bc91
    PUSH 0x0                            ; 0056bc6b
    PUSH 0x0                            ; 0056bc6d
    ADD EAX,0x20                        ; 0056bc6f
    PUSH 0x0                            ; 0056bc72
    PUSH EAX                            ; 0056bc74
    MOV EDX,dword ptr [0x0067a3d0]      ; 0056bc75 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EDX                            ; 0056bc7b | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_checkExplosionDamage_FUN_004c8c90 ; 0056bc7c
        ;   XREF to: 004c8c90 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_checkExplosionDamage_FUN_004c8c90(CFireEffect * this_ptr, CVector3f * position, float radius, CVector3f * out_force_dir, ...)
    ADD ESP,0x14                        ; 0056bc81
    TEST EAX,EAX                        ; 0056bc84
    JZ 0x0056bc91                       ; 0056bc86
        ;   XREF to: 0056bc91 (CONDITIONAL_JUMP)  ; LAB_0056bc91
    PUSH EBX                            ; 0056bc88
    CALL core_flamecan.cpp_CFlameCan_FUN_004cb340 ; 0056bc89
        ;   XREF to: 004cb340 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_FUN_004cb340(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 0056bc8e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056bc91
        ;   Label: LAB_0056bc91
    INC EDI                             ; 0056bc94
    MOV EDX,dword ptr [EAX + 0x14d154]  ; 0056bc95
    ADD ESI,0x4                         ; 0056bc9b
    CMP EDI,EDX                         ; 0056bc9e
    JL 0x0056bad4                       ; 0056bca0
        ;   XREF to: 0056bad4 (CONDITIONAL_JUMP)  ; LAB_0056bad4
    MOV EAX,[0x0067b654]                ; 0056bca6 | g_CGamePtr
        ;   Label: LAB_0056bca6
    MOV ECX,dword ptr [EAX + 0x20c]     ; 0056bcab | DAT_02d81ca8
    TEST ECX,ECX                        ; 0056bcb1
    JZ 0x0056be30                       ; 0056bcb3
        ;   XREF to: 0056be30 (CONDITIONAL_JUMP)  ; LAB_0056be30
    CMP ECX,0x2                         ; 0056bcb9
    JNZ 0x0056bde0                      ; 0056bcbc
        ;   XREF to: 0056bde0 (CONDITIONAL_JUMP)  ; LAB_0056bde0
    MOV EAX,dword ptr [ESP + 0x88]      ; 0056bcc2
    XOR ESI,ESI                         ; 0056bcc9
    DEC EAX                             ; 0056bccb
    MOV dword ptr [ESP + 0x7c],ESI      ; 0056bccc
    MOV dword ptr [ESP + 0x80],ESI      ; 0056bcd0
    MOV dword ptr [ESP + 0x70],EAX      ; 0056bcd7
    TEST EAX,EAX                        ; 0056bcdb
    JLE 0x0056bd7d                      ; 0056bcdd
        ;   XREF to: 0056bd7d (CONDITIONAL_JUMP)  ; LAB_0056bd7d
    MOV EAX,dword ptr [ESP + 0x88]      ; 0056bce3
    SHL EAX,0x2                         ; 0056bcea
    MOV dword ptr [ESP + 0x6c],EAX      ; 0056bced
    MOV EBX,dword ptr [ESP + 0x80]      ; 0056bcf1
        ;   Label: LAB_0056bcf1
    MOV EDX,dword ptr [ESP + 0x88]      ; 0056bcf8
    INC EBX                             ; 0056bcff
    CMP EBX,EDX                         ; 0056bd00
    JGE 0x0056bd57                      ; 0056bd02
        ;   XREF to: 0056bd57 (CONDITIONAL_JUMP)  ; LAB_0056bd57
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0056bd04
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0056bd08
    LEA EAX,[EBX*0x4 + 0x0]             ; 0056bd0c
    MOV EDI,dword ptr [EAX + 0x32bd794] ; 0056bd13 | g_ActorProfileTimes | DAT_032bd798
        ;   Label: LAB_0056bd13
    MOV ESI,dword ptr [EDX + 0x32bd794] ; 0056bd19 | g_ActorProfileTimes | DAT_032bd798
    CMP ESI,EDI                         ; 0056bd1f
    JGE 0x0056bd4f                      ; 0056bd21
        ;   XREF to: 0056bd4f (CONDITIONAL_JUMP)  ; LAB_0056bd4f
    MOV EDI,ESI                         ; 0056bd23
    MOV ESI,dword ptr [EAX + 0x32bd794] ; 0056bd25 | g_ActorProfileTimes
    MOV dword ptr [EDX + 0x32bd794],ESI ; 0056bd2b | g_ActorProfileTimes | DAT_032bd798
    MOV dword ptr [EAX + 0x32bd794],EDI ; 0056bd31 | g_ActorProfileTimes
    MOV EDI,dword ptr [EAX + 0x32bf6d4] ; 0056bd37 | g_ActorProfileActors
    MOV ESI,dword ptr [EDX + 0x32bf6d4] ; 0056bd3d | g_ActorProfileActors
    MOV dword ptr [EDX + 0x32bf6d4],EDI ; 0056bd43 | g_ActorProfileActors
    MOV dword ptr [EAX + 0x32bf6d4],ESI ; 0056bd49 | g_ActorProfileActors
    ADD EAX,0x4                         ; 0056bd4f
        ;   Label: LAB_0056bd4f
    INC EBX                             ; 0056bd52
    CMP EAX,ECX                         ; 0056bd53
    JL 0x0056bd13                       ; 0056bd55
        ;   XREF to: 0056bd13 (CONDITIONAL_JUMP)  ; LAB_0056bd13
    MOV ECX,dword ptr [ESP + 0x7c]      ; 0056bd57
        ;   Label: LAB_0056bd57
    MOV EBX,dword ptr [ESP + 0x80]      ; 0056bd5b
    MOV ESI,dword ptr [ESP + 0x70]      ; 0056bd62
    ADD ECX,0x4                         ; 0056bd66
    INC EBX                             ; 0056bd69
    MOV dword ptr [ESP + 0x7c],ECX      ; 0056bd6a
    MOV dword ptr [ESP + 0x80],EBX      ; 0056bd6e
    CMP EBX,ESI                         ; 0056bd75
    JL 0x0056bcf1                       ; 0056bd77
        ;   XREF to: 0056bcf1 (CONDITIONAL_JUMP)  ; LAB_0056bcf1
    MOV EAX,dword ptr [ESP + 0x88]      ; 0056bd7d
        ;   Label: LAB_0056bd7d
    MOV EDI,0x14                        ; 0056bd84
    CMP EAX,EDI                         ; 0056bd89
    JGE 0x0056bd8f                      ; 0056bd8b
        ;   XREF to: 0056bd8f (CONDITIONAL_JUMP)  ; LAB_0056bd8f
    MOV EDI,EAX                         ; 0056bd8d
    XOR ESI,ESI                         ; 0056bd8f
        ;   Label: LAB_0056bd8f
    TEST EDI,EDI                        ; 0056bd91
    JLE 0x0056bde0                      ; 0056bd93
        ;   XREF to: 0056bde0 (CONDITIONAL_JUMP)  ; LAB_0056bde0
    XOR EBX,EBX                         ; 0056bd95
    FILD dword ptr [EBX + 0x32bd794]    ; 0056bd97 | g_ActorProfileTimes | DAT_032bd798
        ;   Label: LAB_0056bd97
    FMUL double ptr [0x00645d1b]        ; 0056bd9d | DOUBLE_00645d1b
    FMUL double ptr [0x00645d23]        ; 0056bda3 | DOUBLE_00645d23
    FMUL double ptr [0x00645d2b]        ; 0056bda9 | DOUBLE_00645d2b
    FDIV float ptr [ESP]                ; 0056bdaf
    SUB ESP,0x8                         ; 0056bdb2
    FSTP double ptr [ESP]               ; 0056bdb5
    MOV ECX,dword ptr [EBX + 0x32bf6d4] ; 0056bdb8 | g_ActorProfileActors | DAT_032bf6d8
    PUSH ECX                            ; 0056bdbe
    PUSH ESI                            ; 0056bdbf
    PUSH 0x645ccf                       ; 0056bdc0 | = "%d. %s : %3.2f ms\n"
    MOV EAX,[0x0066e8e0]                ; 0056bdc5 | g_CConsoleInstance | g_CConsolePtr
    PUSH EAX                            ; 0056bdca | g_CConsoleInstance
    ADD EBX,0x4                         ; 0056bdcb
    INC ESI                             ; 0056bdce
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0056bdcf
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x18                        ; 0056bdd4
    CMP ESI,EDI                         ; 0056bdd7
    JL 0x0056bd97                       ; 0056bdd9
        ;   XREF to: 0056bd97 (CONDITIONAL_JUMP)  ; LAB_0056bd97
    LEA EAX,[EAX]                       ; 0056bddb
    MOV ECX,ECX                         ; 0056bdde
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0056bde0
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_0056bde0
    MOV EDX,dword ptr [ESP + 0x68]      ; 0056bde5
    SUB EAX,EDX                         ; 0056bde9
    MOV dword ptr [ESP + 0x90],EAX      ; 0056bdeb
    FILD dword ptr [ESP + 0x90]         ; 0056bdf2
    FMUL double ptr [0x00645d1b]        ; 0056bdf9 | DOUBLE_00645d1b
    FMUL double ptr [0x00645d23]        ; 0056bdff | DOUBLE_00645d23
    FMUL double ptr [0x00645d2b]        ; 0056be05 | DOUBLE_00645d2b
    FDIV float ptr [ESP]                ; 0056be0b
    SUB ESP,0x8                         ; 0056be0e
    MOV ECX,dword ptr [ESP + 0x90]      ; 0056be11
    FSTP double ptr [ESP]               ; 0056be18
    PUSH ECX                            ; 0056be1b
    PUSH 0x645ce2                       ; 0056be1c | = "Process time (%d actors) : %3.2f ms\n"
    MOV EBX,dword ptr [0x0066e8e0]      ; 0056be21 | g_CConsoleInstance | g_CConsolePtr
    PUSH EBX                            ; 0056be27 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0056be28
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 0056be2d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056be30
        ;   Label: LAB_0056be30
    MOV ESI,dword ptr [EAX + 0x14d154]  ; 0056be33
    XOR EBX,EBX                         ; 0056be39
    TEST ESI,ESI                        ; 0056be3b
    JLE 0x0056be70                      ; 0056be3d
        ;   XREF to: 0056be70 (CONDITIONAL_JUMP)  ; LAB_0056be70
    MOV ESI,EAX                         ; 0056be3f
    PUSH 0x654                          ; 0056be41
        ;   Label: LAB_0056be41
    PUSH 0x645d07                       ; 0056be46 | = "..\\core\\set.cpp"
    MOV EDI,dword ptr [ESI + 0x14d158]  ; 0056be4b
    PUSH EDI                            ; 0056be51
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 0056be52
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 0056be57
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056be5a
    INC EBX                             ; 0056be5d
    MOV EDX,dword ptr [EAX + 0x14d154]  ; 0056be5e
    ADD ESI,0x4                         ; 0056be64
    CMP EBX,EDX                         ; 0056be67
    JL 0x0056be41                       ; 0056be69
        ;   XREF to: 0056be41 (CONDITIONAL_JUMP)  ; LAB_0056be41
    LEA EAX,[EAX]                       ; 0056be6b
    MOV ECX,ECX                         ; 0056be6e
    MOV ESP,EBP                         ; 0056be70
        ;   Label: LAB_0056be70
    POP EBP                             ; 0056be72
    POP EDI                             ; 0056be73
    POP ESI                             ; 0056be74
    POP EBX                             ; 0056be75
    RET                                 ; 0056be76

