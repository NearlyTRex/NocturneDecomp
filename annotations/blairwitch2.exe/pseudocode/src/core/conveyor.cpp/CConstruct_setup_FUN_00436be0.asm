; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_conveyor_cpp_CConstruct_setup_FUN_00436be0(CConstruct *this_ptr)
;
; Parameters:
; CConstruct *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005cdc5f
;   TerminatedCString s_Bip01_L_Forearm_005cdc6a
;   TerminatedCString s_Bip01_R_ForeArm_005cdc7a
;   TerminatedCString s_Bip01_L_UpperArm_005cdc8a
;   TerminatedCString s_Bip01_R_UpperArm_005cdc9b
;   TerminatedCString s_Bip01_L_Foot_005cdcac
;   TerminatedCString s_Bip01_R_Foot_005cdcb9
;   TerminatedCString s_Bip01_L_Hand_005cdcc6
;   TerminatedCString s_Bip01_R_Hand_005cdcd3
;   TerminatedCString s_Bip01_R_Finger0_005cdce0
;   TerminatedCString s_Bip01_L_Finger0_005cdcf0
;   TerminatedCString s_Bip01_Spine_005cdd00
;   TerminatedCString s_Bip01_Spine1_005cdd0c
;   undefined4 DAT_005cdd19
;   TerminatedCString s_torso_005cdd1e
;   ... and 22 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00487eb0
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436be0
        ;   Label: core_conveyor.cpp_CConstruct_setup_FUN_00436be0
    PUSH ESI                            ; 00436be1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00436be2
    PUSH EDI                            ; 00436be6
    PUSH EBX                            ; 00436be7
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 00436be8
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00436bed
    LEA EDI,[EBX + 0x2b4]               ; 00436bf0
    PUSH EDI                            ; 00436bf6
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 00436bf7
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    FLD float ptr [EBX + 0x25a8]        ; 00436bfc
    ADD ESP,0x4                         ; 00436c02
    CALL crt_math.c_round_FUN_005b7ff0  ; 00436c05
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH EDI                            ; 00436c0a
    FISTP dword ptr [EBX + 0x10c10]     ; 00436c0b
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00436c11
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00436c16
    PUSH 0x1                            ; 00436c19
    PUSH 0x5cdc5f                       ; 00436c1b | = "Bip01 Head"
    PUSH EAX                            ; 00436c20
    MOV ESI,EAX                         ; 00436c21
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00436c23
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00436c28
    PUSH 0x1                            ; 00436c2b
    PUSH 0x5cdc6a                       ; 00436c2d | = "Bip01 L Forearm"
    PUSH ESI                            ; 00436c32
    MOV [0x007c254c],EAX                ; 00436c33 | DAT_007c254c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00436c38
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00436c3d
    PUSH 0x1                            ; 00436c40
    PUSH 0x5cdc7a                       ; 00436c42 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 00436c47
    MOV [0x007c2560],EAX                ; 00436c48 | DAT_007c2560
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00436c4d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00436c52
    PUSH 0x1                            ; 00436c55
    PUSH 0x5cdc8a                       ; 00436c57 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 00436c5c
    MOV [0x007c2564],EAX                ; 00436c5d | DAT_007c2564
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00436c62
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00436c67
    PUSH 0x1                            ; 00436c6a
    PUSH 0x5cdc9b                       ; 00436c6c | = "Bip01 R UpperArm"
    PUSH ESI                            ; 00436c71
    MOV [0x007c2568],EAX                ; 00436c72 | DAT_007c2568
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00436c77
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00436c7c
    PUSH 0x1                            ; 00436c7f
    PUSH 0x5cdcac                       ; 00436c81 | = "Bip01 L Foot"
    PUSH ESI                            ; 00436c86
    MOV [0x007c256c],EAX                ; 00436c87 | DAT_007c256c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00436c8c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00436c91
    PUSH 0x1                            ; 00436c94
    PUSH 0x5cdcb9                       ; 00436c96 | = "Bip01 R Foot"
    PUSH ESI                            ; 00436c9b
    MOV [0x007c2570],EAX                ; 00436c9c | DAT_007c2570
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00436ca1
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00436ca6
    PUSH 0x1                            ; 00436ca9
    PUSH 0x5cdcc6                       ; 00436cab | = "Bip01 L Hand"
    PUSH ESI                            ; 00436cb0
    MOV [0x007c2574],EAX                ; 00436cb1 | DAT_007c2574
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00436cb6
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00436cbb
    MOV [0x007c2550],EAX                ; 00436cbe | DAT_007c2550
    PUSH 0x1                            ; 00436cc3
    PUSH 0x5cdcd3                       ; 00436cc5 | = "Bip01 R Hand"
    PUSH ESI                            ; 00436cca
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00436ccb
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00436cd0
    PUSH 0x1                            ; 00436cd3
    PUSH 0x5cdce0                       ; 00436cd5 | = "Bip01 R Finger0"
    PUSH ESI                            ; 00436cda
    MOV [0x007c2554],EAX                ; 00436cdb | DAT_007c2554
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00436ce0
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00436ce5
    PUSH 0x1                            ; 00436ce8
    PUSH 0x5cdcf0                       ; 00436cea | = "Bip01 L Finger0"
    PUSH ESI                            ; 00436cef
    MOV [0x007c2558],EAX                ; 00436cf0 | DAT_007c2558
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00436cf5
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00436cfa
    PUSH 0x1                            ; 00436cfd
    PUSH 0x5cdd00                       ; 00436cff | = "Bip01 Spine"
    PUSH ESI                            ; 00436d04
    MOV [0x007c255c],EAX                ; 00436d05 | DAT_007c255c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00436d0a
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00436d0f
    PUSH 0x1                            ; 00436d12
    PUSH 0x5cdd0c                       ; 00436d14 | = "Bip01 Spine1"
    PUSH ESI                            ; 00436d19
    MOV [0x007c2578],EAX                ; 00436d1a | DAT_007c2578
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00436d1f
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00436d24
    PUSH EDI                            ; 00436d27
    MOV [0x007c257c],EAX                ; 00436d28 | DAT_007c257c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 00436d2d
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00436d32
    PUSH 0x1                            ; 00436d35
    PUSH 0x5cdd19                       ; 00436d37 | DAT_005cdd19
    PUSH EAX                            ; 00436d3c
    MOV ESI,EAX                         ; 00436d3d
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00436d3f
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00436d44
    PUSH 0x1                            ; 00436d47
    PUSH 0x5cdd1e                       ; 00436d49 | = "torso"
    PUSH ESI                            ; 00436d4e
    MOV dword ptr [EBX + 0x10b60],EAX   ; 00436d4f
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00436d55
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00436d5a
    PUSH 0x1                            ; 00436d5d
    PUSH 0x5cdd24                       ; 00436d5f | = "lforearm"
    PUSH ESI                            ; 00436d64
    MOV dword ptr [EBX + 0x10b64],EAX   ; 00436d65
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00436d6b
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00436d70
    PUSH 0x1                            ; 00436d73
    PUSH 0x5cdd2d                       ; 00436d75 | DAT_005cdd2d
    PUSH ESI                            ; 00436d7a
    MOV dword ptr [EBX + 0x10b68],EAX   ; 00436d7b
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00436d81
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00436d86
    MOV dword ptr [EBX + 0x10b6c],EAX   ; 00436d89
    POP EDI                             ; 00436d8f
    PUSH 0x1                            ; 00436d90
    PUSH 0x5cdd32                       ; 00436d92 | = "rforearm"
    PUSH ESI                            ; 00436d97
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00436d98
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00436d9d
    PUSH 0x1                            ; 00436da0
    PUSH 0x5cdd3b                       ; 00436da2 | DAT_005cdd3b
    PUSH ESI                            ; 00436da7
    MOV dword ptr [EBX + 0x10b70],EAX   ; 00436da8
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00436dae
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00436db3
    PUSH 0x1                            ; 00436db6
    PUSH 0x5cdd40                       ; 00436db8 | = "waist"
    PUSH ESI                            ; 00436dbd
    MOV dword ptr [EBX + 0x10b74],EAX   ; 00436dbe
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00436dc4
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00436dc9
    PUSH 0x1                            ; 00436dcc
    PUSH 0x5cdd46                       ; 00436dce | = "lthigh"
    PUSH ESI                            ; 00436dd3
    MOV dword ptr [EBX + 0x10b78],EAX   ; 00436dd4
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00436dda
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00436ddf
    PUSH 0x1                            ; 00436de2
    PUSH 0x5cdd4d                       ; 00436de4 | = "lshin"
    PUSH ESI                            ; 00436de9
    MOV dword ptr [EBX + 0x10b80],EAX   ; 00436dea
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00436df0
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00436df5
    PUSH 0x1                            ; 00436df8
    PUSH 0x5cdd53                       ; 00436dfa | = "rthigh"
    PUSH ESI                            ; 00436dff
    MOV dword ptr [EBX + 0x10b84],EAX   ; 00436e00
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00436e06
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00436e0b
    PUSH 0x1                            ; 00436e0e
    PUSH 0x5cdd5a                       ; 00436e10 | = "rshin"
    PUSH ESI                            ; 00436e15
    MOV dword ptr [EBX + 0x10b88],EAX   ; 00436e16
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00436e1c
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [EBX + 0x10b5c],0x0   ; 00436e21
    ADD ESP,0xc                         ; 00436e2b
    MOV dword ptr [EBX + 0x10b8c],EAX   ; 00436e2e
    POP ESI                             ; 00436e34
    POP EBX                             ; 00436e35
    RET                                 ; 00436e36

