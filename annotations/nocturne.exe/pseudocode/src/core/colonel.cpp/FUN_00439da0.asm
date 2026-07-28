; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_colonel_cpp_FUN_00439da0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_0057b019
;   TerminatedCString s_Bip01_L_Clavicle_0057b024
;   TerminatedCString s_Bip01_R_Clavicle_0057b035
;   TerminatedCString s_Bip01_L_UpperArm_0057b046
;   TerminatedCString s_Bip01_R_UpperArm_0057b057
;   TerminatedCString s_Bip01_L_ForeArm_0057b068
;   TerminatedCString s_Bip01_R_ForeArm_0057b078
;   TerminatedCString s_Bip01_L_Foot_0057b088
;   TerminatedCString s_Bip01_R_Foot_0057b095
;   TerminatedCString s_Bip01_L_Thigh_0057b0a2
;   TerminatedCString s_Bip01_R_Thigh_0057b0b0
;   TerminatedCString s_Bip01_L_Calf_0057b0be
;   TerminatedCString s_Bip01_R_Calf_0057b0cb
;   TerminatedCString s_Bip01_L_Hand_0057b0d8
;   TerminatedCString s_Bip01_R_Hand_0057b0e5
;   ... and 19 more
;
; Called Functions:
;   core_hero.cpp_FUN_004b48d0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439da0
        ;   Label: core_colonel.cpp_FUN_00439da0
    PUSH ESI                            ; 00439da1
    MOV ESI,dword ptr [ESP + 0xc]       ; 00439da2
    PUSH ESI                            ; 00439da6
    CALL core_hero.cpp_FUN_004b48d0     ; 00439da7
        ;   XREF to: 004b48d0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004b48d0()
    ADD ESP,0x4                         ; 00439dac
    LEA EAX,[ESI + 0x150]               ; 00439daf
    PUSH EAX                            ; 00439db5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 00439db6
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00439dbb
    PUSH 0x1                            ; 00439dbe
    PUSH 0x57b019                       ; 00439dc0 | = "Bip01 head"
    PUSH EAX                            ; 00439dc5
    MOV EBX,EAX                         ; 00439dc6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00439dc8
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00439dcd
    PUSH 0x1                            ; 00439dd0
    PUSH 0x57b024                       ; 00439dd2 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 00439dd7
    MOV [0x0077ac8c],EAX                ; 00439dd8 | DAT_0077ac8c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00439ddd
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00439de2
    PUSH 0x1                            ; 00439de5
    PUSH 0x57b035                       ; 00439de7 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 00439dec
    MOV [0x0077ac90],EAX                ; 00439ded | DAT_0077ac90
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00439df2
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00439df7
    PUSH 0x1                            ; 00439dfa
    PUSH 0x57b046                       ; 00439dfc | = "Bip01 L UpperArm"
    PUSH EBX                            ; 00439e01
    MOV [0x0077ac94],EAX                ; 00439e02 | DAT_0077ac94
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00439e07
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00439e0c
    PUSH 0x1                            ; 00439e0f
    PUSH 0x57b057                       ; 00439e11 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 00439e16
    MOV [0x0077ac98],EAX                ; 00439e17 | DAT_0077ac98
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00439e1c
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00439e21
    PUSH 0x1                            ; 00439e24
    PUSH 0x57b068                       ; 00439e26 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 00439e2b
    MOV [0x0077ac9c],EAX                ; 00439e2c | DAT_0077ac9c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00439e31
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00439e36
    PUSH 0x1                            ; 00439e39
    PUSH 0x57b078                       ; 00439e3b | = "Bip01 R ForeArm"
    PUSH EBX                            ; 00439e40
    MOV [0x0077aca0],EAX                ; 00439e41 | DAT_0077aca0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00439e46
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00439e4b
    PUSH 0x1                            ; 00439e4e
    PUSH 0x57b088                       ; 00439e50 | = "Bip01 L Foot"
    PUSH EBX                            ; 00439e55
    MOV [0x0077aca4],EAX                ; 00439e56 | DAT_0077aca4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00439e5b
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00439e60
    PUSH 0x1                            ; 00439e63
    PUSH 0x57b095                       ; 00439e65 | = "Bip01 R Foot"
    PUSH EBX                            ; 00439e6a
    MOV [0x0077aca8],EAX                ; 00439e6b | DAT_0077aca8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00439e70
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00439e75
    MOV [0x0077acac],EAX                ; 00439e78 | DAT_0077acac
    PUSH 0x1                            ; 00439e7d
    PUSH 0x57b0a2                       ; 00439e7f | = "Bip01 L Thigh"
    PUSH EBX                            ; 00439e84
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00439e85
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00439e8a
    PUSH 0x1                            ; 00439e8d
    PUSH 0x57b0b0                       ; 00439e8f | = "Bip01 R Thigh"
    PUSH EBX                            ; 00439e94
    MOV [0x0077acb0],EAX                ; 00439e95 | DAT_0077acb0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00439e9a
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00439e9f
    PUSH 0x1                            ; 00439ea2
    PUSH 0x57b0be                       ; 00439ea4 | = "Bip01 L Calf"
    PUSH EBX                            ; 00439ea9
    MOV [0x0077acb4],EAX                ; 00439eaa | DAT_0077acb4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00439eaf
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00439eb4
    PUSH 0x1                            ; 00439eb7
    PUSH 0x57b0cb                       ; 00439eb9 | = "Bip01 R Calf"
    PUSH EBX                            ; 00439ebe
    MOV [0x0077acb8],EAX                ; 00439ebf | DAT_0077acb8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00439ec4
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00439ec9
    PUSH 0x1                            ; 00439ecc
    PUSH 0x57b0d8                       ; 00439ece | = "Bip01 L Hand"
    PUSH EBX                            ; 00439ed3
    MOV [0x0077acbc],EAX                ; 00439ed4 | DAT_0077acbc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00439ed9
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00439ede
    PUSH 0x1                            ; 00439ee1
    PUSH 0x57b0e5                       ; 00439ee3 | = "Bip01 R Hand"
    PUSH EBX                            ; 00439ee8
    MOV [0x0077acc0],EAX                ; 00439ee9 | DAT_0077acc0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00439eee
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00439ef3
    PUSH 0x1                            ; 00439ef6
    PUSH 0x57b0f2                       ; 00439ef8 | = "Bip01 Spine2"
    PUSH EBX                            ; 00439efd
    MOV [0x0077acc4],EAX                ; 00439efe | DAT_0077acc4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00439f03
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00439f08
    PUSH 0x1                            ; 00439f0b
    PUSH 0x57b0ff                       ; 00439f0d | = "Bip01 Spine"
    PUSH EBX                            ; 00439f12
    MOV [0x0077acc8],EAX                ; 00439f13 | DAT_0077acc8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00439f18
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00439f1d
    MOV [0x0077accc],EAX                ; 00439f20 | DAT_0077accc
    MOV dword ptr [ESI + 0x1fa3c],0x0   ; 00439f25
    POP ESI                             ; 00439f2f
    POP EBX                             ; 00439f30
    RET                                 ; 00439f31

