; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_colonel_cpp_CColonel_setup_FUN_0043f850(CColonel *this_ptr)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_00618b9a
;   TerminatedCString s_Bip01_L_Clavicle_00618ba5
;   TerminatedCString s_Bip01_R_Clavicle_00618bb6
;   string s_Bip01_L_UpperArm_00618bc7
;   TerminatedCString s_Bip01_R_UpperArm_00618bd8
;   TerminatedCString s_Bip01_L_ForeArm_00618be9
;   TerminatedCString s_Bip01_R_ForeArm_00618bf9
;   TerminatedCString s_Bip01_L_Foot_00618c09
;   TerminatedCString s_Bip01_R_Foot_00618c16
;   TerminatedCString s_Bip01_L_Thigh_00618c23
;   TerminatedCString s_Bip01_R_Thigh_00618c31
;   TerminatedCString s_Bip01_L_Calf_00618c3f
;   TerminatedCString s_Bip01_R_Calf_00618c4c
;   TerminatedCString s_Bip01_L_Hand_00618c59
;   TerminatedCString s_Bip01_R_Hand_00618c66
;   ... and 19 more
;
; Called Functions:
;   core_hero.cpp_CHero_setup_FUN_004f2540
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f850
        ;   Label: core_colonel.cpp_CColonel_setup_FUN_0043f850
    PUSH ESI                            ; 0043f851
    MOV ESI,dword ptr [ESP + 0xc]       ; 0043f852
    PUSH ESI                            ; 0043f856
    CALL core_hero.cpp_CHero_setup_FUN_004f2540 ; 0043f857
        ;   XREF to: 004f2540 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_setup_FUN_004f2540(CHero * this_ptr)
    ADD ESP,0x4                         ; 0043f85c
    LEA EAX,[ESI + 0x158]               ; 0043f85f
    PUSH EAX                            ; 0043f865
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0043f866
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0043f86b
    PUSH 0x1                            ; 0043f86e
    PUSH 0x618b9a                       ; 0043f870 | = "Bip01 head"
    PUSH EAX                            ; 0043f875
    MOV EBX,EAX                         ; 0043f876
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0043f878
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0043f87d
    PUSH 0x1                            ; 0043f880
    PUSH 0x618ba5                       ; 0043f882 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 0043f887
    MOV [0x0083b124],EAX                ; 0043f888 | INT_0083b124
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0043f88d
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0043f892
    PUSH 0x1                            ; 0043f895
    PUSH 0x618bb6                       ; 0043f897 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 0043f89c
    MOV [0x0083b128],EAX                ; 0043f89d | INT_0083b128
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0043f8a2
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0043f8a7
    PUSH 0x1                            ; 0043f8aa
    PUSH 0x618bc7                       ; 0043f8ac | = "Bip01 L UpperArm"
    PUSH EBX                            ; 0043f8b1
    MOV [0x0083b12c],EAX                ; 0043f8b2 | INT_0083b12c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0043f8b7
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0043f8bc
    PUSH 0x1                            ; 0043f8bf
    PUSH 0x618bd8                       ; 0043f8c1 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 0043f8c6
    MOV [0x0083b130],EAX                ; 0043f8c7 | INT_0083b130
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0043f8cc
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0043f8d1
    PUSH 0x1                            ; 0043f8d4
    PUSH 0x618be9                       ; 0043f8d6 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 0043f8db
    MOV [0x0083b134],EAX                ; 0043f8dc | INT_0083b134
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0043f8e1
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0043f8e6
    PUSH 0x1                            ; 0043f8e9
    PUSH 0x618bf9                       ; 0043f8eb | = "Bip01 R ForeArm"
    PUSH EBX                            ; 0043f8f0
    MOV [0x0083b138],EAX                ; 0043f8f1 | INT_0083b138
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0043f8f6
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0043f8fb
    PUSH 0x1                            ; 0043f8fe
    PUSH 0x618c09                       ; 0043f900 | = "Bip01 L Foot"
    PUSH EBX                            ; 0043f905
    MOV [0x0083b13c],EAX                ; 0043f906 | INT_0083b13c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0043f90b
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0043f910
    PUSH 0x1                            ; 0043f913
    PUSH 0x618c16                       ; 0043f915 | = "Bip01 R Foot"
    PUSH EBX                            ; 0043f91a
    MOV [0x0083b140],EAX                ; 0043f91b | INT_0083b140
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0043f920
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0043f925
    MOV [0x0083b144],EAX                ; 0043f928 | INT_0083b144
    PUSH 0x1                            ; 0043f92d
    PUSH 0x618c23                       ; 0043f92f | = "Bip01 L Thigh"
    PUSH EBX                            ; 0043f934
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0043f935
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0043f93a
    PUSH 0x1                            ; 0043f93d
    PUSH 0x618c31                       ; 0043f93f | = "Bip01 R Thigh"
    PUSH EBX                            ; 0043f944
    MOV [0x0083b148],EAX                ; 0043f945 | INT_0083b148
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0043f94a
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0043f94f
    PUSH 0x1                            ; 0043f952
    PUSH 0x618c3f                       ; 0043f954 | = "Bip01 L Calf"
    PUSH EBX                            ; 0043f959
    MOV [0x0083b14c],EAX                ; 0043f95a | INT_0083b14c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0043f95f
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0043f964
    PUSH 0x1                            ; 0043f967
    PUSH 0x618c4c                       ; 0043f969 | = "Bip01 R Calf"
    PUSH EBX                            ; 0043f96e
    MOV [0x0083b150],EAX                ; 0043f96f | INT_0083b150
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0043f974
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0043f979
    PUSH 0x1                            ; 0043f97c
    PUSH 0x618c59                       ; 0043f97e | = "Bip01 L Hand"
    PUSH EBX                            ; 0043f983
    MOV [0x0083b154],EAX                ; 0043f984 | INT_0083b154
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0043f989
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0043f98e
    PUSH 0x1                            ; 0043f991
    PUSH 0x618c66                       ; 0043f993 | = "Bip01 R Hand"
    PUSH EBX                            ; 0043f998
    MOV [0x0083b158],EAX                ; 0043f999 | INT_0083b158
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0043f99e
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0043f9a3
    PUSH 0x1                            ; 0043f9a6
    PUSH 0x618c73                       ; 0043f9a8 | = "Bip01 Spine2"
    PUSH EBX                            ; 0043f9ad
    MOV [0x0083b15c],EAX                ; 0043f9ae | INT_0083b15c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0043f9b3
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0043f9b8
    PUSH 0x1                            ; 0043f9bb
    PUSH 0x618c80                       ; 0043f9bd | = "Bip01 Spine"
    PUSH EBX                            ; 0043f9c2
    MOV [0x0083b160],EAX                ; 0043f9c3 | INT_0083b160
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 0043f9c8
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
    ADD ESP,0xc                         ; 0043f9cd
    MOV [0x0083b164],EAX                ; 0043f9d0 | INT_0083b164
    MOV dword ptr [ESI + 0x1fbd4],0x0   ; 0043f9d5
    POP ESI                             ; 0043f9df
    POP EBX                             ; 0043f9e0
    RET                                 ; 0043f9e1

