; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_addFilesToExtract_FUN_00524e60(CDemonMission *this_ptr,_FILE *file_handle,int unknown_flag)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; int              Stack[0xc]:4   unknown_flag
;
; XREF[1]:
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 at 004bdf23
;
; Referenced Globals:
;   TerminatedCString s_CHero_0063966c
;   TerminatedCString s_CEnemy_00639672
;   TerminatedCString s_CNPC_00639679
;   TerminatedCString s_CWeapon_0063967e
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524e60
        ;   Label: core_mission.cpp_CDemonMission_addFilesToExtract_FUN_00524e60
    PUSH ESI                            ; 00524e61
    PUSH EDI                            ; 00524e62
    MOV ESI,dword ptr [ESP + 0x14]      ; 00524e63
    MOV EDI,dword ptr [ESP + 0x18]      ; 00524e67
    MOV EBX,dword ptr [ESP + 0x10]      ; 00524e6b
    MOV EBX,dword ptr [EBX + 0x548]     ; 00524e6f
    TEST EBX,EBX                        ; 00524e75
    JZ 0x00524e98                       ; 00524e77
        ;   XREF to: 00524e98 (CONDITIONAL_JUMP)  ; LAB_00524e98
    TEST EDI,EDI                        ; 00524e79
        ;   Label: LAB_00524e79
    JZ 0x00524e9c                       ; 00524e7b
        ;   XREF to: 00524e9c (CONDITIONAL_JUMP)  ; LAB_00524e9c
    PUSH ESI                            ; 00524e7d
        ;   Label: LAB_00524e7d
    MOV EAX,dword ptr [EBX + 0x154]     ; 00524e7e
    PUSH EBX                            ; 00524e84
    CALL dword ptr [EAX + 0xe0]         ; 00524e85
    ADD ESP,0x8                         ; 00524e8b
    MOV EBX,dword ptr [EBX + 0x14c]     ; 00524e8e
        ;   Label: LAB_00524e8e
    TEST EBX,EBX                        ; 00524e94
    JNZ 0x00524e79                      ; 00524e96
        ;   XREF to: 00524e79 (CONDITIONAL_JUMP)  ; LAB_00524e79
    POP EDI                             ; 00524e98
        ;   Label: LAB_00524e98
    POP ESI                             ; 00524e99
    POP EBX                             ; 00524e9a
    RET                                 ; 00524e9b
    PUSH 0x63966c                       ; 00524e9c | = "CHero"
        ;   Label: LAB_00524e9c
    PUSH EBX                            ; 00524ea1
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00524ea2
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00524ea7
    TEST EAX,EAX                        ; 00524eaa
    JNZ 0x00524e8e                      ; 00524eac
        ;   XREF to: 00524e8e (CONDITIONAL_JUMP)  ; LAB_00524e8e
    PUSH 0x639672                       ; 00524eae | = "CEnemy"
    PUSH EBX                            ; 00524eb3
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00524eb4
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00524eb9
    TEST EAX,EAX                        ; 00524ebc
    JNZ 0x00524e8e                      ; 00524ebe
        ;   XREF to: 00524e8e (CONDITIONAL_JUMP)  ; LAB_00524e8e
    PUSH 0x639679                       ; 00524ec0 | = "CNPC"
    PUSH EBX                            ; 00524ec5
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00524ec6
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00524ecb
    TEST EAX,EAX                        ; 00524ece
    JNZ 0x00524e8e                      ; 00524ed0
        ;   XREF to: 00524e8e (CONDITIONAL_JUMP)  ; LAB_00524e8e
    PUSH 0x63967e                       ; 00524ed2 | = "CWeapon"
    PUSH EBX                            ; 00524ed7
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00524ed8
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00524edd
    TEST EAX,EAX                        ; 00524ee0
    JNZ 0x00524e8e                      ; 00524ee2
        ;   XREF to: 00524e8e (CONDITIONAL_JUMP)  ; LAB_00524e8e
    JMP 0x00524e7d                      ; 00524ee4
        ;   XREF to: 00524e7d (UNCONDITIONAL_JUMP)  ; LAB_00524e7d

