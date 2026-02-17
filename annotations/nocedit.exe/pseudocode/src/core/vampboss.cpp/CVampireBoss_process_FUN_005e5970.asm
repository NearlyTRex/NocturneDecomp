; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_CVampireBoss_process_FUN_005e5970(CVampireBoss *this_ptr,float delta_time)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x260]:4  local_260
; undefined4       Stack[-0x25c]:4  local_25c
; undefined4       Stack[-0x258]:4  local_258
; undefined4       Stack[-0x254]:4  local_254
; undefined4       Stack[-0x250]:4  local_250
; undefined4       Stack[-0x24c]:4  local_24c
; undefined4       Stack[-0x248]:4  local_248
; undefined1       Stack[-0x244]:1  local_244
; undefined4       Stack[-0x240]:4  local_240
; undefined4       Stack[-0x210]:4  local_210
; undefined4       Stack[-0x20c]:4  local_20c
; undefined1       Stack[-0x1cc]:1  local_1cc
; undefined1       Stack[-0x1c0]:1  local_1c0
; undefined1       Stack[-0x1b4]:1  local_1b4
; undefined1       Stack[-0x1a4]:1  local_1a4
; undefined1       Stack[-0x19c]:1  local_19c
; undefined1       Stack[-0x184]:1  local_184
; undefined1       Stack[-0x178]:1  local_178
; undefined1       Stack[-0x16c]:1  local_16c
; undefined1       Stack[-0x154]:1  local_154
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined1       Stack[-0x130]:1  local_130
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined1       Stack[-0xdc]:1  local_dc
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   void* switchdataD_005e5934 = 005e68cf
;   void* switchdataD_005e5944 = 005e6519
;   TerminatedCString s_core_vampboss_cpp_00656b0e
;   TerminatedCString s_CVampireBoss_process_Nee_00656b23
;   TerminatedCString s_morphCompleted_00656b4c
;   TerminatedCString s_backToHuman_00656b5b
;   TerminatedCString s_morphToBat_00656b67
;   TerminatedCString s_flyout_00656b72
;   double DOUBLE_00656b7b = 25
;   double DOUBLE_00656b83 = 5
;   double DOUBLE_00656b8b = 10
;   double DOUBLE_00656b93 = 40
;   double DOUBLE_00656b9b = 24
;   double DOUBLE_00656ba3 = 4
;   double DOUBLE_00656bab = 6
;   ... and 22 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_dismember_FUN_0042b9e0
;   core_charactr.cpp_CCharacter_followActor_FUN_0042c5f0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
;   core_charactr.cpp_CCharacter_preProcess_FUN_00429820
;   core_charactr.cpp_CCharacter_process_FUN_00429870
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_cloth.cpp_CCloth_process_FUN_0043ab80
;   ... and 20 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e5970
        ;   Label: core_vampboss.cpp_CVampireBoss_process_FUN_005e5970
    PUSH ESI                            ; 005e5971
    PUSH EDI                            ; 005e5972
    PUSH EBP                            ; 005e5973
    MOV EBP,ESP                         ; 005e5974
    SUB ESP,0x23c                       ; 005e5976
    AND ESP,0xfffffff8                  ; 005e597c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005e597f
    MOV ESI,EBX                         ; 005e5982
    LEA EDI,[EBX + 0x10]                ; 005e5984
    CMP dword ptr [ESI + 0xce90c],0x0   ; 005e5987
        ;   Label: LAB_005e5987
    JZ 0x005e5f8f                       ; 005e598e
        ;   XREF to: 005e5f8f (CONDITIONAL_JUMP)  ; LAB_005e5f8f
    ADD ESI,0x4                         ; 005e5994
        ;   Label: LAB_005e5994
    CMP ESI,EDI                         ; 005e5997
    JNZ 0x005e5987                      ; 005e5999
        ;   XREF to: 005e5987 (CONDITIONAL_JUMP)  ; LAB_005e5987
    PUSH dword ptr [EBP + 0x18]         ; 005e599b
    PUSH EBX                            ; 005e599e
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 005e599f
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005e59a4
    TEST EAX,EAX                        ; 005e59a7
    JZ 0x005e5f88                       ; 005e59a9
        ;   XREF to: 005e5f88 (CONDITIONAL_JUMP)  ; LAB_005e5f88
    MOV EDX,dword ptr [EBX + 0xcdcc0]   ; 005e59af
    CMP EDX,0x2                         ; 005e59b5
    JNZ 0x005e609b                      ; 005e59b8
        ;   XREF to: 005e609b (CONDITIONAL_JUMP)  ; LAB_005e609b
    PUSH dword ptr [EBP + 0x18]         ; 005e59be
    PUSH EBX                            ; 005e59c1
    CALL core_vampboss.cpp_CVampireBoss_FUN_005e6ca0 ; 005e59c2
        ;   XREF to: 005e6ca0 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_FUN_005e6ca0(CVampireBoss * this_ptr)
    ADD ESP,0x8                         ; 005e59c7
    LEA ESI,[EBX + 0xbebc]              ; 005e59ca
    PUSH ESI                            ; 005e59d0
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 ; 005e59d1
        ;   XREF to: 0059e000 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e59d6
    PUSH ESI                            ; 005e59d9
    PUSH dword ptr [EBX + 0x2414]       ; 005e59da
    LEA EAX,[EBX + 0x30]                ; 005e59e0
    PUSH dword ptr [EBP + 0x18]         ; 005e59e3
    PUSH EAX                            ; 005e59e6
    LEA EAX,[EBX + 0x20]                ; 005e59e7
    PUSH EAX                            ; 005e59ea
    LEA EAX,[EBX + 0xe170]              ; 005e59eb
    PUSH EAX                            ; 005e59f1
    CALL core_cloth.cpp_CCloth_process_FUN_0043ab80 ; 005e59f2
        ;   XREF to: 0043ab80 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_0043ab80(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    FLD float ptr [EBX + 0x243c]        ; 005e59f7
    ADD ESP,0x18                        ; 005e59fd
    FCOMP double ptr [0x00656b7b]       ; 005e5a00 | DOUBLE_00656b7b
    FNSTSW AX                           ; 005e5a06
    SAHF                                ; 005e5a08
    JNC 0x005e5a42                      ; 005e5a09
        ;   XREF to: 005e5a42 (CONDITIONAL_JUMP)  ; LAB_005e5a42
    MOV EDX,dword ptr [EBX + 0xce904]   ; 005e5a0b
    MOV dword ptr [EBX + 0x243c],0x41c7fdf4 ; 005e5a11
    CMP EDX,0x2                         ; 005e5a1b
    JZ 0x005e5a42                       ; 005e5a1e
        ;   XREF to: 005e5a42 (CONDITIONAL_JUMP)  ; LAB_005e5a42
    CMP EDX,0x3                         ; 005e5a20
    JZ 0x005e5a42                       ; 005e5a23
        ;   XREF to: 005e5a42 (CONDITIONAL_JUMP)  ; LAB_005e5a42
    PUSH EBX                            ; 005e5a25
    CALL core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510 ; 005e5a26
        ;   XREF to: 005e7510 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510(CVampireBoss * this_ptr)
    MOV dword ptr [EBX + 0xce904],0x2   ; 005e5a2b
    ADD ESP,0x4                         ; 005e5a35
    MOV dword ptr [EBX + 0xce8f8],0x40a00000 ; 005e5a38
    MOV ESI,dword ptr [EBX + 0xce904]   ; 005e5a42
        ;   Label: LAB_005e5a42
    CMP ESI,0x2                         ; 005e5a48
    JZ 0x005e5bf2                       ; 005e5a4b
        ;   XREF to: 005e5bf2 (CONDITIONAL_JUMP)  ; LAB_005e5bf2
    CMP ESI,0x3                         ; 005e5a51
    JZ 0x005e5bf2                       ; 005e5a54
        ;   XREF to: 005e5bf2 (CONDITIONAL_JUMP)  ; LAB_005e5bf2
    MOV EAX,[0x02db87d0]                ; 005e5a5a | g_LocalHeroIndex
    LEA EDX,[EBX + 0x20]                ; 005e5a5f
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 005e5a62 | g_HeroActors
    FLD float ptr [EDX]                 ; 005e5a69
    FSUB float ptr [EAX + 0x20]         ; 005e5a6b
    FSTP float ptr [ESP + 0x15c]        ; 005e5a6e
    FLD float ptr [EDX + 0x4]           ; 005e5a75
    FSUB float ptr [EAX + 0x24]         ; 005e5a78
    FSTP float ptr [ESP + 0x160]        ; 005e5a7b
    FLD float ptr [EDX + 0x8]           ; 005e5a82
    FSUB float ptr [EAX + 0x28]         ; 005e5a85
    FST float ptr [ESP + 0x164]         ; 005e5a88
    FMUL float ptr [ESP + 0x164]        ; 005e5a8f
    FLD float ptr [ESP + 0x15c]         ; 005e5a96
    FMUL ST0                            ; 005e5a9d
    FADDP                               ; 005e5a9f
    FSQRT                               ; 005e5aa1
    FST float ptr [ESP]                 ; 005e5aa3
    FCOMP double ptr [0x00656b83]       ; 005e5aa6 | DOUBLE_00656b83
    FNSTSW AX                           ; 005e5aac
    SAHF                                ; 005e5aae
    JNC 0x005e5b32                      ; 005e5aaf
        ;   XREF to: 005e5b32 (CONDITIONAL_JUMP)  ; LAB_005e5b32
    MOV dword ptr [EBX + 0xce904],0x1   ; 005e5ab5
    FLD float ptr [ESP + 0x160]         ; 005e5abf
    FCOMP double ptr [0x00656b8b]       ; 005e5ac6 | DOUBLE_00656b8b
    FNSTSW AX                           ; 005e5acc
    SAHF                                ; 005e5ace
    JNC 0x005e5fb6                      ; 005e5acf
        ;   XREF to: 005e5fb6 (CONDITIONAL_JUMP)  ; LAB_005e5fb6
    MOV EAX,0x1                         ; 005e5ad5
    MOV dword ptr [ESP + 0x238],EAX     ; 005e5ada
        ;   Label: LAB_005e5ada
    FILD dword ptr [ESP + 0x238]        ; 005e5ae1
    FABS                                ; 005e5ae8
    FLDZ                                ; 005e5aea
    FCOMPP                              ; 005e5aec
    FNSTSW AX                           ; 005e5aee
    SAHF                                ; 005e5af0
    JZ 0x005e5b32                       ; 005e5af1
        ;   XREF to: 005e5b32 (CONDITIONAL_JUMP)  ; LAB_005e5b32
    LEA EAX,[ESP + 0xc]                 ; 005e5af3
    PUSH EAX                            ; 005e5af7
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 005e5af8
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    MOV EAX,0x41200000                  ; 005e5afd
    ADD ESP,0x4                         ; 005e5b02
    LEA EDX,[ESP + 0xc]                 ; 005e5b05
    MOV dword ptr [ESP + 0x10],EAX      ; 005e5b09
    MOV EAX,[0x02db87d0]                ; 005e5b0d | g_LocalHeroIndex
    MOV dword ptr [ESP + 0x40],EBX      ; 005e5b12
    PUSH EDX                            ; 005e5b16
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 005e5b17 | g_HeroActors
    MOV dword ptr [ESP + 0x48],EBX      ; 005e5b1e
    PUSH EAX                            ; 005e5b22
    MOV ESI,dword ptr [EAX + 0x154]     ; 005e5b23
    CALL dword ptr [ESI + 0x11c]        ; 005e5b29
    ADD ESP,0x8                         ; 005e5b2f
    FLD float ptr [ESP]                 ; 005e5b32
        ;   Label: LAB_005e5b32
    FCOMP double ptr [0x00656b93]       ; 005e5b35 | DOUBLE_00656b93
    FNSTSW AX                           ; 005e5b3b
    SAHF                                ; 005e5b3d
    JBE 0x005e5b5e                      ; 005e5b3e
        ;   XREF to: 005e5b5e (CONDITIONAL_JUMP)  ; LAB_005e5b5e
    MOV dword ptr [EBX + 0xce8f4],0x40a00000 ; 005e5b40
    MOV dword ptr [EBX + 0xce8fc],0x0   ; 005e5b4a
    MOV dword ptr [EBX + 0xce904],0x0   ; 005e5b54
    MOV EDX,dword ptr [EBX + 0xce904]   ; 005e5b5e
        ;   Label: LAB_005e5b5e
    TEST EDX,EDX                        ; 005e5b64
    JNZ 0x005e5b90                      ; 005e5b66
        ;   XREF to: 005e5b90 (CONDITIONAL_JUMP)  ; LAB_005e5b90
    FLD float ptr [EBX + 0xce8f4]       ; 005e5b68
    FSUB float ptr [EBP + 0x18]         ; 005e5b6e
    FST float ptr [EBX + 0xce8f4]       ; 005e5b71
    FLDZ                                ; 005e5b77
    FCOMPP                              ; 005e5b79
    FNSTSW AX                           ; 005e5b7b
    SAHF                                ; 005e5b7d
    JBE 0x005e5b90                      ; 005e5b7e
        ;   XREF to: 005e5b90 (CONDITIONAL_JUMP)  ; LAB_005e5b90
    MOV dword ptr [EBX + 0xce904],0x1   ; 005e5b80
    MOV dword ptr [EBX + 0xce8f4],EDX   ; 005e5b8a
    LEA ESI,[EBX + 0xbebc]              ; 005e5b90
        ;   Label: LAB_005e5b90
    PUSH ESI                            ; 005e5b96
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005e5b97
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005e5b9c
    ADD ESP,0x4                         ; 005e5b9f
    TEST EAX,EAX                        ; 005e5ba2
    JNZ 0x005e5bf2                      ; 005e5ba4
        ;   XREF to: 005e5bf2 (CONDITIONAL_JUMP)  ; LAB_005e5bf2
    CMP dword ptr [EBX + 0xce904],0x0   ; 005e5ba6
    JNZ 0x005e5bf2                      ; 005e5bad
        ;   XREF to: 005e5bf2 (CONDITIONAL_JUMP)  ; LAB_005e5bf2
    FLD float ptr [ESP]                 ; 005e5baf
    FCOMP double ptr [0x00656b9b]       ; 005e5bb2 | DOUBLE_00656b9b
    FNSTSW AX                           ; 005e5bb8
    SAHF                                ; 005e5bba
    JNC 0x005e5bf2                      ; 005e5bbb
        ;   XREF to: 005e5bf2 (CONDITIONAL_JUMP)  ; LAB_005e5bf2
    CMP dword ptr [EBX + 0xce8fc],0x0   ; 005e5bbd
    JNZ 0x005e5bf2                      ; 005e5bc4
        ;   XREF to: 005e5bf2 (CONDITIONAL_JUMP)  ; LAB_005e5bf2
    PUSH 0x3f000000                     ; 005e5bc6
    MOV dword ptr [EBX + 0xce8fc],0x1   ; 005e5bcb
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 005e5bd5
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 005e5bda
    TEST EAX,EAX                        ; 005e5bdd
    JZ 0x005e5fbd                       ; 005e5bdf
        ;   XREF to: 005e5fbd (CONDITIONAL_JUMP)  ; LAB_005e5fbd
    PUSH 0x1                            ; 005e5be5
    PUSH 0x1                            ; 005e5be7
    PUSH ESI                            ; 005e5be9
        ;   Label: LAB_005e5be9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005e5bea
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005e5bef
    MOV EAX,[0x02db87d0]                ; 005e5bf2 | g_LocalHeroIndex
        ;   Label: LAB_005e5bf2
    MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0] ; 005e5bf7 | g_HeroActors
    LEA EAX,[ESP + 0x198]               ; 005e5bfe
    ADD EDX,0x20                        ; 005e5c05
    CMP EAX,EDX                         ; 005e5c08
    JZ 0x005e5c29                       ; 005e5c0a
        ;   XREF to: 005e5c29 (CONDITIONAL_JUMP)  ; LAB_005e5c29
    MOV EAX,dword ptr [EDX]             ; 005e5c0c
    MOV dword ptr [ESP + 0x198],EAX     ; 005e5c0e
    MOV EAX,dword ptr [EDX + 0x4]       ; 005e5c15
    MOV dword ptr [ESP + 0x19c],EAX     ; 005e5c18
    MOV EAX,dword ptr [EDX + 0x8]       ; 005e5c1f
    MOV dword ptr [ESP + 0x1a0],EAX     ; 005e5c22
    MOV EAX,dword ptr [EBX + 0xce904]   ; 005e5c29
        ;   Label: LAB_005e5c29
    CMP EAX,0x2                         ; 005e5c2f
    JNZ 0x005e5ff8                      ; 005e5c32
        ;   XREF to: 005e5ff8 (CONDITIONAL_JUMP)  ; LAB_005e5ff8
    FLD float ptr [EBX + 0xce8f8]       ; 005e5c38
    MOV EAX,0x4                         ; 005e5c3e
    MOV ECX,dword ptr [EBX + 0xce908]   ; 005e5c43
    FSUB float ptr [EBP + 0x18]         ; 005e5c49
    SUB EAX,ECX                         ; 005e5c4c
    FSTP float ptr [EBX + 0xce8f8]      ; 005e5c4e
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0xce908] ; 005e5c54
    LEA EAX,[ESP + 0x198]               ; 005e5c5b
    ADD EDX,0x20                        ; 005e5c62
    CMP EAX,EDX                         ; 005e5c65
    JZ 0x005e5c86                       ; 005e5c67
        ;   XREF to: 005e5c86 (CONDITIONAL_JUMP)  ; LAB_005e5c86
    MOV EAX,dword ptr [EDX]             ; 005e5c69
    MOV dword ptr [ESP + 0x198],EAX     ; 005e5c6b
    MOV EAX,dword ptr [EDX + 0x4]       ; 005e5c72
    MOV dword ptr [ESP + 0x19c],EAX     ; 005e5c75
    MOV EAX,dword ptr [EDX + 0x8]       ; 005e5c7c
    MOV dword ptr [ESP + 0x1a0],EAX     ; 005e5c7f
    FLD float ptr [EBX + 0xce8f8]       ; 005e5c86
        ;   Label: LAB_005e5c86
    FLDZ                                ; 005e5c8c
    FCOMPP                              ; 005e5c8e
    FNSTSW AX                           ; 005e5c90
    SAHF                                ; 005e5c92
    JC 0x005e5fc6                       ; 005e5c93
        ;   XREF to: 005e5fc6 (CONDITIONAL_JUMP)  ; LAB_005e5fc6
    MOV dword ptr [EBX + 0xce8f8],0x40a00000 ; 005e5c99
        ;   Label: LAB_005e5c99
    MOV dword ptr [EBX + 0xce904],0x3   ; 005e5ca3
    FLD float ptr [ESP + 0x198]         ; 005e5cad
        ;   Label: LAB_005e5cad
    FLD float ptr [ESP + 0x19c]         ; 005e5cb4
    FADD float ptr [0x00656bb3]         ; 005e5cbb | FLOAT_00656bb3
    LEA EAX,[EBX + 0x20]                ; 005e5cc1
    FSTP float ptr [ESP + 0x19c]        ; 005e5cc4
    FSUB float ptr [EAX]                ; 005e5ccb
    FLD float ptr [ESP + 0x19c]         ; 005e5ccd
    FXCH                                ; 005e5cd4
    FSTP float ptr [ESP + 0x168]        ; 005e5cd6
    FSUB float ptr [EAX + 0x4]          ; 005e5cdd
    FLD float ptr [ESP + 0x1a0]         ; 005e5ce0
    FXCH                                ; 005e5ce7
    FSTP float ptr [ESP + 0x16c]        ; 005e5ce9
    FSUB float ptr [EAX + 0x8]          ; 005e5cf0
    FST float ptr [ESP + 0x170]         ; 005e5cf3
    FLD float ptr [ESP + 0x168]         ; 005e5cfa
    CALL crt_math.c_atan2_FUN_006013b1  ; 005e5d01
        ;   XREF to: 006013b1 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
    FLD float ptr [ESP + 0x170]         ; 005e5d06
    FMUL ST0                            ; 005e5d0d
    FLD float ptr [ESP + 0x168]         ; 005e5d0f
    FMUL ST0                            ; 005e5d16
    FADDP                               ; 005e5d18
    FSQRT                               ; 005e5d1a
    FLD float ptr [ESP + 0x16c]         ; 005e5d1c
    FXCH                                ; 005e5d23
    FPATAN                              ; 005e5d25
    NOP                                 ; 005e5d27
    MOV ESI,0x3f99999a                  ; 005e5d28
    MOV EDI,0x41a00000                  ; 005e5d2d
    MOV dword ptr [ESP + 0x1e8],ESI     ; 005e5d32
    MOV dword ptr [ESP + 0x20c],EDI     ; 005e5d39
    FXCH                                ; 005e5d40
    FSTP float ptr [ESP + 0x210]        ; 005e5d42
    FCHS                                ; 005e5d49
    MOV EAX,dword ptr [EBX + 0xce904]   ; 005e5d4b
    FSTP float ptr [ESP + 0x218]        ; 005e5d51
    CMP EAX,0x1                         ; 005e5d58
    JNZ 0x005e5d7f                      ; 005e5d5b
        ;   XREF to: 005e5d7f (CONDITIONAL_JUMP)  ; LAB_005e5d7f
    MOV DL,byte ptr [ESP + 0x213]       ; 005e5d5d
    MOV AH,byte ptr [ESP + 0x21b]       ; 005e5d64
    XOR DL,0x80                         ; 005e5d6b
    XOR AH,0x80                         ; 005e5d6e
    MOV byte ptr [ESP + 0x213],DL       ; 005e5d71
    MOV byte ptr [ESP + 0x21b],AH       ; 005e5d78
    FLD float ptr [ESP + 0x210]         ; 005e5d7f
        ;   Label: LAB_005e5d7f
    FSUB float ptr [EBX + 0x34]         ; 005e5d86
    SUB ESP,0x4                         ; 005e5d89
    FSTP float ptr [ESP]                ; 005e5d8c
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005e5d8f
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x23c],EAX     ; 005e5d94
    FLD float ptr [ESP + 0x23c]         ; 005e5d9b
    ADD ESP,0x4                         ; 005e5da2
    FST float ptr [ESP + 0x4]           ; 005e5da5
    FMUL float ptr [EBP + 0x18]         ; 005e5da9
    FMUL float ptr [ESP + 0x1e8]        ; 005e5dac
    FST float ptr [ESP + 0x8]           ; 005e5db3
    FABS                                ; 005e5db7
    FLD float ptr [ESP + 0x4]           ; 005e5db9
    FABS                                ; 005e5dbd
    FCOMPP                              ; 005e5dbf
    FNSTSW AX                           ; 005e5dc1
    SAHF                                ; 005e5dc3
    JNC 0x005e608c                      ; 005e5dc4
        ;   XREF to: 005e608c (CONDITIONAL_JUMP)  ; LAB_005e608c
    MOV EAX,dword ptr [ESP + 0x210]     ; 005e5dca
    MOV dword ptr [EBX + 0x34],EAX      ; 005e5dd1
    FLD float ptr [ESP + 0x218]         ; 005e5dd4
        ;   Label: LAB_005e5dd4
    FSUB float ptr [EBX + 0x30]         ; 005e5ddb
    SUB ESP,0x4                         ; 005e5dde
    FSTP float ptr [ESP]                ; 005e5de1
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005e5de4
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x23c],EAX     ; 005e5de9
    FLD float ptr [ESP + 0x23c]         ; 005e5df0
    ADD ESP,0x4                         ; 005e5df7
    FST float ptr [ESP + 0x218]         ; 005e5dfa
    FMUL float ptr [EBP + 0x18]         ; 005e5e01
    FMUL float ptr [ESP + 0x1e8]        ; 005e5e04
    FLD float ptr [EBX + 0x243c]        ; 005e5e0b
    MOV EDX,0xbec90fdb                  ; 005e5e11
    MOV ECX,0x3ec90fdb                  ; 005e5e16
    MOV dword ptr [ESP + 0x1f8],EDX     ; 005e5e1b
    FXCH                                ; 005e5e22
    FADD float ptr [EBX + 0x30]         ; 005e5e24
    MOV dword ptr [ESP + 0x22c],ECX     ; 005e5e27
    FSTP float ptr [EBX + 0x30]         ; 005e5e2e
    FCOMP double ptr [0x00656b7b]       ; 005e5e31 | DOUBLE_00656b7b
    FNSTSW AX                           ; 005e5e37
    SAHF                                ; 005e5e39
    JNC 0x005e5e5d                      ; 005e5e3a
        ;   XREF to: 005e5e5d (CONDITIONAL_JUMP)  ; LAB_005e5e5d
    CMP dword ptr [EBX + 0xce904],0x0   ; 005e5e3c
    JNZ 0x005e5e5d                      ; 005e5e43
        ;   XREF to: 005e5e5d (CONDITIONAL_JUMP)  ; LAB_005e5e5d
    MOV EAX,0x3fc90fdb                  ; 005e5e45
    MOV EDI,0xbfc90fdb                  ; 005e5e4a
    MOV dword ptr [ESP + 0x22c],EAX     ; 005e5e4f
    MOV dword ptr [ESP + 0x1f8],EDI     ; 005e5e56
    FLD float ptr [EBX + 0x30]          ; 005e5e5d
        ;   Label: LAB_005e5e5d
    FCOMP float ptr [ESP + 0x1f8]       ; 005e5e60
    FNSTSW AX                           ; 005e5e67
    SAHF                                ; 005e5e69
    JNC 0x005e5e76                      ; 005e5e6a
        ;   XREF to: 005e5e76 (CONDITIONAL_JUMP)  ; LAB_005e5e76
    MOV EAX,dword ptr [ESP + 0x1f8]     ; 005e5e6c
    MOV dword ptr [EBX + 0x30],EAX      ; 005e5e73
    FLD float ptr [EBX + 0x30]          ; 005e5e76
        ;   Label: LAB_005e5e76
    FCOMP float ptr [ESP + 0x22c]       ; 005e5e79
    FNSTSW AX                           ; 005e5e80
    SAHF                                ; 005e5e82
    JBE 0x005e5e8f                      ; 005e5e83
        ;   XREF to: 005e5e8f (CONDITIONAL_JUMP)  ; LAB_005e5e8f
    MOV EAX,dword ptr [ESP + 0x22c]     ; 005e5e85
    MOV dword ptr [EBX + 0x30],EAX      ; 005e5e8c
    FLD float ptr [EBX + 0x30]          ; 005e5e8f
        ;   Label: LAB_005e5e8f
    FLD ST0                             ; 005e5e92
    FSIN                                ; 005e5e94
    FLD float ptr [EBX + 0x34]          ; 005e5e96
    FLD ST0                             ; 005e5e99
    FSIN                                ; 005e5e9b
    FXCH ST3                            ; 005e5e9d
    FCOS                                ; 005e5e9f
    FXCH                                ; 005e5ea1
    FCOS                                ; 005e5ea3
    FXCH ST3                            ; 005e5ea5
    FMUL ST1                            ; 005e5ea7
    FXCH ST3                            ; 005e5ea9
    FMULP                               ; 005e5eab
    FXCH                                ; 005e5ead
    FCHS                                ; 005e5eaf
    FLD float ptr [ESP + 0x20c]         ; 005e5eb1
    FXCH                                ; 005e5eb8
    FMUL ST1                            ; 005e5eba
    FXCH ST3                            ; 005e5ebc
    FMUL ST1                            ; 005e5ebe
    FXCH ST3                            ; 005e5ec0
    FLD float ptr [EBP + 0x18]          ; 005e5ec2
    FXCH                                ; 005e5ec5
    FMUL ST1                            ; 005e5ec7
    FXCH ST3                            ; 005e5ec9
    FMULP ST2                           ; 005e5ecb
    FXCH ST3                            ; 005e5ecd
    FMUL ST3                            ; 005e5ecf
    FXCH ST2                            ; 005e5ed1
    FADD float ptr [EBX + 0x24]         ; 005e5ed3
    FXCH                                ; 005e5ed6
    FMULP ST3                           ; 005e5ed8
    FST float ptr [EBX + 0x24]          ; 005e5eda
    FXCH                                ; 005e5edd
    FADD float ptr [EBX + 0x20]         ; 005e5edf
    FXCH ST2                            ; 005e5ee2
    FADD float ptr [EBX + 0x28]         ; 005e5ee4
    FXCH ST2                            ; 005e5ee7
    FSTP float ptr [EBX + 0x20]         ; 005e5ee9
    FXCH                                ; 005e5eec
    FSTP float ptr [EBX + 0x28]         ; 005e5eee
    FCOMP float ptr [ESP + 0x19c]       ; 005e5ef1
    FNSTSW AX                           ; 005e5ef8
    SAHF                                ; 005e5efa
    JNC 0x005e5f07                      ; 005e5efb
        ;   XREF to: 005e5f07 (CONDITIONAL_JUMP)  ; LAB_005e5f07
    MOV EAX,dword ptr [ESP + 0x19c]     ; 005e5efd
    MOV dword ptr [EBX + 0x24],EAX      ; 005e5f04
    PUSH EBX                            ; 005e5f07
        ;   Label: LAB_005e5f07
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 005e5f08
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005e5f0d
    LEA EAX,[ESP + 0xb4]                ; 005e5f10
    PUSH EAX                            ; 005e5f17
    LEA EAX,[EBX + 0xbebc]              ; 005e5f18
    PUSH EAX                            ; 005e5f1e
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0 ; 005e5f1f
        ;   XREF to: 005a16c0 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0(CDeformableModelInstance * this_ptr, CBoundingBox3D * output_bbox)
    ADD ESP,0x8                         ; 005e5f24
    LEA EDX,[EBX + 0x25f8]              ; 005e5f27
    MOV ESI,EAX                         ; 005e5f2d
    MOV EDI,EDX                         ; 005e5f2f
    CMP EDX,EAX                         ; 005e5f31
    JZ 0x005e5f45                       ; 005e5f33
        ;   XREF to: 005e5f45 (CONDITIONAL_JUMP)  ; LAB_005e5f45
    MOV ECX,dword ptr [EAX]             ; 005e5f35
    MOV dword ptr [EDX],ECX             ; 005e5f37
    MOV ECX,dword ptr [EAX + 0x4]       ; 005e5f39
    MOV dword ptr [EDX + 0x4],ECX       ; 005e5f3c
    MOV ECX,dword ptr [EAX + 0x8]       ; 005e5f3f
    MOV dword ptr [EDX + 0x8],ECX       ; 005e5f42
    LEA EAX,[ESI + 0xc]                 ; 005e5f45
        ;   Label: LAB_005e5f45
    LEA EDX,[EDI + 0xc]                 ; 005e5f48
    CMP EDX,EAX                         ; 005e5f4b
    JZ 0x005e5f5f                       ; 005e5f4d
        ;   XREF to: 005e5f5f (CONDITIONAL_JUMP)  ; LAB_005e5f5f
    MOV ECX,dword ptr [EAX]             ; 005e5f4f
    MOV dword ptr [EDX],ECX             ; 005e5f51
    MOV ECX,dword ptr [EAX + 0x4]       ; 005e5f53
    MOV dword ptr [EDX + 0x4],ECX       ; 005e5f56
    MOV ECX,dword ptr [EAX + 0x8]       ; 005e5f59
    MOV dword ptr [EDX + 0x8],ECX       ; 005e5f5c
    LEA EAX,[EBX + 0x158]               ; 005e5f5f
        ;   Label: LAB_005e5f5f
    PUSH EAX                            ; 005e5f65
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005e5f66
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005e5f6b
    ADD ESP,0x4                         ; 005e5f6e
    CMP EAX,0x2                         ; 005e5f71
    JZ 0x005e5f88                       ; 005e5f74
        ;   XREF to: 005e5f88 (CONDITIONAL_JUMP)  ; LAB_005e5f88
    MOV EAX,[0x0067b654]                ; 005e5f76 | g_CGameInstance | g_CGamePtr
    CMP dword ptr [EAX + 0x228],0x0     ; 005e5f7b | DAT_02d81cc4
    JZ 0x005e6b4e                       ; 005e5f82
        ;   XREF to: 005e6b4e (CONDITIONAL_JUMP)  ; LAB_005e6b4e
    MOV ESP,EBP                         ; 005e5f88
        ;   Label: LAB_005e5f88
    POP EBP                             ; 005e5f8a
    POP EDI                             ; 005e5f8b
    POP ESI                             ; 005e5f8c
    POP EBX                             ; 005e5f8d
    RET                                 ; 005e5f8e
    MOV ECX,0x656b0e                    ; 005e5f8f | = "..\\core\\vampboss.cpp"
        ;   Label: LAB_005e5f8f
    MOV EAX,0xcf                        ; 005e5f94
    PUSH 0x656b23                       ; 005e5f99 | = "CVampireBoss::process - Need 4 waypoints"
    MOV dword ptr [0x02f0ca48],ECX      ; 005e5f9e | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005e5fa4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005e5fa9
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005e5fae
    JMP 0x005e5994                      ; 005e5fb1
        ;   XREF to: 005e5994 (UNCONDITIONAL_JUMP)  ; LAB_005e5994
    XOR EAX,EAX                         ; 005e5fb6
        ;   Label: LAB_005e5fb6
    JMP 0x005e5ada                      ; 005e5fb8
        ;   XREF to: 005e5ada (UNCONDITIONAL_JUMP)  ; LAB_005e5ada
    PUSH 0x1                            ; 005e5fbd
        ;   Label: LAB_005e5fbd
    PUSH 0x2                            ; 005e5fbf
    JMP 0x005e5be9                      ; 005e5fc1
        ;   XREF to: 005e5be9 (UNCONDITIONAL_JUMP)  ; LAB_005e5be9
    LEA EAX,[EBX + 0x20]                ; 005e5fc6
        ;   Label: LAB_005e5fc6
    FLD float ptr [ESP + 0x198]         ; 005e5fc9
    FSUB float ptr [EAX]                ; 005e5fd0
    FMUL ST0                            ; 005e5fd2
    FLD float ptr [ESP + 0x1a0]         ; 005e5fd4
    FSUB float ptr [EAX + 0x8]          ; 005e5fdb
    FMUL ST0                            ; 005e5fde
    FADDP                               ; 005e5fe0
    FSQRT                               ; 005e5fe2
    FCOMP double ptr [0x00656bab]       ; 005e5fe4 | DOUBLE_00656bab
    FNSTSW AX                           ; 005e5fea
    SAHF                                ; 005e5fec
    JC 0x005e5c99                       ; 005e5fed
        ;   XREF to: 005e5c99 (CONDITIONAL_JUMP)  ; LAB_005e5c99
    JMP 0x005e5cad                      ; 005e5ff3
        ;   XREF to: 005e5cad (UNCONDITIONAL_JUMP)  ; LAB_005e5cad
    CMP EAX,0x3                         ; 005e5ff8
        ;   Label: LAB_005e5ff8
    JNZ 0x005e5cad                      ; 005e5ffb
        ;   XREF to: 005e5cad (CONDITIONAL_JUMP)  ; LAB_005e5cad
    MOV EAX,dword ptr [EBX + 0xce908]   ; 005e6001
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0xce90c] ; 005e6007
    LEA EAX,[ESP + 0x198]               ; 005e600e
    ADD EDX,0x20                        ; 005e6015
    CMP EAX,EDX                         ; 005e6018
    JZ 0x005e6039                       ; 005e601a
        ;   XREF to: 005e6039 (CONDITIONAL_JUMP)  ; LAB_005e6039
    MOV EAX,dword ptr [EDX]             ; 005e601c
    MOV dword ptr [ESP + 0x198],EAX     ; 005e601e
    MOV EAX,dword ptr [EDX + 0x4]       ; 005e6025
    MOV dword ptr [ESP + 0x19c],EAX     ; 005e6028
    MOV EAX,dword ptr [EDX + 0x8]       ; 005e602f
    MOV dword ptr [ESP + 0x1a0],EAX     ; 005e6032
    FLD float ptr [EBX + 0xce8f8]       ; 005e6039
        ;   Label: LAB_005e6039
    FSUB float ptr [EBP + 0x18]         ; 005e603f
    FST float ptr [EBX + 0xce8f8]       ; 005e6042
    FLDZ                                ; 005e6048
    FCOMPP                              ; 005e604a
    FNSTSW AX                           ; 005e604c
    SAHF                                ; 005e604e
    JNC 0x005e607e                      ; 005e604f
        ;   XREF to: 005e607e (CONDITIONAL_JUMP)  ; LAB_005e607e
    LEA EAX,[EBX + 0x20]                ; 005e6051
    FLD float ptr [ESP + 0x198]         ; 005e6054
    FSUB float ptr [EAX]                ; 005e605b
    FMUL ST0                            ; 005e605d
    FLD float ptr [ESP + 0x1a0]         ; 005e605f
    FSUB float ptr [EAX + 0x8]          ; 005e6066
    FMUL ST0                            ; 005e6069
    FADDP                               ; 005e606b
    FSQRT                               ; 005e606d
    FCOMP double ptr [0x00656ba3]       ; 005e606f | DOUBLE_00656ba3
    FNSTSW AX                           ; 005e6075
    SAHF                                ; 005e6077
    JNC 0x005e5cad                      ; 005e6078
        ;   XREF to: 005e5cad (CONDITIONAL_JUMP)  ; LAB_005e5cad
    PUSH EBX                            ; 005e607e
        ;   Label: LAB_005e607e
    CALL core_vampboss.cpp_CVampireBoss_FUN_005e74c0 ; 005e607f
        ;   XREF to: 005e74c0 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_FUN_005e74c0(CVampireBoss * this_ptr)
    ADD ESP,0x4                         ; 005e6084
    JMP 0x005e5cad                      ; 005e6087
        ;   XREF to: 005e5cad (UNCONDITIONAL_JUMP)  ; LAB_005e5cad
    FLD float ptr [EBX + 0x34]          ; 005e608c
        ;   Label: LAB_005e608c
    FADD float ptr [ESP + 0x8]          ; 005e608f
    FSTP float ptr [EBX + 0x34]         ; 005e6093
    JMP 0x005e5dd4                      ; 005e6096
        ;   XREF to: 005e5dd4 (UNCONDITIONAL_JUMP)  ; LAB_005e5dd4
    CMP EDX,0x1                         ; 005e609b
        ;   Label: LAB_005e609b
    JNZ 0x005e6249                      ; 005e609e
        ;   XREF to: 005e6249 (CONDITIONAL_JUMP)  ; LAB_005e6249
    FLD float ptr [EBP + 0x18]          ; 005e60a4
    FDIV float ptr [0x00664e7c]         ; 005e60a7 | FLOAT_00664e7c
    FADD float ptr [EBX + 0xce8f0]      ; 005e60ad
    FST float ptr [EBX + 0xce8f0]       ; 005e60b3
    FLD1                                ; 005e60b9
    FCOMPP                              ; 005e60bb
    FNSTSW AX                           ; 005e60bd
    SAHF                                ; 005e60bf
    JA 0x005e60df                       ; 005e60c0
        ;   XREF to: 005e60df (CONDITIONAL_JUMP)  ; LAB_005e60df
    PUSH 0x656b4c                       ; 005e60c2 | = "morphCompleted"
    MOV EAX,[0x006793d0]                ; 005e60c7 | g_CEventListInstance | g_CEventListPtr
    PUSH EAX                            ; 005e60cc | g_CEventListInstance
    MOV dword ptr [EBX + 0xcdcc0],0x2   ; 005e60cd
    CALL core_event.cpp_CEventList_executeCommands_FUN_004aabe0 ; 005e60d7
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004aabe0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 005e60dc
    PUSH dword ptr [EBP + 0x18]         ; 005e60df
        ;   Label: LAB_005e60df
    PUSH EBX                            ; 005e60e2
    CALL core_vampboss.cpp_CVampireBoss_FUN_005e6ca0 ; 005e60e3
        ;   XREF to: 005e6ca0 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_FUN_005e6ca0(CVampireBoss * this_ptr)
    ADD ESP,0x8                         ; 005e60e8
    LEA ESI,[EBX + 0xbebc]              ; 005e60eb
    PUSH ESI                            ; 005e60f1
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 ; 005e60f2
        ;   XREF to: 0059e000 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e60f7
    PUSH ESI                            ; 005e60fa
    PUSH dword ptr [EBX + 0x2414]       ; 005e60fb
    LEA EAX,[EBX + 0x30]                ; 005e6101
    PUSH dword ptr [EBP + 0x18]         ; 005e6104
    PUSH EAX                            ; 005e6107
    LEA EAX,[EBX + 0x20]                ; 005e6108
    PUSH EAX                            ; 005e610b
    LEA EAX,[EBX + 0xe170]              ; 005e610c
    PUSH EAX                            ; 005e6112
    CALL core_cloth.cpp_CCloth_process_FUN_0043ab80 ; 005e6113
        ;   XREF to: 0043ab80 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_0043ab80(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005e6118
    LEA ESI,[EBX + 0x158]               ; 005e611b
    MOV EAX,dword ptr [EBP + 0x18]      ; 005e6121
    FLDZ                                ; 005e6124
    MOV dword ptr [ESP + 0x230],EAX     ; 005e6126
    FCOMP float ptr [EBP + 0x18]        ; 005e612d
    FNSTSW AX                           ; 005e6130
    SAHF                                ; 005e6132
    JNC 0x005e6160                      ; 005e6133
        ;   XREF to: 005e6160 (CONDITIONAL_JUMP)  ; LAB_005e6160
    LEA EAX,[ESP + 0x230]               ; 005e6135
        ;   Label: LAB_005e6135
    PUSH EAX                            ; 005e613c
    PUSH ESI                            ; 005e613d
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 005e613e
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 005e6143
    FLDZ                                ; 005e6146
    FCOMP float ptr [ESP + 0x230]       ; 005e6148
    FNSTSW AX                           ; 005e614f
    SAHF                                ; 005e6151
    JC 0x005e6135                       ; 005e6152
        ;   XREF to: 005e6135 (CONDITIONAL_JUMP)  ; LAB_005e6135
    LEA EAX,[EAX]                       ; 005e6154
    LEA EDX,[EDX]                       ; 005e615a
    PUSH ESI                            ; 005e6160
        ;   Label: LAB_005e6160
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 ; 005e6161
        ;   XREF to: 0059e000 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e6166
    PUSH ESI                            ; 005e6169
    PUSH dword ptr [EBX + 0x2414]       ; 005e616a
    LEA EAX,[EBX + 0x30]                ; 005e6170
    PUSH dword ptr [EBP + 0x18]         ; 005e6173
    PUSH EAX                            ; 005e6176
    LEA EDI,[EBX + 0x20]                ; 005e6177
    PUSH EDI                            ; 005e617a
    MOV dword ptr [ESP + 0x24c],EAX     ; 005e617b
    LEA EAX,[EBX + 0x4dfe0]             ; 005e6182
    PUSH EAX                            ; 005e6188
    CALL core_cloth.cpp_CCloth_process_FUN_0043ab80 ; 005e6189
        ;   XREF to: 0043ab80 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_0043ab80(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005e618e
    PUSH ESI                            ; 005e6191
    PUSH dword ptr [EBX + 0x2414]       ; 005e6192
    MOV EAX,dword ptr [ESP + 0x240]     ; 005e6198
    PUSH dword ptr [EBP + 0x18]         ; 005e619f
    PUSH EAX                            ; 005e61a2
    PUSH EDI                            ; 005e61a3
    LEA EAX,[EBX + 0x8de50]             ; 005e61a4
    PUSH EAX                            ; 005e61aa
    CALL core_cloth.cpp_CCloth_process_FUN_0043ab80 ; 005e61ab
        ;   XREF to: 0043ab80 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_0043ab80(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005e61b0
    LEA EAX,[ESP + 0xfc]                ; 005e61b3
    PUSH EAX                            ; 005e61ba
    PUSH ESI                            ; 005e61bb
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0 ; 005e61bc
        ;   XREF to: 005a16c0 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0(CDeformableModelInstance * this_ptr, CBoundingBox3D * output_bbox)
    ADD ESP,0x8                         ; 005e61c1
    LEA EDX,[EBX + 0x25f8]              ; 005e61c4
    MOV ESI,EAX                         ; 005e61ca
    MOV EDI,EDX                         ; 005e61cc
    CMP EDX,EAX                         ; 005e61ce
    JZ 0x005e61e2                       ; 005e61d0
        ;   XREF to: 005e61e2 (CONDITIONAL_JUMP)  ; LAB_005e61e2
    MOV ECX,dword ptr [EAX]             ; 005e61d2
    MOV dword ptr [EDX],ECX             ; 005e61d4
    MOV ECX,dword ptr [EAX + 0x4]       ; 005e61d6
    MOV dword ptr [EDX + 0x4],ECX       ; 005e61d9
    MOV ECX,dword ptr [EAX + 0x8]       ; 005e61dc
    MOV dword ptr [EDX + 0x8],ECX       ; 005e61df
    LEA EDX,[ESI + 0xc]                 ; 005e61e2
        ;   Label: LAB_005e61e2
    LEA EAX,[EDI + 0xc]                 ; 005e61e5
    CMP EAX,EDX                         ; 005e61e8
    JZ 0x005e61fc                       ; 005e61ea
        ;   XREF to: 005e61fc (CONDITIONAL_JUMP)  ; LAB_005e61fc
    MOV ECX,dword ptr [EDX]             ; 005e61ec
    MOV dword ptr [EAX],ECX             ; 005e61ee
    MOV ECX,dword ptr [EDX + 0x4]       ; 005e61f0
    MOV dword ptr [EAX + 0x4],ECX       ; 005e61f3
    MOV ECX,dword ptr [EDX + 0x8]       ; 005e61f6
    MOV dword ptr [EAX + 0x8],ECX       ; 005e61f9
    LEA EAX,[ESP + 0xcc]                ; 005e61fc
        ;   Label: LAB_005e61fc
    PUSH EAX                            ; 005e6203
    LEA EAX,[EBX + 0xbebc]              ; 005e6204
    PUSH EAX                            ; 005e620a
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0 ; 005e620b
        ;   XREF to: 005a16c0 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0(CDeformableModelInstance * this_ptr, CBoundingBox3D * output_bbox)
    ADD ESP,0x8                         ; 005e6210
    LEA EAX,[ESP + 0xcc]                ; 005e6213
    PUSH EAX                            ; 005e621a
    LEA ESI,[EBX + 0x25f8]              ; 005e621b
    PUSH ESI                            ; 005e6221
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 005e6222
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 005e6227
    LEA EAX,[ESP + 0xd8]                ; 005e622a
    PUSH EAX                            ; 005e6231
    PUSH ESI                            ; 005e6232
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 005e6233
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 005e6238
    FLD float ptr [EBX + 0x24]          ; 005e623b
    FADD float ptr [EBP + 0x18]         ; 005e623e
    FSTP float ptr [EBX + 0x24]         ; 005e6241
    JMP 0x005e5f5f                      ; 005e6244
        ;   XREF to: 005e5f5f (UNCONDITIONAL_JUMP)  ; LAB_005e5f5f
    CMP EDX,0x3                         ; 005e6249
        ;   Label: LAB_005e6249
    JNZ 0x005e6441                      ; 005e624c
        ;   XREF to: 005e6441 (CONDITIONAL_JUMP)  ; LAB_005e6441
    FLD float ptr [EBP + 0x18]          ; 005e6252
    FDIV float ptr [0x00664e7c]         ; 005e6255 | FLOAT_00664e7c
    MOV EAX,dword ptr [EBX + 0xce8f0]   ; 005e625b
    MOV dword ptr [ESP + 0x1f0],EAX     ; 005e6261
    FLD float ptr [ESP + 0x1f0]         ; 005e6268
    FXCH                                ; 005e626f
    FSTP float ptr [ESP + 0x1ec]        ; 005e6271
    FSUB float ptr [ESP + 0x1ec]        ; 005e6278
    FST float ptr [EBX + 0xce8f0]       ; 005e627f
    FLDZ                                ; 005e6285
    FCOMPP                              ; 005e6287
    FNSTSW AX                           ; 005e6289
    SAHF                                ; 005e628b
    JC 0x005e6420                       ; 005e628c
        ;   XREF to: 005e6420 (CONDITIONAL_JUMP)  ; LAB_005e6420
    PUSH 0x656b5b                       ; 005e6292 | = "backToHuman"
    MOV EDI,dword ptr [0x006793d0]      ; 005e6297 | g_CEventListPtr
    PUSH EDI                            ; 005e629d | g_CEventListInstance
    MOV dword ptr [EBX + 0xcdcc0],0x0   ; 005e629e
    CALL core_event.cpp_CEventList_executeCommands_FUN_004aabe0 ; 005e62a8
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004aabe0(CEventList * this_ptr, char * commands)
    FLD float ptr [EBX + 0x2414]        ; 005e62ad
    MOV dword ptr [EBX + 0xce8f0],0x0   ; 005e62b3
    ADD ESP,0x8                         ; 005e62bd
    FSTP float ptr [EBX + 0x24]         ; 005e62c0
        ;   Label: LAB_005e62c0
    PUSH dword ptr [EBP + 0x18]         ; 005e62c3
    PUSH EBX                            ; 005e62c6
    CALL core_vampboss.cpp_CVampireBoss_FUN_005e6ca0 ; 005e62c7
        ;   XREF to: 005e6ca0 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_FUN_005e6ca0(CVampireBoss * this_ptr)
    ADD ESP,0x8                         ; 005e62cc
    LEA ESI,[EBX + 0xbebc]              ; 005e62cf
    PUSH ESI                            ; 005e62d5
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 ; 005e62d6
        ;   XREF to: 0059e000 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e62db
    PUSH ESI                            ; 005e62de
    PUSH dword ptr [EBX + 0x2414]       ; 005e62df
    LEA EAX,[EBX + 0x30]                ; 005e62e5
    PUSH dword ptr [EBP + 0x18]         ; 005e62e8
    PUSH EAX                            ; 005e62eb
    LEA EAX,[EBX + 0x20]                ; 005e62ec
    PUSH EAX                            ; 005e62ef
    LEA EAX,[EBX + 0xe170]              ; 005e62f0
    PUSH EAX                            ; 005e62f6
    CALL core_cloth.cpp_CCloth_process_FUN_0043ab80 ; 005e62f7
        ;   XREF to: 0043ab80 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_0043ab80(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005e62fc
    LEA ESI,[EBX + 0x158]               ; 005e62ff
    MOV EAX,dword ptr [EBP + 0x18]      ; 005e6305
    FLDZ                                ; 005e6308
    MOV dword ptr [ESP + 0x234],EAX     ; 005e630a
    FCOMP float ptr [EBP + 0x18]        ; 005e6311
    FNSTSW AX                           ; 005e6314
    SAHF                                ; 005e6316
    JNC 0x005e6340                      ; 005e6317
        ;   XREF to: 005e6340 (CONDITIONAL_JUMP)  ; LAB_005e6340
    LEA EAX,[ESP + 0x234]               ; 005e6319
        ;   Label: LAB_005e6319
    PUSH EAX                            ; 005e6320
    PUSH ESI                            ; 005e6321
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 005e6322
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 005e6327
    FLDZ                                ; 005e632a
    FCOMP float ptr [ESP + 0x234]       ; 005e632c
    FNSTSW AX                           ; 005e6333
    SAHF                                ; 005e6335
    JC 0x005e6319                       ; 005e6336
        ;   XREF to: 005e6319 (CONDITIONAL_JUMP)  ; LAB_005e6319
    LEA EAX,[EAX]                       ; 005e6338
    MOV EDX,EDX                         ; 005e633e
    PUSH ESI                            ; 005e6340
        ;   Label: LAB_005e6340
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 ; 005e6341
        ;   XREF to: 0059e000 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e6346
    PUSH ESI                            ; 005e6349
    PUSH dword ptr [EBX + 0x2414]       ; 005e634a
    LEA EDI,[EBX + 0x30]                ; 005e6350
    PUSH dword ptr [EBP + 0x18]         ; 005e6353
    PUSH EDI                            ; 005e6356
    LEA EAX,[EBX + 0x20]                ; 005e6357
    PUSH EAX                            ; 005e635a
    MOV dword ptr [ESP + 0x24c],EAX     ; 005e635b
    LEA EAX,[EBX + 0x4dfe0]             ; 005e6362
    PUSH EAX                            ; 005e6368
    CALL core_cloth.cpp_CCloth_process_FUN_0043ab80 ; 005e6369
        ;   XREF to: 0043ab80 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_0043ab80(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005e636e
    PUSH ESI                            ; 005e6371
    PUSH dword ptr [EBX + 0x2414]       ; 005e6372
    PUSH dword ptr [EBP + 0x18]         ; 005e6378
    PUSH EDI                            ; 005e637b
    MOV ECX,dword ptr [ESP + 0x248]     ; 005e637c
    PUSH ECX                            ; 005e6383
    LEA EAX,[EBX + 0x8de50]             ; 005e6384
    PUSH EAX                            ; 005e638a
    CALL core_cloth.cpp_CCloth_process_FUN_0043ab80 ; 005e638b
        ;   XREF to: 0043ab80 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_0043ab80(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005e6390
    LEA EAX,[ESP + 0x9c]                ; 005e6393
    PUSH EAX                            ; 005e639a
    PUSH ESI                            ; 005e639b
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0 ; 005e639c
        ;   XREF to: 005a16c0 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0(CDeformableModelInstance * this_ptr, CBoundingBox3D * output_bbox)
    ADD ESP,0x8                         ; 005e63a1
    LEA EDX,[EBX + 0x25f8]              ; 005e63a4
    MOV EDI,EAX                         ; 005e63aa
    MOV ESI,EDX                         ; 005e63ac
    CMP EDX,EAX                         ; 005e63ae
    JZ 0x005e63c2                       ; 005e63b0
        ;   XREF to: 005e63c2 (CONDITIONAL_JUMP)  ; LAB_005e63c2
    MOV ECX,dword ptr [EAX]             ; 005e63b2
    MOV dword ptr [EDX],ECX             ; 005e63b4
    MOV ECX,dword ptr [EAX + 0x4]       ; 005e63b6
    MOV dword ptr [EDX + 0x4],ECX       ; 005e63b9
    MOV ECX,dword ptr [EAX + 0x8]       ; 005e63bc
    MOV dword ptr [EDX + 0x8],ECX       ; 005e63bf
    LEA EDX,[EDI + 0xc]                 ; 005e63c2
        ;   Label: LAB_005e63c2
    LEA EAX,[ESI + 0xc]                 ; 005e63c5
    CMP EAX,EDX                         ; 005e63c8
    JZ 0x005e63dc                       ; 005e63ca
        ;   XREF to: 005e63dc (CONDITIONAL_JUMP)  ; LAB_005e63dc
    MOV ECX,dword ptr [EDX]             ; 005e63cc
    MOV dword ptr [EAX],ECX             ; 005e63ce
    MOV ECX,dword ptr [EDX + 0x4]       ; 005e63d0
    MOV dword ptr [EAX + 0x4],ECX       ; 005e63d3
    MOV ECX,dword ptr [EDX + 0x8]       ; 005e63d6
    MOV dword ptr [EAX + 0x8],ECX       ; 005e63d9
    LEA EAX,[ESP + 0x84]                ; 005e63dc
        ;   Label: LAB_005e63dc
    PUSH EAX                            ; 005e63e3
    LEA EAX,[EBX + 0xbebc]              ; 005e63e4
    PUSH EAX                            ; 005e63ea
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0 ; 005e63eb
        ;   XREF to: 005a16c0 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0(CDeformableModelInstance * this_ptr, CBoundingBox3D * output_bbox)
    ADD ESP,0x8                         ; 005e63f0
    LEA EAX,[ESP + 0x84]                ; 005e63f3
    PUSH EAX                            ; 005e63fa
    LEA ESI,[EBX + 0x25f8]              ; 005e63fb
    PUSH ESI                            ; 005e6401
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 005e6402
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 005e6407
    LEA EAX,[ESP + 0x90]                ; 005e640a
    PUSH EAX                            ; 005e6411
    PUSH ESI                            ; 005e6412
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 005e6413
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 005e6418
    JMP 0x005e5f5f                      ; 005e641b
        ;   XREF to: 005e5f5f (UNCONDITIONAL_JUMP)  ; LAB_005e5f5f
    FLD float ptr [EBX + 0x2414]        ; 005e6420
        ;   Label: LAB_005e6420
    FSUB float ptr [EBX + 0x24]         ; 005e6426
    FLD float ptr [ESP + 0x1ec]         ; 005e6429
    FDIV float ptr [ESP + 0x1f0]        ; 005e6430
    FMULP                               ; 005e6437
    FADD float ptr [EBX + 0x24]         ; 005e6439
    JMP 0x005e62c0                      ; 005e643c
        ;   XREF to: 005e62c0 (UNCONDITIONAL_JUMP)  ; LAB_005e62c0
    MOV EAX,dword ptr [EBP + 0x18]      ; 005e6441
        ;   Label: LAB_005e6441
    MOV dword ptr [ESP + 0x1d8],EAX     ; 005e6444
    LEA EAX,[EBX + 0x158]               ; 005e644b
    FLDZ                                ; 005e6451
    MOV dword ptr [ESP + 0x220],EAX     ; 005e6453
    FCOMP float ptr [EBP + 0x18]        ; 005e645a
    FNSTSW AX                           ; 005e645d
    SAHF                                ; 005e645f
    JNC 0x005e64a9                      ; 005e6460
        ;   XREF to: 005e64a9 (CONDITIONAL_JUMP)  ; LAB_005e64a9
    LEA EAX,[ESP + 0x1d8]               ; 005e6462
        ;   Label: LAB_005e6462
    PUSH EAX                            ; 005e6469
    MOV EDX,dword ptr [ESP + 0x224]     ; 005e646a
    PUSH EDX                            ; 005e6471
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 005e6472
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 005e6477
    CMP EAX,0x2                         ; 005e647a
    JNC 0x005e6789                      ; 005e647d
        ;   XREF to: 005e6789 (CONDITIONAL_JUMP)  ; LAB_005e6789
    CMP EAX,0x1                         ; 005e6483
    JNZ 0x005e649b                      ; 005e6486
        ;   XREF to: 005e649b (CONDITIONAL_JUMP)  ; LAB_005e649b
    PUSH EBX                            ; 005e6488
    CALL core_vampboss.cpp_CVampireBoss_FUN_005e7390 ; 005e6489
        ;   XREF to: 005e7390 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_FUN_005e7390(CVampireBoss * this_ptr)
    ADD ESP,0x4                         ; 005e648e
        ;   Label: LAB_005e648e
    MOV dword ptr [EBX + 0xce8f4],0x3f800000 ; 005e6491
    FLDZ                                ; 005e649b
        ;   Label: LAB_005e649b
    FCOMP float ptr [ESP + 0x1d8]       ; 005e649d
    FNSTSW AX                           ; 005e64a4
    SAHF                                ; 005e64a6
    JC 0x005e6462                       ; 005e64a7
        ;   XREF to: 005e6462 (CONDITIONAL_JUMP)  ; LAB_005e6462
    LEA EAX,[ESP + 0xe4]                ; 005e64a9
        ;   Label: LAB_005e64a9
    PUSH EAX                            ; 005e64b0
    MOV EDX,dword ptr [ESP + 0x224]     ; 005e64b1
    PUSH EDX                            ; 005e64b8
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0 ; 005e64b9
        ;   XREF to: 005a16c0 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0(CDeformableModelInstance * this_ptr, CBoundingBox3D * output_bbox)
    ADD ESP,0x8                         ; 005e64be
    LEA EDX,[EBX + 0x25f8]              ; 005e64c1
    MOV ESI,EAX                         ; 005e64c7
    MOV EDI,EDX                         ; 005e64c9
    CMP EDX,EAX                         ; 005e64cb
    JZ 0x005e64df                       ; 005e64cd
        ;   XREF to: 005e64df (CONDITIONAL_JUMP)  ; LAB_005e64df
    MOV ECX,dword ptr [EAX]             ; 005e64cf
    MOV dword ptr [EDX],ECX             ; 005e64d1
    MOV ECX,dword ptr [EAX + 0x4]       ; 005e64d3
    MOV dword ptr [EDX + 0x4],ECX       ; 005e64d6
    MOV ECX,dword ptr [EAX + 0x8]       ; 005e64d9
    MOV dword ptr [EDX + 0x8],ECX       ; 005e64dc
    LEA EDX,[ESI + 0xc]                 ; 005e64df
        ;   Label: LAB_005e64df
    LEA EAX,[EDI + 0xc]                 ; 005e64e2
    CMP EAX,EDX                         ; 005e64e5
    JZ 0x005e64f9                       ; 005e64e7
        ;   XREF to: 005e64f9 (CONDITIONAL_JUMP)  ; LAB_005e64f9
    MOV ECX,dword ptr [EDX]             ; 005e64e9
    MOV dword ptr [EAX],ECX             ; 005e64eb
    MOV ECX,dword ptr [EDX + 0x4]       ; 005e64ed
    MOV dword ptr [EAX + 0x4],ECX       ; 005e64f0
    MOV ECX,dword ptr [EDX + 0x8]       ; 005e64f3
    MOV dword ptr [EAX + 0x8],ECX       ; 005e64f6
    LEA ESI,[EBX + 0x158]               ; 005e64f9
        ;   Label: LAB_005e64f9
    PUSH ESI                            ; 005e64ff
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005e6500
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005e6505
    ADD ESP,0x4                         ; 005e6508
    MOV EDI,EAX                         ; 005e650b
    CMP EAX,0x9                         ; 005e650d
    JA 0x005e6569                       ; 005e6510
        ;   XREF to: 005e6569 (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x5e5944]  ; 005e6512 | caseD_0 | caseD_8 | caseD_2
        ;   Label: switchD
    FLD float ptr [0x00664e84]          ; 005e6519 | FLOAT_00664e84
        ;   Label: caseD_0
    FMUL float ptr [EBP + 0x18]         ; 005e651f
    MOV EAX,[0x0067b654]                ; 005e6522 | g_CGameInstance | g_CGamePtr
    FSTP float ptr [EBX + 0x2438]       ; 005e6527
    CMP dword ptr [EAX + 0x228],0x0     ; 005e652d | DAT_02d81cc4
    JZ 0x005e6ad3                       ; 005e6534
        ;   XREF to: 005e6ad3 (CONDITIONAL_JUMP)  ; LAB_005e6ad3
    PUSH 0x656b67                       ; 005e653a | = "morphToBat"
    MOV ECX,dword ptr [0x006793d0]      ; 005e653f | g_CEventListInstance | g_CEventListPtr
    PUSH ECX                            ; 005e6545 | g_CEventListInstance
    MOV dword ptr [EBX + 0xce8f4],0x40400000 ; 005e6546
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 005e6550
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005e6555
    TEST EAX,EAX                        ; 005e6558
    JZ 0x005e67a8                       ; 005e655a
        ;   XREF to: 005e67a8 (CONDITIONAL_JUMP)  ; LAB_005e67a8
    PUSH EBX                            ; 005e6560
        ;   Label: LAB_005e6560
    CALL core_vampboss.cpp_CVampireBoss_FUN_005e7480 ; 005e6561
        ;   XREF to: 005e7480 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_FUN_005e7480(CVampireBoss * this_ptr)
    ADD ESP,0x4                         ; 005e6566
        ;   Label: LAB_005e6566
    MOV EAX,[0x0067b654]                ; 005e6569 | g_CGamePtr
        ;   Label: caseD_9
    CMP dword ptr [EAX + 0x228],0x0     ; 005e656e | DAT_02d81cc4
    JNZ 0x005e65e3                      ; 005e6575
        ;   XREF to: 005e65e3 (CONDITIONAL_JUMP)  ; LAB_005e65e3
    CMP EDI,0x2                         ; 005e6577
    JZ 0x005e65e3                       ; 005e657a
        ;   XREF to: 005e65e3 (CONDITIONAL_JUMP)  ; LAB_005e65e3
    LEA EDX,[EBX + 0x241c]              ; 005e657c
    LEA EAX,[EBX + 0x23ac]              ; 005e6582
    FLD float ptr [EDX]                 ; 005e6588
    FADD float ptr [EAX]                ; 005e658a
    FLD float ptr [EBP + 0x18]          ; 005e658c
    FXCH                                ; 005e658f
    FSTP float ptr [ESP + 0x150]        ; 005e6591
    FLD float ptr [EDX + 0x4]           ; 005e6598
    FADD float ptr [EAX + 0x4]          ; 005e659b
    FXCH                                ; 005e659e
    FMUL double ptr [0x00656bc3]        ; 005e65a0 | DOUBLE_00656bc3
    FXCH                                ; 005e65a6
    FSTP float ptr [ESP + 0x154]        ; 005e65a8
    FLD float ptr [EDX + 0x8]           ; 005e65af
    FADD float ptr [EAX + 0x8]          ; 005e65b2
    FLD float ptr [ESP + 0x154]         ; 005e65b5
    FXCH                                ; 005e65bc
    FSTP float ptr [ESP + 0x158]        ; 005e65be
    LEA EAX,[ESP + 0x150]               ; 005e65c5
    FXCH                                ; 005e65cc
    FSUBR ST0,ST1                       ; 005e65ce
    PUSH EAX                            ; 005e65d0
    FSTP ST1                            ; 005e65d1
    PUSH EBX                            ; 005e65d3
    FSTP float ptr [ESP + 0x15c]        ; 005e65d4
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 005e65db
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 005e65e0
    LEA EAX,[EBX + 0x241c]              ; 005e65e3
        ;   Label: LAB_005e65e3
    MOV dword ptr [EAX + 0x8],0x0       ; 005e65e9
    MOV EDX,dword ptr [EAX + 0x8]       ; 005e65f0
    MOV dword ptr [EAX + 0x4],EDX       ; 005e65f3
    MOV EDX,dword ptr [EAX + 0x4]       ; 005e65f6
    MOV dword ptr [EAX],EDX             ; 005e65f9
    LEA EAX,[EBX + 0x23ac]              ; 005e65fb
    MOV dword ptr [EAX + 0x8],0x0       ; 005e6601
    PUSH EBX                            ; 005e6608
    MOV EDX,dword ptr [EAX + 0x8]       ; 005e6609
    MOV dword ptr [EAX + 0x4],EDX       ; 005e660c
    MOV EDX,dword ptr [EAX + 0x4]       ; 005e660f
    MOV dword ptr [EAX],EDX             ; 005e6612
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00429820 ; 005e6614
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005e6619
    LEA ESI,[EBX + 0x158]               ; 005e661c
    PUSH ESI                            ; 005e6622
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 005e6623
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e6628
    PUSH dword ptr [EBP + 0x18]         ; 005e662b
    PUSH EBX                            ; 005e662e
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 005e662f
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time, float param_3)
    ADD ESP,0x8                         ; 005e6634
    PUSH ESI                            ; 005e6637
    PUSH dword ptr [EBX + 0x2414]       ; 005e6638
    LEA EAX,[EBX + 0x30]                ; 005e663e
    PUSH dword ptr [EBP + 0x18]         ; 005e6641
    PUSH EAX                            ; 005e6644
    LEA EDI,[EBX + 0x20]                ; 005e6645
    PUSH EDI                            ; 005e6648
    MOV dword ptr [ESP + 0x24c],EAX     ; 005e6649
    LEA EAX,[EBX + 0x4dfe0]             ; 005e6650
    PUSH EAX                            ; 005e6656
    CALL core_cloth.cpp_CCloth_process_FUN_0043ab80 ; 005e6657
        ;   XREF to: 0043ab80 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_0043ab80(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005e665c
    PUSH ESI                            ; 005e665f
    PUSH dword ptr [EBX + 0x2414]       ; 005e6660
    MOV EAX,dword ptr [ESP + 0x240]     ; 005e6666
    PUSH dword ptr [EBP + 0x18]         ; 005e666d
    PUSH EAX                            ; 005e6670
    PUSH EDI                            ; 005e6671
    LEA EAX,[EBX + 0x8de50]             ; 005e6672
    PUSH EAX                            ; 005e6678
    CALL core_cloth.cpp_CCloth_process_FUN_0043ab80 ; 005e6679
        ;   XREF to: 0043ab80 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_0043ab80(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005e667e
    JMP 0x005e5f5f                      ; 005e6681
        ;   XREF to: 005e5f5f (UNCONDITIONAL_JUMP)  ; LAB_005e5f5f
    PUSH EBX                            ; 005e6686
        ;   Label: LAB_005e6686
    CALL core_vampboss.cpp_CVampireBoss_FUN_005e7410 ; 005e6687
        ;   XREF to: 005e7410 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_FUN_005e7410(CVampireBoss * this_ptr)
    JMP 0x005e648e                      ; 005e668c
        ;   XREF to: 005e648e (UNCONDITIONAL_JUMP)  ; LAB_005e648e
    PUSH EBX                            ; 005e6691
        ;   Label: LAB_005e6691
    CALL core_vampboss.cpp_CVampireBoss_FUN_005e7320 ; 005e6692
        ;   XREF to: 005e7320 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_FUN_005e7320(CVampireBoss * this_ptr)
    JMP 0x005e648e                      ; 005e6697
        ;   XREF to: 005e648e (UNCONDITIONAL_JUMP)  ; LAB_005e648e
    PUSH 0x0                            ; 005e669c
        ;   Label: LAB_005e669c
    PUSH 0x0                            ; 005e669e
    MOV EAX,dword ptr [EBX + 0x154]     ; 005e66a0
    PUSH EBX                            ; 005e66a6
    CALL dword ptr [EAX + 0x13c]        ; 005e66a7
    ADD ESP,0xc                         ; 005e66ad
    LEA EAX,[ESP + 0x18c]               ; 005e66b0
    PUSH EAX                            ; 005e66b7
    LEA EAX,[ESP + 0x148]               ; 005e66b8
    XOR ECX,ECX                         ; 005e66bf
    PUSH EAX                            ; 005e66c1
    MOV ESI,0x41a00000                  ; 005e66c2
    MOV dword ptr [ESP + 0x194],ECX     ; 005e66c7
    PUSH EBX                            ; 005e66ce
    MOV dword ptr [ESP + 0x19c],ESI     ; 005e66cf
    MOV dword ptr [ESP + 0x1a0],ESI     ; 005e66d6
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 005e66dd
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 005e66e2
    PUSH 0x0                            ; 005e66e5
    LEA EAX,[ESP + 0x148]               ; 005e66e7
    PUSH 0xbf800000                     ; 005e66ee
    PUSH EAX                            ; 005e66f3
    PUSH EBX                            ; 005e66f4
    MOV EDI,ESI                         ; 005e66f5
    CALL core_charactr.cpp_CCharacter_dismember_FUN_0042b9e0 ; 005e66f7
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismember_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * impact_point, float impact_force)
    ADD ESP,0x10                        ; 005e66fc
    XOR EAX,EAX                         ; 005e66ff
    XOR EDI,ESI                         ; 005e6701
    MOV dword ptr [ESP + 0x224],EAX     ; 005e6703
    MOV EAX,[0x006810c8]                ; 005e670a | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_005e670a
    MOV EDX,dword ptr [ESP + 0x224]     ; 005e670f
    CMP EDX,dword ptr [EAX + 0x150fdc]  ; 005e6716 | g_CDemonSetInstance.enemy_count
    JGE 0x005e649b                      ; 005e671c
        ;   XREF to: 005e649b (CONDITIONAL_JUMP)  ; LAB_005e649b
    MOV ESI,dword ptr [0x03f87518]      ; 005e6722 | g_CTVBatClassInfo.name_hash
    PUSH ESI                            ; 005e6728
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x150fe0] ; 005e6729 | DAT_03265258 | DAT_0326525c
    PUSH EDX                            ; 005e6730
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005e6731
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 005e6736
    ADD ESP,0x8                         ; 005e6738
    TEST EAX,EAX                        ; 005e673b
    JNZ 0x005e6753                      ; 005e673d
        ;   XREF to: 005e6753 (CONDITIONAL_JUMP)  ; LAB_005e6753
    MOV EDX,dword ptr [ESP + 0x224]     ; 005e673f
        ;   Label: LAB_005e673f
    INC EDX                             ; 005e6746
    ADD EDI,0x4                         ; 005e6747
    MOV dword ptr [ESP + 0x224],EDX     ; 005e674a
    JMP 0x005e670a                      ; 005e6751
        ;   XREF to: 005e670a (UNCONDITIONAL_JUMP)  ; LAB_005e670a
    CMP dword ptr [EAX + 0xc064],0x0    ; 005e6753
        ;   Label: LAB_005e6753
    JZ 0x005e673f                       ; 005e675a
        ;   XREF to: 005e673f (CONDITIONAL_JUMP)  ; LAB_005e673f
    LEA EAX,[ESP + 0x48]                ; 005e675c
    PUSH EAX                            ; 005e6760
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 005e6761
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    MOV EAX,0x4479c000                  ; 005e6766
    ADD ESP,0x4                         ; 005e676b
    MOV dword ptr [ESP + 0x4c],EAX      ; 005e676e
    LEA EAX,[ESP + 0x48]                ; 005e6772
    PUSH EAX                            ; 005e6776
    MOV EDX,dword ptr [ESI + 0x154]     ; 005e6777
    PUSH ESI                            ; 005e677d
    CALL dword ptr [EDX + 0x11c]        ; 005e677e
    ADD ESP,0x8                         ; 005e6784
    JMP 0x005e673f                      ; 005e6787
        ;   XREF to: 005e673f (UNCONDITIONAL_JUMP)  ; LAB_005e673f
    JBE 0x005e6686                      ; 005e6789
        ;   XREF to: 005e6686 (CONDITIONAL_JUMP)  ; LAB_005e6686
        ;   Label: LAB_005e6789
    CMP EAX,0x3                         ; 005e678f
    JBE 0x005e6691                      ; 005e6792
        ;   XREF to: 005e6691 (CONDITIONAL_JUMP)  ; LAB_005e6691
    CMP EAX,0x29a                       ; 005e6798
    JZ 0x005e669c                       ; 005e679d
        ;   XREF to: 005e669c (CONDITIONAL_JUMP)  ; LAB_005e669c
    JMP 0x005e649b                      ; 005e67a3
        ;   XREF to: 005e649b (UNCONDITIONAL_JUMP)  ; LAB_005e649b
    MOV EDX,dword ptr [0x02db87d0]      ; 005e67a8 | g_LocalHeroIndex
        ;   Label: LAB_005e67a8
    MOV EDX,dword ptr [EDX*0x4 + 0x2db87c0] ; 005e67ae | g_HeroActors
    LEA EAX,[EBX + 0x20]                ; 005e67b5
    FLD float ptr [EDX + 0x20]          ; 005e67b8
    FSUB float ptr [EAX]                ; 005e67bb
    FSTP float ptr [ESP + 0x114]        ; 005e67bd
    FLD float ptr [EDX + 0x24]          ; 005e67c4
    FSUB float ptr [EAX + 0x4]          ; 005e67c7
    FSTP float ptr [ESP + 0x118]        ; 005e67ca
    FLD float ptr [EDX + 0x28]          ; 005e67d1
    FSUB float ptr [EAX + 0x8]          ; 005e67d4
    LEA EAX,[ESP + 0x114]               ; 005e67d7
    PUSH EAX                            ; 005e67de
    LEA EAX,[ESP + 0x124]               ; 005e67df
    PUSH EAX                            ; 005e67e6
    FSTP float ptr [ESP + 0x124]        ; 005e67e7
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005e67ee
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 005e67f3
    MOV EAX,dword ptr [EAX + 0x4]       ; 005e67f6
    MOV dword ptr [ESP + 0x130],EAX     ; 005e67f9
    FLD float ptr [ESP + 0x130]         ; 005e6800
    FSUB float ptr [EBX + 0x34]         ; 005e6807
    SUB ESP,0x4                         ; 005e680a
    FSTP float ptr [ESP]                ; 005e680d
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005e6810
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x23c],EAX     ; 005e6815
    MOV EAX,dword ptr [ESP + 0x23c]     ; 005e681c
    MOV dword ptr [EBX + 0x2418],EAX    ; 005e6823
    ADD ESP,0x4                         ; 005e6829
    MOV EAX,dword ptr [EBX + 0x2418]    ; 005e682c
    MOV dword ptr [ESP + 0x21c],EAX     ; 005e6832
    MOV EAX,dword ptr [EBX + 0x2438]    ; 005e6839
    PUSH dword ptr [ESP + 0x21c]        ; 005e683f
    MOV dword ptr [ESP + 0x204],EAX     ; 005e6846
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005e684d
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x23c],EAX     ; 005e6852
    FLD float ptr [ESP + 0x23c]         ; 005e6859
    ADD ESP,0x4                         ; 005e6860
    FLD float ptr [ESP + 0x200]         ; 005e6863
    FXCH                                ; 005e686a
    FST float ptr [ESP + 0x21c]         ; 005e686c
    FXCH                                ; 005e6873
    FCHS                                ; 005e6875
    FSTP float ptr [ESP + 0x1f4]        ; 005e6877
    FCOMP float ptr [ESP + 0x1f4]       ; 005e687e
    FNSTSW AX                           ; 005e6885
    SAHF                                ; 005e6887
    JNC 0x005e68aa                      ; 005e6888
        ;   XREF to: 005e68aa (CONDITIONAL_JUMP)  ; LAB_005e68aa
    MOV EAX,dword ptr [ESP + 0x1f4]     ; 005e688a
    MOV dword ptr [ESP + 0x1fc],EAX     ; 005e6891
        ;   Label: LAB_005e6891
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 005e6898
    MOV dword ptr [EBX + 0x2418],EAX    ; 005e689f
    JMP 0x005e6569                      ; 005e68a5
        ;   XREF to: 005e6569 (UNCONDITIONAL_JUMP)  ; caseD_8
    FLD float ptr [ESP + 0x21c]         ; 005e68aa
        ;   Label: LAB_005e68aa
    FCOMP float ptr [ESP + 0x200]       ; 005e68b1
    FNSTSW AX                           ; 005e68b8
    SAHF                                ; 005e68ba
    JBE 0x005e68c6                      ; 005e68bb
        ;   XREF to: 005e68c6 (CONDITIONAL_JUMP)  ; LAB_005e68c6
    MOV EAX,dword ptr [ESP + 0x200]     ; 005e68bd
    JMP 0x005e6891                      ; 005e68c4
        ;   XREF to: 005e6891 (UNCONDITIONAL_JUMP)  ; LAB_005e6891
    MOV EAX,dword ptr [ESP + 0x21c]     ; 005e68c6
        ;   Label: LAB_005e68c6
    JMP 0x005e6891                      ; 005e68cd
        ;   XREF to: 005e6891 (UNCONDITIONAL_JUMP)  ; LAB_005e6891
    FLD float ptr [EBX + 0x2440]        ; 005e68cf
        ;   Label: caseD_3
    FMUL float ptr [EBP + 0x18]         ; 005e68d5
    FDIV float ptr [0x00664e88]         ; 005e68d8 | FLOAT_00664e88
    FADD float ptr [EBX + 0x243c]       ; 005e68de
    FST float ptr [EBX + 0x243c]        ; 005e68e4
    FCOMP double ptr [0x00656bbb]       ; 005e68ea | DOUBLE_00656bbb
    FNSTSW AX                           ; 005e68f0
    SAHF                                ; 005e68f2
    JA 0x005e6560                       ; 005e68f3
        ;   XREF to: 005e6560 (CONDITIONAL_JUMP)  ; LAB_005e6560
    LEA ESI,[EBX + 0x20]                ; 005e68f9
    PUSH 0x41400000                     ; 005e68fc
    PUSH ESI                            ; 005e6901
    CALL core_hero.cpp_FUN_004f2220     ; 005e6902
        ;   XREF to: 004f2220 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004f2220()
    ADD ESP,0x8                         ; 005e6907
    TEST EAX,EAX                        ; 005e690a
    JNZ 0x005e6ab9                      ; 005e690c
        ;   XREF to: 005e6ab9 (CONDITIONAL_JUMP)  ; LAB_005e6ab9
    MOV EAX,[0x02db87d0]                ; 005e6912 | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 005e6917 | g_HeroActors
    FLD float ptr [EAX + 0x20]          ; 005e691e
    FSUB float ptr [ESI]                ; 005e6921
    FSTP float ptr [ESP + 0x180]        ; 005e6923
    FLD float ptr [EAX + 0x24]          ; 005e692a
    FSUB float ptr [ESI + 0x4]          ; 005e692d
    FSTP float ptr [ESP + 0x184]        ; 005e6930
    FLD float ptr [EAX + 0x28]          ; 005e6937
    LEA EAX,[ESP + 0x180]               ; 005e693a
    PUSH EAX                            ; 005e6941
    LEA EAX,[ESP + 0x178]               ; 005e6942
    FSUB float ptr [ESI + 0x8]          ; 005e6949
    PUSH EAX                            ; 005e694c
    FSTP float ptr [ESP + 0x190]        ; 005e694d
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005e6954
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 005e6959
    MOV EAX,dword ptr [EAX + 0x4]       ; 005e695c
    MOV dword ptr [ESP + 0x13c],EAX     ; 005e695f
    FLD float ptr [ESP + 0x13c]         ; 005e6966
    FSUB float ptr [EBX + 0x34]         ; 005e696d
    SUB ESP,0x4                         ; 005e6970
    FSTP float ptr [ESP]                ; 005e6973
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005e6976
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x23c],EAX     ; 005e697b
    MOV EAX,dword ptr [ESP + 0x23c]     ; 005e6982
    MOV dword ptr [EBX + 0x2418],EAX    ; 005e6989
    ADD ESP,0x4                         ; 005e698f
    MOV EAX,dword ptr [EBX + 0x2418]    ; 005e6992
    MOV dword ptr [ESP + 0x214],EAX     ; 005e6998
    MOV EAX,dword ptr [EBX + 0x2438]    ; 005e699f
    PUSH dword ptr [ESP + 0x214]        ; 005e69a5
    MOV dword ptr [ESP + 0x20c],EAX     ; 005e69ac
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005e69b3
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x23c],EAX     ; 005e69b8
    FLD float ptr [ESP + 0x23c]         ; 005e69bf
    ADD ESP,0x4                         ; 005e69c6
    FLD float ptr [ESP + 0x208]         ; 005e69c9
    FXCH                                ; 005e69d0
    FST float ptr [ESP + 0x214]         ; 005e69d2
    FXCH                                ; 005e69d9
    FCHS                                ; 005e69db
    FSTP float ptr [ESP + 0x228]        ; 005e69dd
    FCOMP float ptr [ESP + 0x228]       ; 005e69e4
    FNSTSW AX                           ; 005e69eb
    SAHF                                ; 005e69ed
    JNC 0x005e6a6b                      ; 005e69ee
        ;   XREF to: 005e6a6b (CONDITIONAL_JUMP)  ; LAB_005e6a6b
    MOV EAX,dword ptr [ESP + 0x228]     ; 005e69f4
    MOV dword ptr [ESP + 0x204],EAX     ; 005e69fb
        ;   Label: LAB_005e69fb
    FLD float ptr [EBX + 0xce8f4]       ; 005e6a02
    MOV EAX,dword ptr [ESP + 0x204]     ; 005e6a08
    FSUB float ptr [EBP + 0x18]         ; 005e6a0f
    MOV dword ptr [EBX + 0x2418],EAX    ; 005e6a12
    FST float ptr [EBX + 0xce8f4]       ; 005e6a18
    FLDZ                                ; 005e6a1e
    FCOMPP                              ; 005e6a20
    FNSTSW AX                           ; 005e6a22
    SAHF                                ; 005e6a24
    JC 0x005e6569                       ; 005e6a25
        ;   XREF to: 005e6569 (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x2                            ; 005e6a2b
    PUSH 0x0                            ; 005e6a2d
    MOV dword ptr [EBX + 0xce8f4],0x0   ; 005e6a2f
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 005e6a39
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 005e6a3e
    LEA EDX,[EBX + 0x158]               ; 005e6a41
    TEST EAX,EAX                        ; 005e6a47
    JZ 0x005e6a96                       ; 005e6a49
        ;   XREF to: 005e6a96 (CONDITIONAL_JUMP)  ; LAB_005e6a96
    CMP EAX,0x1                         ; 005e6a4b
    JZ 0x005e6aa8                       ; 005e6a4e
        ;   XREF to: 005e6aa8 (CONDITIONAL_JUMP)  ; LAB_005e6aa8
    CMP EAX,0x2                         ; 005e6a50
    JNZ 0x005e6569                      ; 005e6a53
        ;   XREF to: 005e6569 (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 005e6a59
    PUSH 0x6                            ; 005e6a5b
    PUSH EDX                            ; 005e6a5d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005e6a5e
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005e6a63
    JMP 0x005e6569                      ; 005e6a66
        ;   XREF to: 005e6569 (UNCONDITIONAL_JUMP)  ; caseD_8
    FLD float ptr [ESP + 0x214]         ; 005e6a6b
        ;   Label: LAB_005e6a6b
    FCOMP float ptr [ESP + 0x208]       ; 005e6a72
    FNSTSW AX                           ; 005e6a79
    SAHF                                ; 005e6a7b
    JBE 0x005e6a8a                      ; 005e6a7c
        ;   XREF to: 005e6a8a (CONDITIONAL_JUMP)  ; LAB_005e6a8a
    MOV EAX,dword ptr [ESP + 0x208]     ; 005e6a7e
    JMP 0x005e69fb                      ; 005e6a85
        ;   XREF to: 005e69fb (UNCONDITIONAL_JUMP)  ; LAB_005e69fb
    MOV EAX,dword ptr [ESP + 0x214]     ; 005e6a8a
        ;   Label: LAB_005e6a8a
    JMP 0x005e69fb                      ; 005e6a91
        ;   XREF to: 005e69fb (UNCONDITIONAL_JUMP)  ; LAB_005e69fb
    PUSH 0x1                            ; 005e6a96
        ;   Label: LAB_005e6a96
    PUSH 0x4                            ; 005e6a98
    PUSH EDX                            ; 005e6a9a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005e6a9b
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005e6aa0
    JMP 0x005e6569                      ; 005e6aa3
        ;   XREF to: 005e6569 (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH EAX                            ; 005e6aa8
        ;   Label: LAB_005e6aa8
    PUSH 0x5                            ; 005e6aa9
    PUSH EDX                            ; 005e6aab
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005e6aac
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005e6ab1
    JMP 0x005e6569                      ; 005e6ab4
        ;   XREF to: 005e6569 (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH EBX                            ; 005e6ab9
        ;   Label: LAB_005e6ab9
    CALL core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510 ; 005e6aba
        ;   XREF to: 005e7510 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510(CVampireBoss * this_ptr)
    JMP 0x005e6566                      ; 005e6abf
        ;   XREF to: 005e6566 (UNCONDITIONAL_JUMP)  ; LAB_005e6566
    MOV dword ptr [EBX + 0xce8f4],0x40400000 ; 005e6ac4
        ;   Label: caseD_2
    JMP 0x005e6569                      ; 005e6ace
        ;   XREF to: 005e6569 (UNCONDITIONAL_JUMP)  ; caseD_8
    LEA EAX,[EBX + 0xce91c]             ; 005e6ad3
        ;   Label: LAB_005e6ad3
    FLD float ptr [0x00664e80]          ; 005e6ad9 | FLOAT_00664e80
    PUSH EAX                            ; 005e6adf
    FMUL float ptr [EBP + 0x18]         ; 005e6ae0
    PUSH 0x497423f0                     ; 005e6ae3
    MOV EAX,dword ptr [EBX + 0xce908]   ; 005e6ae8
    FSTP float ptr [EBX + 0x2434]       ; 005e6aee
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0xce90c] ; 005e6af4
    PUSH 0x3e4ccccd                     ; 005e6afb
    PUSH EDX                            ; 005e6b00
    PUSH EBX                            ; 005e6b01
    CALL core_charactr.cpp_CCharacter_followActor_FUN_0042c5f0 ; 005e6b02
        ;   XREF to: 0042c5f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_followActor_FUN_0042c5f0(CCharacter * this_ptr, CDemonActor * actor, float min_dist, float max_dist, ...)
    MOV EAX,dword ptr [EBX + 0xce91c]   ; 005e6b07
    ADD ESP,0x14                        ; 005e6b0d
    CMP EAX,0x3                         ; 005e6b10
    JA 0x005e68cf                       ; 005e6b13
        ;   XREF to: 005e68cf (CONDITIONAL_JUMP)  ; caseD_0
    JMP dword ptr [EAX*0x4 + 0x5e5934]  ; 005e6b19 | caseD_0 | caseD_1 | switchdataD_005e5934
        ;   Label: switchD
    PUSH 0x656b72                       ; 005e6b20 | = "flyout"
        ;   Label: caseD_2
    MOV ECX,dword ptr [0x006793d0]      ; 005e6b25 | g_CEventListInstance | g_CEventListPtr
    PUSH ECX                            ; 005e6b2b | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 005e6b2c
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005e6b31
    TEST EAX,EAX                        ; 005e6b34
    JZ 0x005e6569                       ; 005e6b36
        ;   XREF to: 005e6569 (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 005e6b3c
    PUSH 0x0                            ; 005e6b3e
    PUSH ESI                            ; 005e6b40
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005e6b41
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005e6b46
    JMP 0x005e6569                      ; 005e6b49
        ;   XREF to: 005e6569 (UNCONDITIONAL_JUMP)  ; caseD_8
    FLD float ptr [EBX + 0x243c]        ; 005e6b4e
        ;   Label: LAB_005e6b4e
    FDIV float ptr [EBX + 0x2440]       ; 005e6b54
    PUSH 0x3f000000                     ; 005e6b5a
    SUB ESP,0x4                         ; 005e6b5f
    ADD EBX,0x2448                      ; 005e6b62
    FSTP float ptr [ESP]                ; 005e6b68
    PUSH EBX                            ; 005e6b6b
    PUSH EAX                            ; 005e6b6c | g_CGameInstance
    CALL core_game.cpp_CGame_setStatusDisplay_FUN_004e0bf0 ; 005e6b6d
        ;   XREF to: 004e0bf0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setStatusDisplay_FUN_004e0bf0(CGame * this_ptr, char * name, int value, float duration)
    ADD ESP,0x10                        ; 005e6b72
    MOV ESP,EBP                         ; 005e6b75
    POP EBP                             ; 005e6b77
    POP EDI                             ; 005e6b78
    POP ESI                             ; 005e6b79
    POP EBX                             ; 005e6b7a
    RET                                 ; 005e6b7b

