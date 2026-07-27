; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_prepareAllActors_FUN_004d8db0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_mission.cpp_CDemonMission_loadSet_FUN_004d9020 at 004d908f
;   core_mission.cpp_CDemonMission_startMission_FUN_004d9780 at 004d97a9
;   core_mission.cpp_FUN_004d8720 at 004d8749
;   core_mission.cpp_FUN_004d93d0 at 004d9415
;
; Referenced Globals:
;   TerminatedCString s_Setting_up_actors_00589c5c
;   TerminatedCString s_Setting_up_actors_00589c6e
;   TerminatedCString s_Setting_up_actors_00589c80
;   TerminatedCString s_Setting_up_actors_00589c92
;   int INT_005baca0 = 0x1cc3160
;
; Called Functions:
;   core_level.cpp_CLevelLoader_update_FUN_004c59e0
;   support_newmsg.cpp_getLocalizedString_FUN_004ee370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8db0
        ;   Label: core_mission.cpp_CDemonMission_prepareAllActors_FUN_004d8db0
    PUSH ESI                            ; 004d8db1
    PUSH EDI                            ; 004d8db2
    PUSH EBP                            ; 004d8db3
    SUB ESP,0x4                         ; 004d8db4
    XOR EDI,EDI                         ; 004d8db7
    PUSH EDI                            ; 004d8db9
    PUSH 0x589c5c                       ; 004d8dba | = "Setting up actors"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d8dbf
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d8dc4
    PUSH EAX                            ; 004d8dc7
    MOV EDX,dword ptr [0x005baca0]      ; 004d8dc8 | INT_005baca0
    PUSH EDX                            ; 004d8dce
    CALL core_level.cpp_CLevelLoader_update_FUN_004c59e0 ; 004d8dcf
        ;   XREF to: 004c59e0 (UNCONDITIONAL_CALL)  ; undefined core_level.cpp_CLevelLoader_update_FUN_004c59e0()
    ADD ESP,0xc                         ; 004d8dd4
    MOV EBX,dword ptr [ESP + 0x18]      ; 004d8dd7
    MOV EBX,dword ptr [EBX + 0x514]     ; 004d8ddb
    TEST EBX,EBX                        ; 004d8de1
    JZ 0x004d8df0                       ; 004d8de3
        ;   XREF to: 004d8df0 (CONDITIONAL_JUMP)  ; LAB_004d8df0
    MOV EBX,dword ptr [EBX + 0x144]     ; 004d8de5
        ;   Label: LAB_004d8de5
    INC EDI                             ; 004d8deb
    TEST EBX,EBX                        ; 004d8dec
    JNZ 0x004d8de5                      ; 004d8dee
        ;   XREF to: 004d8de5 (CONDITIONAL_JUMP)  ; LAB_004d8de5
    MOV EBX,dword ptr [ESP + 0x18]      ; 004d8df0
        ;   Label: LAB_004d8df0
    MOV EBX,dword ptr [EBX + 0x514]     ; 004d8df4
    XOR ESI,ESI                         ; 004d8dfa
    TEST EBX,EBX                        ; 004d8dfc
    JZ 0x004d8e9c                       ; 004d8dfe
        ;   XREF to: 004d8e9c (CONDITIONAL_JUMP)  ; LAB_004d8e9c
    LEA EAX,[EDI*0x4 + 0x0]             ; 004d8e04
    SUB EAX,EDI                         ; 004d8e0b
    MOV EDX,EAX                         ; 004d8e0d
    SAR EDX,0x1f                        ; 004d8e0f
    SHL EDX,0x2                         ; 004d8e12
    SBB EAX,EDX                         ; 004d8e15
    SAR EAX,0x2                         ; 004d8e17
    MOV dword ptr [ESP],EAX             ; 004d8e1a
    MOV EDX,EDI                         ; 004d8e1d
    MOV EAX,EDI                         ; 004d8e1f
    SAR EDX,0x1f                        ; 004d8e21
    SUB EAX,EDX                         ; 004d8e24
    SAR EAX,0x1                         ; 004d8e26
    MOV EBP,EAX                         ; 004d8e28
    MOV EDX,EDI                         ; 004d8e2a
    MOV EAX,EDI                         ; 004d8e2c
    SAR EDX,0x1f                        ; 004d8e2e
    SHL EDX,0x2                         ; 004d8e31
    SBB EAX,EDX                         ; 004d8e34
    SAR EAX,0x2                         ; 004d8e36
    MOV EDI,EAX                         ; 004d8e39
    PUSH EBX                            ; 004d8e3b
        ;   Label: LAB_004d8e3b
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004d8e3c
    INC ESI                             ; 004d8e42
    CALL dword ptr [EAX]                ; 004d8e43
    ADD ESP,0x4                         ; 004d8e45
    CMP ESI,EDI                         ; 004d8e48
    JZ 0x004d8eb2                       ; 004d8e4a
        ;   XREF to: 004d8eb2 (CONDITIONAL_JUMP)  ; LAB_004d8eb2
    CMP ESI,EBP                         ; 004d8e4c
        ;   Label: LAB_004d8e4c
    JNZ 0x004d8e6e                      ; 004d8e4e
        ;   XREF to: 004d8e6e (CONDITIONAL_JUMP)  ; LAB_004d8e6e
    PUSH 0x0                            ; 004d8e50
    PUSH 0x589c80                       ; 004d8e52 | = "Setting up actors"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d8e57
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d8e5c
    PUSH EAX                            ; 004d8e5f
    MOV EAX,[0x005baca0]                ; 004d8e60 | INT_005baca0
    PUSH EAX                            ; 004d8e65
    CALL core_level.cpp_CLevelLoader_update_FUN_004c59e0 ; 004d8e66
        ;   XREF to: 004c59e0 (UNCONDITIONAL_CALL)  ; undefined core_level.cpp_CLevelLoader_update_FUN_004c59e0()
    ADD ESP,0xc                         ; 004d8e6b
    CMP ESI,dword ptr [ESP]             ; 004d8e6e
        ;   Label: LAB_004d8e6e
    JNZ 0x004d8e92                      ; 004d8e71
        ;   XREF to: 004d8e92 (CONDITIONAL_JUMP)  ; LAB_004d8e92
    PUSH 0x0                            ; 004d8e73
    PUSH 0x589c92                       ; 004d8e75 | = "Setting up actors"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d8e7a
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d8e7f
    PUSH EAX                            ; 004d8e82
    MOV ECX,dword ptr [0x005baca0]      ; 004d8e83 | INT_005baca0
    PUSH ECX                            ; 004d8e89
    CALL core_level.cpp_CLevelLoader_update_FUN_004c59e0 ; 004d8e8a
        ;   XREF to: 004c59e0 (UNCONDITIONAL_CALL)  ; undefined core_level.cpp_CLevelLoader_update_FUN_004c59e0()
    ADD ESP,0xc                         ; 004d8e8f
    MOV EBX,dword ptr [EBX + 0x144]     ; 004d8e92
        ;   Label: LAB_004d8e92
    TEST EBX,EBX                        ; 004d8e98
    JNZ 0x004d8e3b                      ; 004d8e9a
        ;   XREF to: 004d8e3b (CONDITIONAL_JUMP)  ; LAB_004d8e3b
    MOV EAX,dword ptr [ESP + 0x18]      ; 004d8e9c
        ;   Label: LAB_004d8e9c
    MOV dword ptr [EAX + 0x850],0x1     ; 004d8ea0
    ADD ESP,0x4                         ; 004d8eaa
    POP EBP                             ; 004d8ead
    POP EDI                             ; 004d8eae
    POP ESI                             ; 004d8eaf
    POP EBX                             ; 004d8eb0
    RET                                 ; 004d8eb1
    PUSH 0x0                            ; 004d8eb2
        ;   Label: LAB_004d8eb2
    PUSH 0x589c6e                       ; 004d8eb4 | = "Setting up actors"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d8eb9
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d8ebe
    PUSH EAX                            ; 004d8ec1
    MOV ECX,dword ptr [0x005baca0]      ; 004d8ec2 | INT_005baca0
    PUSH ECX                            ; 004d8ec8
    CALL core_level.cpp_CLevelLoader_update_FUN_004c59e0 ; 004d8ec9
        ;   XREF to: 004c59e0 (UNCONDITIONAL_CALL)  ; undefined core_level.cpp_CLevelLoader_update_FUN_004c59e0()
    ADD ESP,0xc                         ; 004d8ece
    JMP 0x004d8e4c                      ; 004d8ed1
        ;   XREF to: 004d8e4c (UNCONDITIONAL_JUMP)  ; LAB_004d8e4c

