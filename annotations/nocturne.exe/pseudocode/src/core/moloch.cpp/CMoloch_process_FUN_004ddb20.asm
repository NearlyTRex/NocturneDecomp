; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_moloch_cpp_CMoloch_process_FUN_004ddb20(CMoloch *param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x1b18]:4  local_1b18
; undefined4       Stack[-0x1b14]:4  local_1b14
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_s_confused_while_walking_0058a76f
;   TerminatedCString s_moloch_h_dfm_0058a799
;   TerminatedCString s_moloch_d_dfm_0058a7a6
;   TerminatedCString s_moloch_d_dfm_0058a7b3
;   TerminatedCString s_moloch_h_dfm_0058a7c0
;   double DOUBLE_0058a7d2 = 12.5663706140000
;   double DOUBLE_0058a7da = 0.333333333333333
;   double DOUBLE_0058a7e2 = 32
;   double DOUBLE_0058a7ea = -1.57079632675000
;   float FLOAT_0058a7f2 = 3.141593
;   double DOUBLE_0058a7fa = 1.57079632675000
;   double DOUBLE_0058a802 = 1.59386252192652E-314
;   double DOUBLE_0058a80a = 3.14159265350000
;   undefined4 DAT_005a0ab8
;   void* PTR_DAT_005ad350 = 0077ad0c
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
;   core_charactr.cpp_FUN_004259f0
;   core_charactr.cpp_FUN_00428c00
;   core_charactr.cpp_FUN_0042a150
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_moloch.cpp_CMoloch_processAI_FUN_004de1b0
;   core_moloch.cpp_CMoloch_startMorph_FUN_004de700
;   core_morph.cpp_CMorph_getReady_FUN_004e03c0
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ddb20
        ;   Label: core_moloch.cpp_CMoloch_process_FUN_004ddb20
    PUSH ESI                            ; 004ddb21
    PUSH EDI                            ; 004ddb22
    PUSH EBP                            ; 004ddb23
    MOV EBP,ESP                         ; 004ddb24
    SUB ESP,0x1b08                      ; 004ddb26
    AND ESP,0xfffffff8                  ; 004ddb2c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ddb2f
    CMP dword ptr [EBX + 0x1fa38],0x4   ; 004ddb32
    JNZ 0x004ddb42                      ; 004ddb39
        ;   XREF to: 004ddb42 (CONDITIONAL_JUMP)  ; LAB_004ddb42
    MOV ESP,EBP                         ; 004ddb3b
        ;   Label: LAB_004ddb3b
    POP EBP                             ; 004ddb3d
    POP EDI                             ; 004ddb3e
    POP ESI                             ; 004ddb3f
    POP EBX                             ; 004ddb40
    RET                                 ; 004ddb41
    PUSH dword ptr [EBP + 0x18]         ; 004ddb42
        ;   Label: LAB_004ddb42
    PUSH EBX                            ; 004ddb45
    CALL core_charactr.cpp_FUN_004259f0 ; 004ddb46
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_004259f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004ddb4b
    TEST EAX,EAX                        ; 004ddb4e
    JZ 0x004ddb3b                       ; 004ddb50
        ;   XREF to: 004ddb3b (CONDITIONAL_JUMP)  ; LAB_004ddb3b
    FLD float ptr [EBX + 0xbc8c]        ; 004ddb52
    FSUB float ptr [EBP + 0x18]         ; 004ddb58
    FST float ptr [EBX + 0xbc8c]        ; 004ddb5b
    FLDZ                                ; 004ddb61
    FCOMPP                              ; 004ddb63
    FNSTSW AX                           ; 004ddb65
    SAHF                                ; 004ddb67
    JA 0x004ddbb6                       ; 004ddb68
        ;   XREF to: 004ddbb6 (CONDITIONAL_JUMP)  ; LAB_004ddbb6
    LEA EAX,[EBX + 0x23a4]              ; 004ddb6a
        ;   Label: LAB_004ddb6a
    MOV dword ptr [EAX + 0x8],0x0       ; 004ddb70
    MOV EDX,dword ptr [EAX + 0x8]       ; 004ddb77
    MOV dword ptr [EAX + 0x4],EDX       ; 004ddb7a
    MOV EDX,dword ptr [EAX + 0x4]       ; 004ddb7d
    MOV dword ptr [EAX],EDX             ; 004ddb80
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ddb82
    LEA ESI,[EBX + 0x150]               ; 004ddb85
    MOV dword ptr [ESP + 0x4],EAX       ; 004ddb8b
    FLD float ptr [ESP + 0x4]           ; 004ddb8f
        ;   Label: LAB_004ddb8f
    FLDZ                                ; 004ddb93
    FCOMPP                              ; 004ddb95
    FNSTSW AX                           ; 004ddb97
    SAHF                                ; 004ddb99
    JNC 0x004ddbc2                      ; 004ddb9a
        ;   XREF to: 004ddbc2 (CONDITIONAL_JUMP)  ; LAB_004ddbc2
    LEA EAX,[ESP + 0x4]                 ; 004ddb9c
    PUSH EAX                            ; 004ddba0
    PUSH ESI                            ; 004ddba1
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 004ddba2
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004ddba7
    PUSH EAX                            ; 004ddbaa
    PUSH EBX                            ; 004ddbab
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 004ddbac
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042add0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004ddbb1
    JMP 0x004ddb8f                      ; 004ddbb4
        ;   XREF to: 004ddb8f (UNCONDITIONAL_JUMP)  ; LAB_004ddb8f
    MOV dword ptr [EBX + 0xbc8c],0x0    ; 004ddbb6
        ;   Label: LAB_004ddbb6
    JMP 0x004ddb6a                      ; 004ddbc0
        ;   XREF to: 004ddb6a (UNCONDITIONAL_JUMP)  ; LAB_004ddb6a
    FLD float ptr [EBP + 0x18]          ; 004ddbc2
        ;   Label: LAB_004ddbc2
    FMUL double ptr [0x0058a7d2]        ; 004ddbc5 | DOUBLE_0058a7d2
    FLD float ptr [EBX + 0x23ac]        ; 004ddbcb
    MOV EAX,[0x005b9354]                ; 004ddbd1 | DAT_005b9354
    FSTP float ptr [EBX + 0x242c]       ; 004ddbd6
    FSTP float ptr [EBX + 0x2430]       ; 004ddbdc
    CMP dword ptr [EAX + 0x228],0x0     ; 004ddbe2 | DAT_01c77814
    JZ 0x004ddbfd                       ; 004ddbe9
        ;   XREF to: 004ddbfd (CONDITIONAL_JUMP)  ; LAB_004ddbfd
    FLD float ptr [EBX + 0x2430]        ; 004ddbeb
    FMUL double ptr [0x0058a7da]        ; 004ddbf1 | DOUBLE_0058a7da
    FSTP float ptr [EBX + 0x2430]       ; 004ddbf7
    PUSH dword ptr [EBP + 0x18]         ; 004ddbfd
        ;   Label: LAB_004ddbfd
    PUSH EBX                            ; 004ddc00
    CALL core_charactr.cpp_FUN_00428c00 ; 004ddc01
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00428c00(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004ddc06
    TEST EAX,EAX                        ; 004ddc09
    JZ 0x004dde4e                       ; 004ddc0b
        ;   XREF to: 004dde4e (CONDITIONAL_JUMP)  ; LAB_004dde4e
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 004ddc11
    LEA ESI,[EBX + 0x150]               ; 004ddc17
    CMP EAX,0x2                         ; 004ddc1d
    JNC 0x004dde37                      ; 004ddc20
        ;   XREF to: 004dde37 (CONDITIONAL_JUMP)  ; LAB_004dde37
    CMP EAX,0x1                         ; 004ddc26
    JNZ 0x004dde3e                      ; 004ddc29
        ;   XREF to: 004dde3e (CONDITIONAL_JUMP)  ; LAB_004dde3e
    PUSH EAX                            ; 004ddc2f
    PUSH EAX                            ; 004ddc30
    PUSH ESI                            ; 004ddc31
        ;   Label: LAB_004ddc31
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004ddc32
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004ddc32
    ADD ESP,0xc                         ; 004ddc37
        ;   Label: LAB_004ddc37
    MOV EDX,dword ptr [EBX + 0x2590]    ; 004ddc3a
        ;   Label: LAB_004ddc3a
    TEST EDX,EDX                        ; 004ddc40
    JZ 0x004ddf44                       ; 004ddc42
        ;   XREF to: 004ddf44 (CONDITIONAL_JUMP)  ; LAB_004ddf44
    CMP dword ptr [EBX + 0x2594],0x0    ; 004ddc48
    JNZ 0x004ddd27                      ; 004ddc4f
        ;   XREF to: 004ddd27 (CONDITIONAL_JUMP)  ; LAB_004ddd27
    LEA EAX,[EDX + 0x20]                ; 004ddc55
    PUSH EAX                            ; 004ddc58
    LEA EAX,[ESP + 0x1ac0]              ; 004ddc59
    PUSH EAX                            ; 004ddc60
    PUSH EBX                            ; 004ddc61
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004ddc62
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004ddc67
    PUSH EAX                            ; 004ddc6a
    LEA EAX,[ESP + 0x1acc]              ; 004ddc6b
    PUSH EAX                            ; 004ddc72
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004ddc73
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 004ddc78
    PUSH dword ptr [EAX + 0x4]          ; 004ddc7b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004ddc7e
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x1b08],EAX    ; 004ddc83
    FLD float ptr [ESP + 0x1b08]        ; 004ddc8a
    ADD ESP,0x4                         ; 004ddc91
    FST float ptr [ESP]                 ; 004ddc94
    FCOMP double ptr [0x0058a7ea]       ; 004ddc97 | DOUBLE_0058a7ea
    FNSTSW AX                           ; 004ddc9d
    SAHF                                ; 004ddc9f
    JNC 0x004ddcae                      ; 004ddca0
        ;   XREF to: 004ddcae (CONDITIONAL_JUMP)  ; LAB_004ddcae
    FLD float ptr [ESP]                 ; 004ddca2
    FADD float ptr [0x0058a7f2]         ; 004ddca5 | FLOAT_0058a7f2
    FSTP float ptr [ESP]                ; 004ddcab
    FLD float ptr [ESP]                 ; 004ddcae
        ;   Label: LAB_004ddcae
    FCOMP double ptr [0x0058a7fa]       ; 004ddcb1 | DOUBLE_0058a7fa
    FNSTSW AX                           ; 004ddcb7
    SAHF                                ; 004ddcb9
    JBE 0x004ddcc8                      ; 004ddcba
        ;   XREF to: 004ddcc8 (CONDITIONAL_JUMP)  ; LAB_004ddcc8
    FLD float ptr [ESP]                 ; 004ddcbc
    FADD float ptr [0x0058a802]         ; 004ddcbf | DOUBLE_0058a802
    FSTP float ptr [ESP]                ; 004ddcc5
    FLD float ptr [EBP + 0x18]          ; 004ddcc8
        ;   Label: LAB_004ddcc8
    FMUL double ptr [0x0058a80a]        ; 004ddccb | DOUBLE_0058a80a
    FLD float ptr [ESP]                 ; 004ddcd1
    FXCH                                ; 004ddcd4
    FST float ptr [ESP + 0x1b00]        ; 004ddcd6
    FCHS                                ; 004ddcdd
    FSTP float ptr [ESP + 0x1afc]       ; 004ddcdf
    FCOMP float ptr [ESP + 0x1afc]      ; 004ddce6
    FNSTSW AX                           ; 004ddced
    SAHF                                ; 004ddcef
    JNC 0x004ddcfc                      ; 004ddcf0
        ;   XREF to: 004ddcfc (CONDITIONAL_JUMP)  ; LAB_004ddcfc
    MOV EAX,dword ptr [ESP + 0x1afc]    ; 004ddcf2
    MOV dword ptr [ESP],EAX             ; 004ddcf9
    FLD float ptr [ESP]                 ; 004ddcfc
        ;   Label: LAB_004ddcfc
    FCOMP float ptr [ESP + 0x1b00]      ; 004ddcff
    FNSTSW AX                           ; 004ddd06
    SAHF                                ; 004ddd08
    JBE 0x004ddd15                      ; 004ddd09
        ;   XREF to: 004ddd15 (CONDITIONAL_JUMP)  ; LAB_004ddd15
    MOV EAX,dword ptr [ESP + 0x1b00]    ; 004ddd0b
    MOV dword ptr [ESP],EAX             ; 004ddd12
    FLD float ptr [EBX + 0x34]          ; 004ddd15
        ;   Label: LAB_004ddd15
    FADD float ptr [ESP]                ; 004ddd18
    PUSH EBX                            ; 004ddd1b
    FSTP float ptr [EBX + 0x34]         ; 004ddd1c
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 004ddd1f
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ddd24
    MOV ESI,dword ptr [EBX + 0x2590]    ; 004ddd27
        ;   Label: LAB_004ddd27
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004ddd2d
    PUSH 0x0                            ; 004ddd33
    MOV dword ptr [ESP + 0x1b08],EAX    ; 004ddd35
    LEA EAX,[ESP + 0x1ad8]              ; 004ddd3c
    PUSH EAX                            ; 004ddd43
    LEA EDI,[EBX + 0x150]               ; 004ddd44
    PUSH EDI                            ; 004ddd4a
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004ddd4b
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004ddd50
    PUSH EAX                            ; 004ddd53
    PUSH EBX                            ; 004ddd54
    MOV EAX,dword ptr [ESP + 0x1b0c]    ; 004ddd55
    PUSH ESI                            ; 004ddd5c
    CALL dword ptr [EAX + 0x108]        ; 004ddd5d
    ADD ESP,0xc                         ; 004ddd63
    TEST EAX,EAX                        ; 004ddd66
    JZ 0x004ddf22                       ; 004ddd68
        ;   XREF to: 004ddf22 (CONDITIONAL_JUMP)  ; LAB_004ddf22
    CMP dword ptr [EBX + 0x2590],0x0    ; 004ddd6e
    JNZ 0x004ddf2d                      ; 004ddd75
        ;   XREF to: 004ddf2d (CONDITIONAL_JUMP)  ; LAB_004ddf2d
    PUSH 0x1                            ; 004ddd7b
        ;   Label: LAB_004ddd7b
    PUSH 0x0                            ; 004ddd7d
    LEA EAX,[EBX + 0x150]               ; 004ddd7f
    PUSH EAX                            ; 004ddd85
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004ddd86
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004ddd86
    ADD ESP,0xc                         ; 004ddd8b
    PUSH EBX                            ; 004ddd8e
        ;   Label: LAB_004ddd8e
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 004ddd8f
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_004259a0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004ddd94
    LEA ESI,[EBX + 0x150]               ; 004ddd97
    PUSH ESI                            ; 004ddd9d
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 004ddd9e
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ddda3
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004ddda6
    PUSH EBX                            ; 004dddac
    CALL dword ptr [EAX + 0x104]        ; 004dddad
    ADD ESP,0x4                         ; 004dddb3
    PUSH dword ptr [EBP + 0x18]         ; 004dddb6
    PUSH EBX                            ; 004dddb9
    CALL core_charactr.cpp_FUN_0042a150 ; 004dddba
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042a150(CCharacter * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x21cf4]   ; 004dddbf
    ADD ESP,0x8                         ; 004dddc5
    TEST EDX,EDX                        ; 004dddc8
    JNZ 0x004de028                      ; 004dddca
        ;   XREF to: 004de028 (CONDITIONAL_JUMP)  ; LAB_004de028
    CMP dword ptr [EBX + 0x21cf0],0x0   ; 004dddd0
    JZ 0x004de174                       ; 004dddd7
        ;   XREF to: 004de174 (CONDITIONAL_JUMP)  ; LAB_004de174
    LEA EAX,[EBX + 0x21cfc]             ; 004ddddd
    PUSH EAX                            ; 004ddde3
    MOV EDI,dword ptr [0x005b7650]      ; 004ddde4 | DAT_005b7650
    PUSH EDI                            ; 004dddea
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004dddeb
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004dddf0
    TEST EAX,EAX                        ; 004dddf3
    JZ 0x004ddb3b                       ; 004dddf5
        ;   XREF to: 004ddb3b (CONDITIONAL_JUMP)  ; LAB_004ddb3b
    PUSH EBX                            ; 004dddfb
    CALL core_moloch.cpp_CMoloch_startMorph_FUN_004de700 ; 004dddfc
        ;   XREF to: 004de700 (UNCONDITIONAL_CALL)  ; void core_moloch.cpp_CMoloch_startMorph_FUN_004de700(CMoloch * this_ptr)
    ADD ESP,0x4                         ; 004dde01
    MOV ESP,EBP                         ; 004dde04
    POP EBP                             ; 004dde06
    POP EDI                             ; 004dde07
    POP ESI                             ; 004dde08
    POP EBX                             ; 004dde09
    RET                                 ; 004dde0a
    PUSH 0x1                            ; 004dde0b
        ;   Label: LAB_004dde0b
    PUSH 0x0                            ; 004dde0d
    PUSH ESI                            ; 004dde0f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004dde10
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004dde15
    PUSH EBX                            ; 004dde18
    PUSH 0x58a76f                       ; 004dde19 | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x005ad350]                ; 004dde1e | PTR_DAT_005ad350
    PUSH EAX                            ; 004dde23 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004dde24
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    JMP 0x004ddc37                      ; 004dde29
        ;   XREF to: 004ddc37 (UNCONDITIONAL_JUMP)  ; LAB_004ddc37
    PUSH 0x1                            ; 004dde2e
        ;   Label: LAB_004dde2e
    PUSH 0x1                            ; 004dde30
    JMP 0x004ddc31                      ; 004dde32
        ;   XREF to: 004ddc31 (UNCONDITIONAL_JUMP)  ; LAB_004ddc31
    JBE 0x004dde2e                      ; 004dde37
        ;   XREF to: 004dde2e (CONDITIONAL_JUMP)  ; LAB_004dde2e
        ;   Label: LAB_004dde37
    CMP EAX,0x3                         ; 004dde39
    JZ 0x004dde0b                       ; 004dde3c
        ;   XREF to: 004dde0b (CONDITIONAL_JUMP)  ; LAB_004dde0b
    PUSH 0x1                            ; 004dde3e
        ;   Label: LAB_004dde3e
    PUSH 0x0                            ; 004dde40
    LEA EAX,[EBX + 0x150]               ; 004dde42
    PUSH EAX                            ; 004dde48
    JMP 0x004ddc32                      ; 004dde49
        ;   XREF to: 004ddc32 (UNCONDITIONAL_JUMP)  ; LAB_004ddc32
    CMP dword ptr [EBX + 0xbc90],0x2    ; 004dde4e
        ;   Label: LAB_004dde4e
    JNZ 0x004dde63                      ; 004dde55
        ;   XREF to: 004dde63 (CONDITIONAL_JUMP)  ; LAB_004dde63
    PUSH dword ptr [EBP + 0x18]         ; 004dde57
    PUSH EBX                            ; 004dde5a
    CALL core_moloch.cpp_CMoloch_processAI_FUN_004de1b0 ; 004dde5b
        ;   XREF to: 004de1b0 (UNCONDITIONAL_CALL)  ; void core_moloch.cpp_CMoloch_processAI_FUN_004de1b0(CMoloch * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004dde60
    LEA EAX,[EBX + 0x150]               ; 004dde63
        ;   Label: LAB_004dde63
    PUSH EAX                            ; 004dde69
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004dde6a
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004dde6f
    ADD ESP,0x4                         ; 004dde72
    CMP EAX,0x1                         ; 004dde75
    JNC 0x004ddf0e                      ; 004dde78
        ;   XREF to: 004ddf0e (CONDITIONAL_JUMP)  ; LAB_004ddf0e
    TEST EAX,EAX                        ; 004dde7e
    JNZ 0x004ddc3a                      ; 004dde80
        ;   XREF to: 004ddc3a (CONDITIONAL_JUMP)  ; LAB_004ddc3a
    CMP dword ptr [EBX + 0x2408],0x0    ; 004dde86
        ;   Label: LAB_004dde86
    JZ 0x004ddc3a                       ; 004dde8d
        ;   XREF to: 004ddc3a (CONDITIONAL_JUMP)  ; LAB_004ddc3a
    MOV EAX,dword ptr [EBX + 0xbc94]    ; 004dde93
    XOR ESI,ESI                         ; 004dde99
    TEST EAX,EAX                        ; 004dde9b
    JZ 0x004ddea4                       ; 004dde9d
        ;   XREF to: 004ddea4 (CONDITIONAL_JUMP)  ; LAB_004ddea4
    MOV ESI,0x1                         ; 004dde9f
    CMP dword ptr [EBX + 0xbc98],0x0    ; 004ddea4
        ;   Label: LAB_004ddea4
    JZ 0x004ddeb2                       ; 004ddeab
        ;   XREF to: 004ddeb2 (CONDITIONAL_JUMP)  ; LAB_004ddeb2
    MOV ESI,0x2                         ; 004ddead
    CMP dword ptr [EBX + 0xbcac],0x0    ; 004ddeb2
        ;   Label: LAB_004ddeb2
    JZ 0x004ddece                       ; 004ddeb9
        ;   XREF to: 004ddece (CONDITIONAL_JUMP)  ; LAB_004ddece
    CMP dword ptr [EBX + 0x21cf4],0x0   ; 004ddebb
    JZ 0x004ddf03                       ; 004ddec2
        ;   XREF to: 004ddf03 (CONDITIONAL_JUMP)  ; LAB_004ddf03
    MOV dword ptr [EBX + 0xbcac],0x0    ; 004ddec4
        ;   Label: LAB_004ddec4
    FLD float ptr [EBX + 0xbcb8]        ; 004ddece
        ;   Label: LAB_004ddece
    LEA EDI,[EBX + 0x150]               ; 004dded4
    FMUL float ptr [EBX + 0x2430]       ; 004ddeda
    PUSH EDI                            ; 004ddee0
    FSTP float ptr [EBX + 0x2410]       ; 004ddee1
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004ddee7
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004ddeec
    ADD ESP,0x4                         ; 004ddeef
    CMP ESI,EAX                         ; 004ddef2
    JZ 0x004ddc3a                       ; 004ddef4
        ;   XREF to: 004ddc3a (CONDITIONAL_JUMP)  ; LAB_004ddc3a
    PUSH 0x1                            ; 004ddefa
    PUSH ESI                            ; 004ddefc
    PUSH EDI                            ; 004ddefd
    JMP 0x004ddc32                      ; 004ddefe
        ;   XREF to: 004ddc32 (UNCONDITIONAL_JUMP)  ; LAB_004ddc32
    PUSH EBX                            ; 004ddf03
        ;   Label: LAB_004ddf03
    CALL core_moloch.cpp_CMoloch_startMorph_FUN_004de700 ; 004ddf04
        ;   XREF to: 004de700 (UNCONDITIONAL_CALL)  ; void core_moloch.cpp_CMoloch_startMorph_FUN_004de700(CMoloch * this_ptr)
    ADD ESP,0x4                         ; 004ddf09
    JMP 0x004ddec4                      ; 004ddf0c
        ;   XREF to: 004ddec4 (UNCONDITIONAL_JUMP)  ; LAB_004ddec4
    JBE 0x004dde86                      ; 004ddf0e
        ;   XREF to: 004dde86 (CONDITIONAL_JUMP)  ; LAB_004dde86
        ;   Label: LAB_004ddf0e
    CMP EAX,0x2                         ; 004ddf14
    JZ 0x004dde86                       ; 004ddf17
        ;   XREF to: 004dde86 (CONDITIONAL_JUMP)  ; LAB_004dde86
    JMP 0x004ddc3a                      ; 004ddf1d
        ;   XREF to: 004ddc3a (UNCONDITIONAL_JUMP)  ; LAB_004ddc3a
    MOV dword ptr [EBX + 0x2590],EAX    ; 004ddf22
        ;   Label: LAB_004ddf22
    JMP 0x004ddd7b                      ; 004ddf28
        ;   XREF to: 004ddd7b (UNCONDITIONAL_JUMP)  ; LAB_004ddd7b
    CMP dword ptr [EBX + 0xbca0],0x0    ; 004ddf2d
        ;   Label: LAB_004ddf2d
    JZ 0x004ddd8e                       ; 004ddf34
        ;   XREF to: 004ddd8e (CONDITIONAL_JUMP)  ; LAB_004ddd8e
    PUSH 0x1                            ; 004ddf3a
    PUSH 0x0                            ; 004ddf3c
    PUSH EDI                            ; 004ddf3e
    JMP 0x004ddd86                      ; 004ddf3f
        ;   XREF to: 004ddd86 (UNCONDITIONAL_JUMP)  ; LAB_004ddd86
    FLD float ptr [EBP + 0x18]          ; 004ddf44
        ;   Label: LAB_004ddf44
    FLD ST0                             ; 004ddf47
    FMUL double ptr [0x0058a7e2]        ; 004ddf49 | DOUBLE_0058a7e2
    FLD float ptr [EBX + 0x2424]        ; 004ddf4f
    FXCH                                ; 004ddf55
    FSUBR ST0,ST1                       ; 004ddf57
    LEA EAX,[EBX + 0x2420]              ; 004ddf59
    FSTP ST1                            ; 004ddf5f
    FSTP float ptr [EBX + 0x2424]       ; 004ddf61
    FLD float ptr [EAX]                 ; 004ddf67
    FMUL ST1                            ; 004ddf69
    FSTP float ptr [ESP + 0x1ae0]       ; 004ddf6b
    FLD float ptr [EAX + 0x4]           ; 004ddf72
    FMUL ST1                            ; 004ddf75
    LEA ESI,[EBX + 0x23a4]              ; 004ddf77
    FSTP float ptr [ESP + 0x1ae4]       ; 004ddf7d
    FMUL float ptr [EAX + 0x8]          ; 004ddf84
    LEA EAX,[EBX + 0x2414]              ; 004ddf87
    FSTP float ptr [ESP + 0x1ae8]       ; 004ddf8d
    FLD float ptr [ESI]                 ; 004ddf94
    FADD float ptr [EAX]                ; 004ddf96
    FST float ptr [ESP + 0x1aa4]        ; 004ddf98
    FLD float ptr [ESI + 0x4]           ; 004ddf9f
    FADD float ptr [EAX + 0x4]          ; 004ddfa2
    FXCH                                ; 004ddfa5
    FADD float ptr [ESP + 0x1ae0]       ; 004ddfa7
    FXCH                                ; 004ddfae
    FST float ptr [ESP + 0x1aa8]        ; 004ddfb0
    FLD float ptr [ESI + 0x8]           ; 004ddfb7
    FADD float ptr [EAX + 0x8]          ; 004ddfba
    FXCH                                ; 004ddfbd
    FADD float ptr [ESP + 0x1ae4]       ; 004ddfbf
    FXCH                                ; 004ddfc6
    FSTP float ptr [ESP + 0x1aac]       ; 004ddfc8
    FXCH                                ; 004ddfcf
    FSTP float ptr [ESP + 0x1ab0]       ; 004ddfd1
    FLD float ptr [ESP + 0x1aac]        ; 004ddfd8
    FADD float ptr [ESP + 0x1ae8]       ; 004ddfdf
    FXCH                                ; 004ddfe6
    FSTP float ptr [ESP + 0x1ab4]       ; 004ddfe8
    FSTP float ptr [ESP + 0x1ab8]       ; 004ddfef
    MOV dword ptr [ESI + 0x8],EDX       ; 004ddff6
    MOV ECX,dword ptr [ESI + 0x8]       ; 004ddff9
    MOV dword ptr [ESI + 0x4],ECX       ; 004ddffc
    MOV ECX,dword ptr [ESI + 0x4]       ; 004ddfff
    MOV dword ptr [ESI],ECX             ; 004de002
    MOV dword ptr [EAX + 0x8],EDX       ; 004de004
    MOV EDX,dword ptr [EAX + 0x8]       ; 004de007
    MOV dword ptr [EAX + 0x4],EDX       ; 004de00a
    MOV EDX,dword ptr [EAX + 0x4]       ; 004de00d
    MOV dword ptr [EAX],EDX             ; 004de010
    LEA EAX,[ESP + 0x1ab0]              ; 004de012
    PUSH EAX                            ; 004de019
    PUSH EBX                            ; 004de01a
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 004de01b
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004de020
    JMP 0x004ddd8e                      ; 004de023
        ;   XREF to: 004ddd8e (UNCONDITIONAL_JUMP)  ; LAB_004ddd8e
    PUSH ESI                            ; 004de028
        ;   Label: LAB_004de028
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004de029
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004de02e
    SUB ESP,0x4                         ; 004de031
    MOV EDX,dword ptr [ESI + 0x8]       ; 004de034
    MOV dword ptr [ESP],EDX             ; 004de037
    PUSH EAX                            ; 004de03a
    LEA ESI,[EBX + 0x1fa3c]             ; 004de03b
    PUSH ESI                            ; 004de041
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960 ; 004de042
        ;   XREF to: 004e1960 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 004de047
    PUSH ESI                            ; 004de04a
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880 ; 004de04b
        ;   XREF to: 0051b880 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004de050
    FLD float ptr [EBX + 0x21cf8]       ; 004de053
    FADD float ptr [EBP + 0x18]         ; 004de059
    FST float ptr [EBX + 0x21cf8]       ; 004de05c
    FCOMP float ptr [0x005a0ab8]        ; 004de062 | DAT_005a0ab8
    FNSTSW AX                           ; 004de068
    SAHF                                ; 004de06a
    JBE 0x004ddb3b                      ; 004de06b
        ;   XREF to: 004ddb3b (CONDITIONAL_JUMP)  ; LAB_004ddb3b
    CMP dword ptr [EBX + 0x21cf0],0x0   ; 004de071
    JNZ 0x004de154                      ; 004de078
        ;   XREF to: 004de154 (CONDITIONAL_JUMP)  ; LAB_004de154
    MOV EDX,0x58a7a6                    ; 004de07e | = "moloch_d.dfm"
    MOV EDI,0x58a799                    ; 004de083 | = "moloch_h.dfm"
    MOV dword ptr [EBX + 0x21cf0],0x1   ; 004de088
    MOV dword ptr [ESP + 0x1af8],EDX    ; 004de092 | = "moloch_d.dfm"
    LEA EAX,[ESP + 0x8]                 ; 004de099
        ;   Label: LAB_004de099
    PUSH EAX                            ; 004de09d
    LEA ESI,[EBX + 0x1fa3c]             ; 004de09e
    MOV dword ptr [EBX + 0x21cf4],0x0   ; 004de0a4
    PUSH ESI                            ; 004de0ae
    MOV dword ptr [EBX + 0x21cf8],0x0   ; 004de0af
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90 ; 004de0b9
        ;   XREF to: 0051ed90 (UNCONDITIONAL_CALL)  ; SPose * core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90(CDeformableModelInstance * this_ptr, SPose * bone_transform)
    ADD ESP,0x8                         ; 004de0be
    PUSH ESI                            ; 004de0c1
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004de0c2
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0x1b08],EAX    ; 004de0c7
    ADD ESP,0x4                         ; 004de0ce
    PUSH EDI                            ; 004de0d1 | = "moloch_h.dfm"
    LEA EDI,[EBX + 0x150]               ; 004de0d2
    MOV EAX,dword ptr [ESI + 0x8]       ; 004de0d8
    PUSH EDI                            ; 004de0db
    MOV dword ptr [ESP + 0x1afc],EAX    ; 004de0dc
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004de0e3
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004de0e8
    PUSH EDI                            ; 004de0eb
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 004de0ec
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004de0f1
    MOV EAX,dword ptr [ESP + 0x1b04]    ; 004de0f4
    PUSH dword ptr [ESP + 0x1af4]       ; 004de0fb
    PUSH EAX                            ; 004de102
    PUSH EDI                            ; 004de103
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960 ; 004de104
        ;   XREF to: 004e1960 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 004de109
    MOV EDX,dword ptr [ESP + 0x1af8]    ; 004de10c
    PUSH EDX                            ; 004de113 | = "moloch_d.dfm"
    PUSH ESI                            ; 004de114
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004de115
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004de11a
    PUSH ESI                            ; 004de11d
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 004de11e
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004de123
    PUSH EDI                            ; 004de126
    PUSH 0x0                            ; 004de127
    ADD EBX,0x21dc4                     ; 004de129
    PUSH EBX                            ; 004de12f
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170 ; 004de130
        ;   XREF to: 004e0170 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 004de135
    PUSH ESI                            ; 004de138
    PUSH 0x1                            ; 004de139
    PUSH EBX                            ; 004de13b
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170 ; 004de13c
        ;   XREF to: 004e0170 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 004de141
    PUSH EBX                            ; 004de144
    CALL core_morph.cpp_CMorph_getReady_FUN_004e03c0 ; 004de145
        ;   XREF to: 004e03c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_004e03c0(CMorph * this_ptr)
    ADD ESP,0x4                         ; 004de14a
    MOV ESP,EBP                         ; 004de14d
    POP EBP                             ; 004de14f
    POP EDI                             ; 004de150
    POP ESI                             ; 004de151
    POP EBX                             ; 004de152
    RET                                 ; 004de153
    MOV EDI,0x58a7b3                    ; 004de154 | = "moloch_d.dfm"
        ;   Label: LAB_004de154
    MOV ECX,0x58a7c0                    ; 004de159 | = "moloch_h.dfm"
    MOV dword ptr [EBX + 0x21cf0],0x0   ; 004de15e
    MOV dword ptr [ESP + 0x1af8],ECX    ; 004de168 | = "moloch_h.dfm"
    JMP 0x004de099                      ; 004de16f
        ;   XREF to: 004de099 (UNCONDITIONAL_JUMP)  ; LAB_004de099
    LEA EAX,[EBX + 0x21d60]             ; 004de174
        ;   Label: LAB_004de174
    PUSH EAX                            ; 004de17a
    MOV ESI,dword ptr [0x005b7650]      ; 004de17b | DAT_005b7650
    PUSH ESI                            ; 004de181
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004de182
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004de187
    TEST EAX,EAX                        ; 004de18a
    JZ 0x004ddb3b                       ; 004de18c
        ;   XREF to: 004ddb3b (CONDITIONAL_JUMP)  ; LAB_004ddb3b
    PUSH EBX                            ; 004de192
    CALL core_moloch.cpp_CMoloch_startMorph_FUN_004de700 ; 004de193
        ;   XREF to: 004de700 (UNCONDITIONAL_CALL)  ; void core_moloch.cpp_CMoloch_startMorph_FUN_004de700(CMoloch * this_ptr)
    ADD ESP,0x4                         ; 004de198
    MOV ESP,EBP                         ; 004de19b
    POP EBP                             ; 004de19d
    POP EDI                             ; 004de19e
    POP ESI                             ; 004de19f
    POP EBX                             ; 004de1a0
    RET                                 ; 004de1a1

