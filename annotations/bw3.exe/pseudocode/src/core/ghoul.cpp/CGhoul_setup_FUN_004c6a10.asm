; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_CGhoul_setup_FUN_004c6a10(CGhoul *this_ptr)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_Bip01_Head_005c4064+1
;   TerminatedCString s_Bip01_L_ForeArm_005c4070
;   TerminatedCString s_Bip01_R_ForeArm_005c4080
;   TerminatedCString s_Bip01_L_UpperArm_005c4090
;   TerminatedCString s_Bip01_R_UpperArm_005c40a1
;   TerminatedCString s_Bip01_L_Foot_005c40b2
;   TerminatedCString s_Bip01_R_Foot_005c40bf
;   TerminatedCString s_Bip01_L_Hand_005c40cc
;   TerminatedCString s_Bip01_R_Hand_005c40d9
;   TerminatedCString s_Bip01_Spine_005c40e6
;   TerminatedCString s_Bip01_Spine2_005c40f2
;   TerminatedCString s_r_high_arm01_005c40ff
;   TerminatedCString s_r_lo_arm01_005c410c
;   TerminatedCString s_l_high_arm01_005c4117
;   TerminatedCString s_l_lo_arm01_005c4124
;   ... and 18 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00489110
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00548090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6a10
        ;   Label: core_ghoul.cpp_CGhoul_setup_FUN_004c6a10
    PUSH ESI                            ; 004c6a11
    MOV EBX,dword ptr [ESP + 0xc]       ; 004c6a12
    PUSH EDI                            ; 004c6a16
    LEA EDI,[EBX + 0x158]               ; 004c6a17
    PUSH EDI                            ; 004c6a1d
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 ; 004c6a1e
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c6a23
    PUSH EDI                            ; 004c6a26
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 004c6a27
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c6a2c
    PUSH 0x1                            ; 004c6a2f
    PUSH 0x5c4065                       ; 004c6a31 | s_Bip01_Head_005c4064+1
    PUSH EAX                            ; 004c6a36
    MOV ESI,EAX                         ; 004c6a37
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c6a39
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c6a3e
    PUSH 0x1                            ; 004c6a41
    PUSH 0x5c4070                       ; 004c6a43 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 004c6a48
    MOV [0x01d22da0],EAX                ; 004c6a49 | DAT_01d22da0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c6a4e
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c6a53
    PUSH 0x1                            ; 004c6a56
    PUSH 0x5c4080                       ; 004c6a58 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 004c6a5d
    MOV [0x01d22dac],EAX                ; 004c6a5e | DAT_01d22dac
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c6a63
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c6a68
    PUSH 0x1                            ; 004c6a6b
    PUSH 0x5c4090                       ; 004c6a6d | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004c6a72
    MOV [0x01d22db0],EAX                ; 004c6a73 | DAT_01d22db0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c6a78
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c6a7d
    PUSH 0x1                            ; 004c6a80
    PUSH 0x5c40a1                       ; 004c6a82 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004c6a87
    MOV [0x01d22db4],EAX                ; 004c6a88 | DAT_01d22db4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c6a8d
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c6a92
    PUSH 0x1                            ; 004c6a95
    PUSH 0x5c40b2                       ; 004c6a97 | = "Bip01 L Foot"
    PUSH ESI                            ; 004c6a9c
    MOV [0x01d22db8],EAX                ; 004c6a9d | DAT_01d22db8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c6aa2
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c6aa7
    PUSH 0x1                            ; 004c6aaa
    PUSH 0x5c40bf                       ; 004c6aac | = "Bip01 R Foot"
    PUSH ESI                            ; 004c6ab1
    MOV [0x01d22dbc],EAX                ; 004c6ab2 | DAT_01d22dbc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c6ab7
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c6abc
    PUSH 0x1                            ; 004c6abf
    PUSH 0x5c40cc                       ; 004c6ac1 | = "Bip01 L Hand"
    PUSH ESI                            ; 004c6ac6
    MOV [0x01d22dc0],EAX                ; 004c6ac7 | DAT_01d22dc0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c6acc
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c6ad1
    PUSH 0x1                            ; 004c6ad4
    PUSH 0x5c40d9                       ; 004c6ad6 | = "Bip01 R Hand"
    PUSH ESI                            ; 004c6adb
    MOV [0x01d22da4],EAX                ; 004c6adc | DAT_01d22da4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c6ae1
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c6ae6
    MOV [0x01d22da8],EAX                ; 004c6ae9 | DAT_01d22da8
    PUSH 0x1                            ; 004c6aee
    PUSH 0x5c40e6                       ; 004c6af0 | = "Bip01 Spine"
    PUSH ESI                            ; 004c6af5
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c6af6
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c6afb
    PUSH 0x1                            ; 004c6afe
    PUSH 0x5c40f2                       ; 004c6b00 | = "Bip01 Spine2"
    PUSH ESI                            ; 004c6b05
    MOV [0x01d22dc4],EAX                ; 004c6b06 | DAT_01d22dc4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c6b0b
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c6b10
    PUSH EDI                            ; 004c6b13
    MOV [0x01d22dc8],EAX                ; 004c6b14 | DAT_01d22dc8
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 004c6b19
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c6b1e
    PUSH 0x1                            ; 004c6b21
    PUSH 0x5c40ff                       ; 004c6b23 | = "r high arm01"
    PUSH EAX                            ; 004c6b28
    MOV ESI,EAX                         ; 004c6b29
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c6b2b
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c6b30
    PUSH 0x1                            ; 004c6b33
    PUSH 0x5c410c                       ; 004c6b35 | = "r lo arm01"
    PUSH ESI                            ; 004c6b3a
    MOV dword ptr [EBX + 0xd078],EAX    ; 004c6b3b
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c6b41
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c6b46
    PUSH 0x1                            ; 004c6b49
    PUSH 0x5c4117                       ; 004c6b4b | = "l high arm01"
    PUSH ESI                            ; 004c6b50
    MOV dword ptr [EBX + 0xd07c],EAX    ; 004c6b51
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c6b57
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c6b5c
    PUSH 0x1                            ; 004c6b5f
    PUSH 0x5c4124                       ; 004c6b61 | = "l lo arm01"
    PUSH ESI                            ; 004c6b66
    MOV dword ptr [EBX + 0xd080],EAX    ; 004c6b67
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c6b6d
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c6b72
    PUSH 0x1                            ; 004c6b75
    PUSH 0x5c412f                       ; 004c6b77 | = "r thigh01"
    PUSH ESI                            ; 004c6b7c
    MOV dword ptr [EBX + 0xd084],EAX    ; 004c6b7d
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c6b83
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c6b88
    PUSH 0x1                            ; 004c6b8b
    PUSH 0x5c4139                       ; 004c6b8d | = "r shin01"
    PUSH ESI                            ; 004c6b92
    MOV dword ptr [EBX + 0xd088],EAX    ; 004c6b93
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c6b99
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c6b9e
    PUSH 0x1                            ; 004c6ba1
    PUSH 0x5c4142                       ; 004c6ba3 | = "l thigh01"
    PUSH ESI                            ; 004c6ba8
    MOV dword ptr [EBX + 0xd08c],EAX    ; 004c6ba9
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c6baf
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c6bb4
    MOV dword ptr [EBX + 0xd090],EAX    ; 004c6bb7
    POP EDI                             ; 004c6bbd
    PUSH 0x1                            ; 004c6bbe
    PUSH 0x5c414c                       ; 004c6bc0 | = "l shin01"
    PUSH ESI                            ; 004c6bc5
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c6bc6
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c6bcb
    PUSH 0x1                            ; 004c6bce
    PUSH 0x5c4155                       ; 004c6bd0 | = "lo torso01"
    PUSH ESI                            ; 004c6bd5
    MOV dword ptr [EBX + 0xd094],EAX    ; 004c6bd6
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c6bdc
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c6be1
    PUSH 0x1                            ; 004c6be4
    PUSH 0x5c4160                       ; 004c6be6 | = "high torso01"
    PUSH ESI                            ; 004c6beb
    MOV dword ptr [EBX + 0xd098],EAX    ; 004c6bec
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c6bf2
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c6bf7
    PUSH 0x1                            ; 004c6bfa
    PUSH 0x5c416d                       ; 004c6bfc | = "head01"
    PUSH ESI                            ; 004c6c01
    MOV dword ptr [EBX + 0xd09c],EAX    ; 004c6c02
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c6c08
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c6c0d
    PUSH EBX                            ; 004c6c10
    MOV dword ptr [EBX + 0xd0a0],EAX    ; 004c6c11
    CALL core_enemy.cpp_CEnemy_setup_FUN_00489110 ; 004c6c17
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00489110(CEnemy * this_ptr)
    MOV dword ptr [EBX + 0xd0b0],0x0    ; 004c6c1c
    MOV dword ptr [EBX + 0xd0b4],0x0    ; 004c6c26
    MOV dword ptr [EBX + 0xd0b8],0x0    ; 004c6c30
    MOV dword ptr [EBX + 0xd0bc],0x0    ; 004c6c3a
    MOV dword ptr [EBX + 0xd0c0],0x0    ; 004c6c44
    MOV dword ptr [EBX + 0xd0a4],0x0    ; 004c6c4e
    MOV dword ptr [EBX + 0xd0a8],0x0    ; 004c6c58
    ADD ESP,0x4                         ; 004c6c62
    MOV dword ptr [EBX + 0xd0ac],0x0    ; 004c6c65
    POP ESI                             ; 004c6c6f
    POP EBX                             ; 004c6c70
    RET                                 ; 004c6c71

