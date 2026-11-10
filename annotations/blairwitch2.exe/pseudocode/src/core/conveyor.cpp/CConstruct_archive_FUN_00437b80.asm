; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_conveyor_cpp_CConstruct_archive_FUN_00437b80(CConstruct *this_ptr)
;
; Parameters:
; CConstruct *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005cde22+1
;   TerminatedCString s_modelName_005cde29
;   TerminatedCString s_motion_state_005cde33
;   TerminatedCString s_fallEvent_005cde40
;   TerminatedCString s_mistState_005cde4a
;   TerminatedCString s_vanishTimer_005cde54
;   TerminatedCString s_newPos_005cde60
;   TerminatedCString s_deathEvent_005cde67
;   TerminatedCString s_recombineTime_005cde72
;   TerminatedCString s_blownUp_005cde80
;   TerminatedCString s_param_005cde88
;   TerminatedCString s_boxCount_005cde8e
;   TerminatedCString s_partStatus_005cde97
;   TerminatedCString s_boxListPos_005cdea2
;   TerminatedCString s_boxListOrient_005cdead
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_actor.cpp_archivePartStatus_FUN_0040bc50
;   core_actor.cpp_archiveQuaternion_FUN_0040b690
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_actor.cpp_archiveVector_FUN_0040b4b0
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437b80
        ;   Label: core_conveyor.cpp_CConstruct_archive_FUN_00437b80
    PUSH EBP                            ; 00437b81
    SUB ESP,0x20                        ; 00437b82
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00437b85
    PUSH EDX                            ; 00437b89
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 00437b8a
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00437b8f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00437b92
    PUSH 0x5cde23                       ; 00437b96 | s_speed_005cde22+1
    ADD EAX,0x10a60                     ; 00437b9b
    PUSH EAX                            ; 00437ba0
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00437ba1
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00437ba6
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00437ba9
    PUSH 0x5cde29                       ; 00437bad | = "modelName"
    ADD EBX,0x2b4                       ; 00437bb2
    PUSH EBX                            ; 00437bb8
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 00437bb9
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0()
    ADD ESP,0x8                         ; 00437bbe
    PUSH 0x5cde33                       ; 00437bc1 | = "motion state"
    PUSH EBX                            ; 00437bc6
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 00437bc7
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveMotionState_FUN_0040bb60()
    ADD ESP,0x8                         ; 00437bcc
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00437bcf
    PUSH 0x5cde40                       ; 00437bd3 | = "fallEvent"
    ADD EAX,0x10af8                     ; 00437bd8
    PUSH EAX                            ; 00437bdd
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 00437bde
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    MOV ECX,dword ptr [0x00609f00]      ; 00437be3 | g_CConstructClassVersion
    ADD ESP,0x8                         ; 00437be9
    CMP ECX,0x3                         ; 00437bec
    JL 0x00437c00                       ; 00437bef
        ;   XREF to: 00437c00 (CONDITIONAL_JUMP)  ; LAB_00437c00
    CMP dword ptr [0x00609f00],0x1      ; 00437bf1 | g_CConstructClassVersion
    JG 0x00437c5b                       ; 00437bf8
        ;   XREF to: 00437c5b (CONDITIONAL_JUMP)  ; LAB_00437c5b
    ADD ESP,0x20                        ; 00437bfa
        ;   Label: LAB_00437bfa
    POP EBP                             ; 00437bfd
    POP EBX                             ; 00437bfe
    RET                                 ; 00437bff
    PUSH 0x5cde4a                       ; 00437c00 | = "mistState"
        ;   Label: LAB_00437c00
    XOR EBX,EBX                         ; 00437c05
    LEA EAX,[ESP + 0x10]                ; 00437c07
    MOV dword ptr [ESP + 0x10],EBX      ; 00437c0b
    MOV dword ptr [ESP + 0x14],EBX      ; 00437c0f
    MOV dword ptr [ESP + 0xc],EBX       ; 00437c13
    PUSH EAX                            ; 00437c17
    MOV dword ptr [ESP + 0xc],EBX       ; 00437c18
    MOV dword ptr [ESP + 0x8],EBX       ; 00437c1c
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00437c20
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00437c25
    PUSH 0x5cde54                       ; 00437c28 | = "vanishTimer"
    LEA EAX,[ESP + 0x14]                ; 00437c2d
    PUSH EAX                            ; 00437c31
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00437c32
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00437c37
    PUSH 0x5cde60                       ; 00437c3a | = "newPos"
    LEA EAX,[ESP + 0x4]                 ; 00437c3f
    PUSH EAX                            ; 00437c43
    CALL core_actor.cpp_archiveVector_FUN_0040b4b0 ; 00437c44
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b4b0()
    ADD ESP,0x8                         ; 00437c49
    CMP dword ptr [0x00609f00],0x1      ; 00437c4c | g_CConstructClassVersion
    JG 0x00437c5b                       ; 00437c53
        ;   XREF to: 00437c5b (CONDITIONAL_JUMP)  ; LAB_00437c5b
    ADD ESP,0x20                        ; 00437c55
    POP EBP                             ; 00437c58
    POP EBX                             ; 00437c59
    RET                                 ; 00437c5a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00437c5b
        ;   Label: LAB_00437c5b
    PUSH 0x5cde67                       ; 00437c5f | = "deathEvent"
    ADD EAX,0x10ba8                     ; 00437c64
    PUSH EAX                            ; 00437c69
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 00437c6a
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00437c6f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00437c72
    PUSH 0x5cde72                       ; 00437c76 | = "recombineTime"
    ADD EAX,0x10c0c                     ; 00437c7b
    PUSH EAX                            ; 00437c80
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00437c81
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00437c86
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00437c89
    PUSH 0x5cde80                       ; 00437c8d | = "blownUp"
    ADD EAX,0x112d8                     ; 00437c92
    PUSH EAX                            ; 00437c97
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00437c98
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00437c9d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00437ca0
    PUSH 0x5cde88                       ; 00437ca4 | = "param"
    ADD EAX,0x112dc                     ; 00437ca9
    PUSH EAX                            ; 00437cae
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00437caf
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00437cb4
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00437cb7
    PUSH 0x5cde8e                       ; 00437cbb | = "boxCount"
    ADD EAX,0x10c14                     ; 00437cc0
    PUSH EAX                            ; 00437cc5
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00437cc6
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00437ccb
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00437cce
    PUSH 0x5cde97                       ; 00437cd2 | = "partStatus"
    ADD EAX,0x2b4                       ; 00437cd7
    PUSH EAX                            ; 00437cdc
    CALL core_actor.cpp_archivePartStatus_FUN_0040bc50 ; 00437cdd
        ;   XREF to: 0040bc50 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archivePartStatus_FUN_0040bc50()
    ADD ESP,0x8                         ; 00437ce2
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00437ce5
    MOV ECX,dword ptr [EAX + 0x10c14]   ; 00437ce9
    XOR EBX,EBX                         ; 00437cef
    TEST ECX,ECX                        ; 00437cf1
    JLE 0x00437bfa                      ; 00437cf3
        ;   XREF to: 00437bfa (CONDITIONAL_JUMP)  ; LAB_00437bfa
    PUSH EDI                            ; 00437cf9
    PUSH ESI                            ; 00437cfa
    MOV ESI,dword ptr [ESP + 0x34]      ; 00437cfb
    ADD EAX,0x10c18                     ; 00437cff
    MOV EBP,dword ptr [ESP + 0x34]      ; 00437d04
    MOV dword ptr [ESP + 0x1c],EAX      ; 00437d08
    MOV EAX,dword ptr [ESP + 0x34]      ; 00437d0c
    MOV EDI,dword ptr [ESP + 0x34]      ; 00437d10
    ADD EAX,0x10c50                     ; 00437d14
    ADD ESI,0x10c5c                     ; 00437d19
    MOV dword ptr [ESP + 0x20],EAX      ; 00437d1f
    MOV EAX,dword ptr [ESP + 0x34]      ; 00437d23
    ADD EBP,0x10c40                     ; 00437d27
    ADD EAX,0x10c24                     ; 00437d2d
    ADD EDI,0x10c30                     ; 00437d32
    MOV dword ptr [ESP + 0x24],EAX      ; 00437d38
    IMUL EAX,EBX,0x48                   ; 00437d3c
        ;   Label: LAB_00437d3c
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00437d3f
    PUSH 0x5cdea2                       ; 00437d43 | = "boxListPos"
    ADD EAX,EDX                         ; 00437d48
    PUSH EAX                            ; 00437d4a
    CALL core_actor.cpp_archiveVector_FUN_0040b4b0 ; 00437d4b
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b4b0()
    ADD ESP,0x8                         ; 00437d50
    PUSH 0x5cdead                       ; 00437d53 | = "boxListOrient"
    MOV ECX,dword ptr [ESP + 0x28]      ; 00437d58
    PUSH ECX                            ; 00437d5c
    CALL core_actor.cpp_archiveVector_FUN_0040b4b0 ; 00437d5d
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b4b0()
    ADD ESP,0x8                         ; 00437d62
    PUSH 0x5cdebb                       ; 00437d65 | = "boxListDestOrient"
    PUSH EDI                            ; 00437d6a
    CALL core_actor.cpp_archiveQuaternion_FUN_0040b690 ; 00437d6b
        ;   XREF to: 0040b690 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveQuaternion_FUN_0040b690()
    ADD ESP,0x8                         ; 00437d70
    PUSH 0x5cdecd                       ; 00437d73 | = "boxListStartOrient"
    PUSH EBP                            ; 00437d78
    CALL core_actor.cpp_archiveQuaternion_FUN_0040b690 ; 00437d79
        ;   XREF to: 0040b690 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveQuaternion_FUN_0040b690()
    ADD ESP,0x8                         ; 00437d7e
    PUSH 0x5cdee0                       ; 00437d81 | = "sourcePos"
    MOV EAX,dword ptr [ESP + 0x24]      ; 00437d86
    PUSH EAX                            ; 00437d8a
    CALL core_actor.cpp_archiveVector_FUN_0040b4b0 ; 00437d8b
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b4b0()
    ADD ESP,0x8                         ; 00437d90
    PUSH 0x5cdeea                       ; 00437d93 | = "boxListPart"
    INC EBX                             ; 00437d98
    PUSH ESI                            ; 00437d99
    ADD EDI,0x48                        ; 00437d9a
    ADD EBP,0x48                        ; 00437d9d
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 00437da0
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 00437da5
    ADD ESI,0x48                        ; 00437da8
    MOV EDX,dword ptr [ESP + 0x20]      ; 00437dab
    MOV ECX,dword ptr [ESP + 0x24]      ; 00437daf
    MOV EAX,dword ptr [ESP + 0x34]      ; 00437db3
    ADD EDX,0x48                        ; 00437db7
    ADD ECX,0x48                        ; 00437dba
    MOV dword ptr [ESP + 0x20],EDX      ; 00437dbd
    MOV EDX,dword ptr [EAX + 0x10c14]   ; 00437dc1
    MOV dword ptr [ESP + 0x24],ECX      ; 00437dc7
    CMP EBX,EDX                         ; 00437dcb
    JL 0x00437d3c                       ; 00437dcd
        ;   XREF to: 00437d3c (CONDITIONAL_JUMP)  ; LAB_00437d3c
    POP ESI                             ; 00437dd3
    POP EDI                             ; 00437dd4
    ADD ESP,0x20                        ; 00437dd5
    POP EBP                             ; 00437dd8
    POP EBX                             ; 00437dd9
    RET                                 ; 00437dda

