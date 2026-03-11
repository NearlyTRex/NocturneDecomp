; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hostage_cpp_CHostage_process_FUN_004f4bd0(CHostage *this_ptr,float delta_time)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined8       Stack[-0x1c0]:8  local_1c0
; undefined8       Stack[-0x1b8]:8  local_1b8
; undefined8       Stack[-0x1b0]:8  local_1b0
; undefined8       Stack[-0x1a8]:8  local_1a8
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined1       Stack[-0x194]:1  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined1       Stack[-0x158]:1  local_158
; undefined1       Stack[-0x14c]:1  local_14c
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined1       Stack[-0x134]:1  local_134
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
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
; undefined1       Stack[-0xc8]:1  local_c8
; undefined1       Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined1       Stack[-0x98]:1  local_98
; undefined1       Stack[-0x8c]:1  local_8c
; undefined1       Stack[-0x80]:1  local_80
; undefined4       Stack[-0x68]:4  local_68
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
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   undefined4 DAT_00002424
;   void* switchdataD_004f4b90 = 004f4bf4
;   void* switchdataD_004f4ba8 = 004f5844
;   void* switchdataD_004f4bb8 = 004f54e3
;   TerminatedCString s_s_escaping_from_s_0062eeeb
;   TerminatedCString s_s_confused_while_walking_0062ef00
;   TerminatedCString s_s_rescued_entering_follo_0062ef2a
;   TerminatedCString s_s_was_led_close_enough_g_0062ef4c
;   TerminatedCString s_s_left_behind_0062ef72
;   TerminatedCString s_s_was_left_behind_but_no_0062ef83
;   TerminatedCString s_s_doesn_t_know_next_wayp_0062efb2
;   TerminatedCString s_s_reached_waypoint_s_0062efe7
;   TerminatedCString s_s_rescued_and_taken_home_0062f000
;   TerminatedCString s_s_got_confused_going_hom_0062f01c
;   TerminatedCString s_Bip01_L_Forearm_0062f043
;   ... and 34 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0
;   core_charactr.cpp_CCharacter_followActor_FUN_0042c5f0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
;   core_charactr.cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0
;   core_charactr.cpp_CCharacter_preProcess_FUN_00429820
;   core_charactr.cpp_CCharacter_process_FUN_00429870
;   ... and 24 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4bd0
        ;   Label: core_hostage.cpp_CHostage_process_FUN_004f4bd0
    PUSH ESI                            ; 004f4bd1
    PUSH EDI                            ; 004f4bd2
    PUSH EBP                            ; 004f4bd3
    MOV EBP,ESP                         ; 004f4bd4
    SUB ESP,0x1ac                       ; 004f4bd6
    AND ESP,0xfffffff8                  ; 004f4bdc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f4bdf
    MOV EAX,dword ptr [EBX + 0x1fabc]   ; 004f4be2
    CMP EAX,0x5                         ; 004f4be8
    JA 0x004f4c08                       ; 004f4beb
        ;   XREF to: 004f4c08 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4f4b90]  ; 004f4bed | caseD_0 | caseD_1 | caseD_3
        ;   Label: switchD
    MOV dword ptr [EBX + 0x2de8],0x42480000 ; 004f4bf4
        ;   Label: caseD_4
    MOV dword ptr [EBX + 0x2de4],0x41a00000 ; 004f4bfe
    FLD float ptr [EBX + 0x243c]        ; 004f4c08
        ;   Label: default
    FLDZ                                ; 004f4c0e
    FCOMPP                              ; 004f4c10
    FNSTSW AX                           ; 004f4c12
    SAHF                                ; 004f4c14
    JC 0x004f4c2b                       ; 004f4c15
        ;   XREF to: 004f4c2b (CONDITIONAL_JUMP)  ; LAB_004f4c2b
    MOV dword ptr [EBX + 0x2de8],0x47c34f80 ; 004f4c17
    MOV dword ptr [EBX + 0x2de4],0x47c34f80 ; 004f4c21
    PUSH dword ptr [EBP + 0x18]         ; 004f4c2b
        ;   Label: LAB_004f4c2b
    PUSH EBX                            ; 004f4c2e
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 004f4c2f
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f4c34
    TEST EAX,EAX                        ; 004f4c37
    JZ 0x004f5254                       ; 004f4c39
        ;   XREF to: 004f5254 (CONDITIONAL_JUMP)  ; LAB_004f5254
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f4c3f
    MOV dword ptr [ESP + 0x20],EAX      ; 004f4c42
    LEA EAX,[EBX + 0x23ac]              ; 004f4c46
    MOV dword ptr [EAX + 0x8],0x0       ; 004f4c4c
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f4c53
    MOV dword ptr [EAX + 0x4],EDX       ; 004f4c56
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f4c59
    MOV dword ptr [EAX],EDX             ; 004f4c5c
    LEA EAX,[EBX + 0x158]               ; 004f4c5e
    MOV dword ptr [ESP + 0x198],EAX     ; 004f4c64
    FLD float ptr [ESP + 0x20]          ; 004f4c6b
        ;   Label: LAB_004f4c6b
    FLDZ                                ; 004f4c6f
    FCOMPP                              ; 004f4c71
    FNSTSW AX                           ; 004f4c73
    SAHF                                ; 004f4c75
    JNC 0x004f4eef                      ; 004f4c76
        ;   XREF to: 004f4eef (CONDITIONAL_JUMP)  ; LAB_004f4eef
    LEA EAX,[ESP + 0x20]                ; 004f4c7c
    PUSH EAX                            ; 004f4c80
    MOV ESI,dword ptr [ESP + 0x19c]     ; 004f4c81
    PUSH ESI                            ; 004f4c88
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 004f4c89
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004f4c8e
    MOV ESI,EAX                         ; 004f4c91
    CMP EAX,0xb                         ; 004f4c93
    JNC 0x004f4ed5                      ; 004f4c96
        ;   XREF to: 004f4ed5 (CONDITIONAL_JUMP)  ; LAB_004f4ed5
    CMP EAX,0x6                         ; 004f4c9c
    JZ 0x004f4cdf                       ; 004f4c9f
        ;   XREF to: 004f4cdf (CONDITIONAL_JUMP)  ; LAB_004f4cdf
    PUSH ESI                            ; 004f4ca1
    PUSH EBX                            ; 004f4ca2
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 004f4ca3
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004f4ca8
    JMP 0x004f4c6b                      ; 004f4cab
        ;   XREF to: 004f4c6b (UNCONDITIONAL_JUMP)  ; LAB_004f4c6b
    MOV dword ptr [EBX + 0x2de8],0x42960000 ; 004f4cad
        ;   Label: caseD_2
    MOV dword ptr [EBX + 0x2de4],0x42200000 ; 004f4cb7
    JMP 0x004f4c08                      ; 004f4cc1
        ;   XREF to: 004f4c08 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBX + 0x2de8],0x47c34f80 ; 004f4cc6
        ;   Label: caseD_5
    MOV dword ptr [EBX + 0x2de4],0x47c34f80 ; 004f4cd0
    JMP 0x004f4c08                      ; 004f4cda
        ;   XREF to: 004f4c08 (UNCONDITIONAL_JUMP)  ; default
    MOV EDI,dword ptr [EBX + 0x2598]    ; 004f4cdf
        ;   Label: LAB_004f4cdf
    TEST EDI,EDI                        ; 004f4ce5
    JZ 0x004f4c6b                       ; 004f4ce7
        ;   XREF to: 004f4c6b (CONDITIONAL_JUMP)  ; LAB_004f4c6b
    PUSH EDI                            ; 004f4ce9
    PUSH EBX                            ; 004f4cea
    PUSH 0x62eeeb                       ; 004f4ceb | = "%s escaping from %s\n"
    MOV EDX,dword ptr [0x0066e8e0]      ; 004f4cf0 | g_CConsolePtr
    PUSH EDX                            ; 004f4cf6 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004f4cf7
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 004f4cfc
    LEA EAX,[ESP + 0x2c]                ; 004f4cff
    PUSH EAX                            ; 004f4d03
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 004f4d04
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004f4d09
    PUSH 0x41700000                     ; 004f4d0c
    PUSH 0x41200000                     ; 004f4d11
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004f4d16
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004f4d1b
    FLD float ptr [ESP + 0x1b0]         ; 004f4d22
    ADD ESP,0x8                         ; 004f4d29
    LEA ESI,[ESP + 0x2c]                ; 004f4d2c
    MOV dword ptr [ESP + 0x60],EBX      ; 004f4d30
    MOV dword ptr [ESP + 0x64],EBX      ; 004f4d34
    PUSH ESI                            ; 004f4d38
    FSTP float ptr [ESP + 0x34]         ; 004f4d39
    MOV EAX,dword ptr [EBX + 0x2598]    ; 004f4d3d
    PUSH EAX                            ; 004f4d43
    MOV EDX,dword ptr [EAX + 0x154]     ; 004f4d44
    CALL dword ptr [EDX + 0x11c]        ; 004f4d4a
    ADD ESP,0x8                         ; 004f4d50
    JMP 0x004f4c6b                      ; 004f4d53
        ;   XREF to: 004f4c6b (UNCONDITIONAL_JUMP)  ; LAB_004f4c6b
    XOR EAX,EAX                         ; 004f4d58
        ;   Label: LAB_004f4d58
    MOV dword ptr [ESP + 0x19c],EAX     ; 004f4d5a
    MOV dword ptr [ESP + 0x80],EAX      ; 004f4d61
    MOV dword ptr [ESP + 0x84],EAX      ; 004f4d68
    LEA EAX,[ESP + 0x80]                ; 004f4d6f
    MOV EDI,0x7149f2ca                  ; 004f4d76
    PUSH EAX                            ; 004f4d7b
    LEA EAX,[ESP + 0xd8]                ; 004f4d7c
    MOV ESI,0x3fc00000                  ; 004f4d83
    PUSH EAX                            ; 004f4d88
    MOV dword ptr [ESP + 0x160],EDI     ; 004f4d89
    MOV dword ptr [ESP + 0x90],ESI      ; 004f4d90
    PUSH EBX                            ; 004f4d97
    XOR ESI,ESI                         ; 004f4d98
    XOR EDI,EDI                         ; 004f4d9a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004f4d9c
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004f4da1
    MOV EAX,[0x006810c8]                ; 004f4da4 | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_004f4da4
    CMP ESI,dword ptr [EAX + 0x14d154]  ; 004f4da9 | g_CDemonSetInstance.actor_count
    JGE 0x004f4e6f                      ; 004f4daf
        ;   XREF to: 004f4e6f (CONDITIONAL_JUMP)  ; LAB_004f4e6f
    MOV EDX,dword ptr [0x02c14d14]      ; 004f4db5 | g_CDoorClassInfo.name_hash
    PUSH EDX                            ; 004f4dbb
    MOV ECX,dword ptr [EDI + EAX*0x1 + 0x14d158] ; 004f4dbc | g_CDemonSetInstance.actors[0] | DAT_032613d4
    PUSH ECX                            ; 004f4dc3
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f4dc4
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,EAX                         ; 004f4dc9
    ADD ESP,0x8                         ; 004f4dcb
    TEST EAX,EAX                        ; 004f4dce
    JNZ 0x004f4dd8                      ; 004f4dd0
        ;   XREF to: 004f4dd8 (CONDITIONAL_JUMP)  ; LAB_004f4dd8
    INC ESI                             ; 004f4dd2
        ;   Label: LAB_004f4dd2
    ADD EDI,0x4                         ; 004f4dd3
    JMP 0x004f4da4                      ; 004f4dd6
        ;   XREF to: 004f4da4 (UNCONDITIONAL_JUMP)  ; LAB_004f4da4
    FLD float ptr [EAX + 0x20]          ; 004f4dd8
        ;   Label: LAB_004f4dd8
    FSUB float ptr [ESP + 0xd4]         ; 004f4ddb
    FSTP float ptr [ESP + 0xb0]         ; 004f4de2
    FLD float ptr [EAX + 0x24]          ; 004f4de9
    FSUB float ptr [ESP + 0xd8]         ; 004f4dec
    ADD EAX,0x20                        ; 004f4df3
    FST float ptr [ESP + 0xb4]          ; 004f4df6
    FLD float ptr [EAX + 0x8]           ; 004f4dfd
    FXCH                                ; 004f4e00
    FABS                                ; 004f4e02
    FXCH                                ; 004f4e04
    FSUB float ptr [ESP + 0xdc]         ; 004f4e06
    FSTP float ptr [ESP + 0xb8]         ; 004f4e0d
    FCOMP double ptr [0x0062f0e2]       ; 004f4e14 | DOUBLE_0062f0e2
    FNSTSW AX                           ; 004f4e1a
    SAHF                                ; 004f4e1c
    JA 0x004f4dd2                       ; 004f4e1d
        ;   XREF to: 004f4dd2 (CONDITIONAL_JUMP)  ; LAB_004f4dd2
    FLD float ptr [ESP + 0xb0]          ; 004f4e1f
    FMUL ST0                            ; 004f4e26
    FLD float ptr [ESP + 0xb8]          ; 004f4e28
    FMUL ST0                            ; 004f4e2f
    XOR EAX,EAX                         ; 004f4e31
    FADDP                               ; 004f4e33
    MOV dword ptr [ESP + 0xb4],EAX      ; 004f4e35
    FSQRT                               ; 004f4e3c
    FST float ptr [ESP + 0x1a0]         ; 004f4e3e
    FCOMP float ptr [ESP + 0x158]       ; 004f4e45
    FNSTSW AX                           ; 004f4e4c
    SAHF                                ; 004f4e4e
    JNC 0x004f4dd2                      ; 004f4e4f
        ;   XREF to: 004f4dd2 (CONDITIONAL_JUMP)  ; LAB_004f4dd2
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 004f4e51
    MOV dword ptr [ESP + 0x19c],EDX     ; 004f4e58
    MOV dword ptr [ESP + 0x158],EAX     ; 004f4e5f
    INC ESI                             ; 004f4e66
    ADD EDI,0x4                         ; 004f4e67
    JMP 0x004f4da4                      ; 004f4e6a
        ;   XREF to: 004f4da4 (UNCONDITIONAL_JUMP)  ; LAB_004f4da4
    MOV ESI,dword ptr [ESP + 0x19c]     ; 004f4e6f
        ;   Label: LAB_004f4e6f
    TEST ESI,ESI                        ; 004f4e76
    JZ 0x004f4c6b                       ; 004f4e78
        ;   XREF to: 004f4c6b (CONDITIONAL_JUMP)  ; LAB_004f4c6b
    PUSH 0x3dcccccd                     ; 004f4e7e
    PUSH ESI                            ; 004f4e83
    CALL core_door.cpp_CDoor_setSwingRange_FUN_00480de0 ; 004f4e84
        ;   XREF to: 00480de0 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_setSwingRange_FUN_00480de0(CDoor * this_ptr, float swing_range)
    ADD ESP,0x8                         ; 004f4e89
    JMP 0x004f4c6b                      ; 004f4e8c
        ;   XREF to: 004f4c6b (UNCONDITIONAL_JUMP)  ; LAB_004f4c6b
    MOV ESI,dword ptr [EBX + 0x24f8]    ; 004f4e91
        ;   Label: LAB_004f4e91
    TEST ESI,ESI                        ; 004f4e97
    JZ 0x004f4c6b                       ; 004f4e99
        ;   XREF to: 004f4c6b (CONDITIONAL_JUMP)  ; LAB_004f4c6b
    PUSH 0x0                            ; 004f4e9f
    PUSH 0x1                            ; 004f4ea1
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f4ea3
    PUSH EBX                            ; 004f4ea9
    CALL dword ptr [EAX + 0x13c]        ; 004f4eaa
    ADD ESP,0xc                         ; 004f4eb0
    MOV EAX,[0x02db87d0]                ; 004f4eb3 | g_LocalHeroIndex
    PUSH 0x1                            ; 004f4eb8
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004f4eba | g_HeroActors
    PUSH ESI                            ; 004f4ec1
    ADD EAX,0x1f738                     ; 004f4ec2
    PUSH EAX                            ; 004f4ec7
    CALL core_inv.cpp_CInventory_addItem_FUN_004fd600 ; 004f4ec8
        ;   XREF to: 004fd600 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004fd600(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004f4ecd
    JMP 0x004f4c6b                      ; 004f4ed0
        ;   XREF to: 004f4c6b (UNCONDITIONAL_JUMP)  ; LAB_004f4c6b
    JBE 0x004f4d58                      ; 004f4ed5
        ;   XREF to: 004f4d58 (CONDITIONAL_JUMP)  ; LAB_004f4d58
        ;   Label: LAB_004f4ed5
    CMP EAX,0xc                         ; 004f4edb
    JZ 0x004f4e91                       ; 004f4ede
        ;   XREF to: 004f4e91 (CONDITIONAL_JUMP)  ; LAB_004f4e91
    PUSH ESI                            ; 004f4ee0
    PUSH EBX                            ; 004f4ee1
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 004f4ee2
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004f4ee7
    JMP 0x004f4c6b                      ; 004f4eea
        ;   XREF to: 004f4c6b (UNCONDITIONAL_JUMP)  ; LAB_004f4c6b
    FLD float ptr [EBP + 0x18]          ; 004f4eef
        ;   Label: LAB_004f4eef
    FMUL double ptr [0x0062f06a]        ; 004f4ef2 | DOUBLE_0062f06a
    FLD float ptr [EBX + 0x23b4]        ; 004f4ef8
    PUSH 0xa                            ; 004f4efe
    MOV ECX,dword ptr [ESP + 0x19c]     ; 004f4f00
    XOR EDX,EDX                         ; 004f4f07
    FSTP float ptr [EBX + 0x2434]       ; 004f4f09
    MOV dword ptr [ESP + 0x198],EDX     ; 004f4f0f
    PUSH ECX                            ; 004f4f16
    FSTP float ptr [EBX + 0x2438]       ; 004f4f17
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004f4f1d
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004f4f22
    XOR EDI,EDI                         ; 004f4f29
    FLD float ptr [ESP + 0x1b0]         ; 004f4f2b
    FLDZ                                ; 004f4f32
    ADD ESP,0x8                         ; 004f4f34
    FCOMPP                              ; 004f4f37
    FNSTSW AX                           ; 004f4f39
    SAHF                                ; 004f4f3b
    JNC 0x004f4f4a                      ; 004f4f3c
        ;   XREF to: 004f4f4a (CONDITIONAL_JUMP)  ; LAB_004f4f4a
    MOV EDI,0x1                         ; 004f4f3e
    MOV dword ptr [ESP + 0x194],EDI     ; 004f4f43
    FLD float ptr [EBX + 0x243c]        ; 004f4f4a
        ;   Label: LAB_004f4f4a
    FLDZ                                ; 004f4f50
    FCOMPP                              ; 004f4f52
    FNSTSW AX                           ; 004f4f54
    SAHF                                ; 004f4f56
    JC 0x004f525b                       ; 004f4f57
        ;   XREF to: 004f525b (CONDITIONAL_JUMP)  ; LAB_004f525b
    PUSH 0x5                            ; 004f4f5d
    LEA EAX,[EBX + 0x158]               ; 004f4f5f
    PUSH EAX                            ; 004f4f65
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004f4f66
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004f4f6b
    FLD float ptr [ESP + 0x1b0]         ; 004f4f72
    FLDZ                                ; 004f4f79
    ADD ESP,0x8                         ; 004f4f7b
    FCOMPP                              ; 004f4f7e
    FNSTSW AX                           ; 004f4f80
    SAHF                                ; 004f4f82
    JC 0x004f4fc0                       ; 004f4f83
        ;   XREF to: 004f4fc0 (CONDITIONAL_JUMP)  ; LAB_004f4fc0
    PUSH 0x8                            ; 004f4f85
    LEA EAX,[EBX + 0x158]               ; 004f4f87
    PUSH EAX                            ; 004f4f8d
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004f4f8e
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004f4f93
    FLD float ptr [ESP + 0x1b0]         ; 004f4f9a
    FLDZ                                ; 004f4fa1
    ADD ESP,0x8                         ; 004f4fa3
    FCOMPP                              ; 004f4fa6
    FNSTSW AX                           ; 004f4fa8
    SAHF                                ; 004f4faa
    JC 0x004f4fc0                       ; 004f4fab
        ;   XREF to: 004f4fc0 (CONDITIONAL_JUMP)  ; LAB_004f4fc0
    PUSH 0x1                            ; 004f4fad
    PUSH 0x6                            ; 004f4faf
    LEA EAX,[EBX + 0x158]               ; 004f4fb1
    PUSH EAX                            ; 004f4fb7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f4fb8
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f4fbd
    MOV EDI,0x1                         ; 004f4fc0
        ;   Label: LAB_004f4fc0
    FLD float ptr [EBX + 0x243c]        ; 004f4fc5
        ;   Label: caseD_5
    FLDZ                                ; 004f4fcb
    FCOMPP                              ; 004f4fcd
    FNSTSW AX                           ; 004f4fcf
    SAHF                                ; 004f4fd1
    JNC 0x004f509b                      ; 004f4fd2
        ;   XREF to: 004f509b (CONDITIONAL_JUMP)  ; LAB_004f509b
    CMP dword ptr [EBX + 0x1fab8],0x1   ; 004f4fd8
    JNZ 0x004f509b                      ; 004f4fdf
        ;   XREF to: 004f509b (CONDITIONAL_JUMP)  ; LAB_004f509b
    FLD float ptr [EBP + 0x18]          ; 004f4fe5
    FMUL float ptr [0x0062f0b6]         ; 004f4fe8 | FLOAT_0062f0b6
    SUB ESP,0x4                         ; 004f4fee
    FSTP float ptr [ESP]                ; 004f4ff1
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004f4ff4
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004f4ff9
    TEST EAX,EAX                        ; 004f4ffc
    JZ 0x004f509b                       ; 004f4ffe
        ;   XREF to: 004f509b (CONDITIONAL_JUMP)  ; LAB_004f509b
    PUSH 0x0                            ; 004f5004
    PUSH 0x62f043                       ; 004f5006 | = "Bip01 L Forearm"
    LEA ESI,[EBX + 0x158]               ; 004f500b
    PUSH ESI                            ; 004f5011
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 004f5012
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f5017
    PUSH EAX                            ; 004f501a
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f501b
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f5020
    TEST EAX,EAX                        ; 004f5023
    JL 0x004f509b                       ; 004f5025
        ;   XREF to: 004f509b (CONDITIONAL_JUMP)  ; LAB_004f509b
    PUSH EAX                            ; 004f5027
    LEA EAX,[ESP + 0x108]               ; 004f5028
    PUSH EAX                            ; 004f502f
    PUSH ESI                            ; 004f5030
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 004f5031
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004f5036
    PUSH EAX                            ; 004f5039
    LEA EAX,[ESP + 0x6c]                ; 004f503a
    PUSH EAX                            ; 004f503e
    PUSH EBX                            ; 004f503f
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004f5040
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004f5045
    LEA EAX,[ESP + 0xa4]                ; 004f5048
    PUSH EAX                            ; 004f504f
    LEA EAX,[ESP + 0x90]                ; 004f5050
    MOV EDX,0x40400000                  ; 004f5057
    PUSH EAX                            ; 004f505c
    XOR ECX,ECX                         ; 004f505d
    MOV dword ptr [ESP + 0xac],EDX      ; 004f505f
    PUSH EBX                            ; 004f5066
    MOV dword ptr [ESP + 0xb4],ECX      ; 004f5067
    MOV dword ptr [ESP + 0xb8],ECX      ; 004f506e
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 004f5075
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 004f507a
    XOR ESI,ESI                         ; 004f507d
    PUSH ESI                            ; 004f507f
    LEA EAX,[ESP + 0x90]                ; 004f5080
    PUSH EAX                            ; 004f5087
    LEA EAX,[ESP + 0x70]                ; 004f5088
    PUSH EAX                            ; 004f508c
    MOV EAX,[0x0067b9a0]                ; 004f508d | g_CGorePtr | g_CGoreInstance
    PUSH EAX                            ; 004f5092 | g_CGoreInstance
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004edaa0 ; 004f5093
        ;   XREF to: 004edaa0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodParticles_FUN_004edaa0(CGore * this_ptr, CVector3f * position, CVector3f * velocity, int blood_type)
    ADD ESP,0x10                        ; 004f5098
    PUSH EBX                            ; 004f509b
        ;   Label: LAB_004f509b
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00429820 ; 004f509c
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004f50a1
    CMP dword ptr [ESP + 0x194],0x0     ; 004f50a4
    JZ 0x004f5c84                       ; 004f50ac
        ;   XREF to: 004f5c84 (CONDITIONAL_JUMP)  ; LAB_004f5c84
    LEA EAX,[EBX + 0x241c]              ; 004f50b2
    PUSH EAX                            ; 004f50b8
    LEA EAX,[ESP + 0x144]               ; 004f50b9
    PUSH EAX                            ; 004f50c0
    PUSH EBX                            ; 004f50c1
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 004f50c2
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 004f50c7
    LEA EAX,[EBX + 0x20]                ; 004f50c9
    FLD float ptr [EDX]                 ; 004f50cc
    FADD float ptr [EAX]                ; 004f50ce
    FSTP float ptr [EAX]                ; 004f50d0
    FLD float ptr [EDX + 0x4]           ; 004f50d2
    FADD float ptr [EAX + 0x4]          ; 004f50d5
    FSTP float ptr [EAX + 0x4]          ; 004f50d8
    FLD float ptr [EDX + 0x8]           ; 004f50db
    FADD float ptr [EAX + 0x8]          ; 004f50de
    ADD ESP,0xc                         ; 004f50e1
    FSTP float ptr [EAX + 0x8]          ; 004f50e4
    MOV dword ptr [EBX + 0x2dd4],0x0    ; 004f50e7
        ;   Label: LAB_004f50e7
    LEA ESI,[EBX + 0x158]               ; 004f50f1
        ;   Label: LAB_004f50f1
    PUSH ESI                            ; 004f50f7
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 004f50f8
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x1fab8]   ; 004f50fd
    ADD ESP,0x4                         ; 004f5103
    CMP EAX,0x1                         ; 004f5106
    JNZ 0x004f51b6                      ; 004f5109
        ;   XREF to: 004f51b6 (CONDITIONAL_JUMP)  ; LAB_004f51b6
    MOV EDX,0x3f000000                  ; 004f510f
    MOV EAX,[0x03f95d78]                ; 004f5114 | g_CWeaponClassInfo.name_hash
    MOV dword ptr [ESP + 0x178],EDX     ; 004f5119
    PUSH EAX                            ; 004f5120
    MOV EDX,dword ptr [EBX + 0x24f8]    ; 004f5121
    MOV ECX,0x3f400000                  ; 004f5127
    PUSH EDX                            ; 004f512c
    MOV dword ptr [ESP + 0x174],ECX     ; 004f512d
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f5134
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f5139
    XOR ECX,ECX                         ; 004f513c
    MOV dword ptr [ESP + 0x174],ECX     ; 004f513e
    TEST EAX,EAX                        ; 004f5145
    JZ 0x004f5e7d                       ; 004f5147
        ;   XREF to: 004f5e7d (CONDITIONAL_JUMP)  ; LAB_004f5e7d
    PUSH 0x10                           ; 004f514d
    PUSH ESI                            ; 004f514f
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004f5150
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004f5155
    FLD float ptr [ESP + 0x1b0]         ; 004f515c
    FLDZ                                ; 004f5163
    ADD ESP,0x8                         ; 004f5165
    FCOMPP                              ; 004f5168
    FNSTSW AX                           ; 004f516a
    SAHF                                ; 004f516c
    JC 0x004f5e7d                       ; 004f516d
        ;   XREF to: 004f5e7d (CONDITIONAL_JUMP)  ; LAB_004f5e7d
    FLD float ptr [EBP + 0x18]          ; 004f5173
        ;   Label: LAB_004f5173
    FDIV float ptr [ESP + 0x178]        ; 004f5176
    FADD float ptr [EBX + 0x1fae4]      ; 004f517d
    FSTP float ptr [EBX + 0x1fae4]      ; 004f5183
        ;   Label: LAB_004f5183
    FLDZ                                ; 004f5189
    FLD float ptr [EBX + 0x1fae4]       ; 004f518b
    FSTP double ptr [ESP + 0x10]        ; 004f5191
    FCOMP double ptr [ESP + 0x10]       ; 004f5195
    FNSTSW AX                           ; 004f5199
    SAHF                                ; 004f519b
    JC 0x004f5ea0                       ; 004f519c
        ;   XREF to: 004f5ea0 (CONDITIONAL_JUMP)  ; LAB_004f5ea0
    MOV dword ptr [EBX + 0x1fae0],0x0   ; 004f51a2
    MOV dword ptr [EBX + 0x1fae4],0x0   ; 004f51ac
    PUSH EDI                            ; 004f51b6
        ;   Label: LAB_004f51b6
    PUSH dword ptr [EBP + 0x18]         ; 004f51b7
    PUSH EBX                            ; 004f51ba
    CALL core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 ; 004f51bb
        ;   XREF to: 0042d5a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0(CCharacter * this_ptr, float delta_time, int disable_search)
    ADD ESP,0xc                         ; 004f51c0
    PUSH dword ptr [EBP + 0x18]         ; 004f51c3
    PUSH EBX                            ; 004f51c6
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 004f51c7
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time)
    FLD float ptr [EBX + 0x1fae0]       ; 004f51cc
    FLD1                                ; 004f51d2
    ADD ESP,0x8                         ; 004f51d4
    FCOMPP                              ; 004f51d7
    FNSTSW AX                           ; 004f51d9
    SAHF                                ; 004f51db
    JA 0x004f5247                       ; 004f51dc
        ;   XREF to: 004f5247 (CONDITIONAL_JUMP)  ; LAB_004f5247
    MOV ECX,dword ptr [0x03f95d78]      ; 004f51de | g_CWeaponClassInfo.name_hash
    PUSH ECX                            ; 004f51e4
    MOV ESI,dword ptr [EBX + 0x24f8]    ; 004f51e5
    PUSH ESI                            ; 004f51eb
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f51ec
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 004f51f1
    ADD ESP,0x8                         ; 004f51f3
    TEST EAX,EAX                        ; 004f51f6
    JZ 0x004f5247                       ; 004f51f8
        ;   XREF to: 004f5247 (CONDITIONAL_JUMP)  ; LAB_004f5247
    MOV EDI,dword ptr [EAX + 0x56c]     ; 004f51fa
    MOV dword ptr [EAX + 0x56c],0x6     ; 004f5200
    PUSH ESI                            ; 004f520a
    MOV EAX,dword ptr [EAX + 0x154]     ; 004f520b
    CALL dword ptr [EAX + 0xf8]         ; 004f5211
    ADD ESP,0x4                         ; 004f5217
    PUSH 0x1                            ; 004f521a
    PUSH 0xc                            ; 004f521c
    LEA EAX,[EBX + 0x158]               ; 004f521e
    PUSH EAX                            ; 004f5224
    MOV dword ptr [ESI + 0x56c],EDI     ; 004f5225
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f522b
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV dword ptr [EBX + 0x1fae4],0x0   ; 004f5230
    ADD ESP,0xc                         ; 004f523a
    MOV dword ptr [EBX + 0x1fae0],0x0   ; 004f523d
    CMP dword ptr [EBX + 0x1fab8],0x1   ; 004f5247
        ;   Label: LAB_004f5247
    JZ 0x004f5fa1                       ; 004f524e
        ;   XREF to: 004f5fa1 (CONDITIONAL_JUMP)  ; LAB_004f5fa1
    MOV ESP,EBP                         ; 004f5254
        ;   Label: LAB_004f5254
    POP EBP                             ; 004f5256
    POP EDI                             ; 004f5257
    POP ESI                             ; 004f5258
    POP EBX                             ; 004f5259
    RET                                 ; 004f525a
    MOV EAX,dword ptr [EBX + 0x2598]    ; 004f525b
        ;   Label: LAB_004f525b
    TEST EAX,EAX                        ; 004f5261
    JZ 0x004f53ca                       ; 004f5263
        ;   XREF to: 004f53ca (CONDITIONAL_JUMP)  ; LAB_004f53ca
    ADD EAX,0x20                        ; 004f5269
    PUSH EAX                            ; 004f526c
    LEA EAX,[ESP + 0xf0]                ; 004f526d
    PUSH EAX                            ; 004f5274
    PUSH EBX                            ; 004f5275
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004f5276
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004f527b
    PUSH EAX                            ; 004f527e
    LEA EAX,[ESP + 0xfc]                ; 004f527f
    PUSH EAX                            ; 004f5286
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004f5287
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 004f528c
    PUSH dword ptr [EAX + 0x4]          ; 004f528f
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004f5292
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x1ac],EAX     ; 004f5297
    FLD float ptr [ESP + 0x1ac]         ; 004f529e
    ADD ESP,0x4                         ; 004f52a5
    FST float ptr [ESP + 0x24]          ; 004f52a8
    FCOMP double ptr [0x0062f09a]       ; 004f52ac | DOUBLE_0062f09a
    FNSTSW AX                           ; 004f52b2
    SAHF                                ; 004f52b4
    JNC 0x004f52c5                      ; 004f52b5
        ;   XREF to: 004f52c5 (CONDITIONAL_JUMP)  ; LAB_004f52c5
    FLD float ptr [ESP + 0x24]          ; 004f52b7
    FADD float ptr [0x0062f0a2]         ; 004f52bb | FLOAT_0062f0a2
    FSTP float ptr [ESP + 0x24]         ; 004f52c1
    FLD float ptr [ESP + 0x24]          ; 004f52c5
        ;   Label: LAB_004f52c5
    FCOMP double ptr [0x0062f0aa]       ; 004f52c9 | DOUBLE_0062f0aa
    FNSTSW AX                           ; 004f52cf
    SAHF                                ; 004f52d1
    JBE 0x004f52e2                      ; 004f52d2
        ;   XREF to: 004f52e2 (CONDITIONAL_JUMP)  ; LAB_004f52e2
    FLD float ptr [ESP + 0x24]          ; 004f52d4
    FADD float ptr [0x0062f0b2]         ; 004f52d8 | FLOAT_0062f0b2
    FSTP float ptr [ESP + 0x24]         ; 004f52de
    FLD float ptr [EBP + 0x18]          ; 004f52e2
        ;   Label: LAB_004f52e2
    FMUL double ptr [0x0062f06a]        ; 004f52e5 | DOUBLE_0062f06a
    FLD float ptr [ESP + 0x24]          ; 004f52eb
    FXCH                                ; 004f52ef
    FST float ptr [ESP + 0x188]         ; 004f52f1
    FCHS                                ; 004f52f8
    FSTP float ptr [ESP + 0x17c]        ; 004f52fa
    FCOMP float ptr [ESP + 0x17c]       ; 004f5301
    FNSTSW AX                           ; 004f5308
    SAHF                                ; 004f530a
    JNC 0x004f5318                      ; 004f530b
        ;   XREF to: 004f5318 (CONDITIONAL_JUMP)  ; LAB_004f5318
    MOV EAX,dword ptr [ESP + 0x17c]     ; 004f530d
    MOV dword ptr [ESP + 0x24],EAX      ; 004f5314
    FLD float ptr [ESP + 0x24]          ; 004f5318
        ;   Label: LAB_004f5318
    FCOMP float ptr [ESP + 0x188]       ; 004f531c
    FNSTSW AX                           ; 004f5323
    SAHF                                ; 004f5325
    JBE 0x004f5333                      ; 004f5326
        ;   XREF to: 004f5333 (CONDITIONAL_JUMP)  ; LAB_004f5333
    MOV EAX,dword ptr [ESP + 0x188]     ; 004f5328
    MOV dword ptr [ESP + 0x24],EAX      ; 004f532f
    FLD float ptr [EBX + 0x34]          ; 004f5333
        ;   Label: LAB_004f5333
    FADD float ptr [ESP + 0x24]         ; 004f5336
    PUSH EBX                            ; 004f533a
    FSTP float ptr [EBX + 0x34]         ; 004f533b
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 004f533e
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f5343
    PUSH 0x0                            ; 004f5346
    LEA EAX,[ESP + 0x12c]               ; 004f5348
    PUSH EAX                            ; 004f534f
    LEA EAX,[EBX + 0x158]               ; 004f5350
    MOV ESI,dword ptr [EBX + 0x2598]    ; 004f5356
    PUSH EAX                            ; 004f535c
    MOV EDI,dword ptr [ESI + 0x154]     ; 004f535d
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004f5363
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004f5368
    PUSH EAX                            ; 004f536b
    PUSH EBX                            ; 004f536c
    PUSH ESI                            ; 004f536d
    CALL dword ptr [EDI + 0x124]        ; 004f536e
    ADD ESP,0xc                         ; 004f5374
    TEST EAX,EAX                        ; 004f5377
    JZ 0x004f53c2                       ; 004f5379
        ;   XREF to: 004f53c2 (CONDITIONAL_JUMP)  ; LAB_004f53c2
    CMP dword ptr [EBX + 0x2598],0x0    ; 004f537b
    JNZ 0x004f5397                      ; 004f5382
        ;   XREF to: 004f5397 (CONDITIONAL_JUMP)  ; LAB_004f5397
    PUSH 0x1                            ; 004f5384
        ;   Label: LAB_004f5384
    PUSH 0x0                            ; 004f5386
    LEA EAX,[EBX + 0x158]               ; 004f5388
    PUSH EAX                            ; 004f538e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f538f
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f5394
    MOV ESI,0x1                         ; 004f5397
        ;   Label: LAB_004f5397
    LEA EAX,[EBX + 0x23ac]              ; 004f539c
    MOV dword ptr [ESP + 0x194],ESI     ; 004f53a2
    MOV dword ptr [EAX + 0x8],0x0       ; 004f53a9
    MOV EDI,ESI                         ; 004f53b0
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f53b2
    MOV dword ptr [EAX + 0x4],EDX       ; 004f53b5
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f53b8
    MOV dword ptr [EAX],EDX             ; 004f53bb
    JMP 0x004f4fc5                      ; 004f53bd
        ;   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBX + 0x2598],EAX    ; 004f53c2
        ;   Label: LAB_004f53c2
    JMP 0x004f5384                      ; 004f53c8
        ;   XREF to: 004f5384 (UNCONDITIONAL_JUMP)  ; LAB_004f5384
    PUSH 0x3                            ; 004f53ca
        ;   Label: LAB_004f53ca
    LEA ESI,[EBX + 0x158]               ; 004f53cc
    PUSH ESI                            ; 004f53d2
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004f53d3
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004f53d8
    FLD float ptr [ESP + 0x1b0]         ; 004f53df
    FLDZ                                ; 004f53e6
    ADD ESP,0x8                         ; 004f53e8
    FCOMPP                              ; 004f53eb
    FNSTSW AX                           ; 004f53ed
    SAHF                                ; 004f53ef
    JC 0x004f4fc0                       ; 004f53f0
        ;   XREF to: 004f4fc0 (CONDITIONAL_JUMP)  ; LAB_004f4fc0
    PUSH 0x5                            ; 004f53f6
    PUSH ESI                            ; 004f53f8
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004f53f9
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004f53fe
    FLD float ptr [ESP + 0x1b0]         ; 004f5405
    FLDZ                                ; 004f540c
    ADD ESP,0x8                         ; 004f540e
    FCOMPP                              ; 004f5411
    FNSTSW AX                           ; 004f5413
    SAHF                                ; 004f5415
    JC 0x004f4fc0                       ; 004f5416
        ;   XREF to: 004f4fc0 (CONDITIONAL_JUMP)  ; LAB_004f4fc0
    PUSH 0x8                            ; 004f541c
    PUSH ESI                            ; 004f541e
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004f541f
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004f5424
    FLD float ptr [ESP + 0x1b0]         ; 004f542b
    FLDZ                                ; 004f5432
    ADD ESP,0x8                         ; 004f5434
    FCOMPP                              ; 004f5437
    FNSTSW AX                           ; 004f5439
    SAHF                                ; 004f543b
    JC 0x004f4fc0                       ; 004f543c
        ;   XREF to: 004f4fc0 (CONDITIONAL_JUMP)  ; LAB_004f4fc0
    PUSH dword ptr [EBP + 0x18]         ; 004f5442
    PUSH EBX                            ; 004f5445
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 ; 004f5446
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f544b
    TEST EAX,EAX                        ; 004f544e
    JZ 0x004f5c6e                       ; 004f5450
        ;   XREF to: 004f5c6e (CONDITIONAL_JUMP)  ; LAB_004f5c6e
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 004f5456
    CMP EAX,0x2                         ; 004f545c
    JNC 0x004f54da                      ; 004f545f
        ;   XREF to: 004f54da (CONDITIONAL_JUMP)  ; LAB_004f54da
    CMP EAX,0x1                         ; 004f5461
    JNZ 0x004f54c2                      ; 004f5464
        ;   XREF to: 004f54c2 (CONDITIONAL_JUMP)  ; LAB_004f54c2
    PUSH EAX                            ; 004f5466
    PUSH EAX                            ; 004f5467
    LEA EAX,[EBX + 0x158]               ; 004f5468
    PUSH EAX                            ; 004f546e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f546f
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f5474
    JMP 0x004f4fc5                      ; 004f5477
        ;   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 004f547c
        ;   Label: LAB_004f547c
    PUSH 0x0                            ; 004f547e
    LEA EAX,[EBX + 0x158]               ; 004f5480
    PUSH EAX                            ; 004f5486
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f5487
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f548c
    PUSH EBX                            ; 004f548f
    MOV EAX,0x62ef00                    ; 004f5490 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 004f5495 | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x0066e8e0]      ; 004f5496 | g_CConsolePtr
    PUSH EDX                            ; 004f549c | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004f549d
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004f54a2
    JMP 0x004f4fc5                      ; 004f54a5
        ;   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 004f54aa
        ;   Label: LAB_004f54aa
    PUSH 0x2                            ; 004f54ac
    LEA EAX,[EBX + 0x158]               ; 004f54ae
    PUSH EAX                            ; 004f54b4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f54b5
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f54ba
    JMP 0x004f4fc5                      ; 004f54bd
        ;   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 004f54c2
        ;   Label: LAB_004f54c2
    PUSH 0x0                            ; 004f54c4
    LEA EAX,[EBX + 0x158]               ; 004f54c6
    PUSH EAX                            ; 004f54cc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f54cd
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f54d2
    JMP 0x004f4fc5                      ; 004f54d5
        ;   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)  ; default
    JBE 0x004f54aa                      ; 004f54da
        ;   XREF to: 004f54aa (CONDITIONAL_JUMP)  ; LAB_004f54aa
        ;   Label: LAB_004f54da
    CMP EAX,0x3                         ; 004f54dc
    JZ 0x004f547c                       ; 004f54df
        ;   XREF to: 004f547c (CONDITIONAL_JUMP)  ; LAB_004f547c
    JMP 0x004f54c2                      ; 004f54e1
        ;   XREF to: 004f54c2 (UNCONDITIONAL_JUMP)  ; LAB_004f54c2
    PUSH dword ptr [EBP + 0x18]         ; 004f54e3
        ;   Label: caseD_0
    PUSH EBX                            ; 004f54e6
    CALL core_hostage.cpp_CHostage_processGrabberFlee_FUN_004f5ff0 ; 004f54e7
        ;   XREF to: 004f5ff0 (UNCONDITIONAL_CALL)  ; int core_hostage.cpp_CHostage_processGrabberFlee_FUN_004f5ff0(CHostage * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f54ec
    TEST EAX,EAX                        ; 004f54ef
    JNZ 0x004f4fc5                      ; 004f54f1
        ;   XREF to: 004f4fc5 (CONDITIONAL_JUMP)  ; default
    MOV EAX,[0x02db87d0]                ; 004f54f7 | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004f54fc | g_HeroActors
    LEA EDX,[EAX + 0x20]                ; 004f5503
    LEA EAX,[EBX + 0x20]                ; 004f5506
    FLD float ptr [EDX]                 ; 004f5509
    FSUB float ptr [EAX]                ; 004f550b
    FSTP float ptr [ESP + 0xe0]         ; 004f550d
    FLD float ptr [EDX + 0x4]           ; 004f5514
    FSUB float ptr [EAX + 0x4]          ; 004f5517
    FSTP float ptr [ESP + 0xe4]         ; 004f551a
    FLD float ptr [EDX + 0x8]           ; 004f5521
    FSUB float ptr [EAX + 0x8]          ; 004f5524
    FSTP float ptr [ESP + 0xe8]         ; 004f5527
    FLD float ptr [EBX + 0x1f708]       ; 004f552e
    FLDZ                                ; 004f5534
    FCOMPP                              ; 004f5536
    FNSTSW AX                           ; 004f5538
    SAHF                                ; 004f553a
    JNC 0x004f556d                      ; 004f553b
        ;   XREF to: 004f556d (CONDITIONAL_JUMP)  ; LAB_004f556d
    FLD float ptr [ESP + 0xe4]          ; 004f553d
    FMUL ST0                            ; 004f5544
    FLD float ptr [ESP + 0xe0]          ; 004f5546
    FMUL ST0                            ; 004f554d
    FADDP                               ; 004f554f
    FLD float ptr [ESP + 0xe8]          ; 004f5551
    FMUL ST0                            ; 004f5558
    FADDP                               ; 004f555a
    FSQRT                               ; 004f555c
    FCOMP float ptr [EBX + 0x1f708]     ; 004f555e
    FNSTSW AX                           ; 004f5564
    SAHF                                ; 004f5566
    JNC 0x004f54c2                      ; 004f5567
        ;   XREF to: 004f54c2 (CONDITIONAL_JUMP)  ; LAB_004f54c2
    LEA EAX,[EBX + 0x1f70c]             ; 004f556d
        ;   Label: LAB_004f556d
    PUSH EAX                            ; 004f5573
    MOV ECX,dword ptr [0x006793d0]      ; 004f5574 | g_CEventListPtr
    PUSH ECX                            ; 004f557a | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 004f557b
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004f5580
    TEST EAX,EAX                        ; 004f5583
    JZ 0x004f54c2                       ; 004f5585
        ;   XREF to: 004f54c2 (CONDITIONAL_JUMP)  ; LAB_004f54c2
    PUSH EBX                            ; 004f558b
    PUSH 0x62ef2a                       ; 004f558c | = "%s rescued, entering follow mode\n"
    MOV ESI,dword ptr [0x0066e8e0]      ; 004f5591 | g_CConsolePtr
    PUSH ESI                            ; 004f5597 | g_CConsoleInstance
    MOV dword ptr [EBX + 0x1fabc],0x1   ; 004f5598
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004f55a2
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004f55a7
    LEA EAX,[EBX + 0x1f790]             ; 004f55aa
    PUSH EAX                            ; 004f55b0
    MOV EAX,[0x006793d0]                ; 004f55b1 | g_CEventListPtr | g_CEventListInstance
    PUSH EAX                            ; 004f55b6 | g_CEventListInstance
    CALL core_event.cpp_CEventList_executeCommands_FUN_004aabe0 ; 004f55b7
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004aabe0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004f55bc
    JMP 0x004f4fc5                      ; 004f55bf
        ;   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0x1fac0]   ; 004f55c4
        ;   Label: caseD_1
    TEST ECX,ECX                        ; 004f55ca
    JNZ 0x004f561e                      ; 004f55cc
        ;   XREF to: 004f561e (CONDITIONAL_JUMP)  ; LAB_004f561e
    CMP dword ptr [EBX + 0x1fac8],0x0   ; 004f55ce
        ;   Label: LAB_004f55ce
    JZ 0x004f5657                       ; 004f55d5
        ;   XREF to: 004f5657 (CONDITIONAL_JUMP)  ; LAB_004f5657
    PUSH EBX                            ; 004f55db
    PUSH 0x62ef4c                       ; 004f55dc | = "%s was led close enough, going home!\n"
    MOV EAX,[0x0066e8e0]                ; 004f55e1 | g_CConsolePtr
    PUSH EAX                            ; 004f55e6 | g_CConsoleInstance
    MOV dword ptr [EBX + 0x1fabc],0x3   ; 004f55e7
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004f55f1
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004f55f6
    LEA EAX,[EBX + 0x1f920]             ; 004f55f9
    PUSH EAX                            ; 004f55ff
    MOV EDX,dword ptr [0x006793d0]      ; 004f5600 | g_CEventListPtr | g_CEventListInstance
    PUSH EDX                            ; 004f5606 | g_CEventListInstance
    CALL core_event.cpp_CEventList_executeCommands_FUN_004aabe0 ; 004f5607
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004aabe0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004f560c
    MOV dword ptr [EBX + 0x2dc4],0x0    ; 004f560f
    JMP 0x004f4fc5                      ; 004f5619
        ;   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)  ; default
    LEA EDX,[EBX + 0x20]                ; 004f561e
        ;   Label: LAB_004f561e
    FLD float ptr [EDX]                 ; 004f5621
    FSUB float ptr [ECX + 0x20]         ; 004f5623
    FMUL ST0                            ; 004f5626
    FLD float ptr [EDX + 0x8]           ; 004f5628
    FSUB float ptr [ECX + 0x28]         ; 004f562b
    FMUL ST0                            ; 004f562e
    FADDP                               ; 004f5630
    FSQRT                               ; 004f5632
    FCOMP double ptr [0x0062f092]       ; 004f5634 | DOUBLE_0062f092
    FNSTSW AX                           ; 004f563a
    SAHF                                ; 004f563c
    JNC 0x004f55ce                      ; 004f563d
        ;   XREF to: 004f55ce (CONDITIONAL_JUMP)  ; LAB_004f55ce
    PUSH ECX                            ; 004f563f
    LEA EAX,[EBX + 0x20]                ; 004f5640
    PUSH EAX                            ; 004f5643
    CALL core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_005ec320 ; 004f5644
        ;   XREF to: 005ec320 (UNCONDITIONAL_CALL)  ; CWayPoint * core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_005ec320(CWayPoint * this_ptr, CWayPoint * start_waypoint)
    ADD ESP,0x8                         ; 004f5649
    MOV dword ptr [EBX + 0x1fac8],EAX   ; 004f564c
    JMP 0x004f55ce                      ; 004f5652
        ;   XREF to: 004f55ce (UNCONDITIONAL_JUMP)  ; LAB_004f55ce
    PUSH dword ptr [EBP + 0x18]         ; 004f5657
        ;   Label: LAB_004f5657
    PUSH EBX                            ; 004f565a
    CALL core_hostage.cpp_CHostage_processGrabberFlee_FUN_004f5ff0 ; 004f565b
        ;   XREF to: 004f5ff0 (UNCONDITIONAL_CALL)  ; int core_hostage.cpp_CHostage_processGrabberFlee_FUN_004f5ff0(CHostage * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f5660
    TEST EAX,EAX                        ; 004f5663
    JNZ 0x004f4fc5                      ; 004f5665
        ;   XREF to: 004f4fc5 (CONDITIONAL_JUMP)  ; default
    PUSH dword ptr [EBP + 0x18]         ; 004f566b
    PUSH EBX                            ; 004f566e
    CALL core_charactr.cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0 ; 004f566f
        ;   XREF to: 0042ede0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f5674
    TEST EAX,EAX                        ; 004f5677
    JNZ 0x004f56d0                      ; 004f5679
        ;   XREF to: 004f56d0 (CONDITIONAL_JUMP)  ; LAB_004f56d0
    LEA EAX,[EBX + 0x1fab4]             ; 004f567b
    PUSH EAX                            ; 004f5681
    MOV EAX,[0x02db87d0]                ; 004f5682 | g_LocalHeroIndex
    PUSH 0x41200000                     ; 004f5687
    MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004f568c | g_HeroActors
    PUSH 0x40a00000                     ; 004f5693
    PUSH EDX                            ; 004f5698
    PUSH EBX                            ; 004f5699
    CALL core_charactr.cpp_CCharacter_followActor_FUN_0042c5f0 ; 004f569a
        ;   XREF to: 0042c5f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_followActor_FUN_0042c5f0(CCharacter * this_ptr, CDemonActor * actor, float min_dist, float max_dist, ...)
    ADD ESP,0x14                        ; 004f569f
    MOV EAX,dword ptr [EBX + 0x1fab4]   ; 004f56a2
        ;   Label: LAB_004f56a2
    LEA EDX,[EBX + 0x158]               ; 004f56a8
    CMP EAX,0x2                         ; 004f56ae
    JNC 0x004f573b                      ; 004f56b1
        ;   XREF to: 004f573b (CONDITIONAL_JUMP)  ; LAB_004f573b
    CMP EAX,0x1                         ; 004f56b7
    JNZ 0x004f54c2                      ; 004f56ba
        ;   XREF to: 004f54c2 (CONDITIONAL_JUMP)  ; LAB_004f54c2
    PUSH EAX                            ; 004f56c0
    PUSH EAX                            ; 004f56c1
    PUSH EDX                            ; 004f56c2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f56c3
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f56c8
    JMP 0x004f4fc5                      ; 004f56cb
        ;   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBX + 0x1fab4],EAX   ; 004f56d0
        ;   Label: LAB_004f56d0
    JMP 0x004f56a2                      ; 004f56d6
        ;   XREF to: 004f56a2 (UNCONDITIONAL_JUMP)  ; LAB_004f56a2
    PUSH 0x1                            ; 004f56d8
        ;   Label: LAB_004f56d8
    PUSH 0x0                            ; 004f56da
    PUSH EDX                            ; 004f56dc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f56dd
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f56e2
    PUSH EBX                            ; 004f56e5
    PUSH 0x62ef72                       ; 004f56e6 | = "%s left behind!\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 004f56eb | g_CConsolePtr
    PUSH ECX                            ; 004f56f1 | g_CConsoleInstance
    MOV dword ptr [EBX + 0x1fabc],0x2   ; 004f56f2
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004f56fc
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004f5701
    LEA EAX,[EBX + 0x1f7f4]             ; 004f5704
    PUSH EAX                            ; 004f570a
    MOV ESI,dword ptr [0x006793d0]      ; 004f570b | g_CEventListPtr
    PUSH ESI                            ; 004f5711 | g_CEventListInstance
    CALL core_event.cpp_CEventList_executeCommands_FUN_004aabe0 ; 004f5712
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004aabe0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004f5717
    MOV dword ptr [EBX + 0x2dc4],0x0    ; 004f571a
    JMP 0x004f4fc5                      ; 004f5724
        ;   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 004f5729
        ;   Label: LAB_004f5729
    PUSH 0x2                            ; 004f572b
    PUSH EDX                            ; 004f572d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f572e
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f5733
    JMP 0x004f4fc5                      ; 004f5736
        ;   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)  ; default
    JBE 0x004f5729                      ; 004f573b
        ;   XREF to: 004f5729 (CONDITIONAL_JUMP)  ; LAB_004f5729
        ;   Label: LAB_004f573b
    CMP EAX,0x3                         ; 004f573d
    JZ 0x004f56d8                       ; 004f5740
        ;   XREF to: 004f56d8 (CONDITIONAL_JUMP)  ; LAB_004f56d8
    JMP 0x004f54c2                      ; 004f5742
        ;   XREF to: 004f54c2 (UNCONDITIONAL_JUMP)  ; LAB_004f54c2
    PUSH dword ptr [EBP + 0x18]         ; 004f5747
        ;   Label: caseD_2
    PUSH EBX                            ; 004f574a
    CALL core_hostage.cpp_CHostage_processGrabberFlee_FUN_004f5ff0 ; 004f574b
        ;   XREF to: 004f5ff0 (UNCONDITIONAL_CALL)  ; int core_hostage.cpp_CHostage_processGrabberFlee_FUN_004f5ff0(CHostage * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f5750
    TEST EAX,EAX                        ; 004f5753
    JNZ 0x004f4fc5                      ; 004f5755
        ;   XREF to: 004f4fc5 (CONDITIONAL_JUMP)  ; default
    LEA EAX,[EBX + 0x1fab4]             ; 004f575b
    PUSH EAX                            ; 004f5761
    MOV EAX,[0x02db87d0]                ; 004f5762 | g_LocalHeroIndex
    PUSH 0x41200000                     ; 004f5767
    MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004f576c | g_HeroActors
    PUSH 0x40800000                     ; 004f5773
    PUSH EDX                            ; 004f5778
    PUSH EBX                            ; 004f5779
    CALL core_charactr.cpp_CCharacter_followActor_FUN_0042c5f0 ; 004f577a
        ;   XREF to: 0042c5f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_followActor_FUN_0042c5f0(CCharacter * this_ptr, CDemonActor * actor, float min_dist, float max_dist, ...)
    ADD ESP,0x14                        ; 004f577f
    XOR ECX,ECX                         ; 004f5782
    MOV EAX,dword ptr [EBX + 0x1fab4]   ; 004f5784
    MOV dword ptr [ESP + 0x170],ECX     ; 004f578a
    CMP EAX,0x1                         ; 004f5791
    JNC 0x004f57ea                      ; 004f5794
        ;   XREF to: 004f57ea (CONDITIONAL_JUMP)  ; LAB_004f57ea
    TEST EAX,EAX                        ; 004f5796
    JNZ 0x004f57f1                      ; 004f5798
        ;   XREF to: 004f57f1 (CONDITIONAL_JUMP)  ; LAB_004f57f1
    PUSH 0x1                            ; 004f579a
    PUSH ECX                            ; 004f579c
    PUSH ESI                            ; 004f579d
        ;   Label: LAB_004f579d
    MOV dword ptr [EBX + 0x1fabc],0x1   ; 004f579e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f57a8
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f57ad
    PUSH EBX                            ; 004f57b0
        ;   Label: LAB_004f57b0
    PUSH 0x62ef83                       ; 004f57b1 | = "%s was left behind, but now can follo..."
    MOV EAX,[0x0066e8e0]                ; 004f57b6 | g_CConsolePtr
    PUSH EAX                            ; 004f57bb | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004f57bc
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004f57c1
    LEA EAX,[EBX + 0x1f858]             ; 004f57c4
    PUSH EAX                            ; 004f57ca
    MOV EDX,dword ptr [0x006793d0]      ; 004f57cb | g_CEventListPtr | g_CEventListInstance
    PUSH EDX                            ; 004f57d1 | g_CEventListInstance
    CALL core_event.cpp_CEventList_executeCommands_FUN_004aabe0 ; 004f57d2
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004aabe0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004f57d7
    JMP 0x004f4fc5                      ; 004f57da
        ;   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 004f57df
        ;   Label: LAB_004f57df
    PUSH 0x1                            ; 004f57e1
    JMP 0x004f579d                      ; 004f57e3
        ;   XREF to: 004f579d (UNCONDITIONAL_JUMP)  ; LAB_004f579d
    PUSH 0x1                            ; 004f57e5
        ;   Label: LAB_004f57e5
    PUSH EAX                            ; 004f57e7
    JMP 0x004f579d                      ; 004f57e8
        ;   XREF to: 004f579d (UNCONDITIONAL_JUMP)  ; LAB_004f579d
    JBE 0x004f57df                      ; 004f57ea
        ;   XREF to: 004f57df (CONDITIONAL_JUMP)  ; LAB_004f57df
        ;   Label: LAB_004f57ea
    CMP EAX,0x2                         ; 004f57ec
    JZ 0x004f57e5                       ; 004f57ef
        ;   XREF to: 004f57e5 (CONDITIONAL_JUMP)  ; LAB_004f57e5
    PUSH 0x1                            ; 004f57f1
        ;   Label: LAB_004f57f1
    PUSH 0x0                            ; 004f57f3
    LEA EAX,[EBX + 0x158]               ; 004f57f5
    PUSH EAX                            ; 004f57fb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f57fc
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f5801
    CMP dword ptr [ESP + 0x170],0x0     ; 004f5804
    JNZ 0x004f57b0                      ; 004f580c
        ;   XREF to: 004f57b0 (CONDITIONAL_JUMP)  ; LAB_004f57b0
    JMP 0x004f4fc5                      ; 004f580e
        ;   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBX + 0x1fac8],0x0   ; 004f5813
        ;   Label: caseD_3
    JNZ 0x004f5959                      ; 004f581a
        ;   XREF to: 004f5959 (CONDITIONAL_JUMP)  ; LAB_004f5959
    PUSH EBX                            ; 004f5820
    PUSH 0x62efb2                       ; 004f5821 | = "%s doesn't know next waypoint going h..."
    MOV ECX,dword ptr [0x0066e8e0]      ; 004f5826 | g_CConsolePtr
    PUSH ECX                            ; 004f582c | g_CConsoleInstance
    MOV dword ptr [EBX + 0x1fabc],0x2   ; 004f582d
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004f5837
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004f583c
    JMP 0x004f4fc5                      ; 004f583f
        ;   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)  ; default
    MOV EDX,dword ptr [EBX + 0x1fac8]   ; 004f5844
        ;   Label: caseD_0
    PUSH EDX                            ; 004f584a
    PUSH EBX                            ; 004f584b
    PUSH 0x62efe7                       ; 004f584c | = "%s reached waypoint %s!\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 004f5851 | g_CConsolePtr
    PUSH ECX                            ; 004f5857 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004f5858
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    MOV EAX,dword ptr [EBX + 0x1fac8]   ; 004f585d
    MOV ESI,dword ptr [EBX + 0x1fac0]   ; 004f5863
    ADD ESP,0x10                        ; 004f5869
    CMP EAX,ESI                         ; 004f586c
    JNZ 0x004f589e                      ; 004f586e
        ;   XREF to: 004f589e (CONDITIONAL_JUMP)  ; LAB_004f589e
    PUSH EBX                            ; 004f5870
    PUSH 0x62f000                       ; 004f5871 | = "%s rescued and taken home!\n"
    MOV EDX,dword ptr [0x0066e8e0]      ; 004f5876 | g_CConsolePtr
    PUSH EDX                            ; 004f587c | g_CConsoleInstance
    MOV dword ptr [EBX + 0x1fabc],0x4   ; 004f587d
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004f5887
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004f588c
    MOV dword ptr [EBX + 0x1fac8],0x0   ; 004f588f
    JMP 0x004f4fc5                      ; 004f5899
        ;   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)  ; default
    PUSH ESI                            ; 004f589e
        ;   Label: LAB_004f589e
    LEA EAX,[EBX + 0x20]                ; 004f589f
    PUSH EAX                            ; 004f58a2
    CALL core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_005ec320 ; 004f58a3
        ;   XREF to: 005ec320 (UNCONDITIONAL_CALL)  ; CWayPoint * core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_005ec320(CWayPoint * this_ptr, CWayPoint * start_waypoint)
    ADD ESP,0x8                         ; 004f58a8
    MOV dword ptr [EBX + 0x1fac8],EAX   ; 004f58ab
    JMP 0x004f4fc5                      ; 004f58b1
        ;   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 004f58b6
        ;   Label: caseD_3
    PUSH 0x0                            ; 004f58b8
    PUSH ESI                            ; 004f58ba
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f58bb
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f58c0
    PUSH EBX                            ; 004f58c3
    PUSH 0x62f01c                       ; 004f58c4 | = "%s got confused going home.  Help me!\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 004f58c9 | g_CConsolePtr
    PUSH ECX                            ; 004f58cf | g_CConsoleInstance
    MOV dword ptr [EBX + 0x1fabc],0x2   ; 004f58d0
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004f58da
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004f58df
    PUSH 0x1                            ; 004f58e2
    PUSH 0x0                            ; 004f58e4
    PUSH ESI                            ; 004f58e6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f58e7
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f58ec
    LEA EAX,[EBX + 0x1f984]             ; 004f58ef
    PUSH EAX                            ; 004f58f5
    MOV ESI,dword ptr [0x006793d0]      ; 004f58f6 | g_CEventListPtr
    PUSH ESI                            ; 004f58fc | g_CEventListInstance
    CALL core_event.cpp_CEventList_executeCommands_FUN_004aabe0 ; 004f58fd
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004aabe0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004f5902
    PUSH 0x1                            ; 004f5905
    LEA EAX,[EBX + 0x1f770]             ; 004f5907
    PUSH EAX                            ; 004f590d
    MOV EAX,[0x006793d0]                ; 004f590e | g_CEventListPtr | g_CEventListInstance
    PUSH EAX                            ; 004f5913 | g_CEventListInstance
    CALL core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330 ; 004f5914
        ;   XREF to: 004b0330 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330(CEventList * this_ptr, char * name, int add_flag)
    MOV dword ptr [EBX + 0x1fabc],0x4   ; 004f5919
    ADD ESP,0xc                         ; 004f5923
    MOV dword ptr [EBX + 0x1fac8],0x0   ; 004f5926
    JMP 0x004f4fc5                      ; 004f5930
        ;   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 004f5935
        ;   Label: caseD_1
    PUSH 0x1                            ; 004f5937
    PUSH ESI                            ; 004f5939
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f593a
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f593f
    JMP 0x004f4fc5                      ; 004f5942
        ;   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 004f5947
        ;   Label: caseD_2
    PUSH 0x2                            ; 004f5949
    PUSH ESI                            ; 004f594b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f594c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f5951
    JMP 0x004f4fc5                      ; 004f5954
        ;   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EBX + 0x1fab4]             ; 004f5959
        ;   Label: LAB_004f5959
    PUSH EAX                            ; 004f595f
    PUSH 0xbf800000                     ; 004f5960
    MOV EDX,dword ptr [EBX + 0x1fac8]   ; 004f5965
    PUSH 0x3f800000                     ; 004f596b
    PUSH EDX                            ; 004f5970
    PUSH EBX                            ; 004f5971
    CALL core_charactr.cpp_CCharacter_followActor_FUN_0042c5f0 ; 004f5972
        ;   XREF to: 0042c5f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_followActor_FUN_0042c5f0(CCharacter * this_ptr, CDemonActor * actor, float min_dist, float max_dist, ...)
    MOV EAX,dword ptr [EBX + 0x1fab4]   ; 004f5977
    ADD ESP,0x14                        ; 004f597d
    CMP EAX,0x3                         ; 004f5980
    JA 0x004f4fc5                       ; 004f5983
        ;   XREF to: 004f4fc5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4f4ba8]  ; 004f5989 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EDX,0x1                         ; 004f5990
        ;   Label: caseD_4
    MOV ECX,dword ptr [EBX + 0x1fac4]   ; 004f5995
    MOV dword ptr [ESP + 0x194],EDX     ; 004f599b
    TEST ECX,ECX                        ; 004f59a2
    JZ 0x004f4fc5                       ; 004f59a4
        ;   XREF to: 004f4fc5 (CONDITIONAL_JUMP)  ; default
    FLD float ptr [EBX + 0x2434]        ; 004f59aa
    FLD float ptr [EBP + 0x18]          ; 004f59b0
    FMUL double ptr [0x0062f072]        ; 004f59b3 | DOUBLE_0062f072
    FSTP double ptr [ESP]               ; 004f59b9
    FCOMP double ptr [ESP]              ; 004f59bc
    FNSTSW AX                           ; 004f59bf
    SAHF                                ; 004f59c1
    JNC 0x004f59cd                      ; 004f59c2
        ;   XREF to: 004f59cd (CONDITIONAL_JUMP)  ; LAB_004f59cd
    FLD double ptr [ESP]                ; 004f59c4
    FSTP float ptr [EBX + 0x2434]       ; 004f59c7
    MOV EAX,dword ptr [EBX + 0x1fac4]   ; 004f59cd
        ;   Label: LAB_004f59cd
    ADD EAX,0x20                        ; 004f59d3
    PUSH EAX                            ; 004f59d6
    LEA EAX,[ESP + 0x138]               ; 004f59d7
    PUSH EAX                            ; 004f59de
    PUSH EBX                            ; 004f59df
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004f59e0
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    LEA EDX,[EBX + 0x241c]              ; 004f59e5
    ADD ESP,0xc                         ; 004f59eb
    CMP EDX,EAX                         ; 004f59ee
    JZ 0x004f5a02                       ; 004f59f0
        ;   XREF to: 004f5a02 (CONDITIONAL_JUMP)  ; LAB_004f5a02
    MOV ECX,dword ptr [EAX]             ; 004f59f2
    MOV dword ptr [EDX],ECX             ; 004f59f4
    MOV ECX,dword ptr [EAX + 0x4]       ; 004f59f6
    MOV dword ptr [EDX + 0x4],ECX       ; 004f59f9
    MOV ECX,dword ptr [EAX + 0x8]       ; 004f59fc
    MOV dword ptr [EDX + 0x8],ECX       ; 004f59ff | DAT_00002424
    LEA EDX,[EBX + 0x241c]              ; 004f5a02
        ;   Label: LAB_004f5a02
    MOV EAX,dword ptr [EDX]             ; 004f5a08
    MOV dword ptr [ESP + 0x11c],EAX     ; 004f5a0a
    LEA EAX,[EDX + 0x4]                 ; 004f5a11
    MOV EAX,dword ptr [EAX]             ; 004f5a14
    FLD float ptr [ESP + 0x11c]         ; 004f5a16
    MOV dword ptr [ESP + 0x120],EAX     ; 004f5a1d
    LEA EAX,[EDX + 0x8]                 ; 004f5a24
    FMUL float ptr [ESP + 0x11c]        ; 004f5a27
    MOV EAX,dword ptr [EAX]             ; 004f5a2e | DAT_00002424
    MOV dword ptr [ESP + 0x124],EAX     ; 004f5a30
    FLD float ptr [ESP + 0x124]         ; 004f5a37
    FMUL ST0                            ; 004f5a3e
    FADDP                               ; 004f5a40
    FSQRT                               ; 004f5a42
    XOR ESI,ESI                         ; 004f5a44
    MOV dword ptr [ESP + 0x120],ESI     ; 004f5a46
    FSTP float ptr [ESP + 0x18c]        ; 004f5a4d
    MOV EAX,dword ptr [ESP + 0x18c]     ; 004f5a54
    FLD float ptr [ESP + 0x18c]         ; 004f5a5b
    MOV dword ptr [ESP + 0x28],EAX      ; 004f5a62
    FCOMP float ptr [EBX + 0x2434]      ; 004f5a66
    FNSTSW AX                           ; 004f5a6c
    SAHF                                ; 004f5a6e
    JBE 0x004f5aae                      ; 004f5a6f
        ;   XREF to: 004f5aae (CONDITIONAL_JUMP)  ; LAB_004f5aae
    FLD float ptr [EBX + 0x2434]        ; 004f5a71
    FDIV float ptr [ESP + 0x18c]        ; 004f5a77
    FLD float ptr [EDX]                 ; 004f5a7e
    FXCH                                ; 004f5a80
    FSTP float ptr [ESP + 0x190]        ; 004f5a82
    FMUL float ptr [ESP + 0x190]        ; 004f5a89
    FLD float ptr [EDX + 0x4]           ; 004f5a90
    FMUL float ptr [ESP + 0x190]        ; 004f5a93
    FLD float ptr [EDX + 0x8]           ; 004f5a9a | DAT_00002424
    FMUL float ptr [ESP + 0x190]        ; 004f5a9d
    FXCH ST2                            ; 004f5aa4
    FSTP float ptr [EDX]                ; 004f5aa6
    FSTP float ptr [EDX + 0x4]          ; 004f5aa8
    FSTP float ptr [EDX + 0x8]          ; 004f5aab | DAT_00002424
    LEA EAX,[EBX + 0x241c]              ; 004f5aae
        ;   Label: LAB_004f5aae
    PUSH EAX                            ; 004f5ab4
    LEA EAX,[ESP + 0x78]                ; 004f5ab5
    PUSH EAX                            ; 004f5ab9
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004f5aba
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 004f5abf
    FLD float ptr [ESP + 0x28]          ; 004f5ac2
    FMUL double ptr [0x0062f07a]        ; 004f5ac6 | DOUBLE_0062f07a
    FLD1                                ; 004f5acc
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f5ace
    MOV dword ptr [EBX + 0x2418],EDX    ; 004f5ad1
    FXCH                                ; 004f5ad7
    FSTP double ptr [ESP + 0x18]        ; 004f5ad9
    FCOMP double ptr [ESP + 0x18]       ; 004f5add
    FNSTSW AX                           ; 004f5ae1
    SAHF                                ; 004f5ae3
    JBE 0x004f5b44                      ; 004f5ae4
        ;   XREF to: 004f5b44 (CONDITIONAL_JUMP)  ; LAB_004f5b44
    MOV EAX,dword ptr [EBX + 0x1fac4]   ; 004f5ae6
    FLD float ptr [EAX + 0x34]          ; 004f5aec
    FSUB float ptr [EBX + 0x34]         ; 004f5aef
    SUB ESP,0x4                         ; 004f5af2
    FSTP float ptr [ESP]                ; 004f5af5
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004f5af8
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x1ac],EAX     ; 004f5afd
    FLD float ptr [ESP + 0x1ac]         ; 004f5b04
    ADD ESP,0x4                         ; 004f5b0b
    FSUB float ptr [EBX + 0x2418]       ; 004f5b0e
    SUB ESP,0x4                         ; 004f5b14
    FSTP float ptr [ESP]                ; 004f5b17
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004f5b1a
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x1ac],EAX     ; 004f5b1f
    FLD float ptr [ESP + 0x1ac]         ; 004f5b26
    ADD ESP,0x4                         ; 004f5b2d
    FLD1                                ; 004f5b30
    FSUB double ptr [ESP + 0x18]        ; 004f5b32
    FMULP                               ; 004f5b36
    FADD float ptr [EBX + 0x2418]       ; 004f5b38
    FSTP float ptr [EBX + 0x2418]       ; 004f5b3e
    PUSH dword ptr [EBX + 0x2418]       ; 004f5b44
        ;   Label: LAB_004f5b44
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004f5b4a
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x1ac],EAX     ; 004f5b4f
    FLD float ptr [ESP + 0x1ac]         ; 004f5b56
    ADD ESP,0x4                         ; 004f5b5d
    FSTP float ptr [EBX + 0x2418]       ; 004f5b60
    FLD float ptr [ESP + 0x28]          ; 004f5b66
    FCOMP double ptr [0x0062f082]       ; 004f5b6a | DOUBLE_0062f082
    FNSTSW AX                           ; 004f5b70
    SAHF                                ; 004f5b72
    JNC 0x004f5beb                      ; 004f5b73
        ;   XREF to: 004f5beb (CONDITIONAL_JUMP)  ; LAB_004f5beb
    FLD float ptr [EBX + 0x2418]        ; 004f5b75
    FABS                                ; 004f5b7b
    FCOMP double ptr [0x0062f08a]       ; 004f5b7d | DOUBLE_0062f08a
    FNSTSW AX                           ; 004f5b83
    SAHF                                ; 004f5b85
    JNC 0x004f5beb                      ; 004f5b86
        ;   XREF to: 004f5beb (CONDITIONAL_JUMP)  ; LAB_004f5beb
    MOV EAX,dword ptr [EBX + 0x1fab8]   ; 004f5b88
    TEST EAX,EAX                        ; 004f5b8e
    JNZ 0x004f5c4d                      ; 004f5b90
        ;   XREF to: 004f5c4d (CONDITIONAL_JUMP)  ; LAB_004f5c4d
    PUSH 0x1                            ; 004f5b96
        ;   Label: LAB_004f5b96
    PUSH 0x0                            ; 004f5b98
    LEA EAX,[EBX + 0x158]               ; 004f5b9a
    PUSH EAX                            ; 004f5ba0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f5ba1
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f5ba6
    MOV dword ptr [EBX + 0x1fabc],0x5   ; 004f5ba9
    LEA EAX,[EBX + 0x1f984]             ; 004f5bb3
        ;   Label: LAB_004f5bb3
    PUSH EAX                            ; 004f5bb9
    MOV ECX,dword ptr [0x006793d0]      ; 004f5bba | g_CEventListPtr | g_CEventListInstance
    PUSH ECX                            ; 004f5bc0 | g_CEventListInstance
    CALL core_event.cpp_CEventList_executeCommands_FUN_004aabe0 ; 004f5bc1
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004aabe0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004f5bc6
    PUSH 0x1                            ; 004f5bc9
    LEA EAX,[EBX + 0x1f770]             ; 004f5bcb
    PUSH EAX                            ; 004f5bd1
    MOV ESI,dword ptr [0x006793d0]      ; 004f5bd2 | g_CEventListPtr
    PUSH ESI                            ; 004f5bd8 | g_CEventListInstance
    CALL core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330 ; 004f5bd9
        ;   XREF to: 004b0330 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330(CEventList * this_ptr, char * name, int add_flag)
    ADD ESP,0xc                         ; 004f5bde
    MOV dword ptr [EBX + 0x1fac4],0x0   ; 004f5be1
    FLD float ptr [EBP + 0x18]          ; 004f5beb
        ;   Label: LAB_004f5beb
    FMUL double ptr [0x0062f06a]        ; 004f5bee | DOUBLE_0062f06a
    FLD float ptr [EBX + 0x2418]        ; 004f5bf4
    FXCH                                ; 004f5bfa
    FST float ptr [ESP + 0x184]         ; 004f5bfc
    FCHS                                ; 004f5c03
    FSTP float ptr [ESP + 0x180]        ; 004f5c05
    FCOMP float ptr [ESP + 0x180]       ; 004f5c0c
    FNSTSW AX                           ; 004f5c13
    SAHF                                ; 004f5c15
    JNC 0x004f5c25                      ; 004f5c16
        ;   XREF to: 004f5c25 (CONDITIONAL_JUMP)  ; LAB_004f5c25
    MOV EAX,dword ptr [ESP + 0x180]     ; 004f5c18
    MOV dword ptr [EBX + 0x2418],EAX    ; 004f5c1f
    FLD float ptr [EBX + 0x2418]        ; 004f5c25
        ;   Label: LAB_004f5c25
    FCOMP float ptr [ESP + 0x184]       ; 004f5c2b
    FNSTSW AX                           ; 004f5c32
    SAHF                                ; 004f5c34
    JBE 0x004f4fc5                      ; 004f5c35
        ;   XREF to: 004f4fc5 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [ESP + 0x184]     ; 004f5c3b
    MOV dword ptr [EBX + 0x2418],EAX    ; 004f5c42
    JMP 0x004f4fc5                      ; 004f5c48
        ;   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)  ; default
    CMP EAX,0x4                         ; 004f5c4d
        ;   Label: LAB_004f5c4d
    JZ 0x004f5b96                       ; 004f5c50
        ;   XREF to: 004f5b96 (CONDITIONAL_JUMP)  ; LAB_004f5b96
    PUSH 0x1                            ; 004f5c56
    PUSH 0xa                            ; 004f5c58
    LEA EAX,[EBX + 0x158]               ; 004f5c5a
    PUSH EAX                            ; 004f5c60
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f5c61
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f5c66
    JMP 0x004f5bb3                      ; 004f5c69
        ;   XREF to: 004f5bb3 (UNCONDITIONAL_JUMP)  ; LAB_004f5bb3
    MOV EAX,dword ptr [EBX + 0x1fabc]   ; 004f5c6e
        ;   Label: LAB_004f5c6e
    CMP EAX,0x5                         ; 004f5c74
    JA 0x004f4fc5                       ; 004f5c77
        ;   XREF to: 004f4fc5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4f4bb8]  ; 004f5c7d | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    LEA EAX,[EBX + 0x158]               ; 004f5c84
        ;   Label: LAB_004f5c84
    PUSH EAX                            ; 004f5c8a
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f5c8b
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f5c90
    ADD ESP,0x4                         ; 004f5c93
    CMP EAX,0x8                         ; 004f5c96
    JZ 0x004f5e1f                       ; 004f5c99
        ;   XREF to: 004f5e1f (CONDITIONAL_JUMP)  ; LAB_004f5e1f
    TEST EAX,EAX                        ; 004f5c9f
    JZ 0x004f5e1f                       ; 004f5ca1
        ;   XREF to: 004f5e1f (CONDITIONAL_JUMP)  ; LAB_004f5e1f
    CMP EAX,0xd                         ; 004f5ca7
    JZ 0x004f5e1f                       ; 004f5caa
        ;   XREF to: 004f5e1f (CONDITIONAL_JUMP)  ; LAB_004f5e1f
    CMP EAX,0xa                         ; 004f5cb0
    JZ 0x004f5e1f                       ; 004f5cb3
        ;   XREF to: 004f5e1f (CONDITIONAL_JUMP)  ; LAB_004f5e1f
    FLD float ptr [EBP + 0x18]          ; 004f5cb9
        ;   Label: LAB_004f5cb9
    FST double ptr [ESP + 0x8]          ; 004f5cbc
    FMUL double ptr [0x0062f0ba]        ; 004f5cc0 | DOUBLE_0062f0ba
    FLD float ptr [EBX + 0x242c]        ; 004f5cc6
    FXCH                                ; 004f5ccc
    FSUBR ST0,ST1                       ; 004f5cce
    LEA ESI,[EBX + 0x2428]              ; 004f5cd0
    FSTP ST1                            ; 004f5cd6
    FSTP float ptr [EBX + 0x242c]       ; 004f5cd8
    FLD float ptr [ESI]                 ; 004f5cde
    FMUL float ptr [EBP + 0x18]         ; 004f5ce0
    FSTP float ptr [ESP + 0xbc]         ; 004f5ce3
    FLD float ptr [ESI + 0x4]           ; 004f5cea
    FMUL float ptr [EBP + 0x18]         ; 004f5ced
    LEA EAX,[EBX + 0x241c]              ; 004f5cf0
    FSTP float ptr [ESP + 0xc0]         ; 004f5cf6
    FLD float ptr [ESI + 0x8]           ; 004f5cfd
    FMUL float ptr [EBP + 0x18]         ; 004f5d00
    LEA EDX,[EBX + 0x23ac]              ; 004f5d03
    FLD float ptr [ESP + 0xbc]          ; 004f5d09
    FXCH                                ; 004f5d10
    FSTP float ptr [ESP + 0xc4]         ; 004f5d12
    FADD float ptr [EAX]                ; 004f5d19
    FLD float ptr [ESP + 0xc0]          ; 004f5d1b
    FXCH                                ; 004f5d22
    FSTP float ptr [ESP + 0x98]         ; 004f5d24
    FADD float ptr [EAX + 0x4]          ; 004f5d2b
    FLD float ptr [ESP + 0xc4]          ; 004f5d2e
    FXCH                                ; 004f5d35
    FSTP float ptr [ESP + 0x9c]         ; 004f5d37
    FADD float ptr [EAX + 0x8]          ; 004f5d3e | DAT_00002424
    FLD float ptr [ESP + 0x98]          ; 004f5d41
    FXCH                                ; 004f5d48
    FSTP float ptr [ESP + 0xa0]         ; 004f5d4a
    FADD float ptr [EDX]                ; 004f5d51
    FLD float ptr [ESP + 0x9c]          ; 004f5d53
    FXCH                                ; 004f5d5a
    FSTP float ptr [ESP + 0x110]        ; 004f5d5c
    FADD float ptr [EDX + 0x4]          ; 004f5d63
    FLD float ptr [ESP + 0xa0]          ; 004f5d66
    FXCH                                ; 004f5d6d
    FSTP float ptr [ESP + 0x114]        ; 004f5d6f
    FADD float ptr [EDX + 0x8]          ; 004f5d76
    FSTP float ptr [ESP + 0x118]        ; 004f5d79
    MOV dword ptr [EAX + 0x8],0x0       ; 004f5d80 | DAT_00002424
    MOV ECX,dword ptr [EAX + 0x8]       ; 004f5d87 | DAT_00002424
    MOV dword ptr [EAX + 0x4],ECX       ; 004f5d8a
    MOV ECX,dword ptr [EAX + 0x4]       ; 004f5d8d
    MOV dword ptr [EAX],ECX             ; 004f5d90
    MOV dword ptr [EDX + 0x8],0x0       ; 004f5d92
    LEA ESI,[EBX + 0x20]                ; 004f5d99
    MOV EAX,dword ptr [EDX + 0x8]       ; 004f5d9c
    MOV dword ptr [EDX + 0x4],EAX       ; 004f5d9f
    MOV EAX,dword ptr [EDX + 0x4]       ; 004f5da2
    MOV dword ptr [EDX],EAX             ; 004f5da5
    MOV EAX,dword ptr [ESI]             ; 004f5da7
    MOV dword ptr [ESP + 0xc8],EAX      ; 004f5da9
    LEA EAX,[ESI + 0x4]                 ; 004f5db0
    MOV EAX,dword ptr [EAX]             ; 004f5db3
    MOV dword ptr [ESP + 0xcc],EAX      ; 004f5db5
    LEA EAX,[ESI + 0x8]                 ; 004f5dbc
    MOV EAX,dword ptr [EAX]             ; 004f5dbf
    MOV dword ptr [ESP + 0xd0],EAX      ; 004f5dc1
    LEA EAX,[ESP + 0x110]               ; 004f5dc8
    PUSH EAX                            ; 004f5dcf
    PUSH EBX                            ; 004f5dd0
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 004f5dd1
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004f5dd6
    FLD float ptr [EBX + 0x2dd4]        ; 004f5dd9
    FADD float ptr [EBP + 0x18]         ; 004f5ddf
    FSTP float ptr [EBX + 0x2dd4]       ; 004f5de2
    FLD float ptr [ESP + 0x114]         ; 004f5de8
    FMUL ST0                            ; 004f5def
    FLD float ptr [ESP + 0x110]         ; 004f5df1
    FMUL ST0                            ; 004f5df8
    FADDP                               ; 004f5dfa
    FLD float ptr [ESP + 0x118]         ; 004f5dfc
    FMUL ST0                            ; 004f5e03
    FADDP                               ; 004f5e05
    FSQRT                               ; 004f5e07
    FLD double ptr [ESP + 0x8]          ; 004f5e09
    FMUL double ptr [0x0062f0c2]        ; 004f5e0d | DOUBLE_0062f0c2
    FCOMPP                              ; 004f5e13
    FNSTSW AX                           ; 004f5e15
    SAHF                                ; 004f5e17
    JBE 0x004f5e38                      ; 004f5e18
        ;   XREF to: 004f5e38 (CONDITIONAL_JUMP)  ; LAB_004f5e38
    JMP 0x004f50e7                      ; 004f5e1a
        ;   XREF to: 004f50e7 (UNCONDITIONAL_JUMP)  ; LAB_004f50e7
    MOV ECX,dword ptr [EBX + 0xdc]      ; 004f5e1f
        ;   Label: LAB_004f5e1f
    TEST ECX,ECX                        ; 004f5e25
    JNZ 0x004f5cb9                      ; 004f5e27
        ;   XREF to: 004f5cb9 (CONDITIONAL_JUMP)  ; LAB_004f5cb9
    MOV dword ptr [EBX + 0x2dd4],ECX    ; 004f5e2d
    JMP 0x004f50f1                      ; 004f5e33
        ;   XREF to: 004f50f1 (UNCONDITIONAL_JUMP)  ; LAB_004f50f1
    FLD float ptr [ESI]                 ; 004f5e38
        ;   Label: LAB_004f5e38
    FSUB float ptr [ESP + 0xc8]         ; 004f5e3a
    FMUL ST0                            ; 004f5e41
    FLD float ptr [ESI + 0x4]           ; 004f5e43
    FSUB float ptr [ESP + 0xcc]         ; 004f5e46
    FMUL ST0                            ; 004f5e4d
    FLD float ptr [ESI + 0x8]           ; 004f5e4f
    FXCH                                ; 004f5e52
    FADDP ST2,ST0                       ; 004f5e54
    FSUB float ptr [ESP + 0xd0]         ; 004f5e56
    FMUL ST0                            ; 004f5e5d
    FADDP                               ; 004f5e5f
    FSQRT                               ; 004f5e61
    FLD double ptr [ESP + 0x8]          ; 004f5e63
    FMUL double ptr [0x0062f0ca]        ; 004f5e67 | DOUBLE_0062f0ca
    FCOMPP                              ; 004f5e6d
    FNSTSW AX                           ; 004f5e6f
    SAHF                                ; 004f5e71
    JC 0x004f50e7                       ; 004f5e72
        ;   XREF to: 004f50e7 (CONDITIONAL_JUMP)  ; LAB_004f50e7
    JMP 0x004f50f1                      ; 004f5e78
        ;   XREF to: 004f50f1 (UNCONDITIONAL_JUMP)  ; LAB_004f50f1
    CMP dword ptr [ESP + 0x174],0x0     ; 004f5e7d
        ;   Label: LAB_004f5e7d
    JNZ 0x004f5173                      ; 004f5e85
        ;   XREF to: 004f5173 (CONDITIONAL_JUMP)  ; LAB_004f5173
    FLD float ptr [EBP + 0x18]          ; 004f5e8b
    FDIV float ptr [ESP + 0x178]        ; 004f5e8e
    FSUBR float ptr [EBX + 0x1fae4]     ; 004f5e95
    JMP 0x004f5183                      ; 004f5e9b
        ;   XREF to: 004f5183 (UNCONDITIONAL_JUMP)  ; LAB_004f5183
    FLD1                                ; 004f5ea0
        ;   Label: LAB_004f5ea0
    FCOMP double ptr [ESP + 0x10]       ; 004f5ea2
    FNSTSW AX                           ; 004f5ea6
    SAHF                                ; 004f5ea8
    JNC 0x004f5eb5                      ; 004f5ea9
        ;   XREF to: 004f5eb5 (CONDITIONAL_JUMP)  ; LAB_004f5eb5
    MOV dword ptr [EBX + 0x1fae4],0x3f800000 ; 004f5eab
    FLD float ptr [EBX + 0x1fae0]       ; 004f5eb5
        ;   Label: LAB_004f5eb5
    FMUL double ptr [0x0062f0d2]        ; 004f5ebb | DOUBLE_0062f0d2
    SUB ESP,0x4                         ; 004f5ec1
    FADD double ptr [0x0062f0da]        ; 004f5ec4 | DOUBLE_0062f0da
    MOV EAX,[0x02db8888]                ; 004f5eca | INT_02db8888
    FSTP float ptr [ESP]                ; 004f5ecf
    PUSH EAX                            ; 004f5ed2
    LEA ESI,[EBX + 0x158]               ; 004f5ed3
    PUSH ESI                            ; 004f5ed9
    CALL core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0 ; 004f5eda
        ;   XREF to: 0052e3a0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0(CMotionController * this_ptr, int motion_index, float marker_position)
    MOV dword ptr [ESP + 0x1b4],EAX     ; 004f5edf
    FLD float ptr [ESP + 0x1b4]         ; 004f5ee6
    ADD ESP,0xc                         ; 004f5eed
    PUSH 0x59ddb0                       ; 004f5ef0
    MOV EDX,dword ptr [EBX + 0x1facc]   ; 004f5ef5
    PUSH EDX                            ; 004f5efb
    MOV ECX,dword ptr [0x02db8888]      ; 004f5efc | INT_02db8888
    PUSH dword ptr [EBX + 0x1fae4]      ; 004f5f02
    FSTP float ptr [ESP + 0x174]        ; 004f5f08
    PUSH dword ptr [ESP + 0x174]        ; 004f5f0f
    PUSH ECX                            ; 004f5f16
    PUSH ESI                            ; 004f5f17
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 ; 004f5f18
        ;   XREF to: 0059eb50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    ADD ESP,0x18                        ; 004f5f1d
    PUSH 0x59ddb0                       ; 004f5f20
    MOV EAX,dword ptr [EBX + 0x1fad0]   ; 004f5f25
    PUSH EAX                            ; 004f5f2b
    PUSH dword ptr [EBX + 0x1fae4]      ; 004f5f2c
    MOV EDX,dword ptr [0x02db8888]      ; 004f5f32 | INT_02db8888
    PUSH dword ptr [ESP + 0x174]        ; 004f5f38
    PUSH EDX                            ; 004f5f3f
    PUSH ESI                            ; 004f5f40
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 ; 004f5f41
        ;   XREF to: 0059eb50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    FLD float ptr [EBX + 0x1fae4]       ; 004f5f46
    FLD1                                ; 004f5f4c
    ADD ESP,0x18                        ; 004f5f4e
    FCOMPP                              ; 004f5f51
    FNSTSW AX                           ; 004f5f53
    SAHF                                ; 004f5f55
    JA 0x004f51b6                       ; 004f5f56
        ;   XREF to: 004f51b6 (CONDITIONAL_JUMP)  ; LAB_004f51b6
    FLD float ptr [EBX + 0x1fae0]       ; 004f5f5c
    FLDZ                                ; 004f5f62
    FCOMPP                              ; 004f5f64
    FNSTSW AX                           ; 004f5f66
    SAHF                                ; 004f5f68
    JNC 0x004f51b6                      ; 004f5f69
        ;   XREF to: 004f51b6 (CONDITIONAL_JUMP)  ; LAB_004f51b6
    FLD float ptr [EBP + 0x18]          ; 004f5f6f
    FDIV float ptr [ESP + 0x16c]        ; 004f5f72
    FADD float ptr [EBX + 0x1fae0]      ; 004f5f79
    FST float ptr [EBX + 0x1fae0]       ; 004f5f7f
    FLD1                                ; 004f5f85
    FCOMPP                              ; 004f5f87
    FNSTSW AX                           ; 004f5f89
    SAHF                                ; 004f5f8b
    JNC 0x004f51b6                      ; 004f5f8c
        ;   XREF to: 004f51b6 (CONDITIONAL_JUMP)  ; LAB_004f51b6
    MOV dword ptr [EBX + 0x1fae0],0x3f800000 ; 004f5f92
    JMP 0x004f51b6                      ; 004f5f9c
        ;   XREF to: 004f51b6 (UNCONDITIONAL_JUMP)  ; LAB_004f51b6
    MOV EAX,[0x03f95d78]                ; 004f5fa1 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004f5fa1
    PUSH EAX                            ; 004f5fa6
    MOV EDX,dword ptr [EBX + 0x24f8]    ; 004f5fa7
    PUSH EDX                            ; 004f5fad
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f5fae
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f5fb3
    TEST EAX,EAX                        ; 004f5fb6
    JZ 0x004f5254                       ; 004f5fb8
        ;   XREF to: 004f5254 (CONDITIONAL_JUMP)  ; LAB_004f5254
    PUSH 0x62f053                       ; 004f5fbe | = "deputeFireShotgun"
    MOV ECX,dword ptr [0x006793d0]      ; 004f5fc3 | g_CEventListPtr
    PUSH ECX                            ; 004f5fc9 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 004f5fca
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004f5fcf
    TEST EAX,EAX                        ; 004f5fd2
    JZ 0x004f5254                       ; 004f5fd4
        ;   XREF to: 004f5254 (CONDITIONAL_JUMP)  ; LAB_004f5254
    MOV dword ptr [EBX + 0x1fae0],0x3c23d70a ; 004f5fda
    MOV ESP,EBP                         ; 004f5fe4
    POP EBP                             ; 004f5fe6
    POP EDI                             ; 004f5fe7
    POP ESI                             ; 004f5fe8
    POP EBX                             ; 004f5fe9
    RET                                 ; 004f5fea

