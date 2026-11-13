; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_pryemorp_cpp_CPryeMorph_process_FUN_00527780(CPryeMorph *this_ptr,float delta_time)
;
; Parameters:
; CPryeMorph *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005e36d8
;   undefined4 DAT_005fba60
;   undefined4 DAT_00600530
;   undefined4 DAT_01d81080
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930
;   core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10
;   core_motion.cpp_CMotionController_advance_FUN_004fbb70
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527780
        ;   Label: core_pryemorp.cpp_CPryeMorph_process_FUN_00527780
    PUSH ESI                            ; 00527781
    PUSH EDI                            ; 00527782
    PUSH EBP                            ; 00527783
    MOV EBP,ESP                         ; 00527784
    SUB ESP,0x1c                        ; 00527786
    AND ESP,0xfffffff8                  ; 00527789
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052778c
    FLD float ptr [EBX + 0x21440]       ; 0052778f
    FLD1                                ; 00527795
    FCOMPP                              ; 00527797
    FNSTSW AX                           ; 00527799
    SAHF                                ; 0052779b
    JA 0x005277a5                       ; 0052779c
        ;   XREF to: 005277a5 (CONDITIONAL_JUMP)  ; LAB_005277a5
    MOV ESP,EBP                         ; 0052779e
    POP EBP                             ; 005277a0
    POP EDI                             ; 005277a1
    POP ESI                             ; 005277a2
    POP EBX                             ; 005277a3
    RET                                 ; 005277a4
    LEA ESI,[EBX + 0x158]               ; 005277a5
        ;   Label: LAB_005277a5
    PUSH ESI                            ; 005277ab
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005277ac
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005277b1
    ADD ESP,0x4                         ; 005277b4
    MOV EDI,EAX                         ; 005277b7
    CMP EAX,0x91                        ; 005277b9
    JZ 0x0052786f                       ; 005277be
        ;   XREF to: 0052786f (CONDITIONAL_JUMP)  ; LAB_0052786f
    CMP EAX,0x92                        ; 005277c4
    JZ 0x0052786f                       ; 005277c9
        ;   XREF to: 0052786f (CONDITIONAL_JUMP)  ; LAB_0052786f
    LEA EAX,[EBX + 0x206c8]             ; 005277cf
    PUSH EAX                            ; 005277d5
    MOV EDX,dword ptr [0x005fba60]      ; 005277d6 | DAT_005fba60
    PUSH EDX                            ; 005277dc
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 005277dd
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005277e2
    TEST EAX,EAX                        ; 005277e5
    JNZ 0x00527835                      ; 005277e7
        ;   XREF to: 00527835 (CONDITIONAL_JUMP)  ; LAB_00527835
    MOV EAX,dword ptr [EBP + 0x18]      ; 005277e9
        ;   Label: LAB_005277e9
    MOV dword ptr [ESP],EAX             ; 005277ec
    LEA EAX,[EBX + 0x249c]              ; 005277ef
    MOV dword ptr [EAX + 0x8],0x0       ; 005277f5
    LEA ESI,[EBX + 0x158]               ; 005277fc
    MOV EDX,dword ptr [EAX + 0x8]       ; 00527802
    MOV dword ptr [EAX + 0x4],EDX       ; 00527805
    MOV EDX,dword ptr [EAX + 0x4]       ; 00527808
    MOV dword ptr [EAX],EDX             ; 0052780b
    FLD float ptr [ESP]                 ; 0052780d
        ;   Label: LAB_0052780d
    FLDZ                                ; 00527810
    FCOMPP                              ; 00527812
    FNSTSW AX                           ; 00527814
    SAHF                                ; 00527816
    JNC 0x005278db                      ; 00527817
        ;   XREF to: 005278db (CONDITIONAL_JUMP)  ; LAB_005278db
    MOV EAX,ESP                         ; 0052781d
    PUSH EAX                            ; 0052781f
    PUSH ESI                            ; 00527820
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 00527821
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00527826
    PUSH EAX                            ; 00527829
    PUSH EBX                            ; 0052782a
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 0052782b
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00527830
    JMP 0x0052780d                      ; 00527833
        ;   XREF to: 0052780d (UNCONDITIONAL_JUMP)  ; LAB_0052780d
    PUSH 0x1                            ; 00527835
        ;   Label: LAB_00527835
    PUSH 0x91                           ; 00527837
    PUSH ESI                            ; 0052783c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0052783d
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV AH,byte ptr [EBX + 0x207ac]     ; 00527842
    ADD ESP,0xc                         ; 00527848
    TEST AH,AH                          ; 0052784b
    JZ 0x005277e9                       ; 0052784d
        ;   XREF to: 005277e9 (CONDITIONAL_JUMP)  ; LAB_005277e9
    LEA ESI,[EBX + 0x207ac]             ; 0052784f
    PUSH ESI                            ; 00527855
    MOV EAX,dword ptr [EBX + 0x154]     ; 00527856
    PUSH EBX                            ; 0052785c
    CALL dword ptr [EAX + 0x2c]         ; 0052785d
    ADD ESP,0x8                         ; 00527860
    MOV byte ptr [EBX + 0x207ac],0x0    ; 00527863
    JMP 0x005277e9                      ; 0052786a
        ;   XREF to: 005277e9 (UNCONDITIONAL_JUMP)  ; LAB_005277e9
    CMP EDI,0x92                        ; 0052786f
        ;   Label: LAB_0052786f
    JNZ 0x005277e9                      ; 00527875
        ;   XREF to: 005277e9 (CONDITIONAL_JUMP)  ; LAB_005277e9
    FLD float ptr [EBP + 0x18]          ; 0052787b
    FDIV float ptr [0x005e36d8]         ; 0052787e | DAT_005e36d8
    FADD float ptr [EBX + 0x21440]      ; 00527884
    FST float ptr [EBX + 0x21440]       ; 0052788a
    FLD1                                ; 00527890
    FCOMPP                              ; 00527892
    FNSTSW AX                           ; 00527894
    SAHF                                ; 00527896
    JA 0x005277e9                       ; 00527897
        ;   XREF to: 005277e9 (CONDITIONAL_JUMP)  ; LAB_005277e9
    MOV EDX,dword ptr [EBX + 0x20810]   ; 0052789d
    TEST EDX,EDX                        ; 005278a3
    JZ 0x005277e9                       ; 005278a5
        ;   XREF to: 005277e9 (CONDITIONAL_JUMP)  ; LAB_005277e9
    PUSH EDX                            ; 005278ab
    MOV ESI,dword ptr [0x00600530]      ; 005278ac | DAT_00600530
    PUSH ESI                            ; 005278b2 | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930 ; 005278b3
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005278b8
    PUSH 0x1                            ; 005278bb
    PUSH EBX                            ; 005278bd
    MOV EAX,[0x00600530]                ; 005278be | DAT_00600530
    PUSH EAX                            ; 005278c3 | DAT_01d81080
    MOV dword ptr [EBX + 0x20810],0x0   ; 005278c4
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10 ; 005278ce
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10(CDemonMission * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 005278d3
    JMP 0x005277e9                      ; 005278d6
        ;   XREF to: 005277e9 (UNCONDITIONAL_JUMP)  ; LAB_005277e9
    TEST EDI,EDI                        ; 005278db
        ;   Label: LAB_005278db
    JZ 0x00527948                       ; 005278dd
        ;   XREF to: 00527948 (CONDITIONAL_JUMP)  ; LAB_00527948
    LEA EAX,[EBX + 0x249c]              ; 005278df
    PUSH EAX                            ; 005278e5
    PUSH EBX                            ; 005278e6
    LEA ESI,[ESP + 0x18]                ; 005278e7
    LEA EDI,[ESP + 0xc]                 ; 005278eb
    CALL core_actor.cpp_FUN_00408b00    ; 005278ef
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x18]                ; 005278f4
    ADD ESP,0x8                         ; 005278f8
    LEA EAX,[EBX + 0x20]                ; 005278fb
    MOVSD ES:EDI,ESI                    ; 005278fe
    MOVSD ES:EDI,ESI                    ; 005278ff
    MOVSD ES:EDI,ESI                    ; 00527900
    FLD float ptr [EAX]                 ; 00527901
    FLD float ptr [EAX + 0x4]           ; 00527903
    FLD float ptr [EAX + 0x8]           ; 00527906
    FXCH ST2                            ; 00527909
    FADD float ptr [ESP + 0x4]          ; 0052790b
    FXCH                                ; 0052790f
    FADD float ptr [ESP + 0x8]          ; 00527911
    FXCH ST2                            ; 00527915
    FADD float ptr [ESP + 0xc]          ; 00527917
    FXCH                                ; 0052791b
    FSTP float ptr [EAX]                ; 0052791d
    FXCH                                ; 0052791f
    FSTP float ptr [EAX + 0x4]          ; 00527921
    FSTP float ptr [EAX + 0x8]          ; 00527924
    MOV ECX,dword ptr [EBX + 0x20810]   ; 00527927
    TEST ECX,ECX                        ; 0052792d
    JZ 0x00527948                       ; 0052792f
        ;   XREF to: 00527948 (CONDITIONAL_JUMP)  ; LAB_00527948
    MOV EDX,dword ptr [EAX]             ; 00527931
    MOV dword ptr [ECX + 0x20],EDX      ; 00527933
    MOV EDX,dword ptr [EAX + 0x4]       ; 00527936
    MOV dword ptr [ECX + 0x24],EDX      ; 00527939
    MOV EDX,dword ptr [EAX + 0x8]       ; 0052793c
    MOV dword ptr [ECX + 0x28],EDX      ; 0052793f
    MOV EAX,dword ptr [EAX + 0xc]       ; 00527942
    MOV dword ptr [ECX + 0x2c],EAX      ; 00527945
    LEA EAX,[EBX + 0x158]               ; 00527948
        ;   Label: LAB_00527948
    PUSH EAX                            ; 0052794e
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 0052794f
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00527954
    PUSH dword ptr [EBP + 0x18]         ; 00527957
    PUSH EBX                            ; 0052795a
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 0052795b
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00527960
    MOV ESP,EBP                         ; 00527963
    POP EBP                             ; 00527965
    POP EDI                             ; 00527966
    POP ESI                             ; 00527967
    POP EBX                             ; 00527968
    RET                                 ; 00527969

