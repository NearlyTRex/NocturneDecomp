; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_lever_cpp_CLever_archive_FUN_00504e80(CLever *this_ptr)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0xd4]:1  local_d4
; undefined1       Stack[-0xd3]:1  local_d3
;
; Referenced Globals:
;   TerminatedCString s_modelName_006310c0
;   TerminatedCString s_modelName_006310ca
;   TerminatedCString s_leverType_006310d4
;   TerminatedCString s_onEvent_006310de
;   TerminatedCString s_offEvent_006310e6
;   TerminatedCString s_sound_006310ef
;   TerminatedCString s_param_006310f5
;   TerminatedCString s_momentaryFlag_006310fb
;   TerminatedCString s_linkedLever_00631109
;   TerminatedCString s_endVertexIndex_00631115
;   TerminatedCString s_moving_00631124
;   TerminatedCString s_moveToPct_0063112b
;   TerminatedCString s_rules_00631135
;   TerminatedCString s_allowedSides_0063113b
;   TerminatedCString s_enableCollision_00631148
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b870
;   core_actor.cpp_archiveFloat_FUN_0040b770
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_archiveRules_FUN_0040c000
;   core_actor.cpp_archiveString_FUN_0040b5c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c1c0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504e80
        ;   Label: core_lever.cpp_CLever_archive_FUN_00504e80
    PUSH ESI                            ; 00504e81
    PUSH EDI                            ; 00504e82
    SUB ESP,0xc8                        ; 00504e83
    MOV EBX,dword ptr [ESP + 0xd8]      ; 00504e89
    PUSH EBX                            ; 00504e90
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c1c0 ; 00504e91
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor * this_ptr)
    MOV EDX,dword ptr [0x00822038]      ; 00504e96 | g_ActorReadingMode
    ADD ESP,0x4                         ; 00504e9c
    LEA EDI,[EBX + 0x158]               ; 00504e9f
    CMP EDX,0x1                         ; 00504ea5
    JZ 0x0050501d                       ; 00504ea8
        ;   XREF to: 0050501d (CONDITIONAL_JUMP)  ; LAB_0050501d
    MOV EDI,ESP                         ; 00504eae
    LEA ESI,[EBX + 0x1d0]               ; 00504eb0
    PUSH EDI                            ; 00504eb6
    MOV AL,byte ptr [ESI]               ; 00504eb7
        ;   Label: LAB_00504eb7
    MOV byte ptr [EDI],AL               ; 00504eb9
    CMP AL,0x0                          ; 00504ebb
    JZ 0x00504ecf                       ; 00504ebd
        ;   XREF to: 00504ecf (CONDITIONAL_JUMP)  ; LAB_00504ecf
    MOV AL,byte ptr [ESI + 0x1]         ; 00504ebf
    ADD ESI,0x2                         ; 00504ec2
    MOV byte ptr [EDI + 0x1],AL         ; 00504ec5
    ADD EDI,0x2                         ; 00504ec8
    CMP AL,0x0                          ; 00504ecb
    JNZ 0x00504eb7                      ; 00504ecd
        ;   XREF to: 00504eb7 (CONDITIONAL_JUMP)  ; LAB_00504eb7
    POP EDI                             ; 00504ecf
        ;   Label: LAB_00504ecf
    PUSH 0x6310ca                       ; 00504ed0 | = "modelName"
    LEA ESI,[ESP + 0x4]                 ; 00504ed5
    PUSH ESI                            ; 00504ed9
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 00504eda
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00504edf
        ;   Label: LAB_00504edf
    PUSH 0x6310d4                       ; 00504ee2 | = "leverType"
    LEA ESI,[EBX + 0x2d8]               ; 00504ee7
    PUSH ESI                            ; 00504eed
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00504eee
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00504ef3
    PUSH 0x6310de                       ; 00504ef6 | = "onEvent"
    LEA ESI,[EBX + 0x2e0]               ; 00504efb
    PUSH ESI                            ; 00504f01
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 00504f02
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00504f07
    PUSH 0x6310e6                       ; 00504f0a | = "offEvent"
    LEA ESI,[EBX + 0x344]               ; 00504f0f
    PUSH ESI                            ; 00504f15
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 00504f16
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00504f1b
    PUSH 0x6310ef                       ; 00504f1e | = "sound"
    LEA ESI,[EBX + 0x3a8]               ; 00504f23
    PUSH ESI                            ; 00504f29
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 00504f2a
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00504f2f
    PUSH 0x6310f5                       ; 00504f32 | = "param"
    LEA ESI,[EBX + 0x2dc]               ; 00504f37
    PUSH ESI                            ; 00504f3d
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 00504f3e
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    MOV ECX,dword ptr [0x0067cfb4]      ; 00504f43 | g_CLeverClassVersion
    ADD ESP,0x8                         ; 00504f49
    CMP ECX,0x2                         ; 00504f4c
    JL 0x00504f65                       ; 00504f4f
        ;   XREF to: 00504f65 (CONDITIONAL_JUMP)  ; LAB_00504f65
    PUSH 0x6310fb                       ; 00504f51 | = "momentaryFlag"
    LEA ESI,[EBX + 0x40c]               ; 00504f56
    PUSH ESI                            ; 00504f5c
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00504f5d
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00504f62
    CMP dword ptr [0x0067cfb4],0x3      ; 00504f65 | g_CLeverClassVersion
        ;   Label: LAB_00504f65
    JL 0x00504f82                       ; 00504f6c
        ;   XREF to: 00504f82 (CONDITIONAL_JUMP)  ; LAB_00504f82
    PUSH 0x631109                       ; 00504f6e | = "linkedLever"
    LEA ESI,[EBX + 0x410]               ; 00504f73
    PUSH ESI                            ; 00504f79
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 00504f7a
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00504f7f
    CMP dword ptr [0x0067cfb4],0x4      ; 00504f82 | g_CLeverClassVersion
        ;   Label: LAB_00504f82
    JL 0x00504f9f                       ; 00504f89
        ;   XREF to: 00504f9f (CONDITIONAL_JUMP)  ; LAB_00504f9f
    PUSH 0x631115                       ; 00504f8b | = "endVertexIndex"
    LEA ESI,[EBX + 0x414]               ; 00504f90
    PUSH ESI                            ; 00504f96
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00504f97
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00504f9c
    CMP dword ptr [0x0067cfb4],0x5      ; 00504f9f | g_CLeverClassVersion
        ;   Label: LAB_00504f9f
    JL 0x00504fd0                       ; 00504fa6
        ;   XREF to: 00504fd0 (CONDITIONAL_JUMP)  ; LAB_00504fd0
    PUSH 0x631124                       ; 00504fa8 | = "moving"
    LEA ESI,[EBX + 0x418]               ; 00504fad
    PUSH ESI                            ; 00504fb3
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00504fb4
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00504fb9
    PUSH 0x63112b                       ; 00504fbc | = "moveToPct"
    LEA ESI,[EBX + 0x41c]               ; 00504fc1
    PUSH ESI                            ; 00504fc7
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 00504fc8
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00504fcd
    CMP dword ptr [0x0067cfb4],0x6      ; 00504fd0 | g_CLeverClassVersion
        ;   Label: LAB_00504fd0
    JL 0x00504fed                       ; 00504fd7
        ;   XREF to: 00504fed (CONDITIONAL_JUMP)  ; LAB_00504fed
    PUSH 0x631135                       ; 00504fd9 | = "rules"
    LEA ESI,[EBX + 0x420]               ; 00504fde
    PUSH ESI                            ; 00504fe4
    CALL core_actor.cpp_archiveRules_FUN_0040c000 ; 00504fe5
        ;   XREF to: 0040c000 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveRules_FUN_0040c000(CRuleList * rules, char * property_name)
    ADD ESP,0x8                         ; 00504fea
    CMP dword ptr [0x0067cfb4],0x7      ; 00504fed | g_CLeverClassVersion
        ;   Label: LAB_00504fed
    JL 0x0050500a                       ; 00504ff4
        ;   XREF to: 0050500a (CONDITIONAL_JUMP)  ; LAB_0050500a
    PUSH 0x63113b                       ; 00504ff6 | = "allowedSides"
    LEA ESI,[EBX + 0x80c]               ; 00504ffb
    PUSH ESI                            ; 00505001
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00505002
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00505007
    CMP dword ptr [0x0067cfb4],0x8      ; 0050500a | g_CLeverClassVersion
        ;   Label: LAB_0050500a
    JGE 0x0050503d                      ; 00505011
        ;   XREF to: 0050503d (CONDITIONAL_JUMP)  ; LAB_0050503d
    ADD ESP,0xc8                        ; 00505013
    POP EDI                             ; 00505019
    POP ESI                             ; 0050501a
    POP EBX                             ; 0050501b
    RET                                 ; 0050501c
    PUSH 0x6310c0                       ; 0050501d | = "modelName"
        ;   Label: LAB_0050501d
    LEA ESI,[ESP + 0x4]                 ; 00505022
    PUSH ESI                            ; 00505026
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 00505027
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0050502c
    MOV ESI,ESP                         ; 0050502f
    PUSH ESI                            ; 00505031
    PUSH EDI                            ; 00505032
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00505033
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    JMP 0x00504edf                      ; 00505038
        ;   XREF to: 00504edf (UNCONDITIONAL_JUMP)  ; LAB_00504edf
    PUSH 0x631148                       ; 0050503d | = "enableCollision"
        ;   Label: LAB_0050503d
    ADD EBX,0x810                       ; 00505042
    PUSH EBX                            ; 00505048
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00505049
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0050504e
    ADD ESP,0xc8                        ; 00505051
    POP EDI                             ; 00505057
    POP ESI                             ; 00505058
    POP EBX                             ; 00505059
    RET                                 ; 0050505a

