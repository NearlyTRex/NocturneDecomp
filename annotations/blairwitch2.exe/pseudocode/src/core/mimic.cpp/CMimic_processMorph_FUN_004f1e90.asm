; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_CMimic_processMorph_FUN_004f1e90(CMimic *this_ptr,float delta_time)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_mimic.cpp_CMimic_beginMorph_FUN_004f1d70 at 004f1e29
;   core_mimic.cpp_CMimic_process_FUN_004f08a0 at 004f0965
;
; Referenced Globals:
;   TerminatedCString s_core_mimic_cpp_005dda7a
;   TerminatedCString s_CMimic_processMorph_can_005dda8c
;   undefined4 DAT_005f9e84
;   undefined4 DAT_00618170
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d182f0
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0
;   core_mission.cpp_FUN_004fc7b0
;   core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150
;   core_motion.cpp_CMotionController_advance_FUN_005030c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1e90
        ;   Label: core_mimic.cpp_CMimic_processMorph_FUN_004f1e90
    PUSH ESI                            ; 004f1e91
    PUSH EDI                            ; 004f1e92
    PUSH EBP                            ; 004f1e93
    MOV EBP,ESP                         ; 004f1e94
    SUB ESP,0x4                         ; 004f1e96
    AND ESP,0xfffffff8                  ; 004f1e99
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f1e9c
    CMP dword ptr [EBX + 0x4c350],0x0   ; 004f1e9f
    JZ 0x004f1ef0                       ; 004f1ea6
        ;   XREF to: 004f1ef0 (CONDITIONAL_JUMP)  ; LAB_004f1ef0
    FLD float ptr [EBP + 0x18]          ; 004f1ea8
        ;   Label: LAB_004f1ea8
    FDIV float ptr [0x005f9e84]         ; 004f1eab | DAT_005f9e84
    FADD float ptr [EBX + 0x4c34c]      ; 004f1eb1
    FST float ptr [EBX + 0x4c34c]       ; 004f1eb7
    FLD1                                ; 004f1ebd
    FCOMPP                              ; 004f1ebf
    FNSTSW AX                           ; 004f1ec1
    SAHF                                ; 004f1ec3
    JBE 0x004f1f15                      ; 004f1ec4
        ;   XREF to: 004f1f15 (CONDITIONAL_JUMP)  ; LAB_004f1f15
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f1ec6
    LEA ESI,[EBX + 0x2b4]               ; 004f1ec9
    MOV dword ptr [ESP],EAX             ; 004f1ecf
    FLD float ptr [ESP]                 ; 004f1ed2
        ;   Label: LAB_004f1ed2
    FLDZ                                ; 004f1ed5
    FCOMPP                              ; 004f1ed7
    FNSTSW AX                           ; 004f1ed9
    SAHF                                ; 004f1edb
    JNC 0x004f1f67                      ; 004f1edc
        ;   XREF to: 004f1f67 (CONDITIONAL_JUMP)  ; LAB_004f1f67
    MOV EAX,ESP                         ; 004f1ee2
    PUSH EAX                            ; 004f1ee4
    PUSH ESI                            ; 004f1ee5
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 004f1ee6
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004f1eeb
    JMP 0x004f1ed2                      ; 004f1eee
        ;   XREF to: 004f1ed2 (UNCONDITIONAL_JUMP)  ; LAB_004f1ed2
    MOV ECX,0x5dda7a                    ; 004f1ef0 | = "..\\core\\mimic.cpp"
        ;   Label: LAB_004f1ef0
    MOV ESI,0x4c9                       ; 004f1ef5
    PUSH 0x5dda8c                       ; 004f1efa | = "CMimic::processMorph - can't process ..."
    MOV dword ptr [0x01d046a0],ECX      ; 004f1eff | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004f1f05 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004f1f0b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004f1f10
    JMP 0x004f1ea8                      ; 004f1f13
        ;   XREF to: 004f1ea8 (UNCONDITIONAL_JUMP)  ; LAB_004f1ea8
    MOV EDI,dword ptr [EBX + 0x4c350]   ; 004f1f15
        ;   Label: LAB_004f1f15
    PUSH EDI                            ; 004f1f1b
    MOV EAX,[0x00618170]                ; 004f1f1c | DAT_00618170
    PUSH EAX                            ; 004f1f21 | DAT_01d182f0
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0 ; 004f1f22
        ;   XREF to: 004fcda0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004f1f27
    MOV EDX,dword ptr [EBX + 0x4c350]   ; 004f1f2a
    PUSH EDX                            ; 004f1f30
    MOV ECX,dword ptr [0x00618170]      ; 004f1f31 | DAT_00618170
    PUSH ECX                            ; 004f1f37 | DAT_01d182f0
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200 ; 004f1f38
        ;   XREF to: 004fc200 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004f1f3d
    PUSH 0x1                            ; 004f1f40
    PUSH EBX                            ; 004f1f42
    MOV dword ptr [EBX + 0x4c350],0x0   ; 004f1f43
    MOV EBX,dword ptr [0x00618170]      ; 004f1f4d | DAT_00618170
    PUSH EBX                            ; 004f1f53 | DAT_01d182f0
    CALL core_mission.cpp_FUN_004fc7b0  ; 004f1f54
        ;   XREF to: 004fc7b0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004fc7b0()
    ADD ESP,0xc                         ; 004f1f59
    LEA EAX,[EAX]                       ; 004f1f5c
    MOV ESP,EBP                         ; 004f1f60
        ;   Label: LAB_004f1f60
    POP EBP                             ; 004f1f62
    POP EDI                             ; 004f1f63
    POP ESI                             ; 004f1f64
    POP EBX                             ; 004f1f65
    RET                                 ; 004f1f66
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f1f67
        ;   Label: LAB_004f1f67
    MOV dword ptr [ESP],EAX             ; 004f1f6a
    FLD float ptr [ESP]                 ; 004f1f6d
        ;   Label: LAB_004f1f6d
    FLDZ                                ; 004f1f70
    FCOMPP                              ; 004f1f72
    FNSTSW AX                           ; 004f1f74
    SAHF                                ; 004f1f76
    JNC 0x004f1f92                      ; 004f1f77
        ;   XREF to: 004f1f92 (CONDITIONAL_JUMP)  ; LAB_004f1f92
    MOV EAX,ESP                         ; 004f1f79
    PUSH EAX                            ; 004f1f7b
    MOV EAX,dword ptr [EBX + 0x4c350]   ; 004f1f7c
    ADD EAX,0x2b4                       ; 004f1f82
    PUSH EAX                            ; 004f1f87
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 004f1f88
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004f1f8d
    JMP 0x004f1f6d                      ; 004f1f90
        ;   XREF to: 004f1f6d (UNCONDITIONAL_JUMP)  ; LAB_004f1f6d
    PUSH 0x0                            ; 004f1f92
        ;   Label: LAB_004f1f92
    LEA EAX,[EBX + 0x2b4]               ; 004f1f94
    PUSH EAX                            ; 004f1f9a
    PUSH 0x0                            ; 004f1f9b
    LEA ESI,[EBX + 0x4b720]             ; 004f1f9d
    PUSH ESI                            ; 004f1fa3
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150 ; 004f1fa4
        ;   XREF to: 005b7150 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 004f1fa9
    MOV EAX,dword ptr [EBX + 0x4c350]   ; 004f1fac
    PUSH 0x0                            ; 004f1fb2
    ADD EAX,0x2b4                       ; 004f1fb4
    PUSH EAX                            ; 004f1fb9
    PUSH 0x1                            ; 004f1fba
    PUSH ESI                            ; 004f1fbc
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150 ; 004f1fbd
        ;   XREF to: 005b7150 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 004f1fc2
    MOV ESI,dword ptr [EBX + 0x4b774]   ; 004f1fc5
    XOR EAX,EAX                         ; 004f1fcb
    TEST ESI,ESI                        ; 004f1fcd
    JLE 0x004f1f60                      ; 004f1fcf
        ;   XREF to: 004f1f60 (CONDITIONAL_JUMP)  ; LAB_004f1f60
    XOR EDX,EDX                         ; 004f1fd1
    MOV ECX,dword ptr [EBX + 0x4b778]   ; 004f1fd3
        ;   Label: LAB_004f1fd3
    INC EAX                             ; 004f1fd9
    FLD float ptr [ECX + EDX*0x1 + 0x4] ; 004f1fda
    FCHS                                ; 004f1fde
    FSTP float ptr [ECX + EDX*0x1 + 0x4] ; 004f1fe0
    MOV EDI,dword ptr [EBX + 0x4b774]   ; 004f1fe4
    ADD EDX,0x10                        ; 004f1fea
    CMP EAX,EDI                         ; 004f1fed
    JL 0x004f1fd3                       ; 004f1fef
        ;   XREF to: 004f1fd3 (CONDITIONAL_JUMP)  ; LAB_004f1fd3
    MOV ESP,EBP                         ; 004f1ff1
    POP EBP                             ; 004f1ff3
    POP EDI                             ; 004f1ff4
    POP ESI                             ; 004f1ff5
    POP EBX                             ; 004f1ff6
    RET                                 ; 004f1ff7

