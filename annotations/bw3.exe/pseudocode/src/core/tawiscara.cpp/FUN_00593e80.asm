; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tawiscara_cpp_FUN_00593e80(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Spine3_005d9260
;   TerminatedCString s_Bip01_L_Finger1_005d926d
;   TerminatedCString s_Bip01_R_Finger1_005d927d
;   TerminatedCString s_Bip01jaw2_005d928d
;   TerminatedCString s_Bip01_Head_005d9297
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_enemy.cpp_CEnemy_setup_FUN_00489110
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00548090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00593e80
        ;   Label: core_tawiscara.cpp_FUN_00593e80
    PUSH ESI                            ; 00593e81
    SUB ESP,0x4                         ; 00593e82
    MOV EBX,dword ptr [ESP + 0x10]      ; 00593e85
    CMP dword ptr [EBX + 0x3268],0x0    ; 00593e89
    JNZ 0x00593eb0                      ; 00593e90
        ;   XREF to: 00593eb0 (CONDITIONAL_JUMP)  ; LAB_00593eb0
    MOV dword ptr [EBX + 0xce5c],0x41700000 ; 00593e92
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 00593e9c
    MOV dword ptr [EBX + 0x2538],0x42c80000 ; 00593ea6
    LEA ESI,[EBX + 0x158]               ; 00593eb0
        ;   Label: LAB_00593eb0
    PUSH ESI                            ; 00593eb6
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 ; 00593eb7
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00593ebc
    PUSH ESI                            ; 00593ebf
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 00593ec0
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00593ec5
    PUSH 0x1                            ; 00593ec8
    PUSH 0x5d9260                       ; 00593eca | = "Bip01 Spine3"
    PUSH EAX                            ; 00593ecf
    MOV ESI,EAX                         ; 00593ed0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00593ed2
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00593ed7
    PUSH 0x1                            ; 00593eda
    PUSH 0x5d926d                       ; 00593edc | = "Bip01 L Finger1"
    PUSH ESI                            ; 00593ee1
    MOV dword ptr [EBX + 0xd058],EAX    ; 00593ee2
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00593ee8
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00593eed
    PUSH 0x1                            ; 00593ef0
    PUSH 0x5d927d                       ; 00593ef2 | = "Bip01 R Finger1"
    PUSH ESI                            ; 00593ef7
    MOV dword ptr [EBX + 0xd05c],EAX    ; 00593ef8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00593efe
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00593f03
    PUSH 0x1                            ; 00593f06
    PUSH 0x5d928d                       ; 00593f08 | = "Bip01jaw2"
    PUSH ESI                            ; 00593f0d
    MOV dword ptr [EBX + 0xd060],EAX    ; 00593f0e
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00593f14
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00593f19
    PUSH 0x1                            ; 00593f1c
    PUSH 0x5d9297                       ; 00593f1e | = "Bip01 Head"
    PUSH ESI                            ; 00593f23
    MOV dword ptr [EBX + 0xd064],EAX    ; 00593f24
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00593f2a
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00593f2f
    PUSH EBX                            ; 00593f32
    MOV dword ptr [EBX + 0xd068],EAX    ; 00593f33
    CALL core_enemy.cpp_CEnemy_setup_FUN_00489110 ; 00593f39
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00489110(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00593f3e
    PUSH 0x3f800000                     ; 00593f41
    MOV EAX,dword ptr [EBX + 0xd06c]    ; 00593f46
    PUSH 0x0                            ; 00593f4c
    MOV dword ptr [EBX + 0xfc],EAX      ; 00593f4e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00593f54
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 00593f59
    MOV ECX,dword ptr [EBX + 0xd054]    ; 00593f5d
    MOV EAX,dword ptr [ESP + 0x8]       ; 00593f63
    MOV dword ptr [EBX + 0xd098],EAX    ; 00593f67
    ADD ESP,0x8                         ; 00593f6d
    TEST ECX,ECX                        ; 00593f70
    JNZ 0x00593f7e                      ; 00593f72
        ;   XREF to: 00593f7e (CONDITIONAL_JUMP)  ; LAB_00593f7e
    MOV dword ptr [EBX + 0x3270],0x3fc00000 ; 00593f74
    PUSH 0x41f00000                     ; 00593f7e
        ;   Label: LAB_00593f7e
    PUSH 0x41200000                     ; 00593f83
    MOV dword ptr [EBX + 0xd070],0x0    ; 00593f88
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00593f92
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 00593f97
    MOV dword ptr [EBX + 0xd078],0x0    ; 00593f9b
    FLD float ptr [ESP + 0x8]           ; 00593fa5
    ADD ESP,0x8                         ; 00593fa9
    LEA EAX,[EBX + 0x158]               ; 00593fac
    MOV dword ptr [EBX + 0xd07c],0x0    ; 00593fb2
    PUSH EAX                            ; 00593fbc
    FSTP float ptr [EBX + 0xd074]       ; 00593fbd
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00593fc3
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00593fc8
    ADD ESP,0x4                         ; 00593fcb
    CMP EAX,0xd                         ; 00593fce
    JNZ 0x00593fe3                      ; 00593fd1
        ;   XREF to: 00593fe3 (CONDITIONAL_JUMP)  ; LAB_00593fe3
    MOV dword ptr [EBX + 0x2540],0x0    ; 00593fd3
    ADD ESP,0x4                         ; 00593fdd
    POP ESI                             ; 00593fe0
    POP EBX                             ; 00593fe1
    RET                                 ; 00593fe2
    MOV dword ptr [EBX + 0x2540],0x2    ; 00593fe3
        ;   Label: LAB_00593fe3
    ADD ESP,0x4                         ; 00593fed
    POP ESI                             ; 00593ff0
    POP EBX                             ; 00593ff1
    RET                                 ; 00593ff2

