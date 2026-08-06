; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_npc_cpp_CNPC_process_FUN_004eea20(CNPC *this_ptr,float delta_time)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
;
; XREF[1]:
;   core_hpriest.cpp_CHighPriestOfGardath_process_FUN_004b9b80 at 004b9b8a
;
; Referenced Globals:
;   TerminatedCString s_STAND_0058cad6
;   TerminatedCString s_s_confused_while_walking_0058cadc
;   TerminatedCString s_RUN_0058cb06
;   TerminatedCString s_WALK_0058cb0a
;   TerminatedCString s_STAND_0058cb0f
;   double DOUBLE_0058cb1b = 3.14159265350000
;   double DOUBLE_0058cb23 = 0.5
;   double DOUBLE_0058cb2b = 32
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   CGore* g_CGore_PTR_005b96c4 = 01c78c7c
;   CConsole g_CConsole_0077ad0c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_charactr.cpp_CCharacter_FUN_004259f0
;   core_charactr.cpp_CCharacter_FUN_00428c00
;   core_charactr.cpp_CCharacter_FUN_0042a150
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
;   core_charactr.cpp_CCharacter_processSmoking_FUN_0042abd0
;   core_gore.cpp_CGore_createBloodPool_FUN_004b0480
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0
;   core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004e1740
;   core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eea20
        ;   Label: core_npc.cpp_CNPC_process_FUN_004eea20
    PUSH ESI                            ; 004eea21
    PUSH EDI                            ; 004eea22
    PUSH EBP                            ; 004eea23
    MOV EBP,ESP                         ; 004eea24
    SUB ESP,0x48                        ; 004eea26
    AND ESP,0xfffffff8                  ; 004eea29
    MOV EBX,dword ptr [EBP + 0x14]      ; 004eea2c
    PUSH dword ptr [EBP + 0x18]         ; 004eea2f
    PUSH EBX                            ; 004eea32
    CALL core_charactr.cpp_CCharacter_FUN_004259f0 ; 004eea33
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_004259f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004eea38
    TEST EAX,EAX                        ; 004eea3b
    JNZ 0x004eea46                      ; 004eea3d
        ;   XREF to: 004eea46 (CONDITIONAL_JUMP)  ; LAB_004eea46
    MOV ESP,EBP                         ; 004eea3f
    POP EBP                             ; 004eea41
    POP EDI                             ; 004eea42
    POP ESI                             ; 004eea43
    POP EBX                             ; 004eea44
    RET                                 ; 004eea45
    PUSH dword ptr [EBP + 0x18]         ; 004eea46
        ;   Label: LAB_004eea46
    PUSH EBX                            ; 004eea49
    CALL core_charactr.cpp_CCharacter_processSmoking_FUN_0042abd0 ; 004eea4a
        ;   XREF to: 0042abd0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processSmoking_FUN_0042abd0(CCharacter * this_ptr, float delta_time)
    LEA EAX,[EBX + 0x23a4]              ; 004eea4f
    MOV dword ptr [EAX + 0x8],0x0       ; 004eea55
    ADD ESP,0x8                         ; 004eea5c
    MOV EDX,dword ptr [EAX + 0x8]       ; 004eea5f
    MOV dword ptr [EAX + 0x4],EDX       ; 004eea62
    MOV EDX,dword ptr [EAX + 0x4]       ; 004eea65
    MOV dword ptr [EAX],EDX             ; 004eea68
    MOV EAX,dword ptr [EBP + 0x18]      ; 004eea6a
    LEA ESI,[EBX + 0x150]               ; 004eea6d
    MOV dword ptr [ESP],EAX             ; 004eea73
    FLD float ptr [ESP]                 ; 004eea76
        ;   Label: LAB_004eea76
    FLDZ                                ; 004eea79
    FCOMPP                              ; 004eea7b
    FNSTSW AX                           ; 004eea7d
    SAHF                                ; 004eea7f
    JNC 0x004eea9a                      ; 004eea80
        ;   XREF to: 004eea9a (CONDITIONAL_JUMP)  ; LAB_004eea9a
    MOV EAX,ESP                         ; 004eea82
    PUSH EAX                            ; 004eea84
    PUSH ESI                            ; 004eea85
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 004eea86
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004eea8b
    PUSH EAX                            ; 004eea8e
    PUSH EBX                            ; 004eea8f
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 004eea90
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042add0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004eea95
    JMP 0x004eea76                      ; 004eea98
        ;   XREF to: 004eea76 (UNCONDITIONAL_JUMP)  ; LAB_004eea76
    PUSH EBX                            ; 004eea9a
        ;   Label: LAB_004eea9a
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004eea9b
    CALL dword ptr [EAX + 0x104]        ; 004eeaa1
    ADD ESP,0x4                         ; 004eeaa7
    CMP EAX,0x1                         ; 004eeaaa
    JLE 0x004eeb05                      ; 004eeaad
        ;   XREF to: 004eeb05 (CONDITIONAL_JUMP)  ; LAB_004eeb05
    CMP dword ptr [EBX + 0x70],0x1      ; 004eeaaf
    JNZ 0x004eeb05                      ; 004eeab3
        ;   XREF to: 004eeb05 (CONDITIONAL_JUMP)  ; LAB_004eeb05
    MOV ECX,dword ptr [EBX + 0x1f56c]   ; 004eeab5
    TEST ECX,ECX                        ; 004eeabb
    JNZ 0x004eeb05                      ; 004eeabd
        ;   XREF to: 004eeb05 (CONDITIONAL_JUMP)  ; LAB_004eeb05
    MOV EDI,dword ptr [EBX + 0xdc]      ; 004eeabf
    TEST EDI,EDI                        ; 004eeac5
    JNZ 0x004eeb05                      ; 004eeac7
        ;   XREF to: 004eeb05 (CONDITIONAL_JUMP)  ; LAB_004eeb05
    PUSH ECX                            ; 004eeac9
    LEA EAX,[ESP + 0x14]                ; 004eeaca
    PUSH EAX                            ; 004eeace
    PUSH ESI                            ; 004eeacf
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 004eead0
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004eead5
    PUSH EAX                            ; 004eead8
    LEA EAX,[ESP + 0x2c]                ; 004eead9
    PUSH EAX                            ; 004eeadd
    PUSH EBX                            ; 004eeade
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004eeadf
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004eeae4
    PUSH EDI                            ; 004eeae7
    LEA EAX,[ESP + 0x2c]                ; 004eeae8
    PUSH EAX                            ; 004eeaec
    MOV EAX,[0x005b96c4]                ; 004eeaed | g_CGore_PTR_005b96c4
    PUSH EAX                            ; 004eeaf2
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004b0480 ; 004eeaf3
        ;   XREF to: 004b0480 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004b0480(CGore * this_ptr, CVector3f * position, int blood_type)
    ADD ESP,0xc                         ; 004eeaf8
    MOV dword ptr [EBX + 0x1f56c],0x1   ; 004eeafb
    FLD float ptr [EBP + 0x18]          ; 004eeb05
        ;   Label: LAB_004eeb05
    FMUL double ptr [0x0058cb1b]        ; 004eeb08 | DOUBLE_0058cb1b
    FMUL double ptr [0x0058cb23]        ; 004eeb0e | DOUBLE_0058cb23
    PUSH dword ptr [EBP + 0x18]         ; 004eeb14
    MOV EAX,dword ptr [EBX + 0x23ac]    ; 004eeb17
    MOV dword ptr [EBX + 0x242c],EAX    ; 004eeb1d
    PUSH EBX                            ; 004eeb23
    FSTP float ptr [EBX + 0x2430]       ; 004eeb24
    CALL core_charactr.cpp_CCharacter_FUN_00428c00 ; 004eeb2a
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_00428c00(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004eeb2f
    TEST EAX,EAX                        ; 004eeb32
    JZ 0x004eeb7c                       ; 004eeb34
        ;   XREF to: 004eeb7c (CONDITIONAL_JUMP)  ; LAB_004eeb7c
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 004eeb36
    CMP EAX,0x2                         ; 004eeb3c
    JNC 0x004eecc5                      ; 004eeb3f
        ;   XREF to: 004eecc5 (CONDITIONAL_JUMP)  ; LAB_004eecc5
    CMP EAX,0x1                         ; 004eeb45
    JNZ 0x004eecd2                      ; 004eeb48
        ;   XREF to: 004eecd2 (CONDITIONAL_JUMP)  ; LAB_004eecd2
    PUSH 0x1                            ; 004eeb4e
        ;   Label: LAB_004eeb4e
    PUSH 0x58cb0a                       ; 004eeb50 | = "WALK"
    LEA EAX,[EBX + 0x150]               ; 004eeb55
        ;   Label: LAB_004eeb55
    PUSH EAX                            ; 004eeb5b
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004e1740 ; 004eeb5c
        ;   XREF to: 004e1740 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004e1740(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 004eeb61
        ;   Label: LAB_004eeb61
    LEA EAX,[EBX + 0x23a4]              ; 004eeb64
    MOV dword ptr [EAX + 0x8],0x0       ; 004eeb6a
    MOV EDX,dword ptr [EAX + 0x8]       ; 004eeb71
    MOV dword ptr [EAX + 0x4],EDX       ; 004eeb74
    MOV EDX,dword ptr [EAX + 0x4]       ; 004eeb77
    MOV dword ptr [EAX],EDX             ; 004eeb7a
    FLD float ptr [EBP + 0x18]          ; 004eeb7c
        ;   Label: LAB_004eeb7c
    FMUL double ptr [0x0058cb2b]        ; 004eeb7f | DOUBLE_0058cb2b
    FLD float ptr [EBX + 0x2424]        ; 004eeb85
    FXCH                                ; 004eeb8b
    FSUBR ST0,ST1                       ; 004eeb8d
    LEA EDX,[EBX + 0x2420]              ; 004eeb8f
    FSTP ST1                            ; 004eeb95
    FSTP float ptr [EBX + 0x2424]       ; 004eeb97
    FLD float ptr [EDX]                 ; 004eeb9d
    FMUL float ptr [EBP + 0x18]         ; 004eeb9f
    FSTP float ptr [ESP + 0x1c]         ; 004eeba2
    FLD float ptr [EDX + 0x4]           ; 004eeba6
    FMUL float ptr [EBP + 0x18]         ; 004eeba9
    LEA ESI,[EBX + 0x2414]              ; 004eebac
    FSTP float ptr [ESP + 0x20]         ; 004eebb2
    FLD float ptr [EDX + 0x8]           ; 004eebb6
    FMUL float ptr [EBP + 0x18]         ; 004eebb9
    LEA EAX,[EBX + 0x23a4]              ; 004eebbc
    FLD float ptr [ESP + 0x1c]          ; 004eebc2
    FXCH                                ; 004eebc6
    FSTP float ptr [ESP + 0x24]         ; 004eebc8
    FADD float ptr [ESI]                ; 004eebcc
    FLD float ptr [ESP + 0x20]          ; 004eebce
    FXCH                                ; 004eebd2
    FSTP float ptr [ESP + 0x34]         ; 004eebd4
    FADD float ptr [ESI + 0x4]          ; 004eebd8
    FLD float ptr [ESP + 0x24]          ; 004eebdb
    FXCH                                ; 004eebdf
    FSTP float ptr [ESP + 0x38]         ; 004eebe1
    FADD float ptr [ESI + 0x8]          ; 004eebe5
    FLD float ptr [ESP + 0x34]          ; 004eebe8
    FXCH                                ; 004eebec
    FSTP float ptr [ESP + 0x3c]         ; 004eebee
    FADD float ptr [EAX]                ; 004eebf2
    FLD float ptr [ESP + 0x38]          ; 004eebf4
    FXCH                                ; 004eebf8
    FSTP float ptr [ESP + 0x4]          ; 004eebfa
    FADD float ptr [EAX + 0x4]          ; 004eebfe
    FLD float ptr [ESP + 0x3c]          ; 004eec01
    FXCH                                ; 004eec05
    FSTP float ptr [ESP + 0x8]          ; 004eec07
    FADD float ptr [EAX + 0x8]          ; 004eec0b
    FSTP float ptr [ESP + 0xc]          ; 004eec0e
    MOV dword ptr [ESI + 0x8],0x0       ; 004eec12
    MOV EDX,dword ptr [ESI + 0x8]       ; 004eec19
    MOV dword ptr [ESI + 0x4],EDX       ; 004eec1c
    MOV EDX,dword ptr [ESI + 0x4]       ; 004eec1f
    MOV dword ptr [ESI],EDX             ; 004eec22
    MOV dword ptr [EAX + 0x8],0x0       ; 004eec24
    MOV EDX,dword ptr [EAX + 0x8]       ; 004eec2b
    MOV dword ptr [EAX + 0x4],EDX       ; 004eec2e
    MOV EDX,dword ptr [EAX + 0x4]       ; 004eec31
    MOV dword ptr [EAX],EDX             ; 004eec34
    LEA EAX,[ESP + 0x4]                 ; 004eec36
    PUSH EAX                            ; 004eec3a
    PUSH EBX                            ; 004eec3b
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 004eec3c
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004eec41
    PUSH EBX                            ; 004eec44
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 004eec45
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_004259a0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004eec4a
    LEA EAX,[EBX + 0x150]               ; 004eec4d
    PUSH EAX                            ; 004eec53
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 004eec54
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004eec59
    PUSH dword ptr [EBP + 0x18]         ; 004eec5c
    PUSH EBX                            ; 004eec5f
    CALL core_charactr.cpp_CCharacter_FUN_0042a150 ; 004eec60
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042a150(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004eec65
    MOV ESP,EBP                         ; 004eec68
    POP EBP                             ; 004eec6a
    POP EDI                             ; 004eec6b
    POP ESI                             ; 004eec6c
    POP EBX                             ; 004eec6d
    RET                                 ; 004eec6e
    PUSH 0x1                            ; 004eec6f
        ;   Label: LAB_004eec6f
    PUSH 0x58cad6                       ; 004eec71 | = "STAND"
    PUSH ESI                            ; 004eec76
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004e1740 ; 004eec77
        ;   XREF to: 004e1740 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004e1740(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 004eec7c
    PUSH EBX                            ; 004eec7f
    PUSH 0x58cadc                       ; 004eec80 | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x005ad350]      ; 004eec85 | g_CConsole_PTR_005ad350
    PUSH EDX                            ; 004eec8b | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004eec8c
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    JMP 0x004eeb61                      ; 004eec91
        ;   XREF to: 004eeb61 (UNCONDITIONAL_JUMP)  ; LAB_004eeb61
    PUSH 0x0                            ; 004eec96
        ;   Label: LAB_004eec96
    PUSH 0x58cb06                       ; 004eec98 | = "RUN"
    PUSH ESI                            ; 004eec9d
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 004eec9e
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004e1890(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004eeca3
    PUSH EAX                            ; 004eeca6
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0 ; 004eeca7
        ;   XREF to: 004e10a0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004eecac
    TEST EAX,EAX                        ; 004eecaf
    JL 0x004eeb4e                       ; 004eecb1
        ;   XREF to: 004eeb4e (CONDITIONAL_JUMP)  ; LAB_004eeb4e
    PUSH 0x1                            ; 004eecb7
    PUSH EAX                            ; 004eecb9
    PUSH ESI                            ; 004eecba
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004eecbb
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    JMP 0x004eeb61                      ; 004eecc0
        ;   XREF to: 004eeb61 (UNCONDITIONAL_JUMP)  ; LAB_004eeb61
    LEA ESI,[EBX + 0x150]               ; 004eecc5
        ;   Label: LAB_004eecc5
    JBE 0x004eec96                      ; 004eeccb
        ;   XREF to: 004eec96 (CONDITIONAL_JUMP)  ; LAB_004eec96
    CMP EAX,0x3                         ; 004eeccd
    JZ 0x004eec6f                       ; 004eecd0
        ;   XREF to: 004eec6f (CONDITIONAL_JUMP)  ; LAB_004eec6f
    PUSH 0x1                            ; 004eecd2
        ;   Label: LAB_004eecd2
    PUSH 0x58cb0f                       ; 004eecd4 | = "STAND"
    JMP 0x004eeb55                      ; 004eecd9
        ;   XREF to: 004eeb55 (UNCONDITIONAL_JUMP)  ; LAB_004eeb55

