; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammo_cpp_FUN_0040ddd0(CAmmo *this_ptr,char *weapon_class_name)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   weapon_class_name
;
; XREF[6]:
;   core_ammobox.cpp_FUN_0040e210 at 0040e2a0
;   core_game.cpp_FUN_004d25fe at 004d2657
;   core_game.cpp_FUN_004d27b0 at 004d4159
;   core_inv.cpp_FUN_004f7690 at 004f8443
;   core_inv.cpp_FUN_004f8b70 at 004f8bea
;   core_inv.cpp_FUN_004fa4e0 at 004fa535
;
; Referenced Globals:
;   void* switchdataD_0040dda4 = 0040de12
;   undefined4 DAT_005d307c
;   TerminatedCString s_gatbullet_kfm_005d3081
;   TerminatedCString s_holybullet_kfm_005d308f
;   TerminatedCString s_woodbullet_kfm_005d309e
;   TerminatedCString s_silverbullet_kfm_005d30ad
;   TerminatedCString s_goldbullet_kfm_005d30be
;   TerminatedCString s_lithiumbullet_kfm_005d30cd
;   TerminatedCString s_mercurybullet_kfm_005d30df
;   TerminatedCString s_CShotgun_005d30f1
;   TerminatedCString s_shell_kfm_005d30fa
;   TerminatedCString s_CCrossbow_005d3104
;   TerminatedCString s_holystake_kfm_005d310e
;   TerminatedCString s_stake_kfm_005d311c
;   TerminatedCString s_CDynamite_005d3126
;   ... and 9 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   crt_string.c__strcmp_FUN_005c0f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ddd0
        ;   Label: core_ammo.cpp_FUN_0040ddd0
    PUSH EDI                            ; 0040ddd1
    PUSH EBP                            ; 0040ddd2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040ddd3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040ddd7
    LEA EDI,[EBX + 0x2d4]               ; 0040dddb
    CMP EDI,EBP                         ; 0040dde1
    JNZ 0x0040df3e                      ; 0040dde3
        ;   XREF to: 0040df3e (CONDITIONAL_JUMP)  ; LAB_0040df3e
    PUSH 0x5d307c                       ; 0040dde9 | DAT_005d307c
        ;   Label: LAB_0040dde9
    PUSH EBP                            ; 0040ddee
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 0040ddef
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040ddf4
    TEST EAX,EAX                        ; 0040ddf7
    JNZ 0x0040de26                      ; 0040ddf9
        ;   XREF to: 0040de26 (CONDITIONAL_JUMP)  ; LAB_0040de26
    MOV EAX,dword ptr [EBX + 0x318]     ; 0040ddfb
    DEC EAX                             ; 0040de01
    CMP EAX,0x7                         ; 0040de02
    JA 0x0040df61                       ; 0040de05
        ;   XREF to: 0040df61 (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EAX*0x4 + 0x40dda4]  ; 0040de0b | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    PUSH 0x5d308f                       ; 0040de12 | = "holybullet.kfm"
        ;   Label: caseD_1
    LEA EAX,[EBX + 0x158]               ; 0040de17
        ;   Label: LAB_0040de17
    PUSH EAX                            ; 0040de1d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 0040de1e
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040de23
    PUSH 0x5d30f1                       ; 0040de26 | = "CShotgun"
        ;   Label: LAB_0040de26
    PUSH EBP                            ; 0040de2b
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 0040de2c
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040de31
    TEST EAX,EAX                        ; 0040de34
    JNZ 0x0040de4c                      ; 0040de36
        ;   XREF to: 0040de4c (CONDITIONAL_JUMP)  ; LAB_0040de4c
    PUSH 0x5d30fa                       ; 0040de38 | = "shell.kfm"
    LEA EAX,[EBX + 0x158]               ; 0040de3d
    PUSH EAX                            ; 0040de43
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 0040de44
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040de49
    PUSH 0x5d3104                       ; 0040de4c | = "CCrossbow"
        ;   Label: LAB_0040de4c
    PUSH EBP                            ; 0040de51
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 0040de52
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040de57
    TEST EAX,EAX                        ; 0040de5a
    JNZ 0x0040de81                      ; 0040de5c
        ;   XREF to: 0040de81 (CONDITIONAL_JUMP)  ; LAB_0040de81
    MOV EDX,dword ptr [EBX + 0x318]     ; 0040de5e
    LEA EAX,[EBX + 0x158]               ; 0040de64
    CMP EDX,0x1                         ; 0040de6a
    JNZ 0x0040df9d                      ; 0040de6d
        ;   XREF to: 0040df9d (CONDITIONAL_JUMP)  ; LAB_0040df9d
    PUSH 0x5d310e                       ; 0040de73 | = "holystake.kfm"
    PUSH EAX                            ; 0040de78
        ;   Label: LAB_0040de78
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 0040de79
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040de7e
    PUSH 0x5d3126                       ; 0040de81 | = "CDynamite"
        ;   Label: LAB_0040de81
    PUSH EBP                            ; 0040de86
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 0040de87
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040de8c
    TEST EAX,EAX                        ; 0040de8f
    JNZ 0x0040dea7                      ; 0040de91
        ;   XREF to: 0040dea7 (CONDITIONAL_JUMP)  ; LAB_0040dea7
    PUSH 0x5d3130                       ; 0040de93 | = "dynamitebundle.kfm"
    LEA EAX,[EBX + 0x158]               ; 0040de98
    PUSH EAX                            ; 0040de9e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 0040de9f
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040dea4
    PUSH 0x5d3143                       ; 0040dea7 | = "CTommyGun"
        ;   Label: LAB_0040dea7
    PUSH EBP                            ; 0040deac
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 0040dead
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040deb2
    TEST EAX,EAX                        ; 0040deb5
    JNZ 0x0040decd                      ; 0040deb7
        ;   XREF to: 0040decd (CONDITIONAL_JUMP)  ; LAB_0040decd
    PUSH 0x5d314d                       ; 0040deb9 | = "tommybullet.kfm"
    LEA EAX,[EBX + 0x158]               ; 0040debe
    PUSH EAX                            ; 0040dec4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 0040dec5
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040deca
    PUSH 0x5d315d                       ; 0040decd | = "CFlameThrower"
        ;   Label: LAB_0040decd
    PUSH EBP                            ; 0040ded2
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 0040ded3
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040ded8
    TEST EAX,EAX                        ; 0040dedb
    JNZ 0x0040def3                      ; 0040dedd
        ;   XREF to: 0040def3 (CONDITIONAL_JUMP)  ; LAB_0040def3
    PUSH 0x5d316b                       ; 0040dedf | = "fgunammo.kfm"
    LEA EAX,[EBX + 0x158]               ; 0040dee4
    PUSH EAX                            ; 0040deea
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 0040deeb
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040def0
    PUSH 0x5d3178                       ; 0040def3 | = "CElephantGun"
        ;   Label: LAB_0040def3
    PUSH EBP                            ; 0040def8
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 0040def9
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040defe
    TEST EAX,EAX                        ; 0040df01
    JNZ 0x0040df19                      ; 0040df03
        ;   XREF to: 0040df19 (CONDITIONAL_JUMP)  ; LAB_0040df19
    PUSH 0x5d3185                       ; 0040df05 | = "eleshell.kfm"
    LEA EAX,[EBX + 0x158]               ; 0040df0a
    PUSH EAX                            ; 0040df10
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 0040df11
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040df16
    PUSH 0x5d3192                       ; 0040df19 | = "CLightgun"
        ;   Label: LAB_0040df19
    PUSH EBP                            ; 0040df1e
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 0040df1f
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040df24
    TEST EAX,EAX                        ; 0040df27
    JZ 0x0040dfa7                       ; 0040df29
        ;   XREF to: 0040dfa7 (CONDITIONAL_JUMP)  ; LAB_0040dfa7
    ADD EBX,0x158                       ; 0040df2b
    PUSH EBX                            ; 0040df31
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 0040df32
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040df37
    POP EBP                             ; 0040df3a
    POP EDI                             ; 0040df3b
    POP EBX                             ; 0040df3c
    RET                                 ; 0040df3d
    PUSH ESI                            ; 0040df3e
        ;   Label: LAB_0040df3e
    MOV ESI,EBP                         ; 0040df3f
    PUSH EDI                            ; 0040df41
    MOV AL,byte ptr [ESI]               ; 0040df42
        ;   Label: LAB_0040df42
    MOV byte ptr [EDI],AL               ; 0040df44
    CMP AL,0x0                          ; 0040df46
    JZ 0x0040df5a                       ; 0040df48
        ;   XREF to: 0040df5a (CONDITIONAL_JUMP)  ; LAB_0040df5a
    MOV AL,byte ptr [ESI + 0x1]         ; 0040df4a
    ADD ESI,0x2                         ; 0040df4d
    MOV byte ptr [EDI + 0x1],AL         ; 0040df50
    ADD EDI,0x2                         ; 0040df53
    CMP AL,0x0                          ; 0040df56
    JNZ 0x0040df42                      ; 0040df58
        ;   XREF to: 0040df42 (CONDITIONAL_JUMP)  ; LAB_0040df42
    POP EDI                             ; 0040df5a
        ;   Label: LAB_0040df5a
    POP ESI                             ; 0040df5b
    JMP 0x0040dde9                      ; 0040df5c
        ;   XREF to: 0040dde9 (UNCONDITIONAL_JUMP)  ; LAB_0040dde9
    PUSH 0x5d3081                       ; 0040df61 | = "gatbullet.kfm"
        ;   Label: caseD_5
    JMP 0x0040de17                      ; 0040df66
        ;   XREF to: 0040de17 (UNCONDITIONAL_JUMP)  ; LAB_0040de17
    PUSH 0x5d309e                       ; 0040df6b | = "woodbullet.kfm"
        ;   Label: caseD_2
    JMP 0x0040de17                      ; 0040df70
        ;   XREF to: 0040de17 (UNCONDITIONAL_JUMP)  ; LAB_0040de17
    PUSH 0x5d30ad                       ; 0040df75 | = "silverbullet.kfm"
        ;   Label: caseD_3
    JMP 0x0040de17                      ; 0040df7a
        ;   XREF to: 0040de17 (UNCONDITIONAL_JUMP)  ; LAB_0040de17
    PUSH 0x5d30be                       ; 0040df7f | = "goldbullet.kfm"
        ;   Label: caseD_4
    JMP 0x0040de17                      ; 0040df84
        ;   XREF to: 0040de17 (UNCONDITIONAL_JUMP)  ; LAB_0040de17
    PUSH 0x5d30cd                       ; 0040df89 | = "lithiumbullet.kfm"
        ;   Label: caseD_7
    JMP 0x0040de17                      ; 0040df8e
        ;   XREF to: 0040de17 (UNCONDITIONAL_JUMP)  ; LAB_0040de17
    PUSH 0x5d30df                       ; 0040df93 | = "mercurybullet.kfm"
        ;   Label: caseD_8
    JMP 0x0040de17                      ; 0040df98
        ;   XREF to: 0040de17 (UNCONDITIONAL_JUMP)  ; LAB_0040de17
    PUSH 0x5d311c                       ; 0040df9d | = "stake.kfm"
        ;   Label: LAB_0040df9d
    JMP 0x0040de78                      ; 0040dfa2
        ;   XREF to: 0040de78 (UNCONDITIONAL_JUMP)  ; LAB_0040de78
    PUSH 0x5d319c                       ; 0040dfa7 | = "batterylarge.kfm"
        ;   Label: LAB_0040dfa7
    LEA EAX,[EBX + 0x158]               ; 0040dfac
    PUSH EAX                            ; 0040dfb2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 0040dfb3
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040dfb8
    ADD EBX,0x158                       ; 0040dfbb
    PUSH EBX                            ; 0040dfc1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 0040dfc2
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040dfc7
    POP EBP                             ; 0040dfca
    POP EDI                             ; 0040dfcb
    POP EBX                             ; 0040dfcc
    RET                                 ; 0040dfcd

