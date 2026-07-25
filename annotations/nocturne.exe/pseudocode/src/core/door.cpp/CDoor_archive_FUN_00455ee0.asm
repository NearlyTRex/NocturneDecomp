; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_door_cpp_CDoor_archive_FUN_00455ee0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_0057d0ca
;   TerminatedCString s_doorType_0057d0d4
;   TerminatedCString s_doorSide_0057d0dd
;   TerminatedCString s_doorState_0057d0e6
;   TerminatedCString s_doorSwing_0057d0f0
;   TerminatedCString s_openEvent_0057d0fa
;   TerminatedCString s_closeEvent_0057d104
;   TerminatedCString s_openSound_0057d10f
;   TerminatedCString s_closeSound_0057d119
;   TerminatedCString s_keyMask_0057d124
;   TerminatedCString s_origPos_0057d12c
;   TerminatedCString s_origOrient_0057d134
;   TerminatedCString s_param_0057d13f
;   TerminatedCString s_maxParam_0057d145
;   TerminatedCString s_openSpeed_0057d14e
;   ... and 17 more
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_archiveRules_FUN_0040d110
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_archiveVector_FUN_0040c450
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455ee0
        ;   Label: core_door.cpp_CDoor_archive_FUN_00455ee0
    PUSH EDI                            ; 00455ee1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00455ee2
    PUSH EBX                            ; 00455ee6
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 00455ee7
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_archive_FUN_0040d2d0()
    ADD ESP,0x4                         ; 00455eec
    PUSH 0x57d0ca                       ; 00455eef | = "modelName"
    LEA EDI,[EBX + 0x150]               ; 00455ef4
    PUSH EDI                            ; 00455efa
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 00455efb
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00()
    ADD ESP,0x8                         ; 00455f00
    PUSH 0x57d0d4                       ; 00455f03 | = "doorType"
    LEA EDI,[EBX + 0x2d0]               ; 00455f08
    PUSH EDI                            ; 00455f0e
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00455f0f
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 00455f14
    PUSH 0x57d0dd                       ; 00455f17 | = "doorSide"
    LEA EDI,[EBX + 0x2d4]               ; 00455f1c
    PUSH EDI                            ; 00455f22
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00455f23
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 00455f28
    PUSH 0x57d0e6                       ; 00455f2b | = "doorState"
    LEA EDI,[EBX + 0x2d8]               ; 00455f30
    PUSH EDI                            ; 00455f36
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00455f37
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 00455f3c
    PUSH 0x57d0f0                       ; 00455f3f | = "doorSwing"
    LEA EDI,[EBX + 0x2dc]               ; 00455f44
    PUSH EDI                            ; 00455f4a
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00455f4b
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 00455f50
    PUSH 0x57d0fa                       ; 00455f53 | = "openEvent"
    LEA EDI,[EBX + 0x2e0]               ; 00455f58
    PUSH EDI                            ; 00455f5e
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00455f5f
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 00455f64
    PUSH 0x57d104                       ; 00455f67 | = "closeEvent"
    LEA EDI,[EBX + 0x344]               ; 00455f6c
    PUSH EDI                            ; 00455f72
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00455f73
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 00455f78
    PUSH 0x57d10f                       ; 00455f7b | = "openSound"
    LEA EDI,[EBX + 0x85c]               ; 00455f80
    PUSH EDI                            ; 00455f86
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00455f87
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 00455f8c
    PUSH 0x57d119                       ; 00455f8f | = "closeSound"
    LEA EDI,[EBX + 0x8c0]               ; 00455f94
    PUSH EDI                            ; 00455f9a
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00455f9b
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 00455fa0
    PUSH 0x57d124                       ; 00455fa3 | = "keyMask"
    LEA EDI,[EBX + 0x988]               ; 00455fa8
    PUSH EDI                            ; 00455fae
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00455faf
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 00455fb4
    PUSH 0x57d12c                       ; 00455fb7 | = "origPos"
    LEA EDI,[EBX + 0x98c]               ; 00455fbc
    PUSH EDI                            ; 00455fc2
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 00455fc3
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040c450()
    ADD ESP,0x8                         ; 00455fc8
    PUSH 0x57d134                       ; 00455fcb | = "origOrient"
    LEA EDI,[EBX + 0x998]               ; 00455fd0
    PUSH EDI                            ; 00455fd6
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 00455fd7
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040c450()
    ADD ESP,0x8                         ; 00455fdc
    PUSH 0x57d13f                       ; 00455fdf | = "param"
    LEA EDI,[EBX + 0x9a4]               ; 00455fe4
    PUSH EDI                            ; 00455fea
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00455feb
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 00455ff0
    PUSH 0x57d145                       ; 00455ff3 | = "maxParam"
    LEA EDI,[EBX + 0x9a8]               ; 00455ff8
    PUSH EDI                            ; 00455ffe
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00455fff
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 00456004
    PUSH 0x57d14e                       ; 00456007 | = "openSpeed"
    LEA EDI,[EBX + 0x9ac]               ; 0045600c
    PUSH EDI                            ; 00456012
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00456013
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 00456018
    PUSH 0x57d158                       ; 0045601b | = "closeSpeed"
    LEA EDI,[EBX + 0x9b0]               ; 00456020
    PUSH EDI                            ; 00456026
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00456027
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    MOV EDX,dword ptr [0x005ae690]      ; 0045602c | INT_005ae690
    ADD ESP,0x8                         ; 00456032
    CMP EDX,0x2                         ; 00456035
    JGE 0x00456133                      ; 00456038
        ;   XREF to: 00456133 (CONDITIONAL_JUMP)  ; LAB_00456133
    CMP dword ptr [0x005ae690],0x3      ; 0045603e | INT_005ae690
        ;   Label: LAB_0045603e
    JL 0x0045606f                       ; 00456045
        ;   XREF to: 0045606f (CONDITIONAL_JUMP)  ; LAB_0045606f
    PUSH 0x57d16e                       ; 00456047 | = "eventToTriggerWhenOpen"
    LEA EDI,[EBX + 0x3a8]               ; 0045604c
    PUSH EDI                            ; 00456052
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00456053
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 00456058
    PUSH 0x57d185                       ; 0045605b | = "eventToTriggerWhenClosed"
    LEA EDI,[EBX + 0x40c]               ; 00456060
    PUSH EDI                            ; 00456066
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00456067
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0045606c
    CMP dword ptr [0x005ae690],0x4      ; 0045606f | INT_005ae690
        ;   Label: LAB_0045606f
    JL 0x0045608c                       ; 00456076
        ;   XREF to: 0045608c (CONDITIONAL_JUMP)  ; LAB_0045608c
    PUSH 0x57d19e                       ; 00456078 | = "oneShot"
    LEA EDI,[EBX + 0x9c0]               ; 0045607d
    PUSH EDI                            ; 00456083
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00456084
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 00456089
    MOV EDI,dword ptr [0x005ae690]      ; 0045608c | INT_005ae690
        ;   Label: LAB_0045608c
    CMP EDI,0x7                         ; 00456092
    JL 0x0045614c                       ; 00456095
        ;   XREF to: 0045614c (CONDITIONAL_JUMP)  ; LAB_0045614c
    PUSH 0x57d1a6                       ; 0045609b | = "openRules"
    LEA EDI,[EBX + 0x470]               ; 004560a0
    PUSH EDI                            ; 004560a6
    CALL core_actor.cpp_archiveRules_FUN_0040d110 ; 004560a7
        ;   XREF to: 0040d110 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveRules_FUN_0040d110()
    ADD ESP,0x8                         ; 004560ac
    CMP dword ptr [0x005ae690],0x6      ; 004560af | INT_005ae690
        ;   Label: LAB_004560af
    JL 0x004560cc                       ; 004560b6
        ;   XREF to: 004560cc (CONDITIONAL_JUMP)  ; LAB_004560cc
    PUSH 0x57d1c5                       ; 004560b8 | = "blockVirtualDirectorFlag"
    LEA EDI,[EBX + 0x9c8]               ; 004560bd
    PUSH EDI                            ; 004560c3
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004560c4
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004560c9
    CMP dword ptr [0x005ae690],0x8      ; 004560cc | INT_005ae690
        ;   Label: LAB_004560cc
    JL 0x004560e9                       ; 004560d3
        ;   XREF to: 004560e9 (CONDITIONAL_JUMP)  ; LAB_004560e9
    PUSH 0x57d1de                       ; 004560d5 | = "plotAsBoxInShadow"
    LEA EDI,[EBX + 0x9cc]               ; 004560da
    PUSH EDI                            ; 004560e0
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004560e1
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004560e6
    CMP dword ptr [0x005ae690],0x9      ; 004560e9 | INT_005ae690
        ;   Label: LAB_004560e9
    JL 0x00456106                       ; 004560f0
        ;   XREF to: 00456106 (CONDITIONAL_JUMP)  ; LAB_00456106
    PUSH 0x57d1f0                       ; 004560f2 | = "allowedSides"
    LEA EDI,[EBX + 0x9d0]               ; 004560f7
    PUSH EDI                            ; 004560fd
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004560fe
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 00456103
    CMP dword ptr [0x005ae690],0xa      ; 00456106 | INT_005ae690
        ;   Label: LAB_00456106
    JL 0x00456123                       ; 0045610d
        ;   XREF to: 00456123 (CONDITIONAL_JUMP)  ; LAB_00456123
    PUSH 0x57d1fd                       ; 0045610f | = "allowBulletHoles"
    LEA EDI,[EBX + 0x9d4]               ; 00456114
    PUSH EDI                            ; 0045611a
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0045611b
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 00456120
    CMP dword ptr [0x005ae690],0xb      ; 00456123 | INT_005ae690
        ;   Label: LAB_00456123
    JGE 0x004561b8                      ; 0045612a
        ;   XREF to: 004561b8 (CONDITIONAL_JUMP)  ; LAB_004561b8
    POP EDI                             ; 00456130
    POP EBX                             ; 00456131
    RET                                 ; 00456132
    PUSH 0x57d163                       ; 00456133 | = "groundType"
        ;   Label: LAB_00456133
    LEA EDI,[EBX + 0x2cc]               ; 00456138
    PUSH EDI                            ; 0045613e
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0045613f
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 00456144
    JMP 0x0045603e                      ; 00456147
        ;   XREF to: 0045603e (UNCONDITIONAL_JUMP)  ; LAB_0045603e
    CMP EDI,0x5                         ; 0045614c
        ;   Label: LAB_0045614c
    JL 0x004560af                       ; 0045614f
        ;   XREF to: 004560af (CONDITIONAL_JUMP)  ; LAB_004560af
    PUSH 0x57d1b0                       ; 00456155 | = "scriptOpenEvent"
    LEA EDI,[EBX + 0x668]               ; 0045615a
    PUSH EDI                            ; 00456160
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00456161
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    MOV AH,byte ptr [EBX + 0x668]       ; 00456166
    ADD ESP,0x8                         ; 0045616c
    TEST AH,AH                          ; 0045616f
    JNZ 0x00456182                      ; 00456171
        ;   XREF to: 00456182 (CONDITIONAL_JUMP)  ; LAB_00456182
    MOV dword ptr [EBX + 0x470],0x0     ; 00456173
    JMP 0x004560af                      ; 0045617d
        ;   XREF to: 004560af (UNCONDITIONAL_JUMP)  ; LAB_004560af
    PUSH ESI                            ; 00456182
        ;   Label: LAB_00456182
    MOV ESI,0x57d1c0                    ; 00456183 | = "true"
    LEA EDI,[EBX + 0x474]               ; 00456188
    PUSH EDI                            ; 0045618e
    MOV AL,byte ptr [ESI]               ; 0045618f | = "true" | s_ue_0057d1c0+2
        ;   Label: LAB_0045618f
    MOV byte ptr [EDI],AL               ; 00456191
    CMP AL,0x0                          ; 00456193
    JZ 0x004561a7                       ; 00456195
        ;   XREF to: 004561a7 (CONDITIONAL_JUMP)  ; LAB_004561a7
    MOV AL,byte ptr [ESI + 0x1]         ; 00456197 | s_rue_0057d1c0+1 | s_e_0057d1c0+3
    ADD ESI,0x2                         ; 0045619a
    MOV byte ptr [EDI + 0x1],AL         ; 0045619d
    ADD EDI,0x2                         ; 004561a0
    CMP AL,0x0                          ; 004561a3
    JNZ 0x0045618f                      ; 004561a5
        ;   XREF to: 0045618f (CONDITIONAL_JUMP)  ; LAB_0045618f
    POP EDI                             ; 004561a7
        ;   Label: LAB_004561a7
    MOV dword ptr [EBX + 0x470],0x1     ; 004561a8
    POP ESI                             ; 004561b2
    JMP 0x004560af                      ; 004561b3
        ;   XREF to: 004560af (UNCONDITIONAL_JUMP)  ; LAB_004560af
    PUSH 0x57d20e                       ; 004561b8 | = "lockedSound"
        ;   Label: LAB_004561b8
    ADD EBX,0x924                       ; 004561bd
    PUSH EBX                            ; 004561c3
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004561c4
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 004561c9
    POP EDI                             ; 004561cc
    POP EBX                             ; 004561cd
    RET                                 ; 004561ce

