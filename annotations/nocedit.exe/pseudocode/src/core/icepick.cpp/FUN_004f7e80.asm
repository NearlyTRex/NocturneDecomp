; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_icepick.cpp_FUN_004f7e80()
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_0062f5b4
;   TerminatedCString s_Bip01_L_Clavicle_0062f5bf
;   TerminatedCString s_Bip01_R_Clavicle_0062f5d0
;   TerminatedCString s_Bip01_L_UpperArm_0062f5e1
;   TerminatedCString s_Bip01_R_UpperArm_0062f5f2
;   TerminatedCString s_Bip01_L_ForeArm_0062f603
;   TerminatedCString s_Bip01_R_ForeArm_0062f613
;   TerminatedCString s_Bip01_L_Foot_0062f623
;   TerminatedCString s_Bip01_R_Foot_0062f630
;   TerminatedCString s_Bip01_L_Thigh_0062f63d
;   TerminatedCString s_Bip01_R_Thigh_0062f64b
;   TerminatedCString s_Bip01_L_Calf_0062f659
;   TerminatedCString s_Bip01_R_Calf_0062f666
;   TerminatedCString s_Bip01_L_Hand_0062f673
;   TerminatedCString s_Bip01_R_Hand_0062f680
;   ... and 23 more
;
; Called Functions:
;   core_hero.cpp_CHero_FUN_004f2540
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7e80
        ;   Label: core_icepick.cpp_FUN_004f7e80
    PUSH ESI                            ; 004f7e81
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f7e82
    PUSH ESI                            ; 004f7e86
    CALL core_hero.cpp_CHero_FUN_004f2540 ; 004f7e87 | void core_hero.cpp_CHero_FUN_004f2540(CHero * this_ptr)
        ;   XREF to: 004f2540 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f7e8c
    LEA EAX,[ESI + 0x158]               ; 004f7e8f
    PUSH EAX                            ; 004f7e95
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 004f7e96 | CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f7e9b
    PUSH 0x1                            ; 004f7e9e
    PUSH 0x62f5b4                       ; 004f7ea0 | = "Bip01 head" | s_Bip01_head_0062f5b4 = Bip01 head
    PUSH EAX                            ; 004f7ea5
    MOV EBX,EAX                         ; 004f7ea6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f7ea8 | int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f7ead
    PUSH 0x1                            ; 004f7eb0
    PUSH 0x62f5bf                       ; 004f7eb2 | = "Bip01 L Clavicle" | s_Bip01_L_Clavicle_0062f5bf = Bip01 L Clavicle
    PUSH EBX                            ; 004f7eb7
    MOV [0x02db8970],EAX                ; 004f7eb8 | undefined4 DAT_02db8970
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f7ebd | int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f7ec2
    PUSH 0x1                            ; 004f7ec5
    PUSH 0x62f5d0                       ; 004f7ec7 | = "Bip01 R Clavicle" | s_Bip01_R_Clavicle_0062f5d0 = Bip01 R Clavicle
    PUSH EBX                            ; 004f7ecc
    MOV [0x02db8974],EAX                ; 004f7ecd | DAT_02db8974
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f7ed2 | int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f7ed7
    PUSH 0x1                            ; 004f7eda
    PUSH 0x62f5e1                       ; 004f7edc | = "Bip01 L UpperArm" | s_Bip01_L_UpperArm_0062f5e1 = Bip01 L UpperArm
    PUSH EBX                            ; 004f7ee1
    MOV [0x02db8978],EAX                ; 004f7ee2 | DAT_02db8978
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f7ee7 | int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f7eec
    PUSH 0x1                            ; 004f7eef
    PUSH 0x62f5f2                       ; 004f7ef1 | = "Bip01 R UpperArm" | s_Bip01_R_UpperArm_0062f5f2 = Bip01 R UpperArm
    PUSH EBX                            ; 004f7ef6
    MOV [0x02db897c],EAX                ; 004f7ef7 | DAT_02db897c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f7efc | int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f7f01
    PUSH 0x1                            ; 004f7f04
    PUSH 0x62f603                       ; 004f7f06 | = "Bip01 L ForeArm" | s_Bip01_L_ForeArm_0062f603 = Bip01 L ForeArm
    PUSH EBX                            ; 004f7f0b
    MOV [0x02db8980],EAX                ; 004f7f0c | DAT_02db8980
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f7f11 | int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f7f16
    PUSH 0x1                            ; 004f7f19
    PUSH 0x62f613                       ; 004f7f1b | = "Bip01 R ForeArm" | s_Bip01_R_ForeArm_0062f613 = Bip01 R ForeArm
    PUSH EBX                            ; 004f7f20
    MOV [0x02db8984],EAX                ; 004f7f21 | DAT_02db8984
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f7f26 | int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f7f2b
    PUSH 0x1                            ; 004f7f2e
    PUSH 0x62f623                       ; 004f7f30 | = "Bip01 L Foot" | s_Bip01_L_Foot_0062f623 = Bip01 L Foot
    PUSH EBX                            ; 004f7f35
    MOV [0x02db8988],EAX                ; 004f7f36 | DAT_02db8988
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f7f3b | int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f7f40
    PUSH 0x1                            ; 004f7f43
    PUSH 0x62f630                       ; 004f7f45 | = "Bip01 R Foot" | s_Bip01_R_Foot_0062f630 = Bip01 R Foot
    PUSH EBX                            ; 004f7f4a
    MOV [0x02db898c],EAX                ; 004f7f4b | DAT_02db898c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f7f50 | int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f7f55
    MOV [0x02db8990],EAX                ; 004f7f58 | DAT_02db8990
    PUSH 0x1                            ; 004f7f5d
    PUSH 0x62f63d                       ; 004f7f5f | = "Bip01 L Thigh" | s_Bip01_L_Thigh_0062f63d = Bip01 L Thigh
    PUSH EBX                            ; 004f7f64
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f7f65 | int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f7f6a
    PUSH 0x1                            ; 004f7f6d
    PUSH 0x62f64b                       ; 004f7f6f | = "Bip01 R Thigh" | s_Bip01_R_Thigh_0062f64b = Bip01 R Thigh
    PUSH EBX                            ; 004f7f74
    MOV [0x02db8994],EAX                ; 004f7f75 | DAT_02db8994
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f7f7a | int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f7f7f
    PUSH 0x1                            ; 004f7f82
    PUSH 0x62f659                       ; 004f7f84 | = "Bip01 L Calf" | s_Bip01_L_Calf_0062f659 = Bip01 L Calf
    PUSH EBX                            ; 004f7f89
    MOV [0x02db8998],EAX                ; 004f7f8a | DAT_02db8998
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f7f8f | int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f7f94
    PUSH 0x1                            ; 004f7f97
    PUSH 0x62f666                       ; 004f7f99 | = "Bip01 R Calf" | s_Bip01_R_Calf_0062f666 = Bip01 R Calf
    PUSH EBX                            ; 004f7f9e
    MOV [0x02db899c],EAX                ; 004f7f9f | DAT_02db899c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f7fa4 | int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f7fa9
    PUSH 0x1                            ; 004f7fac
    PUSH 0x62f673                       ; 004f7fae | = "Bip01 L Hand" | s_Bip01_L_Hand_0062f673 = Bip01 L Hand
    PUSH EBX                            ; 004f7fb3
    MOV [0x02db89a0],EAX                ; 004f7fb4 | DAT_02db89a0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f7fb9 | int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f7fbe
    PUSH 0x1                            ; 004f7fc1
    PUSH 0x62f680                       ; 004f7fc3 | = "Bip01 R Hand" | s_Bip01_R_Hand_0062f680 = Bip01 R Hand
    PUSH EBX                            ; 004f7fc8
    MOV [0x02db89a4],EAX                ; 004f7fc9 | undefined4 DAT_02db89a4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f7fce | int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f7fd3
    PUSH 0x1                            ; 004f7fd6
    PUSH 0x62f68d                       ; 004f7fd8 | = "Bip01 Spine2" | s_Bip01_Spine2_0062f68d = Bip01 Spine2
    PUSH EBX                            ; 004f7fdd
    MOV [0x02db89a8],EAX                ; 004f7fde | undefined4 DAT_02db89a8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f7fe3 | int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f7fe8
    PUSH 0x1                            ; 004f7feb
    PUSH 0x62f69a                       ; 004f7fed | = "Bip01 Spine1" | s_Bip01_Spine1_0062f69a = Bip01 Spine1
    PUSH EBX                            ; 004f7ff2
    MOV [0x02db89ac],EAX                ; 004f7ff3 | DAT_02db89ac
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f7ff8 | int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f7ffd
    PUSH 0x1                            ; 004f8000
    PUSH 0x62f6a7                       ; 004f8002 | = "Bip01 Spine" | s_Bip01_Spine_0062f6a7 = Bip01 Spine
    PUSH EBX                            ; 004f8007
    MOV [0x02db89b0],EAX                ; 004f8008 | undefined4 DAT_02db89b0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f800d | int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESI + 0x24b0],0x0    ; 004f8012
    MOV dword ptr [ESI + 0x24f4],0x0    ; 004f801c
    MOV [0x02db89b4],EAX                ; 004f8026 | DAT_02db89b4
    MOV dword ptr [ESI + 0x1fbd4],0x0   ; 004f802b
    MOV EAX,[0x02db89a4]                ; 004f8035 | undefined4 DAT_02db89a4
    MOV dword ptr [ESI + 0x24ac],EAX    ; 004f803a
    MOV EAX,[0x02db89a8]                ; 004f8040 | undefined4 DAT_02db89a8
    MOV dword ptr [ESI + 0x24f0],EAX    ; 004f8045
    MOV EAX,[0x02db87d0]                ; 004f804b | int g_LocalHeroIndex
    MOV dword ptr [ESI + 0x1fbf8],0x0   ; 004f8050
    MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004f805a | CHero *[4] g_HeroActors
    ADD ESP,0xc                         ; 004f8061
    CMP ESI,EDX                         ; 004f8064
    JZ 0x004f8089                       ; 004f8066 | LAB_004f8089
        ;   XREF to: 004f8089 (CONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x1fbe0],0x0   ; 004f8068
        ;   Label: LAB_004f8068
    MOV dword ptr [ESI + 0x1fbdc],0x0   ; 004f8072
    MOV dword ptr [ESI + 0x1fc00],0x0   ; 004f807c
    POP ESI                             ; 004f8086
    POP EBX                             ; 004f8087
    RET                                 ; 004f8088
    MOV dword ptr [EDX + 0x2de0],0x3fc00000 ; 004f8089
        ;   Label: LAB_004f8089
    JMP 0x004f8068                      ; 004f8093 | LAB_004f8068
        ;   XREF to: 004f8068 (UNCONDITIONAL_JUMP)

