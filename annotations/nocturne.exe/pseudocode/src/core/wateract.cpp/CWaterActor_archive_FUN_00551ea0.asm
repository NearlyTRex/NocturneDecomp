; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_wateract_cpp_CWaterActor_archive_FUN_00551ea0(CDemonActor *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_size_0059766f
;   TerminatedCString s_opacity_00597674
;   TerminatedCString s_heightDelta_0059767c
;   TerminatedCString s_timeToMove_00597688
;   TerminatedCString s_moveSound_00597693
;   TerminatedCString s_moveEvent_0059769d
;   TerminatedCString s_param_005976a7
;   TerminatedCString s_heightDelta_005976ad
;   TerminatedCString s_timeToMoveUp_005976b9
;   TerminatedCString s_timeToMoveDown_005976c6
;   TerminatedCString s_moveUpSound_005976d5
;   TerminatedCString s_moveDownSound_005976e1
;   TerminatedCString s_moveUpEvent_005976ef
;   TerminatedCString s_moveDownEvent_005976fb
;   TerminatedCString s_param_00597709
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_archiveVector_FUN_0040c450
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551ea0
        ;   Label: core_wateract.cpp_CWaterActor_archive_FUN_00551ea0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00551ea1
    PUSH EBX                            ; 00551ea5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 00551ea6
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040d2d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00551eab
    PUSH 0x59766f                       ; 00551eae | = "size"
    LEA EAX,[EBX + 0x150]               ; 00551eb3
    PUSH EAX                            ; 00551eb9
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 00551eba
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040c450(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 00551ebf
    PUSH 0x597674                       ; 00551ec2 | = "opacity"
    LEA EAX,[EBX + 0x15c]               ; 00551ec7
    PUSH EAX                            ; 00551ecd
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00551ece
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [0x005c154c]      ; 00551ed3 | g_INT_005c154c
    ADD ESP,0x8                         ; 00551ed9
    CMP EDX,0x2                         ; 00551edc
    JZ 0x00551feb                       ; 00551edf
        ;   XREF to: 00551feb (CONDITIONAL_JUMP)  ; LAB_00551feb
    CMP dword ptr [0x005c154c],0x3      ; 00551ee5 | g_INT_005c154c
        ;   Label: LAB_00551ee5
    JL 0x00551fa6                       ; 00551eec
        ;   XREF to: 00551fa6 (CONDITIONAL_JUMP)  ; LAB_00551fa6
    PUSH 0x5976ad                       ; 00551ef2 | = "heightDelta"
    LEA EAX,[EBX + 0x160]               ; 00551ef7
    PUSH EAX                            ; 00551efd
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00551efe
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00551f03
    PUSH 0x5976b9                       ; 00551f06 | = "timeToMoveUp"
    LEA EAX,[EBX + 0x164]               ; 00551f0b
    PUSH EAX                            ; 00551f11
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00551f12
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00551f17
    PUSH 0x5976c6                       ; 00551f1a | = "timeToMoveDown"
    LEA EAX,[EBX + 0x168]               ; 00551f1f
    PUSH EAX                            ; 00551f25
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00551f26
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00551f2b
    PUSH 0x5976d5                       ; 00551f2e | = "moveUpSound"
    LEA EAX,[EBX + 0x16c]               ; 00551f33
    PUSH EAX                            ; 00551f39
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00551f3a
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00551f3f
    PUSH 0x5976e1                       ; 00551f42 | = "moveDownSound"
    LEA EAX,[EBX + 0x18c]               ; 00551f47
    PUSH EAX                            ; 00551f4d
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00551f4e
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00551f53
    PUSH 0x5976ef                       ; 00551f56 | = "moveUpEvent"
    LEA EAX,[EBX + 0x1ac]               ; 00551f5b
    PUSH EAX                            ; 00551f61
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00551f62
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00551f67
    PUSH 0x5976fb                       ; 00551f6a | = "moveDownEvent"
    LEA EAX,[EBX + 0x210]               ; 00551f6f
    PUSH EAX                            ; 00551f75
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00551f76
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00551f7b
    PUSH 0x597709                       ; 00551f7e | = "param"
    LEA EAX,[EBX + 0x274]               ; 00551f83
    PUSH EAX                            ; 00551f89
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00551f8a
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00551f8f
    PUSH 0x59770f                       ; 00551f92 | = "state"
    LEA EAX,[EBX + 0x278]               ; 00551f97
    PUSH EAX                            ; 00551f9d
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00551f9e
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00551fa3
    CMP dword ptr [0x005c154c],0x4      ; 00551fa6 | g_INT_005c154c
        ;   Label: LAB_00551fa6
    JL 0x00551fc3                       ; 00551fad
        ;   XREF to: 00551fc3 (CONDITIONAL_JUMP)  ; LAB_00551fc3
    PUSH 0x597715                       ; 00551faf | = "patchSize"
    LEA EAX,[EBX + 0x27c]               ; 00551fb4
    PUSH EAX                            ; 00551fba
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00551fbb
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00551fc0
    CMP dword ptr [0x005c154c],0x5      ; 00551fc3 | g_INT_005c154c
        ;   Label: LAB_00551fc3
    JL 0x00551fe0                       ; 00551fca
        ;   XREF to: 00551fe0 (CONDITIONAL_JUMP)  ; LAB_00551fe0
    PUSH 0x59771f                       ; 00551fcc | = "roundFlag"
    LEA EAX,[EBX + 0x280]               ; 00551fd1
    PUSH EAX                            ; 00551fd7
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00551fd8
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00551fdd
    CMP dword ptr [0x005c154c],0x6      ; 00551fe0 | g_INT_005c154c
        ;   Label: LAB_00551fe0
    JGE 0x00552054                      ; 00551fe7
        ;   XREF to: 00552054 (CONDITIONAL_JUMP)  ; LAB_00552054
    POP EBX                             ; 00551fe9
    RET                                 ; 00551fea
    PUSH 0x59767c                       ; 00551feb | = "heightDelta"
        ;   Label: LAB_00551feb
    LEA EAX,[EBX + 0x160]               ; 00551ff0
    PUSH EAX                            ; 00551ff6
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00551ff7
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00551ffc
    PUSH 0x597688                       ; 00551fff | = "timeToMove"
    LEA EAX,[EBX + 0x164]               ; 00552004
    PUSH EAX                            ; 0055200a
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0055200b
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00552010
    PUSH 0x597693                       ; 00552013 | = "moveSound"
    LEA EAX,[EBX + 0x16c]               ; 00552018
    PUSH EAX                            ; 0055201e
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0055201f
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00552024
    PUSH 0x59769d                       ; 00552027 | = "moveEvent"
    LEA EAX,[EBX + 0x1ac]               ; 0055202c
    PUSH EAX                            ; 00552032
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00552033
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00552038
    PUSH 0x5976a7                       ; 0055203b | = "param"
    LEA EAX,[EBX + 0x274]               ; 00552040
    PUSH EAX                            ; 00552046
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00552047
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0055204c
    JMP 0x00551ee5                      ; 0055204f
        ;   XREF to: 00551ee5 (UNCONDITIONAL_JUMP)  ; LAB_00551ee5
    PUSH 0x597729                       ; 00552054 | = "colR"
        ;   Label: LAB_00552054
    LEA EAX,[EBX + 0x284]               ; 00552059
    PUSH EAX                            ; 0055205f
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00552060
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00552065
    PUSH 0x59772e                       ; 00552068 | = "colG"
    LEA EAX,[EBX + 0x288]               ; 0055206d
    PUSH EAX                            ; 00552073
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00552074
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00552079
    PUSH 0x597733                       ; 0055207c | = "colB"
    ADD EBX,0x28c                       ; 00552081
    PUSH EBX                            ; 00552087
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00552088
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0055208d
    POP EBX                             ; 00552090
    RET                                 ; 00552091

