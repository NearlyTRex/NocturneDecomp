; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mobster_cpp_FUN_0051c910(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005e9c6c
;   TerminatedCString s_Bip01_L_ForeArm_005e9c77
;   TerminatedCString s_Bip01_R_ForeArm_005e9c87
;   TerminatedCString s_Bip01_L_UpperArm_005e9c97
;   TerminatedCString s_Bip01_R_UpperArm_005e9ca8
;   TerminatedCString s_Bip01_L_Foot_005e9cb9
;   TerminatedCString s_Bip01_R_Foot_005e9cc6
;   TerminatedCString s_Bip01_L_Hand_005e9cd3
;   TerminatedCString s_Bip01_R_Hand_005e9ce0
;   TerminatedCString s_Bip01_Spine_005e9ced
;   TerminatedCString s_Bip01_Spine1_005e9cf9
;   TerminatedCString s_Bip01_Spine2_005e9d06
;   TerminatedCString s_Bip01_Head_005e9d13
;   TerminatedCString s_Bip01_L_UpperArm_005e9d1e
;   TerminatedCString s_Bip01_R_UpperArm_005e9d2f
;   ... and 25 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;   core_skeleton.cpp_FUN_00565780
;   core_skeleton.cpp_FUN_00569b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c910
        ;   Label: core_mobster.cpp_FUN_0051c910
    PUSH ESI                            ; 0051c911
    MOV EBX,dword ptr [ESP + 0xc]       ; 0051c912
    PUSH EDI                            ; 0051c916
    LEA EDI,[EBX + 0x158]               ; 0051c917
    PUSH EDI                            ; 0051c91d
    CALL core_skeleton.cpp_FUN_00569b20 ; 0051c91e
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051c923
    PUSH EDI                            ; 0051c926
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0051c927
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051c92c
    PUSH 0x1                            ; 0051c92f
    PUSH 0x5e9c6c                       ; 0051c931 | = "Bip01 Head"
    PUSH EAX                            ; 0051c936
    MOV ESI,EAX                         ; 0051c937
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0051c939
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0051c93e
    PUSH 0x1                            ; 0051c941
    PUSH 0x5e9c77                       ; 0051c943 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 0051c948
    MOV [0x01d33c00],EAX                ; 0051c949 | DAT_01d33c00
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0051c94e
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0051c953
    PUSH 0x1                            ; 0051c956
    PUSH 0x5e9c87                       ; 0051c958 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 0051c95d
    MOV [0x01d33c0c],EAX                ; 0051c95e | DAT_01d33c0c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0051c963
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0051c968
    PUSH 0x1                            ; 0051c96b
    PUSH 0x5e9c97                       ; 0051c96d | = "Bip01 L UpperArm"
    PUSH ESI                            ; 0051c972
    MOV [0x01d33c10],EAX                ; 0051c973 | DAT_01d33c10
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0051c978
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0051c97d
    PUSH 0x1                            ; 0051c980
    PUSH 0x5e9ca8                       ; 0051c982 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 0051c987
    MOV [0x01d33c14],EAX                ; 0051c988 | DAT_01d33c14
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0051c98d
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0051c992
    PUSH 0x1                            ; 0051c995
    PUSH 0x5e9cb9                       ; 0051c997 | = "Bip01 L Foot"
    PUSH ESI                            ; 0051c99c
    MOV [0x01d33c18],EAX                ; 0051c99d | DAT_01d33c18
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0051c9a2
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0051c9a7
    PUSH 0x1                            ; 0051c9aa
    PUSH 0x5e9cc6                       ; 0051c9ac | = "Bip01 R Foot"
    PUSH ESI                            ; 0051c9b1
    MOV [0x01d33c1c],EAX                ; 0051c9b2 | DAT_01d33c1c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0051c9b7
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0051c9bc
    PUSH 0x1                            ; 0051c9bf
    PUSH 0x5e9cd3                       ; 0051c9c1 | = "Bip01 L Hand"
    PUSH ESI                            ; 0051c9c6
    MOV [0x01d33c20],EAX                ; 0051c9c7 | DAT_01d33c20
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0051c9cc
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0051c9d1
    PUSH 0x1                            ; 0051c9d4
    PUSH 0x5e9ce0                       ; 0051c9d6 | = "Bip01 R Hand"
    PUSH ESI                            ; 0051c9db
    MOV [0x01d33c04],EAX                ; 0051c9dc | DAT_01d33c04
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0051c9e1
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0051c9e6
    MOV [0x01d33c08],EAX                ; 0051c9e9 | DAT_01d33c08
    PUSH 0x1                            ; 0051c9ee
    PUSH 0x5e9ced                       ; 0051c9f0 | = "Bip01 Spine"
    PUSH ESI                            ; 0051c9f5
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0051c9f6
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0051c9fb
    PUSH 0x1                            ; 0051c9fe
    PUSH 0x5e9cf9                       ; 0051ca00 | = "Bip01 Spine1"
    PUSH ESI                            ; 0051ca05
    MOV [0x01d33c24],EAX                ; 0051ca06 | DAT_01d33c24
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0051ca0b
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0051ca10
    PUSH 0x1                            ; 0051ca13
    PUSH 0x5e9d06                       ; 0051ca15 | = "Bip01 Spine2"
    PUSH ESI                            ; 0051ca1a
    MOV [0x01d33c28],EAX                ; 0051ca1b | DAT_01d33c28
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0051ca20
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0051ca25
    PUSH 0x1                            ; 0051ca28
    PUSH 0x5e9d13                       ; 0051ca2a | = "Bip01 Head"
    PUSH ESI                            ; 0051ca2f
    MOV [0x01d33c2c],EAX                ; 0051ca30 | DAT_01d33c2c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0051ca35
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0051ca3a
    PUSH 0x1                            ; 0051ca3d
    PUSH 0x5e9d1e                       ; 0051ca3f | = "Bip01 L UpperArm"
    PUSH ESI                            ; 0051ca44
    MOV [0x01d33c00],EAX                ; 0051ca45 | DAT_01d33c00
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0051ca4a
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0051ca4f
    PUSH 0x1                            ; 0051ca52
    PUSH 0x5e9d2f                       ; 0051ca54 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 0051ca59
    MOV [0x01d33c14],EAX                ; 0051ca5a | DAT_01d33c14
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0051ca5f
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0051ca64
    PUSH 0x1                            ; 0051ca67
    PUSH 0x5e9d40                       ; 0051ca69 | = "Bip01 Spine"
    PUSH ESI                            ; 0051ca6e
    MOV [0x01d33c18],EAX                ; 0051ca6f | DAT_01d33c18
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0051ca74
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0051ca79
    PUSH 0x1                            ; 0051ca7c
    PUSH 0x5e9d4c                       ; 0051ca7e | = "Bip01 Spine2"
    PUSH ESI                            ; 0051ca83
    MOV [0x01d33c24],EAX                ; 0051ca84 | DAT_01d33c24
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0051ca89
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0051ca8e
    PUSH EDI                            ; 0051ca91
    MOV [0x01d33c2c],EAX                ; 0051ca92 | DAT_01d33c2c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 0051ca97
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051ca9c
    PUSH 0x1                            ; 0051ca9f
    PUSH 0x5e9d59                       ; 0051caa1 | = "larm01"
    PUSH EAX                            ; 0051caa6
    MOV ESI,EAX                         ; 0051caa7
    CALL core_skeleton.cpp_FUN_00565780 ; 0051caa9
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0051caae
    MOV dword ptr [EBX + 0xc30c],EAX    ; 0051cab1
    POP EDI                             ; 0051cab7
    PUSH 0x1                            ; 0051cab8
    PUSH 0x5e9d60                       ; 0051caba | = "l4arm01"
    PUSH ESI                            ; 0051cabf
    CALL core_skeleton.cpp_FUN_00565780 ; 0051cac0
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0051cac5
    PUSH 0x1                            ; 0051cac8
    PUSH 0x5e9d68                       ; 0051caca | = "rarm01"
    PUSH ESI                            ; 0051cacf
    MOV dword ptr [EBX + 0xc310],EAX    ; 0051cad0
    CALL core_skeleton.cpp_FUN_00565780 ; 0051cad6
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0051cadb
    PUSH 0x1                            ; 0051cade
    PUSH 0x5e9d6f                       ; 0051cae0 | = "r4arm01"
    PUSH ESI                            ; 0051cae5
    MOV dword ptr [EBX + 0xc314],EAX    ; 0051cae6
    CALL core_skeleton.cpp_FUN_00565780 ; 0051caec
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0051caf1
    PUSH 0x1                            ; 0051caf4
    PUSH 0x5e9d77                       ; 0051caf6 | = "rthigh01"
    PUSH ESI                            ; 0051cafb
    MOV dword ptr [EBX + 0xc318],EAX    ; 0051cafc
    CALL core_skeleton.cpp_FUN_00565780 ; 0051cb02
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0051cb07
    PUSH 0x1                            ; 0051cb0a
    PUSH 0x5e9d80                       ; 0051cb0c | = "rshin01"
    PUSH ESI                            ; 0051cb11
    MOV dword ptr [EBX + 0xc31c],EAX    ; 0051cb12
    CALL core_skeleton.cpp_FUN_00565780 ; 0051cb18
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0051cb1d
    PUSH 0x1                            ; 0051cb20
    PUSH 0x5e9d88                       ; 0051cb22 | = "lthigh01"
    PUSH ESI                            ; 0051cb27
    MOV dword ptr [EBX + 0xc320],EAX    ; 0051cb28
    CALL core_skeleton.cpp_FUN_00565780 ; 0051cb2e
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0051cb33
    PUSH 0x1                            ; 0051cb36
    PUSH 0x5e9d91                       ; 0051cb38 | = "lshin01"
    PUSH ESI                            ; 0051cb3d
    MOV dword ptr [EBX + 0xc324],EAX    ; 0051cb3e
    CALL core_skeleton.cpp_FUN_00565780 ; 0051cb44
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0051cb49
    PUSH 0x1                            ; 0051cb4c
    PUSH 0x5e9d99                       ; 0051cb4e | = "waist01"
    PUSH ESI                            ; 0051cb53
    MOV dword ptr [EBX + 0xc328],EAX    ; 0051cb54
    CALL core_skeleton.cpp_FUN_00565780 ; 0051cb5a
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0051cb5f
    PUSH 0x1                            ; 0051cb62
    PUSH 0x5e9da1                       ; 0051cb64 | = "torso01"
    PUSH ESI                            ; 0051cb69
    MOV dword ptr [EBX + 0xc32c],EAX    ; 0051cb6a
    CALL core_skeleton.cpp_FUN_00565780 ; 0051cb70
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 0051cb75
    MOV dword ptr [EBX + 0xc330],EAX    ; 0051cb78
    PUSH 0x1                            ; 0051cb7e
    PUSH 0x5e9da9                       ; 0051cb80 | = "head01"
    PUSH ESI                            ; 0051cb85
    CALL core_skeleton.cpp_FUN_00565780 ; 0051cb86
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [EBX + 0xc334],EAX    ; 0051cb8b
    MOV EAX,[0x01d33c04]                ; 0051cb91 | DAT_01d33c04
    MOV dword ptr [EBX + 0x25a8],EAX    ; 0051cb96
    MOV EAX,dword ptr [EBX + 0xc310]    ; 0051cb9c
    MOV dword ptr [EBX + 0x25ac],EAX    ; 0051cba2
    MOV EAX,[0x01d33c08]                ; 0051cba8 | DAT_01d33c08
    MOV dword ptr [EBX + 0x2620],EAX    ; 0051cbad
    ADD ESP,0xc                         ; 0051cbb3
    MOV EAX,dword ptr [EBX + 0xc318]    ; 0051cbb6
    PUSH EBX                            ; 0051cbbc
    MOV dword ptr [EBX + 0x2624],EAX    ; 0051cbbd
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 0051cbc3
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    MOV dword ptr [EBX + 0xc338],0x0    ; 0051cbc8
    ADD ESP,0x4                         ; 0051cbd2
    MOV EDX,dword ptr [EBX + 0xc288]    ; 0051cbd5
    MOV dword ptr [EBX + 0xc33c],0x0    ; 0051cbdb
    TEST EDX,EDX                        ; 0051cbe5
    JNZ 0x0051cc14                      ; 0051cbe7
        ;   XREF to: 0051cc14 (CONDITIONAL_JUMP)  ; LAB_0051cc14
    MOV dword ptr [EBX + 0xc300],0x0    ; 0051cbe9
        ;   Label: LAB_0051cbe9
    MOV dword ptr [EBX + 0xc304],0x0    ; 0051cbf3
    MOV dword ptr [EBX + 0xc308],0x0    ; 0051cbfd
    MOV dword ptr [EBX + 0xc2fc],0x0    ; 0051cc07
    POP ESI                             ; 0051cc11
    POP EBX                             ; 0051cc12
    RET                                 ; 0051cc13
    MOV dword ptr [EBX + 0xc264],0x1    ; 0051cc14
        ;   Label: LAB_0051cc14
    JMP 0x0051cbe9                      ; 0051cc1e
        ;   XREF to: 0051cbe9 (UNCONDITIONAL_JUMP)  ; LAB_0051cbe9

