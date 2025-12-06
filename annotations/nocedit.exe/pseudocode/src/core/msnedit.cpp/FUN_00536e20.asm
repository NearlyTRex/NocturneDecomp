; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_msnedit.cpp_FUN_00536e20()
;
; Local Variables:
; undefined8       Stack[-0x100]:8  local_100
; undefined4       Stack[-0xf8]:4  local_f8
; undefined1       Stack[-0xf4]:1  local_f4
; undefined8       Stack[-0x2c]:8  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_msnedit.cpp_FUN_0053c4f0 at 0053c6a7
;
; Referenced Globals:
;   TerminatedCString s_s_s_0063b6f4
;   TerminatedCString s_X_0063b6fc
;   TerminatedCString s_s_6_2f_0063b700
;   TerminatedCString s_Enter_frame_number_0063b706
;   undefined4 DAT_0063b719
;   undefined4 DAT_0063b71e
;   undefined4 DAT_0063b722
;   undefined4 DAT_0063b727
;   undefined4 DAT_0063b72c
;   undefined4 DAT_0063b730
;   undefined4 DAT_0063b73c
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CEditorTools g_CEditorToolsPtr
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_getCurrentStateName_FUN_0052dcf0
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
;   core_msnedit.cpp_FUN_00536cd0
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
;   crt_math.c_ceil_FUN_006001b2
;   crt_math.c_floor_FUN_005feb90
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_fillRectWithBorder_FUN_00403200
;   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00536e20
        ;   Label: core_msnedit.cpp_FUN_00536e20
    PUSH ESI                            ; 00536e21
    PUSH EDI                            ; 00536e22
    PUSH EBP                            ; 00536e23
    MOV EBP,ESP                         ; 00536e24
    SUB ESP,0xe8                        ; 00536e26
    AND ESP,0xfffffff8                  ; 00536e2c
    MOV EDI,dword ptr [0x0067d550]      ; 00536e2f | CDemonMission * g_CDemonMissionPtr
    XOR EDX,EDX                         ; 00536e35
    MOV ECX,dword ptr [EDI + 0x28]      ; 00536e37 | DAT_02f33768
    MOV dword ptr [0x02f7c538],EDX      ; 00536e3a | undefined4 DAT_02f7c538
    TEST ECX,ECX                        ; 00536e40
    JZ 0x005371ef                       ; 00536e42 | LAB_005371ef
        ;   XREF to: 005371ef (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x02f7c52c]      ; 00536e48 | undefined4 DAT_02f7c52c
    TEST EBX,EBX                        ; 00536e4e
    JL 0x005371ef                       ; 00536e50 | LAB_005371ef
        ;   XREF to: 005371ef (CONDITIONAL_JUMP)
    CMP EBX,dword ptr [0x02f7a028]      ; 00536e56 | DAT_02f7a028
    JGE 0x005371ef                      ; 00536e5c | LAB_005371ef
        ;   XREF to: 005371ef (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 00536e62
    SHL EBX,0x4                         ; 00536e64
    SUB EBX,EAX                         ; 00536e67
    SHL EBX,0x2                         ; 00536e69
    SUB EBX,EAX                         ; 00536e6c
    SHL EBX,0x2                         ; 00536e6e
    CMP dword ptr [EBX + 0x2f7a02c],0xd ; 00536e71 | DAT_02f7a02c
    JNZ 0x005371ef                      ; 00536e78 | LAB_005371ef
        ;   XREF to: 005371ef (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EBX + 0x2f7a094] ; 00536e7e | DAT_02f7a094
    TEST ESI,ESI                        ; 00536e84
    JZ 0x005371ef                       ; 00536e86 | LAB_005371ef
        ;   XREF to: 005371ef (CONDITIONAL_JUMP)
    MOV ECX,0x9b                        ; 00536e8c
    MOV EDX,0x1                         ; 00536e91
    MOV EAX,dword ptr [EDI + 0x20]      ; 00536e96 | DAT_02f33760
    MOV EBX,dword ptr [EDI + 0x20]      ; 00536e99 | DAT_02f33760
    MOV dword ptr [ESP + 0xe4],ECX      ; 00536e9c
    SUB EBX,0x38                        ; 00536ea3
    MOV EDI,dword ptr [EDI + 0x20]      ; 00536ea6 | DAT_02f33760
    SUB EAX,EDX                         ; 00536ea9
    SUB EDI,0x33                        ; 00536eab
    MOV ECX,0x4                         ; 00536eae
    MOV dword ptr [ESP + 0xd8],EDI      ; 00536eb3
    MOV EDI,dword ptr [0x02cf6a8c]      ; 00536eba | int g_MouseX
    MOV dword ptr [ESP + 0xd4],ECX      ; 00536ec0
    CMP EDI,EDX                         ; 00536ec7
    JL 0x00536ee7                       ; 00536ec9 | LAB_00536ee7
        ;   XREF to: 00536ee7 (CONDITIONAL_JUMP)
    CMP EDI,0x9b                        ; 00536ecb
    JG 0x00536ee7                       ; 00536ed1 | LAB_00536ee7
        ;   XREF to: 00536ee7 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x02cf6a90]      ; 00536ed3 | int g_MouseY
    CMP EBX,EDI                         ; 00536ed9
    JG 0x00536ee7                       ; 00536edb | LAB_00536ee7
        ;   XREF to: 00536ee7 (CONDITIONAL_JUMP)
    CMP EAX,EDI                         ; 00536edd
    JL 0x00536ee7                       ; 00536edf | LAB_00536ee7
        ;   XREF to: 00536ee7 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02f7c538],EDX      ; 00536ee1 | undefined4 DAT_02f7c538
    PUSH 0xff                           ; 00536ee7
        ;   Label: LAB_00536ee7
    PUSH 0x0                            ; 00536eec
    PUSH EAX                            ; 00536eee
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00536eef
    PUSH EAX                            ; 00536ef6
    PUSH EBX                            ; 00536ef7
    PUSH EDX                            ; 00536ef8
    CALL engine_2d.c_fillRectWithBorder_FUN_00403200 ; 00536ef9 | void engine_2d.c_fillRectWithBorder_FUN_00403200(int x1, int y1, int x2, int y2, ...)
        ;   XREF to: 00403200 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00536efe
    PUSH ESI                            ; 00536f01
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00536f02 | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    FLD float ptr [ESI + 0x8]           ; 00536f07
    ADD ESP,0x4                         ; 00536f0a
    MOV EBX,EAX                         ; 00536f0d
    MOV EDI,EAX                         ; 00536f0f
    PUSH ESI                            ; 00536f11
    FSTP float ptr [ESP + 0x4]          ; 00536f12
    CALL core_motion.cpp_CMotionController_getCurrentStateName_FUN_0052dcf0 ; 00536f16 | char * core_motion.cpp_CMotionController_getCurrentStateName_FUN_0052dcf0(CMotionController * this_ptr)
        ;   XREF to: 0052dcf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00536f1b
    PUSH EAX                            ; 00536f1e
    PUSH EBX                            ; 00536f1f
    PUSH 0x63b6f4                       ; 00536f20 | = "%s (%s)" | s_s_s_0063b6f4 = %s (%s)
    LEA EAX,[ESP + 0x10]                ; 00536f25
    PUSH EAX                            ; 00536f29
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00536f2a | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00536f2f
    PUSH 0x0                            ; 00536f32
    PUSH 0x1                            ; 00536f34
    MOV EDX,dword ptr [ESP + 0xe0]      ; 00536f36
    PUSH EDX                            ; 00536f3d
    MOV ECX,dword ptr [ESP + 0xe0]      ; 00536f3e
    PUSH ECX                            ; 00536f45
    LEA EAX,[ESP + 0x14]                ; 00536f46
    PUSH EAX                            ; 00536f4a
    CALL core_msnedit.cpp_FUN_00536cd0  ; 00536f4b | undefined core_msnedit.cpp_FUN_00536cd0()
        ;   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00536f50
    TEST EAX,EAX                        ; 00536f53
    JZ 0x00536f83                       ; 00536f55 | LAB_00536f83
        ;   XREF to: 00536f83 (CONDITIONAL_JUMP)
    MOV EAX,[0x0067d550]                ; 00536f57 | CDemonMission * g_CDemonMissionPtr
    MOV EBX,dword ptr [EAX + 0x28]      ; 00536f5c | DAT_02f33768
    MOV EAX,[0x02f7c52c]                ; 00536f5f | undefined4 DAT_02f7c52c
    PUSH EBX                            ; 00536f64
    MOV EBX,EAX                         ; 00536f65
    SHL EBX,0x4                         ; 00536f67
    SUB EBX,EAX                         ; 00536f6a
    SHL EBX,0x2                         ; 00536f6c
    SUB EBX,EAX                         ; 00536f6f
    SHL EBX,0x2                         ; 00536f71
    ADD EBX,0x2f7a02c                   ; 00536f74 | DAT_02f7a02c
    PUSH EBX                            ; 00536f7a
    CALL core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 ; 00536f7b | int core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0(CActorProperty * this_ptr, CDemonActor * actor)
        ;   XREF to: 0040eed0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00536f80
    PUSH 0x0                            ; 00536f83
        ;   Label: LAB_00536f83
    PUSH 0x1                            ; 00536f85
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00536f87
    PUSH EAX                            ; 00536f8e
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00536f8f
    SUB EAX,0x11                        ; 00536f96
    PUSH EAX                            ; 00536f99
    PUSH 0x63b6fc                       ; 00536f9a | = " X " | s_X_0063b6fc =  X
    CALL core_msnedit.cpp_FUN_00536cd0  ; 00536f9f | undefined core_msnedit.cpp_FUN_00536cd0()
        ;   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00536fa4
    TEST EAX,EAX                        ; 00536fa7
    JZ 0x00536fb5                       ; 00536fa9 | LAB_00536fb5
        ;   XREF to: 00536fb5 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02f7c52c],0xffffffff ; 00536fab | undefined4 DAT_02f7c52c
    FLD float ptr [ESP]                 ; 00536fb5
        ;   Label: LAB_00536fb5
    SUB ESP,0x8                         ; 00536fb8
    FSTP double ptr [ESP]               ; 00536fbb
    PUSH 0x63b700                       ; 00536fbe | = "%6.2f" | s_s_6_2f_0063b700 = %6.2f
    LEA EAX,[ESP + 0x10]                ; 00536fc3
    PUSH EAX                            ; 00536fc7
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00536fc8 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00536fcd
    PUSH 0x0                            ; 00536fd0
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00536fd2
    PUSH 0x1                            ; 00536fd9
    ADD EAX,0x10                        ; 00536fdb
    PUSH EAX                            ; 00536fde
    MOV ECX,dword ptr [ESP + 0xe0]      ; 00536fdf
    PUSH ECX                            ; 00536fe6
    LEA EAX,[ESP + 0x14]                ; 00536fe7
    PUSH EAX                            ; 00536feb
    CALL core_msnedit.cpp_FUN_00536cd0  ; 00536fec | undefined core_msnedit.cpp_FUN_00536cd0()
        ;   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00536ff1
    TEST EAX,EAX                        ; 00536ff4
    JZ 0x0053702f                       ; 00536ff6 | LAB_0053702f
        ;   XREF to: 0053702f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDI + 0x64]      ; 00536ff8
    DEC EAX                             ; 00536ffb
    MOV dword ptr [ESP + 0xe0],EAX      ; 00536ffc
    PUSH 0x1                            ; 00537003
    FILD dword ptr [ESP + 0xe4]         ; 00537005
    SUB ESP,0x4                         ; 0053700c
    FSTP float ptr [ESP]                ; 0053700f
    PUSH 0x0                            ; 00537012
    PUSH 0x1                            ; 00537014
    LEA EAX,[ESP + 0x10]                ; 00537016
    PUSH EAX                            ; 0053701a
    PUSH 0x63b706                       ; 0053701b | = "Enter frame number" | s_Enter_frame_number_0063b706 = Enter frame number
    MOV EBX,dword ptr [0x00678a60]      ; 00537020 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 00537026 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 00537027 | int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, bool enable_range_check, ...)
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x1c                        ; 0053702c
    PUSH 0x0                            ; 0053702f
        ;   Label: LAB_0053702f
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00537031
    PUSH 0x1                            ; 00537038
    ADD EAX,0x21                        ; 0053703a
    MOV EBX,dword ptr [ESP + 0xdc]      ; 0053703d
    PUSH EAX                            ; 00537044
    ADD EBX,0x7                         ; 00537045
    PUSH EBX                            ; 00537048
    PUSH 0x63b719                       ; 00537049 | DAT_0063b719
    MOV dword ptr [ESP + 0xf0],EAX      ; 0053704e
    CALL core_msnedit.cpp_FUN_00536cd0  ; 00537055 | undefined core_msnedit.cpp_FUN_00536cd0()
        ;   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0053705a
    TEST EAX,EAX                        ; 0053705d
    JZ 0x0053706c                       ; 0053705f | LAB_0053706c
        ;   XREF to: 0053706c (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 00537061
    MOV dword ptr [0x02f7c530],EDX      ; 00537063 | undefined4 DAT_02f7c530
    MOV dword ptr [ESP],EDX             ; 00537069
    PUSH 0x0                            ; 0053706c
        ;   Label: LAB_0053706c
    PUSH 0x0                            ; 0053706e
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00537070
    PUSH EAX                            ; 00537077
    ADD EBX,0x1c                        ; 00537078
    PUSH EBX                            ; 0053707b
    PUSH 0x63b71e                       ; 0053707c | DAT_0063b71e
    CALL core_msnedit.cpp_FUN_00536cd0  ; 00537081 | undefined core_msnedit.cpp_FUN_00536cd0()
        ;   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00537086
    TEST EAX,EAX                        ; 00537089
    JZ 0x005370e2                       ; 0053708b | LAB_005370e2
        ;   XREF to: 005370e2 (CONDITIONAL_JUMP)
    FLD float ptr [ESP]                 ; 0053708d
    SUB ESP,0x8                         ; 00537090
    FSTP double ptr [ESP]               ; 00537093
    CALL crt_math.c_ceil_FUN_006001b2   ; 00537096 | double crt_math.c_ceil_FUN_006001b2(double value)
        ;   XREF to: 006001b2 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0xd4],EAX      ; 0053709b
    MOV dword ptr [ESP + 0xd8],EDX      ; 005370a2
    FLD double ptr [ESP + 0xd4]         ; 005370a9
    FADD double ptr [0x0063b73c]        ; 005370b0 | DAT_0063b73c
    ADD ESP,0x8                         ; 005370b6
    FST float ptr [ESP]                 ; 005370b9
    FLDZ                                ; 005370bc
    FCOMPP                              ; 005370be
    FNSTSW AX                           ; 005370c0
    SAHF                                ; 005370c2
    JBE 0x005370da                      ; 005370c3 | LAB_005370da
        ;   XREF to: 005370da (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDI + 0x64]      ; 005370c5
    DEC EAX                             ; 005370c8
    MOV dword ptr [ESP + 0xe0],EAX      ; 005370c9
    FILD dword ptr [ESP + 0xe0]         ; 005370d0
    FSTP float ptr [ESP]                ; 005370d7
    XOR EDX,EDX                         ; 005370da
        ;   Label: LAB_005370da
    MOV dword ptr [0x02f7c530],EDX      ; 005370dc | undefined4 DAT_02f7c530
    MOV ECX,dword ptr [0x02f7c530]      ; 005370e2 | undefined4 DAT_02f7c530
        ;   Label: LAB_005370e2
    ADD EBX,0x15                        ; 005370e8
    TEST ECX,ECX                        ; 005370eb
    JZ 0x005371f6                       ; 005370ed | LAB_005371f6
        ;   XREF to: 005371f6 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005370f3
    PUSH 0x1                            ; 005370f5
    MOV ECX,dword ptr [ESP + 0xe4]      ; 005370f7
    PUSH ECX                            ; 005370fe
    PUSH EBX                            ; 005370ff
    PUSH 0x63b722                       ; 00537100 | DAT_0063b722
    CALL core_msnedit.cpp_FUN_00536cd0  ; 00537105 | undefined core_msnedit.cpp_FUN_00536cd0()
        ;   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0053710a
    TEST EAX,EAX                        ; 0053710d
    JZ 0x00537118                       ; 0053710f | LAB_00537118
        ;   XREF to: 00537118 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00537111
    MOV [0x02f7c530],EAX                ; 00537113 | undefined4 DAT_02f7c530
    PUSH 0x0                            ; 00537118
        ;   Label: LAB_00537118
    PUSH 0x0                            ; 0053711a
    MOV EDX,dword ptr [ESP + 0xe4]      ; 0053711c
    PUSH EDX                            ; 00537123
    ADD EBX,0x1c                        ; 00537124
    PUSH EBX                            ; 00537127
    PUSH 0x63b72c                       ; 00537128 | DAT_0063b72c
    CALL core_msnedit.cpp_FUN_00536cd0  ; 0053712d | undefined core_msnedit.cpp_FUN_00536cd0()
        ;   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00537132
    TEST EAX,EAX                        ; 00537135
    JZ 0x0053716e                       ; 00537137 | LAB_0053716e
        ;   XREF to: 0053716e (CONDITIONAL_JUMP)
    FLD float ptr [ESP]                 ; 00537139
    SUB ESP,0x8                         ; 0053713c
    FSTP double ptr [ESP]               ; 0053713f
    CALL crt_math.c_floor_FUN_005feb90  ; 00537142 | double crt_math.c_floor_FUN_005feb90(double input_value)
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0xd4],EAX      ; 00537147
    MOV dword ptr [ESP + 0xd8],EDX      ; 0053714e
    XOR ECX,ECX                         ; 00537155
    FLD double ptr [ESP + 0xd4]         ; 00537157
    FLD1                                ; 0053715e
    ADD ESP,0x8                         ; 00537160
    FADDP                               ; 00537163
    MOV dword ptr [0x02f7c530],ECX      ; 00537165 | undefined4 DAT_02f7c530
    FSTP float ptr [ESP]                ; 0053716b
    PUSH 0x0                            ; 0053716e
        ;   Label: LAB_0053716e
    PUSH 0x1                            ; 00537170
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00537172
    PUSH EAX                            ; 00537179
    ADD EBX,0x15                        ; 0053717a
    PUSH EBX                            ; 0053717d
    PUSH 0x63b730                       ; 0053717e | DAT_0063b730
    CALL core_msnedit.cpp_FUN_00536cd0  ; 00537183 | undefined core_msnedit.cpp_FUN_00536cd0()
        ;   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00537188
    TEST EAX,EAX                        ; 0053718b
    JZ 0x005371ac                       ; 0053718d | LAB_005371ac
        ;   XREF to: 005371ac (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDI + 0x64]      ; 0053718f
    DEC EAX                             ; 00537192
    XOR EDX,EDX                         ; 00537193
    MOV dword ptr [ESP + 0xe0],EAX      ; 00537195
    MOV dword ptr [0x02f7c530],EDX      ; 0053719c | undefined4 DAT_02f7c530
    FILD dword ptr [ESP + 0xe0]         ; 005371a2
    FSTP float ptr [ESP]                ; 005371a9
    CMP dword ptr [0x02f7c530],0x0      ; 005371ac | undefined4 DAT_02f7c530
        ;   Label: LAB_005371ac
    JZ 0x005371d9                       ; 005371b3 | LAB_005371d9
        ;   XREF to: 005371d9 (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 005371b5 | CGame * g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 005371ba | g_CGameInstance.delta_time_float
    FMUL float ptr [EDI + 0x20]         ; 005371c0
    FADD float ptr [ESP]                ; 005371c3
    FSTP float ptr [ESP]                ; 005371c6
    FILD dword ptr [EDI + 0x64]         ; 005371c9
    FCOMP float ptr [ESP]               ; 005371cc
    FNSTSW AX                           ; 005371cf
    SAHF                                ; 005371d1
    JA 0x005371d9                       ; 005371d2 | LAB_005371d9
        ;   XREF to: 005371d9 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 005371d4
    MOV dword ptr [ESP],EBX             ; 005371d6
    PUSH dword ptr [ESP]                ; 005371d9
        ;   Label: LAB_005371d9
    PUSH EDI                            ; 005371dc
    PUSH ESI                            ; 005371dd
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0 ; 005371de | void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0(CMotionController * this_ptr, char * motion_name, float frame_number)
        ;   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005371e3
    PUSH ESI                            ; 005371e6
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 ; 005371e7 | void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(CDeformableModelInstance * this_ptr)
        ;   XREF to: 0059e000 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005371ec
    MOV ESP,EBP                         ; 005371ef
        ;   Label: LAB_005371ef
    POP EBP                             ; 005371f1
    POP EDI                             ; 005371f2
    POP ESI                             ; 005371f3
    POP EBX                             ; 005371f4
    RET                                 ; 005371f5
    PUSH ECX                            ; 005371f6
        ;   Label: LAB_005371f6
    PUSH 0x1                            ; 005371f7
    MOV EAX,dword ptr [ESP + 0xe4]      ; 005371f9
    PUSH EAX                            ; 00537200
    PUSH EBX                            ; 00537201
    PUSH 0x63b727                       ; 00537202 | DAT_0063b727
    CALL core_msnedit.cpp_FUN_00536cd0  ; 00537207 | undefined core_msnedit.cpp_FUN_00536cd0()
        ;   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0053720c
    TEST EAX,EAX                        ; 0053720f
    JZ 0x00537118                       ; 00537211 | LAB_00537118
        ;   XREF to: 00537118 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02f7c530],0x1      ; 00537217 | undefined4 DAT_02f7c530
    JMP 0x00537118                      ; 00537221 | LAB_00537118
        ;   XREF to: 00537118 (UNCONDITIONAL_JUMP)

