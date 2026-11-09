; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160(CDemonMission *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[14]:
;   core_baron.cpp_FUN_00410640 at 004106dd
;   core_bodypart.cpp_FUN_00418940 at 00418a11
;   core_doc.cpp_FUN_00474400 at 004746bd
;   core_gore.cpp_FUN_004e63e0 at 004e64ac
;   core_mimic.cpp_CMimic_processMorph_FUN_00510c20 at 00510cc8
;   core_mission.cpp_CDemonMission_createOneHero_FUN_0051bf30 at 0051c059
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_0051a4f0 at 0051aab6
;   core_mission.cpp_FUN_0051c240 at 0051c385
;   core_passngr.cpp_FUN_00532af0 at 00532c16
;   core_script.cpp_CScript_step_FUN_00544460 at 00548a8f
;   ... and 4 more
;
; Called Functions:
;   core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b160
        ;   Label: core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160
    PUSH ESI                            ; 0051b161
    MOV ESI,dword ptr [ESP + 0xc]       ; 0051b162
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051b166
    TEST EBX,EBX                        ; 0051b16a
    JZ 0x0051b195                       ; 0051b16c
        ;   XREF to: 0051b195 (CONDITIONAL_JUMP)  ; LAB_0051b195
    CMP byte ptr [EBX],0x0              ; 0051b16e
    JZ 0x0051b198                       ; 0051b171
        ;   XREF to: 0051b198 (CONDITIONAL_JUMP)  ; LAB_0051b198
    MOV EDX,dword ptr [ESI + 0x111c]    ; 0051b173
        ;   Label: LAB_0051b173
    TEST EDX,EDX                        ; 0051b179
    JNZ 0x0051b1a4                      ; 0051b17b
        ;   XREF to: 0051b1a4 (CONDITIONAL_JUMP)  ; LAB_0051b1a4
    MOV dword ptr [EBX + 0x14c],EDX     ; 0051b17d
    MOV dword ptr [EBX + 0x150],EDX     ; 0051b183
    MOV dword ptr [ESI + 0x1118],EBX    ; 0051b189
    MOV dword ptr [ESI + 0x111c],EBX    ; 0051b18f
    POP ESI                             ; 0051b195
        ;   Label: LAB_0051b195
    POP EBX                             ; 0051b196
    RET                                 ; 0051b197
    PUSH EBX                            ; 0051b198
        ;   Label: LAB_0051b198
    PUSH ESI                            ; 0051b199
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60 ; 0051b19a
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0051b19f
    JMP 0x0051b173                      ; 0051b1a2
        ;   XREF to: 0051b173 (UNCONDITIONAL_JUMP)  ; LAB_0051b173
    MOV dword ptr [EBX + 0x14c],0x0     ; 0051b1a4
        ;   Label: LAB_0051b1a4
    MOV dword ptr [EBX + 0x150],EDX     ; 0051b1ae
    MOV EAX,dword ptr [ESI + 0x111c]    ; 0051b1b4
    MOV dword ptr [EAX + 0x14c],EBX     ; 0051b1ba
    MOV dword ptr [ESI + 0x111c],EBX    ; 0051b1c0
    POP ESI                             ; 0051b1c6
    POP EBX                             ; 0051b1c7
    RET                                 ; 0051b1c8

