; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_CMimic_processMorph_FUN_00510c20(CMimic *this_ptr,float delta_time)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_mimic.cpp_CMimic_beginMorph_FUN_00510b00 at 00510bb9
;   core_mimic.cpp_CMimic_process_FUN_0050f630 at 0050f6f5
;
; Referenced Globals:
;   TerminatedCString s_core_mimic_cpp_005e8b01
;   TerminatedCString s_CMimic_processMorph_can_005e8b13
;   undefined4 DAT_006039d4
;   undefined4 DAT_0061f650
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d2c900
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160
;   core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60
;   core_mission.cpp_CDemonMission_markActorToDelete_FUN_0051b740
;   core_morph.cpp_CMorph_updateModelFromDeformable_FUN_00523290
;   core_motion.cpp_CMotionController_advance_FUN_00524270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510c20
        ;   Label: core_mimic.cpp_CMimic_processMorph_FUN_00510c20
    PUSH ESI                            ; 00510c21
    PUSH EDI                            ; 00510c22
    PUSH EBP                            ; 00510c23
    MOV EBP,ESP                         ; 00510c24
    SUB ESP,0x4                         ; 00510c26
    AND ESP,0xfffffff8                  ; 00510c29
    MOV EBX,dword ptr [EBP + 0x14]      ; 00510c2c
    CMP dword ptr [EBX + 0x47ac0],0x0   ; 00510c2f
    JZ 0x00510c80                       ; 00510c36
        ;   XREF to: 00510c80 (CONDITIONAL_JUMP)  ; LAB_00510c80
    FLD float ptr [EBP + 0x18]          ; 00510c38
        ;   Label: LAB_00510c38
    FDIV float ptr [0x006039d4]         ; 00510c3b | DAT_006039d4
    FADD float ptr [EBX + 0x47abc]      ; 00510c41
    FST float ptr [EBX + 0x47abc]       ; 00510c47
    FLD1                                ; 00510c4d
    FCOMPP                              ; 00510c4f
    FNSTSW AX                           ; 00510c51
    SAHF                                ; 00510c53
    JBE 0x00510ca5                      ; 00510c54
        ;   XREF to: 00510ca5 (CONDITIONAL_JUMP)  ; LAB_00510ca5
    MOV EAX,dword ptr [EBP + 0x18]      ; 00510c56
    LEA ESI,[EBX + 0x158]               ; 00510c59
    MOV dword ptr [ESP],EAX             ; 00510c5f
    FLD float ptr [ESP]                 ; 00510c62
        ;   Label: LAB_00510c62
    FLDZ                                ; 00510c65
    FCOMPP                              ; 00510c67
    FNSTSW AX                           ; 00510c69
    SAHF                                ; 00510c6b
    JNC 0x00510cf7                      ; 00510c6c
        ;   XREF to: 00510cf7 (CONDITIONAL_JUMP)  ; LAB_00510cf7
    MOV EAX,ESP                         ; 00510c72
    PUSH EAX                            ; 00510c74
    PUSH ESI                            ; 00510c75
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 00510c76
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00510c7b
    JMP 0x00510c62                      ; 00510c7e
        ;   XREF to: 00510c62 (UNCONDITIONAL_JUMP)  ; LAB_00510c62
    MOV ECX,0x5e8b01                    ; 00510c80 | = "..\\core\\mimic.cpp"
        ;   Label: LAB_00510c80
    MOV ESI,0x4c9                       ; 00510c85
    PUSH 0x5e8b13                       ; 00510c8a | = "CMimic::processMorph - can't process ..."
    MOV dword ptr [0x01d1d400],ECX      ; 00510c8f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00510c95 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00510c9b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00510ca0
    JMP 0x00510c38                      ; 00510ca3
        ;   XREF to: 00510c38 (UNCONDITIONAL_JUMP)  ; LAB_00510c38
    MOV EDI,dword ptr [EBX + 0x47ac0]   ; 00510ca5
        ;   Label: LAB_00510ca5
    PUSH EDI                            ; 00510cab
    MOV EAX,[0x0061f650]                ; 00510cac | DAT_0061f650
    PUSH EAX                            ; 00510cb1 | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60 ; 00510cb2
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00510cb7
    MOV EDX,dword ptr [EBX + 0x47ac0]   ; 00510cba
    PUSH EDX                            ; 00510cc0
    MOV ECX,dword ptr [0x0061f650]      ; 00510cc1 | DAT_0061f650
    PUSH ECX                            ; 00510cc7 | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160 ; 00510cc8
        ;   XREF to: 0051b160 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00510ccd
    PUSH 0x1                            ; 00510cd0
    PUSH EBX                            ; 00510cd2
    MOV dword ptr [EBX + 0x47ac0],0x0   ; 00510cd3
    MOV EBX,dword ptr [0x0061f650]      ; 00510cdd | DAT_0061f650
    PUSH EBX                            ; 00510ce3 | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_0051b740 ; 00510ce4
        ;   XREF to: 0051b740 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_0051b740(CDemonMission * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 00510ce9
    LEA EAX,[EAX]                       ; 00510cec
    MOV ESP,EBP                         ; 00510cf0
        ;   Label: LAB_00510cf0
    POP EBP                             ; 00510cf2
    POP EDI                             ; 00510cf3
    POP ESI                             ; 00510cf4
    POP EBX                             ; 00510cf5
    RET                                 ; 00510cf6
    MOV EAX,dword ptr [EBP + 0x18]      ; 00510cf7
        ;   Label: LAB_00510cf7
    MOV dword ptr [ESP],EAX             ; 00510cfa
    FLD float ptr [ESP]                 ; 00510cfd
        ;   Label: LAB_00510cfd
    FLDZ                                ; 00510d00
    FCOMPP                              ; 00510d02
    FNSTSW AX                           ; 00510d04
    SAHF                                ; 00510d06
    JNC 0x00510d22                      ; 00510d07
        ;   XREF to: 00510d22 (CONDITIONAL_JUMP)  ; LAB_00510d22
    MOV EAX,ESP                         ; 00510d09
    PUSH EAX                            ; 00510d0b
    MOV EAX,dword ptr [EBX + 0x47ac0]   ; 00510d0c
    ADD EAX,0x158                       ; 00510d12
    PUSH EAX                            ; 00510d17
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 00510d18
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00510d1d
    JMP 0x00510cfd                      ; 00510d20
        ;   XREF to: 00510cfd (UNCONDITIONAL_JUMP)  ; LAB_00510cfd
    PUSH 0x0                            ; 00510d22
        ;   Label: LAB_00510d22
    LEA EAX,[EBX + 0x158]               ; 00510d24
    PUSH EAX                            ; 00510d2a
    PUSH 0x0                            ; 00510d2b
    LEA ESI,[EBX + 0x46e90]             ; 00510d2d
    PUSH ESI                            ; 00510d33
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_00523290 ; 00510d34
        ;   XREF to: 00523290 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_00523290(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 00510d39
    MOV EAX,dword ptr [EBX + 0x47ac0]   ; 00510d3c
    PUSH 0x0                            ; 00510d42
    ADD EAX,0x158                       ; 00510d44
    PUSH EAX                            ; 00510d49
    PUSH 0x1                            ; 00510d4a
    PUSH ESI                            ; 00510d4c
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_00523290 ; 00510d4d
        ;   XREF to: 00523290 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_00523290(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 00510d52
    MOV ESI,dword ptr [EBX + 0x46ee4]   ; 00510d55
    XOR EAX,EAX                         ; 00510d5b
    TEST ESI,ESI                        ; 00510d5d
    JLE 0x00510cf0                      ; 00510d5f
        ;   XREF to: 00510cf0 (CONDITIONAL_JUMP)  ; LAB_00510cf0
    XOR EDX,EDX                         ; 00510d61
    MOV ECX,dword ptr [EBX + 0x46ee8]   ; 00510d63
        ;   Label: LAB_00510d63
    INC EAX                             ; 00510d69
    FLD float ptr [ECX + EDX*0x1 + 0x4] ; 00510d6a
    FCHS                                ; 00510d6e
    FSTP float ptr [ECX + EDX*0x1 + 0x4] ; 00510d70
    MOV EDI,dword ptr [EBX + 0x46ee4]   ; 00510d74
    ADD EDX,0x10                        ; 00510d7a
    CMP EAX,EDI                         ; 00510d7d
    JL 0x00510d63                       ; 00510d7f
        ;   XREF to: 00510d63 (CONDITIONAL_JUMP)  ; LAB_00510d63
    MOV ESP,EBP                         ; 00510d81
    POP EBP                             ; 00510d83
    POP EDI                             ; 00510d84
    POP ESI                             ; 00510d85
    POP EBX                             ; 00510d86
    RET                                 ; 00510d87

