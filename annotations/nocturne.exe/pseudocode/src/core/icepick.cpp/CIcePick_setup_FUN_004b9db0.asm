; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_icepick_cpp_CIcePick_setup_FUN_004b9db0(CHero *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_00586017
;   TerminatedCString s_Bip01_L_Clavicle_00586022
;   TerminatedCString s_Bip01_R_Clavicle_00586033
;   TerminatedCString s_Bip01_L_UpperArm_00586044
;   TerminatedCString s_Bip01_R_UpperArm_00586055
;   TerminatedCString s_Bip01_L_ForeArm_00586066
;   TerminatedCString s_Bip01_R_ForeArm_00586076
;   TerminatedCString s_Bip01_L_Foot_00586086
;   TerminatedCString s_Bip01_R_Foot_00586093
;   TerminatedCString s_Bip01_L_Thigh_005860a0
;   TerminatedCString s_Bip01_R_Thigh_005860ae
;   TerminatedCString s_Bip01_L_Calf_005860bc
;   TerminatedCString s_Bip01_R_Calf_005860c9
;   TerminatedCString s_Bip01_L_Hand_005860d6
;   TerminatedCString s_Bip01_R_Hand_005860e3
;   ... and 22 more
;
; Called Functions:
;   core_hero.cpp_CHero_setup_FUN_004b48d0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9db0
        ;   Label: core_icepick.cpp_CIcePick_setup_FUN_004b9db0
    PUSH ESI                            ; 004b9db1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004b9db2
    PUSH ESI                            ; 004b9db6
    CALL core_hero.cpp_CHero_setup_FUN_004b48d0 ; 004b9db7
        ;   XREF to: 004b48d0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_setup_FUN_004b48d0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004b9dbc
    LEA EAX,[ESI + 0x150]               ; 004b9dbf
    PUSH EAX                            ; 004b9dc5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 004b9dc6
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004b9dcb
    PUSH 0x1                            ; 004b9dce
    PUSH 0x586017                       ; 004b9dd0 | = "Bip01 head"
    PUSH EAX                            ; 004b9dd5
    MOV EBX,EAX                         ; 004b9dd6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b9dd8
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b9ddd
    PUSH 0x1                            ; 004b9de0
    PUSH 0x586022                       ; 004b9de2 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 004b9de7
    MOV [0x01cae288],EAX                ; 004b9de8 | DAT_01cae288
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b9ded
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b9df2
    PUSH 0x1                            ; 004b9df5
    PUSH 0x586033                       ; 004b9df7 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 004b9dfc
    MOV [0x01cae28c],EAX                ; 004b9dfd | DAT_01cae28c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b9e02
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b9e07
    PUSH 0x1                            ; 004b9e0a
    PUSH 0x586044                       ; 004b9e0c | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004b9e11
    MOV [0x01cae290],EAX                ; 004b9e12 | DAT_01cae290
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b9e17
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b9e1c
    PUSH 0x1                            ; 004b9e1f
    PUSH 0x586055                       ; 004b9e21 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004b9e26
    MOV [0x01cae294],EAX                ; 004b9e27 | DAT_01cae294
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b9e2c
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b9e31
    PUSH 0x1                            ; 004b9e34
    PUSH 0x586066                       ; 004b9e36 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004b9e3b
    MOV [0x01cae298],EAX                ; 004b9e3c | DAT_01cae298
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b9e41
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b9e46
    PUSH 0x1                            ; 004b9e49
    PUSH 0x586076                       ; 004b9e4b | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004b9e50
    MOV [0x01cae29c],EAX                ; 004b9e51 | DAT_01cae29c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b9e56
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b9e5b
    PUSH 0x1                            ; 004b9e5e
    PUSH 0x586086                       ; 004b9e60 | = "Bip01 L Foot"
    PUSH EBX                            ; 004b9e65
    MOV [0x01cae2a0],EAX                ; 004b9e66 | DAT_01cae2a0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b9e6b
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b9e70
    PUSH 0x1                            ; 004b9e73
    PUSH 0x586093                       ; 004b9e75 | = "Bip01 R Foot"
    PUSH EBX                            ; 004b9e7a
    MOV [0x01cae2a4],EAX                ; 004b9e7b | DAT_01cae2a4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b9e80
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b9e85
    MOV [0x01cae2a8],EAX                ; 004b9e88 | DAT_01cae2a8
    PUSH 0x1                            ; 004b9e8d
    PUSH 0x5860a0                       ; 004b9e8f | = "Bip01 L Thigh"
    PUSH EBX                            ; 004b9e94
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b9e95
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b9e9a
    PUSH 0x1                            ; 004b9e9d
    PUSH 0x5860ae                       ; 004b9e9f | = "Bip01 R Thigh"
    PUSH EBX                            ; 004b9ea4
    MOV [0x01cae2ac],EAX                ; 004b9ea5 | DAT_01cae2ac
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b9eaa
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b9eaf
    PUSH 0x1                            ; 004b9eb2
    PUSH 0x5860bc                       ; 004b9eb4 | = "Bip01 L Calf"
    PUSH EBX                            ; 004b9eb9
    MOV [0x01cae2b0],EAX                ; 004b9eba | DAT_01cae2b0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b9ebf
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b9ec4
    PUSH 0x1                            ; 004b9ec7
    PUSH 0x5860c9                       ; 004b9ec9 | = "Bip01 R Calf"
    PUSH EBX                            ; 004b9ece
    MOV [0x01cae2b4],EAX                ; 004b9ecf | DAT_01cae2b4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b9ed4
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b9ed9
    PUSH 0x1                            ; 004b9edc
    PUSH 0x5860d6                       ; 004b9ede | = "Bip01 L Hand"
    PUSH EBX                            ; 004b9ee3
    MOV [0x01cae2b8],EAX                ; 004b9ee4 | DAT_01cae2b8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b9ee9
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b9eee
    PUSH 0x1                            ; 004b9ef1
    PUSH 0x5860e3                       ; 004b9ef3 | = "Bip01 R Hand"
    PUSH EBX                            ; 004b9ef8
    MOV [0x01cae2bc],EAX                ; 004b9ef9 | DAT_01cae2bc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b9efe
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b9f03
    PUSH 0x1                            ; 004b9f06
    PUSH 0x5860f0                       ; 004b9f08 | = "Bip01 Spine2"
    PUSH EBX                            ; 004b9f0d
    MOV [0x01cae2c0],EAX                ; 004b9f0e | DAT_01cae2c0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b9f13
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b9f18
    PUSH 0x1                            ; 004b9f1b
    PUSH 0x5860fd                       ; 004b9f1d | = "Bip01 Spine1"
    PUSH EBX                            ; 004b9f22
    MOV [0x01cae2c4],EAX                ; 004b9f23 | DAT_01cae2c4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b9f28
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b9f2d
    PUSH 0x1                            ; 004b9f30
    PUSH 0x58610a                       ; 004b9f32 | = "Bip01 Spine"
    PUSH EBX                            ; 004b9f37
    MOV [0x01cae2c8],EAX                ; 004b9f38 | DAT_01cae2c8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b9f3d
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV dword ptr [ESI + 0x24a8],0x0    ; 004b9f42
    MOV dword ptr [ESI + 0x24ec],0x0    ; 004b9f4c
    MOV [0x01cae2cc],EAX                ; 004b9f56 | DAT_01cae2cc
    MOV dword ptr [ESI + 0x1fa3c],0x0   ; 004b9f5b
    MOV EAX,[0x01cae2bc]                ; 004b9f65 | DAT_01cae2bc
    MOV dword ptr [ESI + 0x24a4],EAX    ; 004b9f6a
    MOV EAX,[0x01cae2c0]                ; 004b9f70 | DAT_01cae2c0
    MOV dword ptr [ESI + 0x24e8],EAX    ; 004b9f75
    MOV EAX,[0x01cae0e8]                ; 004b9f7b | DAT_01cae0e8
    MOV dword ptr [ESI + 0x1fa60],0x0   ; 004b9f80
    MOV EDX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004b9f8a
    ADD ESP,0xc                         ; 004b9f91
    CMP ESI,EDX                         ; 004b9f94
    JZ 0x004b9fb9                       ; 004b9f96
        ;   XREF to: 004b9fb9 (CONDITIONAL_JUMP)  ; LAB_004b9fb9
    MOV dword ptr [ESI + 0x1fa48],0x0   ; 004b9f98
        ;   Label: LAB_004b9f98
    MOV dword ptr [ESI + 0x1fa44],0x0   ; 004b9fa2
    MOV dword ptr [ESI + 0x1fa68],0x0   ; 004b9fac
    POP ESI                             ; 004b9fb6
    POP EBX                             ; 004b9fb7
    RET                                 ; 004b9fb8
    MOV dword ptr [EDX + 0x2dd8],0x3fc00000 ; 004b9fb9
        ;   Label: LAB_004b9fb9
    JMP 0x004b9f98                      ; 004b9fc3
        ;   XREF to: 004b9f98 (UNCONDITIONAL_JUMP)  ; LAB_004b9f98

