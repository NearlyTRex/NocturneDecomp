; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(CAmmo *this_ptr,char *weapon_class_name)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   weapon_class_name
;
; XREF[6]:
;   core_ammobox.cpp_FUN_0040f1a0 at 0040f230
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a1fff
;   core_game.cpp_FUN_004a03a0 at 004a03f7
;   core_inv.cpp_CInventory_addItem_FUN_004bf360 at 004bff5e
;   core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90 at 004c1be5
;   core_inv.cpp_FUN_004c0640 at 004c06ba
;
; Referenced Globals:
;   void* switchdataD_0040ed54 = 0040edc2
;   TerminatedCString s_CGun_00578228
;   TerminatedCString s_gatbullet_kfm_0057822d
;   TerminatedCString s_holybullet_kfm_0057823b
;   TerminatedCString s_woodbullet_kfm_0057824a
;   TerminatedCString s_silverbullet_kfm_00578259
;   TerminatedCString s_goldbullet_kfm_0057826a
;   TerminatedCString s_lithiumbullet_kfm_00578279
;   TerminatedCString s_mercurybullet_kfm_0057828b
;   TerminatedCString s_CShotgun_0057829d
;   TerminatedCString s_shell_kfm_005782a6
;   TerminatedCString s_CCrossbow_005782b0
;   TerminatedCString s_holystake_kfm_005782ba
;   TerminatedCString s_stake_kfm_005782c8
;   TerminatedCString s_CDynamite_005782d2
;   ... and 7 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   crt_string.c__strcmp_FUN_005649c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ed80
        ;   Label: core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80
    PUSH EDI                            ; 0040ed81
    PUSH EBP                            ; 0040ed82
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040ed83
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040ed87
    LEA EDI,[EBX + 0x2cc]               ; 0040ed8b
    CMP EDI,EBP                         ; 0040ed91
    JNZ 0x0040eec8                      ; 0040ed93
        ;   XREF to: 0040eec8 (CONDITIONAL_JUMP)  ; LAB_0040eec8
    PUSH 0x578228                       ; 0040ed99 | = "CGun"
        ;   Label: LAB_0040ed99
    PUSH EBP                            ; 0040ed9e
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0040ed9f
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040eda4
    TEST EAX,EAX                        ; 0040eda7
    JNZ 0x0040edd6                      ; 0040eda9
        ;   XREF to: 0040edd6 (CONDITIONAL_JUMP)  ; LAB_0040edd6
    MOV EAX,dword ptr [EBX + 0x310]     ; 0040edab
    DEC EAX                             ; 0040edb1
    CMP EAX,0x7                         ; 0040edb2
    JA 0x0040eeeb                       ; 0040edb5
        ;   XREF to: 0040eeeb (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EAX*0x4 + 0x40ed54]  ; 0040edbb | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    PUSH 0x57823b                       ; 0040edc2 | = "holybullet.kfm"
        ;   Label: caseD_1
    LEA EAX,[EBX + 0x150]               ; 0040edc7
        ;   Label: LAB_0040edc7
    PUSH EAX                            ; 0040edcd
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0040edce
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040edd3
    PUSH 0x57829d                       ; 0040edd6 | = "CShotgun"
        ;   Label: LAB_0040edd6
    PUSH EBP                            ; 0040eddb
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0040eddc
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040ede1
    TEST EAX,EAX                        ; 0040ede4
    JNZ 0x0040edfc                      ; 0040ede6
        ;   XREF to: 0040edfc (CONDITIONAL_JUMP)  ; LAB_0040edfc
    PUSH 0x5782a6                       ; 0040ede8 | = "shell.kfm"
    LEA EAX,[EBX + 0x150]               ; 0040eded
    PUSH EAX                            ; 0040edf3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0040edf4
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040edf9
    PUSH 0x5782b0                       ; 0040edfc | = "CCrossbow"
        ;   Label: LAB_0040edfc
    PUSH EBP                            ; 0040ee01
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0040ee02
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040ee07
    TEST EAX,EAX                        ; 0040ee0a
    JNZ 0x0040ee31                      ; 0040ee0c
        ;   XREF to: 0040ee31 (CONDITIONAL_JUMP)  ; LAB_0040ee31
    MOV EDX,dword ptr [EBX + 0x310]     ; 0040ee0e
    LEA EAX,[EBX + 0x150]               ; 0040ee14
    CMP EDX,0x1                         ; 0040ee1a
    JNZ 0x0040ef27                      ; 0040ee1d
        ;   XREF to: 0040ef27 (CONDITIONAL_JUMP)  ; LAB_0040ef27
    PUSH 0x5782ba                       ; 0040ee23 | = "holystake.kfm"
    PUSH EAX                            ; 0040ee28
        ;   Label: LAB_0040ee28
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0040ee29
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040ee2e
    PUSH 0x5782d2                       ; 0040ee31 | = "CDynamite"
        ;   Label: LAB_0040ee31
    PUSH EBP                            ; 0040ee36
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0040ee37
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040ee3c
    TEST EAX,EAX                        ; 0040ee3f
    JNZ 0x0040ee57                      ; 0040ee41
        ;   XREF to: 0040ee57 (CONDITIONAL_JUMP)  ; LAB_0040ee57
    PUSH 0x5782dc                       ; 0040ee43 | = "dynamitebundle.kfm"
    LEA EAX,[EBX + 0x150]               ; 0040ee48
    PUSH EAX                            ; 0040ee4e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0040ee4f
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040ee54
    PUSH 0x5782ef                       ; 0040ee57 | = "CTommyGun"
        ;   Label: LAB_0040ee57
    PUSH EBP                            ; 0040ee5c
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0040ee5d
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040ee62
    TEST EAX,EAX                        ; 0040ee65
    JNZ 0x0040ee7d                      ; 0040ee67
        ;   XREF to: 0040ee7d (CONDITIONAL_JUMP)  ; LAB_0040ee7d
    PUSH 0x5782f9                       ; 0040ee69 | = "tommybullet.kfm"
    LEA EAX,[EBX + 0x150]               ; 0040ee6e
    PUSH EAX                            ; 0040ee74
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0040ee75
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040ee7a
    PUSH 0x578309                       ; 0040ee7d | = "CFlameThrower"
        ;   Label: LAB_0040ee7d
    PUSH EBP                            ; 0040ee82
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0040ee83
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040ee88
    TEST EAX,EAX                        ; 0040ee8b
    JNZ 0x0040eea3                      ; 0040ee8d
        ;   XREF to: 0040eea3 (CONDITIONAL_JUMP)  ; LAB_0040eea3
    PUSH 0x578317                       ; 0040ee8f | = "fgunammo.kfm"
    LEA EAX,[EBX + 0x150]               ; 0040ee94
    PUSH EAX                            ; 0040ee9a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0040ee9b
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040eea0
    PUSH 0x578324                       ; 0040eea3 | = "CElephantGun"
        ;   Label: LAB_0040eea3
    PUSH EBP                            ; 0040eea8
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0040eea9
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040eeae
    TEST EAX,EAX                        ; 0040eeb1
    JZ 0x0040ef31                       ; 0040eeb3
        ;   XREF to: 0040ef31 (CONDITIONAL_JUMP)  ; LAB_0040ef31
    ADD EBX,0x150                       ; 0040eeb5
    PUSH EBX                            ; 0040eebb
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 0040eebc
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040eec1
    POP EBP                             ; 0040eec4
    POP EDI                             ; 0040eec5
    POP EBX                             ; 0040eec6
    RET                                 ; 0040eec7
    PUSH ESI                            ; 0040eec8
        ;   Label: LAB_0040eec8
    MOV ESI,EBP                         ; 0040eec9
    PUSH EDI                            ; 0040eecb
    MOV AL,byte ptr [ESI]               ; 0040eecc
        ;   Label: LAB_0040eecc
    MOV byte ptr [EDI],AL               ; 0040eece
    CMP AL,0x0                          ; 0040eed0
    JZ 0x0040eee4                       ; 0040eed2
        ;   XREF to: 0040eee4 (CONDITIONAL_JUMP)  ; LAB_0040eee4
    MOV AL,byte ptr [ESI + 0x1]         ; 0040eed4
    ADD ESI,0x2                         ; 0040eed7
    MOV byte ptr [EDI + 0x1],AL         ; 0040eeda
    ADD EDI,0x2                         ; 0040eedd
    CMP AL,0x0                          ; 0040eee0
    JNZ 0x0040eecc                      ; 0040eee2
        ;   XREF to: 0040eecc (CONDITIONAL_JUMP)  ; LAB_0040eecc
    POP EDI                             ; 0040eee4
        ;   Label: LAB_0040eee4
    POP ESI                             ; 0040eee5
    JMP 0x0040ed99                      ; 0040eee6
        ;   XREF to: 0040ed99 (UNCONDITIONAL_JUMP)  ; LAB_0040ed99
    PUSH 0x57822d                       ; 0040eeeb | = "gatbullet.kfm"
        ;   Label: caseD_5
    JMP 0x0040edc7                      ; 0040eef0
        ;   XREF to: 0040edc7 (UNCONDITIONAL_JUMP)  ; LAB_0040edc7
    PUSH 0x57824a                       ; 0040eef5 | = "woodbullet.kfm"
        ;   Label: caseD_2
    JMP 0x0040edc7                      ; 0040eefa
        ;   XREF to: 0040edc7 (UNCONDITIONAL_JUMP)  ; LAB_0040edc7
    PUSH 0x578259                       ; 0040eeff | = "silverbullet.kfm"
        ;   Label: caseD_3
    JMP 0x0040edc7                      ; 0040ef04
        ;   XREF to: 0040edc7 (UNCONDITIONAL_JUMP)  ; LAB_0040edc7
    PUSH 0x57826a                       ; 0040ef09 | = "goldbullet.kfm"
        ;   Label: caseD_4
    JMP 0x0040edc7                      ; 0040ef0e
        ;   XREF to: 0040edc7 (UNCONDITIONAL_JUMP)  ; LAB_0040edc7
    PUSH 0x578279                       ; 0040ef13 | = "lithiumbullet.kfm"
        ;   Label: caseD_7
    JMP 0x0040edc7                      ; 0040ef18
        ;   XREF to: 0040edc7 (UNCONDITIONAL_JUMP)  ; LAB_0040edc7
    PUSH 0x57828b                       ; 0040ef1d | = "mercurybullet.kfm"
        ;   Label: caseD_8
    JMP 0x0040edc7                      ; 0040ef22
        ;   XREF to: 0040edc7 (UNCONDITIONAL_JUMP)  ; LAB_0040edc7
    PUSH 0x5782c8                       ; 0040ef27 | = "stake.kfm"
        ;   Label: LAB_0040ef27
    JMP 0x0040ee28                      ; 0040ef2c
        ;   XREF to: 0040ee28 (UNCONDITIONAL_JUMP)  ; LAB_0040ee28
    PUSH 0x578331                       ; 0040ef31 | = "eleshell.kfm"
        ;   Label: LAB_0040ef31
    LEA EAX,[EBX + 0x150]               ; 0040ef36
    PUSH EAX                            ; 0040ef3c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0040ef3d
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040ef42
    ADD EBX,0x150                       ; 0040ef45
    PUSH EBX                            ; 0040ef4b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 0040ef4c
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040ef51
    POP EBP                             ; 0040ef54
    POP EDI                             ; 0040ef55
    POP EBX                             ; 0040ef56
    RET                                 ; 0040ef57

