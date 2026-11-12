; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hiram_cpp_CHiram_process_FUN_004ed2b0(CHiram *this_ptr,float delta_time)
;
; Parameters:
; CHiram *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_GlassHiram_005e4c54
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061f650
;   undefined4 g_CGlassClassInfo.name_hash
;   undefined4 DAT_01d2c900
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_glass.cpp_FUN_004e34b0
;   core_mission.cpp_CDemonMission_findActorByName_FUN_0051b6c0
;   core_mission.cpp_FUN_0051b740
;   core_motion.cpp_CMotionController_advance_FUN_00524270
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed2b0
        ;   Label: core_hiram.cpp_CHiram_process_FUN_004ed2b0
    PUSH ESI                            ; 004ed2b1
    PUSH EDI                            ; 004ed2b2
    PUSH EBP                            ; 004ed2b3
    MOV EBP,ESP                         ; 004ed2b4
    SUB ESP,0x4                         ; 004ed2b6
    AND ESP,0xfffffff8                  ; 004ed2b9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ed2bc
    PUSH dword ptr [EBP + 0x18]         ; 004ed2bf
    PUSH EBX                            ; 004ed2c2
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 004ed2c3
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004ed2c8
    TEST EAX,EAX                        ; 004ed2cb
    JNZ 0x004ed2d6                      ; 004ed2cd
        ;   XREF to: 004ed2d6 (CONDITIONAL_JUMP)  ; LAB_004ed2d6
    MOV ESP,EBP                         ; 004ed2cf
    POP EBP                             ; 004ed2d1
    POP EDI                             ; 004ed2d2
    POP ESI                             ; 004ed2d3
    POP EBX                             ; 004ed2d4
    RET                                 ; 004ed2d5
    LEA ESI,[EBX + 0x158]               ; 004ed2d6
        ;   Label: LAB_004ed2d6
    PUSH ESI                            ; 004ed2dc
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004ed2dd
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004ed2e2
    ADD ESP,0x4                         ; 004ed2e5
    CMP EAX,0x1                         ; 004ed2e8
    JNZ 0x004ed34c                      ; 004ed2eb
        ;   XREF to: 004ed34c (CONDITIONAL_JUMP)  ; LAB_004ed34c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ed2ed
        ;   Label: LAB_004ed2ed
    MOV dword ptr [ESP],EAX             ; 004ed2f0
    LEA EAX,[EBX + 0x249c]              ; 004ed2f3
    MOV dword ptr [EAX + 0x8],0x0       ; 004ed2f9
    LEA ESI,[EBX + 0x158]               ; 004ed300
    MOV EDX,dword ptr [EAX + 0x8]       ; 004ed306
    MOV dword ptr [EAX + 0x4],EDX       ; 004ed309
    MOV EDX,dword ptr [EAX + 0x4]       ; 004ed30c
    MOV dword ptr [EAX],EDX             ; 004ed30f
    FLD float ptr [ESP]                 ; 004ed311
        ;   Label: LAB_004ed311
    FLDZ                                ; 004ed314
    FCOMPP                              ; 004ed316
    FNSTSW AX                           ; 004ed318
    SAHF                                ; 004ed31a
    JNC 0x004ed3c0                      ; 004ed31b
        ;   XREF to: 004ed3c0 (CONDITIONAL_JUMP)  ; LAB_004ed3c0
    MOV EAX,ESP                         ; 004ed321
    PUSH EAX                            ; 004ed323
    PUSH ESI                            ; 004ed324
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 004ed325
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004ed32a
    CMP EAX,0x29a                       ; 004ed32d
    JNZ 0x004ed3b1                      ; 004ed332
        ;   XREF to: 004ed3b1 (CONDITIONAL_JUMP)  ; LAB_004ed3b1
    PUSH 0x1                            ; 004ed338
    PUSH EBX                            ; 004ed33a
    MOV EDI,dword ptr [0x0061f650]      ; 004ed33b | DAT_0061f650
    PUSH EDI                            ; 004ed341 | DAT_01d2c900
    CALL core_mission.cpp_FUN_0051b740  ; 004ed342
        ;   XREF to: 0051b740 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_0051b740()
    ADD ESP,0xc                         ; 004ed347
    JMP 0x004ed311                      ; 004ed34a
        ;   XREF to: 004ed311 (UNCONDITIONAL_JUMP)  ; LAB_004ed311
    LEA EAX,[EBX + 0x1fab8]             ; 004ed34c
        ;   Label: LAB_004ed34c
    PUSH EAX                            ; 004ed352
    MOV EDX,dword ptr [0x0061b4d0]      ; 004ed353 | DAT_0061b4d0
    PUSH EDX                            ; 004ed359
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 004ed35a
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004ed35f
    TEST EAX,EAX                        ; 004ed362
    JZ 0x004ed2ed                       ; 004ed364
        ;   XREF to: 004ed2ed (CONDITIONAL_JUMP)  ; LAB_004ed2ed
    PUSH 0x1                            ; 004ed366
    PUSH 0x1                            ; 004ed368
    PUSH ESI                            ; 004ed36a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004ed36b
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ed370
    MOV ECX,dword ptr [0x01cd0dfc]      ; 004ed373 | g_CGlassClassInfo.name_hash
    PUSH ECX                            ; 004ed379
    PUSH 0x5e4c54                       ; 004ed37a | = "GlassHiram"
    MOV ESI,dword ptr [0x0061f650]      ; 004ed37f | DAT_0061f650
    PUSH ESI                            ; 004ed385 | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_0051b6c0 ; 004ed386
        ;   XREF to: 0051b6c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_0051b6c0(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 004ed38b
    PUSH EAX                            ; 004ed38e
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004ed38f
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ed394
    TEST EAX,EAX                        ; 004ed397
    JZ 0x004ed2ed                       ; 004ed399
        ;   XREF to: 004ed2ed (CONDITIONAL_JUMP)  ; LAB_004ed2ed
    LEA ESI,[EAX + 0x20]                ; 004ed39f
    PUSH ESI                            ; 004ed3a2
    PUSH EAX                            ; 004ed3a3
    CALL core_glass.cpp_FUN_004e34b0    ; 004ed3a4
        ;   XREF to: 004e34b0 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004e34b0()
    ADD ESP,0x8                         ; 004ed3a9
    JMP 0x004ed2ed                      ; 004ed3ac
        ;   XREF to: 004ed2ed (UNCONDITIONAL_JUMP)  ; LAB_004ed2ed
    PUSH EAX                            ; 004ed3b1
        ;   Label: LAB_004ed3b1
    PUSH EBX                            ; 004ed3b2
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 004ed3b3
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004ed3b8
    JMP 0x004ed311                      ; 004ed3bb
        ;   XREF to: 004ed311 (UNCONDITIONAL_JUMP)  ; LAB_004ed311
    PUSH ESI                            ; 004ed3c0
        ;   Label: LAB_004ed3c0
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 004ed3c1
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ed3c6
    PUSH EBX                            ; 004ed3c9
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 004ed3ca
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ed3cf
    PUSH ESI                            ; 004ed3d2
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 004ed3d3
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ed3d8
    PUSH dword ptr [EBP + 0x18]         ; 004ed3db
    PUSH EBX                            ; 004ed3de
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 004ed3df
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004ed3e4
    MOV ESP,EBP                         ; 004ed3e7
    POP EBP                             ; 004ed3e9
    POP EDI                             ; 004ed3ea
    POP ESI                             ; 004ed3eb
    POP EBX                             ; 004ed3ec
    RET                                 ; 004ed3ed

