; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hotdemon_cpp_CHotDemon_setup_FUN_004f6d00(CHotDemon *this_ptr)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_hotdemonx_dfm_0062f364
;   TerminatedCString s_hotdemon_dfm_0062f372
;   TerminatedCString s_Bip01_Head_0062f37f
;   TerminatedCString s_Bip01_L_ForeArm_0062f38a
;   TerminatedCString s_Bip01_R_ForeArm_0062f39a
;   TerminatedCString s_Bip01_L_UpperArm_0062f3aa
;   TerminatedCString s_Bip01_R_UpperArm_0062f3bb
;   TerminatedCString s_Bip01_L_Foot_0062f3cc
;   TerminatedCString s_Bip01_R_Foot_0062f3d9
;   TerminatedCString s_Bip01_L_Hand_0062f3e6
;   TerminatedCString s_Bip01_R_Hand_0062f3f3
;   TerminatedCString s_Bip01_Spine_0062f400
;   TerminatedCString s_Bip01_Spine1_0062f40c
;   TerminatedCString s_Bip01_Spine2_0062f419
;   TerminatedCString s_Bip01_Head_0062f426
;   ... and 19 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a9650
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6d00
        ;   Label: core_hotdemon.cpp_CHotDemon_setup_FUN_004f6d00
    PUSH ESI                            ; 004f6d01
    PUSH EDI                            ; 004f6d02
    MOV EDI,dword ptr [ESP + 0x10]      ; 004f6d03
    MOV EBX,dword ptr [0x0067b654]      ; 004f6d07 | g_CGameInstance | g_CGamePtr
    MOV EDX,dword ptr [EBX + 0x18]      ; 004f6d0d | g_CGameInstance.nudity_flag
    LEA EAX,[EDI + 0x158]               ; 004f6d10
    TEST EDX,EDX                        ; 004f6d16
    JZ 0x004f6ed5                       ; 004f6d18
        ;   XREF to: 004f6ed5 (CONDITIONAL_JUMP)  ; LAB_004f6ed5
    PUSH 0x62f372                       ; 004f6d1e | = "hotdemon.dfm"
    PUSH EAX                            ; 004f6d23
        ;   Label: LAB_004f6d23
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 004f6d24
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004f6d29
    PUSH EDI                            ; 004f6d2c
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a9650 ; 004f6d2d
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a9650(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004f6d32
    LEA ESI,[EDI + 0x158]               ; 004f6d35
    PUSH ESI                            ; 004f6d3b
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 004f6d3c
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f6d41
    PUSH ESI                            ; 004f6d44
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 004f6d45
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f6d4a
    PUSH 0x1                            ; 004f6d4d
    PUSH 0x62f37f                       ; 004f6d4f | = "Bip01 Head"
    PUSH EAX                            ; 004f6d54
    MOV EBX,EAX                         ; 004f6d55
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f6d57
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f6d5c
    PUSH 0x1                            ; 004f6d5f
    PUSH 0x62f38a                       ; 004f6d61 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004f6d66
    MOV [0x02db88c8],EAX                ; 004f6d67 | INT_02db88c8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f6d6c
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f6d71
    PUSH 0x1                            ; 004f6d74
    PUSH 0x62f39a                       ; 004f6d76 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004f6d7b
    MOV [0x02db88d4],EAX                ; 004f6d7c | INT_02db88d4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f6d81
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f6d86
    PUSH 0x1                            ; 004f6d89
    PUSH 0x62f3aa                       ; 004f6d8b | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004f6d90
    MOV [0x02db88d8],EAX                ; 004f6d91 | INT_02db88d8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f6d96
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f6d9b
    PUSH 0x1                            ; 004f6d9e
    PUSH 0x62f3bb                       ; 004f6da0 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004f6da5
    MOV [0x02db88dc],EAX                ; 004f6da6 | INT_02db88dc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f6dab
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f6db0
    PUSH 0x1                            ; 004f6db3
    PUSH 0x62f3cc                       ; 004f6db5 | = "Bip01 L Foot"
    PUSH EBX                            ; 004f6dba
    MOV [0x02db88e0],EAX                ; 004f6dbb | INT_02db88e0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f6dc0
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f6dc5
    PUSH 0x1                            ; 004f6dc8
    PUSH 0x62f3d9                       ; 004f6dca | = "Bip01 R Foot"
    PUSH EBX                            ; 004f6dcf
    MOV [0x02db88e4],EAX                ; 004f6dd0 | INT_02db88e4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f6dd5
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f6dda
    PUSH 0x1                            ; 004f6ddd
    PUSH 0x62f3e6                       ; 004f6ddf | = "Bip01 L Hand"
    PUSH EBX                            ; 004f6de4
    MOV [0x02db88e8],EAX                ; 004f6de5 | INT_02db88e8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f6dea
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f6def
    MOV [0x02db88cc],EAX                ; 004f6df2 | INT_02db88cc
    PUSH 0x1                            ; 004f6df7
    PUSH 0x62f3f3                       ; 004f6df9 | = "Bip01 R Hand"
    PUSH EBX                            ; 004f6dfe
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f6dff
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f6e04
    PUSH 0x1                            ; 004f6e07
    PUSH 0x62f400                       ; 004f6e09 | = "Bip01 Spine"
    PUSH EBX                            ; 004f6e0e
    MOV [0x02db88d0],EAX                ; 004f6e0f | INT_02db88d0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f6e14
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f6e19
    PUSH 0x1                            ; 004f6e1c
    PUSH 0x62f40c                       ; 004f6e1e | = "Bip01 Spine1"
    PUSH EBX                            ; 004f6e23
    MOV [0x02db88ec],EAX                ; 004f6e24 | INT_02db88ec
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f6e29
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f6e2e
    PUSH 0x1                            ; 004f6e31
    PUSH 0x62f419                       ; 004f6e33 | = "Bip01 Spine2"
    PUSH EBX                            ; 004f6e38
    MOV [0x02db88f0],EAX                ; 004f6e39 | INT_02db88f0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f6e3e
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f6e43
    PUSH 0x1                            ; 004f6e46
    PUSH 0x62f426                       ; 004f6e48 | = "Bip01 Head"
    PUSH EBX                            ; 004f6e4d
    MOV [0x02db88f4],EAX                ; 004f6e4e | INT_02db88f4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f6e53
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f6e58
    PUSH 0x1                            ; 004f6e5b
    PUSH 0x62f431                       ; 004f6e5d | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004f6e62
    MOV [0x02db88c8],EAX                ; 004f6e63 | INT_02db88c8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f6e68
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f6e6d
    PUSH 0x1                            ; 004f6e70
    PUSH 0x62f442                       ; 004f6e72 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004f6e77
    MOV [0x02db88dc],EAX                ; 004f6e78 | INT_02db88dc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f6e7d
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f6e82
    PUSH 0x1                            ; 004f6e85
    PUSH 0x62f453                       ; 004f6e87 | = "Bip01 Spine"
    PUSH EBX                            ; 004f6e8c
    MOV [0x02db88e0],EAX                ; 004f6e8d | INT_02db88e0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f6e92
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f6e97
    PUSH 0x1                            ; 004f6e9a
    PUSH 0x62f45f                       ; 004f6e9c | = "Bip01 Spine2"
    PUSH EBX                            ; 004f6ea1
    MOV [0x02db88ec],EAX                ; 004f6ea2 | INT_02db88ec
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f6ea7
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f6eac
    PUSH ESI                            ; 004f6eaf
    MOV [0x02db88f4],EAX                ; 004f6eb0 | INT_02db88f4
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 004f6eb5
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    MOV dword ptr [EDI + 0xbebc],0x0    ; 004f6eba
    ADD ESP,0x4                         ; 004f6ec4
    MOV dword ptr [EDI + 0xbec0],0x0    ; 004f6ec7
    POP EDI                             ; 004f6ed1
    POP ESI                             ; 004f6ed2
    POP EBX                             ; 004f6ed3
    RET                                 ; 004f6ed4
    PUSH 0x62f364                       ; 004f6ed5 | = "hotdemonx.dfm"
        ;   Label: LAB_004f6ed5
    JMP 0x004f6d23                      ; 004f6eda
        ;   XREF to: 004f6d23 (UNCONDITIONAL_JUMP)  ; LAB_004f6d23

