; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_removeAllActors_FUN_004d8fc0(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_mission.cpp_CDemonMission_FUN_004d7ea0 at 004d7ea6
;   core_mission.cpp_CDemonMission_createFromSingleSet_FUN_004d93d0 at 004d940c
;
; Referenced Globals:
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_01cae0d4
;   CDemonSet g_CDemonSet_01e57284
;
; Called Functions:
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_004d8ee0
;   core_mission.cpp_CDemonMission_removeActor_FUN_004d8f90
;   core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00511b30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8fc0
        ;   Label: core_mission.cpp_CDemonMission_removeAllActors_FUN_004d8fc0
    PUSH EDI                            ; 004d8fc1
    PUSH EBP                            ; 004d8fc2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d8fc3
    CMP dword ptr [EBX + 0x514],0x0     ; 004d8fc7
    JZ 0x004d8fee                       ; 004d8fce
        ;   XREF to: 004d8fee (CONDITIONAL_JUMP)  ; LAB_004d8fee
    PUSH ESI                            ; 004d8fd0
    PUSH 0x1                            ; 004d8fd1
        ;   Label: LAB_004d8fd1
    MOV ECX,dword ptr [EBX + 0x514]     ; 004d8fd3
    PUSH ECX                            ; 004d8fd9
    PUSH EBX                            ; 004d8fda
    CALL core_mission.cpp_CDemonMission_removeActor_FUN_004d8f90 ; 004d8fdb
        ;   XREF to: 004d8f90 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActor_FUN_004d8f90(CDemonMission * this_ptr, CDemonActor * actor, int should_delete)
    MOV ESI,dword ptr [EBX + 0x514]     ; 004d8fe0
    ADD ESP,0xc                         ; 004d8fe6
    TEST ESI,ESI                        ; 004d8fe9
    JNZ 0x004d8fd1                      ; 004d8feb
        ;   XREF to: 004d8fd1 (CONDITIONAL_JUMP)  ; LAB_004d8fd1
    POP ESI                             ; 004d8fed
    PUSH EBX                            ; 004d8fee
        ;   Label: LAB_004d8fee
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_004d8ee0 ; 004d8fef
        ;   XREF to: 004d8ee0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildSetActorList_FUN_004d8ee0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004d8ff4
    MOV EBP,dword ptr [0x005be368]      ; 004d8ff7 | g_CDemonSet_PTR_005be368
    XOR EDI,EDI                         ; 004d8ffd
    PUSH EBP                            ; 004d8fff | g_CDemonSet_01e57284
    MOV dword ptr [0x01cae0d4],EDI      ; 004d9000 | DAT_01cae0d4
    MOV dword ptr [EBX + 0x850],EDI     ; 004d9006
    CALL core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00511b30 ; 004d900c
        ;   XREF to: 00511b30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00511b30(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004d9011
    MOV dword ptr [EBX + 0x52c],EDI     ; 004d9014
    POP EBP                             ; 004d901a
    POP EDI                             ; 004d901b
    POP EBX                             ; 004d901c
    RET                                 ; 004d901d

