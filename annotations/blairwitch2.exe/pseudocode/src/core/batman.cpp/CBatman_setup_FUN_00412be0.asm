; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batman_cpp_CBatman_setup_FUN_00412be0(CBatman *this_ptr)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005cb976
;   TerminatedCString s_Bip01_L_ForeArm_005cb981
;   TerminatedCString s_Bip01_R_ForeArm_005cb991
;   TerminatedCString s_Bip01_L_UpperArm_005cb9a1
;   TerminatedCString s_Bip01_R_UpperArm_005cb9b2
;   TerminatedCString s_Bip01_L_Foot_005cb9c3
;   TerminatedCString s_Bip01_R_Foot_005cb9d0
;   TerminatedCString s_Bip01_L_Hand_005cb9dd
;   TerminatedCString s_Bip01_R_Hand_005cb9ea
;   TerminatedCString s_Bip01_Spine_005cb9f7
;   TerminatedCString s_Bip01_Spine1_005cba03
;   TerminatedCString s_Bip01_Spine2_005cba10
;   TerminatedCString s_Bip01_Head_005cba1d
;   TerminatedCString s_Bip01_L_UpperArm_005cba28
;   TerminatedCString s_Bip01_R_UpperArm_005cba39
;   ... and 28 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00487eb0
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412be0
        ;   Label: core_batman.cpp_CBatman_setup_FUN_00412be0
    PUSH ESI                            ; 00412be1
    PUSH EDI                            ; 00412be2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00412be3
    PUSH ESI                            ; 00412be7
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 00412be8
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00412bed
    LEA EDI,[ESI + 0x2b4]               ; 00412bf0
    PUSH EDI                            ; 00412bf6
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 00412bf7
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00412bfc
    PUSH EDI                            ; 00412bff
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00412c00
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00412c05
    PUSH 0x1                            ; 00412c08
    PUSH 0x5cb976                       ; 00412c0a | = "Bip01 Head"
    PUSH EAX                            ; 00412c0f
    MOV EBX,EAX                         ; 00412c10
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00412c12
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412c17
    PUSH 0x1                            ; 00412c1a
    PUSH 0x5cb981                       ; 00412c1c | = "Bip01 L ForeArm"
    PUSH EBX                            ; 00412c21
    MOV [0x007bc7b8],EAX                ; 00412c22 | DAT_007bc7b8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00412c27
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412c2c
    PUSH 0x1                            ; 00412c2f
    PUSH 0x5cb991                       ; 00412c31 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 00412c36
    MOV [0x007bc7c4],EAX                ; 00412c37 | DAT_007bc7c4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00412c3c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412c41
    PUSH 0x1                            ; 00412c44
    PUSH 0x5cb9a1                       ; 00412c46 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 00412c4b
    MOV [0x007bc7c8],EAX                ; 00412c4c | DAT_007bc7c8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00412c51
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412c56
    PUSH 0x1                            ; 00412c59
    PUSH 0x5cb9b2                       ; 00412c5b | = "Bip01 R UpperArm"
    PUSH EBX                            ; 00412c60
    MOV [0x007bc7cc],EAX                ; 00412c61 | DAT_007bc7cc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00412c66
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412c6b
    PUSH 0x1                            ; 00412c6e
    PUSH 0x5cb9c3                       ; 00412c70 | = "Bip01 L Foot"
    PUSH EBX                            ; 00412c75
    MOV [0x007bc7d0],EAX                ; 00412c76 | DAT_007bc7d0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00412c7b
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412c80
    PUSH 0x1                            ; 00412c83
    PUSH 0x5cb9d0                       ; 00412c85 | = "Bip01 R Foot"
    PUSH EBX                            ; 00412c8a
    MOV [0x007bc7d4],EAX                ; 00412c8b | DAT_007bc7d4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00412c90
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412c95
    PUSH 0x1                            ; 00412c98
    PUSH 0x5cb9dd                       ; 00412c9a | = "Bip01 L Hand"
    PUSH EBX                            ; 00412c9f
    MOV [0x007bc7d8],EAX                ; 00412ca0 | DAT_007bc7d8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00412ca5
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412caa
    MOV [0x007bc7bc],EAX                ; 00412cad | DAT_007bc7bc
    PUSH 0x1                            ; 00412cb2
    PUSH 0x5cb9ea                       ; 00412cb4 | = "Bip01 R Hand"
    PUSH EBX                            ; 00412cb9
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00412cba
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412cbf
    PUSH 0x1                            ; 00412cc2
    PUSH 0x5cb9f7                       ; 00412cc4 | = "Bip01 Spine"
    PUSH EBX                            ; 00412cc9
    MOV [0x007bc7c0],EAX                ; 00412cca | DAT_007bc7c0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00412ccf
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412cd4
    PUSH 0x1                            ; 00412cd7
    PUSH 0x5cba03                       ; 00412cd9 | = "Bip01 Spine1"
    PUSH EBX                            ; 00412cde
    MOV [0x007bc7dc],EAX                ; 00412cdf | DAT_007bc7dc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00412ce4
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412ce9
    PUSH 0x1                            ; 00412cec
    PUSH 0x5cba10                       ; 00412cee | = "Bip01 Spine2"
    PUSH EBX                            ; 00412cf3
    MOV [0x007bc7e0],EAX                ; 00412cf4 | DAT_007bc7e0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00412cf9
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412cfe
    PUSH 0x1                            ; 00412d01
    PUSH 0x5cba1d                       ; 00412d03 | = "Bip01 Head"
    PUSH EBX                            ; 00412d08
    MOV [0x007bc7e4],EAX                ; 00412d09 | DAT_007bc7e4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00412d0e
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412d13
    PUSH 0x1                            ; 00412d16
    PUSH 0x5cba28                       ; 00412d18 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 00412d1d
    MOV [0x007bc7b8],EAX                ; 00412d1e | DAT_007bc7b8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00412d23
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412d28
    PUSH 0x1                            ; 00412d2b
    PUSH 0x5cba39                       ; 00412d2d | = "Bip01 R UpperArm"
    PUSH EBX                            ; 00412d32
    MOV [0x007bc7cc],EAX                ; 00412d33 | DAT_007bc7cc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00412d38
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412d3d
    PUSH 0x1                            ; 00412d40
    PUSH 0x5cba4a                       ; 00412d42 | = "Bip01 Spine"
    PUSH EBX                            ; 00412d47
    MOV [0x007bc7d0],EAX                ; 00412d48 | DAT_007bc7d0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00412d4d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412d52
    PUSH 0x1                            ; 00412d55
    PUSH 0x5cba56                       ; 00412d57 | = "Bip01 Spine2"
    PUSH EBX                            ; 00412d5c
    MOV [0x007bc7dc],EAX                ; 00412d5d | DAT_007bc7dc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00412d62
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00412d67
    PUSH EDI                            ; 00412d6a
    MOV [0x007bc7e4],EAX                ; 00412d6b | DAT_007bc7e4
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 00412d70
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    MOV EBX,EAX                         ; 00412d75
    ADD ESP,0x4                         ; 00412d77
    PUSH 0x1                            ; 00412d7a
    PUSH 0x5cba63                       ; 00412d7c | = "head01"
    PUSH EAX                            ; 00412d81
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00412d82
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412d87
    PUSH 0x1                            ; 00412d8a
    PUSH 0x5cba6a                       ; 00412d8c | = "torso01"
    PUSH EBX                            ; 00412d91
    MOV dword ptr [ESI + 0x10b5c],EAX   ; 00412d92
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00412d98
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412d9d
    PUSH 0x1                            ; 00412da0
    PUSH 0x5cba72                       ; 00412da2 | = "larm01"
    PUSH EBX                            ; 00412da7
    MOV dword ptr [ESI + 0x10b60],EAX   ; 00412da8
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00412dae
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412db3
    PUSH 0x1                            ; 00412db6
    PUSH 0x5cba79                       ; 00412db8 | = "l4arm01"
    PUSH EBX                            ; 00412dbd
    MOV dword ptr [ESI + 0x10b64],EAX   ; 00412dbe
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00412dc4
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412dc9
    PUSH 0x1                            ; 00412dcc
    PUSH 0x5cba81                       ; 00412dce | = "rarm01"
    PUSH EBX                            ; 00412dd3
    MOV dword ptr [ESI + 0x10b68],EAX   ; 00412dd4
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00412dda
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412ddf
    PUSH 0x1                            ; 00412de2
    PUSH 0x5cba88                       ; 00412de4 | = "r4arm01"
    PUSH EBX                            ; 00412de9
    MOV dword ptr [ESI + 0x10b6c],EAX   ; 00412dea
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00412df0
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412df5
    PUSH 0x1                            ; 00412df8
    PUSH 0x5cba90                       ; 00412dfa | = "ass01"
    PUSH EBX                            ; 00412dff
    MOV dword ptr [ESI + 0x10b70],EAX   ; 00412e00
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00412e06
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412e0b
    PUSH 0x1                            ; 00412e0e
    PUSH 0x5cba96                       ; 00412e10 | = "tail01"
    PUSH EBX                            ; 00412e15
    MOV dword ptr [ESI + 0x10b74],EAX   ; 00412e16
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00412e1c
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412e21
    PUSH 0x1                            ; 00412e24
    PUSH 0x5cba9d                       ; 00412e26 | = "lthigh01"
    PUSH EBX                            ; 00412e2b
    MOV dword ptr [ESI + 0x10b78],EAX   ; 00412e2c
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00412e32
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412e37
    MOV dword ptr [ESI + 0x10b7c],EAX   ; 00412e3a
    PUSH 0x1                            ; 00412e40
    PUSH 0x5cbaa6                       ; 00412e42 | = "lshin01"
    PUSH EBX                            ; 00412e47
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00412e48
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412e4d
    PUSH 0x1                            ; 00412e50
    PUSH 0x5cbaae                       ; 00412e52 | = "rthigh01"
    PUSH EBX                            ; 00412e57
    MOV dword ptr [ESI + 0x10b80],EAX   ; 00412e58
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00412e5e
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412e63
    PUSH 0x1                            ; 00412e66
    PUSH 0x5cbab7                       ; 00412e68 | = "rshin01"
    PUSH EBX                            ; 00412e6d
    MOV dword ptr [ESI + 0x10b84],EAX   ; 00412e6e
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00412e74
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412e79
    PUSH 0x1                            ; 00412e7c
    PUSH 0x5cbabf                       ; 00412e7e | = "lfoot01"
    PUSH EBX                            ; 00412e83
    MOV dword ptr [ESI + 0x10b88],EAX   ; 00412e84
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00412e8a
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412e8f
    PUSH 0x1                            ; 00412e92
    PUSH 0x5cbac7                       ; 00412e94 | = "rfoot01"
    PUSH EBX                            ; 00412e99
    MOV dword ptr [ESI + 0x10b8c],EAX   ; 00412e9a
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00412ea0
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00412ea5
    MOV dword ptr [ESI + 0x10b90],EAX   ; 00412ea8
    POP EDI                             ; 00412eae
    POP ESI                             ; 00412eaf
    POP EBX                             ; 00412eb0
    RET                                 ; 00412eb1

