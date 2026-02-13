; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_hiram_cpp_CHiram_process_FUN_004f4550(CHiram *this_ptr,float delta_time)
;
; Parameters:
; CHiram *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   TerminatedCString s_GlassHiram_0062edfc
;   CEventList* g_CEventListPtr = 02d05310
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CEventList g_CEventListInstance
;   undefined4 g_CGlassClassInfo.name_hash
;   CDemonMission g_CDemonMissionInstance
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_process_FUN_00429870
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_glass.cpp_CGlass_shatter_FUN_004eaef0
;   core_mission.cpp_CDemonMission_findActorByName_FUN_00524030
;   core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4550
        ;   Label: core_hiram.cpp_CHiram_process_FUN_004f4550
    PUSH ESI                            ; 004f4551
    PUSH EDI                            ; 004f4552
    PUSH EBP                            ; 004f4553
    MOV EBP,ESP                         ; 004f4554
    SUB ESP,0x4                         ; 004f4556
    AND ESP,0xfffffff8                  ; 004f4559
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f455c
    PUSH dword ptr [EBP + 0x18]         ; 004f455f
    PUSH EBX                            ; 004f4562
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 004f4563
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f4568
    TEST EAX,EAX                        ; 004f456b
    JNZ 0x004f4576                      ; 004f456d
        ;   XREF to: 004f4576 (CONDITIONAL_JUMP)  ; LAB_004f4576
    MOV ESP,EBP                         ; 004f456f
    POP EBP                             ; 004f4571
    POP EDI                             ; 004f4572
    POP ESI                             ; 004f4573
    POP EBX                             ; 004f4574
    RET                                 ; 004f4575
    LEA ESI,[EBX + 0x158]               ; 004f4576
        ;   Label: LAB_004f4576
    PUSH ESI                            ; 004f457c
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f457d
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f4582
    ADD ESP,0x4                         ; 004f4585
    CMP EAX,0x1                         ; 004f4588
    JNZ 0x004f45ec                      ; 004f458b
        ;   XREF to: 004f45ec (CONDITIONAL_JUMP)  ; LAB_004f45ec
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f458d
        ;   Label: LAB_004f458d
    MOV dword ptr [ESP],EAX             ; 004f4590
    LEA EAX,[EBX + 0x23ac]              ; 004f4593
    MOV dword ptr [EAX + 0x8],0x0       ; 004f4599
    LEA ESI,[EBX + 0x158]               ; 004f45a0
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f45a6
    MOV dword ptr [EAX + 0x4],EDX       ; 004f45a9
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f45ac
    MOV dword ptr [EAX],EDX             ; 004f45af
    FLD float ptr [ESP]                 ; 004f45b1
        ;   Label: LAB_004f45b1
    FLDZ                                ; 004f45b4
    FCOMPP                              ; 004f45b6
    FNSTSW AX                           ; 004f45b8
    SAHF                                ; 004f45ba
    JNC 0x004f4660                      ; 004f45bb
        ;   XREF to: 004f4660 (CONDITIONAL_JUMP)  ; LAB_004f4660
    MOV EAX,ESP                         ; 004f45c1
    PUSH EAX                            ; 004f45c3
    PUSH ESI                            ; 004f45c4
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 004f45c5
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 004f45ca
    CMP EAX,0x29a                       ; 004f45cd
    JNZ 0x004f4651                      ; 004f45d2
        ;   XREF to: 004f4651 (CONDITIONAL_JUMP)  ; LAB_004f4651
    PUSH 0x1                            ; 004f45d8
    PUSH EBX                            ; 004f45da
    MOV EDI,dword ptr [0x0067d550]      ; 004f45db | g_CDemonMissionPtr
    PUSH EDI                            ; 004f45e1 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0 ; 004f45e2
        ;   XREF to: 005240a0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission * this_ptr, CDemonActor * actor, uint flags)
    ADD ESP,0xc                         ; 004f45e7
    JMP 0x004f45b1                      ; 004f45ea
        ;   XREF to: 004f45b1 (UNCONDITIONAL_JUMP)  ; LAB_004f45b1
    LEA EAX,[EBX + 0x1f708]             ; 004f45ec
        ;   Label: LAB_004f45ec
    PUSH EAX                            ; 004f45f2
    MOV EDX,dword ptr [0x006793d0]      ; 004f45f3 | g_CEventListInstance | g_CEventListPtr
    PUSH EDX                            ; 004f45f9 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 004f45fa
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004f45ff
    TEST EAX,EAX                        ; 004f4602
    JZ 0x004f458d                       ; 004f4604
        ;   XREF to: 004f458d (CONDITIONAL_JUMP)  ; LAB_004f458d
    PUSH 0x1                            ; 004f4606
    PUSH 0x1                            ; 004f4608
    PUSH ESI                            ; 004f460a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f460b
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f4610
    MOV ECX,dword ptr [0x02d83360]      ; 004f4613 | g_CGlassClassInfo.name_hash
    PUSH ECX                            ; 004f4619
    PUSH 0x62edfc                       ; 004f461a | = "GlassHiram"
    MOV ESI,dword ptr [0x0067d550]      ; 004f461f | g_CDemonMissionPtr
    PUSH ESI                            ; 004f4625 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_00524030 ; 004f4626
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_00524030(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 004f462b
    PUSH EAX                            ; 004f462e
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f462f
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f4634
    TEST EAX,EAX                        ; 004f4637
    JZ 0x004f458d                       ; 004f4639
        ;   XREF to: 004f458d (CONDITIONAL_JUMP)  ; LAB_004f458d
    LEA ESI,[EAX + 0x20]                ; 004f463f
    PUSH ESI                            ; 004f4642
    PUSH EAX                            ; 004f4643
    CALL core_glass.cpp_CGlass_shatter_FUN_004eaef0 ; 004f4644
        ;   XREF to: 004eaef0 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_shatter_FUN_004eaef0(CGlass * this_ptr, CVector3f * location)
    ADD ESP,0x8                         ; 004f4649
    JMP 0x004f458d                      ; 004f464c
        ;   XREF to: 004f458d (UNCONDITIONAL_JUMP)  ; LAB_004f458d
    PUSH EAX                            ; 004f4651
        ;   Label: LAB_004f4651
    PUSH EBX                            ; 004f4652
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 004f4653
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, uint event_id)
    ADD ESP,0x8                         ; 004f4658
    JMP 0x004f45b1                      ; 004f465b
        ;   XREF to: 004f45b1 (UNCONDITIONAL_JUMP)  ; LAB_004f45b1
    PUSH ESI                            ; 004f4660
        ;   Label: LAB_004f4660
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 004f4661
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f4666
    PUSH EBX                            ; 004f4669
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 004f466a
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f466f
    PUSH ESI                            ; 004f4672
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 004f4673
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f4678
    PUSH dword ptr [EBP + 0x18]         ; 004f467b
    PUSH EBX                            ; 004f467e
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 004f467f
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time, float param_3)
    ADD ESP,0x8                         ; 004f4684
    MOV ESP,EBP                         ; 004f4687
    POP EBP                             ; 004f4689
    POP EDI                             ; 004f468a
    POP ESI                             ; 004f468b
    POP EBX                             ; 004f468c
    RET                                 ; 004f468d

