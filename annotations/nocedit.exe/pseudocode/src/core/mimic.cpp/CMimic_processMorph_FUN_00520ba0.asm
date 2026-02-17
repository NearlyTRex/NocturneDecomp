; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_CMimic_processMorph_FUN_00520ba0(CMimic *this_ptr)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_mimic.cpp_CMimic_beginMorph_FUN_00520a80 at 00520b39
;   core_mimic.cpp_CMimic_process_FUN_0051f780 at 0051f845
;
; Referenced Globals:
;   TerminatedCString s_core_mimic_cpp_006388b4
;   TerminatedCString s_CMimic_processMorph_can__006388c6
;   float FLOAT_00661414 = 1
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonMission g_CDemonMissionInstance
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70
;   core_mission.cpp_CDemonMission_generateActorName_FUN_00524700
;   core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
;   core_morph.cpp_CMorph_updateModelFromDeformable_FUN_0052b600
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520ba0
        ;   Label: core_mimic.cpp_CMimic_processMorph_FUN_00520ba0
    PUSH ESI                            ; 00520ba1
    PUSH EDI                            ; 00520ba2
    PUSH EBP                            ; 00520ba3
    MOV EBP,ESP                         ; 00520ba4
    SUB ESP,0x4                         ; 00520ba6
    AND ESP,0xfffffff8                  ; 00520ba9
    MOV EBX,dword ptr [EBP + 0x14]      ; 00520bac
    CMP dword ptr [EBX + 0x4ca54],0x0   ; 00520baf
    JZ 0x00520c00                       ; 00520bb6
        ;   XREF to: 00520c00 (CONDITIONAL_JUMP)  ; LAB_00520c00
    FLD float ptr [EBP + 0x18]          ; 00520bb8
        ;   Label: LAB_00520bb8
    FDIV float ptr [0x00661414]         ; 00520bbb | FLOAT_00661414
    FADD float ptr [EBX + 0x4ca50]      ; 00520bc1
    FST float ptr [EBX + 0x4ca50]       ; 00520bc7
    FLD1                                ; 00520bcd
    FCOMPP                              ; 00520bcf
    FNSTSW AX                           ; 00520bd1
    SAHF                                ; 00520bd3
    JBE 0x00520c25                      ; 00520bd4
        ;   XREF to: 00520c25 (CONDITIONAL_JUMP)  ; LAB_00520c25
    MOV EAX,dword ptr [EBP + 0x18]      ; 00520bd6
    LEA ESI,[EBX + 0x158]               ; 00520bd9
    MOV dword ptr [ESP],EAX             ; 00520bdf
    FLD float ptr [ESP]                 ; 00520be2
        ;   Label: LAB_00520be2
    FLDZ                                ; 00520be5
    FCOMPP                              ; 00520be7
    FNSTSW AX                           ; 00520be9
    SAHF                                ; 00520beb
    JNC 0x00520c77                      ; 00520bec
        ;   XREF to: 00520c77 (CONDITIONAL_JUMP)  ; LAB_00520c77
    MOV EAX,ESP                         ; 00520bf2
    PUSH EAX                            ; 00520bf4
    PUSH ESI                            ; 00520bf5
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 00520bf6
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 00520bfb
    JMP 0x00520be2                      ; 00520bfe
        ;   XREF to: 00520be2 (UNCONDITIONAL_JUMP)  ; LAB_00520be2
    MOV ECX,0x6388b4                    ; 00520c00 | = "..\\core\\mimic.cpp"
        ;   Label: LAB_00520c00
    MOV ESI,0x4c9                       ; 00520c05
    PUSH 0x6388c6                       ; 00520c0a | = "CMimic::processMorph - can't process ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00520c0f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00520c15 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00520c1b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00520c20
    JMP 0x00520bb8                      ; 00520c23
        ;   XREF to: 00520bb8 (UNCONDITIONAL_JUMP)  ; LAB_00520bb8
    MOV EDI,dword ptr [EBX + 0x4ca54]   ; 00520c25
        ;   Label: LAB_00520c25
    PUSH EDI                            ; 00520c2b
    MOV EAX,[0x0067d550]                ; 00520c2c | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EAX                            ; 00520c31 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_00524700 ; 00520c32
        ;   XREF to: 00524700 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_00524700(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00520c37
    MOV EDX,dword ptr [EBX + 0x4ca54]   ; 00520c3a
    PUSH EDX                            ; 00520c40
    MOV ECX,dword ptr [0x0067d550]      ; 00520c41 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH ECX                            ; 00520c47 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70 ; 00520c48
        ;   XREF to: 00523b70 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00520c4d
    PUSH 0x1                            ; 00520c50
    PUSH EBX                            ; 00520c52
    MOV dword ptr [EBX + 0x4ca54],0x0   ; 00520c53
    MOV EBX,dword ptr [0x0067d550]      ; 00520c5d | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EBX                            ; 00520c63 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0 ; 00520c64
        ;   XREF to: 005240a0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission * this_ptr, CDemonActor * actor, uint flags)
    ADD ESP,0xc                         ; 00520c69
    LEA EAX,[EAX]                       ; 00520c6c
    MOV ESP,EBP                         ; 00520c70
        ;   Label: LAB_00520c70
    POP EBP                             ; 00520c72
    POP EDI                             ; 00520c73
    POP ESI                             ; 00520c74
    POP EBX                             ; 00520c75
    RET                                 ; 00520c76
    MOV EAX,dword ptr [EBP + 0x18]      ; 00520c77
        ;   Label: LAB_00520c77
    MOV dword ptr [ESP],EAX             ; 00520c7a
    FLD float ptr [ESP]                 ; 00520c7d
        ;   Label: LAB_00520c7d
    FLDZ                                ; 00520c80
    FCOMPP                              ; 00520c82
    FNSTSW AX                           ; 00520c84
    SAHF                                ; 00520c86
    JNC 0x00520ca2                      ; 00520c87
        ;   XREF to: 00520ca2 (CONDITIONAL_JUMP)  ; LAB_00520ca2
    MOV EAX,ESP                         ; 00520c89
    PUSH EAX                            ; 00520c8b
    MOV EAX,dword ptr [EBX + 0x4ca54]   ; 00520c8c
    ADD EAX,0x158                       ; 00520c92
    PUSH EAX                            ; 00520c97
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 00520c98
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 00520c9d
    JMP 0x00520c7d                      ; 00520ca0
        ;   XREF to: 00520c7d (UNCONDITIONAL_JUMP)  ; LAB_00520c7d
    PUSH 0x0                            ; 00520ca2
        ;   Label: LAB_00520ca2
    LEA EAX,[EBX + 0x158]               ; 00520ca4
    PUSH EAX                            ; 00520caa
    PUSH 0x0                            ; 00520cab
    LEA ESI,[EBX + 0x4be24]             ; 00520cad
    PUSH ESI                            ; 00520cb3
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_0052b600 ; 00520cb4
        ;   XREF to: 0052b600 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_0052b600(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 00520cb9
    MOV EAX,dword ptr [EBX + 0x4ca54]   ; 00520cbc
    PUSH 0x0                            ; 00520cc2
    ADD EAX,0x158                       ; 00520cc4
    PUSH EAX                            ; 00520cc9
    PUSH 0x1                            ; 00520cca
    PUSH ESI                            ; 00520ccc
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_0052b600 ; 00520ccd
        ;   XREF to: 0052b600 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_0052b600(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 00520cd2
    MOV ESI,dword ptr [EBX + 0x4be78]   ; 00520cd5
    XOR EAX,EAX                         ; 00520cdb
    TEST ESI,ESI                        ; 00520cdd
    JLE 0x00520c70                      ; 00520cdf
        ;   XREF to: 00520c70 (CONDITIONAL_JUMP)  ; LAB_00520c70
    XOR EDX,EDX                         ; 00520ce1
    MOV ECX,dword ptr [EBX + 0x4be7c]   ; 00520ce3
        ;   Label: LAB_00520ce3
    INC EAX                             ; 00520ce9
    FLD float ptr [ECX + EDX*0x1 + 0x4] ; 00520cea
    FCHS                                ; 00520cee
    FSTP float ptr [ECX + EDX*0x1 + 0x4] ; 00520cf0
    MOV EDI,dword ptr [EBX + 0x4be78]   ; 00520cf4
    ADD EDX,0x10                        ; 00520cfa
    CMP EAX,EDI                         ; 00520cfd
    JL 0x00520ce3                       ; 00520cff
        ;   XREF to: 00520ce3 (CONDITIONAL_JUMP)  ; LAB_00520ce3
    MOV ESP,EBP                         ; 00520d01
    POP EBP                             ; 00520d03
    POP EDI                             ; 00520d04
    POP ESI                             ; 00520d05
    POP EBX                             ; 00520d06
    RET                                 ; 00520d07

