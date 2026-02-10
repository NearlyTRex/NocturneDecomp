; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gargoyle_cpp_CGargoyle_process_FUN_004e4a00(CGargoyle *this_ptr,float delta_time)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0x104]:1  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined1       Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined1       Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined1       Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined1       Stack[-0x68]:1  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined4 DAT_00002424
;   void* switchdataD_004e49e8 = 004e4e70
;   TerminatedCString s_s_confused_while_walking_0062d93f
;   TerminatedCString s_gargoyle_alive_wav_0062d969
;   TerminatedCString s_gargoyle_stone_wav_0062d97d
;   TerminatedCString s_gargoyle_stone_wav_0062d990
;   double DOUBLE_0062d9a7 = 3.14159265350000
;   double DOUBLE_0062d9af = 0.523598775583333
;   double DOUBLE_0062d9b7 = 32
;   float FLOAT_0065ea2c = 3
;   float FLOAT_0065ea38 = 10
;   CConsole* g_CConsolePtr = 0083b1a4
;   CConsole g_ConsolePtr
;   int g_GlobalDeltaTimeInt
;   int INT_02d83208
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
;   core_charactr.cpp_CCharacter_preProcess_FUN_00429820
;   core_charactr.cpp_CCharacter_process_FUN_00429870
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40
;   core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_enemy.cpp_CEnemy_FUN_004a9880
;   core_enemy.cpp_CEnemy_FUN_004a9fd0
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4a00
        ;   Label: core_gargoyle.cpp_CGargoyle_process_FUN_004e4a00
    PUSH ESI                            ; 004e4a01
    PUSH EDI                            ; 004e4a02
    PUSH EBP                            ; 004e4a03
    MOV EBP,ESP                         ; 004e4a04
    SUB ESP,0xf4                        ; 004e4a06
    SUB EBP,0x7a                        ; 004e4a0c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004e4a0f
    PUSH dword ptr [EBP + 0x92]         ; 004e4a15
    PUSH EBX                            ; 004e4a1b
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 004e4a1c
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004e4a21
    TEST EAX,EAX                        ; 004e4a24
    JZ 0x004e4a7a                       ; 004e4a26
        ;   XREF to: 004e4a7a (CONDITIONAL_JUMP)  ; LAB_004e4a7a
    LEA EAX,[EBX + 0x23ac]              ; 004e4a28
        ;   Label: LAB_004e4a28
    MOV dword ptr [EAX + 0x8],0x0       ; 004e4a2e
    FLD float ptr [EBP + 0x92]          ; 004e4a35
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e4a3b
    MOV dword ptr [EAX + 0x4],EDX       ; 004e4a3e
    MOV EDX,dword ptr [EAX + 0x4]       ; 004e4a41
    MOV dword ptr [EAX],EDX             ; 004e4a44
    FMUL float ptr [EBX + 0xbe24]       ; 004e4a46
    LEA ESI,[EBX + 0x158]               ; 004e4a4c
    FSTP float ptr [EBP + 0x5e]         ; 004e4a52
    FLD float ptr [EBP + 0x5e]          ; 004e4a55
        ;   Label: LAB_004e4a55
    FLDZ                                ; 004e4a58
    FCOMPP                              ; 004e4a5a
    FNSTSW AX                           ; 004e4a5c
    SAHF                                ; 004e4a5e
    JNC 0x004e4a9e                      ; 004e4a5f
        ;   XREF to: 004e4a9e (CONDITIONAL_JUMP)  ; LAB_004e4a9e
    LEA EAX,[EBP + 0x5e]                ; 004e4a61
    PUSH EAX                            ; 004e4a64
    PUSH ESI                            ; 004e4a65
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 004e4a66
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 004e4a6b
    PUSH EAX                            ; 004e4a6e
    PUSH EBX                            ; 004e4a6f
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 004e4a70
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, uint event_id)
    ADD ESP,0x8                         ; 004e4a75
    JMP 0x004e4a55                      ; 004e4a78
        ;   XREF to: 004e4a55 (UNCONDITIONAL_JUMP)  ; LAB_004e4a55
    LEA EAX,[EBX + 0x158]               ; 004e4a7a
        ;   Label: LAB_004e4a7a
    PUSH EAX                            ; 004e4a80
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004e4a81
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004e4a86
    ADD ESP,0x4                         ; 004e4a89
    CMP EAX,0x8                         ; 004e4a8c
    JZ 0x004e4a96                       ; 004e4a8f
        ;   XREF to: 004e4a96 (CONDITIONAL_JUMP)  ; LAB_004e4a96
    CMP EAX,0x5                         ; 004e4a91
    JNZ 0x004e4a28                      ; 004e4a94
        ;   XREF to: 004e4a28 (CONDITIONAL_JUMP)  ; LAB_004e4a28
    LEA ESP,[EBP + 0x7a]                ; 004e4a96
        ;   Label: LAB_004e4a96
    POP EBP                             ; 004e4a99
    POP EDI                             ; 004e4a9a
    POP ESI                             ; 004e4a9b
    POP EBX                             ; 004e4a9c
    RET                                 ; 004e4a9d
    FLD float ptr [EBX + 0xbe24]        ; 004e4a9e
        ;   Label: LAB_004e4a9e
    FLD float ptr [EBP + 0x92]          ; 004e4aa4
    FMUL double ptr [0x0062d9a7]        ; 004e4aaa | DOUBLE_0062d9a7
    FMULP                               ; 004e4ab0
    FLD float ptr [EBX + 0x23b4]        ; 004e4ab2
    PUSH ESI                            ; 004e4ab8
    FSTP float ptr [EBX + 0x2434]       ; 004e4ab9
    FSTP float ptr [EBX + 0x2438]       ; 004e4abf
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004e4ac5
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004e4aca
    PUSH dword ptr [EBP + 0x92]         ; 004e4acd
    MOV EDI,dword ptr [EAX + 0x24]      ; 004e4ad3
    PUSH EBX                            ; 004e4ad6
    MOV dword ptr [EBP + 0x62],EDI      ; 004e4ad7
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 ; 004e4ada
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004e4adf
    TEST EAX,EAX                        ; 004e4ae2
    JZ 0x004e5316                       ; 004e4ae4
        ;   XREF to: 004e5316 (CONDITIONAL_JUMP)  ; LAB_004e5316
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 004e4aea
    CMP EAX,0x2                         ; 004e4af0
    JNC 0x004e4d4c                      ; 004e4af3
        ;   XREF to: 004e4d4c (CONDITIONAL_JUMP)  ; LAB_004e4d4c
    CMP EAX,0x1                         ; 004e4af9
    JNZ 0x004e4d57                      ; 004e4afc
        ;   XREF to: 004e4d57 (CONDITIONAL_JUMP)  ; LAB_004e4d57
    PUSH 0x1                            ; 004e4b02
        ;   Label: LAB_004e4b02
    PUSH 0x1                            ; 004e4b04
    LEA EAX,[EBX + 0x158]               ; 004e4b06
        ;   Label: LAB_004e4b06
    PUSH EAX                            ; 004e4b0c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e4b0d
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e4b12
        ;   Label: LAB_004e4b12
    LEA EAX,[EBX + 0x23ac]              ; 004e4b15
    MOV dword ptr [EAX + 0x8],0x0       ; 004e4b1b
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e4b22
    MOV dword ptr [EAX + 0x4],EDX       ; 004e4b25
    MOV EDX,dword ptr [EAX + 0x4]       ; 004e4b28
    MOV dword ptr [EAX],EDX             ; 004e4b2b
    FLD float ptr [EBX + 0xbe38]        ; 004e4b2d
        ;   Label: caseD_4
    FLDZ                                ; 004e4b33
    FCOMPP                              ; 004e4b35
    FNSTSW AX                           ; 004e4b37
    SAHF                                ; 004e4b39
    JNC 0x004e4b4e                      ; 004e4b3a
        ;   XREF to: 004e4b4e (CONDITIONAL_JUMP)  ; LAB_004e4b4e
    FLD float ptr [EBX + 0xbe38]        ; 004e4b3c
    FSUB float ptr [EBP + 0x92]         ; 004e4b42
    FSTP float ptr [EBX + 0xbe38]       ; 004e4b48
    PUSH EBX                            ; 004e4b4e
        ;   Label: LAB_004e4b4e
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0 ; 004e4b4f
        ;   XREF to: 004297e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004e4b54
    TEST EAX,EAX                        ; 004e4b57
    JZ 0x004e4c17                       ; 004e4b59
        ;   XREF to: 004e4c17 (CONDITIONAL_JUMP)  ; LAB_004e4c17
    FLD float ptr [EBP + 0x92]          ; 004e4b5f
    FLD ST0                             ; 004e4b65
    FMUL double ptr [0x0062d9b7]        ; 004e4b67 | DOUBLE_0062d9b7
    FLD float ptr [EBX + 0x242c]        ; 004e4b6d
    FXCH                                ; 004e4b73
    FSUBR ST0,ST1                       ; 004e4b75
    LEA EDX,[EBX + 0x2428]              ; 004e4b77
    FSTP ST1                            ; 004e4b7d
    FSTP float ptr [EBX + 0x242c]       ; 004e4b7f
    FLD float ptr [EDX]                 ; 004e4b85
    FMUL ST1                            ; 004e4b87
    FSTP float ptr [EBP + -0xe]         ; 004e4b89
    FLD float ptr [EDX + 0x4]           ; 004e4b8c
    FMUL ST1                            ; 004e4b8f
    LEA ESI,[EBX + 0x241c]              ; 004e4b91
    FSTP float ptr [EBP + -0xa]         ; 004e4b97
    FMUL float ptr [EDX + 0x8]          ; 004e4b9a
    LEA EAX,[EBX + 0x23ac]              ; 004e4b9d
    FLD float ptr [EBP + -0xe]          ; 004e4ba3
    FXCH                                ; 004e4ba6
    FSTP float ptr [EBP + -0x6]         ; 004e4ba8
    FADD float ptr [ESI]                ; 004e4bab
    FLD float ptr [EBP + -0xa]          ; 004e4bad
    FXCH                                ; 004e4bb0
    FSTP float ptr [EBP + 0x16]         ; 004e4bb2
    FADD float ptr [ESI + 0x4]          ; 004e4bb5
    FLD float ptr [EBP + -0x6]          ; 004e4bb8
    FXCH                                ; 004e4bbb
    FSTP float ptr [EBP + 0x1a]         ; 004e4bbd
    FADD float ptr [ESI + 0x8]          ; 004e4bc0 | DAT_00002424
    FLD float ptr [EBP + 0x16]          ; 004e4bc3
    FXCH                                ; 004e4bc6
    FSTP float ptr [EBP + 0x1e]         ; 004e4bc8
    FADD float ptr [EAX]                ; 004e4bcb
    FLD float ptr [EBP + 0x1a]          ; 004e4bcd
    FXCH                                ; 004e4bd0
    FSTP float ptr [EBP + -0x26]        ; 004e4bd2
    FADD float ptr [EAX + 0x4]          ; 004e4bd5
    FLD float ptr [EBP + 0x1e]          ; 004e4bd8
    FXCH                                ; 004e4bdb
    FSTP float ptr [EBP + -0x22]        ; 004e4bdd
    FADD float ptr [EAX + 0x8]          ; 004e4be0
    FSTP float ptr [EBP + -0x1e]        ; 004e4be3
    MOV dword ptr [ESI + 0x8],0x0       ; 004e4be6 | DAT_00002424
    MOV EDX,dword ptr [ESI + 0x8]       ; 004e4bed | DAT_00002424
    MOV dword ptr [ESI + 0x4],EDX       ; 004e4bf0
    MOV EDX,dword ptr [ESI + 0x4]       ; 004e4bf3
    MOV dword ptr [ESI],EDX             ; 004e4bf6
    MOV dword ptr [EAX + 0x8],0x0       ; 004e4bf8
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e4bff
    MOV dword ptr [EAX + 0x4],EDX       ; 004e4c02
    MOV EDX,dword ptr [EAX + 0x4]       ; 004e4c05
    MOV dword ptr [EAX],EDX             ; 004e4c08
    LEA EAX,[EBP + -0x26]               ; 004e4c0a
    PUSH EAX                            ; 004e4c0d
    PUSH EBX                            ; 004e4c0e
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 004e4c0f
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004e4c14
    PUSH EBX                            ; 004e4c17
        ;   Label: LAB_004e4c17
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00429820 ; 004e4c18
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004e4c1d
    LEA EAX,[EBX + 0x158]               ; 004e4c20
    PUSH EAX                            ; 004e4c26
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 004e4c27
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e4c2c
    PUSH dword ptr [EBP + 0x92]         ; 004e4c2f
    PUSH EBX                            ; 004e4c35
    MOV ESI,dword ptr [EBP + 0x62]      ; 004e4c36
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 004e4c39
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time, float param_3)
    ADD ESP,0x8                         ; 004e4c3e
    CMP ESI,0x5                         ; 004e4c41
    JNZ 0x004e5326                      ; 004e4c44
        ;   XREF to: 004e5326 (CONDITIONAL_JUMP)  ; LAB_004e5326
    MOV EAX,dword ptr [EBX + 0xbeec]    ; 004e4c4a
    SHL EAX,0x8                         ; 004e4c50
    MOV dword ptr [EBX + 0xbf04],EAX    ; 004e4c53
    MOV EAX,dword ptr [EBX + 0xbef0]    ; 004e4c59
    SHL EAX,0x8                         ; 004e4c5f
    MOV dword ptr [EBX + 0xbf08],EAX    ; 004e4c62
    MOV EAX,dword ptr [EBX + 0xbef4]    ; 004e4c68
    SHL EAX,0x8                         ; 004e4c6e
    MOV dword ptr [EBX + 0xbf0c],EAX    ; 004e4c71
    MOV EDI,dword ptr [EBX + 0xbf04]    ; 004e4c77
        ;   Label: LAB_004e4c77
    MOV EAX,dword ptr [EBX + 0x108]     ; 004e4c7d
    CMP EAX,EDI                         ; 004e4c83
    JGE 0x004e5349                      ; 004e4c85
        ;   XREF to: 004e5349 (CONDITIONAL_JUMP)  ; LAB_004e5349
    MOV EAX,[0x02cf6a80]                ; 004e4c8b | g_GlobalDeltaTimeInt
    MOV EDI,dword ptr [EBX + 0x108]     ; 004e4c90
    ADD EDI,EAX                         ; 004e4c96
    MOV EDX,dword ptr [EBX + 0xbf04]    ; 004e4c98
    MOV dword ptr [EBX + 0x108],EDI     ; 004e4c9e
    CMP EDI,EDX                         ; 004e4ca4
    JLE 0x004e4cae                      ; 004e4ca6
        ;   XREF to: 004e4cae (CONDITIONAL_JUMP)  ; LAB_004e4cae
    MOV dword ptr [EBX + 0x108],EDX     ; 004e4ca8
    MOV ECX,dword ptr [EBX + 0xbf08]    ; 004e4cae
        ;   Label: LAB_004e4cae
    MOV EAX,dword ptr [EBX + 0x10c]     ; 004e4cb4
    CMP EAX,ECX                         ; 004e4cba
    JGE 0x004e537b                      ; 004e4cbc
        ;   XREF to: 004e537b (CONDITIONAL_JUMP)  ; LAB_004e537b
    MOV EAX,[0x02cf6a80]                ; 004e4cc2 | g_GlobalDeltaTimeInt
    MOV ECX,dword ptr [EBX + 0x10c]     ; 004e4cc7
    ADD ECX,EAX                         ; 004e4ccd
    MOV ESI,dword ptr [EBX + 0xbf08]    ; 004e4ccf
    MOV dword ptr [EBX + 0x10c],ECX     ; 004e4cd5
    CMP ECX,ESI                         ; 004e4cdb
    JLE 0x004e4ce5                      ; 004e4cdd
        ;   XREF to: 004e4ce5 (CONDITIONAL_JUMP)  ; LAB_004e4ce5
    MOV dword ptr [EBX + 0x10c],ESI     ; 004e4cdf
    MOV EDI,dword ptr [EBX + 0xbf0c]    ; 004e4ce5
        ;   Label: LAB_004e4ce5
    MOV EAX,dword ptr [EBX + 0x110]     ; 004e4ceb
    CMP EAX,EDI                         ; 004e4cf1
    JGE 0x004e53ad                      ; 004e4cf3
        ;   XREF to: 004e53ad (CONDITIONAL_JUMP)  ; LAB_004e53ad
    MOV EAX,[0x02cf6a80]                ; 004e4cf9 | g_GlobalDeltaTimeInt
    MOV EDI,dword ptr [EBX + 0x110]     ; 004e4cfe
    ADD EDI,EAX                         ; 004e4d04
    MOV EDX,dword ptr [EBX + 0xbf0c]    ; 004e4d06
    MOV dword ptr [EBX + 0x110],EDI     ; 004e4d0c
    CMP EDI,EDX                         ; 004e4d12
    JLE 0x004e4a96                      ; 004e4d14
        ;   XREF to: 004e4a96 (CONDITIONAL_JUMP)  ; LAB_004e4a96
    MOV dword ptr [EBX + 0x110],EDX     ; 004e4d1a
    LEA ESP,[EBP + 0x7a]                ; 004e4d20
    POP EBP                             ; 004e4d23
    POP EDI                             ; 004e4d24
    POP ESI                             ; 004e4d25
    POP EBX                             ; 004e4d26
    RET                                 ; 004e4d27
    PUSH 0x1                            ; 004e4d28
        ;   Label: LAB_004e4d28
    PUSH 0x0                            ; 004e4d2a
    PUSH ESI                            ; 004e4d2c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e4d2d
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e4d32
    PUSH EBX                            ; 004e4d35
    PUSH 0x62d93f                       ; 004e4d36 | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x0066e8e0]      ; 004e4d3b | g_CConsolePtr
    PUSH ECX                            ; 004e4d41 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004e4d42
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x004e4b12                      ; 004e4d47
        ;   XREF to: 004e4b12 (UNCONDITIONAL_JUMP)  ; LAB_004e4b12
    JBE 0x004e4b02                      ; 004e4d4c
        ;   XREF to: 004e4b02 (CONDITIONAL_JUMP)  ; LAB_004e4b02
        ;   Label: LAB_004e4d4c
    CMP EAX,0x3                         ; 004e4d52
    JZ 0x004e4d28                       ; 004e4d55
        ;   XREF to: 004e4d28 (CONDITIONAL_JUMP)  ; LAB_004e4d28
    PUSH 0x1                            ; 004e4d57
        ;   Label: LAB_004e4d57
    PUSH 0x0                            ; 004e4d59
    JMP 0x004e4b06                      ; 004e4d5b
        ;   XREF to: 004e4b06 (UNCONDITIONAL_JUMP)  ; LAB_004e4b06
    LEA EAX,[EBP + -0x7a]               ; 004e4d60
        ;   Label: caseD_3
    PUSH EAX                            ; 004e4d63
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 004e4d64
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004e4d69
    PUSH 0x40a00000                     ; 004e4d6c
    PUSH 0x40400000                     ; 004e4d71
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004e4d76
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e4d7b
    ADD ESP,0x8                         ; 004e4d7e
    LEA EAX,[EBP + -0x7a]               ; 004e4d81
    MOV EDX,dword ptr [0x02d83208]      ; 004e4d84 | INT_02d83208
    PUSH EAX                            ; 004e4d8a
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e4d8b
    MOV dword ptr [EBP + -0x46],EBX     ; 004e4d92
    SUB EAX,EDX                         ; 004e4d95
    MOV dword ptr [EBP + -0x42],EBX     ; 004e4d97
    SHL EAX,0x4                         ; 004e4d9a
    LEA EDX,[EBX + 0xfd8]               ; 004e4d9d
    ADD EAX,EDX                         ; 004e4da3
    PUSH 0x3ecccccd                     ; 004e4da5
    PUSH EAX                            ; 004e4daa
    PUSH 0x3f87558                      ; 004e4dab | g_ZeroVector
    LEA EAX,[EBP + -0x2]                ; 004e4db0
    FLD float ptr [EBP + 0x76]          ; 004e4db3
    PUSH EAX                            ; 004e4db6
    FSTP float ptr [EBP + -0x76]        ; 004e4db7
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 004e4dba
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 004e4dbf
    PUSH EAX                            ; 004e4dc2
    LEA EAX,[EBP + -0x32]               ; 004e4dc3
    PUSH EAX                            ; 004e4dc6
    PUSH EBX                            ; 004e4dc7
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004e4dc8
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004e4dcd
    PUSH EAX                            ; 004e4dd0
    PUSH EBX                            ; 004e4dd1
    CALL core_enemy.cpp_CEnemy_FUN_004a9880 ; 004e4dd2
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9880(CEnemy * this_ptr)
    ADD ESP,0x10                        ; 004e4dd7
    JMP 0x004e4b2d                      ; 004e4dda
        ;   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004e4ddf
        ;   Label: caseD_5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e4de5
    PUSH EBX                            ; 004e4deb
    CALL dword ptr [EAX + 0x158]        ; 004e4dec
    ADD ESP,0x8                         ; 004e4df2
    PUSH EBX                            ; 004e4df5
    CALL core_gargoyle.cpp_CGargoyle_FUN_004e48a0 ; 004e4df6
        ;   XREF to: 004e48a0 (UNCONDITIONAL_CALL)  ; int core_gargoyle.cpp_CGargoyle_FUN_004e48a0(CGargoyle * this_ptr)
    ADD ESP,0x4                         ; 004e4dfb
    TEST EAX,EAX                        ; 004e4dfe
    JZ 0x004e4b2d                       ; 004e4e00
        ;   XREF to: 004e4b2d (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBX + 0xbf14]        ; 004e4e06
    FSUB float ptr [EBP + 0x92]         ; 004e4e0c
    FST float ptr [EBX + 0xbf14]        ; 004e4e12
    FLDZ                                ; 004e4e18
    FCOMPP                              ; 004e4e1a
    FNSTSW AX                           ; 004e4e1c
    SAHF                                ; 004e4e1e
    JBE 0x004e4b2d                      ; 004e4e1f
        ;   XREF to: 004e4b2d (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004e4e25
    PUSH 0x0                            ; 004e4e27
    PUSH ESI                            ; 004e4e29
    MOV dword ptr [EBX + 0xbf14],0x0    ; 004e4e2a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e4e34
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e4e39
    MOV EDX,dword ptr [EBX + 0xbf00]    ; 004e4e3c
    PUSH EDX                            ; 004e4e42
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004e4e43
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004e4e48
    TEST EAX,EAX                        ; 004e4e4b
    JNZ 0x004e4b2d                      ; 004e4e4d
        ;   XREF to: 004e4b2d (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x62d969                       ; 004e4e53 | = "gargoyle-alive?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e4e58
    PUSH EBX                            ; 004e4e5e
    CALL dword ptr [EAX + 0x24]         ; 004e4e5f
    ADD ESP,0x8                         ; 004e4e62
    MOV dword ptr [EBX + 0xbf00],EAX    ; 004e4e65
    JMP 0x004e4b2d                      ; 004e4e6b
        ;   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004e4e70
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e4e76
    PUSH EBX                            ; 004e4e7c
    CALL dword ptr [EAX + 0x158]        ; 004e4e7d
    ADD ESP,0x8                         ; 004e4e83
    PUSH EBX                            ; 004e4e86
    CALL core_gargoyle.cpp_CGargoyle_FUN_004e48a0 ; 004e4e87
        ;   XREF to: 004e48a0 (UNCONDITIONAL_CALL)  ; int core_gargoyle.cpp_CGargoyle_FUN_004e48a0(CGargoyle * this_ptr)
    ADD ESP,0x4                         ; 004e4e8c
    TEST EAX,EAX                        ; 004e4e8f
    JZ 0x004e4f3b                       ; 004e4e91
        ;   XREF to: 004e4f3b (CONDITIONAL_JUMP)  ; LAB_004e4f3b
    CMP dword ptr [EBX + 0xbf10],0x0    ; 004e4e97
    JNZ 0x004e4f29                      ; 004e4e9e
        ;   XREF to: 004e4f29 (CONDITIONAL_JUMP)  ; LAB_004e4f29
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 004e4ea4
    TEST EDX,EDX                        ; 004e4eaa
    JZ 0x004e5019                       ; 004e4eac
        ;   XREF to: 004e5019 (CONDITIONAL_JUMP)  ; LAB_004e5019
    MOV EAX,EDX                         ; 004e4eb2
    LEA EDX,[EBX + 0x20]                ; 004e4eb4
    FLD float ptr [EAX + 0x20]          ; 004e4eb7
    FSUB float ptr [EDX]                ; 004e4eba
    FSTP float ptr [EBP + -0x1a]        ; 004e4ebc
    FLD float ptr [EAX + 0x24]          ; 004e4ebf
    FSUB float ptr [EDX + 0x4]          ; 004e4ec2
    FST float ptr [EBP + -0x16]         ; 004e4ec5
    FMUL float ptr [EBP + -0x16]        ; 004e4ec8
    FLD float ptr [EBP + -0x1a]         ; 004e4ecb
    FMUL ST0                            ; 004e4ece
    FLD float ptr [EAX + 0x28]          ; 004e4ed0
    FSUB float ptr [EDX + 0x8]          ; 004e4ed3
    FXCH                                ; 004e4ed6
    FADDP ST2,ST0                       ; 004e4ed8
    FST float ptr [EBP + -0x12]         ; 004e4eda
    FMUL float ptr [EBP + -0x12]        ; 004e4edd
    FADDP                               ; 004e4ee0
    FSQRT                               ; 004e4ee2
    FSTP float ptr [EBP + 0x72]         ; 004e4ee4
    MOV EAX,dword ptr [EBP + 0x72]      ; 004e4ee7
    FLD float ptr [EBP + 0x72]          ; 004e4eea
    MOV dword ptr [EBP + 0x6e],EAX      ; 004e4eed
    FCOMP float ptr [0x0065ea2c]        ; 004e4ef0 | FLOAT_0065ea2c
    FNSTSW AX                           ; 004e4ef6
    SAHF                                ; 004e4ef8
    JC 0x004e4f97                       ; 004e4ef9
        ;   XREF to: 004e4f97 (CONDITIONAL_JUMP)  ; LAB_004e4f97
    FLD float ptr [EBP + 0x6e]          ; 004e4eff
        ;   Label: LAB_004e4eff
    FCOMP float ptr [EBX + 0xbe34]      ; 004e4f02
    FNSTSW AX                           ; 004e4f08
    SAHF                                ; 004e4f0a
    JNC 0x004e4b2d                      ; 004e4f0b
        ;   XREF to: 004e4b2d (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBP + 0x6e]          ; 004e4f11
    LEA ESI,[EBX + 0x158]               ; 004e4f14
    FCOMP float ptr [0x0065ea38]        ; 004e4f1a | FLOAT_0065ea38
    FNSTSW AX                           ; 004e4f20
    SAHF                                ; 004e4f22
    JNC 0x004e4fe4                      ; 004e4f23
        ;   XREF to: 004e4fe4 (CONDITIONAL_JUMP)  ; LAB_004e4fe4
    PUSH 0x1                            ; 004e4f29
        ;   Label: LAB_004e4f29
    PUSH 0x1                            ; 004e4f2b
    PUSH ESI                            ; 004e4f2d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e4f2e
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e4f33
    JMP 0x004e4b2d                      ; 004e4f36
        ;   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x3f800000                     ; 004e4f3b
        ;   Label: LAB_004e4f3b
    PUSH 0x0                            ; 004e4f40
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004e4f42
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    ADD ESP,0x8                         ; 004e4f47
    PUSH 0x1                            ; 004e4f4a
    MOV dword ptr [EBP + 0x76],EAX      ; 004e4f4c
    PUSH 0x5                            ; 004e4f4f
    FLD float ptr [EBP + 0x76]          ; 004e4f51
    PUSH ESI                            ; 004e4f54
    FSTP float ptr [EBX + 0xbf14]       ; 004e4f55
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e4f5b
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e4f60
    MOV EDI,dword ptr [EBX + 0xbf00]    ; 004e4f63
    PUSH EDI                            ; 004e4f69
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004e4f6a
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004e4f6f
    TEST EAX,EAX                        ; 004e4f72
    JNZ 0x004e4b2d                      ; 004e4f74
        ;   XREF to: 004e4b2d (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x62d97d                       ; 004e4f7a | = "gargoyle-stone.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e4f7f
    PUSH EBX                            ; 004e4f85
    CALL dword ptr [EAX + 0x24]         ; 004e4f86
    ADD ESP,0x8                         ; 004e4f89
    MOV dword ptr [EBX + 0xbf00],EAX    ; 004e4f8c
    JMP 0x004e4b2d                      ; 004e4f92
        ;   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)  ; caseD_4
    LEA EAX,[EBP + -0x1a]               ; 004e4f97
        ;   Label: LAB_004e4f97
    PUSH EAX                            ; 004e4f9a
    LEA EAX,[EBP + 0x22]                ; 004e4f9b
    PUSH EAX                            ; 004e4f9e
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004e4f9f
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + 0x26]          ; 004e4fa4
    ADD ESP,0x8                         ; 004e4fa7
    FSUB float ptr [EBX + 0x34]         ; 004e4faa
    SUB ESP,0x4                         ; 004e4fad
    FSTP float ptr [ESP]                ; 004e4fb0
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004e4fb3
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e4fb8
    FLD float ptr [EBP + 0x76]          ; 004e4fbb
    FABS                                ; 004e4fbe
    ADD ESP,0x4                         ; 004e4fc0
    FCOMP double ptr [0x0062d9af]       ; 004e4fc3 | DOUBLE_0062d9af
    FNSTSW AX                           ; 004e4fc9
    SAHF                                ; 004e4fcb
    JNC 0x004e4eff                      ; 004e4fcc
        ;   XREF to: 004e4eff (CONDITIONAL_JUMP)  ; LAB_004e4eff
    PUSH 0x1                            ; 004e4fd2
    PUSH 0x3                            ; 004e4fd4
    PUSH ESI                            ; 004e4fd6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e4fd7
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e4fdc
    JMP 0x004e4eff                      ; 004e4fdf
        ;   XREF to: 004e4eff (UNCONDITIONAL_JUMP)  ; LAB_004e4eff
    PUSH 0x3dcccccd                     ; 004e4fe4
        ;   Label: LAB_004e4fe4
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004e4fe9
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004e4fee
    TEST EAX,EAX                        ; 004e4ff1
    JZ 0x004e5007                       ; 004e4ff3
        ;   XREF to: 004e5007 (CONDITIONAL_JUMP)  ; LAB_004e5007
    PUSH 0x1                            ; 004e4ff5
    PUSH 0x4                            ; 004e4ff7
    PUSH ESI                            ; 004e4ff9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e4ffa
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e4fff
    JMP 0x004e4b2d                      ; 004e5002
        ;   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004e5007
        ;   Label: LAB_004e5007
    PUSH 0x2                            ; 004e5009
    PUSH ESI                            ; 004e500b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e500c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e5011
    JMP 0x004e4b2d                      ; 004e5014
        ;   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004e5019
        ;   Label: LAB_004e5019
    PUSH EBX                            ; 004e501f
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 004e5020
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
    ADD ESP,0x8                         ; 004e5025
    TEST EAX,EAX                        ; 004e5028
    JZ 0x004e4b2d                       ; 004e502a
        ;   XREF to: 004e4b2d (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004e5030
    PUSH 0x1                            ; 004e5032
    PUSH ESI                            ; 004e5034
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e5035
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e503a
    JMP 0x004e4b2d                      ; 004e503d
        ;   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004e5042
        ;   Label: caseD_2
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e5048
    PUSH EBX                            ; 004e504e
    CALL dword ptr [EAX + 0x158]        ; 004e504f
    ADD ESP,0x8                         ; 004e5055
    PUSH EBX                            ; 004e5058
    CALL core_gargoyle.cpp_CGargoyle_FUN_004e48a0 ; 004e5059
        ;   XREF to: 004e48a0 (UNCONDITIONAL_CALL)  ; int core_gargoyle.cpp_CGargoyle_FUN_004e48a0(CGargoyle * this_ptr)
    ADD ESP,0x4                         ; 004e505e
    LEA ESI,[EBX + 0x158]               ; 004e5061
    TEST EAX,EAX                        ; 004e5067
    JZ 0x004e50b5                       ; 004e5069
        ;   XREF to: 004e50b5 (CONDITIONAL_JUMP)  ; LAB_004e50b5
    MOV EDI,dword ptr [EBX + 0xbf10]    ; 004e506b
    LEA EAX,[EBX + 0x23ac]              ; 004e5071
    TEST EDI,EDI                        ; 004e5077
    JNZ 0x004e5111                      ; 004e5079
        ;   XREF to: 004e5111 (CONDITIONAL_JUMP)  ; LAB_004e5111
    CMP dword ptr [EBX + 0xbe3c],0x0    ; 004e507f
    JNZ 0x004e517c                      ; 004e5086
        ;   XREF to: 004e517c (CONDITIONAL_JUMP)  ; LAB_004e517c
    PUSH dword ptr [EBP + 0x92]         ; 004e508c
    PUSH EBX                            ; 004e5092
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 004e5093
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
    ADD ESP,0x8                         ; 004e5098
    TEST EAX,EAX                        ; 004e509b
    JZ 0x004e516b                       ; 004e509d
        ;   XREF to: 004e516b (CONDITIONAL_JUMP)  ; LAB_004e516b
    PUSH 0x1                            ; 004e50a3
    PUSH 0x1                            ; 004e50a5
    PUSH ESI                            ; 004e50a7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e50a8
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e50ad
    JMP 0x004e4b2d                      ; 004e50b0
        ;   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x3f800000                     ; 004e50b5
        ;   Label: LAB_004e50b5
    PUSH 0x0                            ; 004e50ba
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004e50bc
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    ADD ESP,0x8                         ; 004e50c1
    PUSH 0x1                            ; 004e50c4
    MOV dword ptr [EBP + 0x76],EAX      ; 004e50c6
    PUSH 0x5                            ; 004e50c9
    FLD float ptr [EBP + 0x76]          ; 004e50cb
    PUSH ESI                            ; 004e50ce
    FSTP float ptr [EBX + 0xbf14]       ; 004e50cf
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e50d5
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e50da
    MOV ECX,dword ptr [EBX + 0xbf00]    ; 004e50dd
    PUSH ECX                            ; 004e50e3
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004e50e4
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004e50e9
    TEST EAX,EAX                        ; 004e50ec
    JNZ 0x004e4b2d                      ; 004e50ee
        ;   XREF to: 004e4b2d (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x62d990                       ; 004e50f4 | = "gargoyle-stone.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e50f9
    PUSH EBX                            ; 004e50ff
    CALL dword ptr [EAX + 0x24]         ; 004e5100
    ADD ESP,0x8                         ; 004e5103
    MOV dword ptr [EBX + 0xbf00],EAX    ; 004e5106
    JMP 0x004e4b2d                      ; 004e510c
        ;   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x3e32b8c2                     ; 004e5111
        ;   Label: LAB_004e5111
    PUSH 0x3f000000                     ; 004e5116
    MOV dword ptr [EAX + 0x8],0x0       ; 004e511b
    XOR EDX,EDX                         ; 004e5122
    MOV ECX,dword ptr [EAX + 0x8]       ; 004e5124
    MOV dword ptr [EAX + 0x4],ECX       ; 004e5127
    MOV ECX,dword ptr [EAX + 0x4]       ; 004e512a
    MOV dword ptr [EAX],ECX             ; 004e512d
    LEA EAX,[EBP + 0x46]                ; 004e512f
    MOV dword ptr [EBP + 0x46],EDX      ; 004e5132
    MOV dword ptr [EBP + 0x4a],EDX      ; 004e5135
    MOV dword ptr [EBP + 0x4e],EDX      ; 004e5138
    PUSH EAX                            ; 004e513b
    MOV EAX,dword ptr [EBX + 0xbef8]    ; 004e513c
    PUSH EAX                            ; 004e5142
    MOV EDX,dword ptr [EAX + 0x154]     ; 004e5143
    CALL dword ptr [EDX + 0xbc]         ; 004e5149
    ADD ESP,0x4                         ; 004e514f
    PUSH EAX                            ; 004e5152
    MOV EAX,dword ptr [EBX + 0xbef8]    ; 004e5153
    ADD EAX,0x20                        ; 004e5159
    PUSH EAX                            ; 004e515c
    PUSH EBX                            ; 004e515d
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 004e515e
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004e5163
    JMP 0x004e4b2d                      ; 004e5166
        ;   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004e516b
        ;   Label: LAB_004e516b
    PUSH EDI                            ; 004e516d
    PUSH ESI                            ; 004e516e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e516f
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e5174
    JMP 0x004e4b2d                      ; 004e5177
        ;   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x3e32b8c2                     ; 004e517c
        ;   Label: LAB_004e517c
    PUSH 0x3f000000                     ; 004e5181
    MOV dword ptr [EAX + 0x8],EDI       ; 004e5186
    MOV EDX,dword ptr [0x0065ea2c]      ; 004e5189 | FLOAT_0065ea2c
    MOV ECX,dword ptr [EAX + 0x8]       ; 004e518f
    MOV dword ptr [EAX + 0x4],ECX       ; 004e5192
    MOV ECX,dword ptr [EAX + 0x4]       ; 004e5195
    MOV dword ptr [EAX],ECX             ; 004e5198
    LEA EAX,[EBP + 0xa]                 ; 004e519a
    MOV dword ptr [EBP + 0xa],EDI       ; 004e519d
    MOV dword ptr [EBP + 0xe],EDI       ; 004e51a0
    MOV dword ptr [EBP + 0x12],EDX      ; 004e51a3
    PUSH EAX                            ; 004e51a6
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e51a7
    PUSH EAX                            ; 004e51ad
    MOV dword ptr [EBP + 0x6a],EDX      ; 004e51ae
    MOV EDX,dword ptr [EAX + 0x154]     ; 004e51b1
    CALL dword ptr [EDX + 0xbc]         ; 004e51b7
    ADD ESP,0x4                         ; 004e51bd
    PUSH EAX                            ; 004e51c0
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e51c1
    ADD EAX,0x20                        ; 004e51c7
    PUSH EAX                            ; 004e51ca
    PUSH EBX                            ; 004e51cb
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 004e51cc
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004e51d1
    TEST EAX,EAX                        ; 004e51d4
    JL 0x004e4b2d                       ; 004e51d6
        ;   XREF to: 004e4b2d (CONDITIONAL_JUMP)  ; caseD_4
    LEA EAX,[EBX + 0x20]                ; 004e51dc
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 004e51df
    FLD float ptr [EAX]                 ; 004e51e5
    FSUB float ptr [EDX + 0x20]         ; 004e51e7
    FSTP float ptr [EBP + 0x2e]         ; 004e51ea
    FLD float ptr [EAX + 0x4]           ; 004e51ed
    FSUB float ptr [EDX + 0x24]         ; 004e51f0
    FLD float ptr [EBP + 0x2e]          ; 004e51f3
    FXCH                                ; 004e51f6
    FSTP float ptr [EBP + 0x32]         ; 004e51f8
    FLD float ptr [EAX + 0x8]           ; 004e51fb
    FSUB float ptr [EDX + 0x28]         ; 004e51fe
    FXCH                                ; 004e5201
    FMUL float ptr [EBP + 0x2e]         ; 004e5203
    FXCH                                ; 004e5206
    FST float ptr [EBP + 0x36]          ; 004e5208
    FMUL float ptr [EBP + 0x36]         ; 004e520b
    FADDP                               ; 004e520e
    FSQRT                               ; 004e5210
    MOV dword ptr [EBP + 0x32],EDI      ; 004e5212
    FSTP float ptr [EBP + 0x5a]         ; 004e5215
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004e5218
    FLD float ptr [EBP + 0x5a]          ; 004e521b
    MOV dword ptr [EBP + 0x66],EAX      ; 004e521e
    FCOMP float ptr [0x0065ea38]        ; 004e5221 | FLOAT_0065ea38
    FNSTSW AX                           ; 004e5227
    SAHF                                ; 004e5229
    JBE 0x004e524e                      ; 004e522a
        ;   XREF to: 004e524e (CONDITIONAL_JUMP)  ; LAB_004e524e
    PUSH 0x3dcccccd                     ; 004e522c
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004e5231
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004e5236
    TEST EAX,EAX                        ; 004e5239
    JZ 0x004e530d                       ; 004e523b
        ;   XREF to: 004e530d (CONDITIONAL_JUMP)  ; LAB_004e530d
    PUSH 0x1                            ; 004e5241
    PUSH 0x4                            ; 004e5243
    PUSH ESI                            ; 004e5245
        ;   Label: LAB_004e5245
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e5246
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e524b
    FLD float ptr [EBP + 0x66]          ; 004e524e
        ;   Label: LAB_004e524e
    FCOMP float ptr [EBP + 0x6a]        ; 004e5251
    FNSTSW AX                           ; 004e5254
    SAHF                                ; 004e5256
    JA 0x004e52e3                       ; 004e5257
        ;   XREF to: 004e52e3 (CONDITIONAL_JUMP)  ; LAB_004e52e3
    FLD float ptr [EBX + 0xbe38]        ; 004e525d
    FLDZ                                ; 004e5263
    FCOMPP                              ; 004e5265
    FNSTSW AX                           ; 004e5267
    SAHF                                ; 004e5269
    JC 0x004e52e3                       ; 004e526a
        ;   XREF to: 004e52e3 (CONDITIONAL_JUMP)  ; LAB_004e52e3
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 004e526c
    LEA EAX,[EBX + 0x20]                ; 004e5272
    FLD float ptr [ESI + 0x20]          ; 004e5275
    FSUB float ptr [EAX]                ; 004e5278
    FSTP float ptr [EBP + 0x3a]         ; 004e527a
    FLD float ptr [ESI + 0x24]          ; 004e527d
    FSUB float ptr [EAX + 0x4]          ; 004e5280
    FSTP float ptr [EBP + 0x3e]         ; 004e5283
    FLD float ptr [ESI + 0x28]          ; 004e5286
    FSUB float ptr [EAX + 0x8]          ; 004e5289
    LEA EAX,[EBP + 0x3a]                ; 004e528c
    PUSH EAX                            ; 004e528f
    LEA EAX,[EBP + -0x3e]               ; 004e5290
    PUSH EAX                            ; 004e5293
    FSTP float ptr [EBP + 0x42]         ; 004e5294
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004e5297
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + -0x3a]         ; 004e529c
    ADD ESP,0x8                         ; 004e529f
    FSUB float ptr [EBX + 0x34]         ; 004e52a2
    SUB ESP,0x4                         ; 004e52a5
    FSTP float ptr [ESP]                ; 004e52a8
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004e52ab
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e52b0
    FLD float ptr [EBP + 0x76]          ; 004e52b3
    FABS                                ; 004e52b6
    ADD ESP,0x4                         ; 004e52b8
    FCOMP double ptr [0x0062d9af]       ; 004e52bb | DOUBLE_0062d9af
    FNSTSW AX                           ; 004e52c1
    SAHF                                ; 004e52c3
    JNC 0x004e52e3                      ; 004e52c4
        ;   XREF to: 004e52e3 (CONDITIONAL_JUMP)  ; LAB_004e52e3
    PUSH 0x1                            ; 004e52c6
    PUSH 0x3                            ; 004e52c8
    LEA EAX,[EBX + 0x158]               ; 004e52ca
    PUSH EAX                            ; 004e52d0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e52d1
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e52d6
    MOV dword ptr [EBX + 0xbe38],0x3f800000 ; 004e52d9
    FLD float ptr [EBP + 0x66]          ; 004e52e3
        ;   Label: LAB_004e52e3
    FCOMP float ptr [EBX + 0xbe34]      ; 004e52e6
    FNSTSW AX                           ; 004e52ec
    SAHF                                ; 004e52ee
    JBE 0x004e4b2d                      ; 004e52ef
        ;   XREF to: 004e4b2d (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004e52f5
    PUSH 0x0                            ; 004e52f7
    LEA EAX,[EBX + 0x158]               ; 004e52f9
    PUSH EAX                            ; 004e52ff
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e5300
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e5305
    JMP 0x004e4b2d                      ; 004e5308
        ;   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004e530d
        ;   Label: LAB_004e530d
    PUSH 0x2                            ; 004e530f
    JMP 0x004e5245                      ; 004e5311
        ;   XREF to: 004e5245 (UNCONDITIONAL_JUMP)  ; LAB_004e5245
    CMP EDI,0x5                         ; 004e5316
        ;   Label: LAB_004e5316
    JA 0x004e4b2d                       ; 004e5319
        ;   XREF to: 004e4b2d (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EDI*0x4 + 0x4e49e8]  ; 004e531f | caseD_0 | caseD_1 | caseD_3
        ;   Label: switchD
    MOV dword ptr [EBX + 0xbf08],0xffff ; 004e5326
        ;   Label: LAB_004e5326
    MOV dword ptr [EBX + 0xbf0c],0xffff ; 004e5330
    MOV dword ptr [EBX + 0xbf04],0xffff ; 004e533a
    JMP 0x004e4c77                      ; 004e5344
        ;   XREF to: 004e4c77 (UNCONDITIONAL_JUMP)  ; LAB_004e4c77
    JLE 0x004e4cae                      ; 004e5349
        ;   XREF to: 004e4cae (CONDITIONAL_JUMP)  ; LAB_004e4cae
        ;   Label: LAB_004e5349
    MOV EAX,[0x02cf6a80]                ; 004e534f | g_GlobalDeltaTimeInt
    MOV ECX,dword ptr [EBX + 0x108]     ; 004e5354
    SUB ECX,EAX                         ; 004e535a
    MOV ESI,dword ptr [EBX + 0xbf04]    ; 004e535c
    MOV dword ptr [EBX + 0x108],ECX     ; 004e5362
    CMP ECX,ESI                         ; 004e5368
    JGE 0x004e4cae                      ; 004e536a
        ;   XREF to: 004e4cae (CONDITIONAL_JUMP)  ; LAB_004e4cae
    MOV dword ptr [EBX + 0x108],ESI     ; 004e5370
    JMP 0x004e4cae                      ; 004e5376
        ;   XREF to: 004e4cae (UNCONDITIONAL_JUMP)  ; LAB_004e4cae
    JLE 0x004e4ce5                      ; 004e537b
        ;   XREF to: 004e4ce5 (CONDITIONAL_JUMP)  ; LAB_004e4ce5
        ;   Label: LAB_004e537b
    MOV EAX,[0x02cf6a80]                ; 004e5381 | g_GlobalDeltaTimeInt
    MOV EDI,dword ptr [EBX + 0x10c]     ; 004e5386
    SUB EDI,EAX                         ; 004e538c
    MOV EDX,dword ptr [EBX + 0xbf08]    ; 004e538e
    MOV dword ptr [EBX + 0x10c],EDI     ; 004e5394
    CMP EDI,EDX                         ; 004e539a
    JGE 0x004e4ce5                      ; 004e539c
        ;   XREF to: 004e4ce5 (CONDITIONAL_JUMP)  ; LAB_004e4ce5
    MOV dword ptr [EBX + 0x10c],EDX     ; 004e53a2
    JMP 0x004e4ce5                      ; 004e53a8
        ;   XREF to: 004e4ce5 (UNCONDITIONAL_JUMP)  ; LAB_004e4ce5
    JLE 0x004e4a96                      ; 004e53ad
        ;   XREF to: 004e4a96 (CONDITIONAL_JUMP)  ; LAB_004e4a96
        ;   Label: LAB_004e53ad
    MOV EAX,[0x02cf6a80]                ; 004e53b3 | g_GlobalDeltaTimeInt
    MOV ECX,dword ptr [EBX + 0x110]     ; 004e53b8
    SUB ECX,EAX                         ; 004e53be
    MOV ESI,dword ptr [EBX + 0xbf0c]    ; 004e53c0
    MOV dword ptr [EBX + 0x110],ECX     ; 004e53c6
    CMP ECX,ESI                         ; 004e53cc
    JGE 0x004e4a96                      ; 004e53ce
        ;   XREF to: 004e4a96 (CONDITIONAL_JUMP)  ; LAB_004e4a96
    MOV dword ptr [EBX + 0x110],ESI     ; 004e53d4
    LEA ESP,[EBP + 0x7a]                ; 004e53da
    POP EBP                             ; 004e53dd
    POP EDI                             ; 004e53de
    POP ESI                             ; 004e53df
    POP EBX                             ; 004e53e0
    RET                                 ; 004e53e1

