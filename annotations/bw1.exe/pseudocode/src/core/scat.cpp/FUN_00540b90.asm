; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_scat_cpp_FUN_00540b90(CHero *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_005edcfd
;   TerminatedCString s_Bip01_L_Clavicle_005edd08
;   TerminatedCString s_Bip01_R_Clavicle_005edd19
;   TerminatedCString s_Bip01_L_UpperArm_005edd2a
;   TerminatedCString s_Bip01_R_UpperArm_005edd3b
;   TerminatedCString s_Bip01_L_ForeArm_005edd4c
;   TerminatedCString s_Bip01_R_ForeArm_005edd5c
;   TerminatedCString s_Bip01_L_Foot_005edd6c
;   TerminatedCString s_Bip01_R_Foot_005edd79
;   TerminatedCString s_Bip01_L_Thigh_005edd86
;   TerminatedCString s_Bip01_R_Thigh_005edd94
;   TerminatedCString s_Bip01_L_Calf_005edda2
;   TerminatedCString s_Bip01_R_Calf_005eddaf
;   TerminatedCString s_Bip01_L_Hand_005eddbc
;   TerminatedCString s_Bip01_R_Hand_005eddc9
;   ... and 22 more
;
; Called Functions:
;   core_hero.cpp_FUN_004eaa10
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540b90
        ;   Label: core_scat.cpp_FUN_00540b90
    PUSH ESI                            ; 00540b91
    MOV ESI,dword ptr [ESP + 0xc]       ; 00540b92
    PUSH ESI                            ; 00540b96
    CALL core_hero.cpp_FUN_004eaa10     ; 00540b97
        ;   XREF to: 004eaa10 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004eaa10(CHero * this_ptr)
    ADD ESP,0x4                         ; 00540b9c
    LEA EAX,[ESI + 0x158]               ; 00540b9f
    PUSH EAX                            ; 00540ba5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 00540ba6
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00540bab
    PUSH 0x1                            ; 00540bae
    PUSH 0x5edcfd                       ; 00540bb0 | = "Bip01 head"
    PUSH EAX                            ; 00540bb5
    MOV EBX,EAX                         ; 00540bb6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00540bb8
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00540bbd
    PUSH 0x1                            ; 00540bc0
    PUSH 0x5edd08                       ; 00540bc2 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 00540bc7
    MOV [0x01e7e014],EAX                ; 00540bc8 | DAT_01e7e014
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00540bcd
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00540bd2
    PUSH 0x1                            ; 00540bd5
    PUSH 0x5edd19                       ; 00540bd7 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 00540bdc
    MOV [0x01e7e018],EAX                ; 00540bdd | DAT_01e7e018
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00540be2
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00540be7
    PUSH 0x1                            ; 00540bea
    PUSH 0x5edd2a                       ; 00540bec | = "Bip01 L UpperArm"
    PUSH EBX                            ; 00540bf1
    MOV [0x01e7e01c],EAX                ; 00540bf2 | DAT_01e7e01c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00540bf7
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00540bfc
    PUSH 0x1                            ; 00540bff
    PUSH 0x5edd3b                       ; 00540c01 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 00540c06
    MOV [0x01e7e020],EAX                ; 00540c07 | DAT_01e7e020
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00540c0c
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00540c11
    PUSH 0x1                            ; 00540c14
    PUSH 0x5edd4c                       ; 00540c16 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 00540c1b
    MOV [0x01e7e024],EAX                ; 00540c1c | DAT_01e7e024
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00540c21
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00540c26
    PUSH 0x1                            ; 00540c29
    PUSH 0x5edd5c                       ; 00540c2b | = "Bip01 R ForeArm"
    PUSH EBX                            ; 00540c30
    MOV [0x01e7e028],EAX                ; 00540c31 | DAT_01e7e028
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00540c36
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00540c3b
    PUSH 0x1                            ; 00540c3e
    PUSH 0x5edd6c                       ; 00540c40 | = "Bip01 L Foot"
    PUSH EBX                            ; 00540c45
    MOV [0x01e7e02c],EAX                ; 00540c46 | DAT_01e7e02c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00540c4b
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00540c50
    PUSH 0x1                            ; 00540c53
    PUSH 0x5edd79                       ; 00540c55 | = "Bip01 R Foot"
    PUSH EBX                            ; 00540c5a
    MOV [0x01e7e030],EAX                ; 00540c5b | DAT_01e7e030
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00540c60
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00540c65
    MOV [0x01e7e034],EAX                ; 00540c68 | DAT_01e7e034
    PUSH 0x1                            ; 00540c6d
    PUSH 0x5edd86                       ; 00540c6f | = "Bip01 L Thigh"
    PUSH EBX                            ; 00540c74
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00540c75
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00540c7a
    PUSH 0x1                            ; 00540c7d
    PUSH 0x5edd94                       ; 00540c7f | = "Bip01 R Thigh"
    PUSH EBX                            ; 00540c84
    MOV [0x01e7e038],EAX                ; 00540c85 | DAT_01e7e038
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00540c8a
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00540c8f
    PUSH 0x1                            ; 00540c92
    PUSH 0x5edda2                       ; 00540c94 | = "Bip01 L Calf"
    PUSH EBX                            ; 00540c99
    MOV [0x01e7e03c],EAX                ; 00540c9a | DAT_01e7e03c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00540c9f
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00540ca4
    PUSH 0x1                            ; 00540ca7
    PUSH 0x5eddaf                       ; 00540ca9 | = "Bip01 R Calf"
    PUSH EBX                            ; 00540cae
    MOV [0x01e7e040],EAX                ; 00540caf | DAT_01e7e040
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00540cb4
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00540cb9
    PUSH 0x1                            ; 00540cbc
    PUSH 0x5eddbc                       ; 00540cbe | = "Bip01 L Hand"
    PUSH EBX                            ; 00540cc3
    MOV [0x01e7e044],EAX                ; 00540cc4 | DAT_01e7e044
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00540cc9
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00540cce
    PUSH 0x1                            ; 00540cd1
    PUSH 0x5eddc9                       ; 00540cd3 | = "Bip01 R Hand"
    PUSH EBX                            ; 00540cd8
    MOV [0x01e7e048],EAX                ; 00540cd9 | DAT_01e7e048
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00540cde
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00540ce3
    PUSH 0x1                            ; 00540ce6
    PUSH 0x5eddd6                       ; 00540ce8 | = "Bip01 Spine2"
    PUSH EBX                            ; 00540ced
    MOV [0x01e7e04c],EAX                ; 00540cee | DAT_01e7e04c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00540cf3
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00540cf8
    PUSH 0x1                            ; 00540cfb
    PUSH 0x5edde3                       ; 00540cfd | = "Bip01 Spine"
    PUSH EBX                            ; 00540d02
    MOV [0x01e7e050],EAX                ; 00540d03 | DAT_01e7e050
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00540d08
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00540d0d
    PUSH 0x1                            ; 00540d10
    PUSH 0x5eddef                       ; 00540d12 | = "Bip01 Spine1"
    PUSH EBX                            ; 00540d17
    MOV [0x01e7e058],EAX                ; 00540d18 | DAT_01e7e058
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00540d1d
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00540d22
    PUSH 0x1                            ; 00540d25
    PUSH 0x5eddfc                       ; 00540d27 | = "Bip01 Spine1"
    PUSH EBX                            ; 00540d2c
    MOV [0x01e7e054],EAX                ; 00540d2d | DAT_01e7e054
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00540d32
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV dword ptr [ESI + 0x1ffac],0x0   ; 00540d37
    ADD ESP,0xc                         ; 00540d41
    MOV dword ptr [ESI + 0x2750],EAX    ; 00540d44
    POP ESI                             ; 00540d4a
    POP EBX                             ; 00540d4b
    RET                                 ; 00540d4c

