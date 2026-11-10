; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200(CDemonMission *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[14]:
;   core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00410ac0 at 00410b5e
;   core_bodypart.cpp_createBodyPart_FUN_004154f0 at 004155b3
;   core_gore.cpp_FUN_004c9bd0 at 004c9c9d
;   core_mimic.cpp_CMimic_processMorph_FUN_004f1e90 at 004f1f38
;   core_mission.cpp_CDemonMission_createOneHero_FUN_004fcf70 at 004fd090
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004fb590 at 004fbb56
;   core_mission.cpp_FUN_004fd280 at 004fd3c5
;   core_passngr.cpp_CPassenger_process_FUN_005117a0 at 005118c6
;   core_script.cpp_FUN_00522350 at 00526a6f
;   core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_0056db50 at 0056dd52
;   ... and 4 more
;
; Called Functions:
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc200
        ;   Label: core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200
    PUSH ESI                            ; 004fc201
    MOV ESI,dword ptr [ESP + 0xc]       ; 004fc202
    MOV EBX,dword ptr [ESP + 0x10]      ; 004fc206
    TEST EBX,EBX                        ; 004fc20a
    JZ 0x004fc235                       ; 004fc20c
        ;   XREF to: 004fc235 (CONDITIONAL_JUMP)  ; LAB_004fc235
    CMP byte ptr [EBX],0x0              ; 004fc20e
    JZ 0x004fc238                       ; 004fc211
        ;   XREF to: 004fc238 (CONDITIONAL_JUMP)  ; LAB_004fc238
    MOV EDX,dword ptr [ESI + 0x1118]    ; 004fc213
        ;   Label: LAB_004fc213
    TEST EDX,EDX                        ; 004fc219
    JNZ 0x004fc244                      ; 004fc21b
        ;   XREF to: 004fc244 (CONDITIONAL_JUMP)  ; LAB_004fc244
    MOV dword ptr [EBX + 0x14c],EDX     ; 004fc21d
    MOV dword ptr [EBX + 0x150],EDX     ; 004fc223
    MOV dword ptr [ESI + 0x1114],EBX    ; 004fc229
    MOV dword ptr [ESI + 0x1118],EBX    ; 004fc22f
    POP ESI                             ; 004fc235
        ;   Label: LAB_004fc235
    POP EBX                             ; 004fc236
    RET                                 ; 004fc237
    PUSH EBX                            ; 004fc238
        ;   Label: LAB_004fc238
    PUSH ESI                            ; 004fc239
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0 ; 004fc23a
        ;   XREF to: 004fcda0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004fc23f
    JMP 0x004fc213                      ; 004fc242
        ;   XREF to: 004fc213 (UNCONDITIONAL_JUMP)  ; LAB_004fc213
    MOV dword ptr [EBX + 0x14c],0x0     ; 004fc244
        ;   Label: LAB_004fc244
    MOV dword ptr [EBX + 0x150],EDX     ; 004fc24e
    MOV EAX,dword ptr [ESI + 0x1118]    ; 004fc254
    MOV dword ptr [EAX + 0x14c],EBX     ; 004fc25a
    MOV dword ptr [ESI + 0x1118],EBX    ; 004fc260
    POP ESI                             ; 004fc266
    POP EBX                             ; 004fc267
    RET                                 ; 004fc268

