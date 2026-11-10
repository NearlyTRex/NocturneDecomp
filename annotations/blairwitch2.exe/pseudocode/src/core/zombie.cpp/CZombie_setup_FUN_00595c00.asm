; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_zombie_cpp_CZombie_setup_FUN_00595c00(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005eee5c
;   TerminatedCString s_Bip01_L_ForeArm_005eee67
;   TerminatedCString s_Bip01_R_ForeArm_005eee77
;   TerminatedCString s_Bip01_L_UpperArm_005eee87
;   TerminatedCString s_Bip01_R_UpperArm_005eee98
;   TerminatedCString s_Bip01_L_Foot_005eeea9
;   TerminatedCString s_Bip01_R_Foot_005eeeb6
;   TerminatedCString s_Bip01_L_Hand_005eeec3
;   TerminatedCString s_Bip01_R_Hand_005eeed0
;   TerminatedCString s_Bip01_Spine_005eeedd
;   TerminatedCString s_Bip01_Spine2_005eeee9
;   TerminatedCString s_larm01_005eeef6
;   TerminatedCString s_l4arm01_005eeefd
;   TerminatedCString s_rarm01_005eef05
;   TerminatedCString s_r4arm01_005eef0c
;   ... and 8 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_enemy.cpp_CEnemy_setup_FUN_00487eb0
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00595c00
        ;   Label: core_zombie.cpp_CZombie_setup_FUN_00595c00
    PUSH ESI                            ; 00595c01
    PUSH EDI                            ; 00595c02
    PUSH EBP                            ; 00595c03
    MOV EBP,ESP                         ; 00595c04
    SUB ESP,0x4                         ; 00595c06
    MOV EBX,dword ptr [EBP + 0x14]      ; 00595c09
    LEA EDI,[EBX + 0x2b4]               ; 00595c0c
    PUSH EDI                            ; 00595c12
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 00595c13
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00595c18
    PUSH EDI                            ; 00595c1b
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00595c1c
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00595c21
    PUSH 0x1                            ; 00595c24
    PUSH 0x5eee5c                       ; 00595c26 | = "Bip01 Head"
    PUSH EAX                            ; 00595c2b
    MOV ESI,EAX                         ; 00595c2c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00595c2e
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00595c33
    PUSH 0x1                            ; 00595c36
    PUSH 0x5eee67                       ; 00595c38 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 00595c3d
    MOV dword ptr [EBX + 0x10b88],EAX   ; 00595c3e
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00595c44
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00595c49
    PUSH 0x1                            ; 00595c4c
    PUSH 0x5eee77                       ; 00595c4e | = "Bip01 R ForeArm"
    PUSH ESI                            ; 00595c53
    MOV dword ptr [EBX + 0x10b94],EAX   ; 00595c54
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00595c5a
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00595c5f
    PUSH 0x1                            ; 00595c62
    PUSH 0x5eee87                       ; 00595c64 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 00595c69
    MOV dword ptr [EBX + 0x10b98],EAX   ; 00595c6a
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00595c70
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00595c75
    PUSH 0x1                            ; 00595c78
    PUSH 0x5eee98                       ; 00595c7a | = "Bip01 R UpperArm"
    PUSH ESI                            ; 00595c7f
    MOV dword ptr [EBX + 0x10b9c],EAX   ; 00595c80
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00595c86
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00595c8b
    PUSH 0x1                            ; 00595c8e
    PUSH 0x5eeea9                       ; 00595c90 | = "Bip01 L Foot"
    PUSH ESI                            ; 00595c95
    MOV dword ptr [EBX + 0x10ba0],EAX   ; 00595c96
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00595c9c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00595ca1
    PUSH 0x1                            ; 00595ca4
    PUSH 0x5eeeb6                       ; 00595ca6 | = "Bip01 R Foot"
    PUSH ESI                            ; 00595cab
    MOV dword ptr [EBX + 0x10ba4],EAX   ; 00595cac
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00595cb2
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00595cb7
    PUSH 0x1                            ; 00595cba
    PUSH 0x5eeec3                       ; 00595cbc | = "Bip01 L Hand"
    PUSH ESI                            ; 00595cc1
    MOV dword ptr [EBX + 0x10ba8],EAX   ; 00595cc2
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00595cc8
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00595ccd
    MOV dword ptr [EBX + 0x10b8c],EAX   ; 00595cd0
    PUSH 0x1                            ; 00595cd6
    PUSH 0x5eeed0                       ; 00595cd8 | = "Bip01 R Hand"
    PUSH ESI                            ; 00595cdd
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00595cde
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00595ce3
    PUSH 0x1                            ; 00595ce6
    PUSH 0x5eeedd                       ; 00595ce8 | = "Bip01 Spine"
    PUSH ESI                            ; 00595ced
    MOV dword ptr [EBX + 0x10b90],EAX   ; 00595cee
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00595cf4
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00595cf9
    PUSH 0x1                            ; 00595cfc
    PUSH 0x5eeee9                       ; 00595cfe | = "Bip01 Spine2"
    PUSH ESI                            ; 00595d03
    MOV dword ptr [EBX + 0x10bac],EAX   ; 00595d04
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00595d0a
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00595d0f
    PUSH EDI                            ; 00595d12
    MOV dword ptr [EBX + 0x10bb0],EAX   ; 00595d13
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 00595d19
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00595d1e
    PUSH 0x1                            ; 00595d21
    PUSH 0x5eeef6                       ; 00595d23 | = "larm01"
    PUSH EAX                            ; 00595d28
    MOV ESI,EAX                         ; 00595d29
    MOV EDI,EAX                         ; 00595d2b
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00595d2d
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00595d32
    PUSH 0x1                            ; 00595d35
    PUSH 0x5eeefd                       ; 00595d37 | = "l4arm01"
    PUSH ESI                            ; 00595d3c
    MOV dword ptr [EBX + 0x10bb4],EAX   ; 00595d3d
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00595d43
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00595d48
    PUSH 0x1                            ; 00595d4b
    PUSH 0x5eef05                       ; 00595d4d | = "rarm01"
    PUSH ESI                            ; 00595d52
    MOV dword ptr [EBX + 0x10bb8],EAX   ; 00595d53
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00595d59
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00595d5e
    PUSH 0x0                            ; 00595d61
    PUSH 0x5eef0c                       ; 00595d63 | = "r4arm01"
    PUSH ESI                            ; 00595d68
    MOV dword ptr [EBX + 0x10bbc],EAX   ; 00595d69
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00595d6f
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00595d74
    MOV dword ptr [EBX + 0x10bc0],EAX   ; 00595d77
    TEST EAX,EAX                        ; 00595d7d
    JGE 0x00595d8b                      ; 00595d7f
        ;   XREF to: 00595d8b (CONDITIONAL_JUMP)  ; LAB_00595d8b
    MOV dword ptr [EBX + 0x10bc0],0x1d  ; 00595d81
    PUSH 0x0                            ; 00595d8b
        ;   Label: LAB_00595d8b
    PUSH 0x5eef14                       ; 00595d8d | = "waist01"
    PUSH EDI                            ; 00595d92
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00595d93
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00595d98
    PUSH 0x1                            ; 00595d9b
    PUSH 0x5eef1c                       ; 00595d9d | = "torso01"
    PUSH EDI                            ; 00595da2
    MOV dword ptr [EBX + 0x10bc4],EAX   ; 00595da3
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00595da9
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00595dae
    PUSH 0x1                            ; 00595db1
    PUSH 0x5eef24                       ; 00595db3 | = "head01"
    PUSH EDI                            ; 00595db8
    MOV dword ptr [EBX + 0x10bc8],EAX   ; 00595db9
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00595dbf
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00595dc4
    PUSH 0x5eef2b                       ; 00595dc7 | = "newzomb1.dfm"
    MOV dword ptr [EBX + 0x10bcc],EAX   ; 00595dcc
    LEA EAX,[EBX + 0x2514]              ; 00595dd2
    PUSH EAX                            ; 00595dd8
    MOV dword ptr [EBX + 0x2468],0x0    ; 00595dd9
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00595de3
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00595de8
    TEST EAX,EAX                        ; 00595deb
    JNZ 0x00595e17                      ; 00595ded
        ;   XREF to: 00595e17 (CONDITIONAL_JUMP)  ; LAB_00595e17
    LEA EAX,[EBX + 0x10bb4]             ; 00595def
    LEA ESI,[EBX + 0x10bbc]             ; 00595df5
    MOV EDX,dword ptr [ESI]             ; 00595dfb
    MOV EDI,dword ptr [EAX]             ; 00595dfd
    MOV dword ptr [EAX],EDX             ; 00595dff
    LEA EAX,[EBX + 0x10bb8]             ; 00595e01
    MOV dword ptr [ESI],EDI             ; 00595e07
    LEA ESI,[EBX + 0x10bc0]             ; 00595e09
    MOV EDI,dword ptr [ESI]             ; 00595e0f
    MOV EDX,dword ptr [EAX]             ; 00595e11
    MOV dword ptr [EAX],EDI             ; 00595e13
    MOV dword ptr [ESI],EDX             ; 00595e15
    MOV EAX,dword ptr [EBX + 0x10b8c]   ; 00595e17
        ;   Label: LAB_00595e17
    MOV dword ptr [EBX + 0x2618],EAX    ; 00595e1d
    MOV EAX,dword ptr [EBX + 0x10bb8]   ; 00595e23
    MOV dword ptr [EBX + 0x261c],EAX    ; 00595e29
    MOV EAX,dword ptr [EBX + 0x10b90]   ; 00595e2f
    MOV dword ptr [EBX + 0x2690],EAX    ; 00595e35
    MOV EAX,dword ptr [EBX + 0x10bc0]   ; 00595e3b
    PUSH EBX                            ; 00595e41
    MOV dword ptr [EBX + 0x2694],EAX    ; 00595e42
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 00595e48
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    MOV ECX,dword ptr [EBX + 0x10b7c]   ; 00595e4d
    ADD ESP,0x4                         ; 00595e53
    TEST ECX,ECX                        ; 00595e56
    SETNZ AL                            ; 00595e58
    PUSH 0x3f800000                     ; 00595e5b
    AND EAX,0xff                        ; 00595e60
    PUSH 0x0                            ; 00595e65
    MOV dword ptr [EBX + 0xfc],EAX      ; 00595e67
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00595e6d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + -0x4],EAX      ; 00595e72
    ADD ESP,0x8                         ; 00595e75
    MOV ESI,dword ptr [EBX + 0x10bc4]   ; 00595e78
    MOV EAX,dword ptr [EBP + -0x4]      ; 00595e7e
    MOV dword ptr [EBX + 0x10be0],EAX   ; 00595e81
    TEST ESI,ESI                        ; 00595e87
    JL 0x00595eac                       ; 00595e89
        ;   XREF to: 00595eac (CONDITIONAL_JUMP)  ; LAB_00595eac
    FLD float ptr [EBX + 0x3444]        ; 00595e8b
    FLDZ                                ; 00595e91
    FCOMPP                              ; 00595e93
    FNSTSW AX                           ; 00595e95
    SAHF                                ; 00595e97
    JBE 0x00595eac                      ; 00595e98
        ;   XREF to: 00595eac (CONDITIONAL_JUMP)  ; LAB_00595eac
    FLD float ptr [EBX + 0x24fc]        ; 00595e9a
    FADD double ptr [0x005eef62]        ; 00595ea0 | DAT_005eef62
    FSTP float ptr [EBX + 0x3444]       ; 00595ea6
    PUSH 0x5eef38                       ; 00595eac | = "newzchik.dfm"
        ;   Label: LAB_00595eac
    LEA ESI,[EBX + 0x2514]              ; 00595eb1
    MOV dword ptr [EBX + 0x10bd4],0x0   ; 00595eb7
    PUSH ESI                            ; 00595ec1
    MOV dword ptr [EBX + 0x10b84],0x0   ; 00595ec2
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00595ecc
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00595ed1
    TEST EAX,EAX                        ; 00595ed4
    JZ 0x00595eea                       ; 00595ed6
        ;   XREF to: 00595eea (CONDITIONAL_JUMP)  ; LAB_00595eea
    PUSH 0x5eef45                       ; 00595ed8 | = "zombho1.dfm"
    PUSH ESI                            ; 00595edd
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00595ede
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00595ee3
    TEST EAX,EAX                        ; 00595ee6
    JNZ 0x00595f0f                      ; 00595ee8
        ;   XREF to: 00595f0f (CONDITIONAL_JUMP)  ; LAB_00595f0f
    MOV dword ptr [EBX + 0x10b84],0x1   ; 00595eea
        ;   Label: LAB_00595eea
    MOV dword ptr [EBX + 0x10bdc],0x0   ; 00595ef4
        ;   Label: LAB_00595ef4
    MOV dword ptr [EBX + 0x10bd8],0x0   ; 00595efe
    MOV ESP,EBP                         ; 00595f08
    POP EBP                             ; 00595f0a
    POP EDI                             ; 00595f0b
    POP ESI                             ; 00595f0c
    POP EBX                             ; 00595f0d
    RET                                 ; 00595f0e
    PUSH 0x5eef51                       ; 00595f0f | = "zombho2.dfm"
        ;   Label: LAB_00595f0f
    PUSH ESI                            ; 00595f14
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00595f15
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00595f1a
    TEST EAX,EAX                        ; 00595f1d
    JZ 0x00595eea                       ; 00595f1f
        ;   XREF to: 00595eea (CONDITIONAL_JUMP)  ; LAB_00595eea
    JMP 0x00595ef4                      ; 00595f21
        ;   XREF to: 00595ef4 (UNCONDITIONAL_JUMP)  ; LAB_00595ef4

