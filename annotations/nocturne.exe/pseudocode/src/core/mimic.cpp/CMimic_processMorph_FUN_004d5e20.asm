; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_CMimic_processMorph_FUN_004d5e20(CMimic *this_ptr,float delta_time)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_mimic.cpp_CMimic_beginMorph_FUN_004d5d00 at 004d5db9
;   core_mimic.cpp_CMimic_process_FUN_004d49f0 at 004d4ab5
;
; Referenced Globals:
;   TerminatedCString s_core_mimic_cpp_00589588
;   TerminatedCString s_CMimic_processMorph_can_0058959a
;   float FLOAT_005a05e4 = 1
;   CDemonMission* g_CDemonMission_PTR_005baf90 = 01cc9450
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_01cc9450
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720
;   core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110
;   core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d5e20
        ;   Label: core_mimic.cpp_CMimic_processMorph_FUN_004d5e20
    PUSH ESI                            ; 004d5e21
    PUSH EDI                            ; 004d5e22
    PUSH EBP                            ; 004d5e23
    MOV EBP,ESP                         ; 004d5e24
    SUB ESP,0x4                         ; 004d5e26
    AND ESP,0xfffffff8                  ; 004d5e29
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d5e2c
    CMP dword ptr [EBX + 0x4757c],0x0   ; 004d5e2f
    JZ 0x004d5e80                       ; 004d5e36
        ;   XREF to: 004d5e80 (CONDITIONAL_JUMP)  ; LAB_004d5e80
    FLD float ptr [EBP + 0x18]          ; 004d5e38
        ;   Label: LAB_004d5e38
    FDIV float ptr [0x005a05e4]         ; 004d5e3b | FLOAT_005a05e4
    FADD float ptr [EBX + 0x47578]      ; 004d5e41
    FST float ptr [EBX + 0x47578]       ; 004d5e47
    FLD1                                ; 004d5e4d
    FCOMPP                              ; 004d5e4f
    FNSTSW AX                           ; 004d5e51
    SAHF                                ; 004d5e53
    JBE 0x004d5ea5                      ; 004d5e54
        ;   XREF to: 004d5ea5 (CONDITIONAL_JUMP)  ; LAB_004d5ea5
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d5e56
    LEA ESI,[EBX + 0x150]               ; 004d5e59
    MOV dword ptr [ESP],EAX             ; 004d5e5f
    FLD float ptr [ESP]                 ; 004d5e62
        ;   Label: LAB_004d5e62
    FLDZ                                ; 004d5e65
    FCOMPP                              ; 004d5e67
    FNSTSW AX                           ; 004d5e69
    SAHF                                ; 004d5e6b
    JNC 0x004d5ef7                      ; 004d5e6c
        ;   XREF to: 004d5ef7 (CONDITIONAL_JUMP)  ; LAB_004d5ef7
    MOV EAX,ESP                         ; 004d5e72
    PUSH EAX                            ; 004d5e74
    PUSH ESI                            ; 004d5e75
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 004d5e76
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004d5e7b
    JMP 0x004d5e62                      ; 004d5e7e
        ;   XREF to: 004d5e62 (UNCONDITIONAL_JUMP)  ; LAB_004d5e62
    MOV ECX,0x589588                    ; 004d5e80 | = "..\\core\\mimic.cpp"
        ;   Label: LAB_004d5e80
    MOV ESI,0x4c9                       ; 004d5e85
    PUSH 0x58959a                       ; 004d5e8a | = "CMimic::processMorph - can't process ..."
    MOV dword ptr [0x01cc4800],ECX      ; 004d5e8f | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 004d5e95 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004d5e9b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004d5ea0
    JMP 0x004d5e38                      ; 004d5ea3
        ;   XREF to: 004d5e38 (UNCONDITIONAL_JUMP)  ; LAB_004d5e38
    MOV EDI,dword ptr [EBX + 0x4757c]   ; 004d5ea5
        ;   Label: LAB_004d5ea5
    PUSH EDI                            ; 004d5eab
    MOV EAX,[0x005baf90]                ; 004d5eac | g_CDemonMission_PTR_005baf90
    PUSH EAX                            ; 004d5eb1 | DAT_01cc9450
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720 ; 004d5eb2
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d5eb7
    MOV EDX,dword ptr [EBX + 0x4757c]   ; 004d5eba
    PUSH EDX                            ; 004d5ec0
    MOV ECX,dword ptr [0x005baf90]      ; 004d5ec1 | g_CDemonMission_PTR_005baf90
    PUSH ECX                            ; 004d5ec7 | DAT_01cc9450
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60 ; 004d5ec8
        ;   XREF to: 004d8c60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d5ecd
    PUSH 0x1                            ; 004d5ed0
    PUSH EBX                            ; 004d5ed2
    MOV dword ptr [EBX + 0x4757c],0x0   ; 004d5ed3
    MOV EBX,dword ptr [0x005baf90]      ; 004d5edd | g_CDemonMission_PTR_005baf90
    PUSH EBX                            ; 004d5ee3 | DAT_01cc9450
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110 ; 004d5ee4
        ;   XREF to: 004d9110 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110(CDemonMission * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 004d5ee9
    LEA EAX,[EAX]                       ; 004d5eec
    MOV ESP,EBP                         ; 004d5ef0
        ;   Label: LAB_004d5ef0
    POP EBP                             ; 004d5ef2
    POP EDI                             ; 004d5ef3
    POP ESI                             ; 004d5ef4
    POP EBX                             ; 004d5ef5
    RET                                 ; 004d5ef6
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d5ef7
        ;   Label: LAB_004d5ef7
    MOV dword ptr [ESP],EAX             ; 004d5efa
    FLD float ptr [ESP]                 ; 004d5efd
        ;   Label: LAB_004d5efd
    FLDZ                                ; 004d5f00
    FCOMPP                              ; 004d5f02
    FNSTSW AX                           ; 004d5f04
    SAHF                                ; 004d5f06
    JNC 0x004d5f22                      ; 004d5f07
        ;   XREF to: 004d5f22 (CONDITIONAL_JUMP)  ; LAB_004d5f22
    MOV EAX,ESP                         ; 004d5f09
    PUSH EAX                            ; 004d5f0b
    MOV EAX,dword ptr [EBX + 0x4757c]   ; 004d5f0c
    ADD EAX,0x150                       ; 004d5f12
    PUSH EAX                            ; 004d5f17
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 004d5f18
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004d5f1d
    JMP 0x004d5efd                      ; 004d5f20
        ;   XREF to: 004d5efd (UNCONDITIONAL_JUMP)  ; LAB_004d5efd
    PUSH 0x0                            ; 004d5f22
        ;   Label: LAB_004d5f22
    LEA EAX,[EBX + 0x150]               ; 004d5f24
    PUSH EAX                            ; 004d5f2a
    PUSH 0x0                            ; 004d5f2b
    LEA ESI,[EBX + 0x4694c]             ; 004d5f2d
    PUSH ESI                            ; 004d5f33
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340 ; 004d5f34
        ;   XREF to: 004e0340 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 004d5f39
    MOV EAX,dword ptr [EBX + 0x4757c]   ; 004d5f3c
    PUSH 0x0                            ; 004d5f42
    ADD EAX,0x150                       ; 004d5f44
    PUSH EAX                            ; 004d5f49
    PUSH 0x1                            ; 004d5f4a
    PUSH ESI                            ; 004d5f4c
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340 ; 004d5f4d
        ;   XREF to: 004e0340 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 004d5f52
    MOV ESI,dword ptr [EBX + 0x469a0]   ; 004d5f55
    XOR EAX,EAX                         ; 004d5f5b
    TEST ESI,ESI                        ; 004d5f5d
    JLE 0x004d5ef0                      ; 004d5f5f
        ;   XREF to: 004d5ef0 (CONDITIONAL_JUMP)  ; LAB_004d5ef0
    XOR EDX,EDX                         ; 004d5f61
    MOV ECX,dword ptr [EBX + 0x469a4]   ; 004d5f63
        ;   Label: LAB_004d5f63
    INC EAX                             ; 004d5f69
    FLD float ptr [ECX + EDX*0x1 + 0x4] ; 004d5f6a
    FCHS                                ; 004d5f6e
    FSTP float ptr [ECX + EDX*0x1 + 0x4] ; 004d5f70
    MOV EDI,dword ptr [EBX + 0x469a0]   ; 004d5f74
    ADD EDX,0x10                        ; 004d5f7a
    CMP EAX,EDI                         ; 004d5f7d
    JL 0x004d5f63                       ; 004d5f7f
        ;   XREF to: 004d5f63 (CONDITIONAL_JUMP)  ; LAB_004d5f63
    MOV ESP,EBP                         ; 004d5f81
    POP EBP                             ; 004d5f83
    POP EDI                             ; 004d5f84
    POP ESI                             ; 004d5f85
    POP EBX                             ; 004d5f86
    RET                                 ; 004d5f87

