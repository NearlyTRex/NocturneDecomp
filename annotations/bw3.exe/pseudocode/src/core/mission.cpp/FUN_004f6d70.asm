; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_FUN_004f6d70(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_mission.cpp_FUN_004f5b80 at 004f5b86
;   core_mission.cpp_FUN_004f722c at 004f7266
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01d5ba00
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_004f6bf0
;   core_mission.cpp_CDemonMission_removeActor_FUN_004f6ca0
;   core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_0053ef40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6d70
        ;   Label: core_mission.cpp_FUN_004f6d70
    PUSH EDI                            ; 004f6d71
    PUSH EBP                            ; 004f6d72
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f6d73
    CMP dword ptr [EBX + 0x143c],0x0    ; 004f6d77
    JZ 0x004f6d9e                       ; 004f6d7e
        ;   XREF to: 004f6d9e (CONDITIONAL_JUMP)  ; LAB_004f6d9e
    PUSH ESI                            ; 004f6d80
    PUSH 0x1                            ; 004f6d81
        ;   Label: LAB_004f6d81
    MOV ECX,dword ptr [EBX + 0x143c]    ; 004f6d83
    PUSH ECX                            ; 004f6d89
    PUSH EBX                            ; 004f6d8a
    CALL core_mission.cpp_CDemonMission_removeActor_FUN_004f6ca0 ; 004f6d8b
        ;   XREF to: 004f6ca0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActor_FUN_004f6ca0(CDemonMission * this_ptr, CDemonActor * actor, int should_delete)
    MOV ESI,dword ptr [EBX + 0x143c]    ; 004f6d90
    ADD ESP,0xc                         ; 004f6d96
    TEST ESI,ESI                        ; 004f6d99
    JNZ 0x004f6d81                      ; 004f6d9b
        ;   XREF to: 004f6d81 (CONDITIONAL_JUMP)  ; LAB_004f6d81
    POP ESI                             ; 004f6d9d
    PUSH EBX                            ; 004f6d9e
        ;   Label: LAB_004f6d9e
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_004f6bf0 ; 004f6d9f
        ;   XREF to: 004f6bf0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildSetActorList_FUN_004f6bf0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004f6da4
    MOV EBP,dword ptr [0x00603b28]      ; 004f6da7 | g_CDemonSetPtr
    XOR EDI,EDI                         ; 004f6dad
    PUSH EBP                            ; 004f6daf | g_CDemonSetInstance
    MOV dword ptr [0x01d5ba00],EDI      ; 004f6db0 | DAT_01d5ba00
    MOV dword ptr [EBX + 0x1454],0xffffffff ; 004f6db6
    CALL core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_0053ef40 ; 004f6dc0
        ;   XREF to: 0053ef40 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_0053ef40(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004f6dc5
    MOV dword ptr [EBX + 0x1018],EDI    ; 004f6dc8
    POP EBP                             ; 004f6dce
    POP EDI                             ; 004f6dcf
    POP EBX                             ; 004f6dd0
    RET                                 ; 004f6dd1

