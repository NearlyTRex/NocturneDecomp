; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_baron.cpp_CBaron_FUN_00412cb0(CBaron * this_ptr)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_00614efa
;   TerminatedCString s_Bip01_L_Clavicle_00614f05
;   TerminatedCString s_Bip01_R_Clavicle_00614f16
;   TerminatedCString s_Bip01_L_UpperArm_00614f27
;   TerminatedCString s_Bip01_R_UpperArm_00614f38
;   TerminatedCString s_Bip01_L_ForeArm_00614f49
;   TerminatedCString s_Bip01_R_ForeArm_00614f59
;   TerminatedCString s_Bip01_L_Foot_00614f69
;   TerminatedCString s_Bip01_R_Foot_00614f76
;   TerminatedCString s_Bip01_L_Thigh_00614f83
;   TerminatedCString s_Bip01_R_Thigh_00614f91
;   TerminatedCString s_Bip01_L_Calf_00614f9f
;   TerminatedCString s_Bip01_R_Calf_00614fac
;   TerminatedCString s_Bip01_L_Hand_00614fb9
;   TerminatedCString s_Bip01_R_Hand_00614fc6
;   ... and 21 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   core_hero.cpp_CHero_FUN_004f2540
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412cb0
        ;   Label: core_baron.cpp_CBaron_FUN_00412cb0
    PUSH ESI                            ; 00412cb1
    MOV ESI,dword ptr [ESP + 0xc]       ; 00412cb2
    PUSH ESI                            ; 00412cb6
    CALL core_hero.cpp_CHero_FUN_004f2540 ; 00412cb7
        ;   XREF to: 004f2540 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_FUN_004f2540(CHero * this_ptr)
    ADD ESP,0x4                         ; 00412cbc
    LEA EAX,[ESI + 0x158]               ; 00412cbf
    PUSH EAX                            ; 00412cc5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 00412cc6
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00412ccb
    PUSH 0x1                            ; 00412cce
    PUSH 0x614efa                       ; 00412cd0 | = "Bip01 head"
    PUSH EAX                            ; 00412cd5
    MOV EBX,EAX                         ; 00412cd6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00412cd8
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00412cdd
    PUSH 0x1                            ; 00412ce0
    PUSH 0x614f05                       ; 00412ce2 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 00412ce7
    MOV [0x00822498],EAX                ; 00412ce8 | DAT_00822498
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00412ced
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00412cf2
    PUSH 0x1                            ; 00412cf5
    PUSH 0x614f16                       ; 00412cf7 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 00412cfc
    MOV [0x0082249c],EAX                ; 00412cfd | DAT_0082249c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00412d02
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00412d07
    PUSH 0x1                            ; 00412d0a
    PUSH 0x614f27                       ; 00412d0c | = "Bip01 L UpperArm"
    PUSH EBX                            ; 00412d11
    MOV [0x008224a0],EAX                ; 00412d12 | DAT_008224a0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00412d17
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00412d1c
    PUSH 0x1                            ; 00412d1f
    PUSH 0x614f38                       ; 00412d21 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 00412d26
    MOV [0x008224a4],EAX                ; 00412d27 | DAT_008224a4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00412d2c
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00412d31
    PUSH 0x1                            ; 00412d34
    PUSH 0x614f49                       ; 00412d36 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 00412d3b
    MOV [0x008224a8],EAX                ; 00412d3c | DAT_008224a8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00412d41
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00412d46
    PUSH 0x1                            ; 00412d49
    PUSH 0x614f59                       ; 00412d4b | = "Bip01 R ForeArm"
    PUSH EBX                            ; 00412d50
    MOV [0x008224ac],EAX                ; 00412d51 | DAT_008224ac
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00412d56
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00412d5b
    PUSH 0x1                            ; 00412d5e
    PUSH 0x614f69                       ; 00412d60 | = "Bip01 L Foot"
    PUSH EBX                            ; 00412d65
    MOV [0x008224b0],EAX                ; 00412d66 | DAT_008224b0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00412d6b
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00412d70
    PUSH 0x1                            ; 00412d73
    PUSH 0x614f76                       ; 00412d75 | = "Bip01 R Foot"
    PUSH EBX                            ; 00412d7a
    MOV [0x008224b4],EAX                ; 00412d7b | DAT_008224b4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00412d80
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00412d85
    MOV [0x008224b8],EAX                ; 00412d88 | DAT_008224b8
    PUSH 0x1                            ; 00412d8d
    PUSH 0x614f83                       ; 00412d8f | = "Bip01 L Thigh"
    PUSH EBX                            ; 00412d94
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00412d95
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00412d9a
    PUSH 0x1                            ; 00412d9d
    PUSH 0x614f91                       ; 00412d9f | = "Bip01 R Thigh"
    PUSH EBX                            ; 00412da4
    MOV [0x008224bc],EAX                ; 00412da5 | DAT_008224bc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00412daa
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00412daf
    PUSH 0x1                            ; 00412db2
    PUSH 0x614f9f                       ; 00412db4 | = "Bip01 L Calf"
    PUSH EBX                            ; 00412db9
    MOV [0x008224c0],EAX                ; 00412dba | DAT_008224c0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00412dbf
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00412dc4
    PUSH 0x1                            ; 00412dc7
    PUSH 0x614fac                       ; 00412dc9 | = "Bip01 R Calf"
    PUSH EBX                            ; 00412dce
    MOV [0x008224c4],EAX                ; 00412dcf | DAT_008224c4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00412dd4
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00412dd9
    PUSH 0x1                            ; 00412ddc
    PUSH 0x614fb9                       ; 00412dde | = "Bip01 L Hand"
    PUSH EBX                            ; 00412de3
    MOV [0x008224c8],EAX                ; 00412de4 | DAT_008224c8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00412de9
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00412dee
    PUSH 0x1                            ; 00412df1
    PUSH 0x614fc6                       ; 00412df3 | = "Bip01 R Hand"
    PUSH EBX                            ; 00412df8
    MOV [0x008224cc],EAX                ; 00412df9 | DAT_008224cc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00412dfe
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00412e03
    PUSH 0x1                            ; 00412e06
    PUSH 0x614fd3                       ; 00412e08 | = "Bip01 Spine2"
    PUSH EBX                            ; 00412e0d
    MOV [0x008224d0],EAX                ; 00412e0e | DAT_008224d0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00412e13
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00412e18
    PUSH 0x1                            ; 00412e1b
    PUSH 0x614fe0                       ; 00412e1d | = "Bip01 Spine"
    PUSH EBX                            ; 00412e22
    MOV [0x008224d4],EAX                ; 00412e23 | DAT_008224d4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00412e28
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00412e2d
    PUSH 0x1                            ; 00412e30
    PUSH 0x614fec                       ; 00412e32 | = "Bip01 Spine1"
    PUSH EBX                            ; 00412e37
    MOV [0x008224d8],EAX                ; 00412e38 | DAT_008224d8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 00412e3d
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 00412e42
    MOV dword ptr [ESI + 0x1fcac],0x0   ; 00412e45
    PUSH 0x82251c                       ; 00412e4f | g_CKeyFramedModelInstanceInstance
    MOV dword ptr [ESI + 0x25c4],EAX    ; 00412e54
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 00412e5a
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00412e5f
    POP ESI                             ; 00412e62
    POP EBX                             ; 00412e63
    RET                                 ; 00412e64

