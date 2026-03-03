; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_colonel_cpp_CColonel_process_FUN_0043fa00(CColonel *this_ptr,float delta_time)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x98]:4  local_98
; undefined1       Stack[-0x74]:1  local_74
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined1       Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined1       Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* switchdataD_0043f9e4 = 0043fce4
;   TerminatedCString s_s_confused_while_walking_00618c8c
;   double DOUBLE_00618cb9 = 12.5663706140000
;   double DOUBLE_00618cc1 = 32
;   double DOUBLE_00618cc9 = -1.57079632675000
;   double DOUBLE_00618cd1 = 5.32864626443882E-315
;   double DOUBLE_00618cd9 = 1.57079632675000
;   float FLOAT_00618ce1 = -3.141593
;   double DOUBLE_00618ce9 = 3.14159265350000
;   CConsole* g_CConsolePtr = 0083b1a4
;   int INT_0083b124
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
;   core_charactr.cpp_CCharacter_preProcess_FUN_00429820
;   core_charactr.cpp_CCharacter_process_FUN_00429870
;   core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70
;   core_colonel.cpp_CColonel_FUN_0043ff20
;   core_colonel.cpp_CColonel_FUN_00440430
;   core_hero.cpp_CHero_executeLeverPull_FUN_004f30f0
;   core_hero.cpp_CHero_tryInteract_FUN_004f2af0
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004f2ed0
;   core_hero.cpp_CHero_tryOpenNearbyDoor_FUN_004f2d70
;   core_hero.cpp_CHero_tryPullLever_FUN_004f2f50
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043fa00
        ;   Label: core_colonel.cpp_CColonel_process_FUN_0043fa00
    PUSH ESI                            ; 0043fa01
    PUSH EDI                            ; 0043fa02
    PUSH EBP                            ; 0043fa03
    MOV EBP,ESP                         ; 0043fa04
    SUB ESP,0x88                        ; 0043fa06
    AND ESP,0xfffffff8                  ; 0043fa0c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0043fa0f
    PUSH dword ptr [EBP + 0x18]         ; 0043fa12
    PUSH EBX                            ; 0043fa15
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 0043fa16
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0043fa1b
    TEST EAX,EAX                        ; 0043fa1e
    JZ 0x0043fc99                       ; 0043fa20
        ;   XREF to: 0043fc99 (CONDITIONAL_JUMP)  ; caseD_6
    FLD float ptr [EBX + 0xbe24]        ; 0043fa26
    FSUB float ptr [EBP + 0x18]         ; 0043fa2c
    FST float ptr [EBX + 0xbe24]        ; 0043fa2f
    FLDZ                                ; 0043fa35
    FCOMPP                              ; 0043fa37
    FNSTSW AX                           ; 0043fa39
    SAHF                                ; 0043fa3b
    JBE 0x0043fa48                      ; 0043fa3c
        ;   XREF to: 0043fa48 (CONDITIONAL_JUMP)  ; LAB_0043fa48
    MOV dword ptr [EBX + 0xbe24],0x0    ; 0043fa3e
    LEA EAX,[EBX + 0x23ac]              ; 0043fa48
        ;   Label: LAB_0043fa48
    PUSH dword ptr [EBP + 0x18]         ; 0043fa4e
    MOV dword ptr [EAX + 0x8],0x0       ; 0043fa51
    PUSH EBX                            ; 0043fa58
    MOV EDX,dword ptr [EAX + 0x8]       ; 0043fa59
    MOV dword ptr [EAX + 0x4],EDX       ; 0043fa5c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043fa5f
    MOV dword ptr [EAX],EDX             ; 0043fa62
    CALL core_colonel.cpp_CColonel_FUN_00440430 ; 0043fa64
        ;   XREF to: 00440430 (UNCONDITIONAL_CALL)  ; int core_colonel.cpp_CColonel_FUN_00440430(CColonel * this_ptr)
    MOV EDX,dword ptr [EBX + 0xbe28]    ; 0043fa69
    ADD ESP,0x8                         ; 0043fa6f
    CMP EDX,0x2                         ; 0043fa72
    JNZ 0x0043fa83                      ; 0043fa75
        ;   XREF to: 0043fa83 (CONDITIONAL_JUMP)  ; LAB_0043fa83
    PUSH dword ptr [EBP + 0x18]         ; 0043fa77
    PUSH EBX                            ; 0043fa7a
    CALL core_colonel.cpp_CColonel_FUN_0043ff20 ; 0043fa7b
        ;   XREF to: 0043ff20 (UNCONDITIONAL_CALL)  ; void core_colonel.cpp_CColonel_FUN_0043ff20(CColonel * this_ptr)
    ADD ESP,0x8                         ; 0043fa80
    FLD float ptr [EBP + 0x18]          ; 0043fa83
        ;   Label: LAB_0043fa83
    FMUL double ptr [0x00618cb9]        ; 0043fa86 | DOUBLE_00618cb9
    PUSH dword ptr [EBP + 0x18]         ; 0043fa8c
    MOV EAX,dword ptr [EBX + 0x23b4]    ; 0043fa8f
    MOV dword ptr [EBX + 0x2434],EAX    ; 0043fa95
    PUSH EBX                            ; 0043fa9b
    FSTP float ptr [EBX + 0x2438]       ; 0043fa9c
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 ; 0043faa2
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter * this_ptr, float delta_time)
    LEA ESI,[EBX + 0x158]               ; 0043faa7
    ADD ESP,0x8                         ; 0043faad
    TEST EAX,EAX                        ; 0043fab0
    JZ 0x0043fe22                       ; 0043fab2
        ;   XREF to: 0043fe22 (CONDITIONAL_JUMP)  ; LAB_0043fe22
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 0043fab8
    CMP EAX,0x2                         ; 0043fabe
    JNC 0x0043fccd                      ; 0043fac1
        ;   XREF to: 0043fccd (CONDITIONAL_JUMP)  ; LAB_0043fccd
    CMP EAX,0x1                         ; 0043fac7
    JNZ 0x0043fcd4                      ; 0043faca
        ;   XREF to: 0043fcd4 (CONDITIONAL_JUMP)  ; LAB_0043fcd4
    PUSH EAX                            ; 0043fad0
    PUSH EAX                            ; 0043fad1
    PUSH ESI                            ; 0043fad2
        ;   Label: LAB_0043fad2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0043fad3
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0043fad3
    ADD ESP,0xc                         ; 0043fad8
        ;   Label: LAB_0043fad8
    MOV EDI,dword ptr [EBX + 0x2598]    ; 0043fadb
        ;   Label: caseD_5
    TEST EDI,EDI                        ; 0043fae1
    JZ 0x0043fe60                       ; 0043fae3
        ;   XREF to: 0043fe60 (CONDITIONAL_JUMP)  ; LAB_0043fe60
    CMP dword ptr [EBX + 0x259c],0x0    ; 0043fae9
    JNZ 0x0043fbb0                      ; 0043faf0
        ;   XREF to: 0043fbb0 (CONDITIONAL_JUMP)  ; LAB_0043fbb0
    LEA EAX,[EDI + 0x20]                ; 0043faf6
    PUSH EAX                            ; 0043faf9
    LEA EAX,[ESP + 0x40]                ; 0043fafa
    PUSH EAX                            ; 0043fafe
    PUSH EBX                            ; 0043faff
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 0043fb00
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 0043fb05
    PUSH EAX                            ; 0043fb08
    LEA EAX,[ESP + 0x58]                ; 0043fb09
    PUSH EAX                            ; 0043fb0d
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 0043fb0e
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 0043fb13
    PUSH dword ptr [EAX + 0x4]          ; 0043fb16
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 0043fb19
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x88],EAX      ; 0043fb1e
    FLD float ptr [ESP + 0x88]          ; 0043fb25
    ADD ESP,0x4                         ; 0043fb2c
    FST float ptr [ESP]                 ; 0043fb2f
    FCOMP double ptr [0x00618cc9]       ; 0043fb32 | DOUBLE_00618cc9
    FNSTSW AX                           ; 0043fb38
    SAHF                                ; 0043fb3a
    JNC 0x0043fb49                      ; 0043fb3b
        ;   XREF to: 0043fb49 (CONDITIONAL_JUMP)  ; LAB_0043fb49
    FLD float ptr [ESP]                 ; 0043fb3d
    FADD float ptr [0x00618cd1]         ; 0043fb40 | DOUBLE_00618cd1
    FSTP float ptr [ESP]                ; 0043fb46
    FLD float ptr [ESP]                 ; 0043fb49
        ;   Label: LAB_0043fb49
    FCOMP double ptr [0x00618cd9]       ; 0043fb4c | DOUBLE_00618cd9
    FNSTSW AX                           ; 0043fb52
    SAHF                                ; 0043fb54
    JBE 0x0043fb63                      ; 0043fb55
        ;   XREF to: 0043fb63 (CONDITIONAL_JUMP)  ; LAB_0043fb63
    FLD float ptr [ESP]                 ; 0043fb57
    FADD float ptr [0x00618ce1]         ; 0043fb5a | FLOAT_00618ce1
    FSTP float ptr [ESP]                ; 0043fb60
    FLD float ptr [EBP + 0x18]          ; 0043fb63
        ;   Label: LAB_0043fb63
    FMUL double ptr [0x00618ce9]        ; 0043fb66 | DOUBLE_00618ce9
    FLD float ptr [ESP]                 ; 0043fb6c
    FXCH                                ; 0043fb6f
    FST float ptr [ESP + 0x7c]          ; 0043fb71
    FCHS                                ; 0043fb75
    FSTP float ptr [ESP + 0x78]         ; 0043fb77
    FCOMP float ptr [ESP + 0x78]        ; 0043fb7b
    FNSTSW AX                           ; 0043fb7f
    SAHF                                ; 0043fb81
    JNC 0x0043fb8b                      ; 0043fb82
        ;   XREF to: 0043fb8b (CONDITIONAL_JUMP)  ; LAB_0043fb8b
    MOV EAX,dword ptr [ESP + 0x78]      ; 0043fb84
    MOV dword ptr [ESP],EAX             ; 0043fb88
    FLD float ptr [ESP]                 ; 0043fb8b
        ;   Label: LAB_0043fb8b
    FCOMP float ptr [ESP + 0x7c]        ; 0043fb8e
    FNSTSW AX                           ; 0043fb92
    SAHF                                ; 0043fb94
    JBE 0x0043fb9e                      ; 0043fb95
        ;   XREF to: 0043fb9e (CONDITIONAL_JUMP)  ; LAB_0043fb9e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0043fb97
    MOV dword ptr [ESP],EAX             ; 0043fb9b
    FLD float ptr [EBX + 0x34]          ; 0043fb9e
        ;   Label: LAB_0043fb9e
    FADD float ptr [ESP]                ; 0043fba1
    PUSH EBX                            ; 0043fba4
    FSTP float ptr [EBX + 0x34]         ; 0043fba5
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 0043fba8
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0043fbad
    MOV ESI,dword ptr [EBX + 0x2598]    ; 0043fbb0
        ;   Label: LAB_0043fbb0
    MOV EAX,dword ptr [ESI + 0x154]     ; 0043fbb6
    PUSH 0x0                            ; 0043fbbc
    MOV dword ptr [ESP + 0x88],EAX      ; 0043fbbe
    LEA EAX,[ESP + 0x28]                ; 0043fbc5
    PUSH EAX                            ; 0043fbc9
    LEA EDI,[EBX + 0x158]               ; 0043fbca
    PUSH EDI                            ; 0043fbd0
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 0043fbd1
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0043fbd6
    PUSH EAX                            ; 0043fbd9
    PUSH EBX                            ; 0043fbda
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0043fbdb
    PUSH ESI                            ; 0043fbe2
    CALL dword ptr [EAX + 0x124]        ; 0043fbe3
    ADD ESP,0xc                         ; 0043fbe9
    TEST EAX,EAX                        ; 0043fbec
    JZ 0x0043fe3e                       ; 0043fbee
        ;   XREF to: 0043fe3e (CONDITIONAL_JUMP)  ; LAB_0043fe3e
    CMP dword ptr [EBX + 0x2598],0x0    ; 0043fbf4
    JNZ 0x0043fe49                      ; 0043fbfb
        ;   XREF to: 0043fe49 (CONDITIONAL_JUMP)  ; LAB_0043fe49
    PUSH 0x1                            ; 0043fc01
        ;   Label: LAB_0043fc01
    PUSH 0x0                            ; 0043fc03
    LEA EAX,[EBX + 0x158]               ; 0043fc05
    PUSH EAX                            ; 0043fc0b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0043fc0c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0043fc0c
    ADD ESP,0xc                         ; 0043fc11
    PUSH EBX                            ; 0043fc14
        ;   Label: LAB_0043fc14
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00429820 ; 0043fc15
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0043fc1a
    LEA EAX,[EBX + 0x158]               ; 0043fc1d
    PUSH EAX                            ; 0043fc23
    MOV dword ptr [ESP + 0x84],EAX      ; 0043fc24
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 0043fc2b
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0043fc30
    MOV EAX,dword ptr [EBX + 0x154]     ; 0043fc33
    PUSH EBX                            ; 0043fc39
    CALL dword ptr [EAX + 0x120]        ; 0043fc3a
    ADD ESP,0x4                         ; 0043fc40
    TEST EAX,EAX                        ; 0043fc43
    JNZ 0x0043fc8d                      ; 0043fc45
        ;   XREF to: 0043fc8d (CONDITIONAL_JUMP)  ; LAB_0043fc8d
    PUSH 0x59ddb0                       ; 0043fc47
    MOV EDI,dword ptr [0x0083b124]      ; 0043fc4c | INT_0083b124
    PUSH EDI                            ; 0043fc52
    LEA EAX,[EBX + 0x1fbdc]             ; 0043fc53
    PUSH dword ptr [EBX + 0x1fbe8]      ; 0043fc59
    PUSH EAX                            ; 0043fc5f
    LEA ESI,[ESP + 0x14]                ; 0043fc60
    CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20 ; 0043fc64
        ;   XREF to: 005f7b20 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CVector3f * euler_angles, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 0043fc69
    LEA EAX,[ESP + 0x20]                ; 0043fc6c
    LEA EDI,[ESP + 0x20]                ; 0043fc70
    PUSH EAX                            ; 0043fc74
    MOV EAX,dword ptr [ESP + 0x90]      ; 0043fc75
    LEA ESI,[ESP + 0x14]                ; 0043fc7c
    PUSH EAX                            ; 0043fc80
    MOVSD ES:EDI,ESI                    ; 0043fc81
    MOVSD ES:EDI,ESI                    ; 0043fc82
    MOVSD ES:EDI,ESI                    ; 0043fc83
    MOVSD ES:EDI,ESI                    ; 0043fc84
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750 ; 0043fc85
        ;   XREF to: 0059f750 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 0043fc8a
    PUSH dword ptr [EBP + 0x18]         ; 0043fc8d
        ;   Label: LAB_0043fc8d
    PUSH EBX                            ; 0043fc90
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 0043fc91
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0043fc96
    MOV ESP,EBP                         ; 0043fc99
        ;   Label: caseD_6
    POP EBP                             ; 0043fc9b
    POP EDI                             ; 0043fc9c
    POP ESI                             ; 0043fc9d
    POP EBX                             ; 0043fc9e
    RET                                 ; 0043fc9f
    PUSH 0x1                            ; 0043fca0
        ;   Label: LAB_0043fca0
    PUSH 0x0                            ; 0043fca2
    PUSH ESI                            ; 0043fca4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0043fca5
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0043fcaa
    PUSH EBX                            ; 0043fcad
    PUSH 0x618c8c                       ; 0043fcae | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x0066e8e0]      ; 0043fcb3 | g_CConsolePtr
    PUSH ESI                            ; 0043fcb9 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0043fcba
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x0043fad8                      ; 0043fcbf
        ;   XREF to: 0043fad8 (UNCONDITIONAL_JUMP)  ; LAB_0043fad8
    PUSH 0x1                            ; 0043fcc4
        ;   Label: LAB_0043fcc4
    PUSH 0x2                            ; 0043fcc6
    JMP 0x0043fad2                      ; 0043fcc8
        ;   XREF to: 0043fad2 (UNCONDITIONAL_JUMP)  ; LAB_0043fad2
    JBE 0x0043fcc4                      ; 0043fccd
        ;   XREF to: 0043fcc4 (CONDITIONAL_JUMP)  ; LAB_0043fcc4
        ;   Label: LAB_0043fccd
    CMP EAX,0x3                         ; 0043fccf
    JZ 0x0043fca0                       ; 0043fcd2
        ;   XREF to: 0043fca0 (CONDITIONAL_JUMP)  ; LAB_0043fca0
    PUSH 0x1                            ; 0043fcd4
        ;   Label: LAB_0043fcd4
    PUSH 0x0                            ; 0043fcd6
    LEA EAX,[EBX + 0x158]               ; 0043fcd8
    PUSH EAX                            ; 0043fcde
    JMP 0x0043fad3                      ; 0043fcdf
        ;   XREF to: 0043fad3 (UNCONDITIONAL_JUMP)  ; LAB_0043fad3
    CMP dword ptr [EBX + 0x2410],0x0    ; 0043fce4
        ;   Label: caseD_3
    JZ 0x0043fadb                       ; 0043fceb
        ;   XREF to: 0043fadb (CONDITIONAL_JUMP)  ; caseD_4
    MOV EDI,dword ptr [EBX + 0xbe2c]    ; 0043fcf1
    XOR ESI,ESI                         ; 0043fcf7
    TEST EDI,EDI                        ; 0043fcf9
    JZ 0x0043fd0f                       ; 0043fcfb
        ;   XREF to: 0043fd0f (CONDITIONAL_JUMP)  ; LAB_0043fd0f
    CMP dword ptr [EBX + 0xbe34],0x0    ; 0043fcfd
    JZ 0x0043fda3                       ; 0043fd04
        ;   XREF to: 0043fda3 (CONDITIONAL_JUMP)  ; LAB_0043fda3
    MOV ESI,0x2                         ; 0043fd0a
    CMP dword ptr [EBX + 0xbe30],0x0    ; 0043fd0f
        ;   Label: LAB_0043fd0f
    JZ 0x0043fd1d                       ; 0043fd16
        ;   XREF to: 0043fd1d (CONDITIONAL_JUMP)  ; LAB_0043fd1d
    MOV ESI,0x3                         ; 0043fd18
    CMP dword ptr [EBX + 0xbe44],0x0    ; 0043fd1d
        ;   Label: LAB_0043fd1d
    JZ 0x0043fd48                       ; 0043fd24
        ;   XREF to: 0043fd48 (CONDITIONAL_JUMP)  ; LAB_0043fd48
    MOV ESI,dword ptr [EBX + 0x1fbd4]   ; 0043fd26
    MOV dword ptr [EBX + 0xbe44],0x0    ; 0043fd2c
    TEST ESI,ESI                        ; 0043fd36
    SETZ AL                             ; 0043fd38
    AND EAX,0xff                        ; 0043fd3b
    XOR ESI,ESI                         ; 0043fd40
    MOV dword ptr [EBX + 0x1fbd4],EAX   ; 0043fd42
    CMP dword ptr [EBX + 0xbe38],0x0    ; 0043fd48
        ;   Label: LAB_0043fd48
    JZ 0x0043fd6e                       ; 0043fd4f
        ;   XREF to: 0043fd6e (CONDITIONAL_JUMP)  ; LAB_0043fd6e
    MOV EAX,dword ptr [EBX + 0x1fbd4]   ; 0043fd51
    MOV EDI,0x1                         ; 0043fd57
    TEST EAX,EAX                        ; 0043fd5c
    JZ 0x0043fdad                       ; 0043fd5e
        ;   XREF to: 0043fdad (CONDITIONAL_JUMP)  ; LAB_0043fdad
    TEST EDI,EDI                        ; 0043fd60
        ;   Label: LAB_0043fd60
    JZ 0x0043fd6e                       ; 0043fd62
        ;   XREF to: 0043fd6e (CONDITIONAL_JUMP)  ; LAB_0043fd6e
    MOV dword ptr [EBX + 0xbe38],0x0    ; 0043fd64
        ;   Label: LAB_0043fd64
    FLD float ptr [EBX + 0xbe50]        ; 0043fd6e
        ;   Label: LAB_0043fd6e
    LEA EDI,[EBX + 0x158]               ; 0043fd74
    FMUL float ptr [EBX + 0x2438]       ; 0043fd7a
    PUSH EDI                            ; 0043fd80
    FSTP float ptr [EBX + 0x2418]       ; 0043fd81
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0043fd87
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0043fd8c
    ADD ESP,0x4                         ; 0043fd8f
    CMP ESI,EAX                         ; 0043fd92
    JZ 0x0043fadb                       ; 0043fd94
        ;   XREF to: 0043fadb (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 0043fd9a
    PUSH ESI                            ; 0043fd9c
    PUSH EDI                            ; 0043fd9d
    JMP 0x0043fad3                      ; 0043fd9e
        ;   XREF to: 0043fad3 (UNCONDITIONAL_JUMP)  ; LAB_0043fad3
    MOV ESI,0x1                         ; 0043fda3
        ;   Label: LAB_0043fda3
    JMP 0x0043fd0f                      ; 0043fda8
        ;   XREF to: 0043fd0f (UNCONDITIONAL_JUMP)  ; LAB_0043fd0f
    CMP dword ptr [EBX + 0xbe28],0x2    ; 0043fdad
        ;   Label: LAB_0043fdad
    JZ 0x0043fd60                       ; 0043fdb4
        ;   XREF to: 0043fd60 (CONDITIONAL_JUMP)  ; LAB_0043fd60
    PUSH EBX                            ; 0043fdb6
    CALL core_hero.cpp_CHero_tryInteract_FUN_004f2af0 ; 0043fdb7
        ;   XREF to: 004f2af0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryInteract_FUN_004f2af0(CHero * this_ptr)
    XOR EDI,EDI                         ; 0043fdbc
    ADD ESP,0x4                         ; 0043fdbe
    TEST EAX,EAX                        ; 0043fdc1
    JNZ 0x0043fd60                      ; 0043fdc3
        ;   XREF to: 0043fd60 (CONDITIONAL_JUMP)  ; LAB_0043fd60
    PUSH EBX                            ; 0043fdc5
    CALL core_hero.cpp_CHero_tryOpenNearbyDoor_FUN_004f2d70 ; 0043fdc6
        ;   XREF to: 004f2d70 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenNearbyDoor_FUN_004f2d70(CHero * this_ptr)
    ADD ESP,0x4                         ; 0043fdcb
    MOV dword ptr [ESP + 0x74],EAX      ; 0043fdce
    TEST EAX,EAX                        ; 0043fdd2
    JBE 0x0043fddb                      ; 0043fdd4
        ;   XREF to: 0043fddb (CONDITIONAL_JUMP)  ; LAB_0043fddb
    CMP EAX,0x1                         ; 0043fdd6
    JNZ 0x0043fe09                      ; 0043fdd9
        ;   XREF to: 0043fe09 (CONDITIONAL_JUMP)  ; LAB_0043fe09
    CMP dword ptr [ESP + 0x74],0x0      ; 0043fddb
        ;   Label: LAB_0043fddb
    JNZ 0x0043fd60                      ; 0043fde0
        ;   XREF to: 0043fd60 (CONDITIONAL_JUMP)  ; LAB_0043fd60
    PUSH EBX                            ; 0043fde6
    CALL core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004f2c40 ; 0043fde7
        ;   XREF to: 004f2c40 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004f2c40(CHero * this_ptr)
    ADD ESP,0x4                         ; 0043fdec
    TEST EAX,EAX                        ; 0043fdef
    JNZ 0x0043fd60                      ; 0043fdf1
        ;   XREF to: 0043fd60 (CONDITIONAL_JUMP)  ; LAB_0043fd60
    PUSH EBX                            ; 0043fdf7
    CALL core_hero.cpp_CHero_tryPullLever_FUN_004f2f50 ; 0043fdf8
        ;   XREF to: 004f2f50 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryPullLever_FUN_004f2f50(CHero * this_ptr)
    ADD ESP,0x4                         ; 0043fdfd
    TEST EAX,EAX                        ; 0043fe00
    JNZ 0x0043fe14                      ; 0043fe02
        ;   XREF to: 0043fe14 (CONDITIONAL_JUMP)  ; LAB_0043fe14
    JMP 0x0043fd64                      ; 0043fe04
        ;   XREF to: 0043fd64 (UNCONDITIONAL_JUMP)  ; LAB_0043fd64
    PUSH EBX                            ; 0043fe09
        ;   Label: LAB_0043fe09
    CALL core_hero.cpp_CHero_tryOpenDoor_FUN_004f2ed0 ; 0043fe0a
        ;   XREF to: 004f2ed0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenDoor_FUN_004f2ed0(CHero * this_ptr)
    ADD ESP,0x4                         ; 0043fe0f
    JMP 0x0043fddb                      ; 0043fe12
        ;   XREF to: 0043fddb (UNCONDITIONAL_JUMP)  ; LAB_0043fddb
    PUSH EBX                            ; 0043fe14
        ;   Label: LAB_0043fe14
    CALL core_hero.cpp_CHero_executeLeverPull_FUN_004f30f0 ; 0043fe15
        ;   XREF to: 004f30f0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_executeLeverPull_FUN_004f30f0(CHero * this_ptr)
    ADD ESP,0x4                         ; 0043fe1a
    JMP 0x0043fd60                      ; 0043fe1d
        ;   XREF to: 0043fd60 (UNCONDITIONAL_JUMP)  ; LAB_0043fd60
    PUSH ESI                            ; 0043fe22
        ;   Label: LAB_0043fe22
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0043fe23
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0043fe28
    ADD ESP,0x4                         ; 0043fe2b
    CMP EAX,0x6                         ; 0043fe2e
    JA 0x0043fadb                       ; 0043fe31
        ;   XREF to: 0043fadb (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EAX*0x4 + 0x43f9e4]  ; 0043fe37 | caseD_4 | caseD_6 | caseD_2
        ;   Label: switchD
    MOV dword ptr [EBX + 0x2598],EAX    ; 0043fe3e
        ;   Label: LAB_0043fe3e
    JMP 0x0043fc01                      ; 0043fe44
        ;   XREF to: 0043fc01 (UNCONDITIONAL_JUMP)  ; LAB_0043fc01
    CMP dword ptr [EBX + 0xbe38],0x0    ; 0043fe49
        ;   Label: LAB_0043fe49
    JZ 0x0043fc14                       ; 0043fe50
        ;   XREF to: 0043fc14 (CONDITIONAL_JUMP)  ; LAB_0043fc14
    PUSH 0x1                            ; 0043fe56
    PUSH 0x9                            ; 0043fe58
    PUSH EDI                            ; 0043fe5a
    JMP 0x0043fc0c                      ; 0043fe5b
        ;   XREF to: 0043fc0c (UNCONDITIONAL_JUMP)  ; LAB_0043fc0c
    FLD float ptr [EBP + 0x18]          ; 0043fe60
        ;   Label: LAB_0043fe60
    FLD ST0                             ; 0043fe63
    FMUL double ptr [0x00618cc1]        ; 0043fe65 | DOUBLE_00618cc1
    FLD float ptr [EBX + 0x242c]        ; 0043fe6b
    FXCH                                ; 0043fe71
    FSUBR ST0,ST1                       ; 0043fe73
    LEA EAX,[EBX + 0x2428]              ; 0043fe75
    FSTP ST1                            ; 0043fe7b
    FSTP float ptr [EBX + 0x242c]       ; 0043fe7d
    FLD float ptr [EAX]                 ; 0043fe83
    FMUL ST1                            ; 0043fe85
    FSTP float ptr [ESP + 0x60]         ; 0043fe87
    FLD float ptr [EAX + 0x4]           ; 0043fe8b
    FMUL ST1                            ; 0043fe8e
    FSTP float ptr [ESP + 0x64]         ; 0043fe90
    FMUL float ptr [EAX + 0x8]          ; 0043fe94
    LEA EAX,[EBX + 0x23ac]              ; 0043fe97
    FSTP float ptr [ESP + 0x68]         ; 0043fe9d
    LEA EDX,[EBX + 0x241c]              ; 0043fea1
    FLD float ptr [EAX]                 ; 0043fea7
    FADD float ptr [EDX]                ; 0043fea9
    FST float ptr [ESP + 0x48]          ; 0043feab
    FLD float ptr [EAX + 0x4]           ; 0043feaf
    FADD float ptr [EDX + 0x4]          ; 0043feb2
    FXCH                                ; 0043feb5
    FADD float ptr [ESP + 0x60]         ; 0043feb7
    FXCH                                ; 0043febb
    FST float ptr [ESP + 0x4c]          ; 0043febd
    FLD float ptr [EAX + 0x8]           ; 0043fec1
    FADD float ptr [EDX + 0x8]          ; 0043fec4
    FXCH                                ; 0043fec7
    FADD float ptr [ESP + 0x64]         ; 0043fec9
    FXCH                                ; 0043fecd
    FSTP float ptr [ESP + 0x50]         ; 0043fecf
    FXCH                                ; 0043fed3
    FSTP float ptr [ESP + 0x30]         ; 0043fed5
    FLD float ptr [ESP + 0x50]          ; 0043fed9
    FADD float ptr [ESP + 0x68]         ; 0043fedd
    FXCH                                ; 0043fee1
    FSTP float ptr [ESP + 0x34]         ; 0043fee3
    FSTP float ptr [ESP + 0x38]         ; 0043fee7
    MOV dword ptr [EAX + 0x8],EDI       ; 0043feeb
    MOV ECX,dword ptr [EAX + 0x8]       ; 0043feee
    MOV dword ptr [EAX + 0x4],ECX       ; 0043fef1
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043fef4
    MOV dword ptr [EAX],ECX             ; 0043fef7
    MOV dword ptr [EDX + 0x8],EDI       ; 0043fef9
    LEA EAX,[ESP + 0x30]                ; 0043fefc
    FLD float ptr [EDX + 0x8]           ; 0043ff00
    PUSH EAX                            ; 0043ff03
    FST float ptr [EDX + 0x4]           ; 0043ff04
    PUSH EBX                            ; 0043ff07
    FSTP float ptr [EDX]                ; 0043ff08
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 0043ff0a
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0043ff0f
    JMP 0x0043fc14                      ; 0043ff12
        ;   XREF to: 0043fc14 (UNCONDITIONAL_JUMP)  ; LAB_0043fc14

