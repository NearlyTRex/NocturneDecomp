; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_wateract_cpp_CWaterActor_archive_FUN_00578af0(CWaterActor *this_ptr)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005d7293
;   TerminatedCString s_opacity_005d7298
;   TerminatedCString s_heightDelta_005d72a0
;   TerminatedCString s_timeToMove_005d72ac
;   TerminatedCString s_moveSound_005d72b7
;   TerminatedCString s_moveEvent_005d72c1
;   TerminatedCString s_param_005d72cb
;   TerminatedCString s_heightDelta_005d72d1
;   TerminatedCString s_timeToMoveUp_005d72dd
;   TerminatedCString s_timeToMoveDown_005d72ea
;   TerminatedCString s_moveUpSound_005d72f9
;   TerminatedCString s_moveDownSound_005d7305
;   TerminatedCString s_moveUpEvent_005d7313
;   TerminatedCString s_moveDownEvent_005d731f
;   TerminatedCString s_param_005d732d
;   ... and 8 more
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

    PUSH EBX                            ; 00578af0
        ;   Label: core_wateract.cpp_CWaterActor_archive_FUN_00578af0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00578af1
    PUSH EBX                            ; 00578af5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 00578af6
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00578afb
    PUSH 0x5d7293                       ; 00578afe | DAT_005d7293
    LEA EAX,[EBX + 0x158]               ; 00578b03
    PUSH EAX                            ; 00578b09
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 00578b0a
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b400(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 00578b0f
    PUSH 0x5d7298                       ; 00578b12 | = "opacity"
    LEA EAX,[EBX + 0x164]               ; 00578b17
    PUSH EAX                            ; 00578b1d
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00578b1e
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [0x00607184]      ; 00578b23 | g_CWaterActorClassVersion
    ADD ESP,0x8                         ; 00578b29
    CMP EDX,0x2                         ; 00578b2c
    JZ 0x00578c80                       ; 00578b2f
        ;   XREF to: 00578c80 (CONDITIONAL_JUMP)  ; LAB_00578c80
    CMP dword ptr [0x00607184],0x3      ; 00578b35 | g_CWaterActorClassVersion
        ;   Label: LAB_00578b35
    JL 0x00578bf6                       ; 00578b3c
        ;   XREF to: 00578bf6 (CONDITIONAL_JUMP)  ; LAB_00578bf6
    PUSH 0x5d72d1                       ; 00578b42 | = "heightDelta"
    LEA EAX,[EBX + 0x168]               ; 00578b47
    PUSH EAX                            ; 00578b4d
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00578b4e
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00578b53
    PUSH 0x5d72dd                       ; 00578b56 | = "timeToMoveUp"
    LEA EAX,[EBX + 0x16c]               ; 00578b5b
    PUSH EAX                            ; 00578b61
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00578b62
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00578b67
    PUSH 0x5d72ea                       ; 00578b6a | = "timeToMoveDown"
    LEA EAX,[EBX + 0x170]               ; 00578b6f
    PUSH EAX                            ; 00578b75
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00578b76
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00578b7b
    PUSH 0x5d72f9                       ; 00578b7e | = "moveUpSound"
    LEA EAX,[EBX + 0x174]               ; 00578b83
    PUSH EAX                            ; 00578b89
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00578b8a
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00578b8f
    PUSH 0x5d7305                       ; 00578b92 | = "moveDownSound"
    LEA EAX,[EBX + 0x194]               ; 00578b97
    PUSH EAX                            ; 00578b9d
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00578b9e
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00578ba3
    PUSH 0x5d7313                       ; 00578ba6 | = "moveUpEvent"
    LEA EAX,[EBX + 0x1b4]               ; 00578bab
    PUSH EAX                            ; 00578bb1
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00578bb2
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00578bb7
    PUSH 0x5d731f                       ; 00578bba | = "moveDownEvent"
    LEA EAX,[EBX + 0x218]               ; 00578bbf
    PUSH EAX                            ; 00578bc5
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00578bc6
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00578bcb
    PUSH 0x5d732d                       ; 00578bce | = "param"
    LEA EAX,[EBX + 0x27c]               ; 00578bd3
    PUSH EAX                            ; 00578bd9
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00578bda
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00578bdf
    PUSH 0x5d7333                       ; 00578be2 | = "state"
    LEA EAX,[EBX + 0x280]               ; 00578be7
    PUSH EAX                            ; 00578bed
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00578bee
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00578bf3
    CMP dword ptr [0x00607184],0x4      ; 00578bf6 | g_CWaterActorClassVersion
        ;   Label: LAB_00578bf6
    JL 0x00578c13                       ; 00578bfd
        ;   XREF to: 00578c13 (CONDITIONAL_JUMP)  ; LAB_00578c13
    PUSH 0x5d7339                       ; 00578bff | = "patchSize"
    LEA EAX,[EBX + 0x284]               ; 00578c04
    PUSH EAX                            ; 00578c0a
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00578c0b
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00578c10
    CMP dword ptr [0x00607184],0x5      ; 00578c13 | g_CWaterActorClassVersion
        ;   Label: LAB_00578c13
    JL 0x00578c30                       ; 00578c1a
        ;   XREF to: 00578c30 (CONDITIONAL_JUMP)  ; LAB_00578c30
    PUSH 0x5d7343                       ; 00578c1c | = "roundFlag"
    LEA EAX,[EBX + 0x288]               ; 00578c21
    PUSH EAX                            ; 00578c27
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00578c28
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00578c2d
    CMP dword ptr [0x00607184],0x6      ; 00578c30 | g_CWaterActorClassVersion
        ;   Label: LAB_00578c30
    JL 0x00578c75                       ; 00578c37
        ;   XREF to: 00578c75 (CONDITIONAL_JUMP)  ; LAB_00578c75
    PUSH 0x5d734d                       ; 00578c39 | DAT_005d734d
    LEA EAX,[EBX + 0x28c]               ; 00578c3e
    PUSH EAX                            ; 00578c44
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00578c45
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00578c4a
    PUSH 0x5d7352                       ; 00578c4d | DAT_005d7352
    LEA EAX,[EBX + 0x290]               ; 00578c52
    PUSH EAX                            ; 00578c58
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00578c59
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00578c5e
    PUSH 0x5d7357                       ; 00578c61 | DAT_005d7357
    LEA EAX,[EBX + 0x294]               ; 00578c66
    PUSH EAX                            ; 00578c6c
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00578c6d
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00578c72
    CMP dword ptr [0x00607184],0x7      ; 00578c75 | g_CWaterActorClassVersion
        ;   Label: LAB_00578c75
    JGE 0x00578ce9                      ; 00578c7c
        ;   XREF to: 00578ce9 (CONDITIONAL_JUMP)  ; LAB_00578ce9
    POP EBX                             ; 00578c7e
    RET                                 ; 00578c7f
    PUSH 0x5d72a0                       ; 00578c80 | = "heightDelta"
        ;   Label: LAB_00578c80
    LEA EAX,[EBX + 0x168]               ; 00578c85
    PUSH EAX                            ; 00578c8b
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00578c8c
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00578c91
    PUSH 0x5d72ac                       ; 00578c94 | = "timeToMove"
    LEA EAX,[EBX + 0x16c]               ; 00578c99
    PUSH EAX                            ; 00578c9f
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00578ca0
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00578ca5
    PUSH 0x5d72b7                       ; 00578ca8 | = "moveSound"
    LEA EAX,[EBX + 0x174]               ; 00578cad
    PUSH EAX                            ; 00578cb3
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00578cb4
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00578cb9
    PUSH 0x5d72c1                       ; 00578cbc | = "moveEvent"
    LEA EAX,[EBX + 0x1b4]               ; 00578cc1
    PUSH EAX                            ; 00578cc7
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00578cc8
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00578ccd
    PUSH 0x5d72cb                       ; 00578cd0 | = "param"
    LEA EAX,[EBX + 0x27c]               ; 00578cd5
    PUSH EAX                            ; 00578cdb
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00578cdc
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00578ce1
    JMP 0x00578b35                      ; 00578ce4
        ;   XREF to: 00578b35 (UNCONDITIONAL_JUMP)  ; LAB_00578b35
    PUSH 0x5d735c                       ; 00578ce9 | = "is_lava"
        ;   Label: LAB_00578ce9
    ADD EBX,0x298                       ; 00578cee
    PUSH EBX                            ; 00578cf4
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00578cf5
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00578cfa
    POP EBX                             ; 00578cfd
    RET                                 ; 00578cfe

