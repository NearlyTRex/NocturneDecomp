; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_passngr.cpp_FUN_00545ef0()
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined1       Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   undefined4 DAT_00661f58
;   CEventList* g_CEventListPtr = 02d05310
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CEventList g_CEventListInstance
;   CDemonMission g_CDemonMissionInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_FUN_0042ec40
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_mission.cpp_CDemonMission_FUN_00523b70
;   core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545ef0
        ;   Label: core_passngr.cpp_FUN_00545ef0
    PUSH ESI                            ; 00545ef1
    PUSH EDI                            ; 00545ef2
    PUSH EBP                            ; 00545ef3
    MOV EBP,ESP                         ; 00545ef4
    SUB ESP,0x10                        ; 00545ef6
    AND ESP,0xfffffff8                  ; 00545ef9
    MOV EBX,dword ptr [EBP + 0x14]      ; 00545efc
    FLD float ptr [EBX + 0x20440]       ; 00545eff
    FLD1                                ; 00545f05
    FCOMPP                              ; 00545f07
    FNSTSW AX                           ; 00545f09
    SAHF                                ; 00545f0b
    JA 0x00545f15                       ; 00545f0c | LAB_00545f15
        ;   XREF to: 00545f15 (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 00545f0e
    POP EBP                             ; 00545f10
    POP EDI                             ; 00545f11
    POP ESI                             ; 00545f12
    POP EBX                             ; 00545f13
    RET                                 ; 00545f14
    LEA ESI,[EBX + 0x158]               ; 00545f15
        ;   Label: LAB_00545f15
    PUSH ESI                            ; 00545f1b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00545f1c | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00545f21
    ADD ESP,0x4                         ; 00545f24
    MOV EDI,EAX                         ; 00545f27
    CMP EAX,0x1                         ; 00545f29
    JZ 0x00545fd5                       ; 00545f2c | LAB_00545fd5
        ;   XREF to: 00545fd5 (CONDITIONAL_JUMP)
    CMP EAX,0x2                         ; 00545f32
    JZ 0x00545fd5                       ; 00545f35 | LAB_00545fd5
        ;   XREF to: 00545fd5 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x1f708]             ; 00545f3b
    PUSH EAX                            ; 00545f41
    MOV EDX,dword ptr [0x006793d0]      ; 00545f42 | CEventList g_CEventListInstance | CEventList * g_CEventListPtr
    PUSH EDX                            ; 00545f48 | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 00545f49 | int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00545f4e
    TEST EAX,EAX                        ; 00545f51
    JNZ 0x00545fa1                      ; 00545f53 | LAB_00545fa1
        ;   XREF to: 00545fa1 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x18]      ; 00545f55
        ;   Label: LAB_00545f55
    MOV dword ptr [ESP],EAX             ; 00545f58
    LEA EAX,[EBX + 0x23ac]              ; 00545f5b
    MOV dword ptr [EAX + 0x8],0x0       ; 00545f61
    LEA ESI,[EBX + 0x158]               ; 00545f68
    MOV EDX,dword ptr [EAX + 0x8]       ; 00545f6e
    MOV dword ptr [EAX + 0x4],EDX       ; 00545f71
    MOV EDX,dword ptr [EAX + 0x4]       ; 00545f74
    MOV dword ptr [EAX],EDX             ; 00545f77
    FLD float ptr [ESP]                 ; 00545f79
        ;   Label: LAB_00545f79
    FLDZ                                ; 00545f7c
    FCOMPP                              ; 00545f7e
    FNSTSW AX                           ; 00545f80
    SAHF                                ; 00545f82
    JNC 0x0054603e                      ; 00545f83 | LAB_0054603e
        ;   XREF to: 0054603e (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 00545f89
    PUSH EAX                            ; 00545f8b
    PUSH ESI                            ; 00545f8c
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 00545f8d | int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00545f92
    PUSH EAX                            ; 00545f95
    PUSH EBX                            ; 00545f96
    CALL core_charactr.cpp_CCharacter_FUN_0042ec40 ; 00545f97 | void core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00545f9c
    JMP 0x00545f79                      ; 00545f9f | LAB_00545f79
        ;   XREF to: 00545f79 (UNCONDITIONAL_JUMP)
    PUSH 0x1                            ; 00545fa1
        ;   Label: LAB_00545fa1
    PUSH 0x1                            ; 00545fa3
    PUSH ESI                            ; 00545fa5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00545fa6 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    MOV AH,byte ptr [EBX + 0x1f7ac]     ; 00545fab
    ADD ESP,0xc                         ; 00545fb1
    TEST AH,AH                          ; 00545fb4
    JZ 0x00545f55                       ; 00545fb6 | LAB_00545f55
        ;   XREF to: 00545f55 (CONDITIONAL_JUMP)
    LEA ESI,[EBX + 0x1f7ac]             ; 00545fb8
    PUSH ESI                            ; 00545fbe
    MOV EAX,dword ptr [EBX + 0x154]     ; 00545fbf
    PUSH EBX                            ; 00545fc5
    CALL dword ptr [EAX + 0x24]         ; 00545fc6
    ADD ESP,0x8                         ; 00545fc9
    MOV byte ptr [EBX + 0x1f7ac],0x0    ; 00545fcc
    JMP 0x00545f55                      ; 00545fd3 | LAB_00545f55
        ;   XREF to: 00545f55 (UNCONDITIONAL_JUMP)
    CMP EDI,0x2                         ; 00545fd5
        ;   Label: LAB_00545fd5
    JNZ 0x00545f55                      ; 00545fd8 | LAB_00545f55
        ;   XREF to: 00545f55 (CONDITIONAL_JUMP)
    FLD float ptr [EBP + 0x18]          ; 00545fde
    FDIV float ptr [0x00661f58]         ; 00545fe1 | DAT_00661f58
    FADD float ptr [EBX + 0x20440]      ; 00545fe7
    FST float ptr [EBX + 0x20440]       ; 00545fed
    FLD1                                ; 00545ff3
    FCOMPP                              ; 00545ff5
    FNSTSW AX                           ; 00545ff7
    SAHF                                ; 00545ff9
    JA 0x00545f55                       ; 00545ffa | LAB_00545f55
        ;   XREF to: 00545f55 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX + 0x1f810]   ; 00546000
    TEST EDX,EDX                        ; 00546006
    JZ 0x00545f55                       ; 00546008 | LAB_00545f55
        ;   XREF to: 00545f55 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 0054600e
    MOV ESI,dword ptr [0x0067d550]      ; 0054600f | CDemonMission * g_CDemonMissionPtr
    PUSH ESI                            ; 00546015 | CDemonMission g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_FUN_00523b70 ; 00546016 | void core_mission.cpp_CDemonMission_FUN_00523b70(CDemonMission * this_ptr)
        ;   XREF to: 00523b70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054601b
    PUSH 0x1                            ; 0054601e
    PUSH EBX                            ; 00546020
    MOV EAX,[0x0067d550]                ; 00546021 | CDemonMission g_CDemonMissionInstance | CDemonMission * g_CDemonMissionPtr
    PUSH EAX                            ; 00546026 | CDemonMission g_CDemonMissionInstance
    MOV dword ptr [EBX + 0x1f810],0x0   ; 00546027
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0 ; 00546031 | void core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission * this_ptr)
        ;   XREF to: 005240a0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00546036
    JMP 0x00545f55                      ; 00546039 | LAB_00545f55
        ;   XREF to: 00545f55 (UNCONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 0054603e
        ;   Label: LAB_0054603e
    JZ 0x00546095                       ; 00546040 | LAB_00546095
        ;   XREF to: 00546095 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x23ac]              ; 00546042
    PUSH EAX                            ; 00546048
    LEA EAX,[ESP + 0x8]                 ; 00546049
    PUSH EAX                            ; 0054604d
    PUSH EBX                            ; 0054604e
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 0054604f | CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)
    MOV ESI,EAX                         ; 00546054
    LEA EAX,[EBX + 0x20]                ; 00546056
    FLD float ptr [ESI]                 ; 00546059
    FADD float ptr [EAX]                ; 0054605b
    FSTP float ptr [EAX]                ; 0054605d
    FLD float ptr [ESI + 0x4]           ; 0054605f
    FADD float ptr [EAX + 0x4]          ; 00546062
    FSTP float ptr [EAX + 0x4]          ; 00546065
    FLD float ptr [ESI + 0x8]           ; 00546068
    FADD float ptr [EAX + 0x8]          ; 0054606b
    FSTP float ptr [EAX + 0x8]          ; 0054606e
    MOV ECX,dword ptr [EBX + 0x1f810]   ; 00546071
    ADD ESP,0xc                         ; 00546077
    TEST ECX,ECX                        ; 0054607a
    JZ 0x00546095                       ; 0054607c | LAB_00546095
        ;   XREF to: 00546095 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX]             ; 0054607e
    MOV dword ptr [ECX + 0x20],EDX      ; 00546080
    MOV EDX,dword ptr [EAX + 0x4]       ; 00546083
    MOV dword ptr [ECX + 0x24],EDX      ; 00546086
    MOV EDX,dword ptr [EAX + 0x8]       ; 00546089
    MOV dword ptr [ECX + 0x28],EDX      ; 0054608c
    MOV EAX,dword ptr [EAX + 0xc]       ; 0054608f
    MOV dword ptr [ECX + 0x2c],EAX      ; 00546092
    LEA EAX,[EBX + 0x158]               ; 00546095
        ;   Label: LAB_00546095
    PUSH EAX                            ; 0054609b
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 0054609c | void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005460a1
    PUSH dword ptr [EBP + 0x18]         ; 005460a4
    PUSH EBX                            ; 005460a7
    CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0 ; 005460a8 | void core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr)
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005460ad
    MOV ESP,EBP                         ; 005460b0
    POP EBP                             ; 005460b2
    POP EDI                             ; 005460b3
    POP ESI                             ; 005460b4
    POP EBX                             ; 005460b5
    RET                                 ; 005460b6

