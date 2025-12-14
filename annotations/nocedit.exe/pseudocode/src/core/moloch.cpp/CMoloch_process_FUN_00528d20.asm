; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_moloch.cpp_CMoloch_process_FUN_00528d20(CMoloch * this_ptr)
;
; Parameters:
; CMoloch *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x1b18]:4  local_1b18
; undefined4       Stack[-0x1b14]:4  local_1b14
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined1       Stack[-0x5c]:1  local_5c
; undefined1       Stack[-0x50]:1  local_50
; undefined1       Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_s_confused_while_walking_00639da5
;   TerminatedCString s_moloch_h_dfm_00639dcf
;   TerminatedCString s_moloch_d_dfm_00639ddc
;   TerminatedCString s_moloch_d_dfm_00639de9
;   TerminatedCString s_moloch_h_dfm_00639df6
;   double DOUBLE_00639e05 = 12.5663706140000
;   double DOUBLE_00639e0d = 0.333333333333333
;   double DOUBLE_00639e15 = 32
;   double DOUBLE_00639e1d = -1.57079632675000
;   float FLOAT_00639e25 = 3.141593
;   double DOUBLE_00639e2d = 1.57079632675000
;   float FLOAT_00639e35 = -3.141593
;   double DOUBLE_00639e3d = 3.14159265350000
;   float FLOAT_00661938 = 2
;   CConsole* g_CConsolePtr = 0083b1a4
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_FUN_00428f40
;   core_charactr.cpp_CCharacter_FUN_00429820
;   core_charactr.cpp_CCharacter_FUN_00429870
;   core_charactr.cpp_CCharacter_FUN_0042ca70
;   core_charactr.cpp_CCharacter_FUN_0042ec40
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_moloch.cpp_FUN_005293b0
;   core_moloch.cpp_PlaySoundAbtMolochMorphing_FUN_00529900
;   core_morph.cpp_CMorph_getReady_FUN_0052b680
;   core_morph.cpp_FUN_0052b430
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528d20
        ;   Label: core_moloch.cpp_CMoloch_process_FUN_00528d20
    PUSH ESI                            ; 00528d21
    PUSH EDI                            ; 00528d22
    PUSH EBP                            ; 00528d23
    MOV EBP,ESP                         ; 00528d24
    SUB ESP,0x1b08                      ; 00528d26
    AND ESP,0xfffffff8                  ; 00528d2c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00528d2f
    CMP dword ptr [EBX + 0x1fbd0],0x4   ; 00528d32
    JNZ 0x00528d42                      ; 00528d39
        ;   XREF to: 00528d42 (CONDITIONAL_JUMP)  ; LAB_00528d42
    MOV ESP,EBP                         ; 00528d3b
        ;   Label: LAB_00528d3b
    POP EBP                             ; 00528d3d
    POP EDI                             ; 00528d3e
    POP ESI                             ; 00528d3f
    POP EBX                             ; 00528d40
    RET                                 ; 00528d41
    PUSH dword ptr [EBP + 0x18]         ; 00528d42
        ;   Label: LAB_00528d42
    PUSH EBX                            ; 00528d45
    CALL core_charactr.cpp_CCharacter_FUN_00429870 ; 00528d46
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_00429870(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00528d4b
    TEST EAX,EAX                        ; 00528d4e
    JZ 0x00528d3b                       ; 00528d50
        ;   XREF to: 00528d3b (CONDITIONAL_JUMP)  ; LAB_00528d3b
    FLD float ptr [EBX + 0xbe24]        ; 00528d52
    FSUB float ptr [EBP + 0x18]         ; 00528d58
    FST float ptr [EBX + 0xbe24]        ; 00528d5b
    FLDZ                                ; 00528d61
    FCOMPP                              ; 00528d63
    FNSTSW AX                           ; 00528d65
    SAHF                                ; 00528d67
    JA 0x00528db6                       ; 00528d68
        ;   XREF to: 00528db6 (CONDITIONAL_JUMP)  ; LAB_00528db6
    LEA EAX,[EBX + 0x23ac]              ; 00528d6a
        ;   Label: LAB_00528d6a
    MOV dword ptr [EAX + 0x8],0x0       ; 00528d70
    MOV EDX,dword ptr [EAX + 0x8]       ; 00528d77
    MOV dword ptr [EAX + 0x4],EDX       ; 00528d7a
    MOV EDX,dword ptr [EAX + 0x4]       ; 00528d7d
    MOV dword ptr [EAX],EDX             ; 00528d80
    MOV EAX,dword ptr [EBP + 0x18]      ; 00528d82
    LEA ESI,[EBX + 0x158]               ; 00528d85
    MOV dword ptr [ESP + 0x4],EAX       ; 00528d8b
    FLD float ptr [ESP + 0x4]           ; 00528d8f
        ;   Label: LAB_00528d8f
    FLDZ                                ; 00528d93
    FCOMPP                              ; 00528d95
    FNSTSW AX                           ; 00528d97
    SAHF                                ; 00528d99
    JNC 0x00528dc2                      ; 00528d9a
        ;   XREF to: 00528dc2 (CONDITIONAL_JUMP)  ; LAB_00528dc2
    LEA EAX,[ESP + 0x4]                 ; 00528d9c
    PUSH EAX                            ; 00528da0
    PUSH ESI                            ; 00528da1
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 00528da2
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 00528da7
    PUSH EAX                            ; 00528daa
    PUSH EBX                            ; 00528dab
    CALL core_charactr.cpp_CCharacter_FUN_0042ec40 ; 00528dac
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00528db1
    JMP 0x00528d8f                      ; 00528db4
        ;   XREF to: 00528d8f (UNCONDITIONAL_JUMP)  ; LAB_00528d8f
    MOV dword ptr [EBX + 0xbe24],0x0    ; 00528db6
        ;   Label: LAB_00528db6
    JMP 0x00528d6a                      ; 00528dc0
        ;   XREF to: 00528d6a (UNCONDITIONAL_JUMP)  ; LAB_00528d6a
    FLD float ptr [EBP + 0x18]          ; 00528dc2
        ;   Label: LAB_00528dc2
    FMUL double ptr [0x00639e05]        ; 00528dc5 | DOUBLE_00639e05
    FLD float ptr [EBX + 0x23b4]        ; 00528dcb
    MOV EAX,[0x0067b654]                ; 00528dd1 | g_CGameInstance | g_CGamePtr
    FSTP float ptr [EBX + 0x2434]       ; 00528dd6
    FSTP float ptr [EBX + 0x2438]       ; 00528ddc
    CMP dword ptr [EAX + 0x228],0x0     ; 00528de2 | DAT_02d81cc4
    JZ 0x00528dfd                       ; 00528de9
        ;   XREF to: 00528dfd (CONDITIONAL_JUMP)  ; LAB_00528dfd
    FLD float ptr [EBX + 0x2438]        ; 00528deb
    FMUL double ptr [0x00639e0d]        ; 00528df1 | DOUBLE_00639e0d
    FSTP float ptr [EBX + 0x2438]       ; 00528df7
    PUSH dword ptr [EBP + 0x18]         ; 00528dfd
        ;   Label: LAB_00528dfd
    PUSH EBX                            ; 00528e00
    CALL core_charactr.cpp_CCharacter_FUN_0042ca70 ; 00528e01
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042ca70(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00528e06
    TEST EAX,EAX                        ; 00528e09
    JZ 0x0052904e                       ; 00528e0b
        ;   XREF to: 0052904e (CONDITIONAL_JUMP)  ; LAB_0052904e
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 00528e11
    LEA ESI,[EBX + 0x158]               ; 00528e17
    CMP EAX,0x2                         ; 00528e1d
    JNC 0x00529037                      ; 00528e20
        ;   XREF to: 00529037 (CONDITIONAL_JUMP)  ; LAB_00529037
    CMP EAX,0x1                         ; 00528e26
    JNZ 0x0052903e                      ; 00528e29
        ;   XREF to: 0052903e (CONDITIONAL_JUMP)  ; LAB_0052903e
    PUSH EAX                            ; 00528e2f
    PUSH EAX                            ; 00528e30
    PUSH ESI                            ; 00528e31
        ;   Label: LAB_00528e31
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00528e32
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00528e32
    ADD ESP,0xc                         ; 00528e37
        ;   Label: LAB_00528e37
    MOV EDX,dword ptr [EBX + 0x2598]    ; 00528e3a
        ;   Label: LAB_00528e3a
    TEST EDX,EDX                        ; 00528e40
    JZ 0x00529144                       ; 00528e42
        ;   XREF to: 00529144 (CONDITIONAL_JUMP)  ; LAB_00529144
    CMP dword ptr [EBX + 0x259c],0x0    ; 00528e48
    JNZ 0x00528f27                      ; 00528e4f
        ;   XREF to: 00528f27 (CONDITIONAL_JUMP)  ; LAB_00528f27
    LEA EAX,[EDX + 0x20]                ; 00528e55
    PUSH EAX                            ; 00528e58
    LEA EAX,[ESP + 0x1ac0]              ; 00528e59
    PUSH EAX                            ; 00528e60
    PUSH EBX                            ; 00528e61
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 00528e62
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 00528e67
    PUSH EAX                            ; 00528e6a
    LEA EAX,[ESP + 0x1acc]              ; 00528e6b
    PUSH EAX                            ; 00528e72
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00528e73
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 00528e78
    PUSH dword ptr [EAX + 0x4]          ; 00528e7b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00528e7e
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x1b08],EAX    ; 00528e83
    FLD float ptr [ESP + 0x1b08]        ; 00528e8a
    ADD ESP,0x4                         ; 00528e91
    FST float ptr [ESP]                 ; 00528e94
    FCOMP double ptr [0x00639e1d]       ; 00528e97 | DOUBLE_00639e1d
    FNSTSW AX                           ; 00528e9d
    SAHF                                ; 00528e9f
    JNC 0x00528eae                      ; 00528ea0
        ;   XREF to: 00528eae (CONDITIONAL_JUMP)  ; LAB_00528eae
    FLD float ptr [ESP]                 ; 00528ea2
    FADD float ptr [0x00639e25]         ; 00528ea5 | FLOAT_00639e25
    FSTP float ptr [ESP]                ; 00528eab
    FLD float ptr [ESP]                 ; 00528eae
        ;   Label: LAB_00528eae
    FCOMP double ptr [0x00639e2d]       ; 00528eb1 | DOUBLE_00639e2d
    FNSTSW AX                           ; 00528eb7
    SAHF                                ; 00528eb9
    JBE 0x00528ec8                      ; 00528eba
        ;   XREF to: 00528ec8 (CONDITIONAL_JUMP)  ; LAB_00528ec8
    FLD float ptr [ESP]                 ; 00528ebc
    FADD float ptr [0x00639e35]         ; 00528ebf | FLOAT_00639e35
    FSTP float ptr [ESP]                ; 00528ec5
    FLD float ptr [EBP + 0x18]          ; 00528ec8
        ;   Label: LAB_00528ec8
    FMUL double ptr [0x00639e3d]        ; 00528ecb | DOUBLE_00639e3d
    FLD float ptr [ESP]                 ; 00528ed1
    FXCH                                ; 00528ed4
    FST float ptr [ESP + 0x1b00]        ; 00528ed6
    FCHS                                ; 00528edd
    FSTP float ptr [ESP + 0x1afc]       ; 00528edf
    FCOMP float ptr [ESP + 0x1afc]      ; 00528ee6
    FNSTSW AX                           ; 00528eed
    SAHF                                ; 00528eef
    JNC 0x00528efc                      ; 00528ef0
        ;   XREF to: 00528efc (CONDITIONAL_JUMP)  ; LAB_00528efc
    MOV EAX,dword ptr [ESP + 0x1afc]    ; 00528ef2
    MOV dword ptr [ESP],EAX             ; 00528ef9
    FLD float ptr [ESP]                 ; 00528efc
        ;   Label: LAB_00528efc
    FCOMP float ptr [ESP + 0x1b00]      ; 00528eff
    FNSTSW AX                           ; 00528f06
    SAHF                                ; 00528f08
    JBE 0x00528f15                      ; 00528f09
        ;   XREF to: 00528f15 (CONDITIONAL_JUMP)  ; LAB_00528f15
    MOV EAX,dword ptr [ESP + 0x1b00]    ; 00528f0b
    MOV dword ptr [ESP],EAX             ; 00528f12
    FLD float ptr [EBX + 0x34]          ; 00528f15
        ;   Label: LAB_00528f15
    FADD float ptr [ESP]                ; 00528f18
    PUSH EBX                            ; 00528f1b
    FSTP float ptr [EBX + 0x34]         ; 00528f1c
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 00528f1f
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00528f24
    MOV ESI,dword ptr [EBX + 0x2598]    ; 00528f27
        ;   Label: LAB_00528f27
    MOV EAX,dword ptr [ESI + 0x154]     ; 00528f2d
    PUSH 0x0                            ; 00528f33
    MOV dword ptr [ESP + 0x1b08],EAX    ; 00528f35
    LEA EAX,[ESP + 0x1ad8]              ; 00528f3c
    PUSH EAX                            ; 00528f43
    LEA EDI,[EBX + 0x158]               ; 00528f44
    PUSH EDI                            ; 00528f4a
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00528f4b
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00528f50
    PUSH EAX                            ; 00528f53
    PUSH EBX                            ; 00528f54
    MOV EAX,dword ptr [ESP + 0x1b0c]    ; 00528f55
    PUSH ESI                            ; 00528f5c
    CALL dword ptr [EAX + 0x124]        ; 00528f5d
    ADD ESP,0xc                         ; 00528f63
    TEST EAX,EAX                        ; 00528f66
    JZ 0x00529122                       ; 00528f68
        ;   XREF to: 00529122 (CONDITIONAL_JUMP)  ; LAB_00529122
    CMP dword ptr [EBX + 0x2598],0x0    ; 00528f6e
    JNZ 0x0052912d                      ; 00528f75
        ;   XREF to: 0052912d (CONDITIONAL_JUMP)  ; LAB_0052912d
    PUSH 0x1                            ; 00528f7b
        ;   Label: LAB_00528f7b
    PUSH 0x0                            ; 00528f7d
    LEA EAX,[EBX + 0x158]               ; 00528f7f
    PUSH EAX                            ; 00528f85
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00528f86
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00528f86
    ADD ESP,0xc                         ; 00528f8b
    PUSH EBX                            ; 00528f8e
        ;   Label: LAB_00528f8e
    CALL core_charactr.cpp_CCharacter_FUN_00429820 ; 00528f8f
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00528f94
    LEA ESI,[EBX + 0x158]               ; 00528f97
    PUSH ESI                            ; 00528f9d
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 00528f9e
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00528fa3
    MOV EAX,dword ptr [EBX + 0x154]     ; 00528fa6
    PUSH EBX                            ; 00528fac
    CALL dword ptr [EAX + 0x120]        ; 00528fad
    ADD ESP,0x4                         ; 00528fb3
    PUSH dword ptr [EBP + 0x18]         ; 00528fb6
    PUSH EBX                            ; 00528fb9
    CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0 ; 00528fba
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr)
    MOV EDX,dword ptr [EBX + 0x21e8c]   ; 00528fbf
    ADD ESP,0x8                         ; 00528fc5
    TEST EDX,EDX                        ; 00528fc8
    JNZ 0x00529228                      ; 00528fca
        ;   XREF to: 00529228 (CONDITIONAL_JUMP)  ; LAB_00529228
    CMP dword ptr [EBX + 0x21e88],0x0   ; 00528fd0
    JZ 0x00529374                       ; 00528fd7
        ;   XREF to: 00529374 (CONDITIONAL_JUMP)  ; LAB_00529374
    LEA EAX,[EBX + 0x21e94]             ; 00528fdd
    PUSH EAX                            ; 00528fe3
    MOV EDI,dword ptr [0x006793d0]      ; 00528fe4 | g_CEventListPtr
    PUSH EDI                            ; 00528fea | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 00528feb
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00528ff0
    TEST EAX,EAX                        ; 00528ff3
    JZ 0x00528d3b                       ; 00528ff5
        ;   XREF to: 00528d3b (CONDITIONAL_JUMP)  ; LAB_00528d3b
    PUSH EBX                            ; 00528ffb
    CALL core_moloch.cpp_PlaySoundAbtMolochMorphing_FUN_00529900 ; 00528ffc
        ;   XREF to: 00529900 (UNCONDITIONAL_CALL)  ; undefined core_moloch.cpp_PlaySoundAbtMolochMorphing_FUN_00529900()
    ADD ESP,0x4                         ; 00529001
    MOV ESP,EBP                         ; 00529004
    POP EBP                             ; 00529006
    POP EDI                             ; 00529007
    POP ESI                             ; 00529008
    POP EBX                             ; 00529009
    RET                                 ; 0052900a
    PUSH 0x1                            ; 0052900b
        ;   Label: LAB_0052900b
    PUSH 0x0                            ; 0052900d
    PUSH ESI                            ; 0052900f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00529010
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00529015
    PUSH EBX                            ; 00529018
    PUSH 0x639da5                       ; 00529019 | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x0066e8e0]                ; 0052901e | g_ConsolePtr | g_CConsolePtr
    PUSH EAX                            ; 00529023 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 00529024
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x00528e37                      ; 00529029
        ;   XREF to: 00528e37 (UNCONDITIONAL_JUMP)  ; LAB_00528e37
    PUSH 0x1                            ; 0052902e
        ;   Label: LAB_0052902e
    PUSH 0x1                            ; 00529030
    JMP 0x00528e31                      ; 00529032
        ;   XREF to: 00528e31 (UNCONDITIONAL_JUMP)  ; LAB_00528e31
    JBE 0x0052902e                      ; 00529037
        ;   XREF to: 0052902e (CONDITIONAL_JUMP)  ; LAB_0052902e
        ;   Label: LAB_00529037
    CMP EAX,0x3                         ; 00529039
    JZ 0x0052900b                       ; 0052903c
        ;   XREF to: 0052900b (CONDITIONAL_JUMP)  ; LAB_0052900b
    PUSH 0x1                            ; 0052903e
        ;   Label: LAB_0052903e
    PUSH 0x0                            ; 00529040
    LEA EAX,[EBX + 0x158]               ; 00529042
    PUSH EAX                            ; 00529048
    JMP 0x00528e32                      ; 00529049
        ;   XREF to: 00528e32 (UNCONDITIONAL_JUMP)  ; LAB_00528e32
    CMP dword ptr [EBX + 0xbe28],0x2    ; 0052904e
        ;   Label: LAB_0052904e
    JNZ 0x00529063                      ; 00529055
        ;   XREF to: 00529063 (CONDITIONAL_JUMP)  ; LAB_00529063
    PUSH dword ptr [EBP + 0x18]         ; 00529057
    PUSH EBX                            ; 0052905a
    CALL core_moloch.cpp_FUN_005293b0   ; 0052905b
        ;   XREF to: 005293b0 (UNCONDITIONAL_CALL)  ; undefined core_moloch.cpp_FUN_005293b0()
    ADD ESP,0x8                         ; 00529060
    LEA EAX,[EBX + 0x158]               ; 00529063
        ;   Label: LAB_00529063
    PUSH EAX                            ; 00529069
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0052906a
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0052906f
    ADD ESP,0x4                         ; 00529072
    CMP EAX,0x1                         ; 00529075
    JNC 0x0052910e                      ; 00529078
        ;   XREF to: 0052910e (CONDITIONAL_JUMP)  ; LAB_0052910e
    TEST EAX,EAX                        ; 0052907e
    JNZ 0x00528e3a                      ; 00529080
        ;   XREF to: 00528e3a (CONDITIONAL_JUMP)  ; LAB_00528e3a
    CMP dword ptr [EBX + 0x2410],0x0    ; 00529086
        ;   Label: LAB_00529086
    JZ 0x00528e3a                       ; 0052908d
        ;   XREF to: 00528e3a (CONDITIONAL_JUMP)  ; LAB_00528e3a
    MOV EAX,dword ptr [EBX + 0xbe2c]    ; 00529093
    XOR ESI,ESI                         ; 00529099
    TEST EAX,EAX                        ; 0052909b
    JZ 0x005290a4                       ; 0052909d
        ;   XREF to: 005290a4 (CONDITIONAL_JUMP)  ; LAB_005290a4
    MOV ESI,0x1                         ; 0052909f
    CMP dword ptr [EBX + 0xbe30],0x0    ; 005290a4
        ;   Label: LAB_005290a4
    JZ 0x005290b2                       ; 005290ab
        ;   XREF to: 005290b2 (CONDITIONAL_JUMP)  ; LAB_005290b2
    MOV ESI,0x2                         ; 005290ad
    CMP dword ptr [EBX + 0xbe44],0x0    ; 005290b2
        ;   Label: LAB_005290b2
    JZ 0x005290ce                       ; 005290b9
        ;   XREF to: 005290ce (CONDITIONAL_JUMP)  ; LAB_005290ce
    CMP dword ptr [EBX + 0x21e8c],0x0   ; 005290bb
    JZ 0x00529103                       ; 005290c2
        ;   XREF to: 00529103 (CONDITIONAL_JUMP)  ; LAB_00529103
    MOV dword ptr [EBX + 0xbe44],0x0    ; 005290c4
        ;   Label: LAB_005290c4
    FLD float ptr [EBX + 0xbe50]        ; 005290ce
        ;   Label: LAB_005290ce
    LEA EDI,[EBX + 0x158]               ; 005290d4
    FMUL float ptr [EBX + 0x2438]       ; 005290da
    PUSH EDI                            ; 005290e0
    FSTP float ptr [EBX + 0x2418]       ; 005290e1
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005290e7
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005290ec
    ADD ESP,0x4                         ; 005290ef
    CMP ESI,EAX                         ; 005290f2
    JZ 0x00528e3a                       ; 005290f4
        ;   XREF to: 00528e3a (CONDITIONAL_JUMP)  ; LAB_00528e3a
    PUSH 0x1                            ; 005290fa
    PUSH ESI                            ; 005290fc
    PUSH EDI                            ; 005290fd
    JMP 0x00528e32                      ; 005290fe
        ;   XREF to: 00528e32 (UNCONDITIONAL_JUMP)  ; LAB_00528e32
    PUSH EBX                            ; 00529103
        ;   Label: LAB_00529103
    CALL core_moloch.cpp_PlaySoundAbtMolochMorphing_FUN_00529900 ; 00529104
        ;   XREF to: 00529900 (UNCONDITIONAL_CALL)  ; undefined core_moloch.cpp_PlaySoundAbtMolochMorphing_FUN_00529900()
    ADD ESP,0x4                         ; 00529109
    JMP 0x005290c4                      ; 0052910c
        ;   XREF to: 005290c4 (UNCONDITIONAL_JUMP)  ; LAB_005290c4
    JBE 0x00529086                      ; 0052910e
        ;   XREF to: 00529086 (CONDITIONAL_JUMP)  ; LAB_00529086
        ;   Label: LAB_0052910e
    CMP EAX,0x2                         ; 00529114
    JZ 0x00529086                       ; 00529117
        ;   XREF to: 00529086 (CONDITIONAL_JUMP)  ; LAB_00529086
    JMP 0x00528e3a                      ; 0052911d
        ;   XREF to: 00528e3a (UNCONDITIONAL_JUMP)  ; LAB_00528e3a
    MOV dword ptr [EBX + 0x2598],EAX    ; 00529122
        ;   Label: LAB_00529122
    JMP 0x00528f7b                      ; 00529128
        ;   XREF to: 00528f7b (UNCONDITIONAL_JUMP)  ; LAB_00528f7b
    CMP dword ptr [EBX + 0xbe38],0x0    ; 0052912d
        ;   Label: LAB_0052912d
    JZ 0x00528f8e                       ; 00529134
        ;   XREF to: 00528f8e (CONDITIONAL_JUMP)  ; LAB_00528f8e
    PUSH 0x1                            ; 0052913a
    PUSH 0x0                            ; 0052913c
    PUSH EDI                            ; 0052913e
    JMP 0x00528f86                      ; 0052913f
        ;   XREF to: 00528f86 (UNCONDITIONAL_JUMP)  ; LAB_00528f86
    FLD float ptr [EBP + 0x18]          ; 00529144
        ;   Label: LAB_00529144
    FLD ST0                             ; 00529147
    FMUL double ptr [0x00639e15]        ; 00529149 | DOUBLE_00639e15
    FLD float ptr [EBX + 0x242c]        ; 0052914f
    FXCH                                ; 00529155
    FSUBR ST0,ST1                       ; 00529157
    LEA EAX,[EBX + 0x2428]              ; 00529159
    FSTP ST1                            ; 0052915f
    FSTP float ptr [EBX + 0x242c]       ; 00529161
    FLD float ptr [EAX]                 ; 00529167
    FMUL ST1                            ; 00529169
    FSTP float ptr [ESP + 0x1ae0]       ; 0052916b
    FLD float ptr [EAX + 0x4]           ; 00529172
    FMUL ST1                            ; 00529175
    LEA ESI,[EBX + 0x23ac]              ; 00529177
    FSTP float ptr [ESP + 0x1ae4]       ; 0052917d
    FMUL float ptr [EAX + 0x8]          ; 00529184
    LEA EAX,[EBX + 0x241c]              ; 00529187
    FSTP float ptr [ESP + 0x1ae8]       ; 0052918d
    FLD float ptr [ESI]                 ; 00529194
    FADD float ptr [EAX]                ; 00529196
    FST float ptr [ESP + 0x1aa4]        ; 00529198
    FLD float ptr [ESI + 0x4]           ; 0052919f
    FADD float ptr [EAX + 0x4]          ; 005291a2
    FXCH                                ; 005291a5
    FADD float ptr [ESP + 0x1ae0]       ; 005291a7
    FXCH                                ; 005291ae
    FST float ptr [ESP + 0x1aa8]        ; 005291b0
    FLD float ptr [ESI + 0x8]           ; 005291b7
    FADD float ptr [EAX + 0x8]          ; 005291ba
    FXCH                                ; 005291bd
    FADD float ptr [ESP + 0x1ae4]       ; 005291bf
    FXCH                                ; 005291c6
    FSTP float ptr [ESP + 0x1aac]       ; 005291c8
    FXCH                                ; 005291cf
    FSTP float ptr [ESP + 0x1ab0]       ; 005291d1
    FLD float ptr [ESP + 0x1aac]        ; 005291d8
    FADD float ptr [ESP + 0x1ae8]       ; 005291df
    FXCH                                ; 005291e6
    FSTP float ptr [ESP + 0x1ab4]       ; 005291e8
    FSTP float ptr [ESP + 0x1ab8]       ; 005291ef
    MOV dword ptr [ESI + 0x8],EDX       ; 005291f6
    MOV ECX,dword ptr [ESI + 0x8]       ; 005291f9
    MOV dword ptr [ESI + 0x4],ECX       ; 005291fc
    MOV ECX,dword ptr [ESI + 0x4]       ; 005291ff
    MOV dword ptr [ESI],ECX             ; 00529202
    MOV dword ptr [EAX + 0x8],EDX       ; 00529204
    MOV EDX,dword ptr [EAX + 0x8]       ; 00529207
    MOV dword ptr [EAX + 0x4],EDX       ; 0052920a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0052920d
    MOV dword ptr [EAX],EDX             ; 00529210
    LEA EAX,[ESP + 0x1ab0]              ; 00529212
    PUSH EAX                            ; 00529219
    PUSH EBX                            ; 0052921a
    CALL core_charactr.cpp_CCharacter_FUN_00428f40 ; 0052921b
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00428f40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00529220
    JMP 0x00528f8e                      ; 00529223
        ;   XREF to: 00528f8e (UNCONDITIONAL_JUMP)  ; LAB_00528f8e
    PUSH ESI                            ; 00529228
        ;   Label: LAB_00529228
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00529229
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0052922e
    SUB ESP,0x4                         ; 00529231
    MOV EDX,dword ptr [ESI + 0x8]       ; 00529234
    MOV dword ptr [ESP],EDX             ; 00529237
    PUSH EAX                            ; 0052923a
    LEA ESI,[EBX + 0x1fbd4]             ; 0052923b
    PUSH ESI                            ; 00529241
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0 ; 00529242
        ;   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 00529247
    PUSH ESI                            ; 0052924a
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 ; 0052924b
        ;   XREF to: 0059e000 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00529250
    FLD float ptr [EBX + 0x21e90]       ; 00529253
    FADD float ptr [EBP + 0x18]         ; 00529259
    FST float ptr [EBX + 0x21e90]       ; 0052925c
    FCOMP float ptr [0x00661938]        ; 00529262 | FLOAT_00661938
    FNSTSW AX                           ; 00529268
    SAHF                                ; 0052926a
    JBE 0x00528d3b                      ; 0052926b
        ;   XREF to: 00528d3b (CONDITIONAL_JUMP)  ; LAB_00528d3b
    CMP dword ptr [EBX + 0x21e88],0x0   ; 00529271
    JNZ 0x00529354                      ; 00529278
        ;   XREF to: 00529354 (CONDITIONAL_JUMP)  ; LAB_00529354
    MOV EDX,0x639ddc                    ; 0052927e | = "moloch_d.dfm"
    MOV EDI,0x639dcf                    ; 00529283 | = "moloch_h.dfm"
    MOV dword ptr [EBX + 0x21e88],0x1   ; 00529288
    MOV dword ptr [ESP + 0x1af8],EDX    ; 00529292 | = "moloch_d.dfm"
    LEA EAX,[ESP + 0x8]                 ; 00529299
        ;   Label: LAB_00529299
    PUSH EAX                            ; 0052929d
    LEA ESI,[EBX + 0x1fbd4]             ; 0052929e
    MOV dword ptr [EBX + 0x21e8c],0x0   ; 005292a4
    PUSH ESI                            ; 005292ae
    MOV dword ptr [EBX + 0x21e90],0x0   ; 005292af
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510 ; 005292b9
        ;   XREF to: 005a1510 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510(CDeformableModelInstance * this_ptr, SBoneTransformData * bone_transform)
    ADD ESP,0x8                         ; 005292be
    PUSH ESI                            ; 005292c1
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005292c2
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0x1b08],EAX    ; 005292c7
    ADD ESP,0x4                         ; 005292ce
    PUSH EDI                            ; 005292d1 | = "moloch_h.dfm"
    LEA EDI,[EBX + 0x158]               ; 005292d2
    MOV EAX,dword ptr [ESI + 0x8]       ; 005292d8
    PUSH EDI                            ; 005292db
    MOV dword ptr [ESP + 0x1afc],EAX    ; 005292dc
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005292e3
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 005292e8
    PUSH EDI                            ; 005292eb
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 005292ec
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005292f1
    MOV EAX,dword ptr [ESP + 0x1b04]    ; 005292f4
    PUSH dword ptr [ESP + 0x1af4]       ; 005292fb
    PUSH EAX                            ; 00529302
    PUSH EDI                            ; 00529303
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0 ; 00529304
        ;   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 00529309
    MOV EDX,dword ptr [ESP + 0x1af8]    ; 0052930c | = "moloch_d.dfm"
    PUSH EDX                            ; 00529313 | = "moloch_d.dfm"
    PUSH ESI                            ; 00529314
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00529315
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 0052931a
    PUSH ESI                            ; 0052931d
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 0052931e
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00529323
    PUSH EDI                            ; 00529326
    PUSH 0x0                            ; 00529327
    ADD EBX,0x21f5c                     ; 00529329
    PUSH EBX                            ; 0052932f
    CALL core_morph.cpp_FUN_0052b430    ; 00529330
        ;   XREF to: 0052b430 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_0052b430()
    ADD ESP,0xc                         ; 00529335
    PUSH ESI                            ; 00529338
    PUSH 0x1                            ; 00529339
    PUSH EBX                            ; 0052933b
    CALL core_morph.cpp_FUN_0052b430    ; 0052933c
        ;   XREF to: 0052b430 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_FUN_0052b430()
    ADD ESP,0xc                         ; 00529341
    PUSH EBX                            ; 00529344
    CALL core_morph.cpp_CMorph_getReady_FUN_0052b680 ; 00529345
        ;   XREF to: 0052b680 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_0052b680(CMorph * this_ptr)
    ADD ESP,0x4                         ; 0052934a
    MOV ESP,EBP                         ; 0052934d
    POP EBP                             ; 0052934f
    POP EDI                             ; 00529350
    POP ESI                             ; 00529351
    POP EBX                             ; 00529352
    RET                                 ; 00529353
    MOV EDI,0x639de9                    ; 00529354 | = "moloch_d.dfm"
        ;   Label: LAB_00529354
    MOV ECX,0x639df6                    ; 00529359 | = "moloch_h.dfm"
    MOV dword ptr [EBX + 0x21e88],0x0   ; 0052935e
    MOV dword ptr [ESP + 0x1af8],ECX    ; 00529368 | = "moloch_h.dfm"
    JMP 0x00529299                      ; 0052936f
        ;   XREF to: 00529299 (UNCONDITIONAL_JUMP)  ; LAB_00529299
    LEA EAX,[EBX + 0x21ef8]             ; 00529374
        ;   Label: LAB_00529374
    PUSH EAX                            ; 0052937a
    MOV ESI,dword ptr [0x006793d0]      ; 0052937b | g_CEventListPtr
    PUSH ESI                            ; 00529381 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 00529382
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00529387
    TEST EAX,EAX                        ; 0052938a
    JZ 0x00528d3b                       ; 0052938c
        ;   XREF to: 00528d3b (CONDITIONAL_JUMP)  ; LAB_00528d3b
    PUSH EBX                            ; 00529392
    CALL core_moloch.cpp_PlaySoundAbtMolochMorphing_FUN_00529900 ; 00529393
        ;   XREF to: 00529900 (UNCONDITIONAL_CALL)  ; undefined core_moloch.cpp_PlaySoundAbtMolochMorphing_FUN_00529900()
    ADD ESP,0x4                         ; 00529398
    MOV ESP,EBP                         ; 0052939b
    POP EBP                             ; 0052939d
    POP EDI                             ; 0052939e
    POP ESI                             ; 0052939f
    POP EBX                             ; 005293a0
    RET                                 ; 005293a1

