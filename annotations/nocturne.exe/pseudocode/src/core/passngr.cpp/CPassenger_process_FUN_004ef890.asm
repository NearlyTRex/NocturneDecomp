; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_passngr_cpp_CPassenger_process_FUN_004ef890(CPassenger *this_ptr,float delta_time)
;
; Parameters:
; CPassenger *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   undefined4 DAT_005a1068
;   undefined4 DAT_005b7650
;   CDemonMission* g_CDemonMission_PTR_005baf90 = 01cc9450
;   undefined4 DAT_01cc9450
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_charactr.cpp_CCharacter_FUN_0042a150
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60
;   core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ef890
        ;   Label: core_passngr.cpp_CPassenger_process_FUN_004ef890
    PUSH ESI                            ; 004ef891
    PUSH EDI                            ; 004ef892
    PUSH EBP                            ; 004ef893
    MOV EBP,ESP                         ; 004ef894
    SUB ESP,0x10                        ; 004ef896
    AND ESP,0xfffffff8                  ; 004ef899
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ef89c
    FLD float ptr [EBX + 0x202a8]       ; 004ef89f
    FLD1                                ; 004ef8a5
    FCOMPP                              ; 004ef8a7
    FNSTSW AX                           ; 004ef8a9
    SAHF                                ; 004ef8ab
    JA 0x004ef8b5                       ; 004ef8ac
        ;   XREF to: 004ef8b5 (CONDITIONAL_JUMP)  ; LAB_004ef8b5
    MOV ESP,EBP                         ; 004ef8ae
    POP EBP                             ; 004ef8b0
    POP EDI                             ; 004ef8b1
    POP ESI                             ; 004ef8b2
    POP EBX                             ; 004ef8b3
    RET                                 ; 004ef8b4
    LEA ESI,[EBX + 0x150]               ; 004ef8b5
        ;   Label: LAB_004ef8b5
    PUSH ESI                            ; 004ef8bb
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004ef8bc
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004ef8c1
    ADD ESP,0x4                         ; 004ef8c4
    MOV EDI,EAX                         ; 004ef8c7
    CMP EAX,0x1                         ; 004ef8c9
    JZ 0x004ef975                       ; 004ef8cc
        ;   XREF to: 004ef975 (CONDITIONAL_JUMP)  ; LAB_004ef975
    CMP EAX,0x2                         ; 004ef8d2
    JZ 0x004ef975                       ; 004ef8d5
        ;   XREF to: 004ef975 (CONDITIONAL_JUMP)  ; LAB_004ef975
    LEA EAX,[EBX + 0x1f570]             ; 004ef8db
    PUSH EAX                            ; 004ef8e1
    MOV EDX,dword ptr [0x005b7650]      ; 004ef8e2 | DAT_005b7650
    PUSH EDX                            ; 004ef8e8
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004ef8e9
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004ef8ee
    TEST EAX,EAX                        ; 004ef8f1
    JNZ 0x004ef941                      ; 004ef8f3
        ;   XREF to: 004ef941 (CONDITIONAL_JUMP)  ; LAB_004ef941
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ef8f5
        ;   Label: LAB_004ef8f5
    MOV dword ptr [ESP],EAX             ; 004ef8f8
    LEA EAX,[EBX + 0x23a4]              ; 004ef8fb
    MOV dword ptr [EAX + 0x8],0x0       ; 004ef901
    LEA ESI,[EBX + 0x150]               ; 004ef908
    MOV EDX,dword ptr [EAX + 0x8]       ; 004ef90e
    MOV dword ptr [EAX + 0x4],EDX       ; 004ef911
    MOV EDX,dword ptr [EAX + 0x4]       ; 004ef914
    MOV dword ptr [EAX],EDX             ; 004ef917
    FLD float ptr [ESP]                 ; 004ef919
        ;   Label: LAB_004ef919
    FLDZ                                ; 004ef91c
    FCOMPP                              ; 004ef91e
    FNSTSW AX                           ; 004ef920
    SAHF                                ; 004ef922
    JNC 0x004ef9de                      ; 004ef923
        ;   XREF to: 004ef9de (CONDITIONAL_JUMP)  ; LAB_004ef9de
    MOV EAX,ESP                         ; 004ef929
    PUSH EAX                            ; 004ef92b
    PUSH ESI                            ; 004ef92c
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 004ef92d
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004ef932
    PUSH EAX                            ; 004ef935
    PUSH EBX                            ; 004ef936
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 004ef937
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042add0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004ef93c
    JMP 0x004ef919                      ; 004ef93f
        ;   XREF to: 004ef919 (UNCONDITIONAL_JUMP)  ; LAB_004ef919
    PUSH 0x1                            ; 004ef941
        ;   Label: LAB_004ef941
    PUSH 0x1                            ; 004ef943
    PUSH ESI                            ; 004ef945
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004ef946
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV AH,byte ptr [EBX + 0x1f614]     ; 004ef94b
    ADD ESP,0xc                         ; 004ef951
    TEST AH,AH                          ; 004ef954
    JZ 0x004ef8f5                       ; 004ef956
        ;   XREF to: 004ef8f5 (CONDITIONAL_JUMP)  ; LAB_004ef8f5
    LEA ESI,[EBX + 0x1f614]             ; 004ef958
    PUSH ESI                            ; 004ef95e
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004ef95f
    PUSH EBX                            ; 004ef965
    CALL dword ptr [EAX + 0x24]         ; 004ef966
    ADD ESP,0x8                         ; 004ef969
    MOV byte ptr [EBX + 0x1f614],0x0    ; 004ef96c
    JMP 0x004ef8f5                      ; 004ef973
        ;   XREF to: 004ef8f5 (UNCONDITIONAL_JUMP)  ; LAB_004ef8f5
    CMP EDI,0x2                         ; 004ef975
        ;   Label: LAB_004ef975
    JNZ 0x004ef8f5                      ; 004ef978
        ;   XREF to: 004ef8f5 (CONDITIONAL_JUMP)  ; LAB_004ef8f5
    FLD float ptr [EBP + 0x18]          ; 004ef97e
    FDIV float ptr [0x005a1068]         ; 004ef981 | DAT_005a1068
    FADD float ptr [EBX + 0x202a8]      ; 004ef987
    FST float ptr [EBX + 0x202a8]       ; 004ef98d
    FLD1                                ; 004ef993
    FCOMPP                              ; 004ef995
    FNSTSW AX                           ; 004ef997
    SAHF                                ; 004ef999
    JA 0x004ef8f5                       ; 004ef99a
        ;   XREF to: 004ef8f5 (CONDITIONAL_JUMP)  ; LAB_004ef8f5
    MOV EDX,dword ptr [EBX + 0x1f678]   ; 004ef9a0
    TEST EDX,EDX                        ; 004ef9a6
    JZ 0x004ef8f5                       ; 004ef9a8
        ;   XREF to: 004ef8f5 (CONDITIONAL_JUMP)  ; LAB_004ef8f5
    PUSH EDX                            ; 004ef9ae
    MOV ESI,dword ptr [0x005baf90]      ; 004ef9af | g_CDemonMission_PTR_005baf90
    PUSH ESI                            ; 004ef9b5 | DAT_01cc9450
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60 ; 004ef9b6
        ;   XREF to: 004d8c60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004ef9bb
    PUSH 0x1                            ; 004ef9be
    PUSH EBX                            ; 004ef9c0
    MOV EAX,[0x005baf90]                ; 004ef9c1 | g_CDemonMission_PTR_005baf90
    PUSH EAX                            ; 004ef9c6 | DAT_01cc9450
    MOV dword ptr [EBX + 0x1f678],0x0   ; 004ef9c7
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110 ; 004ef9d1
        ;   XREF to: 004d9110 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110(CDemonMission * this_ptr, CDemonActor * actor, uint flags)
    ADD ESP,0xc                         ; 004ef9d6
    JMP 0x004ef8f5                      ; 004ef9d9
        ;   XREF to: 004ef8f5 (UNCONDITIONAL_JUMP)  ; LAB_004ef8f5
    TEST EDI,EDI                        ; 004ef9de
        ;   Label: LAB_004ef9de
    JZ 0x004efa35                       ; 004ef9e0
        ;   XREF to: 004efa35 (CONDITIONAL_JUMP)  ; LAB_004efa35
    LEA EAX,[EBX + 0x23a4]              ; 004ef9e2
    PUSH EAX                            ; 004ef9e8
    LEA EAX,[ESP + 0x8]                 ; 004ef9e9
    PUSH EAX                            ; 004ef9ed
    PUSH EBX                            ; 004ef9ee
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 004ef9ef
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV ESI,EAX                         ; 004ef9f4
    LEA EAX,[EBX + 0x20]                ; 004ef9f6
    FLD float ptr [ESI]                 ; 004ef9f9
    FADD float ptr [EAX]                ; 004ef9fb
    FSTP float ptr [EAX]                ; 004ef9fd
    FLD float ptr [ESI + 0x4]           ; 004ef9ff
    FADD float ptr [EAX + 0x4]          ; 004efa02
    FSTP float ptr [EAX + 0x4]          ; 004efa05
    FLD float ptr [ESI + 0x8]           ; 004efa08
    FADD float ptr [EAX + 0x8]          ; 004efa0b
    FSTP float ptr [EAX + 0x8]          ; 004efa0e
    MOV ECX,dword ptr [EBX + 0x1f678]   ; 004efa11
    ADD ESP,0xc                         ; 004efa17
    TEST ECX,ECX                        ; 004efa1a
    JZ 0x004efa35                       ; 004efa1c
        ;   XREF to: 004efa35 (CONDITIONAL_JUMP)  ; LAB_004efa35
    MOV EDX,dword ptr [EAX]             ; 004efa1e
    MOV dword ptr [ECX + 0x20],EDX      ; 004efa20
    MOV EDX,dword ptr [EAX + 0x4]       ; 004efa23
    MOV dword ptr [ECX + 0x24],EDX      ; 004efa26
    MOV EDX,dword ptr [EAX + 0x8]       ; 004efa29
    MOV dword ptr [ECX + 0x28],EDX      ; 004efa2c
    MOV EAX,dword ptr [EAX + 0xc]       ; 004efa2f
    MOV dword ptr [ECX + 0x2c],EAX      ; 004efa32
    LEA EAX,[EBX + 0x150]               ; 004efa35
        ;   Label: LAB_004efa35
    PUSH EAX                            ; 004efa3b
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 004efa3c
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004efa41
    PUSH dword ptr [EBP + 0x18]         ; 004efa44
    PUSH EBX                            ; 004efa47
    CALL core_charactr.cpp_CCharacter_FUN_0042a150 ; 004efa48
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042a150(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004efa4d
    MOV ESP,EBP                         ; 004efa50
    POP EBP                             ; 004efa52
    POP EDI                             ; 004efa53
    POP ESI                             ; 004efa54
    POP EBX                             ; 004efa55
    RET                                 ; 004efa56

