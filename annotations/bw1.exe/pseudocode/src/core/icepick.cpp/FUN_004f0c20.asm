; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_icepick_cpp_FUN_004f0c20(CHero *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_005e5264
;   TerminatedCString s_Bip01_L_Clavicle_005e526f
;   TerminatedCString s_Bip01_R_Clavicle_005e5280
;   TerminatedCString s_Bip01_L_UpperArm_005e5291
;   TerminatedCString s_Bip01_R_UpperArm_005e52a2
;   TerminatedCString s_Bip01_L_ForeArm_005e52b3
;   TerminatedCString s_Bip01_R_ForeArm_005e52c3
;   TerminatedCString s_Bip01_L_Foot_005e52d3
;   TerminatedCString s_Bip01_R_Foot_005e52e0
;   TerminatedCString s_Bip01_L_Thigh_005e52ed
;   TerminatedCString s_Bip01_R_Thigh_005e52fb
;   TerminatedCString s_Bip01_L_Calf_005e5309
;   TerminatedCString s_Bip01_R_Calf_005e5316
;   TerminatedCString s_Bip01_L_Hand_005e5323
;   TerminatedCString s_Bip01_R_Hand_005e5330
;   ... and 22 more
;
; Called Functions:
;   core_hero.cpp_FUN_004eaa10
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0c20
        ;   Label: core_icepick.cpp_FUN_004f0c20
    PUSH ESI                            ; 004f0c21
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f0c22
    PUSH ESI                            ; 004f0c26
    CALL core_hero.cpp_FUN_004eaa10     ; 004f0c27
        ;   XREF to: 004eaa10 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004eaa10(CHero * this_ptr)
    ADD ESP,0x4                         ; 004f0c2c
    LEA EAX,[ESI + 0x158]               ; 004f0c2f
    PUSH EAX                            ; 004f0c35
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 004f0c36
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f0c3b
    PUSH 0x1                            ; 004f0c3e
    PUSH 0x5e5264                       ; 004f0c40 | = "Bip01 head"
    PUSH EAX                            ; 004f0c45
    MOV EBX,EAX                         ; 004f0c46
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004f0c48
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f0c4d
    PUSH 0x1                            ; 004f0c50
    PUSH 0x5e526f                       ; 004f0c52 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 004f0c57
    MOV [0x01d06c74],EAX                ; 004f0c58 | DAT_01d06c74
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004f0c5d
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f0c62
    PUSH 0x1                            ; 004f0c65
    PUSH 0x5e5280                       ; 004f0c67 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 004f0c6c
    MOV [0x01d06c78],EAX                ; 004f0c6d | DAT_01d06c78
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004f0c72
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f0c77
    PUSH 0x1                            ; 004f0c7a
    PUSH 0x5e5291                       ; 004f0c7c | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004f0c81
    MOV [0x01d06c7c],EAX                ; 004f0c82 | DAT_01d06c7c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004f0c87
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f0c8c
    PUSH 0x1                            ; 004f0c8f
    PUSH 0x5e52a2                       ; 004f0c91 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004f0c96
    MOV [0x01d06c80],EAX                ; 004f0c97 | DAT_01d06c80
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004f0c9c
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f0ca1
    PUSH 0x1                            ; 004f0ca4
    PUSH 0x5e52b3                       ; 004f0ca6 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004f0cab
    MOV [0x01d06c84],EAX                ; 004f0cac | DAT_01d06c84
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004f0cb1
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f0cb6
    PUSH 0x1                            ; 004f0cb9
    PUSH 0x5e52c3                       ; 004f0cbb | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004f0cc0
    MOV [0x01d06c88],EAX                ; 004f0cc1 | DAT_01d06c88
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004f0cc6
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f0ccb
    PUSH 0x1                            ; 004f0cce
    PUSH 0x5e52d3                       ; 004f0cd0 | = "Bip01 L Foot"
    PUSH EBX                            ; 004f0cd5
    MOV [0x01d06c8c],EAX                ; 004f0cd6 | DAT_01d06c8c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004f0cdb
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f0ce0
    PUSH 0x1                            ; 004f0ce3
    PUSH 0x5e52e0                       ; 004f0ce5 | = "Bip01 R Foot"
    PUSH EBX                            ; 004f0cea
    MOV [0x01d06c90],EAX                ; 004f0ceb | DAT_01d06c90
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004f0cf0
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f0cf5
    MOV [0x01d06c94],EAX                ; 004f0cf8 | DAT_01d06c94
    PUSH 0x1                            ; 004f0cfd
    PUSH 0x5e52ed                       ; 004f0cff | = "Bip01 L Thigh"
    PUSH EBX                            ; 004f0d04
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004f0d05
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f0d0a
    PUSH 0x1                            ; 004f0d0d
    PUSH 0x5e52fb                       ; 004f0d0f | = "Bip01 R Thigh"
    PUSH EBX                            ; 004f0d14
    MOV [0x01d06c98],EAX                ; 004f0d15 | DAT_01d06c98
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004f0d1a
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f0d1f
    PUSH 0x1                            ; 004f0d22
    PUSH 0x5e5309                       ; 004f0d24 | = "Bip01 L Calf"
    PUSH EBX                            ; 004f0d29
    MOV [0x01d06c9c],EAX                ; 004f0d2a | DAT_01d06c9c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004f0d2f
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f0d34
    PUSH 0x1                            ; 004f0d37
    PUSH 0x5e5316                       ; 004f0d39 | = "Bip01 R Calf"
    PUSH EBX                            ; 004f0d3e
    MOV [0x01d06ca0],EAX                ; 004f0d3f | DAT_01d06ca0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004f0d44
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f0d49
    PUSH 0x1                            ; 004f0d4c
    PUSH 0x5e5323                       ; 004f0d4e | = "Bip01 L Hand"
    PUSH EBX                            ; 004f0d53
    MOV [0x01d06ca4],EAX                ; 004f0d54 | DAT_01d06ca4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004f0d59
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f0d5e
    PUSH 0x1                            ; 004f0d61
    PUSH 0x5e5330                       ; 004f0d63 | = "Bip01 R Hand"
    PUSH EBX                            ; 004f0d68
    MOV [0x01d06ca8],EAX                ; 004f0d69 | DAT_01d06ca8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004f0d6e
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f0d73
    PUSH 0x1                            ; 004f0d76
    PUSH 0x5e533d                       ; 004f0d78 | = "Bip01 Spine2"
    PUSH EBX                            ; 004f0d7d
    MOV [0x01d06cac],EAX                ; 004f0d7e | DAT_01d06cac
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004f0d83
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f0d88
    PUSH 0x1                            ; 004f0d8b
    PUSH 0x5e534a                       ; 004f0d8d | = "Bip01 Spine1"
    PUSH EBX                            ; 004f0d92
    MOV [0x01d06cb0],EAX                ; 004f0d93 | DAT_01d06cb0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004f0d98
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f0d9d
    PUSH 0x1                            ; 004f0da0
    PUSH 0x5e5357                       ; 004f0da2 | = "Bip01 Spine"
    PUSH EBX                            ; 004f0da7
    MOV [0x01d06cb4],EAX                ; 004f0da8 | DAT_01d06cb4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004f0dad
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV dword ptr [ESI + 0x25ac],0x0    ; 004f0db2
    MOV dword ptr [ESI + 0x2624],0x0    ; 004f0dbc
    MOV [0x01d06cb8],EAX                ; 004f0dc6 | DAT_01d06cb8
    MOV dword ptr [ESI + 0x1ffac],0x0   ; 004f0dcb
    MOV EAX,[0x01d06ca8]                ; 004f0dd5 | DAT_01d06ca8
    MOV dword ptr [ESI + 0x25a8],EAX    ; 004f0dda
    MOV EAX,[0x01d06cac]                ; 004f0de0 | DAT_01d06cac
    MOV dword ptr [ESI + 0x2620],EAX    ; 004f0de5
    MOV EAX,[0x01d06ab4]                ; 004f0deb | DAT_01d06ab4
    MOV dword ptr [ESI + 0x1ffd0],0x0   ; 004f0df0
    MOV EDX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004f0dfa
    ADD ESP,0xc                         ; 004f0e01
    CMP ESI,EDX                         ; 004f0e04
    JZ 0x004f0e29                       ; 004f0e06
        ;   XREF to: 004f0e29 (CONDITIONAL_JUMP)  ; LAB_004f0e29
    MOV dword ptr [ESI + 0x1ffb8],0x0   ; 004f0e08
        ;   Label: LAB_004f0e08
    MOV dword ptr [ESI + 0x1ffb4],0x0   ; 004f0e12
    MOV dword ptr [ESI + 0x1ffd8],0x0   ; 004f0e1c
    POP ESI                             ; 004f0e26
    POP EBX                             ; 004f0e27
    RET                                 ; 004f0e28
    MOV dword ptr [EDX + 0x2ff0],0x3fc00000 ; 004f0e29
        ;   Label: LAB_004f0e29
    JMP 0x004f0e08                      ; 004f0e33
        ;   XREF to: 004f0e08 (UNCONDITIONAL_JUMP)  ; LAB_004f0e08

