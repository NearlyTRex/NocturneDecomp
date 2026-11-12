; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_basicene_cpp_FUN_0059ee00(CEnemy *param_1,float param_2)
;
;
; XREF[1]:
;   core_basicene.cpp_FUN_0059e8c0 at 0059ea7c
;
; Referenced Globals:
;   TerminatedCString s_Chasing_005ef968
;   undefined4 DAT_00618170
;   undefined4 DAT_01d182f0
;   undefined4 g_CPatrolPointClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_hpatrol.cpp_FUN_0059c9c0
;   core_mission.cpp_CDemonMission_findActorByName_FUN_004fc740
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_muzzle.cpp_FUN_0059d8e0
;   core_waypoint.cpp_FUN_005882d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ee00
        ;   Label: core_basicene.cpp_FUN_0059ee00
    PUSH ESI                            ; 0059ee01
    PUSH EDI                            ; 0059ee02
    PUSH EBP                            ; 0059ee03
    MOV EBX,dword ptr [ESP + 0x14]      ; 0059ee04
    PUSH dword ptr [ESP + 0x18]         ; 0059ee08
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0059ee0c
    PUSH EBX                            ; 0059ee12
    MOV dword ptr [EBX + 0x342c],0x0    ; 0059ee13
    CALL dword ptr [EAX + 0x150]        ; 0059ee1d
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 0059ee23
    ADD ESP,0x8                         ; 0059ee29
    TEST EDX,EDX                        ; 0059ee2c
    JNZ 0x0059eea2                      ; 0059ee2e
        ;   XREF to: 0059eea2 (CONDITIONAL_JUMP)  ; LAB_0059eea2
    MOV ECX,dword ptr [EBX + 0x113a4]   ; 0059ee30
    TEST ECX,ECX                        ; 0059ee36
    JZ 0x0059ef3d                       ; 0059ee38
        ;   XREF to: 0059ef3d (CONDITIONAL_JUMP)  ; LAB_0059ef3d
    MOV EDX,dword ptr [EBX + 0x113a8]   ; 0059ee3e
    TEST EDX,EDX                        ; 0059ee44
    JZ 0x0059eebb                       ; 0059ee46
        ;   XREF to: 0059eebb (CONDITIONAL_JUMP)  ; LAB_0059eebb
    MOV EDI,dword ptr [EBX + 0x113a8]   ; 0059ee48
        ;   Label: LAB_0059ee48
    LEA ESI,[EBX + 0x2b4]               ; 0059ee4e
    TEST EDI,EDI                        ; 0059ee54
    JZ 0x0059ef26                       ; 0059ee56
        ;   XREF to: 0059ef26 (CONDITIONAL_JUMP)  ; LAB_0059ef26
    PUSH 0x3f490fdb                     ; 0059ee5c
    LEA EAX,[EBX + 0x11424]             ; 0059ee61
    PUSH dword ptr [EBX + 0x1142c]      ; 0059ee67
    PUSH EAX                            ; 0059ee6d
    PUSH 0x0                            ; 0059ee6e
    LEA EAX,[EDI + 0x20]                ; 0059ee70
    PUSH EAX                            ; 0059ee73
    PUSH EBX                            ; 0059ee74
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 0059ee75
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0059ee7a
    TEST EAX,EAX                        ; 0059ee7d
    JZ 0x0059ef0f                       ; 0059ee7f
        ;   XREF to: 0059ef0f (CONDITIONAL_JUMP)  ; LAB_0059ef0f
    MOV EDX,dword ptr [EBX + 0x113a4]   ; 0059ee85
    CMP EDX,dword ptr [EBX + 0x113a8]   ; 0059ee8b
    JZ 0x0059eee4                       ; 0059ee91
        ;   XREF to: 0059eee4 (CONDITIONAL_JUMP)  ; LAB_0059eee4
    MOV dword ptr [EBX + 0x113a8],0x0   ; 0059ee93
    POP EBP                             ; 0059ee9d
        ;   Label: LAB_0059ee9d
    POP EDI                             ; 0059ee9e
    POP ESI                             ; 0059ee9f
    POP EBX                             ; 0059eea0
    RET                                 ; 0059eea1
    PUSH 0x5ef968                       ; 0059eea2 | = "Chasing"
        ;   Label: LAB_0059eea2
    ADD EBX,0x10af8                     ; 0059eea7
    PUSH EBX                            ; 0059eead
    CALL core_muzzle.cpp_FUN_0059d8e0   ; 0059eeae
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 0059eeb3
    POP EBP                             ; 0059eeb6
    POP EDI                             ; 0059eeb7
    POP ESI                             ; 0059eeb8
    POP EBX                             ; 0059eeb9
    RET                                 ; 0059eeba
    PUSH EDX                            ; 0059eebb
        ;   Label: LAB_0059eebb
    PUSH ECX                            ; 0059eebc
    LEA EAX,[EBX + 0x20]                ; 0059eebd
    PUSH EAX                            ; 0059eec0
    CALL core_waypoint.cpp_FUN_005882d0 ; 0059eec1
        ;   XREF to: 005882d0 (UNCONDITIONAL_CALL)  ; undefined core_waypoint.cpp_FUN_005882d0()
    ADD ESP,0xc                         ; 0059eec6
    MOV ESI,dword ptr [0x02668164]      ; 0059eec9 | g_CPatrolPointClassInfo.name_hash
    PUSH ESI                            ; 0059eecf
    PUSH EAX                            ; 0059eed0
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0059eed1
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0059eed6
    MOV dword ptr [EBX + 0x113a8],EAX   ; 0059eed9
    JMP 0x0059ee48                      ; 0059eedf
        ;   XREF to: 0059ee48 (UNCONDITIONAL_JUMP)  ; LAB_0059ee48
    LEA EAX,[EBX + 0x113ac]             ; 0059eee4
        ;   Label: LAB_0059eee4
    PUSH EAX                            ; 0059eeea
    MOV ECX,dword ptr [EBX + 0x113a8]   ; 0059eeeb
    PUSH ECX                            ; 0059eef1
    CALL core_hpatrol.cpp_FUN_0059c9c0  ; 0059eef2
        ;   XREF to: 0059c9c0 (UNCONDITIONAL_CALL)  ; undefined core_hpatrol.cpp_FUN_0059c9c0()
    MOV dword ptr [EBX + 0x113a8],0x0   ; 0059eef7
    ADD ESP,0x8                         ; 0059ef01
    MOV dword ptr [EBX + 0x113a4],EAX   ; 0059ef04
    POP EBP                             ; 0059ef0a
    POP EDI                             ; 0059ef0b
    POP ESI                             ; 0059ef0c
    POP EBX                             ; 0059ef0d
    RET                                 ; 0059ef0e
    PUSH 0x1                            ; 0059ef0f
        ;   Label: LAB_0059ef0f
    MOV EAX,dword ptr [EBX + 0x11388]   ; 0059ef11
    PUSH EAX                            ; 0059ef17
    PUSH ESI                            ; 0059ef18
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0059ef19
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059ef1e
    POP EBP                             ; 0059ef21
    POP EDI                             ; 0059ef22
    POP ESI                             ; 0059ef23
    POP EBX                             ; 0059ef24
    RET                                 ; 0059ef25
    PUSH 0x1                            ; 0059ef26
        ;   Label: LAB_0059ef26
    MOV EBP,dword ptr [EBX + 0x11380]   ; 0059ef28
    PUSH EBP                            ; 0059ef2e
    PUSH ESI                            ; 0059ef2f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0059ef30
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059ef35
    POP EBP                             ; 0059ef38
    POP EDI                             ; 0059ef39
    POP ESI                             ; 0059ef3a
    POP EBX                             ; 0059ef3b
    RET                                 ; 0059ef3c
    MOV ESI,dword ptr [0x02668164]      ; 0059ef3d | g_CPatrolPointClassInfo.name_hash
        ;   Label: LAB_0059ef3d
    PUSH ESI                            ; 0059ef43
    LEA EAX,[EBX + 0x10a84]             ; 0059ef44
    PUSH EAX                            ; 0059ef4a
    MOV EDI,dword ptr [0x00618170]      ; 0059ef4b | DAT_00618170
    PUSH EDI                            ; 0059ef51 | DAT_01d182f0
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_004fc740 ; 0059ef52
        ;   XREF to: 004fc740 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_004fc740(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 0059ef57
    PUSH EAX                            ; 0059ef5a
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0059ef5b
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0059ef60
    MOV dword ptr [EBX + 0x113a4],EAX   ; 0059ef63
    TEST EAX,EAX                        ; 0059ef69
    JNZ 0x0059ee9d                      ; 0059ef6b
        ;   XREF to: 0059ee9d (CONDITIONAL_JUMP)  ; LAB_0059ee9d
    PUSH 0x1                            ; 0059ef71
    MOV EAX,dword ptr [EBX + 0x11380]   ; 0059ef73
    PUSH EAX                            ; 0059ef79
    ADD EBX,0x2b4                       ; 0059ef7a
    PUSH EBX                            ; 0059ef80
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0059ef81
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059ef86
    POP EBP                             ; 0059ef89
    POP EDI                             ; 0059ef8a
    POP ESI                             ; 0059ef8b
    POP EBX                             ; 0059ef8c
    RET                                 ; 0059ef8d

