; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_platfrm_cpp_CPlatform_archive_FUN_0054dbc0(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_conveyor.cpp_FUN_00442020 at 00442026
;
; Referenced Globals:
;   TerminatedCString s_modelName_0063f79e
;   TerminatedCString s_toStartEvent_0063f7a8
;   TerminatedCString s_toEndEvent_0063f7b5
;   TerminatedCString s_stopEvent_0063f7c0
;   TerminatedCString s_startSound_0063f7ca
;   TerminatedCString s_stopSound_0063f7d5
;   TerminatedCString s_activeSound_0063f7df
;   TerminatedCString s_courseFilename_0063f7eb
;   TerminatedCString s_startPos_0063f7fa
;   TerminatedCString s_origOrient_0063f803
;   TerminatedCString s_endPos_0063f80e
;   TerminatedCString s_endOrient_0063f815
;   TerminatedCString s_state_0063f81f
;   TerminatedCString s_param_0063f825
;   TerminatedCString s_travelTimeToStart_0063f82b
;   ... and 22 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b870
;   core_actor.cpp_archiveFloat_FUN_0040b770
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_archiveQuaternion_FUN_0040b520
;   core_actor.cpp_archiveString_FUN_0040b5c0
;   core_actor.cpp_archiveVector_FUN_0040b340
;   core_actor.cpp_CDemonActor_archive_FUN_0040c1c0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054dbc0
        ;   Label: core_platfrm.cpp_CPlatform_archive_FUN_0054dbc0
    PUSH ESI                            ; 0054dbc1
    PUSH EDI                            ; 0054dbc2
    PUSH EBP                            ; 0054dbc3
    SUB ESP,0xc                         ; 0054dbc4
    MOV EDI,dword ptr [ESP + 0x20]      ; 0054dbc7
    PUSH EDI                            ; 0054dbcb
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c1c0 ; 0054dbcc
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0054dbd1
    PUSH 0x63f79e                       ; 0054dbd4 | = "modelName"
    LEA EAX,[EDI + 0x158]               ; 0054dbd9
    PUSH EAX                            ; 0054dbdf
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0 ; 0054dbe0
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054dbe5
    PUSH 0x63f7a8                       ; 0054dbe8 | = "toStartEvent"
    LEA EAX,[EDI + 0x354]               ; 0054dbed
    PUSH EAX                            ; 0054dbf3
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 0054dbf4
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0054dbf9
    PUSH 0x63f7b5                       ; 0054dbfc | = "toEndEvent"
    LEA EAX,[EDI + 0x3b8]               ; 0054dc01
    PUSH EAX                            ; 0054dc07
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 0054dc08
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0054dc0d
    PUSH 0x63f7c0                       ; 0054dc10 | = "stopEvent"
    LEA EAX,[EDI + 0x41c]               ; 0054dc15
    PUSH EAX                            ; 0054dc1b
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 0054dc1c
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0054dc21
    PUSH 0x63f7ca                       ; 0054dc24 | = "startSound"
    LEA EAX,[EDI + 0x480]               ; 0054dc29
    PUSH EAX                            ; 0054dc2f
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 0054dc30
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0054dc35
    PUSH 0x63f7d5                       ; 0054dc38 | = "stopSound"
    LEA EAX,[EDI + 0x494]               ; 0054dc3d
    PUSH EAX                            ; 0054dc43
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 0054dc44
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0054dc49
    PUSH 0x63f7df                       ; 0054dc4c | = "activeSound"
    LEA EAX,[EDI + 0x4a8]               ; 0054dc51
    PUSH EAX                            ; 0054dc57
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 0054dc58
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0054dc5d
    PUSH 0x63f7eb                       ; 0054dc60 | = "courseFilename"
    LEA EAX,[EDI + 0x2f0]               ; 0054dc65
    PUSH EAX                            ; 0054dc6b
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 0054dc6c
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    MOV AH,byte ptr [EDI + 0x2f0]       ; 0054dc71
    ADD ESP,0x8                         ; 0054dc77
    TEST AH,AH                          ; 0054dc7a
    JZ 0x0054de7f                       ; 0054dc7c
        ;   XREF to: 0054de7f (CONDITIONAL_JUMP)  ; LAB_0054de7f
    PUSH 0x63f81f                       ; 0054dc82 | = "state"
        ;   Label: LAB_0054dc82
    LEA EAX,[EDI + 0x2d4]               ; 0054dc87
    PUSH EAX                            ; 0054dc8d
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0054dc8e
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054dc93
    PUSH 0x63f825                       ; 0054dc96 | = "param"
    LEA EAX,[EDI + 0x2dc]               ; 0054dc9b
    PUSH EAX                            ; 0054dca1
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 0054dca2
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054dca7
    PUSH 0x63f82b                       ; 0054dcaa | = "travelTimeToStart"
    LEA EAX,[EDI + 0x2ec]               ; 0054dcaf
    PUSH EAX                            ; 0054dcb5
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 0054dcb6
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x00680cbc]      ; 0054dcbb | g_CPlatformClassVersion
    ADD ESP,0x8                         ; 0054dcc1
    CMP EDX,0x7                         ; 0054dcc4
    JL 0x0054ded4                       ; 0054dcc7
        ;   XREF to: 0054ded4 (CONDITIONAL_JUMP)  ; LAB_0054ded4
    PUSH 0x63f83d                       ; 0054dccd | = "travelTimeToEnd"
    LEA EAX,[EDI + 0x2e8]               ; 0054dcd2
    PUSH EAX                            ; 0054dcd8
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 0054dcd9
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054dcde
    PUSH 0x63f84d                       ; 0054dce1 | = "groundType"
        ;   Label: LAB_0054dce1
    LEA EAX,[EDI + 0x2d8]               ; 0054dce6
    PUSH EAX                            ; 0054dcec
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0054dced
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    MOV ECX,dword ptr [0x00680cbc]      ; 0054dcf2 | g_CPlatformClassVersion
    ADD ESP,0x8                         ; 0054dcf8
    CMP ECX,0x2                         ; 0054dcfb
    JL 0x0054dd14                       ; 0054dcfe
        ;   XREF to: 0054dd14 (CONDITIONAL_JUMP)  ; LAB_0054dd14
    PUSH 0x63f858                       ; 0054dd00 | = "oneShot"
    LEA EAX,[EDI + 0x4c0]               ; 0054dd05
    PUSH EAX                            ; 0054dd0b
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0054dd0c
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054dd11
    CMP dword ptr [0x00680cbc],0x3      ; 0054dd14 | g_CPlatformClassVersion
        ;   Label: LAB_0054dd14
    JL 0x0054dd31                       ; 0054dd1b
        ;   XREF to: 0054dd31 (CONDITIONAL_JUMP)  ; LAB_0054dd31
    PUSH 0x63f860                       ; 0054dd1d | = "blockVirtualDirectorFlag"
    LEA EAX,[EDI + 0x4c4]               ; 0054dd22
    PUSH EAX                            ; 0054dd28
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0054dd29
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054dd2e
    CMP dword ptr [0x00680cbc],0x4      ; 0054dd31 | g_CPlatformClassVersion
        ;   Label: LAB_0054dd31
    JL 0x0054dd4e                       ; 0054dd38
        ;   XREF to: 0054dd4e (CONDITIONAL_JUMP)  ; LAB_0054dd4e
    PUSH 0x63f879                       ; 0054dd3a | = "renderInBackgroundWhenNotMovingFlag"
    LEA EAX,[EDI + 0x4c8]               ; 0054dd3f
    PUSH EAX                            ; 0054dd45
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0054dd46
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054dd4b
    CMP dword ptr [0x00680cbc],0x5      ; 0054dd4e | g_CPlatformClassVersion
        ;   Label: LAB_0054dd4e
    JL 0x0054dd6b                       ; 0054dd55
        ;   XREF to: 0054dd6b (CONDITIONAL_JUMP)  ; LAB_0054dd6b
    PUSH 0x63f89d                       ; 0054dd57 | = "cameraWhileMoving"
    LEA EAX,[EDI + 0x4cc]               ; 0054dd5c
    PUSH EAX                            ; 0054dd62
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 0054dd63
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0054dd68
    CMP dword ptr [0x00680cbc],0x6      ; 0054dd6b | g_CPlatformClassVersion
        ;   Label: LAB_0054dd6b
    JL 0x0054dd88                       ; 0054dd72
        ;   XREF to: 0054dd88 (CONDITIONAL_JUMP)  ; LAB_0054dd88
    PUSH 0x63f8af                       ; 0054dd74 | = "plotAsBoxInShadow"
    LEA EAX,[EDI + 0x50c]               ; 0054dd79
    PUSH EAX                            ; 0054dd7f
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0054dd80
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054dd85
    CMP dword ptr [0x00680cbc],0x8      ; 0054dd88 | g_CPlatformClassVersion
        ;   Label: LAB_0054dd88
    JL 0x0054de30                       ; 0054dd8f
        ;   XREF to: 0054de30 (CONDITIONAL_JUMP)  ; LAB_0054de30
    PUSH 0x63f8c1                       ; 0054dd95 | = "goalParam"
    LEA EAX,[EDI + 0x2e0]               ; 0054dd9a
    PUSH EAX                            ; 0054dda0
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 0054dda1
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054dda6
    PUSH 0x63f8cb                       ; 0054dda9 | = "currentMovementRate"
    LEA EAX,[EDI + 0x2e4]               ; 0054ddae
    PUSH EAX                            ; 0054ddb4
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 0054ddb5
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    MOV ECX,dword ptr [0x00822038]      ; 0054ddba | g_ActorReadingMode
    ADD ESP,0x8                         ; 0054ddc0
    CMP ECX,0x1                         ; 0054ddc3
    JZ 0x0054dee5                       ; 0054ddc6
        ;   XREF to: 0054dee5 (CONDITIONAL_JUMP)  ; LAB_0054dee5
    MOV EAX,EDI                         ; 0054ddcc
    XOR EBX,EBX                         ; 0054ddce
    LEA ESI,[EDI + 0x208]               ; 0054ddd0
    MOV dword ptr [ESP + 0x8],EBX       ; 0054ddd6
    CMP dword ptr [EAX + 0x51c],0x0     ; 0054ddda
        ;   Label: LAB_0054ddda
    JZ 0x0054dde7                       ; 0054dde1
        ;   XREF to: 0054dde7 (CONDITIONAL_JUMP)  ; LAB_0054dde7
    INC dword ptr [ESP + 0x8]           ; 0054dde3
    ADD EAX,0x34                        ; 0054dde7
        ;   Label: LAB_0054dde7
    CMP EAX,ESI                         ; 0054ddea
    JNZ 0x0054ddda                      ; 0054ddec
        ;   XREF to: 0054ddda (CONDITIONAL_JUMP)  ; LAB_0054ddda
    PUSH 0x63f93b                       ; 0054ddee | = "attachCount"
    LEA EAX,[ESP + 0xc]                 ; 0054ddf3
    PUSH EAX                            ; 0054ddf7
    LEA EBP,[EDI + 0x51c]               ; 0054ddf8
    XOR EBX,EBX                         ; 0054ddfe
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0054de00
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    MOV ESI,EDI                         ; 0054de05
    ADD ESP,0x8                         ; 0054de07
    IMUL EAX,EBX,0x34                   ; 0054de0a
        ;   Label: LAB_0054de0a
    CMP dword ptr [ESI + 0x51c],0x0     ; 0054de0d
    JZ 0x0054de26                       ; 0054de14
        ;   XREF to: 0054de26 (CONDITIONAL_JUMP)  ; LAB_0054de26
    PUSH 0x63f947                       ; 0054de16 | = "attach actor"
    ADD EAX,EBP                         ; 0054de1b
    PUSH EAX                            ; 0054de1d
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 0054de1e
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054de23
    INC EBX                             ; 0054de26
        ;   Label: LAB_0054de26
    ADD ESI,0x34                        ; 0054de27
    CMP EBX,0xa                         ; 0054de2a
    JL 0x0054de0a                       ; 0054de2d
        ;   XREF to: 0054de0a (CONDITIONAL_JUMP)  ; LAB_0054de0a
    NOP                                 ; 0054de2f
    CMP dword ptr [0x00680cbc],0x9      ; 0054de30 | g_CPlatformClassVersion
        ;   Label: LAB_0054de30
    JL 0x0054de4d                       ; 0054de37
        ;   XREF to: 0054de4d (CONDITIONAL_JUMP)  ; LAB_0054de4d
    PUSH 0x63f954                       ; 0054de39 | = "pushFlag"
    LEA EAX,[EDI + 0x510]               ; 0054de3e
    PUSH EAX                            ; 0054de44
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0054de45
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054de4a
    CMP dword ptr [0x00680cbc],0xa      ; 0054de4d | g_CPlatformClassVersion
        ;   Label: LAB_0054de4d
    JL 0x0054de6a                       ; 0054de54
        ;   XREF to: 0054de6a (CONDITIONAL_JUMP)  ; LAB_0054de6a
    PUSH 0x63f95d                       ; 0054de56 | = "recomputeFog"
    LEA EAX,[EDI + 0x514]               ; 0054de5b
    PUSH EAX                            ; 0054de61
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0054de62
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054de67
    CMP dword ptr [0x00680cbc],0xb      ; 0054de6a | g_CPlatformClassVersion
        ;   Label: LAB_0054de6a
    JGE 0x0054df5a                      ; 0054de71
        ;   XREF to: 0054df5a (CONDITIONAL_JUMP)  ; LAB_0054df5a
    ADD ESP,0xc                         ; 0054de77
    POP EBP                             ; 0054de7a
    POP EDI                             ; 0054de7b
    POP ESI                             ; 0054de7c
    POP EBX                             ; 0054de7d
    RET                                 ; 0054de7e
    PUSH 0x63f7fa                       ; 0054de7f | = "startPos"
        ;   Label: LAB_0054de7f
    LEA EAX,[EDI + 0x31c]               ; 0054de84
    PUSH EAX                            ; 0054de8a
    CALL core_actor.cpp_archiveVector_FUN_0040b340 ; 0054de8b
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054de90
    PUSH 0x63f803                       ; 0054de93 | = "origOrient"
    LEA EAX,[EDI + 0x334]               ; 0054de98
    PUSH EAX                            ; 0054de9e
    CALL core_actor.cpp_archiveQuaternion_FUN_0040b520 ; 0054de9f
        ;   XREF to: 0040b520 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveQuaternion_FUN_0040b520(CQuaternion4f * quat_ptr, char * property_type)
    ADD ESP,0x8                         ; 0054dea4
    PUSH 0x63f80e                       ; 0054dea7 | = "endPos"
    LEA EAX,[EDI + 0x328]               ; 0054deac
    PUSH EAX                            ; 0054deb2
    CALL core_actor.cpp_archiveVector_FUN_0040b340 ; 0054deb3
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054deb8
    PUSH 0x63f815                       ; 0054debb | = "endOrient"
    LEA EAX,[EDI + 0x344]               ; 0054dec0
    PUSH EAX                            ; 0054dec6
    CALL core_actor.cpp_archiveQuaternion_FUN_0040b520 ; 0054dec7
        ;   XREF to: 0040b520 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveQuaternion_FUN_0040b520(CQuaternion4f * quat_ptr, char * property_type)
    ADD ESP,0x8                         ; 0054decc
    JMP 0x0054dc82                      ; 0054decf
        ;   XREF to: 0054dc82 (UNCONDITIONAL_JUMP)  ; LAB_0054dc82
    MOV EAX,dword ptr [EDI + 0x2ec]     ; 0054ded4
        ;   Label: LAB_0054ded4
    MOV dword ptr [EDI + 0x2e8],EAX     ; 0054deda
    JMP 0x0054dce1                      ; 0054dee0
        ;   XREF to: 0054dce1 (UNCONDITIONAL_JUMP)  ; LAB_0054dce1
    PUSH 0x63f8df                       ; 0054dee5 | = "attachCount"
        ;   Label: LAB_0054dee5
    LEA EAX,[ESP + 0x4]                 ; 0054deea
    PUSH EAX                            ; 0054deee
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0054deef
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054def4
    CMP dword ptr [ESP],0xa             ; 0054def7
    JLE 0x0054df1f                      ; 0054defb
        ;   XREF to: 0054df1f (CONDITIONAL_JUMP)  ; LAB_0054df1f
    MOV EBP,0x63f8eb                    ; 0054defd | = "..\\core\\platfrm.cpp"
    MOV EAX,0x316                       ; 0054df02
    PUSH 0x63f8ff                       ; 0054df07 | = "CPlatform::archive - too many attache..."
    MOV dword ptr [0x02f0ca48],EBP      ; 0054df0c | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0054df12 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054df17
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054df1c
    MOV EDX,dword ptr [ESP]             ; 0054df1f
        ;   Label: LAB_0054df1f
    XOR ESI,ESI                         ; 0054df22
    TEST EDX,EDX                        ; 0054df24
    JLE 0x0054de30                      ; 0054df26
        ;   XREF to: 0054de30 (CONDITIONAL_JUMP)  ; LAB_0054de30
    MOV EBX,EDI                         ; 0054df2c
    PUSH 0x63f92e                       ; 0054df2e | = "attach actor"
        ;   Label: LAB_0054df2e
    LEA EAX,[ESP + 0x8]                 ; 0054df33
    PUSH EAX                            ; 0054df37
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 0054df38
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054df3d
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054df40
    MOV dword ptr [EBX + 0x51c],EAX     ; 0054df44
    INC ESI                             ; 0054df4a
    MOV ECX,dword ptr [ESP]             ; 0054df4b
    ADD EBX,0x34                        ; 0054df4e
    CMP ESI,ECX                         ; 0054df51
    JL 0x0054df2e                       ; 0054df53
        ;   XREF to: 0054df2e (CONDITIONAL_JUMP)  ; LAB_0054df2e
    JMP 0x0054de30                      ; 0054df55
        ;   XREF to: 0054de30 (UNCONDITIONAL_JUMP)  ; LAB_0054de30
    PUSH 0x63f96a                       ; 0054df5a | = "plotInShadowFlag"
        ;   Label: LAB_0054df5a
    ADD EDI,0x518                       ; 0054df5f
    PUSH EDI                            ; 0054df65
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0054df66
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054df6b
    ADD ESP,0xc                         ; 0054df6e
    POP EBP                             ; 0054df71
    POP EDI                             ; 0054df72
    POP ESI                             ; 0054df73
    POP EBX                             ; 0054df74
    RET                                 ; 0054df75

