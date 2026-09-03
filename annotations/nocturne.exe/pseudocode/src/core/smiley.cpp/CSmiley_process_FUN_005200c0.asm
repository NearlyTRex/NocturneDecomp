; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_smiley_cpp_CSmiley_process_FUN_005200c0(CSmiley *this_ptr,float delta_time)
;
; Parameters:
; CSmiley *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x1cc]:1  local_1cc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined        Stack[-0x190]:1  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined        Stack[-0x154]:1  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0xe8]:4  local_e8
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xd0]:1  local_d0
; undefined        Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined        Stack[-0xb8]:1  local_b8
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined1* switchdataD_00520090 = 005206a7
;   TerminatedCString s_s_confused_while_walking_00592052
;   TerminatedCString s_Capture_0059207c
;   TerminatedCString s_Capture_00592084
;   double DOUBLE_0059208d = 3.14159265350000
;   double DOUBLE_00592095 = 0.523598775583333
;   double DOUBLE_0059209d = 32
;   float FLOAT_005a1f98 = 2.5
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   undefined4 DAT_005b7650
;   CGore* g_CGore_PTR_005b96c4 = 01c78c7c
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   CConsole g_CConsole_0077ad0c
;   CDemonSet g_CDemonSet_01e57284
;   undefined4 DAT_02da8a7c
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042a150
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00425960
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_CCharacter_process_FUN_004259f0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00428c00
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005200c0
        ;   Label: core_smiley.cpp_CSmiley_process_FUN_005200c0
    PUSH ESI                            ; 005200c1
    PUSH EDI                            ; 005200c2
    PUSH EBP                            ; 005200c3
    MOV EBP,ESP                         ; 005200c4
    SUB ESP,0x1bc                       ; 005200c6
    SUB EBP,0x7a                        ; 005200cc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005200cf
    FLD float ptr [EBX + 0xbd60]        ; 005200d5
    FSUB float ptr [EBP + 0x92]         ; 005200db
    FST float ptr [EBX + 0xbd60]        ; 005200e1
    FLDZ                                ; 005200e7
    FCOMPP                              ; 005200e9
    FNSTSW AX                           ; 005200eb
    SAHF                                ; 005200ed
    JA 0x005201df                       ; 005200ee
        ;   XREF to: 005201df (CONDITIONAL_JUMP)  ; LAB_005201df
    MOV EAX,dword ptr [EBX + 0xbd54]    ; 005200f4
        ;   Label: LAB_005200f4
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 005200fa
    JNZ 0x0052015d                      ; 00520102
        ;   XREF to: 0052015d (CONDITIONAL_JUMP)  ; LAB_0052015d
    PUSH EBX                            ; 00520104
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00520105
    CALL dword ptr [EAX + 0x104]        ; 0052010b
    ADD ESP,0x4                         ; 00520111
    TEST EAX,EAX                        ; 00520114
    JNZ 0x0052015d                      ; 00520116
        ;   XREF to: 0052015d (CONDITIONAL_JUMP)  ; LAB_0052015d
    LEA EAX,[EBP + 0xfffffebe]          ; 00520118
    PUSH EAX                            ; 0052011e
    XOR ESI,ESI                         ; 0052011f
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 00520121
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    MOV ECX,0x461c3f9a                  ; 00520126
    LEA EAX,[EBP + 0xfffffebe]          ; 0052012b
    ADD ESP,0x4                         ; 00520131
    MOV dword ptr [EBP + 0xfffffeee],ESI ; 00520134
    MOV dword ptr [EBP + 0xfffffef2],EBX ; 0052013a
    PUSH EAX                            ; 00520140
    MOV dword ptr [EBP + 0xfffffef6],EBX ; 00520141
    MOV dword ptr [EBP + 0xfffffec2],ECX ; 00520147
    PUSH EBX                            ; 0052014d
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0052014e
    CALL dword ptr [EDX + 0x100]        ; 00520154
    ADD ESP,0x8                         ; 0052015a
    PUSH dword ptr [EBP + 0x92]         ; 0052015d
        ;   Label: LAB_0052015d
    PUSH EBX                            ; 00520163
    CALL core_charactr.cpp_CCharacter_process_FUN_004259f0 ; 00520164
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_004259f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00520169
    TEST EAX,EAX                        ; 0052016c
    JZ 0x00520410                       ; 0052016e
        ;   XREF to: 00520410 (CONDITIONAL_JUMP)  ; LAB_00520410
    LEA EAX,[EBX + 0x23a4]              ; 00520174
    MOV dword ptr [EAX + 0x8],0x0       ; 0052017a
    FLD float ptr [EBP + 0x92]          ; 00520181
    MOV EDX,dword ptr [EAX + 0x8]       ; 00520187
    MOV dword ptr [EAX + 0x4],EDX       ; 0052018a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0052018d
    MOV dword ptr [EAX],EDX             ; 00520190
    FMUL float ptr [EBX + 0xbc8c]       ; 00520192
    LEA ESI,[EBX + 0x150]               ; 00520198
    FSTP float ptr [EBP + 0x62]         ; 0052019e
    MOV EDI,0x1                         ; 005201a1
    FLD float ptr [EBP + 0x62]          ; 005201a6
        ;   Label: LAB_005201a6
    FLDZ                                ; 005201a9
    FCOMPP                              ; 005201ab
    FNSTSW AX                           ; 005201ad
    SAHF                                ; 005201af
    JNC 0x005202e6                      ; 005201b0
        ;   XREF to: 005202e6 (CONDITIONAL_JUMP)  ; LAB_005202e6
    LEA EAX,[EBP + 0x62]                ; 005201b6
    PUSH EAX                            ; 005201b9
    PUSH ESI                            ; 005201ba
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 005201bb
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 005201c0
    MOV EDX,EAX                         ; 005201c3
    CMP EAX,0x66                        ; 005201c5
    JNC 0x005202c8                      ; 005201c8
        ;   XREF to: 005202c8 (CONDITIONAL_JUMP)  ; LAB_005202c8
    CMP EAX,0x65                        ; 005201ce
    JZ 0x005201ee                       ; 005201d1
        ;   XREF to: 005201ee (CONDITIONAL_JUMP)  ; LAB_005201ee
    PUSH EDX                            ; 005201d3
    PUSH EBX                            ; 005201d4
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 005201d5
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042add0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005201da
    JMP 0x005201a6                      ; 005201dd
        ;   XREF to: 005201a6 (UNCONDITIONAL_JUMP)  ; LAB_005201a6
    MOV dword ptr [EBX + 0xbd60],0x0    ; 005201df
        ;   Label: LAB_005201df
    JMP 0x005200f4                      ; 005201e9
        ;   XREF to: 005200f4 (UNCONDITIONAL_JUMP)  ; LAB_005200f4
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 005201ee
        ;   Label: LAB_005201ee
    TEST EAX,EAX                        ; 005201f4
    JNZ 0x00520205                      ; 005201f6
        ;   XREF to: 00520205 (CONDITIONAL_JUMP)  ; LAB_00520205
    PUSH EDI                            ; 005201f8
    PUSH EDI                            ; 005201f9
    PUSH ESI                            ; 005201fa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005201fb
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00520200
    JMP 0x005201a6                      ; 00520203
        ;   XREF to: 005201a6 (UNCONDITIONAL_JUMP)  ; LAB_005201a6
    PUSH 0x0                            ; 00520205
        ;   Label: LAB_00520205
    PUSH EBX                            ; 00520207
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00520208
    PUSH EAX                            ; 0052020e
    CALL dword ptr [EDX + 0xe4]         ; 0052020f
    ADD ESP,0xc                         ; 00520215
    TEST EAX,EAX                        ; 00520218
    JNZ 0x005201a6                      ; 0052021a
        ;   XREF to: 005201a6 (CONDITIONAL_JUMP)  ; LAB_005201a6
    PUSH EDI                            ; 0052021c
    PUSH EDI                            ; 0052021d
    PUSH ESI                            ; 0052021e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0052021f
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00520224
    JMP 0x005201a6                      ; 00520227
        ;   XREF to: 005201a6 (UNCONDITIONAL_JUMP)  ; LAB_005201a6
    MOV ECX,dword ptr [EBX + 0xbca4]    ; 0052022c
        ;   Label: LAB_0052022c
    TEST ECX,ECX                        ; 00520232
    JZ 0x005201a6                       ; 00520234
        ;   XREF to: 005201a6 (CONDITIONAL_JUMP)  ; LAB_005201a6
    PUSH ECX                            ; 0052023a
    MOV EDX,dword ptr [ECX + 0x14c]     ; 0052023b
    CALL dword ptr [EDX + 0xe8]         ; 00520241
    ADD ESP,0x4                         ; 00520247
    JMP 0x005201a6                      ; 0052024a
        ;   XREF to: 005201a6 (UNCONDITIONAL_JUMP)  ; LAB_005201a6
    MOV EDX,dword ptr [EBX + 0xbd58]    ; 0052024f
        ;   Label: LAB_0052024f
    INC EDX                             ; 00520255
    MOV dword ptr [EBX + 0xbd58],EDX    ; 00520256
    CMP EDX,0x3                         ; 0052025c
    JL 0x005201a6                       ; 0052025f
        ;   XREF to: 005201a6 (CONDITIONAL_JUMP)  ; LAB_005201a6
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00520265
    TEST EAX,EAX                        ; 0052026b
    JZ 0x005202a8                       ; 0052026d
        ;   XREF to: 005202a8 (CONDITIONAL_JUMP)  ; LAB_005202a8
    LEA EAX,[EBP + 0xffffff72]          ; 0052026f
    PUSH EAX                            ; 00520275
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 00520276
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    MOV EDX,0x4                         ; 0052027b
    ADD ESP,0x4                         ; 00520280
    MOV dword ptr [EBP + -0x5e],EDX     ; 00520283
    LEA EDX,[EBP + 0xffffff72]          ; 00520286
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 0052028c
    PUSH EDX                            ; 00520292
    MOV ECX,dword ptr [EAX + 0x14c]     ; 00520293
    PUSH EAX                            ; 00520299
    CALL dword ptr [ECX + 0x100]        ; 0052029a
    ADD ESP,0x8                         ; 005202a0
    JMP 0x005201a6                      ; 005202a3
        ;   XREF to: 005201a6 (UNCONDITIONAL_JUMP)  ; LAB_005201a6
    PUSH EAX                            ; 005202a8
        ;   Label: LAB_005202a8
    MOV EDX,dword ptr [EAX + 0x14c]     ; 005202a9
    CALL dword ptr [EDX + 0xe8]         ; 005202af
    ADD ESP,0x4                         ; 005202b5
    PUSH EDI                            ; 005202b8
    PUSH EDI                            ; 005202b9
    PUSH ESI                            ; 005202ba
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005202bb
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005202c0
    JMP 0x005201a6                      ; 005202c3
        ;   XREF to: 005201a6 (UNCONDITIONAL_JUMP)  ; LAB_005201a6
    JBE 0x0052022c                      ; 005202c8
        ;   XREF to: 0052022c (CONDITIONAL_JUMP)  ; LAB_0052022c
        ;   Label: LAB_005202c8
    CMP EAX,0x67                        ; 005202ce
    JZ 0x0052024f                       ; 005202d1
        ;   XREF to: 0052024f (CONDITIONAL_JUMP)  ; LAB_0052024f
    PUSH EDX                            ; 005202d7
    PUSH EBX                            ; 005202d8
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 005202d9
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042add0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005202de
    JMP 0x005201a6                      ; 005202e1
        ;   XREF to: 005201a6 (UNCONDITIONAL_JUMP)  ; LAB_005201a6
    FLD float ptr [EBX + 0xbc8c]        ; 005202e6
        ;   Label: LAB_005202e6
    FLD float ptr [EBP + 0x92]          ; 005202ec
    FMUL double ptr [0x0059208d]        ; 005202f2 | DOUBLE_0059208d
    FMULP                               ; 005202f8
    FLD float ptr [EBX + 0x23ac]        ; 005202fa
    LEA ESI,[EBX + 0x150]               ; 00520300
    FSTP float ptr [EBX + 0x242c]       ; 00520306
    PUSH ESI                            ; 0052030c
    FSTP float ptr [EBX + 0x2430]       ; 0052030d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00520313
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00520318
    PUSH dword ptr [EBP + 0x92]         ; 0052031b
    MOV EDI,dword ptr [EAX + 0x24]      ; 00520321
    PUSH EBX                            ; 00520324
    MOV dword ptr [EBP + 0x66],EDI      ; 00520325
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00428c00 ; 00520328
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00428c00(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0052032d
    TEST EAX,EAX                        ; 00520330
    JZ 0x00520909                       ; 00520332
        ;   XREF to: 00520909 (CONDITIONAL_JUMP)  ; LAB_00520909
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 00520338
    CMP EAX,0x2                         ; 0052033e
    JNC 0x00520443                      ; 00520341
        ;   XREF to: 00520443 (CONDITIONAL_JUMP)  ; LAB_00520443
    CMP EAX,0x1                         ; 00520347
    JNZ 0x0052044e                      ; 0052034a
        ;   XREF to: 0052044e (CONDITIONAL_JUMP)  ; LAB_0052044e
    PUSH 0x1                            ; 00520350
        ;   Label: LAB_00520350
    PUSH 0x2                            ; 00520352
    LEA EAX,[EBX + 0x150]               ; 00520354
        ;   Label: LAB_00520354
    PUSH EAX                            ; 0052035a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0052035b
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00520360
        ;   Label: LAB_00520360
    LEA EAX,[EBX + 0x23a4]              ; 00520363
    MOV dword ptr [EAX + 0x8],0x0       ; 00520369
    MOV EDX,dword ptr [EAX + 0x8]       ; 00520370
    MOV dword ptr [EAX + 0x4],EDX       ; 00520373
    MOV EDX,dword ptr [EAX + 0x4]       ; 00520376
    MOV dword ptr [EAX],EDX             ; 00520379
    FLD float ptr [EBX + 0xbd24]        ; 0052037b
        ;   Label: caseD_3
    FLDZ                                ; 00520381
    FCOMPP                              ; 00520383
    FNSTSW AX                           ; 00520385
    SAHF                                ; 00520387
    JNC 0x0052039c                      ; 00520388
        ;   XREF to: 0052039c (CONDITIONAL_JUMP)  ; LAB_0052039c
    FLD float ptr [EBX + 0xbd24]        ; 0052038a
    FSUB float ptr [EBP + 0x92]         ; 00520390
    FSTP float ptr [EBX + 0xbd24]       ; 00520396
    CMP dword ptr [EBP + 0x66],0xb      ; 0052039c
        ;   Label: LAB_0052039c
    JNZ 0x0052091c                      ; 005203a0
        ;   XREF to: 0052091c (CONDITIONAL_JUMP)  ; LAB_0052091c
    LEA ESI,[EBX + 0x23a4]              ; 005203a6
    PUSH ESI                            ; 005203ac
    LEA EAX,[EBP + 0x1a]                ; 005203ad
    PUSH EAX                            ; 005203b0
    PUSH EBX                            ; 005203b1
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 005203b2
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 005203b7
    LEA EAX,[EBX + 0x20]                ; 005203b9
    FLD float ptr [EDX]                 ; 005203bc
    FADD float ptr [EAX]                ; 005203be
    FSTP float ptr [EAX]                ; 005203c0
    FLD float ptr [EDX + 0x4]           ; 005203c2
    FADD float ptr [EAX + 0x4]          ; 005203c5
    FSTP float ptr [EAX + 0x4]          ; 005203c8
    FLD float ptr [EDX + 0x8]           ; 005203cb
    FADD float ptr [EAX + 0x8]          ; 005203ce
    FSTP float ptr [EAX + 0x8]          ; 005203d1
    MOV dword ptr [ESI + 0x8],0x0       ; 005203d4
    ADD ESP,0xc                         ; 005203db
    MOV EAX,dword ptr [ESI + 0x8]       ; 005203de
    MOV dword ptr [ESI + 0x4],EAX       ; 005203e1
    MOV EAX,dword ptr [ESI + 0x4]       ; 005203e4
    MOV dword ptr [ESI],EAX             ; 005203e7
    PUSH EBX                            ; 005203e9
        ;   Label: LAB_005203e9
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 005203ea
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_004259a0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005203ef
    LEA EAX,[EBX + 0x150]               ; 005203f2
    PUSH EAX                            ; 005203f8
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 005203f9
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005203fe
    PUSH dword ptr [EBP + 0x92]         ; 00520401
    PUSH EBX                            ; 00520407
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042a150 ; 00520408
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042a150(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0052040d
    LEA ESP,[EBP + 0x7a]                ; 00520410
        ;   Label: LAB_00520410
    POP EBP                             ; 00520413
    POP EDI                             ; 00520414
    POP ESI                             ; 00520415
    POP EBX                             ; 00520416
    RET                                 ; 00520417
    PUSH 0x1                            ; 00520418
        ;   Label: LAB_00520418
    PUSH 0x1                            ; 0052041a
    LEA EAX,[EBX + 0x150]               ; 0052041c
    PUSH EAX                            ; 00520422
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00520423
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00520428
    PUSH EBX                            ; 0052042b
    MOV EAX,0x592052                    ; 0052042c | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 00520431 | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x005ad350]      ; 00520432 | g_CConsole_PTR_005ad350
    PUSH EDX                            ; 00520438 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00520439
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    JMP 0x00520360                      ; 0052043e
        ;   XREF to: 00520360 (UNCONDITIONAL_JUMP)  ; LAB_00520360
    JBE 0x00520350                      ; 00520443
        ;   XREF to: 00520350 (CONDITIONAL_JUMP)  ; LAB_00520350
        ;   Label: LAB_00520443
    CMP EAX,0x3                         ; 00520449
    JZ 0x00520418                       ; 0052044c
        ;   XREF to: 00520418 (CONDITIONAL_JUMP)  ; LAB_00520418
    PUSH 0x1                            ; 0052044e
        ;   Label: LAB_0052044e
    PUSH 0x1                            ; 00520450
    JMP 0x00520354                      ; 00520452
        ;   XREF to: 00520354 (UNCONDITIONAL_JUMP)  ; LAB_00520354
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 00520457
        ;   Label: caseD_6
    TEST EDX,EDX                        ; 0052045d
    JNZ 0x00520485                      ; 0052045f
        ;   XREF to: 00520485 (CONDITIONAL_JUMP)  ; LAB_00520485
    MOV EAX,EDX                         ; 00520461
    PUSH EAX                            ; 00520463
    MOV EDX,dword ptr [EDX + 0x14c]     ; 00520464
    CALL dword ptr [EDX + 0xe8]         ; 0052046a
    ADD ESP,0x4                         ; 00520470
    PUSH 0x1                            ; 00520473
    PUSH 0x1                            ; 00520475
    PUSH ESI                            ; 00520477
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00520478
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052047d
    JMP 0x0052037b                      ; 00520480
        ;   XREF to: 0052037b (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + 0xfffffefa]          ; 00520485
        ;   Label: LAB_00520485
    PUSH EAX                            ; 0052048b
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0052048c
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00520491
    PUSH 0x41700000                     ; 00520494
    PUSH 0x40e00000                     ; 00520499
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0052049e
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 005204a3
    ADD ESP,0x8                         ; 005204a6
    LEA EAX,[EBP + 0xfffffefa]          ; 005204a9
    MOV EDX,dword ptr [0x02da8a7c]      ; 005204af | DAT_02da8a7c
    PUSH EAX                            ; 005204b5
    LEA EAX,[EDX*0x4 + 0x0]             ; 005204b6
    MOV dword ptr [EBP + 0xffffff2e],EBX ; 005204bd
    SUB EAX,EDX                         ; 005204c3
    MOV dword ptr [EBP + 0xffffff32],EBX ; 005204c5
    SHL EAX,0x4                         ; 005204cb
    LEA EDX,[EBX + 0xfd0]               ; 005204ce
    ADD EAX,EDX                         ; 005204d4
    PUSH 0x3f800000                     ; 005204d6
    PUSH EAX                            ; 005204db
    PUSH 0x2dd1184                      ; 005204dc | DAT_02dd1184
    LEA EAX,[EBP + -0x2e]               ; 005204e1
    FLD float ptr [EBP + 0x76]          ; 005204e4
    PUSH EAX                            ; 005204e7
    FSTP float ptr [EBP + 0xfffffefe]   ; 005204e8
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 005204ee
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 005204f3
    PUSH EAX                            ; 005204f6
    LEA EAX,[EBP + -0x52]               ; 005204f7
    PUSH EAX                            ; 005204fa
    PUSH EBX                            ; 005204fb
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 005204fc
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00520501
    PUSH EAX                            ; 00520504
    PUSH EBX                            ; 00520505
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 00520506
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0052050b
    JMP 0x0052037b                      ; 0052050e
        ;   XREF to: 0052037b (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EDI,dword ptr [EBX + 0xbca4]    ; 00520513
        ;   Label: caseD_9
    TEST EDI,EDI                        ; 00520519
    JZ 0x00520529                       ; 0052051b
        ;   XREF to: 00520529 (CONDITIONAL_JUMP)  ; LAB_00520529
    MOV EDX,dword ptr [EDI + 0x2590]    ; 0052051d
    MOV EAX,EDI                         ; 00520523
    TEST EDX,EDX                        ; 00520525
    JNZ 0x0052053b                      ; 00520527
        ;   XREF to: 0052053b (CONDITIONAL_JUMP)  ; LAB_0052053b
    PUSH 0x1                            ; 00520529
        ;   Label: LAB_00520529
    PUSH 0x1                            ; 0052052b
    PUSH ESI                            ; 0052052d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0052052e
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00520533
    JMP 0x0052037b                      ; 00520536
        ;   XREF to: 0052037b (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH EDI                            ; 0052053b
        ;   Label: LAB_0052053b
    MOV EDX,dword ptr [EDI + 0x14c]     ; 0052053c
    CALL dword ptr [EDX + 0x104]        ; 00520542
    ADD ESP,0x4                         ; 00520548
    TEST EAX,EAX                        ; 0052054b
    JZ 0x00520577                       ; 0052054d
        ;   XREF to: 00520577 (CONDITIONAL_JUMP)  ; LAB_00520577
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 0052054f
    PUSH EAX                            ; 00520555
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00520556
    CALL dword ptr [EDX + 0xe8]         ; 0052055c
    ADD ESP,0x4                         ; 00520562
    PUSH 0x1                            ; 00520565
    PUSH 0x1                            ; 00520567
    PUSH ESI                            ; 00520569
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0052056a
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052056f
    JMP 0x0052037b                      ; 00520572
        ;   XREF to: 0052037b (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + 0xffffff36]          ; 00520577
        ;   Label: LAB_00520577
    PUSH EAX                            ; 0052057d
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0052057e
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00520583
    PUSH 0x41700000                     ; 00520586
    PUSH 0x40e00000                     ; 0052058b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00520590
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00520595
    ADD ESP,0x8                         ; 00520598
    LEA EAX,[EBP + 0xffffff36]          ; 0052059b
    MOV EDX,dword ptr [0x02da8a7c]      ; 005205a1 | DAT_02da8a7c
    PUSH EAX                            ; 005205a7
    LEA EAX,[EDX*0x4 + 0x0]             ; 005205a8
    SUB EAX,EDX                         ; 005205af
    MOV dword ptr [EBP + 0xffffff6a],EBX ; 005205b1
    MOV EDX,EAX                         ; 005205b7
    MOV dword ptr [EBP + 0xffffff6e],EBX ; 005205b9
    SHL EDX,0x4                         ; 005205bf
    LEA EAX,[EBX + 0xfd0]               ; 005205c2
    ADD EAX,EDX                         ; 005205c8
    PUSH 0x3f800000                     ; 005205ca
    PUSH EAX                            ; 005205cf
    PUSH 0x2dd1184                      ; 005205d0 | DAT_02dd1184
    LEA EAX,[EBP + 0x2]                 ; 005205d5
    FLD float ptr [EBP + 0x76]          ; 005205d8
    PUSH EAX                            ; 005205db
    FSTP float ptr [EBP + 0xffffff3a]   ; 005205dc
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 005205e2
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 005205e7
    PUSH EAX                            ; 005205ea
    LEA EAX,[EBP + -0x46]               ; 005205eb
    PUSH EAX                            ; 005205ee
    PUSH EBX                            ; 005205ef
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 005205f0
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005205f5
    PUSH EAX                            ; 005205f8
    PUSH EBX                            ; 005205f9
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 005205fa
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 005205ff
    JMP 0x0052037b                      ; 00520602
        ;   XREF to: 0052037b (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00520607
        ;   Label: caseD_a
    PUSH EAX                            ; 0052060d
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0052060e
    CALL dword ptr [EDX + 0x104]        ; 00520614
    ADD ESP,0x4                         ; 0052061a
    TEST EAX,EAX                        ; 0052061d
    JZ 0x0052037b                       ; 0052061f
        ;   XREF to: 0052037b (CONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00520625
    PUSH EAX                            ; 0052062b
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0052062c
    CALL dword ptr [EDX + 0xe8]         ; 00520632
    ADD ESP,0x4                         ; 00520638
    PUSH 0x1                            ; 0052063b
    PUSH 0x1                            ; 0052063d
    PUSH ESI                            ; 0052063f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00520640
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00520645
    JMP 0x0052037b                      ; 00520648
        ;   XREF to: 0052037b (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV ECX,dword ptr [EBX + 0xbc90]    ; 0052064d
        ;   Label: caseD_8
    TEST ECX,ECX                        ; 00520653
    JNZ 0x0052037b                      ; 00520655
        ;   XREF to: 0052037b (CONDITIONAL_JUMP)  ; caseD_7
    MOV EDI,dword ptr [EBX + 0xdc]      ; 0052065b
    TEST EDI,EDI                        ; 00520661
    JNZ 0x0052037b                      ; 00520663
        ;   XREF to: 0052037b (CONDITIONAL_JUMP)  ; caseD_7
    PUSH ECX                            ; 00520669
    LEA EAX,[EBP + 0x4a]                ; 0052066a
    PUSH EAX                            ; 0052066d
    PUSH ESI                            ; 0052066e
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 0052066f
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00520674
    PUSH EAX                            ; 00520677
    LEA EAX,[EBP + 0x3e]                ; 00520678
    PUSH EAX                            ; 0052067b
    PUSH EBX                            ; 0052067c
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0052067d
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00520682
    PUSH EDI                            ; 00520685
    LEA EAX,[EBP + 0x3e]                ; 00520686
    PUSH EAX                            ; 00520689
    MOV EAX,[0x005b96c4]                ; 0052068a | g_CGore_PTR_005b96c4
    PUSH EAX                            ; 0052068f
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004b0480 ; 00520690
        ;   XREF to: 004b0480 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004b0480(CGore * this_ptr, CVector3f * position, int blood_type)
    ADD ESP,0xc                         ; 00520695
    MOV dword ptr [EBX + 0xbc90],0x1    ; 00520698
    JMP 0x0052037b                      ; 005206a2
        ;   XREF to: 0052037b (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x59207c                       ; 005206a7 | = "Capture"
        ;   Label: caseD_1
    MOV EDI,dword ptr [0x005b7650]      ; 005206ac | DAT_005b7650
    PUSH EDI                            ; 005206b2
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 005206b3
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005206b8
    TEST EAX,EAX                        ; 005206bb
    JNZ 0x0052037b                      ; 005206bd
        ;   XREF to: 0052037b (CONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 005206c3
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005206c9
    PUSH EBX                            ; 005206cf
    CALL dword ptr [EAX + 0x13c]        ; 005206d0
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 005206d6
    ADD ESP,0x8                         ; 005206dc
    TEST EAX,EAX                        ; 005206df
    JZ 0x0052037b                       ; 005206e1
        ;   XREF to: 0052037b (CONDITIONAL_JUMP)  ; caseD_7
    LEA EDX,[EBX + 0x20]                ; 005206e7
    FLD float ptr [EAX + 0x20]          ; 005206ea
    FSUB float ptr [EDX]                ; 005206ed
    FSTP float ptr [EBP + 0x32]         ; 005206ef
    FLD float ptr [EAX + 0x24]          ; 005206f2
    FSUB float ptr [EDX + 0x4]          ; 005206f5
    FST float ptr [EBP + 0x36]          ; 005206f8
    FMUL float ptr [EBP + 0x36]         ; 005206fb
    FLD float ptr [EBP + 0x32]          ; 005206fe
    FMUL ST0                            ; 00520701
    FLD float ptr [EAX + 0x28]          ; 00520703
    FSUB float ptr [EDX + 0x8]          ; 00520706
    FXCH                                ; 00520709
    FADDP ST2,ST0                       ; 0052070b
    FST float ptr [EBP + 0x3a]          ; 0052070d
    FMUL float ptr [EBP + 0x3a]         ; 00520710
    FADDP                               ; 00520713
    FSQRT                               ; 00520715
    FLD float ptr [0x005a1f98]          ; 00520717 | FLOAT_005a1f98
    FLD1                                ; 0052071d
    FADDP                               ; 0052071f
    FXCH                                ; 00520721
    FSTP float ptr [EBP + 0x72]         ; 00520723
    MOV EAX,dword ptr [EBP + 0x72]      ; 00520726
    FLD float ptr [EBP + 0x72]          ; 00520729
    MOV dword ptr [EBP + 0x6a],EAX      ; 0052072c
    FCOMPP                              ; 0052072f
    FNSTSW AX                           ; 00520731
    SAHF                                ; 00520733
    JC 0x00520760                       ; 00520734
        ;   XREF to: 00520760 (CONDITIONAL_JUMP)  ; LAB_00520760
    FLD float ptr [EBP + 0x6a]          ; 00520736
        ;   Label: LAB_00520736
    FCOMP float ptr [EBX + 0xbd28]      ; 00520739
    FNSTSW AX                           ; 0052073f
    SAHF                                ; 00520741
    JNC 0x0052037b                      ; 00520742
        ;   XREF to: 0052037b (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 00520748
    PUSH 0x2                            ; 0052074a
    LEA EAX,[EBX + 0x150]               ; 0052074c
    PUSH EAX                            ; 00520752
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00520753
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00520758
    JMP 0x0052037b                      ; 0052075b
        ;   XREF to: 0052037b (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + 0x32]                ; 00520760
        ;   Label: LAB_00520760
    PUSH EAX                            ; 00520763
    LEA EAX,[EBP + -0x3a]               ; 00520764
    PUSH EAX                            ; 00520767
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00520768
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + -0x36]         ; 0052076d
    ADD ESP,0x8                         ; 00520770
    FSUB float ptr [EBX + 0x34]         ; 00520773
    SUB ESP,0x4                         ; 00520776
    FSTP float ptr [ESP]                ; 00520779
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0052077c
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00520781
    FLD float ptr [EBP + 0x76]          ; 00520784
    FABS                                ; 00520787
    ADD ESP,0x4                         ; 00520789
    FCOMP double ptr [0x00592095]       ; 0052078c | DOUBLE_00592095
    FNSTSW AX                           ; 00520792
    SAHF                                ; 00520794
    JNC 0x00520736                      ; 00520795
        ;   XREF to: 00520736 (CONDITIONAL_JUMP)  ; LAB_00520736
    PUSH 0x1                            ; 00520797
    PUSH 0x9                            ; 00520799
    PUSH ESI                            ; 0052079b
    MOV dword ptr [EBX + 0xbd58],0x0    ; 0052079c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005207a6
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005207ab
    JMP 0x00520736                      ; 005207ae
        ;   XREF to: 00520736 (UNCONDITIONAL_JUMP)  ; LAB_00520736
    PUSH 0x592084                       ; 005207b0 | = "Capture"
        ;   Label: caseD_2
    MOV ECX,dword ptr [0x005b7650]      ; 005207b5 | DAT_005b7650
    PUSH ECX                            ; 005207bb
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 005207bc
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005207c1
    TEST EAX,EAX                        ; 005207c4
    JZ 0x005207da                       ; 005207c6
        ;   XREF to: 005207da (CONDITIONAL_JUMP)  ; LAB_005207da
    PUSH 0x1                            ; 005207c8
        ;   Label: LAB_005207c8
    PUSH 0x1                            ; 005207ca
    PUSH ESI                            ; 005207cc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005207cd
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005207d2
    JMP 0x0052037b                      ; 005207d5
        ;   XREF to: 0052037b (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 005207da
        ;   Label: LAB_005207da
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005207e0
    PUSH EBX                            ; 005207e6
    CALL dword ptr [EAX + 0x13c]        ; 005207e7
    MOV EDI,dword ptr [EBX + 0xbca4]    ; 005207ed
    ADD ESP,0x8                         ; 005207f3
    TEST EDI,EDI                        ; 005207f6
    JZ 0x005207c8                       ; 005207f8
        ;   XREF to: 005207c8 (CONDITIONAL_JUMP)  ; LAB_005207c8
    MOV EDX,dword ptr [EDI + 0x2590]    ; 005207fa
    MOV EAX,EDI                         ; 00520800
    CMP EBX,EDX                         ; 00520802
    JNZ 0x00520816                      ; 00520804
        ;   XREF to: 00520816 (CONDITIONAL_JUMP)  ; LAB_00520816
    PUSH EDI                            ; 00520806
    MOV EDX,dword ptr [EDI + 0x14c]     ; 00520807
    CALL dword ptr [EDX + 0xe8]         ; 0052080d
    ADD ESP,0x4                         ; 00520813
    MOV EAX,[0x005a1f98]                ; 00520816 | FLOAT_005a1f98
        ;   Label: LAB_00520816
    PUSH 0x3e32b8c2                     ; 0052081b
    MOV dword ptr [EBP + 0x6e],EAX      ; 00520820
    LEA EAX,[EBX + 0x23a4]              ; 00520823
    PUSH 0x3f000000                     ; 00520829
    MOV dword ptr [EAX + 0x8],0x0       ; 0052082e
    XOR ECX,ECX                         ; 00520835
    MOV EDX,dword ptr [EAX + 0x8]       ; 00520837
    MOV dword ptr [EAX + 0x4],EDX       ; 0052083a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0052083d
    MOV dword ptr [EAX],EDX             ; 00520840
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00520842
    MOV dword ptr [EBP + -0xa],ECX      ; 00520845
    MOV dword ptr [EBP + -0x2],EAX      ; 00520848
    LEA EAX,[EBP + -0xa]                ; 0052084b
    MOV dword ptr [EBP + -0x6],ECX      ; 0052084e
    PUSH EAX                            ; 00520851
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00520852
    PUSH EAX                            ; 00520858
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00520859
    CALL dword ptr [EDX + 0xbc]         ; 0052085f
    ADD ESP,0x4                         ; 00520865
    PUSH EAX                            ; 00520868
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00520869
    ADD EAX,0x20                        ; 0052086f
    PUSH EAX                            ; 00520872
    PUSH EBX                            ; 00520873
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 00520874
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00520879
    TEST EAX,EAX                        ; 0052087c
    JL 0x0052037b                       ; 0052087e
        ;   XREF to: 0052037b (CONDITIONAL_JUMP)  ; caseD_7
    JLE 0x0052037b                      ; 00520884
        ;   XREF to: 0052037b (CONDITIONAL_JUMP)  ; caseD_7
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 0052088a
    LEA EAX,[EBX + 0x20]                ; 00520890
    FLD float ptr [EDX + 0x20]          ; 00520893
    FSUB float ptr [EAX]                ; 00520896
    FSTP float ptr [EBP + -0x16]        ; 00520898
    FLD float ptr [EDX + 0x24]          ; 0052089b
    FSUB float ptr [EAX + 0x4]          ; 0052089e
    FST float ptr [EBP + -0x12]         ; 005208a1
    FMUL float ptr [EBP + -0x12]        ; 005208a4
    FLD float ptr [EBP + -0x16]         ; 005208a7
    FMUL ST0                            ; 005208aa
    FLD float ptr [EDX + 0x28]          ; 005208ac
    FSUB float ptr [EAX + 0x8]          ; 005208af
    FXCH                                ; 005208b2
    FADDP ST2,ST0                       ; 005208b4
    FST float ptr [EBP + -0xe]          ; 005208b6
    FMUL float ptr [EBP + -0xe]         ; 005208b9
    FADDP                               ; 005208bc
    FSQRT                               ; 005208be
    FLD float ptr [EBP + 0x6e]          ; 005208c0
    FLD1                                ; 005208c3
    FADDP                               ; 005208c5
    FXCH                                ; 005208c7
    FCOMPP                              ; 005208c9
    FNSTSW AX                           ; 005208cb
    SAHF                                ; 005208cd
    JNC 0x0052037b                      ; 005208ce
        ;   XREF to: 0052037b (CONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [EBX + 0xbd24]        ; 005208d4
    FLDZ                                ; 005208da
    FCOMPP                              ; 005208dc
    FNSTSW AX                           ; 005208de
    SAHF                                ; 005208e0
    JC 0x0052037b                       ; 005208e1
        ;   XREF to: 0052037b (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 005208e7
    PUSH 0x6                            ; 005208e9
    LEA EAX,[EBX + 0x150]               ; 005208eb
    PUSH EAX                            ; 005208f1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005208f2
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005208f7
    MOV dword ptr [EBX + 0xbd24],0x3f800000 ; 005208fa
    JMP 0x0052037b                      ; 00520904
        ;   XREF to: 0052037b (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EDI + -0x1]                ; 00520909
        ;   Label: LAB_00520909
    CMP EAX,0x9                         ; 0052090c
    JA 0x0052037b                       ; 0052090f
        ;   XREF to: 0052037b (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [EAX*0x4 + 0x520090]  ; 00520915 | caseD_1 | caseD_2 | caseD_7
        ;   Label: switchD
    PUSH EBX                            ; 0052091c
        ;   Label: LAB_0052091c
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00425960 ; 0052091d
        ;   XREF to: 00425960 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_00425960(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00520922
    TEST EAX,EAX                        ; 00520925
    JZ 0x005203e9                       ; 00520927
        ;   XREF to: 005203e9 (CONDITIONAL_JUMP)  ; LAB_005203e9
    MOV ESI,dword ptr [EBX + 0xbca4]    ; 0052092d
    TEST ESI,ESI                        ; 00520933
    JZ 0x00520960                       ; 00520935
        ;   XREF to: 00520960 (CONDITIONAL_JUMP)  ; LAB_00520960
    PUSH ESI                            ; 00520937
    MOV EDX,dword ptr [ESI + 0x14c]     ; 00520938
    CALL dword ptr [EDX + 0xec]         ; 0052093e
    ADD ESP,0x4                         ; 00520944
    CMP EAX,EBX                         ; 00520947
    JNZ 0x00520960                      ; 00520949
        ;   XREF to: 00520960 (CONDITIONAL_JUMP)  ; LAB_00520960
    MOV EDI,dword ptr [EBX + 0xbca4]    ; 0052094b
    PUSH EDI                            ; 00520951
    MOV EAX,[0x005be368]                ; 00520952 | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 00520957 | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 00520958
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0052095d
    FLD float ptr [EBP + 0x92]          ; 00520960
        ;   Label: LAB_00520960
    FLD ST0                             ; 00520966
    FMUL double ptr [0x0059209d]        ; 00520968 | DOUBLE_0059209d
    FLD float ptr [EBX + 0x2424]        ; 0052096e
    FXCH                                ; 00520974
    FSUBR ST0,ST1                       ; 00520976
    LEA ECX,[EBX + 0x2420]              ; 00520978
    FSTP ST1                            ; 0052097e
    FSTP float ptr [EBX + 0x2424]       ; 00520980
    FLD float ptr [ECX]                 ; 00520986
    FMUL ST1                            ; 00520988
    FSTP float ptr [EBP + 0x26]         ; 0052098a
    FLD float ptr [ECX + 0x4]           ; 0052098d
    FMUL ST1                            ; 00520990
    LEA EAX,[EBX + 0x2414]              ; 00520992
    FSTP float ptr [EBP + 0x2a]         ; 00520998
    FMUL float ptr [ECX + 0x8]          ; 0052099b
    LEA EDX,[EBX + 0x23a4]              ; 0052099e
    FLD float ptr [EBP + 0x26]          ; 005209a4
    FXCH                                ; 005209a7
    FSTP float ptr [EBP + 0x2e]         ; 005209a9
    FADD float ptr [EAX]                ; 005209ac
    FLD float ptr [EBP + 0x2a]          ; 005209ae
    FXCH                                ; 005209b1
    FSTP float ptr [EBP + 0xe]          ; 005209b3
    FADD float ptr [EAX + 0x4]          ; 005209b6
    FLD float ptr [EBP + 0x2e]          ; 005209b9
    FXCH                                ; 005209bc
    FSTP float ptr [EBP + 0x12]         ; 005209be
    FADD float ptr [EAX + 0x8]          ; 005209c1
    FLD float ptr [EBP + 0xe]           ; 005209c4
    FXCH                                ; 005209c7
    FSTP float ptr [EBP + 0x16]         ; 005209c9
    FADD float ptr [EDX]                ; 005209cc
    FLD float ptr [EBP + 0x12]          ; 005209ce
    FXCH                                ; 005209d1
    FSTP float ptr [EBP + -0x22]        ; 005209d3
    FADD float ptr [EDX + 0x4]          ; 005209d6
    FLD float ptr [EBP + 0x16]          ; 005209d9
    FXCH                                ; 005209dc
    FSTP float ptr [EBP + -0x1e]        ; 005209de
    FADD float ptr [EDX + 0x8]          ; 005209e1
    FSTP float ptr [EBP + -0x1a]        ; 005209e4
    MOV dword ptr [EAX + 0x8],0x0       ; 005209e7
    MOV ECX,dword ptr [EAX + 0x8]       ; 005209ee
    MOV dword ptr [EAX + 0x4],ECX       ; 005209f1
    MOV ECX,dword ptr [EAX + 0x4]       ; 005209f4
    MOV dword ptr [EAX],ECX             ; 005209f7
    MOV dword ptr [EDX + 0x8],0x0       ; 005209f9
    LEA EAX,[EBP + -0x22]               ; 00520a00
    FLD float ptr [EDX + 0x8]           ; 00520a03
    PUSH EAX                            ; 00520a06
    FST float ptr [EDX + 0x4]           ; 00520a07
    PUSH EBX                            ; 00520a0a
    FSTP float ptr [EDX]                ; 00520a0b
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 00520a0d
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00520a12
    JMP 0x005203e9                      ; 00520a15
        ;   XREF to: 005203e9 (UNCONDITIONAL_JUMP)  ; LAB_005203e9

