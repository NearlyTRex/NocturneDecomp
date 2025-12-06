; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_ammo.cpp_CAmmo_FUN_00410fd0()
;
;
; XREF[5]:
;   core_ammobox.cpp_AllocateMemoryMaybe_FUN_00411700 at 004117cc
;   core_game.cpp_FUN_004dd930 at 004dd991
;   core_inv.cpp_CInventory_addItem_FUN_004fd600 at 004fe21a
;   core_inv.cpp_CInventory_createAmmoFromWeapon_FUN_004fe900 at 004fe984
;   core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10 at 004ffe65
;
; Referenced Globals:
;   void* switchdataD_00410fa4 = 00411012
;   TerminatedCString s_CGun_00614971
;   TerminatedCString s_gatbullet_kfm_00614976
;   TerminatedCString s_woodbullet_kfm_00614993
;   TerminatedCString s_silverbullet_kfm_006149a2
;   TerminatedCString s_goldbullet_kfm_006149b3
;   TerminatedCString s_lithiumbullet_kfm_006149c2
;   TerminatedCString s_mercurybullet_kfm_006149d4
;   TerminatedCString s_CShotgun_006149e6
;   TerminatedCString s_shell_kfm_006149ef
;   TerminatedCString s_CCrossbow_006149f9
;   TerminatedCString s_holystake_kfm_00614a03
;   TerminatedCString s_stake_kfm_00614a11
;   TerminatedCString s_CDynamite_00614a1b
;   TerminatedCString s_dynamitebundle_kfm_00614a25
;   ... and 6 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   crt_string.c_strcmp_FUN_005fef20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410fd0
        ;   Label: core_ammo.cpp_CAmmo_FUN_00410fd0
    PUSH EDI                            ; 00410fd1
    PUSH EBP                            ; 00410fd2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00410fd3
    MOV EBP,dword ptr [ESP + 0x14]      ; 00410fd7
    LEA EDI,[EBX + 0x2d4]               ; 00410fdb
    CMP EDI,EBP                         ; 00410fe1
    JNZ 0x00411118                      ; 00410fe3 | LAB_00411118
        ;   XREF to: 00411118 (CONDITIONAL_JUMP)
    PUSH 0x614971                       ; 00410fe9 | = "CGun" | s_CGun_00614971 = CGun
        ;   Label: LAB_00410fe9
    PUSH EBP                            ; 00410fee
    CALL crt_string.c_strcmp_FUN_005fef20 ; 00410fef | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00410ff4
    TEST EAX,EAX                        ; 00410ff7
    JNZ 0x00411026                      ; 00410ff9 | LAB_00411026
        ;   XREF to: 00411026 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x318]     ; 00410ffb
    DEC EAX                             ; 00411001
    CMP EAX,0x7                         ; 00411002
    JA 0x0041113b                       ; 00411005 | caseD_5
        ;   XREF to: 0041113b (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x410fa4]  ; 0041100b | void * switchdataD_00410fa4
        ;   Label: switchD
    PUSH 0x614984                       ; 00411012 | = "holybullet.kfm" | s_holybullet.kfm_00614984 = holybullet.kfm
        ;   Label: caseD_1
    LEA EAX,[EBX + 0x158]               ; 00411017
        ;   Label: LAB_00411017
    PUSH EAX                            ; 0041101d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 0041101e | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00411023
    PUSH 0x6149e6                       ; 00411026 | = "CShotgun" | s_CShotgun_006149e6 = CShotgun
        ;   Label: LAB_00411026
    PUSH EBP                            ; 0041102b
    CALL crt_string.c_strcmp_FUN_005fef20 ; 0041102c | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00411031
    TEST EAX,EAX                        ; 00411034
    JNZ 0x0041104c                      ; 00411036 | LAB_0041104c
        ;   XREF to: 0041104c (CONDITIONAL_JUMP)
    PUSH 0x6149ef                       ; 00411038 | = "shell.kfm" | s_shell_kfm_006149ef = shell.kfm
    LEA EAX,[EBX + 0x158]               ; 0041103d
    PUSH EAX                            ; 00411043
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00411044 | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00411049
    PUSH 0x6149f9                       ; 0041104c | = "CCrossbow" | s_CCrossbow_006149f9 = CCrossbow
        ;   Label: LAB_0041104c
    PUSH EBP                            ; 00411051
    CALL crt_string.c_strcmp_FUN_005fef20 ; 00411052 | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00411057
    TEST EAX,EAX                        ; 0041105a
    JNZ 0x00411081                      ; 0041105c | LAB_00411081
        ;   XREF to: 00411081 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX + 0x318]     ; 0041105e
    LEA EAX,[EBX + 0x158]               ; 00411064
    CMP EDX,0x1                         ; 0041106a
    JNZ 0x00411177                      ; 0041106d | LAB_00411177
        ;   XREF to: 00411177 (CONDITIONAL_JUMP)
    PUSH 0x614a03                       ; 00411073 | = "holystake.kfm" | s_holystake_kfm_00614a03 = holystake.kfm
    PUSH EAX                            ; 00411078
        ;   Label: LAB_00411078
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00411079 | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041107e
    PUSH 0x614a1b                       ; 00411081 | = "CDynamite" | s_CDynamite_00614a1b = CDynamite
        ;   Label: LAB_00411081
    PUSH EBP                            ; 00411086
    CALL crt_string.c_strcmp_FUN_005fef20 ; 00411087 | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041108c
    TEST EAX,EAX                        ; 0041108f
    JNZ 0x004110a7                      ; 00411091 | LAB_004110a7
        ;   XREF to: 004110a7 (CONDITIONAL_JUMP)
    PUSH 0x614a25                       ; 00411093 | = "dynamitebundle.kfm" | s_dynamitebundle_kfm_00614a25 = dynamitebundle.kfm
    LEA EAX,[EBX + 0x158]               ; 00411098
    PUSH EAX                            ; 0041109e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 0041109f | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004110a4
    PUSH 0x614a38                       ; 004110a7 | = "CTommyGun" | s_CTommyGun_00614a38 = CTommyGun
        ;   Label: LAB_004110a7
    PUSH EBP                            ; 004110ac
    CALL crt_string.c_strcmp_FUN_005fef20 ; 004110ad | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004110b2
    TEST EAX,EAX                        ; 004110b5
    JNZ 0x004110cd                      ; 004110b7 | LAB_004110cd
        ;   XREF to: 004110cd (CONDITIONAL_JUMP)
    PUSH 0x614a42                       ; 004110b9 | = "tommybullet.kfm" | s_tommybullet_kfm_00614a42 = tommybullet.kfm
    LEA EAX,[EBX + 0x158]               ; 004110be
    PUSH EAX                            ; 004110c4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004110c5 | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004110ca
    PUSH 0x614a52                       ; 004110cd | = "CFlameThrower" | s_CFlameThrower_00614a52 = CFlameThrower
        ;   Label: LAB_004110cd
    PUSH EBP                            ; 004110d2
    CALL crt_string.c_strcmp_FUN_005fef20 ; 004110d3 | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004110d8
    TEST EAX,EAX                        ; 004110db
    JNZ 0x004110f3                      ; 004110dd | LAB_004110f3
        ;   XREF to: 004110f3 (CONDITIONAL_JUMP)
    PUSH 0x614a60                       ; 004110df | = "fgunammo.kfm" | s_fgunammo_kfm_00614a60 = fgunammo.kfm
    LEA EAX,[EBX + 0x158]               ; 004110e4
    PUSH EAX                            ; 004110ea
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004110eb | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004110f0
    PUSH 0x614a6d                       ; 004110f3 | = "CElephantGun" | s_CElephantGun_00614a6d = CElephantGun
        ;   Label: LAB_004110f3
    PUSH EBP                            ; 004110f8
    CALL crt_string.c_strcmp_FUN_005fef20 ; 004110f9 | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004110fe
    TEST EAX,EAX                        ; 00411101
    JZ 0x00411181                       ; 00411103 | LAB_00411181
        ;   XREF to: 00411181 (CONDITIONAL_JUMP)
    ADD EBX,0x158                       ; 00411105
    PUSH EBX                            ; 0041110b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 0041110c | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00411111
    POP EBP                             ; 00411114
    POP EDI                             ; 00411115
    POP EBX                             ; 00411116
    RET                                 ; 00411117
    PUSH ESI                            ; 00411118
        ;   Label: LAB_00411118
    MOV ESI,EBP                         ; 00411119
    PUSH EDI                            ; 0041111b
    MOV AL,byte ptr [ESI]               ; 0041111c
        ;   Label: LAB_0041111c
    MOV byte ptr [EDI],AL               ; 0041111e
    CMP AL,0x0                          ; 00411120
    JZ 0x00411134                       ; 00411122 | LAB_00411134
        ;   XREF to: 00411134 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00411124
    ADD ESI,0x2                         ; 00411127
    MOV byte ptr [EDI + 0x1],AL         ; 0041112a
    ADD EDI,0x2                         ; 0041112d
    CMP AL,0x0                          ; 00411130
    JNZ 0x0041111c                      ; 00411132 | LAB_0041111c
        ;   XREF to: 0041111c (CONDITIONAL_JUMP)
    POP EDI                             ; 00411134
        ;   Label: LAB_00411134
    POP ESI                             ; 00411135
    JMP 0x00410fe9                      ; 00411136 | LAB_00410fe9
        ;   XREF to: 00410fe9 (UNCONDITIONAL_JUMP)
    PUSH 0x614976                       ; 0041113b | = "gatbullet.kfm" | s_gatbullet_kfm_00614976 = gatbullet.kfm
        ;   Label: caseD_6
    JMP 0x00411017                      ; 00411140 | LAB_00411017
        ;   XREF to: 00411017 (UNCONDITIONAL_JUMP)
    PUSH 0x614993                       ; 00411145 | = "woodbullet.kfm" | s_woodbullet_kfm_00614993 = woodbullet.kfm
        ;   Label: caseD_2
    JMP 0x00411017                      ; 0041114a | LAB_00411017
        ;   XREF to: 00411017 (UNCONDITIONAL_JUMP)
    PUSH 0x6149a2                       ; 0041114f | = "silverbullet.kfm" | s_silverbullet_kfm_006149a2 = silverbullet.kfm
        ;   Label: caseD_3
    JMP 0x00411017                      ; 00411154 | LAB_00411017
        ;   XREF to: 00411017 (UNCONDITIONAL_JUMP)
    PUSH 0x6149b3                       ; 00411159 | = "goldbullet.kfm" | s_goldbullet_kfm_006149b3 = goldbullet.kfm
        ;   Label: caseD_4
    JMP 0x00411017                      ; 0041115e | LAB_00411017
        ;   XREF to: 00411017 (UNCONDITIONAL_JUMP)
    PUSH 0x6149c2                       ; 00411163 | = "lithiumbullet.kfm" | s_lithiumbullet_kfm_006149c2 = lithiumbullet.kfm
        ;   Label: caseD_7
    JMP 0x00411017                      ; 00411168 | LAB_00411017
        ;   XREF to: 00411017 (UNCONDITIONAL_JUMP)
    PUSH 0x6149d4                       ; 0041116d | = "mercurybullet.kfm" | s_mercurybullet_kfm_006149d4 = mercurybullet.kfm
        ;   Label: caseD_8
    JMP 0x00411017                      ; 00411172 | LAB_00411017
        ;   XREF to: 00411017 (UNCONDITIONAL_JUMP)
    PUSH 0x614a11                       ; 00411177 | = "stake.kfm" | s_stake_kfm_00614a11 = stake.kfm
        ;   Label: LAB_00411177
    JMP 0x00411078                      ; 0041117c | LAB_00411078
        ;   XREF to: 00411078 (UNCONDITIONAL_JUMP)
    PUSH 0x614a7a                       ; 00411181 | = "eleshell.kfm" | s_eleshell_kfm_00614a7a = eleshell.kfm
        ;   Label: LAB_00411181
    LEA EAX,[EBX + 0x158]               ; 00411186
    PUSH EAX                            ; 0041118c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 0041118d | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00411192
    ADD EBX,0x158                       ; 00411195
    PUSH EBX                            ; 0041119b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 0041119c | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004111a1
    POP EBP                             ; 004111a4
    POP EDI                             ; 004111a5
    POP EBX                             ; 004111a6
    RET                                 ; 004111a7

