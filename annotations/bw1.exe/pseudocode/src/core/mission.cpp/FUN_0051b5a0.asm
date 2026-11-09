; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_FUN_0051b5a0(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_mission.cpp_FUN_0051a3b0 at 0051a3b6
;   core_mission.cpp_FUN_0051ba5c at 0051ba96
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01d06aa0
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_0051b420
;   core_mission.cpp_CDemonMission_removeActor_FUN_0051b4d0
;   core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00559580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b5a0
        ;   Label: core_mission.cpp_FUN_0051b5a0
    PUSH EDI                            ; 0051b5a1
    PUSH EBP                            ; 0051b5a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051b5a3
    CMP dword ptr [EBX + 0x1118],0x0    ; 0051b5a7
    JZ 0x0051b5ce                       ; 0051b5ae
        ;   XREF to: 0051b5ce (CONDITIONAL_JUMP)  ; LAB_0051b5ce
    PUSH ESI                            ; 0051b5b0
    PUSH 0x1                            ; 0051b5b1
        ;   Label: LAB_0051b5b1
    MOV ECX,dword ptr [EBX + 0x1118]    ; 0051b5b3
    PUSH ECX                            ; 0051b5b9
    PUSH EBX                            ; 0051b5ba
    CALL core_mission.cpp_CDemonMission_removeActor_FUN_0051b4d0 ; 0051b5bb
        ;   XREF to: 0051b4d0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActor_FUN_0051b4d0(CDemonMission * this_ptr, CDemonActor * actor, int should_delete)
    MOV ESI,dword ptr [EBX + 0x1118]    ; 0051b5c0
    ADD ESP,0xc                         ; 0051b5c6
    TEST ESI,ESI                        ; 0051b5c9
    JNZ 0x0051b5b1                      ; 0051b5cb
        ;   XREF to: 0051b5b1 (CONDITIONAL_JUMP)  ; LAB_0051b5b1
    POP ESI                             ; 0051b5cd
    PUSH EBX                            ; 0051b5ce
        ;   Label: LAB_0051b5ce
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_0051b420 ; 0051b5cf
        ;   XREF to: 0051b420 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildSetActorList_FUN_0051b420(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0051b5d4
    MOV EBP,dword ptr [0x00622c18]      ; 0051b5d7 | g_CDemonSetPtr
    XOR EDI,EDI                         ; 0051b5dd
    PUSH EBP                            ; 0051b5df | g_CDemonSetInstance
    MOV dword ptr [0x01d06aa0],EDI      ; 0051b5e0 | DAT_01d06aa0
    MOV dword ptr [EBX + 0x1454],0xffffffff ; 0051b5e6
    CALL core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00559580 ; 0051b5f0
        ;   XREF to: 00559580 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00559580(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0051b5f5
    MOV dword ptr [EBX + 0x1130],EDI    ; 0051b5f8
    POP EBP                             ; 0051b5fe
    POP EDI                             ; 0051b5ff
    POP EBX                             ; 0051b600
    RET                                 ; 0051b601

