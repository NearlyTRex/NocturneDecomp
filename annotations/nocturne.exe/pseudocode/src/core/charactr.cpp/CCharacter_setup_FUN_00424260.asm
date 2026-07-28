; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setup_FUN_00424260(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_enemy.cpp_CEnemy_setup_FUN_004796b0 at 004796b5
;   core_hero.cpp_FUN_004b48d0 at 004b48e5
;   core_npc.cpp_CNPC_setup_FUN_004ee9e0 at 004ee9e8
;
; Referenced Globals:
;   TerminatedCString s_stake_b_kfm_00579dba
;   TerminatedCString s_core_charactr_cpp_00579dc6
;   TerminatedCString s_s_is_carrying_s_but_s_th_00579ddb
;   TerminatedCString s_bip01_head_00579e16
;   float FLOAT_0059b094 = 9999
;   undefined4 DAT_007658e4
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042a800
;   core_charactr.cpp_CCharacter_computeBoundingBox_FUN_004296c0
;   core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_004266a0
;   core_cloth.cpp_CClothList_load_FUN_00438270
;   core_cloth.cpp_CClothList_process_FUN_00438550
;   core_cloth.cpp_CClothList_setup_FUN_00438510
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_main.c_FUN_004c8440
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424260
        ;   Label: core_charactr.cpp_CCharacter_setup_FUN_00424260
    PUSH ESI                            ; 00424261
    PUSH EDI                            ; 00424262
    PUSH EBP                            ; 00424263
    SUB ESP,0x4                         ; 00424264
    MOV EBP,dword ptr [ESP + 0x18]      ; 00424267
    PUSH EBP                            ; 0042426b
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 0042426c
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00424271
    PUSH 0x579dba                       ; 00424274 | = "stake_b.kfm"
    FLD float ptr [0x0059b094]          ; 00424279 | FLOAT_0059b094
    MOV dword ptr [EBP + 0x2dec],0x0    ; 0042427f
    PUSH 0x7658e4                       ; 00424289 | DAT_007658e4
    FSTP float ptr [EBP + 0x240c]       ; 0042428e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 00424294
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00424299
    PUSH 0x7658e4                       ; 0042429c | DAT_007658e4
    MOV ESI,EBP                         ; 004242a1
    LEA EDI,[EBP + 0x88]                ; 004242a3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 004242a9
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004242ae
    MOV EBX,dword ptr [ESI + 0x24ac]    ; 004242b1
        ;   Label: LAB_004242b1
    TEST EBX,EBX                        ; 004242b7
    JNZ 0x0042440b                      ; 004242b9
        ;   XREF to: 0042440b (CONDITIONAL_JUMP)  ; LAB_0042440b
    ADD ESI,0x44                        ; 004242bf
        ;   Label: LAB_004242bf
    CMP ESI,EDI                         ; 004242c2
    JNZ 0x004242b1                      ; 004242c4
        ;   XREF to: 004242b1 (CONDITIONAL_JUMP)  ; LAB_004242b1
    LEA EBX,[EBP + 0x150]               ; 004242c6
    LEA EAX,[EBP + 0x23b0]              ; 004242cc
    CMP byte ptr [EAX],0x0              ; 004242d2
    JZ 0x0042430b                       ; 004242d5
        ;   XREF to: 0042430b (CONDITIONAL_JUMP)  ; LAB_0042430b
    FLD float ptr [EBP + 0x2614]        ; 004242d7
    PUSH EBX                            ; 004242dd
    FSTP float ptr [EBP + 0x1a4]        ; 004242de
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 004242e4
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004242e9
    PUSH 0x0                            ; 004242ec
    PUSH 0x579e16                       ; 004242ee | = "bip01 head"
    PUSH EBX                            ; 004242f3
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 004242f4
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004242f9
    PUSH EAX                            ; 004242fc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004242fd
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00424302
    MOV dword ptr [EBP + 0x25dc],EAX    ; 00424305
    PUSH EBP                            ; 0042430b
        ;   Label: LAB_0042430b
    CALL core_charactr.cpp_CCharacter_computeBoundingBox_FUN_004296c0 ; 0042430c
        ;   XREF to: 004296c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_computeBoundingBox_FUN_004296c0(CCharacter * this_ptr)
    MOV EBX,dword ptr [EBP + 0x260c]    ; 00424311
    ADD ESP,0x4                         ; 00424317
    TEST EBX,EBX                        ; 0042431a
    JZ 0x004243a0                       ; 0042431c
        ;   XREF to: 004243a0 (CONDITIONAL_JUMP)  ; LAB_004243a0
    LEA EAX,[EBP + 0x150]               ; 00424322
    PUSH EAX                            ; 00424328
    XOR EBX,EBX                         ; 00424329
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0042432b
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    MOV dword ptr [EBP + 0x2f0c],0x4    ; 00424330
    ADD ESP,0x4                         ; 0042433a
    MOV EDI,dword ptr [EAX + 0x28558]   ; 0042433d
    MOV ESI,EAX                         ; 00424343
    TEST EDI,EDI                        ; 00424345
    JLE 0x00424360                      ; 00424347
        ;   XREF to: 00424360 (CONDITIONAL_JUMP)  ; LAB_00424360
    PUSH EBX                            ; 00424349
        ;   Label: LAB_00424349
    PUSH ESI                            ; 0042434a
    PUSH EBP                            ; 0042434b
    INC EBX                             ; 0042434c
    CALL core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_004266a0 ; 0042434d
        ;   XREF to: 004266a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_004266a0(CCharacter * this_ptr, CSkeleton * skeleton, int target_bone_index)
    MOV EAX,dword ptr [ESI + 0x28558]   ; 00424352
    ADD ESP,0xc                         ; 00424358
    CMP EBX,EAX                         ; 0042435b
    JL 0x00424349                       ; 0042435d
        ;   XREF to: 00424349 (CONDITIONAL_JUMP)  ; LAB_00424349
    NOP                                 ; 0042435f
    MOV EDX,dword ptr [EBP + 0x2f08]    ; 00424360
        ;   Label: LAB_00424360
    XOR ESI,ESI                         ; 00424366
    TEST EDX,EDX                        ; 00424368
    JLE 0x004243a0                      ; 0042436a
        ;   XREF to: 004243a0 (CONDITIONAL_JUMP)  ; LAB_004243a0
    MOV EAX,EBP                         ; 0042436c
    MOV EBX,EBP                         ; 0042436e
    ADD EAX,0x18                        ; 00424370
        ;   Label: LAB_00424370
    MOV dword ptr [EBX + 0x3564],0x4    ; 00424373
    MOV dword ptr [EAX + 0x2f10],0x40000000 ; 0042437d
    INC ESI                             ; 00424387
    MOV ECX,dword ptr [EBP + 0x2f08]    ; 00424388
    ADD EBX,0x29c                       ; 0042438e
    CMP ESI,ECX                         ; 00424394
    JL 0x00424370                       ; 00424396
        ;   XREF to: 00424370 (CONDITIONAL_JUMP)  ; LAB_00424370
    LEA EAX,[EAX]                       ; 00424398
    MOV EDX,EDX                         ; 0042439e
    LEA EBX,[EBP + 0x2a8c]              ; 004243a0
        ;   Label: LAB_004243a0
    PUSH EBX                            ; 004243a6
    CALL core_cloth.cpp_CClothList_load_FUN_00438270 ; 004243a7
        ;   XREF to: 00438270 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_load_FUN_00438270(CClothList * this_ptr)
    ADD ESP,0x4                         ; 004243ac
    LEA EDI,[EBP + 0x150]               ; 004243af
    PUSH EDI                            ; 004243b5
    LEA ESI,[EBP + 0x30]                ; 004243b6
    PUSH ESI                            ; 004243b9
    LEA EAX,[EBP + 0x20]                ; 004243ba
    PUSH EAX                            ; 004243bd
    PUSH EBX                            ; 004243be
    MOV dword ptr [ESP + 0x10],EAX      ; 004243bf
    CALL core_cloth.cpp_CClothList_setup_FUN_00438510 ; 004243c3
        ;   XREF to: 00438510 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_setup_FUN_00438510(CClothList * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    ADD ESP,0x10                        ; 004243c8
    PUSH EDI                            ; 004243cb
    PUSH dword ptr [EBP + 0x240c]       ; 004243cc
    PUSH 0x3d4ccccd                     ; 004243d2
    PUSH ESI                            ; 004243d7
    MOV EDX,dword ptr [ESP + 0x10]      ; 004243d8
    PUSH EDX                            ; 004243dc
    PUSH EBX                            ; 004243dd
    CALL core_cloth.cpp_CClothList_process_FUN_00438550 ; 004243de
        ;   XREF to: 00438550 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_process_FUN_00438550(CClothList * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 004243e3
    PUSH EBP                            ; 004243e6
    CALL core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042a800 ; 004243e7
        ;   XREF to: 0042a800 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042a800(CCharacter * this_ptr)
    MOV DH,byte ptr [EBP + 0x2440]      ; 004243ec
    ADD ESP,0x4                         ; 004243f2
    TEST DH,DH                          ; 004243f5
    JZ 0x00424469                       ; 004243f7
        ;   XREF to: 00424469 (CONDITIONAL_JUMP)  ; LAB_00424469
    MOV dword ptr [EBP + 0xb63c],0x0    ; 004243f9
    ADD ESP,0x4                         ; 00424403
    POP EBP                             ; 00424406
    POP EDI                             ; 00424407
    POP ESI                             ; 00424408
    POP EBX                             ; 00424409
    RET                                 ; 0042440a
    PUSH EBX                            ; 0042440b
        ;   Label: LAB_0042440b
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0042440c
    CALL dword ptr [EAX + 0x8c]         ; 00424412
    ADD ESP,0x4                         ; 00424418
    TEST EAX,EAX                        ; 0042441b
    JZ 0x00424453                       ; 0042441d
        ;   XREF to: 00424453 (CONDITIONAL_JUMP)  ; LAB_00424453
    CMP EAX,EBP                         ; 0042441f
    JZ 0x004242bf                       ; 00424421
        ;   XREF to: 004242bf (CONDITIONAL_JUMP)  ; LAB_004242bf
    PUSH EAX                            ; 00424427
    PUSH EBX                            ; 00424428
    PUSH EBX                            ; 00424429
    PUSH EBP                            ; 0042442a
    MOV EDX,0x579dc6                    ; 0042442b | = "..\\core\\charactr.cpp"
    MOV ECX,0x10c                       ; 00424430
    PUSH 0x579ddb                       ; 00424435 | = "%s is carrying %s, but %s thinks it i..."
    MOV dword ptr [0x01cc4800],EDX      ; 0042443a | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00424440 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00424446
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x14                        ; 0042444b
    JMP 0x004242bf                      ; 0042444e
        ;   XREF to: 004242bf (UNCONDITIONAL_JUMP)  ; LAB_004242bf
    PUSH EBP                            ; 00424453
        ;   Label: LAB_00424453
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00424454
    PUSH EBX                            ; 0042445a
    CALL dword ptr [EAX + 0x80]         ; 0042445b
    ADD ESP,0x8                         ; 00424461
    JMP 0x004242bf                      ; 00424464
        ;   XREF to: 004242bf (UNCONDITIONAL_JUMP)  ; LAB_004242bf
    PUSH EBP                            ; 00424469
        ;   Label: LAB_00424469
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0 ; 0042446a
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042446f
    LEA ESI,[EAX + 0x1]                 ; 00424472
    LEA EDI,[EBP + 0x2440]              ; 00424475
    PUSH EDI                            ; 0042447b
    MOV AL,byte ptr [ESI]               ; 0042447c
        ;   Label: LAB_0042447c
    MOV byte ptr [EDI],AL               ; 0042447e
    CMP AL,0x0                          ; 00424480
    JZ 0x00424494                       ; 00424482
        ;   XREF to: 00424494 (CONDITIONAL_JUMP)  ; LAB_00424494
    MOV AL,byte ptr [ESI + 0x1]         ; 00424484
    ADD ESI,0x2                         ; 00424487
    MOV byte ptr [EDI + 0x1],AL         ; 0042448a
    ADD EDI,0x2                         ; 0042448d
    CMP AL,0x0                          ; 00424490
    JNZ 0x0042447c                      ; 00424492
        ;   XREF to: 0042447c (CONDITIONAL_JUMP)  ; LAB_0042447c
    POP EDI                             ; 00424494
        ;   Label: LAB_00424494
    MOV dword ptr [EBP + 0xb63c],0x0    ; 00424495
    ADD ESP,0x4                         ; 0042449f
    POP EBP                             ; 004244a2
    POP EDI                             ; 004244a3
    POP ESI                             ; 004244a4
    POP EBX                             ; 004244a5
    RET                                 ; 004244a6

