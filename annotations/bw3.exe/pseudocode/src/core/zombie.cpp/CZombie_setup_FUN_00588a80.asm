; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_zombie_cpp_CZombie_setup_FUN_00588a80(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined1* switchdataD_00588a68 = 00588d92
;   TerminatedCString s_Bip01_Head_005d83f2
;   TerminatedCString s_Bip01_L_ForeArm_005d83fd
;   TerminatedCString s_Bip01_R_ForeArm_005d840d
;   TerminatedCString s_Bip01_L_UpperArm_005d841d
;   TerminatedCString s_Bip01_R_UpperArm_005d842e
;   TerminatedCString s_Bip01_L_Foot_005d843f
;   TerminatedCString s_Bip01_R_Foot_005d844c
;   TerminatedCString s_Bip01_L_Hand_005d8459
;   TerminatedCString s_Bip01_R_Hand_005d8466
;   TerminatedCString s_Bip01_Spine_005d8473
;   TerminatedCString s_Bip01_Spine2_005d847f
;   TerminatedCString s_larm01_005d848c
;   TerminatedCString s_l4arm01_005d8493
;   TerminatedCString s_rarm01_005d849b
;   ... and 9 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_enemy.cpp_CEnemy_setup_FUN_00489110
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00548090
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00588a80
        ;   Label: core_zombie.cpp_CZombie_setup_FUN_00588a80
    PUSH ESI                            ; 00588a81
    PUSH EDI                            ; 00588a82
    PUSH EBP                            ; 00588a83
    MOV EBP,ESP                         ; 00588a84
    SUB ESP,0x4                         ; 00588a86
    MOV EBX,dword ptr [EBP + 0x14]      ; 00588a89
    LEA EDI,[EBX + 0x158]               ; 00588a8c
    PUSH EDI                            ; 00588a92
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 ; 00588a93
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00588a98
    PUSH EDI                            ; 00588a9b
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 00588a9c
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00588aa1
    PUSH 0x1                            ; 00588aa4
    PUSH 0x5d83f2                       ; 00588aa6 | = "Bip01 Head"
    PUSH EAX                            ; 00588aab
    MOV ESI,EAX                         ; 00588aac
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00588aae
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00588ab3
    PUSH 0x1                            ; 00588ab6
    PUSH 0x5d83fd                       ; 00588ab8 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 00588abd
    MOV dword ptr [EBX + 0xd0e8],EAX    ; 00588abe
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00588ac4
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00588ac9
    PUSH 0x1                            ; 00588acc
    PUSH 0x5d840d                       ; 00588ace | = "Bip01 R ForeArm"
    PUSH ESI                            ; 00588ad3
    MOV dword ptr [EBX + 0xd0f4],EAX    ; 00588ad4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00588ada
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00588adf
    PUSH 0x1                            ; 00588ae2
    PUSH 0x5d841d                       ; 00588ae4 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 00588ae9
    MOV dword ptr [EBX + 0xd0f8],EAX    ; 00588aea
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00588af0
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00588af5
    PUSH 0x1                            ; 00588af8
    PUSH 0x5d842e                       ; 00588afa | = "Bip01 R UpperArm"
    PUSH ESI                            ; 00588aff
    MOV dword ptr [EBX + 0xd0fc],EAX    ; 00588b00
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00588b06
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00588b0b
    PUSH 0x1                            ; 00588b0e
    PUSH 0x5d843f                       ; 00588b10 | = "Bip01 L Foot"
    PUSH ESI                            ; 00588b15
    MOV dword ptr [EBX + 0xd100],EAX    ; 00588b16
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00588b1c
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00588b21
    PUSH 0x1                            ; 00588b24
    PUSH 0x5d844c                       ; 00588b26 | = "Bip01 R Foot"
    PUSH ESI                            ; 00588b2b
    MOV dword ptr [EBX + 0xd104],EAX    ; 00588b2c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00588b32
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00588b37
    PUSH 0x1                            ; 00588b3a
    PUSH 0x5d8459                       ; 00588b3c | = "Bip01 L Hand"
    PUSH ESI                            ; 00588b41
    MOV dword ptr [EBX + 0xd108],EAX    ; 00588b42
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00588b48
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00588b4d
    MOV dword ptr [EBX + 0xd0ec],EAX    ; 00588b50
    PUSH 0x1                            ; 00588b56
    PUSH 0x5d8466                       ; 00588b58 | = "Bip01 R Hand"
    PUSH ESI                            ; 00588b5d
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00588b5e
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00588b63
    PUSH 0x1                            ; 00588b66
    PUSH 0x5d8473                       ; 00588b68 | = "Bip01 Spine"
    PUSH ESI                            ; 00588b6d
    MOV dword ptr [EBX + 0xd0f0],EAX    ; 00588b6e
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00588b74
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00588b79
    PUSH 0x1                            ; 00588b7c
    PUSH 0x5d847f                       ; 00588b7e | = "Bip01 Spine2"
    PUSH ESI                            ; 00588b83
    MOV dword ptr [EBX + 0xd10c],EAX    ; 00588b84
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00588b8a
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00588b8f
    PUSH EDI                            ; 00588b92
    MOV dword ptr [EBX + 0xd110],EAX    ; 00588b93
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 00588b99
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00588b9e
    PUSH 0x1                            ; 00588ba1
    PUSH 0x5d848c                       ; 00588ba3 | = "larm01"
    PUSH EAX                            ; 00588ba8
    MOV ESI,EAX                         ; 00588ba9
    MOV EDI,EAX                         ; 00588bab
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 00588bad
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00588bb2
    PUSH 0x1                            ; 00588bb5
    PUSH 0x5d8493                       ; 00588bb7 | = "l4arm01"
    PUSH ESI                            ; 00588bbc
    MOV dword ptr [EBX + 0xd114],EAX    ; 00588bbd
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 00588bc3
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00588bc8
    PUSH 0x1                            ; 00588bcb
    PUSH 0x5d849b                       ; 00588bcd | = "rarm01"
    PUSH ESI                            ; 00588bd2
    MOV dword ptr [EBX + 0xd118],EAX    ; 00588bd3
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 00588bd9
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00588bde
    PUSH 0x0                            ; 00588be1
    PUSH 0x5d84a2                       ; 00588be3 | = "r4arm01"
    PUSH ESI                            ; 00588be8
    MOV dword ptr [EBX + 0xd11c],EAX    ; 00588be9
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 00588bef
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00588bf4
    MOV dword ptr [EBX + 0xd120],EAX    ; 00588bf7
    TEST EAX,EAX                        ; 00588bfd
    JGE 0x00588c0b                      ; 00588bff
        ;   XREF to: 00588c0b (CONDITIONAL_JUMP)  ; LAB_00588c0b
    MOV dword ptr [EBX + 0xd120],0x3b   ; 00588c01
    PUSH 0x0                            ; 00588c0b
        ;   Label: LAB_00588c0b
    PUSH 0x5d84aa                       ; 00588c0d | = "waist01"
    PUSH EDI                            ; 00588c12
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 00588c13
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00588c18
    PUSH 0x1                            ; 00588c1b
    PUSH 0x5d84b2                       ; 00588c1d | = "torso01"
    PUSH EDI                            ; 00588c22
    MOV dword ptr [EBX + 0xd124],EAX    ; 00588c23
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 00588c29
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00588c2e
    PUSH 0x1                            ; 00588c31
    PUSH 0x5d84ba                       ; 00588c33 | = "head01"
    PUSH EDI                            ; 00588c38
    MOV dword ptr [EBX + 0xd128],EAX    ; 00588c39
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 00588c3f
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00588c44
    PUSH 0x5d84c1                       ; 00588c47 | = "newzomb1.dfm"
    MOV dword ptr [EBX + 0xd12c],EAX    ; 00588c4c
    LEA EAX,[EBX + 0x24a8]              ; 00588c52
    PUSH EAX                            ; 00588c58
    MOV dword ptr [EBX + 0x2384],0x0    ; 00588c59
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00588c63
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00588c68
    TEST EAX,EAX                        ; 00588c6b
    JNZ 0x00588c97                      ; 00588c6d
        ;   XREF to: 00588c97 (CONDITIONAL_JUMP)  ; LAB_00588c97
    LEA EAX,[EBX + 0xd114]              ; 00588c6f
    LEA ESI,[EBX + 0xd11c]              ; 00588c75
    MOV EDX,dword ptr [ESI]             ; 00588c7b
    MOV EDI,dword ptr [EAX]             ; 00588c7d
    MOV dword ptr [EAX],EDX             ; 00588c7f
    LEA EAX,[EBX + 0xd118]              ; 00588c81
    MOV dword ptr [ESI],EDI             ; 00588c87
    LEA ESI,[EBX + 0xd120]              ; 00588c89
    MOV EDI,dword ptr [ESI]             ; 00588c8f
    MOV EDX,dword ptr [EAX]             ; 00588c91
    MOV dword ptr [EAX],EDI             ; 00588c93
    MOV dword ptr [ESI],EDX             ; 00588c95
    MOV EAX,dword ptr [EBX + 0xd0ec]    ; 00588c97
        ;   Label: LAB_00588c97
    MOV dword ptr [EBX + 0x25a8],EAX    ; 00588c9d
    MOV EAX,dword ptr [EBX + 0xd118]    ; 00588ca3
    MOV dword ptr [EBX + 0x25ac],EAX    ; 00588ca9
    MOV EAX,dword ptr [EBX + 0xd0f0]    ; 00588caf
    MOV dword ptr [EBX + 0x2620],EAX    ; 00588cb5
    MOV EAX,dword ptr [EBX + 0xd120]    ; 00588cbb
    MOV ECX,dword ptr [EBX + 0xd0d8]    ; 00588cc1
    MOV dword ptr [EBX + 0x2624],EAX    ; 00588cc7
    TEST ECX,ECX                        ; 00588ccd
    SETNZ AL                            ; 00588ccf
    AND EAX,0xff                        ; 00588cd2
    PUSH EBX                            ; 00588cd7
    MOV dword ptr [EBX + 0xfc],EAX      ; 00588cd8
    CALL core_enemy.cpp_CEnemy_setup_FUN_00489110 ; 00588cde
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00489110(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00588ce3
    PUSH 0x3f800000                     ; 00588ce6
    PUSH 0x0                            ; 00588ceb
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00588ced
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + -0x4],EAX      ; 00588cf2
    ADD ESP,0x8                         ; 00588cf5
    MOV ESI,dword ptr [EBX + 0xd124]    ; 00588cf8
    MOV EAX,dword ptr [EBP + -0x4]      ; 00588cfe
    MOV dword ptr [EBX + 0xd144],EAX    ; 00588d01
    TEST ESI,ESI                        ; 00588d07
    JL 0x00588d2c                       ; 00588d09
        ;   XREF to: 00588d2c (CONDITIONAL_JUMP)  ; LAB_00588d2c
    FLD float ptr [EBX + 0x3280]        ; 00588d0b
    FLDZ                                ; 00588d11
    FCOMPP                              ; 00588d13
    FNSTSW AX                           ; 00588d15
    SAHF                                ; 00588d17
    JBE 0x00588d2c                      ; 00588d18
        ;   XREF to: 00588d2c (CONDITIONAL_JUMP)  ; LAB_00588d2c
    FLD float ptr [EBX + 0x2490]        ; 00588d1a
    FADD double ptr [0x005d84f7]        ; 00588d20 | DAT_005d84f7
    FSTP float ptr [EBX + 0x3280]       ; 00588d26
    PUSH 0x5d84ce                       ; 00588d2c | = "newzchik.dfm"
        ;   Label: LAB_00588d2c
    LEA ESI,[EBX + 0x24a8]              ; 00588d31
    MOV dword ptr [EBX + 0xd134],0x0    ; 00588d37
    PUSH ESI                            ; 00588d41
    MOV dword ptr [EBX + 0xd0e0],0x0    ; 00588d42
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00588d4c
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00588d51
    TEST EAX,EAX                        ; 00588d54
    JNZ 0x00588db7                      ; 00588d56
        ;   XREF to: 00588db7 (CONDITIONAL_JUMP)  ; LAB_00588db7
    MOV dword ptr [EBX + 0xd0e0],0x1    ; 00588d58
        ;   Label: LAB_00588d58
    MOV dword ptr [EBX + 0xd13c],0x0    ; 00588d62
        ;   Label: LAB_00588d62
    MOV EDI,dword ptr [EBX + 0x3268]    ; 00588d6c
    MOV dword ptr [EBX + 0xd138],0x0    ; 00588d72
    TEST EDI,EDI                        ; 00588d7c
    JNZ 0x00588db0                      ; 00588d7e
        ;   XREF to: 00588db0 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBX + 0xd140]    ; 00588d80
    CMP EAX,0x5                         ; 00588d86
    JA 0x00588db0                       ; 00588d89
        ;   XREF to: 00588db0 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x588a68]  ; 00588d8b | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV dword ptr [EBX + 0xce5c],0x41200000 ; 00588d92
        ;   Label: caseD_0
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 00588d9c
    MOV dword ptr [EBX + 0x2538],0x41a00000 ; 00588da6
    MOV ESP,EBP                         ; 00588db0
        ;   Label: default
    POP EBP                             ; 00588db2
    POP EDI                             ; 00588db3
    POP ESI                             ; 00588db4
    POP EBX                             ; 00588db5
    RET                                 ; 00588db6
    PUSH 0x5d84db                       ; 00588db7 | = "zombho1.dfm"
        ;   Label: LAB_00588db7
    PUSH ESI                            ; 00588dbc
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00588dbd
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00588dc2
    TEST EAX,EAX                        ; 00588dc5
    JZ 0x00588d58                       ; 00588dc7
        ;   XREF to: 00588d58 (CONDITIONAL_JUMP)  ; LAB_00588d58
    PUSH 0x5d84e7                       ; 00588dc9 | = "zombho2.dfm"
    PUSH ESI                            ; 00588dce
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00588dcf
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00588dd4
    TEST EAX,EAX                        ; 00588dd7
    JZ 0x00588d58                       ; 00588dd9
        ;   XREF to: 00588d58 (CONDITIONAL_JUMP)  ; LAB_00588d58
    JMP 0x00588d62                      ; 00588ddf
        ;   XREF to: 00588d62 (UNCONDITIONAL_JUMP)  ; LAB_00588d62
    MOV dword ptr [EBX + 0xce5c],0x41200000 ; 00588de1
        ;   Label: caseD_2
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 00588deb
    MOV dword ptr [EBX + 0x2538],0x41c80000 ; 00588df5
    MOV ESP,EBP                         ; 00588dff
    POP EBP                             ; 00588e01
    POP EDI                             ; 00588e02
    POP ESI                             ; 00588e03
    POP EBX                             ; 00588e04
    RET                                 ; 00588e05
    MOV dword ptr [EBX + 0xce5c],0x41700000 ; 00588e06
        ;   Label: caseD_3
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 00588e10
    MOV dword ptr [EBX + 0x2538],0x41f00000 ; 00588e1a
    MOV ESP,EBP                         ; 00588e24
    POP EBP                             ; 00588e26
    POP EDI                             ; 00588e27
    POP ESI                             ; 00588e28
    POP EBX                             ; 00588e29
    RET                                 ; 00588e2a
    MOV dword ptr [EBX + 0xce5c],0x41700000 ; 00588e2b
        ;   Label: caseD_4
    MOV dword ptr [EBX + 0xce60],0x41700000 ; 00588e35
    MOV dword ptr [EBX + 0x2538],0x42200000 ; 00588e3f
    MOV ESP,EBP                         ; 00588e49
    POP EBP                             ; 00588e4b
    POP EDI                             ; 00588e4c
    POP ESI                             ; 00588e4d
    POP EBX                             ; 00588e4e
    RET                                 ; 00588e4f
    MOV dword ptr [EBX + 0xce5c],0x41700000 ; 00588e50
        ;   Label: caseD_5
    MOV dword ptr [EBX + 0xce60],0x41700000 ; 00588e5a
    MOV dword ptr [EBX + 0xd0dc],0x1    ; 00588e64
    MOV dword ptr [EBX + 0x2538],0x42480000 ; 00588e6e
    MOV ESP,EBP                         ; 00588e78
    POP EBP                             ; 00588e7a
    POP EDI                             ; 00588e7b
    POP ESI                             ; 00588e7c
    POP EBX                             ; 00588e7d
    RET                                 ; 00588e7e

