; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_sentinel.cpp_FUN_00568030()
;
; Local Variables:
; undefined1       Stack[-0x1a0]:1  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined1       Stack[-0x164]:1  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined1       Stack[-0x128]:1  local_128
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined1       Stack[-0xd4]:1  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined1       Stack[-0xb0]:1  local_b0
; undefined1       Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined1       Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined1       Stack[-0x74]:1  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined1       Stack[-0x50]:1  local_50
; undefined1       Stack[-0x44]:1  local_44
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined4 DAT_00002424
;   void* switchdataD_00567fd0 = 00568241
;   void* switchdataD_00567fe4 = 0056848e
;   TerminatedCString s_wing_wav_00645813
;   TerminatedCString s_sentinel_fall_wav_0064581d
;   TerminatedCString s_s_confused_while_walking_0064582f
;   double DOUBLE_0064585a = 3.14159265350000
;   double DOUBLE_00645862 = 0.523598775583333
;   double DOUBLE_0064586a = 32
;   double DOUBLE_00645872 = 0.800000000000000
;   double DOUBLE_0064587a = 4
;   float FLOAT_00662678 = 4
;   float FLOAT_00662684 = 12
;   CConsole* g_CConsolePtr = 0083b1a4
;   CGore* g_CGorePtr = 02d83364
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_FUN_00428f40
;   core_charactr.cpp_CCharacter_FUN_004297e0
;   core_charactr.cpp_CCharacter_FUN_00429820
;   core_charactr.cpp_CCharacter_FUN_00429870
;   core_charactr.cpp_CCharacter_FUN_0042ca70
;   core_charactr.cpp_CCharacter_FUN_0042ec40
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_enemy.cpp_CEnemy_FUN_004a9fd0
;   core_enemy.cpp_FUN_004a9880
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568030
        ;   Label: core_sentinel.cpp_FUN_00568030
    PUSH ESI                            ; 00568031
    PUSH EDI                            ; 00568032
    PUSH EBP                            ; 00568033
    MOV EBP,ESP                         ; 00568034
    SUB ESP,0x190                       ; 00568036
    SUB EBP,0x7a                        ; 0056803c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0056803f
    PUSH dword ptr [EBP + 0x92]         ; 00568045
    PUSH EBX                            ; 0056804b
    CALL core_charactr.cpp_CCharacter_FUN_00429870 ; 0056804c
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_00429870(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00568051
    TEST EAX,EAX                        ; 00568054
    JZ 0x00568239                       ; 00568056
        ;   XREF to: 00568239 (CONDITIONAL_JUMP)  ; LAB_00568239
    LEA EAX,[EBX + 0x23ac]              ; 0056805c
    MOV dword ptr [EAX + 0x8],0x0       ; 00568062
    FLD float ptr [EBP + 0x92]          ; 00568069
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056806f
    MOV dword ptr [EAX + 0x4],EDX       ; 00568072
    MOV EDX,dword ptr [EAX + 0x4]       ; 00568075
    MOV dword ptr [EAX],EDX             ; 00568078
    FMUL float ptr [EBX + 0xbe24]       ; 0056807a
    LEA EDI,[EBX + 0x158]               ; 00568080
    FSTP float ptr [EBP + 0x5e]         ; 00568086
    FLD float ptr [EBP + 0x5e]          ; 00568089
        ;   Label: LAB_00568089
    FLDZ                                ; 0056808c
    FCOMPP                              ; 0056808e
    FNSTSW AX                           ; 00568090
    SAHF                                ; 00568092
    JC 0x00568410                       ; 00568093
        ;   XREF to: 00568410 (CONDITIONAL_JUMP)  ; LAB_00568410
    FLD float ptr [EBX + 0xbe24]        ; 00568099
    FLD float ptr [EBP + 0x92]          ; 0056809f
    FMUL double ptr [0x0064585a]        ; 005680a5 | DOUBLE_0064585a
    FMULP                               ; 005680ab
    FLD float ptr [EBX + 0x23b4]        ; 005680ad
    PUSH EDI                            ; 005680b3
    FSTP float ptr [EBX + 0x2434]       ; 005680b4
    FSTP float ptr [EBX + 0x2438]       ; 005680ba
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005680c0
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005680c5
    PUSH dword ptr [EBP + 0x92]         ; 005680c8
    MOV ESI,dword ptr [EAX + 0x24]      ; 005680ce
    PUSH EBX                            ; 005680d1
    MOV dword ptr [EBP + 0x6e],ESI      ; 005680d2
    CALL core_charactr.cpp_CCharacter_FUN_0042ca70 ; 005680d5
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042ca70(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005680da
    TEST EAX,EAX                        ; 005680dd
    JZ 0x00568466                       ; 005680df
        ;   XREF to: 00568466 (CONDITIONAL_JUMP)  ; LAB_00568466
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 005680e5
    CMP EAX,0x2                         ; 005680eb
    JNC 0x00568452                      ; 005680ee
        ;   XREF to: 00568452 (CONDITIONAL_JUMP)  ; LAB_00568452
    CMP EAX,0x1                         ; 005680f4
    JNZ 0x0056845d                      ; 005680f7
        ;   XREF to: 0056845d (CONDITIONAL_JUMP)  ; LAB_0056845d
    PUSH 0x1                            ; 005680fd
        ;   Label: LAB_005680fd
    PUSH 0x2                            ; 005680ff
    LEA EAX,[EBX + 0x158]               ; 00568101
        ;   Label: LAB_00568101
    PUSH EAX                            ; 00568107
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00568108
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056810d
        ;   Label: LAB_0056810d
    LEA EAX,[EBX + 0x23ac]              ; 00568110
    MOV dword ptr [EAX + 0x8],0x0       ; 00568116
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056811d
    MOV dword ptr [EAX + 0x4],EDX       ; 00568120
    MOV EDX,dword ptr [EAX + 0x4]       ; 00568123
    MOV dword ptr [EAX],EDX             ; 00568126
    FLD float ptr [EBX + 0xbe38]        ; 00568128
        ;   Label: caseD_d
    FLDZ                                ; 0056812e
    FCOMPP                              ; 00568130
    FNSTSW AX                           ; 00568132
    SAHF                                ; 00568134
    JNC 0x00568149                      ; 00568135
        ;   XREF to: 00568149 (CONDITIONAL_JUMP)  ; LAB_00568149
    FLD float ptr [EBX + 0xbe38]        ; 00568137
    FSUB float ptr [EBP + 0x92]         ; 0056813d
    FSTP float ptr [EBX + 0xbe38]       ; 00568143
    PUSH EBX                            ; 00568149
        ;   Label: LAB_00568149
    CALL core_charactr.cpp_CCharacter_FUN_004297e0 ; 0056814a
        ;   XREF to: 004297e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_004297e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0056814f
    TEST EAX,EAX                        ; 00568152
    JZ 0x00568212                       ; 00568154
        ;   XREF to: 00568212 (CONDITIONAL_JUMP)  ; LAB_00568212
    FLD float ptr [EBP + 0x92]          ; 0056815a
    FLD ST0                             ; 00568160
    FMUL double ptr [0x0064586a]        ; 00568162 | DOUBLE_0064586a
    FLD float ptr [EBX + 0x242c]        ; 00568168
    FXCH                                ; 0056816e
    FSUBR ST0,ST1                       ; 00568170
    LEA ESI,[EBX + 0x2428]              ; 00568172
    FSTP ST1                            ; 00568178
    FSTP float ptr [EBX + 0x242c]       ; 0056817a
    FLD float ptr [ESI]                 ; 00568180
    FMUL ST1                            ; 00568182
    FSTP float ptr [EBP + -0x7a]        ; 00568184
    FLD float ptr [ESI + 0x4]           ; 00568187
    FMUL ST1                            ; 0056818a
    LEA EDX,[EBX + 0x241c]              ; 0056818c
    FSTP float ptr [EBP + -0x76]        ; 00568192
    FMUL float ptr [ESI + 0x8]          ; 00568195
    LEA EAX,[EBX + 0x23ac]              ; 00568198
    FLD float ptr [EBP + -0x7a]         ; 0056819e
    FXCH                                ; 005681a1
    FSTP float ptr [EBP + -0x72]        ; 005681a3
    FADD float ptr [EDX]                ; 005681a6
    FLD float ptr [EBP + -0x76]         ; 005681a8
    FXCH                                ; 005681ab
    FSTP float ptr [EBP + -0x62]        ; 005681ad
    FADD float ptr [EDX + 0x4]          ; 005681b0
    FLD float ptr [EBP + -0x72]         ; 005681b3
    FXCH                                ; 005681b6
    FSTP float ptr [EBP + -0x5e]        ; 005681b8
    FADD float ptr [EDX + 0x8]          ; 005681bb | DAT_00002424
    FLD float ptr [EBP + -0x62]         ; 005681be
    FXCH                                ; 005681c1
    FSTP float ptr [EBP + -0x5a]        ; 005681c3
    FADD float ptr [EAX]                ; 005681c6
    FLD float ptr [EBP + -0x5e]         ; 005681c8
    FXCH                                ; 005681cb
    FSTP float ptr [EBP + 0x22]         ; 005681cd
    FADD float ptr [EAX + 0x4]          ; 005681d0
    FLD float ptr [EBP + -0x5a]         ; 005681d3
    FXCH                                ; 005681d6
    FSTP float ptr [EBP + 0x26]         ; 005681d8
    FADD float ptr [EAX + 0x8]          ; 005681db
    FSTP float ptr [EBP + 0x2a]         ; 005681de
    MOV dword ptr [EDX + 0x8],0x0       ; 005681e1 | DAT_00002424
    MOV ECX,dword ptr [EDX + 0x8]       ; 005681e8 | DAT_00002424
    MOV dword ptr [EDX + 0x4],ECX       ; 005681eb
    MOV ECX,dword ptr [EDX + 0x4]       ; 005681ee
    MOV dword ptr [EDX],ECX             ; 005681f1
    MOV dword ptr [EAX + 0x8],0x0       ; 005681f3
    MOV EDX,dword ptr [EAX + 0x8]       ; 005681fa
    MOV dword ptr [EAX + 0x4],EDX       ; 005681fd
    MOV EDX,dword ptr [EAX + 0x4]       ; 00568200
    MOV dword ptr [EAX],EDX             ; 00568203
    LEA EAX,[EBP + 0x22]                ; 00568205
    PUSH EAX                            ; 00568208
    PUSH EBX                            ; 00568209
    CALL core_charactr.cpp_CCharacter_FUN_00428f40 ; 0056820a
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00428f40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 0056820f
    PUSH EBX                            ; 00568212
        ;   Label: LAB_00568212
    CALL core_charactr.cpp_CCharacter_FUN_00429820 ; 00568213
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00568218
    LEA EAX,[EBX + 0x158]               ; 0056821b
    PUSH EAX                            ; 00568221
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 00568222
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00568227
    PUSH dword ptr [EBP + 0x92]         ; 0056822a
    PUSH EBX                            ; 00568230
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 00568231
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00568236
    LEA ESP,[EBP + 0x7a]                ; 00568239
        ;   Label: LAB_00568239
    POP EBP                             ; 0056823c
    POP EDI                             ; 0056823d
    POP ESI                             ; 0056823e
    POP EBX                             ; 0056823f
    RET                                 ; 00568240
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00568241
        ;   Label: caseD_64
    MOV ESI,0x1                         ; 00568247
    TEST EAX,EAX                        ; 0056824c
    JNZ 0x00568262                      ; 0056824e
        ;   XREF to: 00568262 (CONDITIONAL_JUMP)  ; LAB_00568262
    PUSH 0x1                            ; 00568250
        ;   Label: LAB_00568250
    PUSH 0x0                            ; 00568252
    PUSH EDI                            ; 00568254
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00568255
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056825a
    JMP 0x00568089                      ; 0056825d
        ;   XREF to: 00568089 (UNCONDITIONAL_JUMP)  ; LAB_00568089
    PUSH EAX                            ; 00568262
        ;   Label: LAB_00568262
    MOV EDX,dword ptr [EAX + 0x154]     ; 00568263
    CALL dword ptr [EDX + 0x120]        ; 00568269
    ADD ESP,0x4                         ; 0056826f
    TEST EAX,EAX                        ; 00568272
    JNZ 0x00568250                      ; 00568274
        ;   XREF to: 00568250 (CONDITIONAL_JUMP)  ; LAB_00568250
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00568276
    PUSH EAX                            ; 0056827c
    MOV EDX,dword ptr [EAX + 0x154]     ; 0056827d
    CALL dword ptr [EDX + 0x108]        ; 00568283
    ADD ESP,0x4                         ; 00568289
    TEST EAX,EAX                        ; 0056828c
    JNZ 0x00568250                      ; 0056828e
        ;   XREF to: 00568250 (CONDITIONAL_JUMP)  ; LAB_00568250
    PUSH 0x0                            ; 00568290
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00568292
    PUSH EBX                            ; 00568298
    MOV EDX,dword ptr [EAX + 0x154]     ; 00568299
    PUSH EAX                            ; 0056829f
    CALL dword ptr [EDX + 0xfc]         ; 005682a0
    ADD ESP,0xc                         ; 005682a6
    TEST EAX,EAX                        ; 005682a9
    JZ 0x00568250                       ; 005682ab
        ;   XREF to: 00568250 (CONDITIONAL_JUMP)  ; LAB_00568250
    MOV EAX,[0x00662678]                ; 005682ad | FLOAT_00662678
    MOV dword ptr [EBP + -0x7e],EAX     ; 005682b2
    LEA EAX,[EBP + 0xffffff7a]          ; 005682b5
    PUSH EAX                            ; 005682bb
    LEA EAX,[EBP + -0x3e]               ; 005682bc
    PUSH EAX                            ; 005682bf
    XOR EDX,EDX                         ; 005682c0
    PUSH EBX                            ; 005682c2
    MOV dword ptr [EBP + 0xffffff7a],EDX ; 005682c3
    MOV dword ptr [EBP + 0xffffff7e],EDX ; 005682c9
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005682cf
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005682d4
    FLD float ptr [EBP + -0x3e]         ; 005682da
    FSUB float ptr [EAX + 0x20]         ; 005682dd
    FMUL ST0                            ; 005682e0
    FLD float ptr [EBP + -0x36]         ; 005682e2
    FSUB float ptr [EAX + 0x28]         ; 005682e5
    FMUL ST0                            ; 005682e8
    FADDP                               ; 005682ea
    FSQRT                               ; 005682ec
    ADD ESP,0xc                         ; 005682ee
    FCOMP double ptr [0x00645872]       ; 005682f1 | DOUBLE_00645872
    FNSTSW AX                           ; 005682f7
    SAHF                                ; 005682f9
    JBE 0x005682fe                      ; 005682fa
        ;   XREF to: 005682fe (CONDITIONAL_JUMP)  ; LAB_005682fe
    XOR ESI,ESI                         ; 005682fc
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 005682fe
        ;   Label: LAB_005682fe
    FLD float ptr [EBP + -0x3a]         ; 00568304
    FSUB float ptr [EDX + 0x24]         ; 00568307
    FABS                                ; 0056830a
    FCOMP double ptr [0x0064587a]       ; 0056830c | DOUBLE_0064587a
    FNSTSW AX                           ; 00568312
    SAHF                                ; 00568314
    JA 0x00568250                       ; 00568315
        ;   XREF to: 00568250 (CONDITIONAL_JUMP)  ; LAB_00568250
    TEST ESI,ESI                        ; 0056831b
    JNZ 0x00568339                      ; 0056831d
        ;   XREF to: 00568339 (CONDITIONAL_JUMP)  ; LAB_00568339
    TEST ESI,ESI                        ; 0056831f
        ;   Label: LAB_0056831f
    JNZ 0x00568089                      ; 00568321
        ;   XREF to: 00568089 (CONDITIONAL_JUMP)  ; LAB_00568089
    PUSH 0x1                            ; 00568327
    PUSH 0x0                            ; 00568329
    PUSH EDI                            ; 0056832b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0056832c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00568331
    JMP 0x00568089                      ; 00568334
        ;   XREF to: 00568089 (UNCONDITIONAL_JUMP)  ; LAB_00568089
    PUSH 0x0                            ; 00568339
        ;   Label: LAB_00568339
    PUSH EBX                            ; 0056833b
    MOV EAX,dword ptr [EDX + 0x154]     ; 0056833c
    PUSH EDX                            ; 00568342
    CALL dword ptr [EAX + 0x100]        ; 00568343
    ADD ESP,0xc                         ; 00568349
    TEST EAX,EAX                        ; 0056834c
    JNZ 0x0056831f                      ; 0056834e
        ;   XREF to: 0056831f (CONDITIONAL_JUMP)  ; LAB_0056831f
    PUSH 0x1                            ; 00568350
    PUSH 0x0                            ; 00568352
    PUSH EDI                            ; 00568354
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00568355
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056835a
    JMP 0x00568089                      ; 0056835d
        ;   XREF to: 00568089 (UNCONDITIONAL_JUMP)  ; LAB_00568089
    PUSH EBX                            ; 00568362
        ;   Label: caseD_65
    MOV EAX,dword ptr [EBX + 0x154]     ; 00568363
    CALL dword ptr [EAX + 0x10c]        ; 00568369
    ADD ESP,0x4                         ; 0056836f
    JMP 0x00568089                      ; 00568372
        ;   XREF to: 00568089 (UNCONDITIONAL_JUMP)  ; LAB_00568089
    CMP dword ptr [EBX + 0xbe3c],0x0    ; 00568377
        ;   Label: caseD_66
    JZ 0x00568089                       ; 0056837e
        ;   XREF to: 00568089 (CONDITIONAL_JUMP)  ; LAB_00568089
    LEA EAX,[EBP + 0xffffff26]          ; 00568384
    PUSH EAX                            ; 0056838a
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 0056838b
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00568390
    PUSH 0x40a00000                     ; 00568393
    PUSH 0x3f800000                     ; 00568398
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0056839d
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    LEA EDX,[EBP + 0xffffff26]          ; 005683a2
    MOV dword ptr [EBP + 0x76],EAX      ; 005683a8
    ADD ESP,0x8                         ; 005683ab
    FLD float ptr [EBP + 0x76]          ; 005683ae
    PUSH EDX                            ; 005683b1
    FSTP float ptr [EBP + 0xffffff2a]   ; 005683b2
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005683b8
    PUSH EAX                            ; 005683be
    MOV ESI,dword ptr [EAX + 0x154]     ; 005683bf
    CALL dword ptr [ESI + 0x11c]        ; 005683c5
    ADD ESP,0x8                         ; 005683cb
    JMP 0x00568089                      ; 005683ce
        ;   XREF to: 00568089 (UNCONDITIONAL_JUMP)  ; LAB_00568089
    PUSH 0x645813                       ; 005683d3 | = "wing?.wav"
        ;   Label: caseD_67
    MOV EAX,dword ptr [EBX + 0x154]     ; 005683d8
    PUSH EBX                            ; 005683de
    CALL dword ptr [EAX + 0x24]         ; 005683df
    ADD ESP,0x8                         ; 005683e2
    JMP 0x00568089                      ; 005683e5
        ;   XREF to: 00568089 (UNCONDITIONAL_JUMP)  ; LAB_00568089
    PUSH 0x64581d                       ; 005683ea | = "sentinel-fall.wav"
        ;   Label: caseD_68
    MOV EAX,dword ptr [EBX + 0x154]     ; 005683ef
    PUSH EBX                            ; 005683f5
    CALL dword ptr [EAX + 0x24]         ; 005683f6
    ADD ESP,0x8                         ; 005683f9
    JMP 0x00568089                      ; 005683fc
        ;   XREF to: 00568089 (UNCONDITIONAL_JUMP)  ; LAB_00568089
    PUSH EDX                            ; 00568401
        ;   Label: default
    PUSH EBX                            ; 00568402
    CALL core_charactr.cpp_CCharacter_FUN_0042ec40 ; 00568403
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00568408
    JMP 0x00568089                      ; 0056840b
        ;   XREF to: 00568089 (UNCONDITIONAL_JUMP)  ; LAB_00568089
    LEA EAX,[EBP + 0x5e]                ; 00568410
        ;   Label: LAB_00568410
    PUSH EAX                            ; 00568413
    PUSH EDI                            ; 00568414
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 00568415
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    MOV EDX,EAX                         ; 0056841a
    SUB EAX,0x64                        ; 0056841c
    ADD ESP,0x8                         ; 0056841f
    CMP EAX,0x4                         ; 00568422
    JA 0x00568401                       ; 00568425
        ;   XREF to: 00568401 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x567fd0]  ; 00568427 | caseD_64 | caseD_65 | caseD_66
        ;   Label: switchD
    PUSH 0x1                            ; 0056842e
        ;   Label: LAB_0056842e
    PUSH 0x0                            ; 00568430
    PUSH EDI                            ; 00568432
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00568433
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00568438
    PUSH EBX                            ; 0056843b
    PUSH 0x64582f                       ; 0056843c | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x0066e8e0]      ; 00568441 | g_CConsolePtr
    PUSH ECX                            ; 00568447 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 00568448
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x0056810d                      ; 0056844d
        ;   XREF to: 0056810d (UNCONDITIONAL_JUMP)  ; LAB_0056810d
    JBE 0x005680fd                      ; 00568452
        ;   XREF to: 005680fd (CONDITIONAL_JUMP)  ; LAB_005680fd
        ;   Label: LAB_00568452
    CMP EAX,0x3                         ; 00568458
    JZ 0x0056842e                       ; 0056845b
        ;   XREF to: 0056842e (CONDITIONAL_JUMP)  ; LAB_0056842e
    PUSH 0x1                            ; 0056845d
        ;   Label: LAB_0056845d
    PUSH 0x0                            ; 0056845f
    JMP 0x00568101                      ; 00568461
        ;   XREF to: 00568101 (UNCONDITIONAL_JUMP)  ; LAB_00568101
    CMP ESI,0xa                         ; 00568466
        ;   Label: LAB_00568466
    JNZ 0x00568509                      ; 00568469
        ;   XREF to: 00568509 (CONDITIONAL_JUMP)  ; LAB_00568509
    MOV dword ptr [EBX + 0x2de0],0x3f000000 ; 0056846f
        ;   Label: LAB_0056846f
    MOV EDX,dword ptr [EBP + 0x6e]      ; 00568479
        ;   Label: LAB_00568479
    CMP EDX,0xf                         ; 0056847c
    JA 0x00568128                       ; 0056847f
        ;   XREF to: 00568128 (CONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,EDX                         ; 00568485
    JMP dword ptr [EAX*0x4 + 0x567fe4]  ; 00568487 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH dword ptr [EBP + 0x92]         ; 0056848e
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x154]     ; 00568494
    PUSH EBX                            ; 0056849a
    CALL dword ptr [EAX + 0x158]        ; 0056849b
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 005684a1
    ADD ESP,0x8                         ; 005684a7
    TEST EDX,EDX                        ; 005684aa
    JZ 0x005686dc                       ; 005684ac
        ;   XREF to: 005686dc (CONDITIONAL_JUMP)  ; LAB_005686dc
    LEA EAX,[EBX + 0x20]                ; 005684b2
    FLD float ptr [EDX + 0x20]          ; 005684b5
    FSUB float ptr [EAX]                ; 005684b8
    FSTP float ptr [EBP + 0x2e]         ; 005684ba
    FLD float ptr [EDX + 0x24]          ; 005684bd
    FSUB float ptr [EAX + 0x4]          ; 005684c0
    FST float ptr [EBP + 0x32]          ; 005684c3
    FMUL float ptr [EBP + 0x32]         ; 005684c6
    FLD float ptr [EBP + 0x2e]          ; 005684c9
    FMUL ST0                            ; 005684cc
    FLD float ptr [EDX + 0x28]          ; 005684ce
    FSUB float ptr [EAX + 0x8]          ; 005684d1
    FXCH                                ; 005684d4
    FADDP ST2,ST0                       ; 005684d6
    FST float ptr [EBP + 0x36]          ; 005684d8
    FMUL float ptr [EBP + 0x36]         ; 005684db
    FADDP                               ; 005684de
    FSQRT                               ; 005684e0
    FCOMP float ptr [0x00662684]        ; 005684e2 | FLOAT_00662684
    FNSTSW AX                           ; 005684e8
    SAHF                                ; 005684ea
    JBE 0x005686c4                      ; 005684eb
        ;   XREF to: 005686c4 (CONDITIONAL_JUMP)  ; LAB_005686c4
    PUSH 0x1                            ; 005684f1
    PUSH 0x3                            ; 005684f3
    LEA EAX,[EBX + 0x158]               ; 005684f5
    PUSH EAX                            ; 005684fb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005684fc
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00568501
    JMP 0x00568128                      ; 00568504
        ;   XREF to: 00568128 (UNCONDITIONAL_JUMP)  ; caseD_c
    CMP ESI,0xb                         ; 00568509
        ;   Label: LAB_00568509
    JZ 0x0056846f                       ; 0056850c
        ;   XREF to: 0056846f (CONDITIONAL_JUMP)  ; LAB_0056846f
    MOV dword ptr [EBX + 0x2de0],0x40000000 ; 00568512
    JMP 0x00568479                      ; 0056851c
        ;   XREF to: 00568479 (UNCONDITIONAL_JUMP)  ; LAB_00568479
    MOV ESI,dword ptr [EBX + 0xbe28]    ; 00568521
        ;   Label: caseD_9
    TEST ESI,ESI                        ; 00568527
    JNZ 0x00568128                      ; 00568529
        ;   XREF to: 00568128 (CONDITIONAL_JUMP)  ; caseD_c
    CMP dword ptr [EBX + 0xdc],0x0      ; 0056852f
    JNZ 0x00568128                      ; 00568536
        ;   XREF to: 00568128 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH ESI                            ; 0056853c
    LEA EAX,[EBP + 0x46]                ; 0056853d
    PUSH EAX                            ; 00568540
    LEA EAX,[EBX + 0x158]               ; 00568541
    PUSH EAX                            ; 00568547
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 00568548
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0056854d
    PUSH EAX                            ; 00568550
    LEA EAX,[EBP + 0xffffff62]          ; 00568551
    PUSH EAX                            ; 00568557
    PUSH EBX                            ; 00568558
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00568559
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0056855e
    PUSH ESI                            ; 00568561
    LEA EAX,[EBP + 0xffffff62]          ; 00568562
    PUSH EAX                            ; 00568568
    MOV EAX,[0x0067b9a0]                ; 00568569 | g_CGorePtr | g_CGoreInstance
    PUSH EAX                            ; 0056856e | g_CGoreInstance
    CALL core_gore.cpp_FUN_004ede30     ; 0056856f
        ;   XREF to: 004ede30 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004ede30()
    ADD ESP,0xc                         ; 00568574
    MOV dword ptr [EBX + 0xbe28],0x1    ; 00568577
    JMP 0x00568128                      ; 00568581
        ;   XREF to: 00568128 (UNCONDITIONAL_JUMP)  ; caseD_c
    LEA EAX,[EBP + 0xfffffeea]          ; 00568586
        ;   Label: caseD_4
    PUSH EAX                            ; 0056858c
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 0056858d
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00568592
    PUSH 0x41700000                     ; 00568595
    PUSH 0x40e00000                     ; 0056859a
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0056859f
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV EDX,dword ptr [0x03114214]      ; 005685a4 | DAT_03114214
    MOV dword ptr [EBP + 0x76],EAX      ; 005685aa
    ADD ESP,0x8                         ; 005685ad
    LEA EAX,[EBP + 0xfffffeea]          ; 005685b0
    MOV dword ptr [EBP + 0xffffff1e],EBX ; 005685b6
    PUSH EAX                            ; 005685bc
    LEA EAX,[EDX*0x4 + 0x0]             ; 005685bd
    MOV dword ptr [EBP + 0xffffff22],EBX ; 005685c4
    SUB EAX,EDX                         ; 005685ca
    LEA ESI,[EBX + 0xfd8]               ; 005685cc
    SHL EAX,0x4                         ; 005685d2
    ADD EAX,ESI                         ; 005685d5
    PUSH 0x3f800000                     ; 005685d7
    PUSH EAX                            ; 005685dc
    PUSH 0x3f87558                      ; 005685dd | g_ZeroVector
    LEA EAX,[EBP + -0x26]               ; 005685e2
    FLD float ptr [EBP + 0x76]          ; 005685e5
    PUSH EAX                            ; 005685e8
    FSTP float ptr [EBP + 0xfffffeee]   ; 005685e9
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 005685ef
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 005685f4
    PUSH EAX                            ; 005685f7
    LEA EAX,[EBP + -0x1a]               ; 005685f8
    PUSH EAX                            ; 005685fb
    PUSH EBX                            ; 005685fc
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005685fd
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00568602
    PUSH EAX                            ; 00568605
    PUSH EBX                            ; 00568606
    CALL core_enemy.cpp_FUN_004a9880    ; 00568607
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a9880()
    ADD ESP,0x10                        ; 0056860c
    PUSH 0x41f00000                     ; 0056860f
    PUSH 0x41700000                     ; 00568614
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00568619
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0056861e
    ADD ESP,0x8                         ; 00568621
    LEA EAX,[EBP + 0xfffffeea]          ; 00568624
    MOV EDX,dword ptr [0x0311420c]      ; 0056862a | DAT_0311420c
    PUSH EAX                            ; 00568630
    LEA EAX,[EDX*0x4 + 0x0]             ; 00568631
    SUB EAX,EDX                         ; 00568638
    SHL EAX,0x4                         ; 0056863a
    ADD EAX,ESI                         ; 0056863d
    PUSH 0x3f800000                     ; 0056863f
    PUSH EAX                            ; 00568644
    MOV dword ptr [EBP + 0xffffff1e],EBX ; 00568645
    MOV dword ptr [EBP + 0xffffff22],EBX ; 0056864b
    PUSH 0x3f87558                      ; 00568651 | g_ZeroVector
    LEA EAX,[EBP + 0x3a]                ; 00568656
    FLD float ptr [EBP + 0x76]          ; 00568659
    PUSH EAX                            ; 0056865c
    FSTP float ptr [EBP + 0xfffffeee]   ; 0056865d
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00568663
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00568668
    PUSH EAX                            ; 0056866b
    LEA EAX,[EBP + -0x2]                ; 0056866c
    PUSH EAX                            ; 0056866f
    PUSH EBX                            ; 00568670
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00568671
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00568676
    PUSH EAX                            ; 00568679
    PUSH EBX                            ; 0056867a
    CALL core_enemy.cpp_FUN_004a9880    ; 0056867b
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a9880()
    ADD ESP,0x10                        ; 00568680
    JMP 0x00568128                      ; 00568683
        ;   XREF to: 00568128 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH dword ptr [EBP + 0x92]         ; 00568688
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056868e
    PUSH EBX                            ; 00568694
    CALL dword ptr [EAX + 0x158]        ; 00568695
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 0056869b
    ADD ESP,0x8                         ; 005686a1
    TEST EAX,EAX                        ; 005686a4
    JZ 0x00568128                       ; 005686a6
        ;   XREF to: 00568128 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 005686ac
    PUSH 0x0                            ; 005686ae
    LEA EAX,[EBX + 0x158]               ; 005686b0
    PUSH EAX                            ; 005686b6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005686b7
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005686bc
    JMP 0x00568128                      ; 005686bf
        ;   XREF to: 00568128 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 005686c4
        ;   Label: LAB_005686c4
    PUSH 0x2                            ; 005686c6
    LEA EAX,[EBX + 0x158]               ; 005686c8
    PUSH EAX                            ; 005686ce
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005686cf
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005686d4
    JMP 0x00568128                      ; 005686d7
        ;   XREF to: 00568128 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH dword ptr [EBP + 0x92]         ; 005686dc
        ;   Label: LAB_005686dc
    PUSH EBX                            ; 005686e2
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 005686e3
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
    ADD ESP,0x8                         ; 005686e8
    TEST EAX,EAX                        ; 005686eb
    JZ 0x00568707                       ; 005686ed
        ;   XREF to: 00568707 (CONDITIONAL_JUMP)  ; LAB_00568707
    PUSH 0x1                            ; 005686ef
    PUSH 0x2                            ; 005686f1
    LEA EAX,[EBX + 0x158]               ; 005686f3
    PUSH EAX                            ; 005686f9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005686fa
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005686ff
    JMP 0x00568128                      ; 00568702
        ;   XREF to: 00568128 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 00568707
        ;   Label: LAB_00568707
    PUSH 0x1                            ; 00568709
    LEA EAX,[EBX + 0x158]               ; 0056870b
    PUSH EAX                            ; 00568711
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00568712
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00568717
    JMP 0x00568128                      ; 0056871a
        ;   XREF to: 00568128 (UNCONDITIONAL_JUMP)  ; caseD_c
    FLD float ptr [EBX + 0xbec0]        ; 0056871f
        ;   Label: caseD_a
    FSUB float ptr [EBP + 0x92]         ; 00568725
    FST float ptr [EBX + 0xbec0]        ; 0056872b
    FLDZ                                ; 00568731
    FCOMPP                              ; 00568733
    FNSTSW AX                           ; 00568735
    SAHF                                ; 00568737
    JBE 0x00568128                      ; 00568738
        ;   XREF to: 00568128 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 0056873e
    PUSH 0xb                            ; 00568740
    LEA EAX,[EBX + 0x158]               ; 00568742
    PUSH EAX                            ; 00568748
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00568749
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056874e
    JMP 0x00568128                      ; 00568751
        ;   XREF to: 00568128 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH dword ptr [EBP + 0x92]         ; 00568756
        ;   Label: caseD_2
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056875c
    PUSH EBX                            ; 00568762
    CALL dword ptr [EAX + 0x158]        ; 00568763
    ADD ESP,0x8                         ; 00568769
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 0056876c
    LEA ESI,[EBX + 0x158]               ; 00568772
    TEST EAX,EAX                        ; 00568778
    JNZ 0x005687b2                      ; 0056877a
        ;   XREF to: 005687b2 (CONDITIONAL_JUMP)  ; LAB_005687b2
    PUSH dword ptr [EBP + 0x92]         ; 0056877c
    PUSH EBX                            ; 00568782
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 00568783
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
    ADD ESP,0x8                         ; 00568788
    TEST EAX,EAX                        ; 0056878b
    JZ 0x005687a1                       ; 0056878d
        ;   XREF to: 005687a1 (CONDITIONAL_JUMP)  ; LAB_005687a1
    PUSH 0x1                            ; 0056878f
        ;   Label: LAB_0056878f
    PUSH 0x2                            ; 00568791
    PUSH ESI                            ; 00568793
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00568794
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00568799
    JMP 0x00568128                      ; 0056879c
        ;   XREF to: 00568128 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 005687a1
        ;   Label: LAB_005687a1
    PUSH EAX                            ; 005687a3
    PUSH ESI                            ; 005687a4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005687a5
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005687aa
    JMP 0x00568128                      ; 005687ad
        ;   XREF to: 00568128 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,[0x00662678]                ; 005687b2 | FLOAT_00662678
        ;   Label: LAB_005687b2
    PUSH 0x3e32b8c2                     ; 005687b7
    MOV dword ptr [EBP + 0x6a],EAX      ; 005687bc
    LEA EAX,[EBX + 0x23ac]              ; 005687bf
    PUSH 0x3f000000                     ; 005687c5
    MOV dword ptr [EAX + 0x8],0x0       ; 005687ca
    XOR EDX,EDX                         ; 005687d1
    MOV ECX,dword ptr [EAX + 0x8]       ; 005687d3
    MOV dword ptr [EAX + 0x4],ECX       ; 005687d6
    MOV ECX,dword ptr [EAX + 0x4]       ; 005687d9
    MOV dword ptr [EAX],ECX             ; 005687dc
    MOV EAX,dword ptr [EBP + 0x6a]      ; 005687de
    MOV dword ptr [EBP + -0xe],EDX      ; 005687e1
    MOV dword ptr [EBP + -0x6],EAX      ; 005687e4
    LEA EAX,[EBP + -0xe]                ; 005687e7
    MOV dword ptr [EBP + -0xa],EDX      ; 005687ea
    PUSH EAX                            ; 005687ed
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005687ee
    PUSH EAX                            ; 005687f4
    MOV EDX,dword ptr [EAX + 0x154]     ; 005687f5
    CALL dword ptr [EDX + 0xbc]         ; 005687fb
    ADD ESP,0x4                         ; 00568801
    PUSH EAX                            ; 00568804
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00568805
    ADD EAX,0x20                        ; 0056880b
    PUSH EAX                            ; 0056880e
    PUSH EBX                            ; 0056880f
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 00568810
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr)
    ADD ESP,0x18                        ; 00568815
    TEST EAX,EAX                        ; 00568818
    JL 0x00568128                       ; 0056881a
        ;   XREF to: 00568128 (CONDITIONAL_JUMP)  ; caseD_c
    LEA EDX,[EBX + 0x20]                ; 00568820
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00568823
    FLD float ptr [EDX]                 ; 00568829
    FSUB float ptr [EAX + 0x20]         ; 0056882b
    FSTP float ptr [EBP + -0x56]        ; 0056882e
    FLD float ptr [EDX + 0x4]           ; 00568831
    FSUB float ptr [EAX + 0x24]         ; 00568834
    FLD float ptr [EBP + -0x56]         ; 00568837
    FXCH                                ; 0056883a
    FSTP float ptr [EBP + -0x52]        ; 0056883c
    FLD float ptr [EDX + 0x8]           ; 0056883f
    FSUB float ptr [EAX + 0x28]         ; 00568842
    FXCH                                ; 00568845
    FMUL float ptr [EBP + -0x56]        ; 00568847
    FXCH                                ; 0056884a
    FST float ptr [EBP + -0x4e]         ; 0056884c
    FMUL float ptr [EBP + -0x4e]        ; 0056884f
    FADDP                               ; 00568852
    FSQRT                               ; 00568854
    XOR EDI,EDI                         ; 00568856
    MOV dword ptr [EBP + -0x52],EDI     ; 00568858
    FSTP float ptr [EBP + 0x72]         ; 0056885b
    MOV EAX,dword ptr [EBP + 0x72]      ; 0056885e
    FLD float ptr [EBP + 0x72]          ; 00568861
    MOV dword ptr [EBP + 0x66],EAX      ; 00568864
    FCOMP float ptr [0x00662684]        ; 00568867 | FLOAT_00662684
    FNSTSW AX                           ; 0056886d
    SAHF                                ; 0056886f
    JBE 0x0056887f                      ; 00568870
        ;   XREF to: 0056887f (CONDITIONAL_JUMP)  ; LAB_0056887f
    PUSH 0x1                            ; 00568872
    PUSH 0x3                            ; 00568874
    PUSH ESI                            ; 00568876
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00568877
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056887c
    FLD float ptr [EBP + 0x66]          ; 0056887f
        ;   Label: LAB_0056887f
    FCOMP float ptr [EBP + 0x6a]        ; 00568882
    FNSTSW AX                           ; 00568885
    SAHF                                ; 00568887
    JA 0x00568929                       ; 00568888
        ;   XREF to: 00568929 (CONDITIONAL_JUMP)  ; LAB_00568929
    FLD float ptr [EBX + 0xbe38]        ; 0056888e
    FLDZ                                ; 00568894
    FCOMPP                              ; 00568896
    FNSTSW AX                           ; 00568898
    SAHF                                ; 0056889a
    JC 0x00568929                       ; 0056889b
        ;   XREF to: 00568929 (CONDITIONAL_JUMP)  ; LAB_00568929
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005688a1
    LEA EDX,[EBX + 0x20]                ; 005688a7
    FLD float ptr [EAX + 0x20]          ; 005688aa
    FSUB float ptr [EDX]                ; 005688ad
    FSTP float ptr [EBP + -0x32]        ; 005688af
    FLD float ptr [EAX + 0x24]          ; 005688b2
    FSUB float ptr [EDX + 0x4]          ; 005688b5
    FSTP float ptr [EBP + -0x2e]        ; 005688b8
    FLD float ptr [EAX + 0x28]          ; 005688bb
    LEA EAX,[EBP + -0x32]               ; 005688be
    PUSH EAX                            ; 005688c1
    LEA EAX,[EBP + 0x16]                ; 005688c2
    FSUB float ptr [EDX + 0x8]          ; 005688c5
    PUSH EAX                            ; 005688c8
    FSTP float ptr [EBP + -0x2a]        ; 005688c9
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005688cc
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + 0x1a]          ; 005688d1
    ADD ESP,0x8                         ; 005688d4
    FSUB float ptr [EBX + 0x34]         ; 005688d7
    SUB ESP,0x4                         ; 005688da
    FSTP float ptr [ESP]                ; 005688dd
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005688e0
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 005688e5
    FLD float ptr [EBP + 0x76]          ; 005688e8
    FABS                                ; 005688eb
    ADD ESP,0x4                         ; 005688ed
    FCOMP double ptr [0x00645862]       ; 005688f0 | DOUBLE_00645862
    FNSTSW AX                           ; 005688f6
    SAHF                                ; 005688f8
    JNC 0x00568929                      ; 005688f9
        ;   XREF to: 00568929 (CONDITIONAL_JUMP)  ; LAB_00568929
    PUSH 0x3f000000                     ; 005688fb
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 00568900
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 00568905
    LEA EDX,[EBX + 0x158]               ; 00568908
    TEST EAX,EAX                        ; 0056890e
    JZ 0x00568953                       ; 00568910
        ;   XREF to: 00568953 (CONDITIONAL_JUMP)  ; LAB_00568953
    PUSH 0x1                            ; 00568912
    PUSH 0x4                            ; 00568914
    PUSH EDX                            ; 00568916
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00568917
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056891c
    MOV dword ptr [EBX + 0xbe38],0x3f800000 ; 0056891f
        ;   Label: LAB_0056891f
    FLD float ptr [EBP + 0x66]          ; 00568929
        ;   Label: LAB_00568929
    FCOMP float ptr [EBX + 0xbe34]      ; 0056892c
    FNSTSW AX                           ; 00568932
    SAHF                                ; 00568934
    JBE 0x00568128                      ; 00568935
        ;   XREF to: 00568128 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 0056893b
    PUSH 0x0                            ; 0056893d
    LEA EAX,[EBX + 0x158]               ; 0056893f
    PUSH EAX                            ; 00568945
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00568946
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056894b
    JMP 0x00568128                      ; 0056894e
        ;   XREF to: 00568128 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 00568953
        ;   Label: LAB_00568953
    PUSH 0xa                            ; 00568955
    PUSH EDX                            ; 00568957
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00568958
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056895d
    MOV dword ptr [EBX + 0xbec0],0x40a00000 ; 00568960
    JMP 0x0056891f                      ; 0056896a
        ;   XREF to: 0056891f (UNCONDITIONAL_JUMP)  ; LAB_0056891f
    PUSH dword ptr [EBP + 0x92]         ; 0056896c
        ;   Label: caseD_3
    MOV EAX,dword ptr [EBX + 0x154]     ; 00568972
    PUSH EBX                            ; 00568978
    CALL dword ptr [EAX + 0x158]        ; 00568979
    ADD ESP,0x8                         ; 0056897f
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 00568982
    LEA ESI,[EBX + 0x158]               ; 00568988
    TEST EDX,EDX                        ; 0056898e
    JNZ 0x005689a3                      ; 00568990
        ;   XREF to: 005689a3 (CONDITIONAL_JUMP)  ; LAB_005689a3
    PUSH 0x1                            ; 00568992
    PUSH EDX                            ; 00568994
    PUSH ESI                            ; 00568995
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00568996
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056899b
    JMP 0x00568128                      ; 0056899e
        ;   XREF to: 00568128 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x3e32b8c2                     ; 005689a3
        ;   Label: LAB_005689a3
    LEA EAX,[EBX + 0x23ac]              ; 005689a8
    PUSH 0x3f000000                     ; 005689ae
    MOV dword ptr [EAX + 0x8],0x0       ; 005689b3
    XOR ECX,ECX                         ; 005689ba
    MOV EDX,dword ptr [EAX + 0x8]       ; 005689bc
    MOV dword ptr [EAX + 0x4],EDX       ; 005689bf
    MOV EDX,dword ptr [EAX + 0x4]       ; 005689c2
    MOV dword ptr [EAX],EDX             ; 005689c5
    MOV EAX,[0x00662678]                ; 005689c7 | FLOAT_00662678
    MOV dword ptr [EBP + 0xa],ECX       ; 005689cc
    MOV dword ptr [EBP + 0x12],EAX      ; 005689cf
    LEA EAX,[EBP + 0xa]                 ; 005689d2
    MOV dword ptr [EBP + 0xe],ECX       ; 005689d5
    PUSH EAX                            ; 005689d8
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005689d9
    PUSH EAX                            ; 005689df
    MOV EDX,dword ptr [EAX + 0x154]     ; 005689e0
    CALL dword ptr [EDX + 0xbc]         ; 005689e6
    ADD ESP,0x4                         ; 005689ec
    PUSH EAX                            ; 005689ef
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005689f0
    ADD EAX,0x20                        ; 005689f6
    PUSH EAX                            ; 005689f9
    PUSH EBX                            ; 005689fa
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 005689fb
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr)
    LEA EDX,[EBX + 0x20]                ; 00568a00
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00568a03
    FLD float ptr [EDX]                 ; 00568a09
    FSUB float ptr [EAX + 0x20]         ; 00568a0b
    FSTP float ptr [EBP + 0xffffff6e]   ; 00568a0e
    FLD float ptr [EDX + 0x4]           ; 00568a14
    FSUB float ptr [EAX + 0x24]         ; 00568a17
    FST float ptr [EBP + 0xffffff72]    ; 00568a1a
    FMUL float ptr [EBP + 0xffffff72]   ; 00568a20
    FLD float ptr [EBP + 0xffffff6e]    ; 00568a26
    FMUL ST0                            ; 00568a2c
    FLD float ptr [EDX + 0x8]           ; 00568a2e
    FSUB float ptr [EAX + 0x28]         ; 00568a31
    FXCH                                ; 00568a34
    FADDP ST2,ST0                       ; 00568a36
    FST float ptr [EBP + 0xffffff76]    ; 00568a38
    FMUL float ptr [EBP + 0xffffff76]   ; 00568a3e
    FADDP                               ; 00568a44
    FSQRT                               ; 00568a46
    ADD ESP,0x18                        ; 00568a48
    FCOMP float ptr [0x00662684]        ; 00568a4b | FLOAT_00662684
    FNSTSW AX                           ; 00568a51
    SAHF                                ; 00568a53
    JNC 0x00568ac3                      ; 00568a54
        ;   XREF to: 00568ac3 (CONDITIONAL_JUMP)  ; LAB_00568ac3
    PUSH 0x3f000000                     ; 00568a56
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 00568a5b
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 00568a60
    TEST EAX,EAX                        ; 00568a63
    JZ 0x00568a9c                       ; 00568a65
        ;   XREF to: 00568a9c (CONDITIONAL_JUMP)  ; LAB_00568a9c
    PUSH 0x3f000000                     ; 00568a67
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 00568a6c
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 00568a71
    TEST EAX,EAX                        ; 00568a74
    JZ 0x00568a8a                       ; 00568a76
        ;   XREF to: 00568a8a (CONDITIONAL_JUMP)  ; LAB_00568a8a
    PUSH 0x1                            ; 00568a78
    PUSH 0xe                            ; 00568a7a
    PUSH ESI                            ; 00568a7c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00568a7d
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00568a82
    JMP 0x00568128                      ; 00568a85
        ;   XREF to: 00568128 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 00568a8a
        ;   Label: LAB_00568a8a
    PUSH 0xf                            ; 00568a8c
    PUSH ESI                            ; 00568a8e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00568a8f
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00568a94
    JMP 0x00568128                      ; 00568a97
        ;   XREF to: 00568128 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x3f000000                     ; 00568a9c
        ;   Label: LAB_00568a9c
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 00568aa1
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 00568aa6
    TEST EAX,EAX                        ; 00568aa9
    JZ 0x0056878f                       ; 00568aab
        ;   XREF to: 0056878f (CONDITIONAL_JUMP)  ; LAB_0056878f
    PUSH 0x1                            ; 00568ab1
    PUSH 0x4                            ; 00568ab3
    PUSH ESI                            ; 00568ab5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00568ab6
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00568abb
    JMP 0x00568128                      ; 00568abe
        ;   XREF to: 00568128 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x3dcccccd                     ; 00568ac3
        ;   Label: LAB_00568ac3
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 00568ac8
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 00568acd
    TEST EAX,EAX                        ; 00568ad0
    JZ 0x00568128                       ; 00568ad2
        ;   XREF to: 00568128 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x3f000000                     ; 00568ad8
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 00568add
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 00568ae2
    TEST EAX,EAX                        ; 00568ae5
    JZ 0x00568a8a                       ; 00568ae7
        ;   XREF to: 00568a8a (CONDITIONAL_JUMP)  ; LAB_00568a8a
    PUSH 0x1                            ; 00568ae9
    PUSH 0xe                            ; 00568aeb
    PUSH ESI                            ; 00568aed
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00568aee
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00568af3
    JMP 0x00568128                      ; 00568af6
        ;   XREF to: 00568128 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH dword ptr [EBP + 0x92]         ; 00568afb
        ;   Label: caseD_f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00568b01
    PUSH EBX                            ; 00568b07
    CALL dword ptr [EAX + 0x158]        ; 00568b08
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 00568b0e
    ADD ESP,0x8                         ; 00568b14
    TEST ECX,ECX                        ; 00568b17
    JNZ 0x00568b32                      ; 00568b19
        ;   XREF to: 00568b32 (CONDITIONAL_JUMP)  ; LAB_00568b32
    PUSH 0x1                            ; 00568b1b
    PUSH ECX                            ; 00568b1d
    LEA EAX,[EBX + 0x158]               ; 00568b1e
    PUSH EAX                            ; 00568b24
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00568b25
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00568b2a
    JMP 0x00568128                      ; 00568b2d
        ;   XREF to: 00568128 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV EDX,ECX                         ; 00568b32
        ;   Label: LAB_00568b32
    LEA EAX,[EBX + 0x20]                ; 00568b34
    FLD float ptr [EDX + 0x20]          ; 00568b37
    FSUB float ptr [EAX]                ; 00568b3a
    FSTP float ptr [EBP + -0x6e]        ; 00568b3c
    FLD float ptr [EDX + 0x24]          ; 00568b3f
    FSUB float ptr [EAX + 0x4]          ; 00568b42
    FSTP float ptr [EBP + -0x6a]        ; 00568b45
    FLD float ptr [EDX + 0x28]          ; 00568b48
    FSUB float ptr [EAX + 0x8]          ; 00568b4b
    LEA EAX,[EBP + -0x6e]               ; 00568b4e
    PUSH EAX                            ; 00568b51
    LEA EAX,[EBP + -0x4a]               ; 00568b52
    PUSH EAX                            ; 00568b55
    FSTP float ptr [EBP + -0x66]        ; 00568b56
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00568b59
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    MOV EAX,dword ptr [EBP + -0x46]     ; 00568b5e
    ADD ESP,0x8                         ; 00568b61
    MOV dword ptr [EBX + 0x34],EAX      ; 00568b64
    JMP 0x00568128                      ; 00568b67
        ;   XREF to: 00568128 (UNCONDITIONAL_JUMP)  ; caseD_c

