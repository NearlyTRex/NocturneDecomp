; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_005b81d0(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_COMBATMODEHARD_005fa1d6
;   TerminatedCString s_Bip01_Spine1_005fa1e5
;   TerminatedCString s_Bip01_Head_005fa1f2
;   TerminatedCString s_Bip01_Pelvis_005fa1fd
;   TerminatedCString s_Bip01_Spine_005fa20a
;   TerminatedCString s_Bip01_Spine1_005fa216
;   TerminatedCString s_Bip01_Spine2_005fa223
;   TerminatedCString s_Bip01_Head_005fa230
;   undefined4 DAT_005fa23b
;   undefined4 DAT_005fa240
;   TerminatedCString s_l4arm_005fa245
;   TerminatedCString s_r4arm_005fa24b
;   TerminatedCString s_waist_005fa251
;   TerminatedCString s_torso_005fa257
;   undefined4 DAT_005fa25d
;   ... and 5 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b81d0
        ;   Label: core_xform.cpp_FUN_005b81d0
    PUSH ESI                            ; 005b81d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b81d2
    LEA EAX,[EBX + 0x158]               ; 005b81d6
    PUSH EAX                            ; 005b81dc
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20 ; 005b81dd
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005b81e2
    PUSH 0x5fa1d6                       ; 005b81e5 | = "COMBATMODEHARD"
    MOV EDX,dword ptr [0x0061b4d0]      ; 005b81ea | DAT_0061b4d0
    PUSH EDX                            ; 005b81f0
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 005b81f1
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005b81f6
    TEST EAX,EAX                        ; 005b81f9
    JNZ 0x005b83cb                      ; 005b81fb
        ;   XREF to: 005b83cb (CONDITIONAL_JUMP)  ; LAB_005b83cb
    MOV dword ptr [EBX + 0xc2b4],0x3f400000 ; 005b8201
    PUSH EDI                            ; 005b820b
        ;   Label: LAB_005b820b
    LEA EDI,[EBX + 0x158]               ; 005b820c
    PUSH EDI                            ; 005b8212
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 005b8213
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005b8218
    PUSH 0x1                            ; 005b821b
    PUSH 0x5fa1e5                       ; 005b821d | = "Bip01 Spine1"
    PUSH EAX                            ; 005b8222
    MOV ESI,EAX                         ; 005b8223
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005b8225
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005b822a
    PUSH 0x1                            ; 005b822d
    PUSH 0x5fa1f2                       ; 005b822f | = "Bip01 Head"
    PUSH ESI                            ; 005b8234
    MOV dword ptr [EBX + 0xc268],EAX    ; 005b8235
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005b823b
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005b8240
    PUSH 0x1                            ; 005b8243
    PUSH 0x5fa1fd                       ; 005b8245 | = "Bip01 Pelvis"
    PUSH ESI                            ; 005b824a
    MOV dword ptr [EBX + 0xc26c],EAX    ; 005b824b
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005b8251
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005b8256
    PUSH 0x1                            ; 005b8259
    PUSH 0x5fa20a                       ; 005b825b | = "Bip01 Spine"
    PUSH ESI                            ; 005b8260
    MOV dword ptr [EBX + 0xc270],EAX    ; 005b8261
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005b8267
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005b826c
    PUSH 0x1                            ; 005b826f
    PUSH 0x5fa216                       ; 005b8271 | = "Bip01 Spine1"
    PUSH ESI                            ; 005b8276
    MOV dword ptr [EBX + 0xc274],EAX    ; 005b8277
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005b827d
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005b8282
    PUSH 0x1                            ; 005b8285
    PUSH 0x5fa223                       ; 005b8287 | = "Bip01 Spine2"
    PUSH ESI                            ; 005b828c
    MOV dword ptr [EBX + 0xc278],EAX    ; 005b828d
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005b8293
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005b8298
    PUSH 0x1                            ; 005b829b
    PUSH 0x5fa230                       ; 005b829d | = "Bip01 Head"
    PUSH ESI                            ; 005b82a2
    MOV dword ptr [EBX + 0xc27c],EAX    ; 005b82a3
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005b82a9
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005b82ae
    PUSH EDI                            ; 005b82b1
    MOV dword ptr [EBX + 0xc280],EAX    ; 005b82b2
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 005b82b8
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005b82bd
    PUSH 0x1                            ; 005b82c0
    PUSH 0x5fa23b                       ; 005b82c2 | DAT_005fa23b
    PUSH EAX                            ; 005b82c7
    MOV ESI,EAX                         ; 005b82c8
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 005b82ca
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005b82cf
    MOV dword ptr [EBX + 0xc284],EAX    ; 005b82d2
    POP EDI                             ; 005b82d8
    PUSH 0x1                            ; 005b82d9
    PUSH 0x5fa240                       ; 005b82db | DAT_005fa240
    PUSH ESI                            ; 005b82e0
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 005b82e1
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005b82e6
    PUSH 0x1                            ; 005b82e9
    PUSH 0x5fa245                       ; 005b82eb | = "l4arm"
    PUSH ESI                            ; 005b82f0
    MOV dword ptr [EBX + 0xc288],EAX    ; 005b82f1
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 005b82f7
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005b82fc
    PUSH 0x1                            ; 005b82ff
    PUSH 0x5fa24b                       ; 005b8301 | = "r4arm"
    PUSH ESI                            ; 005b8306
    MOV dword ptr [EBX + 0xc28c],EAX    ; 005b8307
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 005b830d
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005b8312
    PUSH 0x1                            ; 005b8315
    PUSH 0x5fa251                       ; 005b8317 | = "waist"
    PUSH ESI                            ; 005b831c
    MOV dword ptr [EBX + 0xc290],EAX    ; 005b831d
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 005b8323
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005b8328
    PUSH 0x1                            ; 005b832b
    PUSH 0x5fa257                       ; 005b832d | = "torso"
    PUSH ESI                            ; 005b8332
    MOV dword ptr [EBX + 0xc294],EAX    ; 005b8333
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 005b8339
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005b833e
    PUSH 0x1                            ; 005b8341
    PUSH 0x5fa25d                       ; 005b8343 | DAT_005fa25d
    PUSH ESI                            ; 005b8348
    MOV dword ptr [EBX + 0xc298],EAX    ; 005b8349
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 005b834f
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005b8354
    PUSH 0x1                            ; 005b8357
    PUSH 0x5fa262                       ; 005b8359 | = "rshin"
    PUSH ESI                            ; 005b835e
    MOV dword ptr [EBX + 0xc29c],EAX    ; 005b835f
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 005b8365
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005b836a
    PUSH 0x1                            ; 005b836d
    PUSH 0x5fa268                       ; 005b836f | = "lshin"
    PUSH ESI                            ; 005b8374
    MOV dword ptr [EBX + 0xc2a0],EAX    ; 005b8375
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 005b837b
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005b8380
    PUSH 0x1                            ; 005b8383
    PUSH 0x5fa26e                       ; 005b8385 | = "rthigh"
    PUSH ESI                            ; 005b838a
    MOV dword ptr [EBX + 0xc2a4],EAX    ; 005b838b
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 005b8391
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005b8396
    PUSH 0x1                            ; 005b8399
    PUSH 0x5fa275                       ; 005b839b | = "lthigh"
    PUSH ESI                            ; 005b83a0
    MOV dword ptr [EBX + 0xc2a8],EAX    ; 005b83a1
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 005b83a7
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005b83ac
    MOV dword ptr [EBX + 0x2384],0x0    ; 005b83af
    PUSH EBX                            ; 005b83b9
    MOV dword ptr [EBX + 0xc2ac],EAX    ; 005b83ba
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 005b83c0
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005b83c5
    POP ESI                             ; 005b83c8
    POP EBX                             ; 005b83c9
    RET                                 ; 005b83ca
    MOV dword ptr [EBX + 0xc2b4],0x3f800000 ; 005b83cb
        ;   Label: LAB_005b83cb
    JMP 0x005b820b                      ; 005b83d5
        ;   XREF to: 005b820b (UNCONDITIONAL_JUMP)  ; LAB_005b820b

