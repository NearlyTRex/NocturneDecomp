; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_constrct_cpp_FUN_004459c0(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_COMBATMODEHARD_005d6d2e
;   TerminatedCString s_Bip01_Head_005d6d3d
;   TerminatedCString s_Dummy05_005d6d48
;   TerminatedCString s_Bip01_L_Forearm_005d6d50
;   TerminatedCString s_Bip01_R_ForeArm_005d6d60
;   TerminatedCString s_Bip01_L_UpperArm_005d6d70
;   TerminatedCString s_Bip01_R_UpperArm_005d6d81
;   TerminatedCString s_Bip01_L_Foot_005d6d92
;   TerminatedCString s_Bip01_R_Foot_005d6d9f
;   TerminatedCString s_Bip01_L_Hand_005d6dac
;   TerminatedCString s_Bip01_R_Hand_005d6db9
;   TerminatedCString s_Bip01_R_Finger0_005d6dc6
;   TerminatedCString s_Bip01_L_Finger0_005d6dd6
;   TerminatedCString s_Bip01_Spine_005d6de6
;   TerminatedCString s_Bip01_Spine1_005d6df2
;   ... and 26 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;   core_skeleton.cpp_FUN_00565780
;   core_skeleton.cpp_FUN_00569b20
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004459c0
        ;   Label: core_constrct.cpp_FUN_004459c0
    PUSH ESI                            ; 004459c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004459c2
    PUSH 0x5d6d2e                       ; 004459c6 | = "COMBATMODEHARD"
    MOV EDX,dword ptr [0x0061b4d0]      ; 004459cb | DAT_0061b4d0
    PUSH EDX                            ; 004459d1
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 004459d2
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004459d7
    TEST EAX,EAX                        ; 004459da
    JNZ 0x00445c52                      ; 004459dc
        ;   XREF to: 00445c52 (CONDITIONAL_JUMP)  ; LAB_00445c52
    MOV dword ptr [EBX + 0xca68],0x3f400000 ; 004459e2
    PUSH EDI                            ; 004459ec
        ;   Label: LAB_004459ec
    PUSH EBX                            ; 004459ed
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 004459ee
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004459f3
    LEA EDI,[EBX + 0x158]               ; 004459f6
    PUSH EDI                            ; 004459fc
    CALL core_skeleton.cpp_FUN_00569b20 ; 004459fd
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00569b20(CDeformableModelInstance * this_ptr)
    FLD float ptr [EBX + 0x2538]        ; 00445a02
    ADD ESP,0x4                         ; 00445a08
    CALL crt_math.c_round_FUN_005c03a0  ; 00445a0b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH EDI                            ; 00445a10
    FISTP dword ptr [EBX + 0xc390]      ; 00445a11
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 00445a17
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00445a1c
    PUSH 0x1                            ; 00445a1f
    PUSH 0x5d6d3d                       ; 00445a21 | = "Bip01 Head"
    PUSH EAX                            ; 00445a26
    MOV ESI,EAX                         ; 00445a27
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00445a29
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00445a2e
    PUSH 0x1                            ; 00445a31
    PUSH 0x5d6d48                       ; 00445a33 | = "Dummy05"
    PUSH ESI                            ; 00445a38
    MOV [0x007dc5b0],EAX                ; 00445a39 | DAT_007dc5b0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00445a3e
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00445a43
    PUSH 0x1                            ; 00445a46
    PUSH 0x5d6d50                       ; 00445a48 | = "Bip01 L Forearm"
    PUSH ESI                            ; 00445a4d
    MOV [0x007dc5b4],EAX                ; 00445a4e | DAT_007dc5b4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00445a53
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00445a58
    PUSH 0x1                            ; 00445a5b
    PUSH 0x5d6d60                       ; 00445a5d | = "Bip01 R ForeArm"
    PUSH ESI                            ; 00445a62
    MOV [0x007dc5c8],EAX                ; 00445a63 | DAT_007dc5c8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00445a68
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00445a6d
    PUSH 0x1                            ; 00445a70
    PUSH 0x5d6d70                       ; 00445a72 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 00445a77
    MOV [0x007dc5cc],EAX                ; 00445a78 | DAT_007dc5cc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00445a7d
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00445a82
    PUSH 0x1                            ; 00445a85
    PUSH 0x5d6d81                       ; 00445a87 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 00445a8c
    MOV [0x007dc5d0],EAX                ; 00445a8d | DAT_007dc5d0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00445a92
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00445a97
    PUSH 0x1                            ; 00445a9a
    PUSH 0x5d6d92                       ; 00445a9c | = "Bip01 L Foot"
    PUSH ESI                            ; 00445aa1
    MOV [0x007dc5d4],EAX                ; 00445aa2 | DAT_007dc5d4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00445aa7
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00445aac
    PUSH 0x1                            ; 00445aaf
    PUSH 0x5d6d9f                       ; 00445ab1 | = "Bip01 R Foot"
    PUSH ESI                            ; 00445ab6
    MOV [0x007dc5d8],EAX                ; 00445ab7 | DAT_007dc5d8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00445abc
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00445ac1
    MOV [0x007dc5dc],EAX                ; 00445ac4 | DAT_007dc5dc
    PUSH 0x1                            ; 00445ac9
    PUSH 0x5d6dac                       ; 00445acb | = "Bip01 L Hand"
    PUSH ESI                            ; 00445ad0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00445ad1
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00445ad6
    PUSH 0x1                            ; 00445ad9
    PUSH 0x5d6db9                       ; 00445adb | = "Bip01 R Hand"
    PUSH ESI                            ; 00445ae0
    MOV [0x007dc5b8],EAX                ; 00445ae1 | DAT_007dc5b8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00445ae6
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00445aeb
    PUSH 0x1                            ; 00445aee
    PUSH 0x5d6dc6                       ; 00445af0 | = "Bip01 R Finger0"
    PUSH ESI                            ; 00445af5
    MOV [0x007dc5bc],EAX                ; 00445af6 | DAT_007dc5bc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00445afb
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00445b00
    PUSH 0x1                            ; 00445b03
    PUSH 0x5d6dd6                       ; 00445b05 | = "Bip01 L Finger0"
    PUSH ESI                            ; 00445b0a
    MOV [0x007dc5c0],EAX                ; 00445b0b | DAT_007dc5c0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00445b10
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00445b15
    PUSH 0x1                            ; 00445b18
    PUSH 0x5d6de6                       ; 00445b1a | = "Bip01 Spine"
    PUSH ESI                            ; 00445b1f
    MOV [0x007dc5c4],EAX                ; 00445b20 | DAT_007dc5c4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00445b25
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00445b2a
    PUSH 0x1                            ; 00445b2d
    PUSH 0x5d6df2                       ; 00445b2f | = "Bip01 Spine1"
    PUSH ESI                            ; 00445b34
    MOV [0x007dc5e0],EAX                ; 00445b35 | DAT_007dc5e0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00445b3a
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00445b3f
    PUSH EDI                            ; 00445b42
    MOV [0x007dc5e4],EAX                ; 00445b43 | DAT_007dc5e4
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 00445b48
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00445b4d
    PUSH 0x1                            ; 00445b50
    PUSH 0x5d6dff                       ; 00445b52 | DAT_005d6dff
    PUSH EAX                            ; 00445b57
    MOV ESI,EAX                         ; 00445b58
    CALL core_skeleton.cpp_FUN_00565780 ; 00445b5a
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00445b5f
    PUSH 0x1                            ; 00445b62
    PUSH 0x5d6e04                       ; 00445b64 | = "torso"
    PUSH ESI                            ; 00445b69
    MOV dword ptr [EBX + 0xc2cc],EAX    ; 00445b6a
    CALL core_skeleton.cpp_FUN_00565780 ; 00445b70
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00445b75
    PUSH 0x1                            ; 00445b78
    PUSH 0x5d6e0a                       ; 00445b7a | = "lforearm"
    PUSH ESI                            ; 00445b7f
    MOV dword ptr [EBX + 0xc2d0],EAX    ; 00445b80
    CALL core_skeleton.cpp_FUN_00565780 ; 00445b86
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00445b8b
    MOV dword ptr [EBX + 0xc2d4],EAX    ; 00445b8e
    POP EDI                             ; 00445b94
    PUSH 0x1                            ; 00445b95
    PUSH 0x5d6e13                       ; 00445b97 | DAT_005d6e13
    PUSH ESI                            ; 00445b9c
    CALL core_skeleton.cpp_FUN_00565780 ; 00445b9d
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00445ba2
    PUSH 0x1                            ; 00445ba5
    PUSH 0x5d6e18                       ; 00445ba7 | = "rforearm"
    PUSH ESI                            ; 00445bac
    MOV dword ptr [EBX + 0xc2d8],EAX    ; 00445bad
    CALL core_skeleton.cpp_FUN_00565780 ; 00445bb3
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00445bb8
    PUSH 0x1                            ; 00445bbb
    PUSH 0x5d6e21                       ; 00445bbd | DAT_005d6e21
    PUSH ESI                            ; 00445bc2
    MOV dword ptr [EBX + 0xc2dc],EAX    ; 00445bc3
    CALL core_skeleton.cpp_FUN_00565780 ; 00445bc9
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00445bce
    PUSH 0x1                            ; 00445bd1
    PUSH 0x5d6e26                       ; 00445bd3 | = "waist"
    PUSH ESI                            ; 00445bd8
    MOV dword ptr [EBX + 0xc2e0],EAX    ; 00445bd9
    CALL core_skeleton.cpp_FUN_00565780 ; 00445bdf
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00445be4
    PUSH 0x1                            ; 00445be7
    PUSH 0x5d6e2c                       ; 00445be9 | = "lthigh"
    PUSH ESI                            ; 00445bee
    MOV dword ptr [EBX + 0xc2e4],EAX    ; 00445bef
    CALL core_skeleton.cpp_FUN_00565780 ; 00445bf5
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00445bfa
    PUSH 0x1                            ; 00445bfd
    PUSH 0x5d6e33                       ; 00445bff | = "lshin"
    PUSH ESI                            ; 00445c04
    MOV dword ptr [EBX + 0xc2ec],EAX    ; 00445c05
    CALL core_skeleton.cpp_FUN_00565780 ; 00445c0b
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00445c10
    PUSH 0x1                            ; 00445c13
    PUSH 0x5d6e39                       ; 00445c15 | = "rthigh"
    PUSH ESI                            ; 00445c1a
    MOV dword ptr [EBX + 0xc2f0],EAX    ; 00445c1b
    CALL core_skeleton.cpp_FUN_00565780 ; 00445c21
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00445c26
    PUSH 0x1                            ; 00445c29
    PUSH 0x5d6e40                       ; 00445c2b | = "rshin"
    PUSH ESI                            ; 00445c30
    MOV dword ptr [EBX + 0xc2f4],EAX    ; 00445c31
    CALL core_skeleton.cpp_FUN_00565780 ; 00445c37
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [EBX + 0xc304],0x0    ; 00445c3c
    ADD ESP,0xc                         ; 00445c46
    MOV dword ptr [EBX + 0xc2f8],EAX    ; 00445c49
    POP ESI                             ; 00445c4f
    POP EBX                             ; 00445c50
    RET                                 ; 00445c51
    MOV dword ptr [EBX + 0xca68],0x3f800000 ; 00445c52
        ;   Label: LAB_00445c52
    JMP 0x004459ec                      ; 00445c5c
        ;   XREF to: 004459ec (UNCONDITIONAL_JUMP)  ; LAB_004459ec

