; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_shadow_cpp_CShadow_processDamage_FUN_0055fea0(CShadow *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CShadow *        Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_ShotShadowWithLead_005f178f
;   TerminatedCString s_ShadowDead_005f17a2
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_shadow.cpp_FUN_0055f4f0
;   core_shadow.cpp_FUN_0055f540
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055fea0
        ;   Label: core_shadow.cpp_CShadow_processDamage_FUN_0055fea0
    PUSH EBP                            ; 0055fea1
    SUB ESP,0x28                        ; 0055fea2
    MOV EBX,dword ptr [ESP + 0x34]      ; 0055fea5
    MOV EBP,dword ptr [ESP + 0x38]      ; 0055fea9
    MOV EDX,dword ptr [EBP + 0x30]      ; 0055fead
    CMP EDX,0x64                        ; 0055feb0
    JZ 0x00560037                       ; 0055feb3
        ;   XREF to: 00560037 (CONDITIONAL_JUMP)  ; LAB_00560037
    CMP EDX,0x65                        ; 0055feb9
    JZ 0x00560037                       ; 0055febc
        ;   XREF to: 00560037 (CONDITIONAL_JUMP)  ; LAB_00560037
    CMP EDX,0x66                        ; 0055fec2
    JZ 0x00560037                       ; 0055fec5
        ;   XREF to: 00560037 (CONDITIONAL_JUMP)  ; LAB_00560037
    CMP EDX,0x67                        ; 0055fecb
    JZ 0x00560037                       ; 0055fece
        ;   XREF to: 00560037 (CONDITIONAL_JUMP)  ; LAB_00560037
    CMP EDX,0x68                        ; 0055fed4
    JZ 0x00560037                       ; 0055fed7
        ;   XREF to: 00560037 (CONDITIONAL_JUMP)  ; LAB_00560037
    CMP EDX,0x69                        ; 0055fedd
    JZ 0x00560037                       ; 0055fee0
        ;   XREF to: 00560037 (CONDITIONAL_JUMP)  ; LAB_00560037
    CMP EDX,0x6a                        ; 0055fee6
    JZ 0x00560037                       ; 0055fee9
        ;   XREF to: 00560037 (CONDITIONAL_JUMP)  ; LAB_00560037
    CMP EDX,0x6b                        ; 0055feef
    JZ 0x00560037                       ; 0055fef2
        ;   XREF to: 00560037 (CONDITIONAL_JUMP)  ; LAB_00560037
    PUSH EDI                            ; 0055fef8
    PUSH ESI                            ; 0055fef9
    PUSH EBP                            ; 0055fefa
    PUSH EBX                            ; 0055fefb
    ADD ESP,0x8                         ; 0055fefc
    MOV EDI,dword ptr [EBX + 0xc2a0]    ; 0055feff
    PUSH EDI                            ; 0055ff05
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0055ff06
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0055ff0b
    MOV EAX,dword ptr [EBX + 0xc29c]    ; 0055ff0e
    PUSH EAX                            ; 0055ff14
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0055ff15
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0055ff1a
    MOV EDX,dword ptr [EBX + 0xc2a0]    ; 0055ff1d
    PUSH EDX                            ; 0055ff23
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0055ff24
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0055ff29
    MOV ECX,dword ptr [EBX + 0xc2a4]    ; 0055ff2c
    PUSH ECX                            ; 0055ff32
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0055ff33
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0055ff38
    MOV ESI,dword ptr [EBX + 0xc2a8]    ; 0055ff3b
    PUSH ESI                            ; 0055ff41
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0055ff42
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    MOV EDI,dword ptr [EBP + 0x30]      ; 0055ff47
    ADD ESP,0x4                         ; 0055ff4a
    CMP EDI,0x6c                        ; 0055ff4d
    JNZ 0x0055ff6c                      ; 0055ff50
        ;   XREF to: 0055ff6c (CONDITIONAL_JUMP)  ; LAB_0055ff6c
    PUSH EBX                            ; 0055ff52
    CALL core_shadow.cpp_FUN_0055f4f0   ; 0055ff53
        ;   XREF to: 0055f4f0 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_0055f4f0()
    ADD ESP,0x4                         ; 0055ff58
    LEA EAX,[EBP + 0x1c]                ; 0055ff5b
    PUSH EAX                            ; 0055ff5e
    PUSH EBX                            ; 0055ff5f
    LEA ESI,[ESP + 0x10]                ; 0055ff60
    CALL core_actor.cpp_FUN_00408b40    ; 0055ff64
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0055ff69
    FLD float ptr [EBP + 0x4]           ; 0055ff6c
        ;   Label: LAB_0055ff6c
    LEA EAX,[EBX + 0x158]               ; 0055ff6f
    FSUBR float ptr [EBX + 0x2538]      ; 0055ff75
    MOV dword ptr [ESP + 0x2c],EAX      ; 0055ff7b
    FST float ptr [EBX + 0x2538]        ; 0055ff7f
    FLDZ                                ; 0055ff85
    FCOMPP                              ; 0055ff87
    FNSTSW AX                           ; 0055ff89
    SAHF                                ; 0055ff8b
    JC 0x0056005e                       ; 0055ff8c
        ;   XREF to: 0056005e (CONDITIONAL_JUMP)  ; LAB_0056005e
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0055ff92
    PUSH EDX                            ; 0055ff96
    MOV dword ptr [EBX + 0x2538],0x0    ; 0055ff97
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0055ffa1
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0055ffa6
    ADD ESP,0x4                         ; 0055ffa9
    CMP EAX,0x11                        ; 0055ffac
    JZ 0x00560025                       ; 0055ffaf
        ;   XREF to: 00560025 (CONDITIONAL_JUMP)  ; LAB_00560025
    CMP EAX,0xf                         ; 0055ffb5
    JZ 0x00560025                       ; 0055ffb8
        ;   XREF to: 00560025 (CONDITIONAL_JUMP)  ; LAB_00560025
    CMP EAX,0x12                        ; 0055ffba
    JZ 0x00560025                       ; 0055ffbd
        ;   XREF to: 00560025 (CONDITIONAL_JUMP)  ; LAB_00560025
    CMP EAX,0x10                        ; 0055ffbf
    JZ 0x00560025                       ; 0055ffc2
        ;   XREF to: 00560025 (CONDITIONAL_JUMP)  ; LAB_00560025
    MOV EAX,[0x01d06ab4]                ; 0055ffc4 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0055ffc9
    ADD EAX,0x20                        ; 0055ffd0
    PUSH EAX                            ; 0055ffd3
    PUSH EBX                            ; 0055ffd4
    LEA ESI,[ESP + 0x1c]                ; 0055ffd5
    LEA EDI,[ESP + 0x28]                ; 0055ffd9
    CALL core_actor.cpp_FUN_00408bb0    ; 0055ffdd
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x1c]                ; 0055ffe2
    ADD ESP,0x8                         ; 0055ffe6
    MOVSD ES:EDI,ESI                    ; 0055ffe9
    MOVSD ES:EDI,ESI                    ; 0055ffea
    MOVSD ES:EDI,ESI                    ; 0055ffeb
    FLDZ                                ; 0055ffec
    FCOMP float ptr [ESP + 0x28]        ; 0055ffee
    FNSTSW AX                           ; 0055fff2
    SAHF                                ; 0055fff4
    JNC 0x00560053                      ; 0055fff5
        ;   XREF to: 00560053 (CONDITIONAL_JUMP)  ; LAB_00560053
    PUSH 0x1                            ; 0055fff7
    PUSH 0xf                            ; 0055fff9
    MOV ESI,dword ptr [ESP + 0x34]      ; 0055fffb
    PUSH ESI                            ; 0055ffff
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00560000
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00560000
    ADD ESP,0xc                         ; 00560005
    PUSH EBX                            ; 00560008
    CALL core_shadow.cpp_FUN_0055f540   ; 00560009
        ;   XREF to: 0055f540 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_0055f540()
    ADD ESP,0x4                         ; 0056000e
    PUSH 0x5f17a2                       ; 00560011 | = "ShadowDead"
    MOV EDI,dword ptr [0x0061b4d0]      ; 00560016 | DAT_0061b4d0
    PUSH EDI                            ; 0056001c
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 0056001d
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00560022
    PUSH EBP                            ; 00560025
        ;   Label: LAB_00560025
    PUSH EBX                            ; 00560026
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 00560027
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0056002c
    POP ESI                             ; 0056002f
    POP EDI                             ; 00560030
    ADD ESP,0x28                        ; 00560031
        ;   Label: LAB_00560031
    POP EBP                             ; 00560034
    POP EBX                             ; 00560035
    RET                                 ; 00560036
    PUSH 0x5f178f                       ; 00560037 | = "ShotShadowWithLead"
        ;   Label: LAB_00560037
    MOV EAX,[0x0061b4d0]                ; 0056003c | DAT_0061b4d0
    PUSH EAX                            ; 00560041
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 00560042
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00560047
    MOV dword ptr [EBP + 0x4],0x0       ; 0056004a
    JMP 0x00560031                      ; 00560051
        ;   XREF to: 00560031 (UNCONDITIONAL_JUMP)  ; LAB_00560031
    PUSH 0x1                            ; 00560053
        ;   Label: LAB_00560053
    PUSH 0x10                           ; 00560055
    MOV ECX,dword ptr [ESP + 0x34]      ; 00560057
    PUSH ECX                            ; 0056005b
    JMP 0x00560000                      ; 0056005c
        ;   XREF to: 00560000 (UNCONDITIONAL_JUMP)  ; LAB_00560000
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0056005e
        ;   Label: LAB_0056005e
    PUSH EAX                            ; 00560062
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00560063
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00560068
    ADD ESP,0x4                         ; 0056006b
    TEST EAX,EAX                        ; 0056006e
    JNZ 0x005600e1                      ; 00560070
        ;   XREF to: 005600e1 (CONDITIONAL_JUMP)  ; LAB_005600e1
    PUSH 0x2                            ; 00560072
        ;   Label: LAB_00560072
    PUSH 0x0                            ; 00560074
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 00560076
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0056007b
    MOV ESI,EAX                         ; 0056007e
    TEST EAX,EAX                        ; 00560080
    JNZ 0x00560097                      ; 00560082
        ;   XREF to: 00560097 (CONDITIONAL_JUMP)  ; LAB_00560097
    PUSH 0x1                            ; 00560084
    PUSH 0x13                           ; 00560086
    LEA EAX,[EBX + 0x158]               ; 00560088
    PUSH EAX                            ; 0056008e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0056008f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00560094
    CMP ESI,0x1                         ; 00560097
        ;   Label: LAB_00560097
    JNZ 0x005600ae                      ; 0056009a
        ;   XREF to: 005600ae (CONDITIONAL_JUMP)  ; LAB_005600ae
    PUSH ESI                            ; 0056009c
    PUSH 0x14                           ; 0056009d
    LEA EAX,[EBX + 0x158]               ; 0056009f
    PUSH EAX                            ; 005600a5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005600a6
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005600ab
    CMP ESI,0x2                         ; 005600ae
        ;   Label: LAB_005600ae
    JNZ 0x005600c6                      ; 005600b1
        ;   XREF to: 005600c6 (CONDITIONAL_JUMP)  ; LAB_005600c6
    PUSH 0x1                            ; 005600b3
    PUSH 0x15                           ; 005600b5
    LEA EAX,[EBX + 0x158]               ; 005600b7
    PUSH EAX                            ; 005600bd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005600be
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005600c3
    PUSH EBX                            ; 005600c6
        ;   Label: LAB_005600c6
    CALL core_shadow.cpp_FUN_0055f4f0   ; 005600c7
        ;   XREF to: 0055f4f0 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_0055f4f0()
    ADD ESP,0x4                         ; 005600cc
    PUSH EBP                            ; 005600cf
    PUSH EBX                            ; 005600d0
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 005600d1
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005600d6
    POP ESI                             ; 005600d9
    POP EDI                             ; 005600da
    ADD ESP,0x28                        ; 005600db
    POP EBP                             ; 005600de
    POP EBX                             ; 005600df
    RET                                 ; 005600e0
    CMP EAX,0x5                         ; 005600e1
        ;   Label: LAB_005600e1
    JZ 0x00560072                       ; 005600e4
        ;   XREF to: 00560072 (CONDITIONAL_JUMP)  ; LAB_00560072
    CMP EAX,0xc                         ; 005600e6
    JZ 0x00560072                       ; 005600e9
        ;   XREF to: 00560072 (CONDITIONAL_JUMP)  ; LAB_00560072
    CMP EAX,0x6                         ; 005600eb
    JZ 0x00560072                       ; 005600ee
        ;   XREF to: 00560072 (CONDITIONAL_JUMP)  ; LAB_00560072
    CMP EAX,0x7                         ; 005600f0
    JZ 0x00560072                       ; 005600f3
        ;   XREF to: 00560072 (CONDITIONAL_JUMP)  ; LAB_00560072
    JMP 0x005600c6                      ; 005600f9
        ;   XREF to: 005600c6 (UNCONDITIONAL_JUMP)  ; LAB_005600c6

