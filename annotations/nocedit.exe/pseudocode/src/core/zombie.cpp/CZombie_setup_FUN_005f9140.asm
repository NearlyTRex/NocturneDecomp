; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_zombie_cpp_CZombie_setup_FUN_005f9140(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_006584a2
;   TerminatedCString s_Bip01_L_ForeArm_006584ad
;   TerminatedCString s_Bip01_R_ForeArm_006584bd
;   TerminatedCString s_Bip01_L_UpperArm_006584cd
;   TerminatedCString s_Bip01_R_UpperArm_006584de
;   TerminatedCString s_Bip01_L_Foot_006584ef
;   TerminatedCString s_Bip01_R_Foot_006584fc
;   TerminatedCString s_Bip01_L_Hand_00658509
;   TerminatedCString s_Bip01_R_Hand_00658516
;   TerminatedCString s_Bip01_Spine_00658523
;   TerminatedCString s_Bip01_Spine2_0065852f
;   TerminatedCString s_larm01_0065853c
;   TerminatedCString s_l4arm01_00658543
;   TerminatedCString s_rarm01_0065854b
;   TerminatedCString s_r4arm01_00658552
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_enemy.cpp_CEnemy_setup_FUN_004a9650
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;   crt_string.c__stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f9140
        ;   Label: core_zombie.cpp_CZombie_setup_FUN_005f9140
    PUSH ESI                            ; 005f9141
    PUSH EDI                            ; 005f9142
    PUSH EBP                            ; 005f9143
    MOV EBP,ESP                         ; 005f9144
    SUB ESP,0x4                         ; 005f9146
    MOV EBX,dword ptr [EBP + 0x14]      ; 005f9149
    LEA EDI,[EBX + 0x158]               ; 005f914c
    PUSH EDI                            ; 005f9152
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 005f9153
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005f9158
    PUSH EDI                            ; 005f915b
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005f915c
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005f9161
    PUSH 0x1                            ; 005f9164
    PUSH 0x6584a2                       ; 005f9166 | = "Bip01 Head"
    PUSH EAX                            ; 005f916b
    MOV ESI,EAX                         ; 005f916c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005f916e
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005f9173
    PUSH 0x1                            ; 005f9176
    PUSH 0x6584ad                       ; 005f9178 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 005f917d
    MOV dword ptr [EBX + 0xbf4c],EAX    ; 005f917e
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005f9184
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005f9189
    PUSH 0x1                            ; 005f918c
    PUSH 0x6584bd                       ; 005f918e | = "Bip01 R ForeArm"
    PUSH ESI                            ; 005f9193
    MOV dword ptr [EBX + 0xbf58],EAX    ; 005f9194
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005f919a
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005f919f
    PUSH 0x1                            ; 005f91a2
    PUSH 0x6584cd                       ; 005f91a4 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 005f91a9
    MOV dword ptr [EBX + 0xbf5c],EAX    ; 005f91aa
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005f91b0
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005f91b5
    PUSH 0x1                            ; 005f91b8
    PUSH 0x6584de                       ; 005f91ba | = "Bip01 R UpperArm"
    PUSH ESI                            ; 005f91bf
    MOV dword ptr [EBX + 0xbf60],EAX    ; 005f91c0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005f91c6
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005f91cb
    PUSH 0x1                            ; 005f91ce
    PUSH 0x6584ef                       ; 005f91d0 | = "Bip01 L Foot"
    PUSH ESI                            ; 005f91d5
    MOV dword ptr [EBX + 0xbf64],EAX    ; 005f91d6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005f91dc
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005f91e1
    PUSH 0x1                            ; 005f91e4
    PUSH 0x6584fc                       ; 005f91e6 | = "Bip01 R Foot"
    PUSH ESI                            ; 005f91eb
    MOV dword ptr [EBX + 0xbf68],EAX    ; 005f91ec
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005f91f2
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005f91f7
    PUSH 0x1                            ; 005f91fa
    PUSH 0x658509                       ; 005f91fc | = "Bip01 L Hand"
    PUSH ESI                            ; 005f9201
    MOV dword ptr [EBX + 0xbf6c],EAX    ; 005f9202
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005f9208
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005f920d
    MOV dword ptr [EBX + 0xbf50],EAX    ; 005f9210
    PUSH 0x1                            ; 005f9216
    PUSH 0x658516                       ; 005f9218 | = "Bip01 R Hand"
    PUSH ESI                            ; 005f921d
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005f921e
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005f9223
    PUSH 0x1                            ; 005f9226
    PUSH 0x658523                       ; 005f9228 | = "Bip01 Spine"
    PUSH ESI                            ; 005f922d
    MOV dword ptr [EBX + 0xbf54],EAX    ; 005f922e
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005f9234
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005f9239
    PUSH 0x1                            ; 005f923c
    PUSH 0x65852f                       ; 005f923e | = "Bip01 Spine2"
    PUSH ESI                            ; 005f9243
    MOV dword ptr [EBX + 0xbf70],EAX    ; 005f9244
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 005f924a
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005f924f
    PUSH EDI                            ; 005f9252
    MOV dword ptr [EBX + 0xbf74],EAX    ; 005f9253
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005f9259
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005f925e
    PUSH 0x1                            ; 005f9261
    PUSH 0x65853c                       ; 005f9263 | = "larm01"
    PUSH EAX                            ; 005f9268
    MOV ESI,EAX                         ; 005f9269
    MOV EDI,EAX                         ; 005f926b
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005f926d
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005f9272
    PUSH 0x1                            ; 005f9275
    PUSH 0x658543                       ; 005f9277 | = "l4arm01"
    PUSH ESI                            ; 005f927c
    MOV dword ptr [EBX + 0xbf78],EAX    ; 005f927d
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005f9283
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005f9288
    PUSH 0x1                            ; 005f928b
    PUSH 0x65854b                       ; 005f928d | = "rarm01"
    PUSH ESI                            ; 005f9292
    MOV dword ptr [EBX + 0xbf7c],EAX    ; 005f9293
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005f9299
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005f929e
    PUSH 0x0                            ; 005f92a1
    PUSH 0x658552                       ; 005f92a3 | = "r4arm01"
    PUSH ESI                            ; 005f92a8
    MOV dword ptr [EBX + 0xbf80],EAX    ; 005f92a9
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005f92af
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005f92b4
    MOV dword ptr [EBX + 0xbf84],EAX    ; 005f92b7
    TEST EAX,EAX                        ; 005f92bd
    JGE 0x005f92cb                      ; 005f92bf
        ;   XREF to: 005f92cb (CONDITIONAL_JUMP)  ; LAB_005f92cb
    MOV dword ptr [EBX + 0xbf84],0x1d   ; 005f92c1
    PUSH 0x0                            ; 005f92cb
        ;   Label: LAB_005f92cb
    PUSH 0x65855a                       ; 005f92cd | = "waist01"
    PUSH EDI                            ; 005f92d2
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005f92d3
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005f92d8
    PUSH 0x1                            ; 005f92db
    PUSH 0x658562                       ; 005f92dd | = "torso01"
    PUSH EDI                            ; 005f92e2
    MOV dword ptr [EBX + 0xbf88],EAX    ; 005f92e3
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005f92e9
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005f92ee
    PUSH 0x1                            ; 005f92f1
    PUSH 0x65856a                       ; 005f92f3 | = "head01"
    PUSH EDI                            ; 005f92f8
    MOV dword ptr [EBX + 0xbf8c],EAX    ; 005f92f9
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 005f92ff
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 005f9304
    PUSH 0x658571                       ; 005f9307 | = "newzomb1.dfm"
    MOV dword ptr [EBX + 0xbf90],EAX    ; 005f930c
    LEA EAX,[EBX + 0x23b8]              ; 005f9312
    PUSH EAX                            ; 005f9318
    MOV dword ptr [EBX + 0x230c],0x0    ; 005f9319
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005f9323
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005f9328
    TEST EAX,EAX                        ; 005f932b
    JNZ 0x005f9357                      ; 005f932d
        ;   XREF to: 005f9357 (CONDITIONAL_JUMP)  ; LAB_005f9357
    LEA EAX,[EBX + 0xbf78]              ; 005f932f
    LEA ESI,[EBX + 0xbf80]              ; 005f9335
    MOV EDX,dword ptr [ESI]             ; 005f933b
    MOV EDI,dword ptr [EAX]             ; 005f933d
    MOV dword ptr [EAX],EDX             ; 005f933f
    LEA EAX,[EBX + 0xbf7c]              ; 005f9341
    MOV dword ptr [ESI],EDI             ; 005f9347
    LEA ESI,[EBX + 0xbf84]              ; 005f9349
    MOV EDI,dword ptr [ESI]             ; 005f934f
    MOV EDX,dword ptr [EAX]             ; 005f9351
    MOV dword ptr [EAX],EDI             ; 005f9353
    MOV dword ptr [ESI],EDX             ; 005f9355
    MOV EAX,dword ptr [EBX + 0xbf50]    ; 005f9357
        ;   Label: LAB_005f9357
    MOV dword ptr [EBX + 0x24ac],EAX    ; 005f935d
    MOV EAX,dword ptr [EBX + 0xbf7c]    ; 005f9363
    MOV dword ptr [EBX + 0x24b0],EAX    ; 005f9369
    MOV EAX,dword ptr [EBX + 0xbf54]    ; 005f936f
    MOV dword ptr [EBX + 0x24f0],EAX    ; 005f9375
    MOV EAX,dword ptr [EBX + 0xbf84]    ; 005f937b
    PUSH EBX                            ; 005f9381
    MOV dword ptr [EBX + 0x24f4],EAX    ; 005f9382
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a9650 ; 005f9388
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a9650(CEnemy * this_ptr)
    MOV ECX,dword ptr [EBX + 0xbf40]    ; 005f938d
    ADD ESP,0x4                         ; 005f9393
    TEST ECX,ECX                        ; 005f9396
    SETNZ AL                            ; 005f9398
    PUSH 0x3f800000                     ; 005f939b
    AND EAX,0xff                        ; 005f93a0
    PUSH 0x0                            ; 005f93a5
    MOV dword ptr [EBX + 0xfc],EAX      ; 005f93a7
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005f93ad
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

