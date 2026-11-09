; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dracbrid_cpp_FUN_00462c90(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_nbride2_dfm_005d0e2e
;   TerminatedCString s_nbride2x_dfm_005d0e3a
;   TerminatedCString s_nbride3_dfm_005d0e47
;   TerminatedCString s_nbride3x_dfm_005d0e53
;   TerminatedCString s_nbride4_dfm_005d0e60
;   TerminatedCString s_nbride4x_dfm_005d0e6c
;   TerminatedCString s_nbride2x_dfm_005d0e79
;   TerminatedCString s_nbride2_dfm_005d0e86
;   TerminatedCString s_nbride3x_dfm_005d0e92
;   TerminatedCString s_nbride3_dfm_005d0e9f
;   TerminatedCString s_nbride4x_dfm_005d0eab
;   TerminatedCString s_nbride4_dfm_005d0eb8
;   TerminatedCString s_Bip01_Head_005d0ec4
;   TerminatedCString s_Bip01_L_Hand_005d0ecf
;   TerminatedCString s_Bip01_R_Hand_005d0edc
;   ... and 24 more
;
; Called Functions:
;   core_actor.cpp_FUN_0040cf60
;   core_enemy.cpp_CEnemy_setup_FUN_00487eb0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;   core_skeleton.cpp_FUN_00540e80
;   core_skeleton.cpp_FUN_00543100
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462c90
        ;   Label: core_dracbrid.cpp_FUN_00462c90
    SUB ESP,0x4                         ; 00462c91
    MOV EBX,dword ptr [ESP + 0xc]       ; 00462c94
    PUSH EDI                            ; 00462c98
    PUSH ESI                            ; 00462c99
    MOV EDI,dword ptr [0x00616494]      ; 00462c9a | g_CGamePtr
    LEA EAX,[EBX + 0x2514]              ; 00462ca0
    MOV EDX,dword ptr [EDI + 0x18]      ; 00462ca6 | g_CGameInstance.field24_0x18
    LEA ESI,[EBX + 0x2b4]               ; 00462ca9
    TEST EDX,EDX                        ; 00462caf
    JZ 0x00462f09                       ; 00462cb1
        ;   XREF to: 00462f09 (CONDITIONAL_JUMP)  ; LAB_00462f09
    PUSH 0x5d0e79                       ; 00462cb7 | = "nbride2x.dfm"
    PUSH EAX                            ; 00462cbc
    MOV EDI,EAX                         ; 00462cbd
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00462cbf
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00462cc4
    TEST EAX,EAX                        ; 00462cc7
    JNZ 0x00462cd9                      ; 00462cc9
        ;   XREF to: 00462cd9 (CONDITIONAL_JUMP)  ; LAB_00462cd9
    PUSH 0x5d0e86                       ; 00462ccb | = "nbride2.dfm"
    PUSH ESI                            ; 00462cd0
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 00462cd1
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00462cd6
    PUSH 0x5d0e92                       ; 00462cd9 | = "nbride3x.dfm"
        ;   Label: LAB_00462cd9
    PUSH EDI                            ; 00462cde
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00462cdf
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00462ce4
    TEST EAX,EAX                        ; 00462ce7
    JNZ 0x00462cff                      ; 00462ce9
        ;   XREF to: 00462cff (CONDITIONAL_JUMP)  ; LAB_00462cff
    PUSH 0x5d0e9f                       ; 00462ceb | = "nbride3.dfm"
    LEA EAX,[EBX + 0x2b4]               ; 00462cf0
    PUSH EAX                            ; 00462cf6
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 00462cf7
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00462cfc
    PUSH 0x5d0eab                       ; 00462cff | = "nbride4x.dfm"
        ;   Label: LAB_00462cff
    PUSH EDI                            ; 00462d04
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00462d05
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00462d0a
    TEST EAX,EAX                        ; 00462d0d
    JNZ 0x00462d25                      ; 00462d0f
        ;   XREF to: 00462d25 (CONDITIONAL_JUMP)  ; LAB_00462d25
    PUSH 0x5d0eb8                       ; 00462d11 | = "nbride4.dfm"
    LEA EAX,[EBX + 0x2b4]               ; 00462d16
        ;   Label: LAB_00462d16
    PUSH EAX                            ; 00462d1c
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 00462d1d
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00462d22
    PUSH EBX                            ; 00462d25
        ;   Label: LAB_00462d25
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 00462d26
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00462d2b
    LEA EDI,[EBX + 0x2b4]               ; 00462d2e
    PUSH EDI                            ; 00462d34
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00462d35
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00462d3a
    PUSH 0x1                            ; 00462d3d
    PUSH 0x5d0ec4                       ; 00462d3f | = "Bip01 Head"
    PUSH EAX                            ; 00462d44
    MOV ESI,EAX                         ; 00462d45
    CALL core_skeleton.cpp_FUN_00540e80 ; 00462d47
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00462d4c
    PUSH 0x1                            ; 00462d4f
    PUSH 0x5d0ecf                       ; 00462d51 | = "Bip01 L Hand"
    PUSH ESI                            ; 00462d56
    MOV [0x01ba5778],EAX                ; 00462d57 | DAT_01ba5778
    CALL core_skeleton.cpp_FUN_00540e80 ; 00462d5c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00462d61
    PUSH 0x1                            ; 00462d64
    PUSH 0x5d0edc                       ; 00462d66 | = "Bip01 R Hand"
    PUSH ESI                            ; 00462d6b
    MOV [0x01ba577c],EAX                ; 00462d6c | DAT_01ba577c
    CALL core_skeleton.cpp_FUN_00540e80 ; 00462d71
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00462d76
    PUSH 0x1                            ; 00462d79
    PUSH 0x5d0ee9                       ; 00462d7b | = "Bip01 L UpperArm"
    PUSH ESI                            ; 00462d80
    MOV [0x01ba5780],EAX                ; 00462d81 | DAT_01ba5780
    CALL core_skeleton.cpp_FUN_00540e80 ; 00462d86
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00462d8b
    PUSH 0x1                            ; 00462d8e
    PUSH 0x5d0efa                       ; 00462d90 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 00462d95
    MOV [0x01ba5784],EAX                ; 00462d96 | DAT_01ba5784
    CALL core_skeleton.cpp_FUN_00540e80 ; 00462d9b
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00462da0
    PUSH 0x1                            ; 00462da3
    PUSH 0x5d0f0b                       ; 00462da5 | = "Bip01 Spine"
    PUSH ESI                            ; 00462daa
    MOV [0x01ba5788],EAX                ; 00462dab | DAT_01ba5788
    CALL core_skeleton.cpp_FUN_00540e80 ; 00462db0
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00462db5
    PUSH 0x1                            ; 00462db8
    PUSH 0x5d0f17                       ; 00462dba | = "Bip01 Spine1"
    PUSH ESI                            ; 00462dbf
    MOV [0x01ba578c],EAX                ; 00462dc0 | DAT_01ba578c
    CALL core_skeleton.cpp_FUN_00540e80 ; 00462dc5
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00462dca
    PUSH 0x1                            ; 00462dcd
    PUSH 0x5d0f24                       ; 00462dcf | = "Bip01 Spine2"
    PUSH ESI                            ; 00462dd4
    MOV [0x01ba5790],EAX                ; 00462dd5 | DAT_01ba5790
    CALL core_skeleton.cpp_FUN_00540e80 ; 00462dda
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00462ddf
    PUSH EDI                            ; 00462de2
    MOV [0x01ba5794],EAX                ; 00462de3 | DAT_01ba5794
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 00462de8
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    MOV ESI,EAX                         ; 00462ded
    ADD ESP,0x4                         ; 00462def
    PUSH 0x1                            ; 00462df2
    PUSH 0x5d0f31                       ; 00462df4 | = "larm01"
    PUSH EAX                            ; 00462df9
    CALL core_skeleton.cpp_FUN_00543100 ; 00462dfa
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00462dff
    PUSH 0x1                            ; 00462e02
    PUSH 0x5d0f38                       ; 00462e04 | = "l4arm01"
    PUSH ESI                            ; 00462e09
    MOV dword ptr [EBX + 0x10af8],EAX   ; 00462e0a
    CALL core_skeleton.cpp_FUN_00543100 ; 00462e10
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00462e15
    PUSH 0x1                            ; 00462e18
    PUSH 0x5d0f40                       ; 00462e1a | = "rarm01"
    PUSH ESI                            ; 00462e1f
    MOV dword ptr [EBX + 0x10afc],EAX   ; 00462e20
    CALL core_skeleton.cpp_FUN_00543100 ; 00462e26
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00462e2b
    PUSH 0x1                            ; 00462e2e
    PUSH 0x5d0f47                       ; 00462e30 | = "r4arm01"
    PUSH ESI                            ; 00462e35
    MOV dword ptr [EBX + 0x10b00],EAX   ; 00462e36
    CALL core_skeleton.cpp_FUN_00543100 ; 00462e3c
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00462e41
    PUSH 0x1                            ; 00462e44
    PUSH 0x5d0f4f                       ; 00462e46 | = "lshin01"
    PUSH ESI                            ; 00462e4b
    MOV dword ptr [EBX + 0x10b04],EAX   ; 00462e4c
    CALL core_skeleton.cpp_FUN_00543100 ; 00462e52
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00462e57
    PUSH 0x1                            ; 00462e5a
    PUSH 0x5d0f57                       ; 00462e5c | = "rshin01"
    PUSH ESI                            ; 00462e61
    MOV dword ptr [EBX + 0x10b08],EAX   ; 00462e62
    CALL core_skeleton.cpp_FUN_00543100 ; 00462e68
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00462e6d
    PUSH 0x1                            ; 00462e70
    PUSH 0x5d0f5f                       ; 00462e72 | = "torso01"
    PUSH ESI                            ; 00462e77
    MOV dword ptr [EBX + 0x10b0c],EAX   ; 00462e78
    CALL core_skeleton.cpp_FUN_00543100 ; 00462e7e
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00462e83
    PUSH 0x1                            ; 00462e86
    PUSH 0x5d0f67                       ; 00462e88 | = "waist01"
    PUSH ESI                            ; 00462e8d
    MOV dword ptr [EBX + 0x10b10],EAX   ; 00462e8e
    CALL core_skeleton.cpp_FUN_00543100 ; 00462e94
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00462e99
    PUSH 0x1                            ; 00462e9c
    PUSH 0x5d0f6f                       ; 00462e9e | = "head01"
    PUSH ESI                            ; 00462ea3
    MOV dword ptr [EBX + 0x10b14],EAX   ; 00462ea4
    CALL core_skeleton.cpp_FUN_00543100 ; 00462eaa
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00462eaf
    MOV dword ptr [EBX + 0x10b18],EAX   ; 00462eb2
    POP ESI                             ; 00462eb8
    POP EDI                             ; 00462eb9
    PUSH 0x41200000                     ; 00462eba
    PUSH 0x40a00000                     ; 00462ebf
    MOV dword ptr [EBX + 0x10ba0],0x0   ; 00462ec4
    CALL core_actor.cpp_FUN_0040cf60    ; 00462ece
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x8],EAX       ; 00462ed3
    FLD float ptr [ESP + 0x8]           ; 00462ed7
    ADD ESP,0x8                         ; 00462edb
    PUSH 0x41a00000                     ; 00462ede
    PUSH 0x40000000                     ; 00462ee3
    FSTP float ptr [EBX + 0x10b8c]      ; 00462ee8
    CALL core_actor.cpp_FUN_0040cf60    ; 00462eee
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x8],EAX       ; 00462ef3
    MOV EAX,dword ptr [ESP + 0x8]       ; 00462ef7
    MOV dword ptr [EBX + 0x10b90],EAX   ; 00462efb
    ADD ESP,0x8                         ; 00462f01
    ADD ESP,0x4                         ; 00462f04
    POP EBX                             ; 00462f07
    RET                                 ; 00462f08
    PUSH 0x5d0e2e                       ; 00462f09 | = "nbride2.dfm"
        ;   Label: LAB_00462f09
    PUSH EAX                            ; 00462f0e
    MOV EDI,EAX                         ; 00462f0f
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00462f11
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00462f16
    TEST EAX,EAX                        ; 00462f19
    JNZ 0x00462f2b                      ; 00462f1b
        ;   XREF to: 00462f2b (CONDITIONAL_JUMP)  ; LAB_00462f2b
    PUSH 0x5d0e3a                       ; 00462f1d | = "nbride2x.dfm"
    PUSH ESI                            ; 00462f22
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 00462f23
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00462f28
    PUSH 0x5d0e47                       ; 00462f2b | = "nbride3.dfm"
        ;   Label: LAB_00462f2b
    PUSH EDI                            ; 00462f30
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00462f31
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00462f36
    TEST EAX,EAX                        ; 00462f39
    JNZ 0x00462f51                      ; 00462f3b
        ;   XREF to: 00462f51 (CONDITIONAL_JUMP)  ; LAB_00462f51
    PUSH 0x5d0e53                       ; 00462f3d | = "nbride3x.dfm"
    LEA EAX,[EBX + 0x2b4]               ; 00462f42
    PUSH EAX                            ; 00462f48
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 00462f49
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00462f4e
    PUSH 0x5d0e60                       ; 00462f51 | = "nbride4.dfm"
        ;   Label: LAB_00462f51
    PUSH EDI                            ; 00462f56
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00462f57
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00462f5c
    TEST EAX,EAX                        ; 00462f5f
    JNZ 0x00462d25                      ; 00462f61
        ;   XREF to: 00462d25 (CONDITIONAL_JUMP)  ; LAB_00462d25
    PUSH 0x5d0e6c                       ; 00462f67 | = "nbride4x.dfm"
    JMP 0x00462d16                      ; 00462f6c
        ;   XREF to: 00462d16 (UNCONDITIONAL_JUMP)  ; LAB_00462d16

