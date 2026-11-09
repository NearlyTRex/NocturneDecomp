; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flame_cpp_CFlame_archive_FUN_004a6ca0(CFlame *this_ptr)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_flameSize_005c0c0b+1
;   TerminatedCString s_whichFlame_005c0c16
;   TerminatedCString s_globeScalar_005c0c21
;   TerminatedCString s_onEvent_005c0c2d
;   TerminatedCString s_onEvent_005c0c35
;   TerminatedCString s_flameState_005c0c3d
;   TerminatedCString s_intensity_005c0c48
;   TerminatedCString s_randomness_005c0c52
;   TerminatedCString s_burnHero_005c0c5d
;   TerminatedCString s_burnEnemy_005c0c66
;   int g_CFlameClassVersion = 0x7
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_archiveVector_FUN_0040b400
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6ca0
        ;   Label: core_flame.cpp_CFlame_archive_FUN_004a6ca0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a6ca1
    PUSH EBX                            ; 004a6ca5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 004a6ca6
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004a6cab
    PUSH 0x5c0c0c                       ; 004a6cae | s_flameSize_005c0c0b+1
    LEA EAX,[EBX + 0x158]               ; 004a6cb3
    PUSH EAX                            ; 004a6cb9
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 004a6cba
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b400()
    MOV EDX,dword ptr [0x005fe248]      ; 004a6cbf | g_CFlameClassVersion
    ADD ESP,0x8                         ; 004a6cc5
    CMP EDX,0x2                         ; 004a6cc8
    JGE 0x004a6d64                      ; 004a6ccb
        ;   XREF to: 004a6d64 (CONDITIONAL_JUMP)  ; LAB_004a6d64
    CMP dword ptr [0x005fe248],0x3      ; 004a6cd1 | g_CFlameClassVersion
        ;   Label: LAB_004a6cd1
    JL 0x004a6cee                       ; 004a6cd8
        ;   XREF to: 004a6cee (CONDITIONAL_JUMP)  ; LAB_004a6cee
    PUSH 0x5c0c2d                       ; 004a6cda | = "onEvent"
    LEA EAX,[EBX + 0x1b8]               ; 004a6cdf
    PUSH EAX                            ; 004a6ce5
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 004a6ce6
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004a6ceb
    CMP dword ptr [0x005fe248],0x4      ; 004a6cee | g_CFlameClassVersion
        ;   Label: LAB_004a6cee
    JL 0x004a6d0b                       ; 004a6cf5
        ;   XREF to: 004a6d0b (CONDITIONAL_JUMP)  ; LAB_004a6d0b
    PUSH 0x5c0c35                       ; 004a6cf7 | = "onEvent"
    LEA EAX,[EBX + 0x21c]               ; 004a6cfc
    PUSH EAX                            ; 004a6d02
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 004a6d03
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004a6d08
    CMP dword ptr [0x005fe248],0x5      ; 004a6d0b | g_CFlameClassVersion
        ;   Label: LAB_004a6d0b
    JL 0x004a6d28                       ; 004a6d12
        ;   XREF to: 004a6d28 (CONDITIONAL_JUMP)  ; LAB_004a6d28
    PUSH 0x5c0c3d                       ; 004a6d14 | = "flameState"
    LEA EAX,[EBX + 0x1b4]               ; 004a6d19
    PUSH EAX                            ; 004a6d1f
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004a6d20
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a6d25
    CMP dword ptr [0x005fe248],0x6      ; 004a6d28 | g_CFlameClassVersion
        ;   Label: LAB_004a6d28
    JL 0x004a6d59                       ; 004a6d2f
        ;   XREF to: 004a6d59 (CONDITIONAL_JUMP)  ; LAB_004a6d59
    PUSH 0x5c0c48                       ; 004a6d31 | = "intensity"
    LEA EAX,[EBX + 0x280]               ; 004a6d36
    PUSH EAX                            ; 004a6d3c
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004a6d3d
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 004a6d42
    PUSH 0x5c0c52                       ; 004a6d45 | = "randomness"
    LEA EAX,[EBX + 0x284]               ; 004a6d4a
    PUSH EAX                            ; 004a6d50
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004a6d51
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 004a6d56
    CMP dword ptr [0x005fe248],0x7      ; 004a6d59 | g_CFlameClassVersion
        ;   Label: LAB_004a6d59
    JGE 0x004a6d91                      ; 004a6d60
        ;   XREF to: 004a6d91 (CONDITIONAL_JUMP)  ; LAB_004a6d91
    POP EBX                             ; 004a6d62
    RET                                 ; 004a6d63
    PUSH 0x5c0c16                       ; 004a6d64 | = "whichFlame"
        ;   Label: LAB_004a6d64
    LEA EAX,[EBX + 0x1a8]               ; 004a6d69
    PUSH EAX                            ; 004a6d6f
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004a6d70
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a6d75
    PUSH 0x5c0c21                       ; 004a6d78 | = "globeScalar"
    LEA EAX,[EBX + 0x1ac]               ; 004a6d7d
    PUSH EAX                            ; 004a6d83
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004a6d84
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 004a6d89
    JMP 0x004a6cd1                      ; 004a6d8c
        ;   XREF to: 004a6cd1 (UNCONDITIONAL_JUMP)  ; LAB_004a6cd1
    PUSH 0x5c0c5d                       ; 004a6d91 | = "burnHero"
        ;   Label: LAB_004a6d91
    LEA EAX,[EBX + 0x288]               ; 004a6d96
    PUSH EAX                            ; 004a6d9c
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004a6d9d
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a6da2
    PUSH 0x5c0c66                       ; 004a6da5 | = "burnEnemy"
    ADD EBX,0x28c                       ; 004a6daa
    PUSH EBX                            ; 004a6db0
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004a6db1
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a6db6
    POP EBX                             ; 004a6db9
    RET                                 ; 004a6dba

