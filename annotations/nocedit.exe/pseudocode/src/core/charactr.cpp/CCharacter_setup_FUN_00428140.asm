; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setup_FUN_00428140(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_enemy.cpp_CEnemy_setup_FUN_004a9650 at 004a9655
;   core_hero.cpp_CHero_setup_FUN_004f2540 at 004f2555
;   core_npc.cpp_CNPC_setup_FUN_00544870 at 00544878
;
; Referenced Globals:
;   TerminatedCString s_stake_b_kfm_00616ed2
;   TerminatedCString s_core_charactr_cpp_00616ede
;   TerminatedCString s_core_charactr_cpp_00616ef3
;   TerminatedCString s_s_is_carrying_s_but_s_th_00616f08
;   TerminatedCString s_bip01_head_00616f43
;   float FLOAT_0065b834 = 9999
;   CKeyFramedModelInstance CKeyFramedModelInstance_00823a98
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042e670
;   core_charactr.cpp_CCharacter_computeBoundingBox_FUN_0042d530
;   core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042a520
;   core_cloth.cpp_CClothList_load_FUN_0043bfa0
;   core_cloth.cpp_CClothList_process_FUN_0043c2d0
;   core_cloth.cpp_CClothList_setup_FUN_0043c290
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428140
        ;   Label: core_charactr.cpp_CCharacter_setup_FUN_00428140
    PUSH ESI                            ; 00428141
    PUSH EDI                            ; 00428142
    PUSH EBP                            ; 00428143
    SUB ESP,0x4                         ; 00428144
    MOV EBP,dword ptr [ESP + 0x18]      ; 00428147
    PUSH EBP                            ; 0042814b
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 0042814c
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00428151
    PUSH 0x616ed2                       ; 00428154 | = "stake_b.kfm"
    FLD float ptr [0x0065b834]          ; 00428159 | FLOAT_0065b834
    MOV dword ptr [EBP + 0x2df4],0x0    ; 0042815f
    PUSH 0x823a98                       ; 00428169 | CKeyFramedModelInstance_00823a98
    FSTP float ptr [EBP + 0x2414]       ; 0042816e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00428174
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00428179
    PUSH 0x823a98                       ; 0042817c | CKeyFramedModelInstance_00823a98
    MOV ESI,EBP                         ; 00428181
    LEA EDI,[EBP + 0x88]                ; 00428183
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 00428189
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042818e
    MOV EBX,dword ptr [ESI + 0x24b4]    ; 00428191
        ;   Label: LAB_00428191
    TEST EBX,EBX                        ; 00428197
    JNZ 0x004282ee                      ; 00428199
        ;   XREF to: 004282ee (CONDITIONAL_JUMP)  ; LAB_004282ee
    ADD ESI,0x44                        ; 0042819f
        ;   Label: LAB_0042819f
    CMP ESI,EDI                         ; 004281a2
    JNZ 0x00428191                      ; 004281a4
        ;   XREF to: 00428191 (CONDITIONAL_JUMP)  ; LAB_00428191
    LEA EBX,[EBP + 0x158]               ; 004281a6
    LEA EAX,[EBP + 0x23b8]              ; 004281ac
    CMP byte ptr [EAX],0x0              ; 004281b2
    JZ 0x004281eb                       ; 004281b5
        ;   XREF to: 004281eb (CONDITIONAL_JUMP)  ; LAB_004281eb
    FLD float ptr [EBP + 0x261c]        ; 004281b7
    PUSH EBX                            ; 004281bd
    FSTP float ptr [EBP + 0x1ac]        ; 004281be
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 004281c4
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004281c9
    PUSH 0x0                            ; 004281cc
    PUSH 0x616f43                       ; 004281ce | = "bip01 head"
    PUSH EBX                            ; 004281d3
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 004281d4
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004281d9
    PUSH EAX                            ; 004281dc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004281dd
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004281e2
    MOV dword ptr [EBP + 0x25e4],EAX    ; 004281e5
    PUSH EBP                            ; 004281eb
        ;   Label: LAB_004281eb
    CALL core_charactr.cpp_CCharacter_computeBoundingBox_FUN_0042d530 ; 004281ec
        ;   XREF to: 0042d530 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_computeBoundingBox_FUN_0042d530(CCharacter * this_ptr)
    MOV EBX,dword ptr [EBP + 0x2614]    ; 004281f1
    ADD ESP,0x4                         ; 004281f7
    TEST EBX,EBX                        ; 004281fa
    JZ 0x00428280                       ; 004281fc
        ;   XREF to: 00428280 (CONDITIONAL_JUMP)  ; LAB_00428280
    LEA EAX,[EBP + 0x158]               ; 00428202
    PUSH EAX                            ; 00428208
    XOR EBX,EBX                         ; 00428209
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0042820b
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    MOV dword ptr [EBP + 0x2f14],0x4    ; 00428210
    ADD ESP,0x4                         ; 0042821a
    MOV EDI,dword ptr [EAX + 0x28558]   ; 0042821d
    MOV ESI,EAX                         ; 00428223
    TEST EDI,EDI                        ; 00428225
    JLE 0x00428240                      ; 00428227
        ;   XREF to: 00428240 (CONDITIONAL_JUMP)  ; LAB_00428240
    PUSH EBX                            ; 00428229
        ;   Label: LAB_00428229
    PUSH ESI                            ; 0042822a
    PUSH EBP                            ; 0042822b
    INC EBX                             ; 0042822c
    CALL core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042a520 ; 0042822d
        ;   XREF to: 0042a520 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042a520(CCharacter * this_ptr, CSkeleton * skeleton, int target_bone_index)
    MOV EAX,dword ptr [ESI + 0x28558]   ; 00428232
    ADD ESP,0xc                         ; 00428238
    CMP EBX,EAX                         ; 0042823b
    JL 0x00428229                       ; 0042823d
        ;   XREF to: 00428229 (CONDITIONAL_JUMP)  ; LAB_00428229
    NOP                                 ; 0042823f
    MOV EDX,dword ptr [EBP + 0x2f10]    ; 00428240
        ;   Label: LAB_00428240
    XOR ESI,ESI                         ; 00428246
    TEST EDX,EDX                        ; 00428248
    JLE 0x00428280                      ; 0042824a
        ;   XREF to: 00428280 (CONDITIONAL_JUMP)  ; LAB_00428280
    MOV EAX,EBP                         ; 0042824c
    MOV EBX,EBP                         ; 0042824e
    ADD EAX,0x18                        ; 00428250
        ;   Label: LAB_00428250
    MOV dword ptr [EBX + 0x3574],0x4    ; 00428253
    MOV dword ptr [EAX + 0x2f18],0x40000000 ; 0042825d
    INC ESI                             ; 00428267
    MOV ECX,dword ptr [EBP + 0x2f10]    ; 00428268
    ADD EBX,0x2a4                       ; 0042826e
    CMP ESI,ECX                         ; 00428274
    JL 0x00428250                       ; 00428276
        ;   XREF to: 00428250 (CONDITIONAL_JUMP)  ; LAB_00428250
    LEA EAX,[EAX]                       ; 00428278
    MOV EDX,EDX                         ; 0042827e
    LEA EBX,[EBP + 0x2a94]              ; 00428280
        ;   Label: LAB_00428280
    PUSH EBX                            ; 00428286
    CALL core_cloth.cpp_CClothList_load_FUN_0043bfa0 ; 00428287
        ;   XREF to: 0043bfa0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_load_FUN_0043bfa0(CClothList * this_ptr)
    ADD ESP,0x4                         ; 0042828c
    LEA EAX,[EBP + 0x158]               ; 0042828f
    PUSH EAX                            ; 00428295
    LEA ESI,[EBP + 0x30]                ; 00428296
    PUSH ESI                            ; 00428299
    LEA EDI,[EBP + 0x20]                ; 0042829a
    PUSH EDI                            ; 0042829d
    PUSH EBX                            ; 0042829e
    MOV dword ptr [ESP + 0x10],EAX      ; 0042829f
    CALL core_cloth.cpp_CClothList_setup_FUN_0043c290 ; 004282a3
        ;   XREF to: 0043c290 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_setup_FUN_0043c290(CClothList * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    ADD ESP,0x10                        ; 004282a8
    MOV EAX,dword ptr [ESP]             ; 004282ab
    PUSH EAX                            ; 004282ae
    PUSH dword ptr [EBP + 0x2414]       ; 004282af
    PUSH 0x3d4ccccd                     ; 004282b5
    PUSH ESI                            ; 004282ba
    PUSH EDI                            ; 004282bb
    PUSH EBX                            ; 004282bc
    CALL core_cloth.cpp_CClothList_process_FUN_0043c2d0 ; 004282bd
        ;   XREF to: 0043c2d0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_process_FUN_0043c2d0(CClothList * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 004282c2
    PUSH EBP                            ; 004282c5
    CALL core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042e670 ; 004282c6
        ;   XREF to: 0042e670 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042e670(CCharacter * this_ptr)
    MOV DH,byte ptr [EBP + 0x2448]      ; 004282cb
    ADD ESP,0x4                         ; 004282d1
    TEST DH,DH                          ; 004282d4
    JZ 0x0042835f                       ; 004282d6
        ;   XREF to: 0042835f (CONDITIONAL_JUMP)  ; LAB_0042835f
    MOV dword ptr [EBP + 0xb7d4],0x0    ; 004282dc
    ADD ESP,0x4                         ; 004282e6
    POP EBP                             ; 004282e9
    POP EDI                             ; 004282ea
    POP ESI                             ; 004282eb
    POP EBX                             ; 004282ec
    RET                                 ; 004282ed
    PUSH 0x106                          ; 004282ee
        ;   Label: LAB_004282ee
    PUSH 0x616ede                       ; 004282f3 | = "..\\core\\charactr.cpp"
    PUSH EBX                            ; 004282f8
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 004282f9
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 004282fe
    MOV EAX,dword ptr [EBX + 0x154]     ; 00428301
    PUSH EBX                            ; 00428307
    CALL dword ptr [EAX + 0x8c]         ; 00428308
    ADD ESP,0x4                         ; 0042830e
    TEST EAX,EAX                        ; 00428311
    JZ 0x00428349                       ; 00428313
        ;   XREF to: 00428349 (CONDITIONAL_JUMP)  ; LAB_00428349
    CMP EAX,EBP                         ; 00428315
    JZ 0x0042819f                       ; 00428317
        ;   XREF to: 0042819f (CONDITIONAL_JUMP)  ; LAB_0042819f
    PUSH EAX                            ; 0042831d
    PUSH EBX                            ; 0042831e
    PUSH EBX                            ; 0042831f
    PUSH EBP                            ; 00428320
    MOV EDX,0x616ef3                    ; 00428321 | = "..\\core\\charactr.cpp"
    MOV ECX,0x10b                       ; 00428326
    PUSH 0x616f08                       ; 0042832b | = "%s is carrying %s, but %s thinks it i..."
    MOV dword ptr [0x02f0ca48],EDX      ; 00428330 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00428336 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0042833c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x14                        ; 00428341
    JMP 0x0042819f                      ; 00428344
        ;   XREF to: 0042819f (UNCONDITIONAL_JUMP)  ; LAB_0042819f
    PUSH EBP                            ; 00428349
        ;   Label: LAB_00428349
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042834a
    PUSH EBX                            ; 00428350
    CALL dword ptr [EAX + 0x80]         ; 00428351
    ADD ESP,0x8                         ; 00428357
    JMP 0x0042819f                      ; 0042835a
        ;   XREF to: 0042819f (UNCONDITIONAL_JUMP)  ; LAB_0042819f
    PUSH EBP                            ; 0042835f
        ;   Label: LAB_0042835f
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 00428360
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00428365
    LEA ESI,[EAX + 0x1]                 ; 00428368
    LEA EDI,[EBP + 0x2448]              ; 0042836b
    PUSH EDI                            ; 00428371
    MOV AL,byte ptr [ESI]               ; 00428372
        ;   Label: LAB_00428372
    MOV byte ptr [EDI],AL               ; 00428374
    CMP AL,0x0                          ; 00428376
    JZ 0x0042838a                       ; 00428378
        ;   XREF to: 0042838a (CONDITIONAL_JUMP)  ; LAB_0042838a
    MOV AL,byte ptr [ESI + 0x1]         ; 0042837a
    ADD ESI,0x2                         ; 0042837d
    MOV byte ptr [EDI + 0x1],AL         ; 00428380
    ADD EDI,0x2                         ; 00428383
    CMP AL,0x0                          ; 00428386
    JNZ 0x00428372                      ; 00428388
        ;   XREF to: 00428372 (CONDITIONAL_JUMP)  ; LAB_00428372
    POP EDI                             ; 0042838a
        ;   Label: LAB_0042838a
    MOV dword ptr [EBP + 0xb7d4],0x0    ; 0042838b
    ADD ESP,0x4                         ; 00428395
    POP EBP                             ; 00428398
    POP EDI                             ; 00428399
    POP ESI                             ; 0042839a
    POP EBX                             ; 0042839b
    RET                                 ; 0042839c

