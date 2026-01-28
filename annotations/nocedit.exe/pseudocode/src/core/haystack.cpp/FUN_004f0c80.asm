; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_haystack_cpp_FUN_004f0c80(void)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_0062e807
;   TerminatedCString s_Bip01_L_Clavicle_0062e812
;   TerminatedCString s_Bip01_R_Clavicle_0062e823
;   TerminatedCString s_Bip01_L_UpperArm_0062e834
;   TerminatedCString s_Bip01_R_UpperArm_0062e845
;   TerminatedCString s_Bip01_L_ForeArm_0062e856
;   TerminatedCString s_Bip01_R_ForeArm_0062e866
;   TerminatedCString s_Bip01_L_Foot_0062e876
;   TerminatedCString s_Bip01_R_Foot_0062e883
;   TerminatedCString s_Bip01_L_Thigh_0062e890
;   TerminatedCString s_Bip01_R_Thigh_0062e89e
;   TerminatedCString s_Bip01_L_Calf_0062e8ac
;   TerminatedCString s_Bip01_R_Calf_0062e8b9
;   TerminatedCString s_Bip01_L_Hand_0062e8c6
;   TerminatedCString s_Bip01_R_Hand_0062e8d3
;   ... and 19 more
;
; Called Functions:
;   core_hero.cpp_CHero_FUN_004f2540
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0c80
        ;   Label: core_haystack.cpp_FUN_004f0c80
    PUSH ESI                            ; 004f0c81
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f0c82
    PUSH ESI                            ; 004f0c86
    CALL core_hero.cpp_CHero_FUN_004f2540 ; 004f0c87
        ;   XREF to: 004f2540 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_FUN_004f2540(CHero * this_ptr)
    ADD ESP,0x4                         ; 004f0c8c
    LEA EAX,[ESI + 0x158]               ; 004f0c8f
    PUSH EAX                            ; 004f0c95
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 004f0c96
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f0c9b
    PUSH 0x1                            ; 004f0c9e
    PUSH 0x62e807                       ; 004f0ca0 | = "Bip01 head"
    PUSH EAX                            ; 004f0ca5
    MOV EBX,EAX                         ; 004f0ca6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f0ca8
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f0cad
    PUSH 0x1                            ; 004f0cb0
    PUSH 0x62e812                       ; 004f0cb2 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 004f0cb7
    MOV [0x02db8700],EAX                ; 004f0cb8 | INT_02db8700
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f0cbd
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f0cc2
    PUSH 0x1                            ; 004f0cc5
    PUSH 0x62e823                       ; 004f0cc7 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 004f0ccc
    MOV [0x02db8704],EAX                ; 004f0ccd | INT_02db8704
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f0cd2
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f0cd7
    PUSH 0x1                            ; 004f0cda
    PUSH 0x62e834                       ; 004f0cdc | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004f0ce1
    MOV [0x02db8708],EAX                ; 004f0ce2 | INT_02db8708
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f0ce7
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f0cec
    PUSH 0x1                            ; 004f0cef
    PUSH 0x62e845                       ; 004f0cf1 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004f0cf6
    MOV [0x02db870c],EAX                ; 004f0cf7 | INT_02db870c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f0cfc
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f0d01
    PUSH 0x1                            ; 004f0d04
    PUSH 0x62e856                       ; 004f0d06 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004f0d0b
    MOV [0x02db8710],EAX                ; 004f0d0c | INT_02db8710
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f0d11
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f0d16
    PUSH 0x1                            ; 004f0d19
    PUSH 0x62e866                       ; 004f0d1b | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004f0d20
    MOV [0x02db8714],EAX                ; 004f0d21 | INT_02db8714
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f0d26
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f0d2b
    PUSH 0x1                            ; 004f0d2e
    PUSH 0x62e876                       ; 004f0d30 | = "Bip01 L Foot"
    PUSH EBX                            ; 004f0d35
    MOV [0x02db8718],EAX                ; 004f0d36 | INT_02db8718
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f0d3b
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f0d40
    PUSH 0x1                            ; 004f0d43
    PUSH 0x62e883                       ; 004f0d45 | = "Bip01 R Foot"
    PUSH EBX                            ; 004f0d4a
    MOV [0x02db871c],EAX                ; 004f0d4b | INT_02db871c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f0d50
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f0d55
    MOV [0x02db8720],EAX                ; 004f0d58 | INT_02db8720
    PUSH 0x1                            ; 004f0d5d
    PUSH 0x62e890                       ; 004f0d5f | = "Bip01 L Thigh"
    PUSH EBX                            ; 004f0d64
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f0d65
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f0d6a
    PUSH 0x1                            ; 004f0d6d
    PUSH 0x62e89e                       ; 004f0d6f | = "Bip01 R Thigh"
    PUSH EBX                            ; 004f0d74
    MOV [0x02db8724],EAX                ; 004f0d75 | INT_02db8724
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f0d7a
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f0d7f
    PUSH 0x1                            ; 004f0d82
    PUSH 0x62e8ac                       ; 004f0d84 | = "Bip01 L Calf"
    PUSH EBX                            ; 004f0d89
    MOV [0x02db8728],EAX                ; 004f0d8a | INT_02db8728
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f0d8f
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f0d94
    PUSH 0x1                            ; 004f0d97
    PUSH 0x62e8b9                       ; 004f0d99 | = "Bip01 R Calf"
    PUSH EBX                            ; 004f0d9e
    MOV [0x02db872c],EAX                ; 004f0d9f | INT_02db872c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f0da4
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f0da9
    PUSH 0x1                            ; 004f0dac
    PUSH 0x62e8c6                       ; 004f0dae | = "Bip01 L Hand"
    PUSH EBX                            ; 004f0db3
    MOV [0x02db8730],EAX                ; 004f0db4 | INT_02db8730
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f0db9
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f0dbe
    PUSH 0x1                            ; 004f0dc1
    PUSH 0x62e8d3                       ; 004f0dc3 | = "Bip01 R Hand"
    PUSH EBX                            ; 004f0dc8
    MOV [0x02db8734],EAX                ; 004f0dc9 | INT_02db8734
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f0dce
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f0dd3
    PUSH 0x1                            ; 004f0dd6
    PUSH 0x62e8e0                       ; 004f0dd8 | = "Bip01 Spine2"
    PUSH EBX                            ; 004f0ddd
    MOV [0x02db8738],EAX                ; 004f0dde | INT_02db8738
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f0de3
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f0de8
    PUSH 0x1                            ; 004f0deb
    PUSH 0x62e8ed                       ; 004f0ded | = "Bip01 Spine"
    PUSH EBX                            ; 004f0df2
    MOV [0x02db873c],EAX                ; 004f0df3 | INT_02db873c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f0df8
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 004f0dfd
    MOV [0x02db8740],EAX                ; 004f0e00 | INT_02db8740
    MOV dword ptr [ESI + 0x1fbd4],0x0   ; 004f0e05
    POP ESI                             ; 004f0e0f
    POP EBX                             ; 004f0e10
    RET                                 ; 004f0e11

