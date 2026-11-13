; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040e240(CAmmo *this_ptr,char *weapon_class_name)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   weapon_class_name
;
; XREF[6]:
;   core_ammobox.cpp_CAmmoBox_addToInventory_FUN_0040e670 at 0040e702
;   core_game.cpp_FUN_004b90d0 at 004ba0e1
;   core_game.cpp_giveHeroWeaponAmmo_FUN_004b8fd0 at 004b9028
;   core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020 at 004dd08e
;   core_inv.cpp_FUN_004dadb0 at 004db288
;   core_inv.cpp_FUN_004db760 at 004db7da
;
; Referenced Globals:
;   void* switchdataD_0040e214 = 0040e282
;   undefined4 DAT_005cb10b
;   TerminatedCString s_bullets6_1_kfm_005cb110
;   TerminatedCString s_holybullet_kfm_005cb11f
;   TerminatedCString s_woodbullet_kfm_005cb12e
;   TerminatedCString s_silverbullet_kfm_005cb13d
;   TerminatedCString s_goldbullet_kfm_005cb14e
;   TerminatedCString s_lithiumbullet_kfm_005cb15d
;   TerminatedCString s_mercurybullet_kfm_005cb16f
;   TerminatedCString s_CShotgun_005cb181
;   TerminatedCString s_shell_kfm_005cb18a
;   TerminatedCString s_CCrossbow_005cb194
;   TerminatedCString s_holystake_kfm_005cb19e
;   TerminatedCString s_stake_kfm_005cb1ac
;   TerminatedCString s_CDynamite_005cb1b6
;   ... and 9 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   crt_string.c__strcmp_FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e240
        ;   Label: core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040e240
    PUSH EDI                            ; 0040e241
    PUSH EBP                            ; 0040e242
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040e243
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040e247
    LEA EDI,[EBX + 0x430]               ; 0040e24b
    CMP EDI,EBP                         ; 0040e251
    JNZ 0x0040e3ae                      ; 0040e253
        ;   XREF to: 0040e3ae (CONDITIONAL_JUMP)  ; LAB_0040e3ae
    PUSH 0x5cb10b                       ; 0040e259 | DAT_005cb10b
        ;   Label: LAB_0040e259
    PUSH EBP                            ; 0040e25e
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0040e25f
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040e264
    TEST EAX,EAX                        ; 0040e267
    JNZ 0x0040e296                      ; 0040e269
        ;   XREF to: 0040e296 (CONDITIONAL_JUMP)  ; LAB_0040e296
    MOV EAX,dword ptr [EBX + 0x474]     ; 0040e26b
    DEC EAX                             ; 0040e271
    CMP EAX,0x7                         ; 0040e272
    JA 0x0040e3d1                       ; 0040e275
        ;   XREF to: 0040e3d1 (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EAX*0x4 + 0x40e214]  ; 0040e27b | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    PUSH 0x5cb11f                       ; 0040e282 | = "holybullet.kfm"
        ;   Label: caseD_1
    LEA EAX,[EBX + 0x2b4]               ; 0040e287
        ;   Label: LAB_0040e287
    PUSH EAX                            ; 0040e28d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0040e28e
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040e293
    PUSH 0x5cb181                       ; 0040e296 | = "CShotgun"
        ;   Label: LAB_0040e296
    PUSH EBP                            ; 0040e29b
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0040e29c
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040e2a1
    TEST EAX,EAX                        ; 0040e2a4
    JNZ 0x0040e2bc                      ; 0040e2a6
        ;   XREF to: 0040e2bc (CONDITIONAL_JUMP)  ; LAB_0040e2bc
    PUSH 0x5cb18a                       ; 0040e2a8 | = "shell.kfm"
    LEA EAX,[EBX + 0x2b4]               ; 0040e2ad
    PUSH EAX                            ; 0040e2b3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0040e2b4
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040e2b9
    PUSH 0x5cb194                       ; 0040e2bc | = "CCrossbow"
        ;   Label: LAB_0040e2bc
    PUSH EBP                            ; 0040e2c1
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0040e2c2
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040e2c7
    TEST EAX,EAX                        ; 0040e2ca
    JNZ 0x0040e2f1                      ; 0040e2cc
        ;   XREF to: 0040e2f1 (CONDITIONAL_JUMP)  ; LAB_0040e2f1
    MOV EDX,dword ptr [EBX + 0x474]     ; 0040e2ce
    LEA EAX,[EBX + 0x2b4]               ; 0040e2d4
    CMP EDX,0x1                         ; 0040e2da
    JNZ 0x0040e40d                      ; 0040e2dd
        ;   XREF to: 0040e40d (CONDITIONAL_JUMP)  ; LAB_0040e40d
    PUSH 0x5cb19e                       ; 0040e2e3 | = "holystake.kfm"
    PUSH EAX                            ; 0040e2e8
        ;   Label: LAB_0040e2e8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0040e2e9
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040e2ee
    PUSH 0x5cb1b6                       ; 0040e2f1 | = "CDynamite"
        ;   Label: LAB_0040e2f1
    PUSH EBP                            ; 0040e2f6
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0040e2f7
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040e2fc
    TEST EAX,EAX                        ; 0040e2ff
    JNZ 0x0040e317                      ; 0040e301
        ;   XREF to: 0040e317 (CONDITIONAL_JUMP)  ; LAB_0040e317
    PUSH 0x5cb1c0                       ; 0040e303 | = "dynamitebundle.kfm"
    LEA EAX,[EBX + 0x2b4]               ; 0040e308
    PUSH EAX                            ; 0040e30e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0040e30f
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040e314
    PUSH 0x5cb1d3                       ; 0040e317 | = "CTommyGun"
        ;   Label: LAB_0040e317
    PUSH EBP                            ; 0040e31c
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0040e31d
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040e322
    TEST EAX,EAX                        ; 0040e325
    JNZ 0x0040e33d                      ; 0040e327
        ;   XREF to: 0040e33d (CONDITIONAL_JUMP)  ; LAB_0040e33d
    PUSH 0x5cb1dd                       ; 0040e329 | = "tommybullet.kfm"
    LEA EAX,[EBX + 0x2b4]               ; 0040e32e
    PUSH EAX                            ; 0040e334
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0040e335
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040e33a
    PUSH 0x5cb1ed                       ; 0040e33d | = "CFlameThrower"
        ;   Label: LAB_0040e33d
    PUSH EBP                            ; 0040e342
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0040e343
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040e348
    TEST EAX,EAX                        ; 0040e34b
    JNZ 0x0040e363                      ; 0040e34d
        ;   XREF to: 0040e363 (CONDITIONAL_JUMP)  ; LAB_0040e363
    PUSH 0x5cb1fb                       ; 0040e34f | = "fgunammo.kfm"
    LEA EAX,[EBX + 0x2b4]               ; 0040e354
    PUSH EAX                            ; 0040e35a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0040e35b
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040e360
    PUSH 0x5cb208                       ; 0040e363 | = "CElephantGun"
        ;   Label: LAB_0040e363
    PUSH EBP                            ; 0040e368
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0040e369
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040e36e
    TEST EAX,EAX                        ; 0040e371
    JNZ 0x0040e389                      ; 0040e373
        ;   XREF to: 0040e389 (CONDITIONAL_JUMP)  ; LAB_0040e389
    PUSH 0x5cb215                       ; 0040e375 | = "eleshell.kfm"
    LEA EAX,[EBX + 0x2b4]               ; 0040e37a
    PUSH EAX                            ; 0040e380
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0040e381
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040e386
    PUSH 0x5cb222                       ; 0040e389 | = "CLightgun"
        ;   Label: LAB_0040e389
    PUSH EBP                            ; 0040e38e
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0040e38f
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040e394
    TEST EAX,EAX                        ; 0040e397
    JZ 0x0040e417                       ; 0040e399
        ;   XREF to: 0040e417 (CONDITIONAL_JUMP)  ; LAB_0040e417
    ADD EBX,0x2b4                       ; 0040e39b
    PUSH EBX                            ; 0040e3a1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 0040e3a2
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040e3a7
    POP EBP                             ; 0040e3aa
    POP EDI                             ; 0040e3ab
    POP EBX                             ; 0040e3ac
    RET                                 ; 0040e3ad
    PUSH ESI                            ; 0040e3ae
        ;   Label: LAB_0040e3ae
    MOV ESI,EBP                         ; 0040e3af
    PUSH EDI                            ; 0040e3b1
    MOV AL,byte ptr [ESI]               ; 0040e3b2
        ;   Label: LAB_0040e3b2
    MOV byte ptr [EDI],AL               ; 0040e3b4
    CMP AL,0x0                          ; 0040e3b6
    JZ 0x0040e3ca                       ; 0040e3b8
        ;   XREF to: 0040e3ca (CONDITIONAL_JUMP)  ; LAB_0040e3ca
    MOV AL,byte ptr [ESI + 0x1]         ; 0040e3ba
    ADD ESI,0x2                         ; 0040e3bd
    MOV byte ptr [EDI + 0x1],AL         ; 0040e3c0
    ADD EDI,0x2                         ; 0040e3c3
    CMP AL,0x0                          ; 0040e3c6
    JNZ 0x0040e3b2                      ; 0040e3c8
        ;   XREF to: 0040e3b2 (CONDITIONAL_JUMP)  ; LAB_0040e3b2
    POP EDI                             ; 0040e3ca
        ;   Label: LAB_0040e3ca
    POP ESI                             ; 0040e3cb
    JMP 0x0040e259                      ; 0040e3cc
        ;   XREF to: 0040e259 (UNCONDITIONAL_JUMP)  ; LAB_0040e259
    PUSH 0x5cb110                       ; 0040e3d1 | = "bullets6_1.kfm"
        ;   Label: caseD_5
    JMP 0x0040e287                      ; 0040e3d6
        ;   XREF to: 0040e287 (UNCONDITIONAL_JUMP)  ; LAB_0040e287
    PUSH 0x5cb12e                       ; 0040e3db | = "woodbullet.kfm"
        ;   Label: caseD_2
    JMP 0x0040e287                      ; 0040e3e0
        ;   XREF to: 0040e287 (UNCONDITIONAL_JUMP)  ; LAB_0040e287
    PUSH 0x5cb13d                       ; 0040e3e5 | = "silverbullet.kfm"
        ;   Label: caseD_3
    JMP 0x0040e287                      ; 0040e3ea
        ;   XREF to: 0040e287 (UNCONDITIONAL_JUMP)  ; LAB_0040e287
    PUSH 0x5cb14e                       ; 0040e3ef | = "goldbullet.kfm"
        ;   Label: caseD_4
    JMP 0x0040e287                      ; 0040e3f4
        ;   XREF to: 0040e287 (UNCONDITIONAL_JUMP)  ; LAB_0040e287
    PUSH 0x5cb15d                       ; 0040e3f9 | = "lithiumbullet.kfm"
        ;   Label: caseD_7
    JMP 0x0040e287                      ; 0040e3fe
        ;   XREF to: 0040e287 (UNCONDITIONAL_JUMP)  ; LAB_0040e287
    PUSH 0x5cb16f                       ; 0040e403 | = "mercurybullet.kfm"
        ;   Label: caseD_8
    JMP 0x0040e287                      ; 0040e408
        ;   XREF to: 0040e287 (UNCONDITIONAL_JUMP)  ; LAB_0040e287
    PUSH 0x5cb1ac                       ; 0040e40d | = "stake.kfm"
        ;   Label: LAB_0040e40d
    JMP 0x0040e2e8                      ; 0040e412
        ;   XREF to: 0040e2e8 (UNCONDITIONAL_JUMP)  ; LAB_0040e2e8
    PUSH 0x5cb22c                       ; 0040e417 | = "batterylarge.kfm"
        ;   Label: LAB_0040e417
    LEA EAX,[EBX + 0x2b4]               ; 0040e41c
    PUSH EAX                            ; 0040e422
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0040e423
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040e428
    ADD EBX,0x2b4                       ; 0040e42b
    PUSH EBX                            ; 0040e431
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 0040e432
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040e437
    POP EBP                             ; 0040e43a
    POP EDI                             ; 0040e43b
    POP EBX                             ; 0040e43c
    RET                                 ; 0040e43d

