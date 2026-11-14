; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_djien_cpp_CDjien_archive_FUN_00460e80(CDjien *this_ptr)
;
; Parameters:
; CDjien *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_005d8da2
;   TerminatedCString s_modelName_005d8da8
;   TerminatedCString s_motion_state_005d8db2
;   TerminatedCString s_numSacksBlown_005d8dbf
;   TerminatedCString s_numSacksToBlow_005d8dcd
;   TerminatedCString s_Sack0Damage_005d8ddc
;   TerminatedCString s_Sack1Damage_005d8de8
;   TerminatedCString s_Sack2Damage_005d8df4
;   TerminatedCString s_Sack3Damage_005d8e00
;   TerminatedCString s_Sack4Damage_005d8e0c
;   TerminatedCString s_Sack5Damage_005d8e18
;   TerminatedCString s_partStatus_005d8e24
;   int g_CDjienClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveMotionState_FUN_0040b870
;   core_actor.cpp_archivePartStatus_FUN_0040b960
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460e80
        ;   Label: core_djien.cpp_CDjien_archive_FUN_00460e80
    PUSH ESI                            ; 00460e81
    MOV EBX,dword ptr [ESP + 0xc]       ; 00460e82
    PUSH EBX                            ; 00460e86
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a0520 ; 00460e87
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a0520(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00460e8c
    PUSH 0x5d8da2                       ; 00460e8f | = "speed"
    LEA EAX,[EBX + 0xc1d0]              ; 00460e94
    PUSH EAX                            ; 00460e9a
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00460e9b
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00460ea0
    PUSH 0x5d8da8                       ; 00460ea3 | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 00460ea8
    PUSH ESI                            ; 00460eae
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0 ; 00460eaf
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00460eb4
    PUSH 0x5d8db2                       ; 00460eb7 | = "motion state"
    PUSH ESI                            ; 00460ebc
    CALL core_actor.cpp_archiveMotionState_FUN_0040b870 ; 00460ebd
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    MOV EDX,dword ptr [0x00612274]      ; 00460ec2 | g_CDjienClassVersion
    ADD ESP,0x8                         ; 00460ec8
    CMP EDX,0x2                         ; 00460ecb
    JGE 0x00460ed3                      ; 00460ece
        ;   XREF to: 00460ed3 (CONDITIONAL_JUMP)  ; LAB_00460ed3
    POP ESI                             ; 00460ed0
    POP EBX                             ; 00460ed1
    RET                                 ; 00460ed2
    PUSH 0x5d8dbf                       ; 00460ed3 | = "numSacksBlown"
        ;   Label: LAB_00460ed3
    LEA EAX,[EBX + 0xc2d0]              ; 00460ed8
    PUSH EAX                            ; 00460ede
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00460edf
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00460ee4
    PUSH 0x5d8dcd                       ; 00460ee7 | = "numSacksToBlow"
    LEA EAX,[EBX + 0xc2d4]              ; 00460eec
    PUSH EAX                            ; 00460ef2
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00460ef3
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00460ef8
    PUSH 0x5d8ddc                       ; 00460efb | = "Sack0Damage"
    LEA EAX,[EBX + 0xc2d8]              ; 00460f00
    PUSH EAX                            ; 00460f06
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00460f07
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00460f0c
    PUSH 0x5d8de8                       ; 00460f0f | = "Sack1Damage"
    LEA EAX,[EBX + 0xc2dc]              ; 00460f14
    PUSH EAX                            ; 00460f1a
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00460f1b
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00460f20
    PUSH 0x5d8df4                       ; 00460f23 | = "Sack2Damage"
    LEA EAX,[EBX + 0xc2e0]              ; 00460f28
    PUSH EAX                            ; 00460f2e
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00460f2f
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00460f34
    PUSH 0x5d8e00                       ; 00460f37 | = "Sack3Damage"
    LEA EAX,[EBX + 0xc2e4]              ; 00460f3c
    PUSH EAX                            ; 00460f42
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00460f43
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00460f48
    PUSH 0x5d8e0c                       ; 00460f4b | = "Sack4Damage"
    LEA EAX,[EBX + 0xc2e8]              ; 00460f50
    PUSH EAX                            ; 00460f56
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00460f57
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00460f5c
    PUSH 0x5d8e18                       ; 00460f5f | = "Sack5Damage"
    ADD EBX,0xc2ec                      ; 00460f64
    PUSH EBX                            ; 00460f6a
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00460f6b
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00460f70
    PUSH 0x5d8e24                       ; 00460f73 | = "partStatus"
    PUSH ESI                            ; 00460f78
    CALL core_actor.cpp_archivePartStatus_FUN_0040b960 ; 00460f79
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040b960(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00460f7e
    POP ESI                             ; 00460f81
    POP EBX                             ; 00460f82
    RET                                 ; 00460f83

