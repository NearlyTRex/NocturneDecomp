; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_CPlatform_archive_FUN_004f6fa0(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_conveyor.cpp_CConveyor_archive_FUN_0043b310 at 0043b316
;
; Referenced Globals:
;   TerminatedCString s_modelName_0058d785
;   TerminatedCString s_toStartEvent_0058d78f
;   TerminatedCString s_toEndEvent_0058d79c
;   TerminatedCString s_stopEvent_0058d7a7
;   TerminatedCString s_startSound_0058d7b1
;   TerminatedCString s_stopSound_0058d7bc
;   TerminatedCString s_activeSound_0058d7c6
;   TerminatedCString s_courseFilename_0058d7d2
;   TerminatedCString s_startPos_0058d7e1
;   TerminatedCString s_origOrient_0058d7ea
;   TerminatedCString s_endPos_0058d7f5
;   TerminatedCString s_endOrient_0058d7fc
;   TerminatedCString s_state_0058d806
;   TerminatedCString s_param_0058d80c
;   TerminatedCString s_travelTimeToStart_0058d812
;   ... and 22 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_archiveQuaternion_FUN_0040c630
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_archiveVector_FUN_0040c450
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6fa0
        ;   Label: core_platfrm.cpp_CPlatform_archive_FUN_004f6fa0
    PUSH ESI                            ; 004f6fa1
    PUSH EDI                            ; 004f6fa2
    PUSH EBP                            ; 004f6fa3
    SUB ESP,0xc                         ; 004f6fa4
    MOV EDI,dword ptr [ESP + 0x20]      ; 004f6fa7
    PUSH EDI                            ; 004f6fab
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 004f6fac
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040d2d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f6fb1
    PUSH 0x58d785                       ; 004f6fb4 | = "modelName"
    LEA EAX,[EDI + 0x150]               ; 004f6fb9
    PUSH EAX                            ; 004f6fbf
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 004f6fc0
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f6fc5
    PUSH 0x58d78f                       ; 004f6fc8 | = "toStartEvent"
    LEA EAX,[EDI + 0x34c]               ; 004f6fcd
    PUSH EAX                            ; 004f6fd3
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004f6fd4
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004f6fd9
    PUSH 0x58d79c                       ; 004f6fdc | = "toEndEvent"
    LEA EAX,[EDI + 0x3b0]               ; 004f6fe1
    PUSH EAX                            ; 004f6fe7
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004f6fe8
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004f6fed
    PUSH 0x58d7a7                       ; 004f6ff0 | = "stopEvent"
    LEA EAX,[EDI + 0x414]               ; 004f6ff5
    PUSH EAX                            ; 004f6ffb
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004f6ffc
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004f7001
    PUSH 0x58d7b1                       ; 004f7004 | = "startSound"
    LEA EAX,[EDI + 0x478]               ; 004f7009
    PUSH EAX                            ; 004f700f
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004f7010
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004f7015
    PUSH 0x58d7bc                       ; 004f7018 | = "stopSound"
    LEA EAX,[EDI + 0x48c]               ; 004f701d
    PUSH EAX                            ; 004f7023
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004f7024
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004f7029
    PUSH 0x58d7c6                       ; 004f702c | = "activeSound"
    LEA EAX,[EDI + 0x4a0]               ; 004f7031
    PUSH EAX                            ; 004f7037
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004f7038
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004f703d
    PUSH 0x58d7d2                       ; 004f7040 | = "courseFilename"
    LEA EAX,[EDI + 0x2e8]               ; 004f7045
    PUSH EAX                            ; 004f704b
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004f704c
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    MOV AH,byte ptr [EDI + 0x2e8]       ; 004f7051
    ADD ESP,0x8                         ; 004f7057
    TEST AH,AH                          ; 004f705a
    JZ 0x004f725f                       ; 004f705c
        ;   XREF to: 004f725f (CONDITIONAL_JUMP)  ; LAB_004f725f
    PUSH 0x58d806                       ; 004f7062 | = "state"
        ;   Label: LAB_004f7062
    LEA EAX,[EDI + 0x2cc]               ; 004f7067
    PUSH EAX                            ; 004f706d
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004f706e
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f7073
    PUSH 0x58d80c                       ; 004f7076 | = "param"
    LEA EAX,[EDI + 0x2d4]               ; 004f707b
    PUSH EAX                            ; 004f7081
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004f7082
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f7087
    PUSH 0x58d812                       ; 004f708a | = "travelTimeToStart"
    LEA EAX,[EDI + 0x2e4]               ; 004f708f
    PUSH EAX                            ; 004f7095
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004f7096
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x005be19c]      ; 004f709b | INT_005be19c
    ADD ESP,0x8                         ; 004f70a1
    CMP EDX,0x7                         ; 004f70a4
    JL 0x004f72b4                       ; 004f70a7
        ;   XREF to: 004f72b4 (CONDITIONAL_JUMP)  ; LAB_004f72b4
    PUSH 0x58d824                       ; 004f70ad | = "travelTimeToEnd"
    LEA EAX,[EDI + 0x2e0]               ; 004f70b2
    PUSH EAX                            ; 004f70b8
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004f70b9
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f70be
    PUSH 0x58d834                       ; 004f70c1 | = "groundType"
        ;   Label: LAB_004f70c1
    LEA EAX,[EDI + 0x2d0]               ; 004f70c6
    PUSH EAX                            ; 004f70cc
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004f70cd
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    MOV ECX,dword ptr [0x005be19c]      ; 004f70d2 | INT_005be19c
    ADD ESP,0x8                         ; 004f70d8
    CMP ECX,0x2                         ; 004f70db
    JL 0x004f70f4                       ; 004f70de
        ;   XREF to: 004f70f4 (CONDITIONAL_JUMP)  ; LAB_004f70f4
    PUSH 0x58d83f                       ; 004f70e0 | = "oneShot"
    LEA EAX,[EDI + 0x4b8]               ; 004f70e5
    PUSH EAX                            ; 004f70eb
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004f70ec
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f70f1
    CMP dword ptr [0x005be19c],0x3      ; 004f70f4 | INT_005be19c
        ;   Label: LAB_004f70f4
    JL 0x004f7111                       ; 004f70fb
        ;   XREF to: 004f7111 (CONDITIONAL_JUMP)  ; LAB_004f7111
    PUSH 0x58d847                       ; 004f70fd | = "blockVirtualDirectorFlag"
    LEA EAX,[EDI + 0x4bc]               ; 004f7102
    PUSH EAX                            ; 004f7108
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004f7109
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f710e
    CMP dword ptr [0x005be19c],0x4      ; 004f7111 | INT_005be19c
        ;   Label: LAB_004f7111
    JL 0x004f712e                       ; 004f7118
        ;   XREF to: 004f712e (CONDITIONAL_JUMP)  ; LAB_004f712e
    PUSH 0x58d860                       ; 004f711a | = "renderInBackgroundWhenNotMovingFlag"
    LEA EAX,[EDI + 0x4c0]               ; 004f711f
    PUSH EAX                            ; 004f7125
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004f7126
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f712b
    CMP dword ptr [0x005be19c],0x5      ; 004f712e | INT_005be19c
        ;   Label: LAB_004f712e
    JL 0x004f714b                       ; 004f7135
        ;   XREF to: 004f714b (CONDITIONAL_JUMP)  ; LAB_004f714b
    PUSH 0x58d884                       ; 004f7137 | = "cameraWhileMoving"
    LEA EAX,[EDI + 0x4c4]               ; 004f713c
    PUSH EAX                            ; 004f7142
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004f7143
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004f7148
    CMP dword ptr [0x005be19c],0x6      ; 004f714b | INT_005be19c
        ;   Label: LAB_004f714b
    JL 0x004f7168                       ; 004f7152
        ;   XREF to: 004f7168 (CONDITIONAL_JUMP)  ; LAB_004f7168
    PUSH 0x58d896                       ; 004f7154 | = "plotAsBoxInShadow"
    LEA EAX,[EDI + 0x504]               ; 004f7159
    PUSH EAX                            ; 004f715f
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004f7160
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f7165
    CMP dword ptr [0x005be19c],0x8      ; 004f7168 | INT_005be19c
        ;   Label: LAB_004f7168
    JL 0x004f7210                       ; 004f716f
        ;   XREF to: 004f7210 (CONDITIONAL_JUMP)  ; LAB_004f7210
    PUSH 0x58d8a8                       ; 004f7175 | = "goalParam"
    LEA EAX,[EDI + 0x2d8]               ; 004f717a
    PUSH EAX                            ; 004f7180
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004f7181
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f7186
    PUSH 0x58d8b2                       ; 004f7189 | = "currentMovementRate"
    LEA EAX,[EDI + 0x2dc]               ; 004f718e
    PUSH EAX                            ; 004f7194
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004f7195
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    MOV ECX,dword ptr [0x00763e88]      ; 004f719a | DAT_00763e88
    ADD ESP,0x8                         ; 004f71a0
    CMP ECX,0x1                         ; 004f71a3
    JZ 0x004f72c5                       ; 004f71a6
        ;   XREF to: 004f72c5 (CONDITIONAL_JUMP)  ; LAB_004f72c5
    MOV EAX,EDI                         ; 004f71ac
    XOR EBX,EBX                         ; 004f71ae
    LEA ESI,[EDI + 0x208]               ; 004f71b0
    MOV dword ptr [ESP + 0x8],EBX       ; 004f71b6
    CMP dword ptr [EAX + 0x514],0x0     ; 004f71ba
        ;   Label: LAB_004f71ba
    JZ 0x004f71c7                       ; 004f71c1
        ;   XREF to: 004f71c7 (CONDITIONAL_JUMP)  ; LAB_004f71c7
    INC dword ptr [ESP + 0x8]           ; 004f71c3
    ADD EAX,0x34                        ; 004f71c7
        ;   Label: LAB_004f71c7
    CMP EAX,ESI                         ; 004f71ca
    JNZ 0x004f71ba                      ; 004f71cc
        ;   XREF to: 004f71ba (CONDITIONAL_JUMP)  ; LAB_004f71ba
    PUSH 0x58d922                       ; 004f71ce | = "attachCount"
    LEA EAX,[ESP + 0xc]                 ; 004f71d3
    PUSH EAX                            ; 004f71d7
    LEA EBP,[EDI + 0x514]               ; 004f71d8
    XOR EBX,EBX                         ; 004f71de
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004f71e0
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    MOV ESI,EDI                         ; 004f71e5
    ADD ESP,0x8                         ; 004f71e7
    IMUL EAX,EBX,0x34                   ; 004f71ea
        ;   Label: LAB_004f71ea
    CMP dword ptr [ESI + 0x514],0x0     ; 004f71ed
    JZ 0x004f7206                       ; 004f71f4
        ;   XREF to: 004f7206 (CONDITIONAL_JUMP)  ; LAB_004f7206
    PUSH 0x58d92e                       ; 004f71f6 | = "attach actor"
    ADD EAX,EBP                         ; 004f71fb
    PUSH EAX                            ; 004f71fd
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 004f71fe
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040c980(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f7203
    INC EBX                             ; 004f7206
        ;   Label: LAB_004f7206
    ADD ESI,0x34                        ; 004f7207
    CMP EBX,0xa                         ; 004f720a
    JL 0x004f71ea                       ; 004f720d
        ;   XREF to: 004f71ea (CONDITIONAL_JUMP)  ; LAB_004f71ea
    NOP                                 ; 004f720f
    CMP dword ptr [0x005be19c],0x9      ; 004f7210 | INT_005be19c
        ;   Label: LAB_004f7210
    JL 0x004f722d                       ; 004f7217
        ;   XREF to: 004f722d (CONDITIONAL_JUMP)  ; LAB_004f722d
    PUSH 0x58d93b                       ; 004f7219 | = "pushFlag"
    LEA EAX,[EDI + 0x508]               ; 004f721e
    PUSH EAX                            ; 004f7224
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004f7225
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f722a
    CMP dword ptr [0x005be19c],0xa      ; 004f722d | INT_005be19c
        ;   Label: LAB_004f722d
    JL 0x004f724a                       ; 004f7234
        ;   XREF to: 004f724a (CONDITIONAL_JUMP)  ; LAB_004f724a
    PUSH 0x58d944                       ; 004f7236 | = "recomputeFog"
    LEA EAX,[EDI + 0x50c]               ; 004f723b
    PUSH EAX                            ; 004f7241
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004f7242
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f7247
    CMP dword ptr [0x005be19c],0xb      ; 004f724a | INT_005be19c
        ;   Label: LAB_004f724a
    JGE 0x004f733a                      ; 004f7251
        ;   XREF to: 004f733a (CONDITIONAL_JUMP)  ; LAB_004f733a
    ADD ESP,0xc                         ; 004f7257
    POP EBP                             ; 004f725a
    POP EDI                             ; 004f725b
    POP ESI                             ; 004f725c
    POP EBX                             ; 004f725d
    RET                                 ; 004f725e
    PUSH 0x58d7e1                       ; 004f725f | = "startPos"
        ;   Label: LAB_004f725f
    LEA EAX,[EDI + 0x314]               ; 004f7264
    PUSH EAX                            ; 004f726a
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 004f726b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040c450(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f7270
    PUSH 0x58d7ea                       ; 004f7273 | = "origOrient"
    LEA EAX,[EDI + 0x32c]               ; 004f7278
    PUSH EAX                            ; 004f727e
    CALL core_actor.cpp_archiveQuaternion_FUN_0040c630 ; 004f727f
        ;   XREF to: 0040c630 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveQuaternion_FUN_0040c630(CQuaternion4f * quat_ptr, char * property_type)
    ADD ESP,0x8                         ; 004f7284
    PUSH 0x58d7f5                       ; 004f7287 | = "endPos"
    LEA EAX,[EDI + 0x320]               ; 004f728c
    PUSH EAX                            ; 004f7292
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 004f7293
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040c450(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f7298
    PUSH 0x58d7fc                       ; 004f729b | = "endOrient"
    LEA EAX,[EDI + 0x33c]               ; 004f72a0
    PUSH EAX                            ; 004f72a6
    CALL core_actor.cpp_archiveQuaternion_FUN_0040c630 ; 004f72a7
        ;   XREF to: 0040c630 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveQuaternion_FUN_0040c630(CQuaternion4f * quat_ptr, char * property_type)
    ADD ESP,0x8                         ; 004f72ac
    JMP 0x004f7062                      ; 004f72af
        ;   XREF to: 004f7062 (UNCONDITIONAL_JUMP)  ; LAB_004f7062
    MOV EAX,dword ptr [EDI + 0x2e4]     ; 004f72b4
        ;   Label: LAB_004f72b4
    MOV dword ptr [EDI + 0x2e0],EAX     ; 004f72ba
    JMP 0x004f70c1                      ; 004f72c0
        ;   XREF to: 004f70c1 (UNCONDITIONAL_JUMP)  ; LAB_004f70c1
    PUSH 0x58d8c6                       ; 004f72c5 | = "attachCount"
        ;   Label: LAB_004f72c5
    LEA EAX,[ESP + 0x4]                 ; 004f72ca
    PUSH EAX                            ; 004f72ce
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004f72cf
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f72d4
    CMP dword ptr [ESP],0xa             ; 004f72d7
    JLE 0x004f72ff                      ; 004f72db
        ;   XREF to: 004f72ff (CONDITIONAL_JUMP)  ; LAB_004f72ff
    MOV EBP,0x58d8d2                    ; 004f72dd | = "..\\core\\platfrm.cpp"
    MOV EAX,0x316                       ; 004f72e2
    PUSH 0x58d8e6                       ; 004f72e7 | = "CPlatform::archive - too many attache..."
    MOV dword ptr [0x01cc4800],EBP      ; 004f72ec | g_CurrentFilename
    MOV [0x01cc4804],EAX                ; 004f72f2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004f72f7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004f72fc
    MOV EDX,dword ptr [ESP]             ; 004f72ff
        ;   Label: LAB_004f72ff
    XOR ESI,ESI                         ; 004f7302
    TEST EDX,EDX                        ; 004f7304
    JLE 0x004f7210                      ; 004f7306
        ;   XREF to: 004f7210 (CONDITIONAL_JUMP)  ; LAB_004f7210
    MOV EBX,EDI                         ; 004f730c
    PUSH 0x58d915                       ; 004f730e | = "attach actor"
        ;   Label: LAB_004f730e
    LEA EAX,[ESP + 0x8]                 ; 004f7313
    PUSH EAX                            ; 004f7317
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 004f7318
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040c980(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f731d
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f7320
    MOV dword ptr [EBX + 0x514],EAX     ; 004f7324
    INC ESI                             ; 004f732a
    MOV ECX,dword ptr [ESP]             ; 004f732b
    ADD EBX,0x34                        ; 004f732e
    CMP ESI,ECX                         ; 004f7331
    JL 0x004f730e                       ; 004f7333
        ;   XREF to: 004f730e (CONDITIONAL_JUMP)  ; LAB_004f730e
    JMP 0x004f7210                      ; 004f7335
        ;   XREF to: 004f7210 (UNCONDITIONAL_JUMP)  ; LAB_004f7210
    PUSH 0x58d951                       ; 004f733a | = "plotInShadowFlag"
        ;   Label: LAB_004f733a
    ADD EDI,0x510                       ; 004f733f
    PUSH EDI                            ; 004f7345
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004f7346
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f734b
    ADD ESP,0xc                         ; 004f734e
    POP EBP                             ; 004f7351
    POP EDI                             ; 004f7352
    POP ESI                             ; 004f7353
    POP EBX                             ; 004f7354
    RET                                 ; 004f7355

