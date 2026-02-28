; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_CDraculaBride_setup_FUN_004840b0(CDraculaBride *this_ptr)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   TerminatedCString s_nbride2_dfm_00621875
;   TerminatedCString s_nbride2x_dfm_00621881
;   TerminatedCString s_nbride3_dfm_0062188e
;   TerminatedCString s_nbride3x_dfm_0062189a
;   TerminatedCString s_nbride4_dfm_006218a7
;   TerminatedCString s_nbride4x_dfm_006218b3
;   TerminatedCString s_nbride2x_dfm_006218c0
;   TerminatedCString s_nbride2_dfm_006218cd
;   TerminatedCString s_nbride3x_dfm_006218d9
;   TerminatedCString s_nbride3_dfm_006218e6
;   TerminatedCString s_nbride4x_dfm_006218f2
;   TerminatedCString s_nbride4_dfm_006218ff
;   TerminatedCString s_Bip01_Head_0062190b
;   TerminatedCString s_Bip01_L_Hand_00621916
;   TerminatedCString s_Bip01_R_Hand_00621923
;   ... and 24 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_enemy.cpp_CEnemy_setup_FUN_004a9650
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;   crt_string.c__stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004840b0
        ;   Label: core_dracbrid.cpp_CDraculaBride_setup_FUN_004840b0
    SUB ESP,0x4                         ; 004840b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004840b4
    PUSH EDI                            ; 004840b8
    PUSH ESI                            ; 004840b9
    MOV EDI,dword ptr [0x0067b654]      ; 004840ba | g_CGamePtr
    LEA EAX,[EBX + 0x23b8]              ; 004840c0
    MOV EDX,dword ptr [EDI + 0x18]      ; 004840c6 | g_CGameInstance.nudity_flag
    LEA ESI,[EBX + 0x158]               ; 004840c9
    TEST EDX,EDX                        ; 004840cf
    JZ 0x00484329                       ; 004840d1
        ;   XREF to: 00484329 (CONDITIONAL_JUMP)  ; LAB_00484329
    PUSH 0x6218c0                       ; 004840d7 | = "nbride2x.dfm"
    PUSH EAX                            ; 004840dc
    MOV EDI,EAX                         ; 004840dd
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004840df
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004840e4
    TEST EAX,EAX                        ; 004840e7
    JNZ 0x004840f9                      ; 004840e9
        ;   XREF to: 004840f9 (CONDITIONAL_JUMP)  ; LAB_004840f9
    PUSH 0x6218cd                       ; 004840eb | = "nbride2.dfm"
    PUSH ESI                            ; 004840f0
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 004840f1
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004840f6
    PUSH 0x6218d9                       ; 004840f9 | = "nbride3x.dfm"
        ;   Label: LAB_004840f9
    PUSH EDI                            ; 004840fe
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004840ff
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00484104
    TEST EAX,EAX                        ; 00484107
    JNZ 0x0048411f                      ; 00484109
        ;   XREF to: 0048411f (CONDITIONAL_JUMP)  ; LAB_0048411f
    PUSH 0x6218e6                       ; 0048410b | = "nbride3.dfm"
    LEA EAX,[EBX + 0x158]               ; 00484110
    PUSH EAX                            ; 00484116
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00484117
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 0048411c
    PUSH 0x6218f2                       ; 0048411f | = "nbride4x.dfm"
        ;   Label: LAB_0048411f
    PUSH EDI                            ; 00484124
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 00484125
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048412a
    TEST EAX,EAX                        ; 0048412d
    JNZ 0x00484145                      ; 0048412f
        ;   XREF to: 00484145 (CONDITIONAL_JUMP)  ; LAB_00484145
    PUSH 0x6218ff                       ; 00484131 | = "nbride4.dfm"
    LEA EAX,[EBX + 0x158]               ; 00484136
        ;   Label: LAB_00484136
    PUSH EAX                            ; 0048413c
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 0048413d
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00484142
    PUSH EBX                            ; 00484145
        ;   Label: LAB_00484145
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a9650 ; 00484146
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a9650(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0048414b
    LEA EDI,[EBX + 0x158]               ; 0048414e
    PUSH EDI                            ; 00484154
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 00484155
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0048415a
    PUSH 0x1                            ; 0048415d
    PUSH 0x62190b                       ; 0048415f | = "Bip01 Head"
    PUSH EAX                            ; 00484164
    MOV ESI,EAX                         ; 00484165
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00484167
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0048416c
    PUSH 0x1                            ; 0048416f
    PUSH 0x621916                       ; 00484171 | = "Bip01 L Hand"
    PUSH ESI                            ; 00484176
    MOV [0x02c6d0a0],EAX                ; 00484177 | INT_02c6d0a0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0048417c
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00484181
    PUSH 0x1                            ; 00484184
    PUSH 0x621923                       ; 00484186 | = "Bip01 R Hand"
    PUSH ESI                            ; 0048418b
    MOV [0x02c6d0a4],EAX                ; 0048418c | INT_02c6d0a4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00484191
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00484196
    PUSH 0x1                            ; 00484199
    PUSH 0x621930                       ; 0048419b | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004841a0
    MOV [0x02c6d0a8],EAX                ; 004841a1 | INT_02c6d0a8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004841a6
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004841ab
    PUSH 0x1                            ; 004841ae
    PUSH 0x621941                       ; 004841b0 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004841b5
    MOV [0x02c6d0ac],EAX                ; 004841b6 | INT_02c6d0ac
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004841bb
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004841c0
    PUSH 0x1                            ; 004841c3
    PUSH 0x621952                       ; 004841c5 | = "Bip01 Spine"
    PUSH ESI                            ; 004841ca
    MOV [0x02c6d0b0],EAX                ; 004841cb | INT_02c6d0b0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004841d0
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004841d5
    PUSH 0x1                            ; 004841d8
    PUSH 0x62195e                       ; 004841da | = "Bip01 Spine1"
    PUSH ESI                            ; 004841df
    MOV [0x02c6d0b4],EAX                ; 004841e0 | INT_02c6d0b4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004841e5
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004841ea
    PUSH 0x1                            ; 004841ed
    PUSH 0x62196b                       ; 004841ef | = "Bip01 Spine2"
    PUSH ESI                            ; 004841f4
    MOV [0x02c6d0b8],EAX                ; 004841f5 | INT_02c6d0b8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004841fa
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004841ff
    PUSH EDI                            ; 00484202
    MOV [0x02c6d0bc],EAX                ; 00484203 | INT_02c6d0bc
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 00484208
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    MOV ESI,EAX                         ; 0048420d
    ADD ESP,0x4                         ; 0048420f
    PUSH 0x1                            ; 00484212
    PUSH 0x621978                       ; 00484214 | = "larm01"
    PUSH EAX                            ; 00484219
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 0048421a
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0048421f
    PUSH 0x1                            ; 00484222
    PUSH 0x62197f                       ; 00484224 | = "l4arm01"
    PUSH ESI                            ; 00484229
    MOV dword ptr [EBX + 0xbebc],EAX    ; 0048422a
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00484230
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00484235
    PUSH 0x1                            ; 00484238
    PUSH 0x621987                       ; 0048423a | = "rarm01"
    PUSH ESI                            ; 0048423f
    MOV dword ptr [EBX + 0xbec0],EAX    ; 00484240
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00484246
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0048424b
    PUSH 0x1                            ; 0048424e
    PUSH 0x62198e                       ; 00484250 | = "r4arm01"
    PUSH ESI                            ; 00484255
    MOV dword ptr [EBX + 0xbec4],EAX    ; 00484256
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 0048425c
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00484261
    PUSH 0x1                            ; 00484264
    PUSH 0x621996                       ; 00484266 | = "lshin01"
    PUSH ESI                            ; 0048426b
    MOV dword ptr [EBX + 0xbec8],EAX    ; 0048426c
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00484272
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00484277
    PUSH 0x1                            ; 0048427a
    PUSH 0x62199e                       ; 0048427c | = "rshin01"
    PUSH ESI                            ; 00484281
    MOV dword ptr [EBX + 0xbecc],EAX    ; 00484282
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 00484288
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0048428d
    PUSH 0x1                            ; 00484290
    PUSH 0x6219a6                       ; 00484292 | = "torso01"
    PUSH ESI                            ; 00484297
    MOV dword ptr [EBX + 0xbed0],EAX    ; 00484298
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 0048429e
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004842a3
    PUSH 0x1                            ; 004842a6
    PUSH 0x6219ae                       ; 004842a8 | = "waist01"
    PUSH ESI                            ; 004842ad
    MOV dword ptr [EBX + 0xbed4],EAX    ; 004842ae
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004842b4
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004842b9
    PUSH 0x1                            ; 004842bc
    PUSH 0x6219b6                       ; 004842be | = "head01"
    PUSH ESI                            ; 004842c3
    MOV dword ptr [EBX + 0xbed8],EAX    ; 004842c4
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004842ca
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004842cf
    MOV dword ptr [EBX + 0xbedc],EAX    ; 004842d2
    POP ESI                             ; 004842d8
    POP EDI                             ; 004842d9
    PUSH 0x41200000                     ; 004842da
    PUSH 0x40a00000                     ; 004842df
    MOV dword ptr [EBX + 0xbf64],0x0    ; 004842e4
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004842ee
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    PUSH 0x621875                       ; 00484329 | = "nbride2.dfm"
        ;   Label: LAB_00484329
    PUSH EAX                            ; 0048432e
    MOV EDI,EAX                         ; 0048432f
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 00484331
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00484336
    TEST EAX,EAX                        ; 00484339
    JNZ 0x0048434b                      ; 0048433b
        ;   XREF to: 0048434b (CONDITIONAL_JUMP)  ; LAB_0048434b
    PUSH 0x621881                       ; 0048433d | = "nbride2x.dfm"
    PUSH ESI                            ; 00484342
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00484343
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00484348
    PUSH 0x62188e                       ; 0048434b | = "nbride3.dfm"
        ;   Label: LAB_0048434b
    PUSH EDI                            ; 00484350
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 00484351
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00484356
    TEST EAX,EAX                        ; 00484359
    JNZ 0x00484371                      ; 0048435b
        ;   XREF to: 00484371 (CONDITIONAL_JUMP)  ; LAB_00484371
    PUSH 0x62189a                       ; 0048435d | = "nbride3x.dfm"
    LEA EAX,[EBX + 0x158]               ; 00484362
    PUSH EAX                            ; 00484368
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00484369
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 0048436e
    PUSH 0x6218a7                       ; 00484371 | = "nbride4.dfm"
        ;   Label: LAB_00484371
    PUSH EDI                            ; 00484376
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 00484377
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048437c
    TEST EAX,EAX                        ; 0048437f
    JNZ 0x00484145                      ; 00484381
        ;   XREF to: 00484145 (CONDITIONAL_JUMP)  ; LAB_00484145
    PUSH 0x6218b3                       ; 00484387 | = "nbride4x.dfm"
    JMP 0x00484136                      ; 0048438c
        ;   XREF to: 00484136 (UNCONDITIONAL_JUMP)  ; LAB_00484136

