; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hiram_cpp_CHiram_process_FUN_004b6770(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   TerminatedCString s_GlassHiram_005859df
;   undefined4 DAT_005b7650
;   undefined4 DAT_005baf90
;   undefined4 DAT_01c78c78
;   undefined4 DAT_01cc9450
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
;   core_charactr.cpp_FUN_004259f0
;   core_charactr.cpp_FUN_0042a150
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
;   FUN_004ada20
;   FUN_004d9110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b6770
        ;   Label: core_hiram.cpp_CHiram_process_FUN_004b6770
    PUSH ESI                            ; 004b6771
    PUSH EDI                            ; 004b6772
    PUSH EBP                            ; 004b6773
    MOV EBP,ESP                         ; 004b6774
    SUB ESP,0x4                         ; 004b6776
    AND ESP,0xfffffff8                  ; 004b6779
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b677c
    PUSH dword ptr [EBP + 0x18]         ; 004b677f
    PUSH EBX                            ; 004b6782
    CALL core_charactr.cpp_FUN_004259f0 ; 004b6783
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004259f0()
    ADD ESP,0x8                         ; 004b6788
    TEST EAX,EAX                        ; 004b678b
    JNZ 0x004b6796                      ; 004b678d
        ;   XREF to: 004b6796 (CONDITIONAL_JUMP)  ; LAB_004b6796
    MOV ESP,EBP                         ; 004b678f
    POP EBP                             ; 004b6791
    POP EDI                             ; 004b6792
    POP ESI                             ; 004b6793
    POP EBX                             ; 004b6794
    RET                                 ; 004b6795
    LEA ESI,[EBX + 0x150]               ; 004b6796
        ;   Label: LAB_004b6796
    PUSH ESI                            ; 004b679c
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004b679d
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004b67a2
    ADD ESP,0x4                         ; 004b67a5
    CMP EAX,0x1                         ; 004b67a8
    JNZ 0x004b680c                      ; 004b67ab
        ;   XREF to: 004b680c (CONDITIONAL_JUMP)  ; LAB_004b680c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004b67ad
        ;   Label: LAB_004b67ad
    MOV dword ptr [ESP],EAX             ; 004b67b0
    LEA EAX,[EBX + 0x23a4]              ; 004b67b3
    MOV dword ptr [EAX + 0x8],0x0       ; 004b67b9
    LEA ESI,[EBX + 0x150]               ; 004b67c0
    MOV EDX,dword ptr [EAX + 0x8]       ; 004b67c6
    MOV dword ptr [EAX + 0x4],EDX       ; 004b67c9
    MOV EDX,dword ptr [EAX + 0x4]       ; 004b67cc
    MOV dword ptr [EAX],EDX             ; 004b67cf
    FLD float ptr [ESP]                 ; 004b67d1
        ;   Label: LAB_004b67d1
    FLDZ                                ; 004b67d4
    FCOMPP                              ; 004b67d6
    FNSTSW AX                           ; 004b67d8
    SAHF                                ; 004b67da
    JNC 0x004b6880                      ; 004b67db
        ;   XREF to: 004b6880 (CONDITIONAL_JUMP)  ; LAB_004b6880
    MOV EAX,ESP                         ; 004b67e1
    PUSH EAX                            ; 004b67e3
    PUSH ESI                            ; 004b67e4
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 004b67e5
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_advance_FUN_004e11c0()
    ADD ESP,0x8                         ; 004b67ea
    CMP EAX,0x29a                       ; 004b67ed
    JNZ 0x004b6871                      ; 004b67f2
        ;   XREF to: 004b6871 (CONDITIONAL_JUMP)  ; LAB_004b6871
    PUSH 0x1                            ; 004b67f8
    PUSH EBX                            ; 004b67fa
    MOV EDI,dword ptr [0x005baf90]      ; 004b67fb | DAT_005baf90
    PUSH EDI                            ; 004b6801 | DAT_01cc9450
    CALL FUN_004d9110                   ; 004b6802
        ;   XREF to: 004d9110 (UNCONDITIONAL_CALL)  ; undefined FUN_004d9110()
    ADD ESP,0xc                         ; 004b6807
    JMP 0x004b67d1                      ; 004b680a
        ;   XREF to: 004b67d1 (UNCONDITIONAL_JUMP)  ; LAB_004b67d1
    LEA EAX,[EBX + 0x1f570]             ; 004b680c
        ;   Label: LAB_004b680c
    PUSH EAX                            ; 004b6812
    MOV EDX,dword ptr [0x005b7650]      ; 004b6813 | DAT_005b7650
    PUSH EDX                            ; 004b6819
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004b681a
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 004b681f
    TEST EAX,EAX                        ; 004b6822
    JZ 0x004b67ad                       ; 004b6824
        ;   XREF to: 004b67ad (CONDITIONAL_JUMP)  ; LAB_004b67ad
    PUSH 0x1                            ; 004b6826
    PUSH 0x1                            ; 004b6828
    PUSH ESI                            ; 004b682a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b682b
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004b6830
    MOV ECX,dword ptr [0x01c78c78]      ; 004b6833 | DAT_01c78c78
    PUSH ECX                            ; 004b6839
    PUSH 0x5859df                       ; 004b683a | = "GlassHiram"
    MOV ESI,dword ptr [0x005baf90]      ; 004b683f | DAT_005baf90
    PUSH ESI                            ; 004b6845 | DAT_01cc9450
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0 ; 004b6846
        ;   XREF to: 004d90a0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0()
    ADD ESP,0x8                         ; 004b684b
    PUSH EAX                            ; 004b684e
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004b684f
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004b6854
    TEST EAX,EAX                        ; 004b6857
    JZ 0x004b67ad                       ; 004b6859
        ;   XREF to: 004b67ad (CONDITIONAL_JUMP)  ; LAB_004b67ad
    LEA ESI,[EAX + 0x20]                ; 004b685f
    PUSH ESI                            ; 004b6862
    PUSH EAX                            ; 004b6863
    CALL FUN_004ada20                   ; 004b6864
        ;   XREF to: 004ada20 (UNCONDITIONAL_CALL)  ; undefined FUN_004ada20()
    ADD ESP,0x8                         ; 004b6869
    JMP 0x004b67ad                      ; 004b686c
        ;   XREF to: 004b67ad (UNCONDITIONAL_JUMP)  ; LAB_004b67ad
    PUSH EAX                            ; 004b6871
        ;   Label: LAB_004b6871
    PUSH EBX                            ; 004b6872
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 004b6873
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processMotion_FUN_0042add0()
    ADD ESP,0x8                         ; 004b6878
    JMP 0x004b67d1                      ; 004b687b
        ;   XREF to: 004b67d1 (UNCONDITIONAL_JUMP)  ; LAB_004b67d1
    PUSH ESI                            ; 004b6880
        ;   Label: LAB_004b6880
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 004b6881
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0()
    ADD ESP,0x4                         ; 004b6886
    PUSH EBX                            ; 004b6889
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 004b688a
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000()
    ADD ESP,0x4                         ; 004b688f
    PUSH ESI                            ; 004b6892
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 004b6893
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0()
    ADD ESP,0x4                         ; 004b6898
    PUSH dword ptr [EBP + 0x18]         ; 004b689b
    PUSH EBX                            ; 004b689e
    CALL core_charactr.cpp_FUN_0042a150 ; 004b689f
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042a150()
    ADD ESP,0x8                         ; 004b68a4
    MOV ESP,EBP                         ; 004b68a7
    POP EBP                             ; 004b68a9
    POP EDI                             ; 004b68aa
    POP ESI                             ; 004b68ab
    POP EBX                             ; 004b68ac
    RET                                 ; 004b68ad

