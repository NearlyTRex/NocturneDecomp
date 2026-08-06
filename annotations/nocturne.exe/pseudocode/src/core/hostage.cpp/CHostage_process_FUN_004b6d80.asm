; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hostage_cpp_CHostage_process_FUN_004b6d80(CHostage *this_ptr,float delta_time)
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
; undefined        Stack[-0x194]:1  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined        Stack[-0x158]:1  local_158
; undefined        Stack[-0x14c]:1  local_14c
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined        Stack[-0x134]:1  local_134
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
; undefined        Stack[-0xd4]:1  local_d4
; undefined        Stack[-0xc8]:1  local_c8
; undefined        Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x8c]:1  local_8c
; undefined        Stack[-0x80]:1  local_80
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
;   undefined1* switchdataD_004b6d40 = 004b6da4
;   undefined1* switchdataD_004b6d58 = 004b79f4
;   undefined1* switchdataD_004b6d68 = 004b7693
;   TerminatedCString s_s_escaping_from_s_00585aaf
;   TerminatedCString s_s_confused_while_walking_00585ac4
;   TerminatedCString s_s_rescued_entering_follo_00585aee
;   TerminatedCString s_s_was_led_close_enough_g_00585b10
;   TerminatedCString s_s_left_behind_00585b36
;   TerminatedCString s_s_was_left_behind_but_no_00585b47
;   TerminatedCString s_s_doesn_t_know_next_wayp_00585b76
;   TerminatedCString s_s_reached_waypoint_s_00585bab
;   TerminatedCString s_s_rescued_and_taken_home_00585bc4
;   TerminatedCString s_s_got_confused_going_hom_00585be0
;   TerminatedCString s_Bip01_L_Forearm_00585c07
;   TerminatedCString s_deputeFireShotgun_00585c17
;   ... and 29 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429730
;   core_charactr.cpp_CCharacter_followActor_FUN_00428780
;   core_charactr.cpp_CCharacter_FUN_004259f0
;   core_charactr.cpp_CCharacter_FUN_00428c00
;   core_charactr.cpp_CCharacter_FUN_0042a150
;   core_charactr.cpp_CCharacter_FUN_0042af70
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   ... and 24 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b6d80
        ;   Label: core_hostage.cpp_CHostage_process_FUN_004b6d80
    PUSH ESI                            ; 004b6d81
    PUSH EDI                            ; 004b6d82
    PUSH EBP                            ; 004b6d83
    MOV EBP,ESP                         ; 004b6d84
    SUB ESP,0x1ac                       ; 004b6d86
    AND ESP,0xfffffff8                  ; 004b6d8c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b6d8f
    MOV EAX,dword ptr [EBX + 0x1f924]   ; 004b6d92
    CMP EAX,0x5                         ; 004b6d98
    JA 0x004b6db8                       ; 004b6d9b
        ;   XREF to: 004b6db8 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4b6d40]  ; 004b6d9d | caseD_4 | caseD_2 | caseD_5
        ;   Label: switchD
    MOV dword ptr [EBX + 0x2de0],0x42480000 ; 004b6da4
        ;   Label: caseD_0
    MOV dword ptr [EBX + 0x2ddc],0x41a00000 ; 004b6dae
    FLD float ptr [EBX + 0x2434]        ; 004b6db8
        ;   Label: default
    FLDZ                                ; 004b6dbe
    FCOMPP                              ; 004b6dc0
    FNSTSW AX                           ; 004b6dc2
    SAHF                                ; 004b6dc4
    JC 0x004b6ddb                       ; 004b6dc5
        ;   XREF to: 004b6ddb (CONDITIONAL_JUMP)  ; LAB_004b6ddb
    MOV dword ptr [EBX + 0x2de0],0x47c34f80 ; 004b6dc7
    MOV dword ptr [EBX + 0x2ddc],0x47c34f80 ; 004b6dd1
    PUSH dword ptr [EBP + 0x18]         ; 004b6ddb
        ;   Label: LAB_004b6ddb
    PUSH EBX                            ; 004b6dde
    CALL core_charactr.cpp_CCharacter_FUN_004259f0 ; 004b6ddf
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_004259f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004b6de4
    TEST EAX,EAX                        ; 004b6de7
    JZ 0x004b7404                       ; 004b6de9
        ;   XREF to: 004b7404 (CONDITIONAL_JUMP)  ; LAB_004b7404
    MOV EAX,dword ptr [EBP + 0x18]      ; 004b6def
    MOV dword ptr [ESP + 0x20],EAX      ; 004b6df2
    LEA EAX,[EBX + 0x23a4]              ; 004b6df6
    MOV dword ptr [EAX + 0x8],0x0       ; 004b6dfc
    MOV EDX,dword ptr [EAX + 0x8]       ; 004b6e03
    MOV dword ptr [EAX + 0x4],EDX       ; 004b6e06
    MOV EDX,dword ptr [EAX + 0x4]       ; 004b6e09
    MOV dword ptr [EAX],EDX             ; 004b6e0c
    LEA EAX,[EBX + 0x150]               ; 004b6e0e
    MOV dword ptr [ESP + 0x198],EAX     ; 004b6e14
    FLD float ptr [ESP + 0x20]          ; 004b6e1b
        ;   Label: LAB_004b6e1b
    FLDZ                                ; 004b6e1f
    FCOMPP                              ; 004b6e21
    FNSTSW AX                           ; 004b6e23
    SAHF                                ; 004b6e25
    JNC 0x004b709f                      ; 004b6e26
        ;   XREF to: 004b709f (CONDITIONAL_JUMP)  ; LAB_004b709f
    LEA EAX,[ESP + 0x20]                ; 004b6e2c
    PUSH EAX                            ; 004b6e30
    MOV ESI,dword ptr [ESP + 0x19c]     ; 004b6e31
    PUSH ESI                            ; 004b6e38
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 004b6e39
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004b6e3e
    MOV ESI,EAX                         ; 004b6e41
    CMP EAX,0xb                         ; 004b6e43
    JNC 0x004b7085                      ; 004b6e46
        ;   XREF to: 004b7085 (CONDITIONAL_JUMP)  ; LAB_004b7085
    CMP EAX,0x6                         ; 004b6e4c
    JZ 0x004b6e8f                       ; 004b6e4f
        ;   XREF to: 004b6e8f (CONDITIONAL_JUMP)  ; LAB_004b6e8f
    PUSH ESI                            ; 004b6e51
    PUSH EBX                            ; 004b6e52
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 004b6e53
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042add0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004b6e58
    JMP 0x004b6e1b                      ; 004b6e5b
        ;   XREF to: 004b6e1b (UNCONDITIONAL_JUMP)  ; LAB_004b6e1b
    MOV dword ptr [EBX + 0x2de0],0x42960000 ; 004b6e5d
        ;   Label: caseD_1
    MOV dword ptr [EBX + 0x2ddc],0x42200000 ; 004b6e67
    JMP 0x004b6db8                      ; 004b6e71
        ;   XREF to: 004b6db8 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBX + 0x2de0],0x47c34f80 ; 004b6e76
        ;   Label: caseD_3
    MOV dword ptr [EBX + 0x2ddc],0x47c34f80 ; 004b6e80
    JMP 0x004b6db8                      ; 004b6e8a
        ;   XREF to: 004b6db8 (UNCONDITIONAL_JUMP)  ; default
    MOV EDI,dword ptr [EBX + 0x2590]    ; 004b6e8f
        ;   Label: LAB_004b6e8f
    TEST EDI,EDI                        ; 004b6e95
    JZ 0x004b6e1b                       ; 004b6e97
        ;   XREF to: 004b6e1b (CONDITIONAL_JUMP)  ; LAB_004b6e1b
    PUSH EDI                            ; 004b6e99
    PUSH EBX                            ; 004b6e9a
    PUSH 0x585aaf                       ; 004b6e9b | = "%s escaping from %s\n"
    MOV EDX,dword ptr [0x005ad350]      ; 004b6ea0 | g_CConsole_PTR_005ad350
    PUSH EDX                            ; 004b6ea6 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004b6ea7
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 004b6eac
    LEA EAX,[ESP + 0x2c]                ; 004b6eaf
    PUSH EAX                            ; 004b6eb3
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 004b6eb4
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004b6eb9
    PUSH 0x41700000                     ; 004b6ebc
    PUSH 0x41200000                     ; 004b6ec1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004b6ec6
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004b6ecb
    FLD float ptr [ESP + 0x1b0]         ; 004b6ed2
    ADD ESP,0x8                         ; 004b6ed9
    LEA ESI,[ESP + 0x2c]                ; 004b6edc
    MOV dword ptr [ESP + 0x60],EBX      ; 004b6ee0
    MOV dword ptr [ESP + 0x64],EBX      ; 004b6ee4
    PUSH ESI                            ; 004b6ee8
    FSTP float ptr [ESP + 0x34]         ; 004b6ee9
    MOV EAX,dword ptr [EBX + 0x2590]    ; 004b6eed
    PUSH EAX                            ; 004b6ef3
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004b6ef4
    CALL dword ptr [EDX + 0x100]        ; 004b6efa
    ADD ESP,0x8                         ; 004b6f00
    JMP 0x004b6e1b                      ; 004b6f03
        ;   XREF to: 004b6e1b (UNCONDITIONAL_JUMP)  ; LAB_004b6e1b
    XOR EAX,EAX                         ; 004b6f08
        ;   Label: LAB_004b6f08
    MOV dword ptr [ESP + 0x19c],EAX     ; 004b6f0a
    MOV dword ptr [ESP + 0x80],EAX      ; 004b6f11
    MOV dword ptr [ESP + 0x84],EAX      ; 004b6f18
    LEA EAX,[ESP + 0x80]                ; 004b6f1f
    MOV EDI,0x7149f2ca                  ; 004b6f26
    PUSH EAX                            ; 004b6f2b
    LEA EAX,[ESP + 0xd8]                ; 004b6f2c
    MOV ESI,0x3fc00000                  ; 004b6f33
    PUSH EAX                            ; 004b6f38
    MOV dword ptr [ESP + 0x160],EDI     ; 004b6f39
    MOV dword ptr [ESP + 0x90],ESI      ; 004b6f40
    PUSH EBX                            ; 004b6f47
    XOR ESI,ESI                         ; 004b6f48
    XOR EDI,EDI                         ; 004b6f4a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004b6f4c
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004b6f51
    MOV EAX,[0x005be368]                ; 004b6f54 | g_CDemonSet_PTR_005be368
        ;   Label: LAB_004b6f54
    CMP ESI,dword ptr [EAX + 0x14cd6c]  ; 004b6f59 | g_CDemonSet_01e57284.actor_count
    JGE 0x004b701f                      ; 004b6f5f
        ;   XREF to: 004b701f (CONDITIONAL_JUMP)  ; LAB_004b701f
    MOV EDX,dword ptr [0x01af4ed4]      ; 004b6f65 | g_CDoorActorType_01af4e9c.name_hash
    PUSH EDX                            ; 004b6f6b
    MOV ECX,dword ptr [EDI + EAX*0x1 + 0x14cd70] ; 004b6f6c | g_CDemonSet_01e57284.actors[0] | g_CDemonSet_01e57284.actors[1]
    PUSH ECX                            ; 004b6f73
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004b6f74
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,EAX                         ; 004b6f79
    ADD ESP,0x8                         ; 004b6f7b
    TEST EAX,EAX                        ; 004b6f7e
    JNZ 0x004b6f88                      ; 004b6f80
        ;   XREF to: 004b6f88 (CONDITIONAL_JUMP)  ; LAB_004b6f88
    INC ESI                             ; 004b6f82
        ;   Label: LAB_004b6f82
    ADD EDI,0x4                         ; 004b6f83
    JMP 0x004b6f54                      ; 004b6f86
        ;   XREF to: 004b6f54 (UNCONDITIONAL_JUMP)  ; LAB_004b6f54
    FLD float ptr [EAX + 0x20]          ; 004b6f88
        ;   Label: LAB_004b6f88
    FSUB float ptr [ESP + 0xd4]         ; 004b6f8b
    FSTP float ptr [ESP + 0xb0]         ; 004b6f92
    FLD float ptr [EAX + 0x24]          ; 004b6f99
    FSUB float ptr [ESP + 0xd8]         ; 004b6f9c
    ADD EAX,0x20                        ; 004b6fa3
    FST float ptr [ESP + 0xb4]          ; 004b6fa6
    FLD float ptr [EAX + 0x8]           ; 004b6fad
    FXCH                                ; 004b6fb0
    FABS                                ; 004b6fb2
    FXCH                                ; 004b6fb4
    FSUB float ptr [ESP + 0xdc]         ; 004b6fb6
    FSTP float ptr [ESP + 0xb8]         ; 004b6fbd
    FCOMP double ptr [0x00585ca2]       ; 004b6fc4 | DOUBLE_00585ca2
    FNSTSW AX                           ; 004b6fca
    SAHF                                ; 004b6fcc
    JA 0x004b6f82                       ; 004b6fcd
        ;   XREF to: 004b6f82 (CONDITIONAL_JUMP)  ; LAB_004b6f82
    FLD float ptr [ESP + 0xb0]          ; 004b6fcf
    FMUL ST0                            ; 004b6fd6
    FLD float ptr [ESP + 0xb8]          ; 004b6fd8
    FMUL ST0                            ; 004b6fdf
    XOR EAX,EAX                         ; 004b6fe1
    FADDP                               ; 004b6fe3
    MOV dword ptr [ESP + 0xb4],EAX      ; 004b6fe5
    FSQRT                               ; 004b6fec
    FST float ptr [ESP + 0x1a0]         ; 004b6fee
    FCOMP float ptr [ESP + 0x158]       ; 004b6ff5
    FNSTSW AX                           ; 004b6ffc
    SAHF                                ; 004b6ffe
    JNC 0x004b6f82                      ; 004b6fff
        ;   XREF to: 004b6f82 (CONDITIONAL_JUMP)  ; LAB_004b6f82
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 004b7001
    MOV dword ptr [ESP + 0x19c],EDX     ; 004b7008
    MOV dword ptr [ESP + 0x158],EAX     ; 004b700f
    INC ESI                             ; 004b7016
    ADD EDI,0x4                         ; 004b7017
    JMP 0x004b6f54                      ; 004b701a
        ;   XREF to: 004b6f54 (UNCONDITIONAL_JUMP)  ; LAB_004b6f54
    MOV ESI,dword ptr [ESP + 0x19c]     ; 004b701f
        ;   Label: LAB_004b701f
    TEST ESI,ESI                        ; 004b7026
    JZ 0x004b6e1b                       ; 004b7028
        ;   XREF to: 004b6e1b (CONDITIONAL_JUMP)  ; LAB_004b6e1b
    PUSH 0x3dcccccd                     ; 004b702e
    PUSH ESI                            ; 004b7033
    CALL core_door.cpp_CDoor_setSwingRange_FUN_00456220 ; 004b7034
        ;   XREF to: 00456220 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_setSwingRange_FUN_00456220(CDoor * this_ptr, float swing_range)
    ADD ESP,0x8                         ; 004b7039
    JMP 0x004b6e1b                      ; 004b703c
        ;   XREF to: 004b6e1b (UNCONDITIONAL_JUMP)  ; LAB_004b6e1b
    MOV ESI,dword ptr [EBX + 0x24f0]    ; 004b7041
        ;   Label: LAB_004b7041
    TEST ESI,ESI                        ; 004b7047
    JZ 0x004b6e1b                       ; 004b7049
        ;   XREF to: 004b6e1b (CONDITIONAL_JUMP)  ; LAB_004b6e1b
    PUSH 0x0                            ; 004b704f
    PUSH 0x1                            ; 004b7051
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b7053
    PUSH EBX                            ; 004b7059
    CALL dword ptr [EAX + 0x120]        ; 004b705a
    ADD ESP,0xc                         ; 004b7060
    MOV EAX,[0x01cae0e8]                ; 004b7063 | DAT_01cae0e8
    PUSH 0x1                            ; 004b7068
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004b706a
    PUSH ESI                            ; 004b7071
    ADD EAX,0x1f5a0                     ; 004b7072
    PUSH EAX                            ; 004b7077
    CALL core_inv.cpp_CInventory_addItem_FUN_004bf360 ; 004b7078
        ;   XREF to: 004bf360 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004bf360(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004b707d
    JMP 0x004b6e1b                      ; 004b7080
        ;   XREF to: 004b6e1b (UNCONDITIONAL_JUMP)  ; LAB_004b6e1b
    JBE 0x004b6f08                      ; 004b7085
        ;   XREF to: 004b6f08 (CONDITIONAL_JUMP)  ; LAB_004b6f08
        ;   Label: LAB_004b7085
    CMP EAX,0xc                         ; 004b708b
    JZ 0x004b7041                       ; 004b708e
        ;   XREF to: 004b7041 (CONDITIONAL_JUMP)  ; LAB_004b7041
    PUSH ESI                            ; 004b7090
    PUSH EBX                            ; 004b7091
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 004b7092
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042add0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004b7097
    JMP 0x004b6e1b                      ; 004b709a
        ;   XREF to: 004b6e1b (UNCONDITIONAL_JUMP)  ; LAB_004b6e1b
    FLD float ptr [EBP + 0x18]          ; 004b709f
        ;   Label: LAB_004b709f
    FMUL double ptr [0x00585c2a]        ; 004b70a2 | DOUBLE_00585c2a
    FLD float ptr [EBX + 0x23ac]        ; 004b70a8
    PUSH 0xa                            ; 004b70ae
    MOV ECX,dword ptr [ESP + 0x19c]     ; 004b70b0
    XOR EDX,EDX                         ; 004b70b7
    FSTP float ptr [EBX + 0x242c]       ; 004b70b9
    MOV dword ptr [ESP + 0x198],EDX     ; 004b70bf
    PUSH ECX                            ; 004b70c6
    FSTP float ptr [EBX + 0x2430]       ; 004b70c7
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 004b70cd
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004b70d2
    XOR EDI,EDI                         ; 004b70d9
    FLD float ptr [ESP + 0x1b0]         ; 004b70db
    FLDZ                                ; 004b70e2
    ADD ESP,0x8                         ; 004b70e4
    FCOMPP                              ; 004b70e7
    FNSTSW AX                           ; 004b70e9
    SAHF                                ; 004b70eb
    JNC 0x004b70fa                      ; 004b70ec
        ;   XREF to: 004b70fa (CONDITIONAL_JUMP)  ; LAB_004b70fa
    MOV EDI,0x1                         ; 004b70ee
    MOV dword ptr [ESP + 0x194],EDI     ; 004b70f3
    FLD float ptr [EBX + 0x2434]        ; 004b70fa
        ;   Label: LAB_004b70fa
    FLDZ                                ; 004b7100
    FCOMPP                              ; 004b7102
    FNSTSW AX                           ; 004b7104
    SAHF                                ; 004b7106
    JC 0x004b740b                       ; 004b7107
        ;   XREF to: 004b740b (CONDITIONAL_JUMP)  ; LAB_004b740b
    PUSH 0x5                            ; 004b710d
    LEA EAX,[EBX + 0x150]               ; 004b710f
    PUSH EAX                            ; 004b7115
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 004b7116
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004b711b
    FLD float ptr [ESP + 0x1b0]         ; 004b7122
    FLDZ                                ; 004b7129
    ADD ESP,0x8                         ; 004b712b
    FCOMPP                              ; 004b712e
    FNSTSW AX                           ; 004b7130
    SAHF                                ; 004b7132
    JC 0x004b7170                       ; 004b7133
        ;   XREF to: 004b7170 (CONDITIONAL_JUMP)  ; LAB_004b7170
    PUSH 0x8                            ; 004b7135
    LEA EAX,[EBX + 0x150]               ; 004b7137
    PUSH EAX                            ; 004b713d
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 004b713e
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004b7143
    FLD float ptr [ESP + 0x1b0]         ; 004b714a
    FLDZ                                ; 004b7151
    ADD ESP,0x8                         ; 004b7153
    FCOMPP                              ; 004b7156
    FNSTSW AX                           ; 004b7158
    SAHF                                ; 004b715a
    JC 0x004b7170                       ; 004b715b
        ;   XREF to: 004b7170 (CONDITIONAL_JUMP)  ; LAB_004b7170
    PUSH 0x1                            ; 004b715d
    PUSH 0x6                            ; 004b715f
    LEA EAX,[EBX + 0x150]               ; 004b7161
    PUSH EAX                            ; 004b7167
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b7168
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b716d
    MOV EDI,0x1                         ; 004b7170
        ;   Label: LAB_004b7170
    FLD float ptr [EBX + 0x2434]        ; 004b7175
        ;   Label: default
    FLDZ                                ; 004b717b
    FCOMPP                              ; 004b717d
    FNSTSW AX                           ; 004b717f
    SAHF                                ; 004b7181
    JNC 0x004b724b                      ; 004b7182
        ;   XREF to: 004b724b (CONDITIONAL_JUMP)  ; LAB_004b724b
    CMP dword ptr [EBX + 0x1f920],0x1   ; 004b7188
    JNZ 0x004b724b                      ; 004b718f
        ;   XREF to: 004b724b (CONDITIONAL_JUMP)  ; LAB_004b724b
    FLD float ptr [EBP + 0x18]          ; 004b7195
    FMUL float ptr [0x00585c76]         ; 004b7198 | FLOAT_00585c76
    SUB ESP,0x4                         ; 004b719e
    FSTP float ptr [ESP]                ; 004b71a1
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 004b71a4
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040dea0(float probability_threshold)
    ADD ESP,0x4                         ; 004b71a9
    TEST EAX,EAX                        ; 004b71ac
    JZ 0x004b724b                       ; 004b71ae
        ;   XREF to: 004b724b (CONDITIONAL_JUMP)  ; LAB_004b724b
    PUSH 0x0                            ; 004b71b4
    PUSH 0x585c07                       ; 004b71b6 | = "Bip01 L Forearm"
    LEA ESI,[EBX + 0x150]               ; 004b71bb
    PUSH ESI                            ; 004b71c1
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 004b71c2
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004b71c7
    PUSH EAX                            ; 004b71ca
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b71cb
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b71d0
    TEST EAX,EAX                        ; 004b71d3
    JL 0x004b724b                       ; 004b71d5
        ;   XREF to: 004b724b (CONDITIONAL_JUMP)  ; LAB_004b724b
    PUSH EAX                            ; 004b71d7
    LEA EAX,[ESP + 0x108]               ; 004b71d8
    PUSH EAX                            ; 004b71df
    PUSH ESI                            ; 004b71e0
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 004b71e1
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004b71e6
    PUSH EAX                            ; 004b71e9
    LEA EAX,[ESP + 0x6c]                ; 004b71ea
    PUSH EAX                            ; 004b71ee
    PUSH EBX                            ; 004b71ef
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004b71f0
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004b71f5
    LEA EAX,[ESP + 0xa4]                ; 004b71f8
    PUSH EAX                            ; 004b71ff
    LEA EAX,[ESP + 0x90]                ; 004b7200
    MOV EDX,0x40400000                  ; 004b7207
    PUSH EAX                            ; 004b720c
    XOR ECX,ECX                         ; 004b720d
    MOV dword ptr [ESP + 0xac],EDX      ; 004b720f
    PUSH EBX                            ; 004b7216
    MOV dword ptr [ESP + 0xb4],ECX      ; 004b7217
    MOV dword ptr [ESP + 0xb8],ECX      ; 004b721e
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 004b7225
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 004b722a
    XOR ESI,ESI                         ; 004b722d
    PUSH ESI                            ; 004b722f
    LEA EAX,[ESP + 0x90]                ; 004b7230
    PUSH EAX                            ; 004b7237
    LEA EAX,[ESP + 0x70]                ; 004b7238
    PUSH EAX                            ; 004b723c
    MOV EAX,[0x005b96c4]                ; 004b723d | g_CGore_PTR_005b96c4
    PUSH EAX                            ; 004b7242
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0 ; 004b7243
        ;   XREF to: 004b00f0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0(CGore * this_ptr, CVector3f * position, CVector3f * velocity, int blood_type)
    ADD ESP,0x10                        ; 004b7248
    PUSH EBX                            ; 004b724b
        ;   Label: LAB_004b724b
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 004b724c
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_004259a0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004b7251
    CMP dword ptr [ESP + 0x194],0x0     ; 004b7254
    JZ 0x004b7e34                       ; 004b725c
        ;   XREF to: 004b7e34 (CONDITIONAL_JUMP)  ; LAB_004b7e34
    LEA EAX,[EBX + 0x2414]              ; 004b7262
    PUSH EAX                            ; 004b7268
    LEA EAX,[ESP + 0x144]               ; 004b7269
    PUSH EAX                            ; 004b7270
    PUSH EBX                            ; 004b7271
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 004b7272
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 004b7277
    LEA EAX,[EBX + 0x20]                ; 004b7279
    FLD float ptr [EDX]                 ; 004b727c
    FADD float ptr [EAX]                ; 004b727e
    FSTP float ptr [EAX]                ; 004b7280
    FLD float ptr [EDX + 0x4]           ; 004b7282
    FADD float ptr [EAX + 0x4]          ; 004b7285
    FSTP float ptr [EAX + 0x4]          ; 004b7288
    FLD float ptr [EDX + 0x8]           ; 004b728b
    FADD float ptr [EAX + 0x8]          ; 004b728e
    ADD ESP,0xc                         ; 004b7291
    FSTP float ptr [EAX + 0x8]          ; 004b7294
    MOV dword ptr [EBX + 0x2dcc],0x0    ; 004b7297
        ;   Label: LAB_004b7297
    LEA ESI,[EBX + 0x150]               ; 004b72a1
        ;   Label: LAB_004b72a1
    PUSH ESI                            ; 004b72a7
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 004b72a8
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x1f920]   ; 004b72ad
    ADD ESP,0x4                         ; 004b72b3
    CMP EAX,0x1                         ; 004b72b6
    JNZ 0x004b7366                      ; 004b72b9
        ;   XREF to: 004b7366 (CONDITIONAL_JUMP)  ; LAB_004b7366
    MOV EDX,0x3f000000                  ; 004b72bf
    MOV EAX,[0x02ddf9a8]                ; 004b72c4 | g_CWeaponActorType_02ddf970.name_hash
    MOV dword ptr [ESP + 0x178],EDX     ; 004b72c9
    PUSH EAX                            ; 004b72d0
    MOV EDX,dword ptr [EBX + 0x24f0]    ; 004b72d1
    MOV ECX,0x3f400000                  ; 004b72d7
    PUSH EDX                            ; 004b72dc
    MOV dword ptr [ESP + 0x174],ECX     ; 004b72dd
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004b72e4
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004b72e9
    XOR ECX,ECX                         ; 004b72ec
    MOV dword ptr [ESP + 0x174],ECX     ; 004b72ee
    TEST EAX,EAX                        ; 004b72f5
    JZ 0x004b802d                       ; 004b72f7
        ;   XREF to: 004b802d (CONDITIONAL_JUMP)  ; LAB_004b802d
    PUSH 0x10                           ; 004b72fd
    PUSH ESI                            ; 004b72ff
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 004b7300
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004b7305
    FLD float ptr [ESP + 0x1b0]         ; 004b730c
    FLDZ                                ; 004b7313
    ADD ESP,0x8                         ; 004b7315
    FCOMPP                              ; 004b7318
    FNSTSW AX                           ; 004b731a
    SAHF                                ; 004b731c
    JC 0x004b802d                       ; 004b731d
        ;   XREF to: 004b802d (CONDITIONAL_JUMP)  ; LAB_004b802d
    FLD float ptr [EBP + 0x18]          ; 004b7323
        ;   Label: LAB_004b7323
    FDIV float ptr [ESP + 0x178]        ; 004b7326
    FADD float ptr [EBX + 0x1f94c]      ; 004b732d
    FSTP float ptr [EBX + 0x1f94c]      ; 004b7333
        ;   Label: LAB_004b7333
    FLDZ                                ; 004b7339
    FLD float ptr [EBX + 0x1f94c]       ; 004b733b
    FSTP double ptr [ESP + 0x10]        ; 004b7341
    FCOMP double ptr [ESP + 0x10]       ; 004b7345
    FNSTSW AX                           ; 004b7349
    SAHF                                ; 004b734b
    JC 0x004b8050                       ; 004b734c
        ;   XREF to: 004b8050 (CONDITIONAL_JUMP)  ; LAB_004b8050
    MOV dword ptr [EBX + 0x1f948],0x0   ; 004b7352
    MOV dword ptr [EBX + 0x1f94c],0x0   ; 004b735c
    PUSH EDI                            ; 004b7366
        ;   Label: LAB_004b7366
    PUSH dword ptr [EBP + 0x18]         ; 004b7367
    PUSH EBX                            ; 004b736a
    CALL core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429730 ; 004b736b
        ;   XREF to: 00429730 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429730(CCharacter * this_ptr, float delta_time, int disable_search)
    ADD ESP,0xc                         ; 004b7370
    PUSH dword ptr [EBP + 0x18]         ; 004b7373
    PUSH EBX                            ; 004b7376
    CALL core_charactr.cpp_CCharacter_FUN_0042a150 ; 004b7377
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042a150(CCharacter * this_ptr, float delta_time)
    FLD float ptr [EBX + 0x1f948]       ; 004b737c
    FLD1                                ; 004b7382
    ADD ESP,0x8                         ; 004b7384
    FCOMPP                              ; 004b7387
    FNSTSW AX                           ; 004b7389
    SAHF                                ; 004b738b
    JA 0x004b73f7                       ; 004b738c
        ;   XREF to: 004b73f7 (CONDITIONAL_JUMP)  ; LAB_004b73f7
    MOV ECX,dword ptr [0x02ddf9a8]      ; 004b738e | g_CWeaponActorType_02ddf970.name_hash
    PUSH ECX                            ; 004b7394
    MOV ESI,dword ptr [EBX + 0x24f0]    ; 004b7395
    PUSH ESI                            ; 004b739b
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004b739c
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 004b73a1
    ADD ESP,0x8                         ; 004b73a3
    TEST EAX,EAX                        ; 004b73a6
    JZ 0x004b73f7                       ; 004b73a8
        ;   XREF to: 004b73f7 (CONDITIONAL_JUMP)  ; LAB_004b73f7
    MOV EDI,dword ptr [EAX + 0x564]     ; 004b73aa
    MOV dword ptr [EAX + 0x564],0x6     ; 004b73b0
    PUSH ESI                            ; 004b73ba
    MOV EAX,dword ptr [EAX + 0x14c]     ; 004b73bb
    CALL dword ptr [EAX + 0xdc]         ; 004b73c1
    ADD ESP,0x4                         ; 004b73c7
    PUSH 0x1                            ; 004b73ca
    PUSH 0xc                            ; 004b73cc
    LEA EAX,[EBX + 0x150]               ; 004b73ce
    PUSH EAX                            ; 004b73d4
    MOV dword ptr [ESI + 0x564],EDI     ; 004b73d5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b73db
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV dword ptr [EBX + 0x1f94c],0x0   ; 004b73e0
    ADD ESP,0xc                         ; 004b73ea
    MOV dword ptr [EBX + 0x1f948],0x0   ; 004b73ed
    CMP dword ptr [EBX + 0x1f920],0x1   ; 004b73f7
        ;   Label: LAB_004b73f7
    JZ 0x004b8151                       ; 004b73fe
        ;   XREF to: 004b8151 (CONDITIONAL_JUMP)  ; LAB_004b8151
    MOV ESP,EBP                         ; 004b7404
        ;   Label: LAB_004b7404
    POP EBP                             ; 004b7406
    POP EDI                             ; 004b7407
    POP ESI                             ; 004b7408
    POP EBX                             ; 004b7409
    RET                                 ; 004b740a
    MOV EAX,dword ptr [EBX + 0x2590]    ; 004b740b
        ;   Label: LAB_004b740b
    TEST EAX,EAX                        ; 004b7411
    JZ 0x004b757a                       ; 004b7413
        ;   XREF to: 004b757a (CONDITIONAL_JUMP)  ; LAB_004b757a
    ADD EAX,0x20                        ; 004b7419
    PUSH EAX                            ; 004b741c
    LEA EAX,[ESP + 0xf0]                ; 004b741d
    PUSH EAX                            ; 004b7424
    PUSH EBX                            ; 004b7425
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004b7426
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004b742b
    PUSH EAX                            ; 004b742e
    LEA EAX,[ESP + 0xfc]                ; 004b742f
    PUSH EAX                            ; 004b7436
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004b7437
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 004b743c
    PUSH dword ptr [EAX + 0x4]          ; 004b743f
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004b7442
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x1ac],EAX     ; 004b7447
    FLD float ptr [ESP + 0x1ac]         ; 004b744e
    ADD ESP,0x4                         ; 004b7455
    FST float ptr [ESP + 0x24]          ; 004b7458
    FCOMP double ptr [0x00585c5a]       ; 004b745c | DOUBLE_00585c5a
    FNSTSW AX                           ; 004b7462
    SAHF                                ; 004b7464
    JNC 0x004b7475                      ; 004b7465
        ;   XREF to: 004b7475 (CONDITIONAL_JUMP)  ; LAB_004b7475
    FLD float ptr [ESP + 0x24]          ; 004b7467
    FADD float ptr [0x00585c62]         ; 004b746b | FLOAT_00585c62
    FSTP float ptr [ESP + 0x24]         ; 004b7471
    FLD float ptr [ESP + 0x24]          ; 004b7475
        ;   Label: LAB_004b7475
    FCOMP double ptr [0x00585c6a]       ; 004b7479 | DOUBLE_00585c6a
    FNSTSW AX                           ; 004b747f
    SAHF                                ; 004b7481
    JBE 0x004b7492                      ; 004b7482
        ;   XREF to: 004b7492 (CONDITIONAL_JUMP)  ; LAB_004b7492
    FLD float ptr [ESP + 0x24]          ; 004b7484
    FADD float ptr [0x00585c72]         ; 004b7488 | FLOAT_00585c72
    FSTP float ptr [ESP + 0x24]         ; 004b748e
    FLD float ptr [EBP + 0x18]          ; 004b7492
        ;   Label: LAB_004b7492
    FMUL double ptr [0x00585c2a]        ; 004b7495 | DOUBLE_00585c2a
    FLD float ptr [ESP + 0x24]          ; 004b749b
    FXCH                                ; 004b749f
    FST float ptr [ESP + 0x188]         ; 004b74a1
    FCHS                                ; 004b74a8
    FSTP float ptr [ESP + 0x17c]        ; 004b74aa
    FCOMP float ptr [ESP + 0x17c]       ; 004b74b1
    FNSTSW AX                           ; 004b74b8
    SAHF                                ; 004b74ba
    JNC 0x004b74c8                      ; 004b74bb
        ;   XREF to: 004b74c8 (CONDITIONAL_JUMP)  ; LAB_004b74c8
    MOV EAX,dword ptr [ESP + 0x17c]     ; 004b74bd
    MOV dword ptr [ESP + 0x24],EAX      ; 004b74c4
    FLD float ptr [ESP + 0x24]          ; 004b74c8
        ;   Label: LAB_004b74c8
    FCOMP float ptr [ESP + 0x188]       ; 004b74cc
    FNSTSW AX                           ; 004b74d3
    SAHF                                ; 004b74d5
    JBE 0x004b74e3                      ; 004b74d6
        ;   XREF to: 004b74e3 (CONDITIONAL_JUMP)  ; LAB_004b74e3
    MOV EAX,dword ptr [ESP + 0x188]     ; 004b74d8
    MOV dword ptr [ESP + 0x24],EAX      ; 004b74df
    FLD float ptr [EBX + 0x34]          ; 004b74e3
        ;   Label: LAB_004b74e3
    FADD float ptr [ESP + 0x24]         ; 004b74e6
    PUSH EBX                            ; 004b74ea
    FSTP float ptr [EBX + 0x34]         ; 004b74eb
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 004b74ee
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004b74f3
    PUSH 0x0                            ; 004b74f6
    LEA EAX,[ESP + 0x12c]               ; 004b74f8
    PUSH EAX                            ; 004b74ff
    LEA EAX,[EBX + 0x150]               ; 004b7500
    MOV ESI,dword ptr [EBX + 0x2590]    ; 004b7506
    PUSH EAX                            ; 004b750c
    MOV EDI,dword ptr [ESI + 0x14c]     ; 004b750d
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004b7513
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004b7518
    PUSH EAX                            ; 004b751b
    PUSH EBX                            ; 004b751c
    PUSH ESI                            ; 004b751d
    CALL dword ptr [EDI + 0x108]        ; 004b751e
    ADD ESP,0xc                         ; 004b7524
    TEST EAX,EAX                        ; 004b7527
    JZ 0x004b7572                       ; 004b7529
        ;   XREF to: 004b7572 (CONDITIONAL_JUMP)  ; LAB_004b7572
    CMP dword ptr [EBX + 0x2590],0x0    ; 004b752b
    JNZ 0x004b7547                      ; 004b7532
        ;   XREF to: 004b7547 (CONDITIONAL_JUMP)  ; LAB_004b7547
    PUSH 0x1                            ; 004b7534
        ;   Label: LAB_004b7534
    PUSH 0x0                            ; 004b7536
    LEA EAX,[EBX + 0x150]               ; 004b7538
    PUSH EAX                            ; 004b753e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b753f
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b7544
    MOV ESI,0x1                         ; 004b7547
        ;   Label: LAB_004b7547
    LEA EAX,[EBX + 0x23a4]              ; 004b754c
    MOV dword ptr [ESP + 0x194],ESI     ; 004b7552
    MOV dword ptr [EAX + 0x8],0x0       ; 004b7559
    MOV EDI,ESI                         ; 004b7560
    MOV EDX,dword ptr [EAX + 0x8]       ; 004b7562
    MOV dword ptr [EAX + 0x4],EDX       ; 004b7565
    MOV EDX,dword ptr [EAX + 0x4]       ; 004b7568
    MOV dword ptr [EAX],EDX             ; 004b756b
    JMP 0x004b7175                      ; 004b756d
        ;   XREF to: 004b7175 (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV dword ptr [EBX + 0x2590],EAX    ; 004b7572
        ;   Label: LAB_004b7572
    JMP 0x004b7534                      ; 004b7578
        ;   XREF to: 004b7534 (UNCONDITIONAL_JUMP)  ; LAB_004b7534
    PUSH 0x3                            ; 004b757a
        ;   Label: LAB_004b757a
    LEA ESI,[EBX + 0x150]               ; 004b757c
    PUSH ESI                            ; 004b7582
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 004b7583
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004b7588
    FLD float ptr [ESP + 0x1b0]         ; 004b758f
    FLDZ                                ; 004b7596
    ADD ESP,0x8                         ; 004b7598
    FCOMPP                              ; 004b759b
    FNSTSW AX                           ; 004b759d
    SAHF                                ; 004b759f
    JC 0x004b7170                       ; 004b75a0
        ;   XREF to: 004b7170 (CONDITIONAL_JUMP)  ; LAB_004b7170
    PUSH 0x5                            ; 004b75a6
    PUSH ESI                            ; 004b75a8
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 004b75a9
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004b75ae
    FLD float ptr [ESP + 0x1b0]         ; 004b75b5
    FLDZ                                ; 004b75bc
    ADD ESP,0x8                         ; 004b75be
    FCOMPP                              ; 004b75c1
    FNSTSW AX                           ; 004b75c3
    SAHF                                ; 004b75c5
    JC 0x004b7170                       ; 004b75c6
        ;   XREF to: 004b7170 (CONDITIONAL_JUMP)  ; LAB_004b7170
    PUSH 0x8                            ; 004b75cc
    PUSH ESI                            ; 004b75ce
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 004b75cf
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004b75d4
    FLD float ptr [ESP + 0x1b0]         ; 004b75db
    FLDZ                                ; 004b75e2
    ADD ESP,0x8                         ; 004b75e4
    FCOMPP                              ; 004b75e7
    FNSTSW AX                           ; 004b75e9
    SAHF                                ; 004b75eb
    JC 0x004b7170                       ; 004b75ec
        ;   XREF to: 004b7170 (CONDITIONAL_JUMP)  ; LAB_004b7170
    PUSH dword ptr [EBP + 0x18]         ; 004b75f2
    PUSH EBX                            ; 004b75f5
    CALL core_charactr.cpp_CCharacter_FUN_00428c00 ; 004b75f6
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_00428c00(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004b75fb
    TEST EAX,EAX                        ; 004b75fe
    JZ 0x004b7e1e                       ; 004b7600
        ;   XREF to: 004b7e1e (CONDITIONAL_JUMP)  ; LAB_004b7e1e
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 004b7606
    CMP EAX,0x2                         ; 004b760c
    JNC 0x004b768a                      ; 004b760f
        ;   XREF to: 004b768a (CONDITIONAL_JUMP)  ; LAB_004b768a
    CMP EAX,0x1                         ; 004b7611
    JNZ 0x004b7672                      ; 004b7614
        ;   XREF to: 004b7672 (CONDITIONAL_JUMP)  ; LAB_004b7672
    PUSH EAX                            ; 004b7616
    PUSH EAX                            ; 004b7617
    LEA EAX,[EBX + 0x150]               ; 004b7618
    PUSH EAX                            ; 004b761e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b761f
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b7624
    JMP 0x004b7175                      ; 004b7627
        ;   XREF to: 004b7175 (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004b762c
        ;   Label: LAB_004b762c
    PUSH 0x0                            ; 004b762e
    LEA EAX,[EBX + 0x150]               ; 004b7630
    PUSH EAX                            ; 004b7636
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b7637
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b763c
    PUSH EBX                            ; 004b763f
    MOV EAX,0x585ac4                    ; 004b7640 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 004b7645 | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x005ad350]      ; 004b7646 | g_CConsole_PTR_005ad350
    PUSH EDX                            ; 004b764c | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004b764d
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b7652
    JMP 0x004b7175                      ; 004b7655
        ;   XREF to: 004b7175 (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004b765a
        ;   Label: LAB_004b765a
    PUSH 0x2                            ; 004b765c
    LEA EAX,[EBX + 0x150]               ; 004b765e
    PUSH EAX                            ; 004b7664
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b7665
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b766a
    JMP 0x004b7175                      ; 004b766d
        ;   XREF to: 004b7175 (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004b7672
        ;   Label: LAB_004b7672
    PUSH 0x0                            ; 004b7674
    LEA EAX,[EBX + 0x150]               ; 004b7676
    PUSH EAX                            ; 004b767c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b767d
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b7682
    JMP 0x004b7175                      ; 004b7685
        ;   XREF to: 004b7175 (UNCONDITIONAL_JUMP)  ; caseD_5
    JBE 0x004b765a                      ; 004b768a
        ;   XREF to: 004b765a (CONDITIONAL_JUMP)  ; LAB_004b765a
        ;   Label: LAB_004b768a
    CMP EAX,0x3                         ; 004b768c
    JZ 0x004b762c                       ; 004b768f
        ;   XREF to: 004b762c (CONDITIONAL_JUMP)  ; LAB_004b762c
    JMP 0x004b7672                      ; 004b7691
        ;   XREF to: 004b7672 (UNCONDITIONAL_JUMP)  ; LAB_004b7672
    PUSH dword ptr [EBP + 0x18]         ; 004b7693
        ;   Label: caseD_0
    PUSH EBX                            ; 004b7696
    CALL core_hostage.cpp_CHostage_processGrabberFlee_FUN_004b81a0 ; 004b7697
        ;   XREF to: 004b81a0 (UNCONDITIONAL_CALL)  ; int core_hostage.cpp_CHostage_processGrabberFlee_FUN_004b81a0(CHostage * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004b769c
    TEST EAX,EAX                        ; 004b769f
    JNZ 0x004b7175                      ; 004b76a1
        ;   XREF to: 004b7175 (CONDITIONAL_JUMP)  ; caseD_5
    MOV EAX,[0x01cae0e8]                ; 004b76a7 | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004b76ac
    LEA EDX,[EAX + 0x20]                ; 004b76b3
    LEA EAX,[EBX + 0x20]                ; 004b76b6
    FLD float ptr [EDX]                 ; 004b76b9
    FSUB float ptr [EAX]                ; 004b76bb
    FSTP float ptr [ESP + 0xe0]         ; 004b76bd
    FLD float ptr [EDX + 0x4]           ; 004b76c4
    FSUB float ptr [EAX + 0x4]          ; 004b76c7
    FSTP float ptr [ESP + 0xe4]         ; 004b76ca
    FLD float ptr [EDX + 0x8]           ; 004b76d1
    FSUB float ptr [EAX + 0x8]          ; 004b76d4
    FSTP float ptr [ESP + 0xe8]         ; 004b76d7
    FLD float ptr [EBX + 0x1f570]       ; 004b76de
    FLDZ                                ; 004b76e4
    FCOMPP                              ; 004b76e6
    FNSTSW AX                           ; 004b76e8
    SAHF                                ; 004b76ea
    JNC 0x004b771d                      ; 004b76eb
        ;   XREF to: 004b771d (CONDITIONAL_JUMP)  ; LAB_004b771d
    FLD float ptr [ESP + 0xe4]          ; 004b76ed
    FMUL ST0                            ; 004b76f4
    FLD float ptr [ESP + 0xe0]          ; 004b76f6
    FMUL ST0                            ; 004b76fd
    FADDP                               ; 004b76ff
    FLD float ptr [ESP + 0xe8]          ; 004b7701
    FMUL ST0                            ; 004b7708
    FADDP                               ; 004b770a
    FSQRT                               ; 004b770c
    FCOMP float ptr [EBX + 0x1f570]     ; 004b770e
    FNSTSW AX                           ; 004b7714
    SAHF                                ; 004b7716
    JNC 0x004b7672                      ; 004b7717
        ;   XREF to: 004b7672 (CONDITIONAL_JUMP)  ; LAB_004b7672
    LEA EAX,[EBX + 0x1f574]             ; 004b771d
        ;   Label: LAB_004b771d
    PUSH EAX                            ; 004b7723
    MOV ECX,dword ptr [0x005b7650]      ; 004b7724 | DAT_005b7650
    PUSH ECX                            ; 004b772a
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004b772b
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004b7730
    TEST EAX,EAX                        ; 004b7733
    JZ 0x004b7672                       ; 004b7735
        ;   XREF to: 004b7672 (CONDITIONAL_JUMP)  ; LAB_004b7672
    PUSH EBX                            ; 004b773b
    PUSH 0x585aee                       ; 004b773c | = "%s rescued, entering follow mode\n"
    MOV ESI,dword ptr [0x005ad350]      ; 004b7741 | g_CConsole_PTR_005ad350
    PUSH ESI                            ; 004b7747 | g_CConsole_0077ad0c
    MOV dword ptr [EBX + 0x1f924],0x1   ; 004b7748
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004b7752
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b7757
    LEA EAX,[EBX + 0x1f5f8]             ; 004b775a
    PUSH EAX                            ; 004b7760
    MOV EAX,[0x005b7650]                ; 004b7761 | DAT_005b7650
    PUSH EAX                            ; 004b7766
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 004b7767
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0047ab70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004b776c
    JMP 0x004b7175                      ; 004b776f
        ;   XREF to: 004b7175 (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV ECX,dword ptr [EBX + 0x1f928]   ; 004b7774
        ;   Label: caseD_1
    TEST ECX,ECX                        ; 004b777a
    JNZ 0x004b77ce                      ; 004b777c
        ;   XREF to: 004b77ce (CONDITIONAL_JUMP)  ; LAB_004b77ce
    CMP dword ptr [EBX + 0x1f930],0x0   ; 004b777e
        ;   Label: LAB_004b777e
    JZ 0x004b7807                       ; 004b7785
        ;   XREF to: 004b7807 (CONDITIONAL_JUMP)  ; LAB_004b7807
    PUSH EBX                            ; 004b778b
    PUSH 0x585b10                       ; 004b778c | = "%s was led close enough, going home!\n"
    MOV EAX,[0x005ad350]                ; 004b7791 | g_CConsole_PTR_005ad350
    PUSH EAX                            ; 004b7796 | g_CConsole_0077ad0c
    MOV dword ptr [EBX + 0x1f924],0x3   ; 004b7797
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004b77a1
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b77a6
    LEA EAX,[EBX + 0x1f788]             ; 004b77a9
    PUSH EAX                            ; 004b77af
    MOV EDX,dword ptr [0x005b7650]      ; 004b77b0 | DAT_005b7650
    PUSH EDX                            ; 004b77b6
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 004b77b7
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0047ab70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004b77bc
    MOV dword ptr [EBX + 0x2dbc],0x0    ; 004b77bf
    JMP 0x004b7175                      ; 004b77c9
        ;   XREF to: 004b7175 (UNCONDITIONAL_JUMP)  ; caseD_5
    LEA EDX,[EBX + 0x20]                ; 004b77ce
        ;   Label: LAB_004b77ce
    FLD float ptr [EDX]                 ; 004b77d1
    FSUB float ptr [ECX + 0x20]         ; 004b77d3
    FMUL ST0                            ; 004b77d6
    FLD float ptr [EDX + 0x8]           ; 004b77d8
    FSUB float ptr [ECX + 0x28]         ; 004b77db
    FMUL ST0                            ; 004b77de
    FADDP                               ; 004b77e0
    FSQRT                               ; 004b77e2
    FCOMP double ptr [0x00585c52]       ; 004b77e4 | DOUBLE_00585c52
    FNSTSW AX                           ; 004b77ea
    SAHF                                ; 004b77ec
    JNC 0x004b777e                      ; 004b77ed
        ;   XREF to: 004b777e (CONDITIONAL_JUMP)  ; LAB_004b777e
    PUSH ECX                            ; 004b77ef
    LEA EAX,[EBX + 0x20]                ; 004b77f0
    PUSH EAX                            ; 004b77f3
    CALL core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_00552680 ; 004b77f4
        ;   XREF to: 00552680 (UNCONDITIONAL_CALL)  ; CWayPoint * core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_00552680(CWayPoint * this_ptr, CWayPoint * start_waypoint)
    ADD ESP,0x8                         ; 004b77f9
    MOV dword ptr [EBX + 0x1f930],EAX   ; 004b77fc
    JMP 0x004b777e                      ; 004b7802
        ;   XREF to: 004b777e (UNCONDITIONAL_JUMP)  ; LAB_004b777e
    PUSH dword ptr [EBP + 0x18]         ; 004b7807
        ;   Label: LAB_004b7807
    PUSH EBX                            ; 004b780a
    CALL core_hostage.cpp_CHostage_processGrabberFlee_FUN_004b81a0 ; 004b780b
        ;   XREF to: 004b81a0 (UNCONDITIONAL_CALL)  ; int core_hostage.cpp_CHostage_processGrabberFlee_FUN_004b81a0(CHostage * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004b7810
    TEST EAX,EAX                        ; 004b7813
    JNZ 0x004b7175                      ; 004b7815
        ;   XREF to: 004b7175 (CONDITIONAL_JUMP)  ; caseD_5
    PUSH dword ptr [EBP + 0x18]         ; 004b781b
    PUSH EBX                            ; 004b781e
    CALL core_charactr.cpp_CCharacter_FUN_0042af70 ; 004b781f
        ;   XREF to: 0042af70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042af70(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004b7824
    TEST EAX,EAX                        ; 004b7827
    JNZ 0x004b7880                      ; 004b7829
        ;   XREF to: 004b7880 (CONDITIONAL_JUMP)  ; LAB_004b7880
    LEA EAX,[EBX + 0x1f91c]             ; 004b782b
    PUSH EAX                            ; 004b7831
    MOV EAX,[0x01cae0e8]                ; 004b7832 | DAT_01cae0e8
    PUSH 0x41200000                     ; 004b7837
    MOV EDX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004b783c
    PUSH 0x40a00000                     ; 004b7843
    PUSH EDX                            ; 004b7848
    PUSH EBX                            ; 004b7849
    CALL core_charactr.cpp_CCharacter_followActor_FUN_00428780 ; 004b784a
        ;   XREF to: 00428780 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_followActor_FUN_00428780(CCharacter * this_ptr, CDemonActor * actor, float min_dist, float max_dist, ...)
    ADD ESP,0x14                        ; 004b784f
    MOV EAX,dword ptr [EBX + 0x1f91c]   ; 004b7852
        ;   Label: LAB_004b7852
    LEA EDX,[EBX + 0x150]               ; 004b7858
    CMP EAX,0x2                         ; 004b785e
    JNC 0x004b78eb                      ; 004b7861
        ;   XREF to: 004b78eb (CONDITIONAL_JUMP)  ; LAB_004b78eb
    CMP EAX,0x1                         ; 004b7867
    JNZ 0x004b7672                      ; 004b786a
        ;   XREF to: 004b7672 (CONDITIONAL_JUMP)  ; LAB_004b7672
    PUSH EAX                            ; 004b7870
    PUSH EAX                            ; 004b7871
    PUSH EDX                            ; 004b7872
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b7873
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b7878
    JMP 0x004b7175                      ; 004b787b
        ;   XREF to: 004b7175 (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV dword ptr [EBX + 0x1f91c],EAX   ; 004b7880
        ;   Label: LAB_004b7880
    JMP 0x004b7852                      ; 004b7886
        ;   XREF to: 004b7852 (UNCONDITIONAL_JUMP)  ; LAB_004b7852
    PUSH 0x1                            ; 004b7888
        ;   Label: LAB_004b7888
    PUSH 0x0                            ; 004b788a
    PUSH EDX                            ; 004b788c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b788d
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b7892
    PUSH EBX                            ; 004b7895
    PUSH 0x585b36                       ; 004b7896 | = "%s left behind!\n"
    MOV ECX,dword ptr [0x005ad350]      ; 004b789b | g_CConsole_PTR_005ad350
    PUSH ECX                            ; 004b78a1 | g_CConsole_0077ad0c
    MOV dword ptr [EBX + 0x1f924],0x2   ; 004b78a2
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004b78ac
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b78b1
    LEA EAX,[EBX + 0x1f65c]             ; 004b78b4
    PUSH EAX                            ; 004b78ba
    MOV ESI,dword ptr [0x005b7650]      ; 004b78bb | DAT_005b7650
    PUSH ESI                            ; 004b78c1
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 004b78c2
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0047ab70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004b78c7
    MOV dword ptr [EBX + 0x2dbc],0x0    ; 004b78ca
    JMP 0x004b7175                      ; 004b78d4
        ;   XREF to: 004b7175 (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004b78d9
        ;   Label: LAB_004b78d9
    PUSH 0x2                            ; 004b78db
    PUSH EDX                            ; 004b78dd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b78de
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b78e3
    JMP 0x004b7175                      ; 004b78e6
        ;   XREF to: 004b7175 (UNCONDITIONAL_JUMP)  ; caseD_5
    JBE 0x004b78d9                      ; 004b78eb
        ;   XREF to: 004b78d9 (CONDITIONAL_JUMP)  ; LAB_004b78d9
        ;   Label: LAB_004b78eb
    CMP EAX,0x3                         ; 004b78ed
    JZ 0x004b7888                       ; 004b78f0
        ;   XREF to: 004b7888 (CONDITIONAL_JUMP)  ; LAB_004b7888
    JMP 0x004b7672                      ; 004b78f2
        ;   XREF to: 004b7672 (UNCONDITIONAL_JUMP)  ; LAB_004b7672
    PUSH dword ptr [EBP + 0x18]         ; 004b78f7
        ;   Label: caseD_2
    PUSH EBX                            ; 004b78fa
    CALL core_hostage.cpp_CHostage_processGrabberFlee_FUN_004b81a0 ; 004b78fb
        ;   XREF to: 004b81a0 (UNCONDITIONAL_CALL)  ; int core_hostage.cpp_CHostage_processGrabberFlee_FUN_004b81a0(CHostage * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004b7900
    TEST EAX,EAX                        ; 004b7903
    JNZ 0x004b7175                      ; 004b7905
        ;   XREF to: 004b7175 (CONDITIONAL_JUMP)  ; caseD_5
    LEA EAX,[EBX + 0x1f91c]             ; 004b790b
    PUSH EAX                            ; 004b7911
    MOV EAX,[0x01cae0e8]                ; 004b7912 | DAT_01cae0e8
    PUSH 0x41200000                     ; 004b7917
    MOV EDX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004b791c
    PUSH 0x40800000                     ; 004b7923
    PUSH EDX                            ; 004b7928
    PUSH EBX                            ; 004b7929
    CALL core_charactr.cpp_CCharacter_followActor_FUN_00428780 ; 004b792a
        ;   XREF to: 00428780 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_followActor_FUN_00428780(CCharacter * this_ptr, CDemonActor * actor, float min_dist, float max_dist, ...)
    ADD ESP,0x14                        ; 004b792f
    XOR ECX,ECX                         ; 004b7932
    MOV EAX,dword ptr [EBX + 0x1f91c]   ; 004b7934
    MOV dword ptr [ESP + 0x170],ECX     ; 004b793a
    CMP EAX,0x1                         ; 004b7941
    JNC 0x004b799a                      ; 004b7944
        ;   XREF to: 004b799a (CONDITIONAL_JUMP)  ; LAB_004b799a
    TEST EAX,EAX                        ; 004b7946
    JNZ 0x004b79a1                      ; 004b7948
        ;   XREF to: 004b79a1 (CONDITIONAL_JUMP)  ; LAB_004b79a1
    PUSH 0x1                            ; 004b794a
    PUSH ECX                            ; 004b794c
    PUSH ESI                            ; 004b794d
        ;   Label: LAB_004b794d
    MOV dword ptr [EBX + 0x1f924],0x1   ; 004b794e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b7958
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b795d
    PUSH EBX                            ; 004b7960
        ;   Label: LAB_004b7960
    PUSH 0x585b47                       ; 004b7961 | = "%s was left behind, but now can follo..."
    MOV EAX,[0x005ad350]                ; 004b7966 | g_CConsole_PTR_005ad350
    PUSH EAX                            ; 004b796b | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004b796c
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b7971
    LEA EAX,[EBX + 0x1f6c0]             ; 004b7974
    PUSH EAX                            ; 004b797a
    MOV EDX,dword ptr [0x005b7650]      ; 004b797b | DAT_005b7650
    PUSH EDX                            ; 004b7981
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 004b7982
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0047ab70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004b7987
    JMP 0x004b7175                      ; 004b798a
        ;   XREF to: 004b7175 (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004b798f
        ;   Label: LAB_004b798f
    PUSH 0x1                            ; 004b7991
    JMP 0x004b794d                      ; 004b7993
        ;   XREF to: 004b794d (UNCONDITIONAL_JUMP)  ; LAB_004b794d
    PUSH 0x1                            ; 004b7995
        ;   Label: LAB_004b7995
    PUSH EAX                            ; 004b7997
    JMP 0x004b794d                      ; 004b7998
        ;   XREF to: 004b794d (UNCONDITIONAL_JUMP)  ; LAB_004b794d
    JBE 0x004b798f                      ; 004b799a
        ;   XREF to: 004b798f (CONDITIONAL_JUMP)  ; LAB_004b798f
        ;   Label: LAB_004b799a
    CMP EAX,0x2                         ; 004b799c
    JZ 0x004b7995                       ; 004b799f
        ;   XREF to: 004b7995 (CONDITIONAL_JUMP)  ; LAB_004b7995
    PUSH 0x1                            ; 004b79a1
        ;   Label: LAB_004b79a1
    PUSH 0x0                            ; 004b79a3
    LEA EAX,[EBX + 0x150]               ; 004b79a5
    PUSH EAX                            ; 004b79ab
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b79ac
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b79b1
    CMP dword ptr [ESP + 0x170],0x0     ; 004b79b4
    JNZ 0x004b7960                      ; 004b79bc
        ;   XREF to: 004b7960 (CONDITIONAL_JUMP)  ; LAB_004b7960
    JMP 0x004b7175                      ; 004b79be
        ;   XREF to: 004b7175 (UNCONDITIONAL_JUMP)  ; caseD_5
    CMP dword ptr [EBX + 0x1f930],0x0   ; 004b79c3
        ;   Label: caseD_3
    JNZ 0x004b7b09                      ; 004b79ca
        ;   XREF to: 004b7b09 (CONDITIONAL_JUMP)  ; LAB_004b7b09
    PUSH EBX                            ; 004b79d0
    PUSH 0x585b76                       ; 004b79d1 | = "%s doesn't know next waypoint going h..."
    MOV ECX,dword ptr [0x005ad350]      ; 004b79d6 | g_CConsole_PTR_005ad350
    PUSH ECX                            ; 004b79dc | g_CConsole_0077ad0c
    MOV dword ptr [EBX + 0x1f924],0x2   ; 004b79dd
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004b79e7
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b79ec
    JMP 0x004b7175                      ; 004b79ef
        ;   XREF to: 004b7175 (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV EDX,dword ptr [EBX + 0x1f930]   ; 004b79f4
        ;   Label: caseD_0
    PUSH EDX                            ; 004b79fa
    PUSH EBX                            ; 004b79fb
    PUSH 0x585bab                       ; 004b79fc | = "%s reached waypoint %s!\n"
    MOV ECX,dword ptr [0x005ad350]      ; 004b7a01 | g_CConsole_PTR_005ad350
    PUSH ECX                            ; 004b7a07 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004b7a08
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    MOV EAX,dword ptr [EBX + 0x1f930]   ; 004b7a0d
    MOV ESI,dword ptr [EBX + 0x1f928]   ; 004b7a13
    ADD ESP,0x10                        ; 004b7a19
    CMP EAX,ESI                         ; 004b7a1c
    JNZ 0x004b7a4e                      ; 004b7a1e
        ;   XREF to: 004b7a4e (CONDITIONAL_JUMP)  ; LAB_004b7a4e
    PUSH EBX                            ; 004b7a20
    PUSH 0x585bc4                       ; 004b7a21 | = "%s rescued and taken home!\n"
    MOV EDX,dword ptr [0x005ad350]      ; 004b7a26 | g_CConsole_PTR_005ad350
    PUSH EDX                            ; 004b7a2c | g_CConsole_0077ad0c
    MOV dword ptr [EBX + 0x1f924],0x4   ; 004b7a2d
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004b7a37
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b7a3c
    MOV dword ptr [EBX + 0x1f930],0x0   ; 004b7a3f
    JMP 0x004b7175                      ; 004b7a49
        ;   XREF to: 004b7175 (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH ESI                            ; 004b7a4e
        ;   Label: LAB_004b7a4e
    LEA EAX,[EBX + 0x20]                ; 004b7a4f
    PUSH EAX                            ; 004b7a52
    CALL core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_00552680 ; 004b7a53
        ;   XREF to: 00552680 (UNCONDITIONAL_CALL)  ; CWayPoint * core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_00552680(CWayPoint * this_ptr, CWayPoint * start_waypoint)
    ADD ESP,0x8                         ; 004b7a58
    MOV dword ptr [EBX + 0x1f930],EAX   ; 004b7a5b
    JMP 0x004b7175                      ; 004b7a61
        ;   XREF to: 004b7175 (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004b7a66
        ;   Label: caseD_3
    PUSH 0x0                            ; 004b7a68
    PUSH ESI                            ; 004b7a6a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b7a6b
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b7a70
    PUSH EBX                            ; 004b7a73
    PUSH 0x585be0                       ; 004b7a74 | = "%s got confused going home.  Help me!\n"
    MOV ECX,dword ptr [0x005ad350]      ; 004b7a79 | g_CConsole_PTR_005ad350
    PUSH ECX                            ; 004b7a7f | g_CConsole_0077ad0c
    MOV dword ptr [EBX + 0x1f924],0x2   ; 004b7a80
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004b7a8a
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b7a8f
    PUSH 0x1                            ; 004b7a92
    PUSH 0x0                            ; 004b7a94
    PUSH ESI                            ; 004b7a96
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b7a97
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b7a9c
    LEA EAX,[EBX + 0x1f7ec]             ; 004b7a9f
    PUSH EAX                            ; 004b7aa5
    MOV ESI,dword ptr [0x005b7650]      ; 004b7aa6 | DAT_005b7650
    PUSH ESI                            ; 004b7aac
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 004b7aad
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0047ab70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004b7ab2
    PUSH 0x1                            ; 004b7ab5
    LEA EAX,[EBX + 0x1f5d8]             ; 004b7ab7
    PUSH EAX                            ; 004b7abd
    MOV EAX,[0x005b7650]                ; 004b7abe | DAT_005b7650
    PUSH EAX                            ; 004b7ac3
    CALL core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004802e0 ; 004b7ac4
        ;   XREF to: 004802e0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004802e0(CEventList * this_ptr, char * name, int add_flag)
    MOV dword ptr [EBX + 0x1f924],0x4   ; 004b7ac9
    ADD ESP,0xc                         ; 004b7ad3
    MOV dword ptr [EBX + 0x1f930],0x0   ; 004b7ad6
    JMP 0x004b7175                      ; 004b7ae0
        ;   XREF to: 004b7175 (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004b7ae5
        ;   Label: caseD_1
    PUSH 0x1                            ; 004b7ae7
    PUSH ESI                            ; 004b7ae9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b7aea
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b7aef
    JMP 0x004b7175                      ; 004b7af2
        ;   XREF to: 004b7175 (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004b7af7
        ;   Label: caseD_2
    PUSH 0x2                            ; 004b7af9
    PUSH ESI                            ; 004b7afb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b7afc
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b7b01
    JMP 0x004b7175                      ; 004b7b04
        ;   XREF to: 004b7175 (UNCONDITIONAL_JUMP)  ; caseD_5
    LEA EAX,[EBX + 0x1f91c]             ; 004b7b09
        ;   Label: LAB_004b7b09
    PUSH EAX                            ; 004b7b0f
    PUSH 0xbf800000                     ; 004b7b10
    MOV EDX,dword ptr [EBX + 0x1f930]   ; 004b7b15
    PUSH 0x3f800000                     ; 004b7b1b
    PUSH EDX                            ; 004b7b20
    PUSH EBX                            ; 004b7b21
    CALL core_charactr.cpp_CCharacter_followActor_FUN_00428780 ; 004b7b22
        ;   XREF to: 00428780 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_followActor_FUN_00428780(CCharacter * this_ptr, CDemonActor * actor, float min_dist, float max_dist, ...)
    MOV EAX,dword ptr [EBX + 0x1f91c]   ; 004b7b27
    ADD ESP,0x14                        ; 004b7b2d
    CMP EAX,0x3                         ; 004b7b30
    JA 0x004b7175                       ; 004b7b33
        ;   XREF to: 004b7175 (CONDITIONAL_JUMP)  ; caseD_5
    JMP dword ptr [EAX*0x4 + 0x4b6d58]  ; 004b7b39 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EDX,0x1                         ; 004b7b40
        ;   Label: caseD_4
    MOV ECX,dword ptr [EBX + 0x1f92c]   ; 004b7b45
    MOV dword ptr [ESP + 0x194],EDX     ; 004b7b4b
    TEST ECX,ECX                        ; 004b7b52
    JZ 0x004b7175                       ; 004b7b54
        ;   XREF to: 004b7175 (CONDITIONAL_JUMP)  ; caseD_5
    FLD float ptr [EBX + 0x242c]        ; 004b7b5a
    FLD float ptr [EBP + 0x18]          ; 004b7b60
    FMUL double ptr [0x00585c32]        ; 004b7b63 | DOUBLE_00585c32
    FSTP double ptr [ESP]               ; 004b7b69
    FCOMP double ptr [ESP]              ; 004b7b6c
    FNSTSW AX                           ; 004b7b6f
    SAHF                                ; 004b7b71
    JNC 0x004b7b7d                      ; 004b7b72
        ;   XREF to: 004b7b7d (CONDITIONAL_JUMP)  ; LAB_004b7b7d
    FLD double ptr [ESP]                ; 004b7b74
    FSTP float ptr [EBX + 0x242c]       ; 004b7b77
    MOV EAX,dword ptr [EBX + 0x1f92c]   ; 004b7b7d
        ;   Label: LAB_004b7b7d
    ADD EAX,0x20                        ; 004b7b83
    PUSH EAX                            ; 004b7b86
    LEA EAX,[ESP + 0x138]               ; 004b7b87
    PUSH EAX                            ; 004b7b8e
    PUSH EBX                            ; 004b7b8f
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004b7b90
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    LEA EDX,[EBX + 0x2414]              ; 004b7b95
    ADD ESP,0xc                         ; 004b7b9b
    CMP EDX,EAX                         ; 004b7b9e
    JZ 0x004b7bb2                       ; 004b7ba0
        ;   XREF to: 004b7bb2 (CONDITIONAL_JUMP)  ; LAB_004b7bb2
    MOV ECX,dword ptr [EAX]             ; 004b7ba2
    MOV dword ptr [EDX],ECX             ; 004b7ba4
    MOV ECX,dword ptr [EAX + 0x4]       ; 004b7ba6
    MOV dword ptr [EDX + 0x4],ECX       ; 004b7ba9
    MOV ECX,dword ptr [EAX + 0x8]       ; 004b7bac
    MOV dword ptr [EDX + 0x8],ECX       ; 004b7baf
    LEA EDX,[EBX + 0x2414]              ; 004b7bb2
        ;   Label: LAB_004b7bb2
    MOV EAX,dword ptr [EDX]             ; 004b7bb8
    MOV dword ptr [ESP + 0x11c],EAX     ; 004b7bba
    LEA EAX,[EDX + 0x4]                 ; 004b7bc1
    MOV EAX,dword ptr [EAX]             ; 004b7bc4
    FLD float ptr [ESP + 0x11c]         ; 004b7bc6
    MOV dword ptr [ESP + 0x120],EAX     ; 004b7bcd
    LEA EAX,[EDX + 0x8]                 ; 004b7bd4
    FMUL float ptr [ESP + 0x11c]        ; 004b7bd7
    MOV EAX,dword ptr [EAX]             ; 004b7bde
    MOV dword ptr [ESP + 0x124],EAX     ; 004b7be0
    FLD float ptr [ESP + 0x124]         ; 004b7be7
    FMUL ST0                            ; 004b7bee
    FADDP                               ; 004b7bf0
    FSQRT                               ; 004b7bf2
    XOR ESI,ESI                         ; 004b7bf4
    MOV dword ptr [ESP + 0x120],ESI     ; 004b7bf6
    FSTP float ptr [ESP + 0x18c]        ; 004b7bfd
    MOV EAX,dword ptr [ESP + 0x18c]     ; 004b7c04
    FLD float ptr [ESP + 0x18c]         ; 004b7c0b
    MOV dword ptr [ESP + 0x28],EAX      ; 004b7c12
    FCOMP float ptr [EBX + 0x242c]      ; 004b7c16
    FNSTSW AX                           ; 004b7c1c
    SAHF                                ; 004b7c1e
    JBE 0x004b7c5e                      ; 004b7c1f
        ;   XREF to: 004b7c5e (CONDITIONAL_JUMP)  ; LAB_004b7c5e
    FLD float ptr [EBX + 0x242c]        ; 004b7c21
    FDIV float ptr [ESP + 0x18c]        ; 004b7c27
    FLD float ptr [EDX]                 ; 004b7c2e
    FXCH                                ; 004b7c30
    FSTP float ptr [ESP + 0x190]        ; 004b7c32
    FMUL float ptr [ESP + 0x190]        ; 004b7c39
    FLD float ptr [EDX + 0x4]           ; 004b7c40
    FMUL float ptr [ESP + 0x190]        ; 004b7c43
    FLD float ptr [EDX + 0x8]           ; 004b7c4a
    FMUL float ptr [ESP + 0x190]        ; 004b7c4d
    FXCH ST2                            ; 004b7c54
    FSTP float ptr [EDX]                ; 004b7c56
    FSTP float ptr [EDX + 0x4]          ; 004b7c58
    FSTP float ptr [EDX + 0x8]          ; 004b7c5b
    LEA EAX,[EBX + 0x2414]              ; 004b7c5e
        ;   Label: LAB_004b7c5e
    PUSH EAX                            ; 004b7c64
    LEA EAX,[ESP + 0x78]                ; 004b7c65
    PUSH EAX                            ; 004b7c69
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004b7c6a
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 004b7c6f
    FLD float ptr [ESP + 0x28]          ; 004b7c72
    FMUL double ptr [0x00585c3a]        ; 004b7c76 | DOUBLE_00585c3a
    FLD1                                ; 004b7c7c
    MOV EDX,dword ptr [EAX + 0x4]       ; 004b7c7e
    MOV dword ptr [EBX + 0x2410],EDX    ; 004b7c81
    FXCH                                ; 004b7c87
    FSTP double ptr [ESP + 0x18]        ; 004b7c89
    FCOMP double ptr [ESP + 0x18]       ; 004b7c8d
    FNSTSW AX                           ; 004b7c91
    SAHF                                ; 004b7c93
    JBE 0x004b7cf4                      ; 004b7c94
        ;   XREF to: 004b7cf4 (CONDITIONAL_JUMP)  ; LAB_004b7cf4
    MOV EAX,dword ptr [EBX + 0x1f92c]   ; 004b7c96
    FLD float ptr [EAX + 0x34]          ; 004b7c9c
    FSUB float ptr [EBX + 0x34]         ; 004b7c9f
    SUB ESP,0x4                         ; 004b7ca2
    FSTP float ptr [ESP]                ; 004b7ca5
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004b7ca8
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x1ac],EAX     ; 004b7cad
    FLD float ptr [ESP + 0x1ac]         ; 004b7cb4
    ADD ESP,0x4                         ; 004b7cbb
    FSUB float ptr [EBX + 0x2410]       ; 004b7cbe
    SUB ESP,0x4                         ; 004b7cc4
    FSTP float ptr [ESP]                ; 004b7cc7
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004b7cca
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x1ac],EAX     ; 004b7ccf
    FLD float ptr [ESP + 0x1ac]         ; 004b7cd6
    ADD ESP,0x4                         ; 004b7cdd
    FLD1                                ; 004b7ce0
    FSUB double ptr [ESP + 0x18]        ; 004b7ce2
    FMULP                               ; 004b7ce6
    FADD float ptr [EBX + 0x2410]       ; 004b7ce8
    FSTP float ptr [EBX + 0x2410]       ; 004b7cee
    PUSH dword ptr [EBX + 0x2410]       ; 004b7cf4
        ;   Label: LAB_004b7cf4
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004b7cfa
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x1ac],EAX     ; 004b7cff
    FLD float ptr [ESP + 0x1ac]         ; 004b7d06
    ADD ESP,0x4                         ; 004b7d0d
    FSTP float ptr [EBX + 0x2410]       ; 004b7d10
    FLD float ptr [ESP + 0x28]          ; 004b7d16
    FCOMP double ptr [0x00585c42]       ; 004b7d1a | DOUBLE_00585c42
    FNSTSW AX                           ; 004b7d20
    SAHF                                ; 004b7d22
    JNC 0x004b7d9b                      ; 004b7d23
        ;   XREF to: 004b7d9b (CONDITIONAL_JUMP)  ; LAB_004b7d9b
    FLD float ptr [EBX + 0x2410]        ; 004b7d25
    FABS                                ; 004b7d2b
    FCOMP double ptr [0x00585c4a]       ; 004b7d2d | DOUBLE_00585c4a
    FNSTSW AX                           ; 004b7d33
    SAHF                                ; 004b7d35
    JNC 0x004b7d9b                      ; 004b7d36
        ;   XREF to: 004b7d9b (CONDITIONAL_JUMP)  ; LAB_004b7d9b
    MOV EAX,dword ptr [EBX + 0x1f920]   ; 004b7d38
    TEST EAX,EAX                        ; 004b7d3e
    JNZ 0x004b7dfd                      ; 004b7d40
        ;   XREF to: 004b7dfd (CONDITIONAL_JUMP)  ; LAB_004b7dfd
    PUSH 0x1                            ; 004b7d46
        ;   Label: LAB_004b7d46
    PUSH 0x0                            ; 004b7d48
    LEA EAX,[EBX + 0x150]               ; 004b7d4a
    PUSH EAX                            ; 004b7d50
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b7d51
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b7d56
    MOV dword ptr [EBX + 0x1f924],0x5   ; 004b7d59
    LEA EAX,[EBX + 0x1f7ec]             ; 004b7d63
        ;   Label: LAB_004b7d63
    PUSH EAX                            ; 004b7d69
    MOV ECX,dword ptr [0x005b7650]      ; 004b7d6a | DAT_005b7650
    PUSH ECX                            ; 004b7d70
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 004b7d71
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0047ab70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004b7d76
    PUSH 0x1                            ; 004b7d79
    LEA EAX,[EBX + 0x1f5d8]             ; 004b7d7b
    PUSH EAX                            ; 004b7d81
    MOV ESI,dword ptr [0x005b7650]      ; 004b7d82 | DAT_005b7650
    PUSH ESI                            ; 004b7d88
    CALL core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004802e0 ; 004b7d89
        ;   XREF to: 004802e0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004802e0(CEventList * this_ptr, char * name, int add_flag)
    ADD ESP,0xc                         ; 004b7d8e
    MOV dword ptr [EBX + 0x1f92c],0x0   ; 004b7d91
    FLD float ptr [EBP + 0x18]          ; 004b7d9b
        ;   Label: LAB_004b7d9b
    FMUL double ptr [0x00585c2a]        ; 004b7d9e | DOUBLE_00585c2a
    FLD float ptr [EBX + 0x2410]        ; 004b7da4
    FXCH                                ; 004b7daa
    FST float ptr [ESP + 0x184]         ; 004b7dac
    FCHS                                ; 004b7db3
    FSTP float ptr [ESP + 0x180]        ; 004b7db5
    FCOMP float ptr [ESP + 0x180]       ; 004b7dbc
    FNSTSW AX                           ; 004b7dc3
    SAHF                                ; 004b7dc5
    JNC 0x004b7dd5                      ; 004b7dc6
        ;   XREF to: 004b7dd5 (CONDITIONAL_JUMP)  ; LAB_004b7dd5
    MOV EAX,dword ptr [ESP + 0x180]     ; 004b7dc8
    MOV dword ptr [EBX + 0x2410],EAX    ; 004b7dcf
    FLD float ptr [EBX + 0x2410]        ; 004b7dd5
        ;   Label: LAB_004b7dd5
    FCOMP float ptr [ESP + 0x184]       ; 004b7ddb
    FNSTSW AX                           ; 004b7de2
    SAHF                                ; 004b7de4
    JBE 0x004b7175                      ; 004b7de5
        ;   XREF to: 004b7175 (CONDITIONAL_JUMP)  ; caseD_5
    MOV EAX,dword ptr [ESP + 0x184]     ; 004b7deb
    MOV dword ptr [EBX + 0x2410],EAX    ; 004b7df2
    JMP 0x004b7175                      ; 004b7df8
        ;   XREF to: 004b7175 (UNCONDITIONAL_JUMP)  ; caseD_5
    CMP EAX,0x4                         ; 004b7dfd
        ;   Label: LAB_004b7dfd
    JZ 0x004b7d46                       ; 004b7e00
        ;   XREF to: 004b7d46 (CONDITIONAL_JUMP)  ; LAB_004b7d46
    PUSH 0x1                            ; 004b7e06
    PUSH 0xa                            ; 004b7e08
    LEA EAX,[EBX + 0x150]               ; 004b7e0a
    PUSH EAX                            ; 004b7e10
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b7e11
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b7e16
    JMP 0x004b7d63                      ; 004b7e19
        ;   XREF to: 004b7d63 (UNCONDITIONAL_JUMP)  ; LAB_004b7d63
    MOV EAX,dword ptr [EBX + 0x1f924]   ; 004b7e1e
        ;   Label: LAB_004b7e1e
    CMP EAX,0x5                         ; 004b7e24
    JA 0x004b7175                       ; 004b7e27
        ;   XREF to: 004b7175 (CONDITIONAL_JUMP)  ; caseD_5
    JMP dword ptr [EAX*0x4 + 0x4b6d68]  ; 004b7e2d | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    LEA EAX,[EBX + 0x150]               ; 004b7e34
        ;   Label: LAB_004b7e34
    PUSH EAX                            ; 004b7e3a
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004b7e3b
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004b7e40
    ADD ESP,0x4                         ; 004b7e43
    CMP EAX,0x8                         ; 004b7e46
    JZ 0x004b7fcf                       ; 004b7e49
        ;   XREF to: 004b7fcf (CONDITIONAL_JUMP)  ; LAB_004b7fcf
    TEST EAX,EAX                        ; 004b7e4f
    JZ 0x004b7fcf                       ; 004b7e51
        ;   XREF to: 004b7fcf (CONDITIONAL_JUMP)  ; LAB_004b7fcf
    CMP EAX,0xd                         ; 004b7e57
    JZ 0x004b7fcf                       ; 004b7e5a
        ;   XREF to: 004b7fcf (CONDITIONAL_JUMP)  ; LAB_004b7fcf
    CMP EAX,0xa                         ; 004b7e60
    JZ 0x004b7fcf                       ; 004b7e63
        ;   XREF to: 004b7fcf (CONDITIONAL_JUMP)  ; LAB_004b7fcf
    FLD float ptr [EBP + 0x18]          ; 004b7e69
        ;   Label: LAB_004b7e69
    FST double ptr [ESP + 0x8]          ; 004b7e6c
    FMUL double ptr [0x00585c7a]        ; 004b7e70 | DOUBLE_00585c7a
    FLD float ptr [EBX + 0x2424]        ; 004b7e76
    FXCH                                ; 004b7e7c
    FSUBR ST0,ST1                       ; 004b7e7e
    LEA ESI,[EBX + 0x2420]              ; 004b7e80
    FSTP ST1                            ; 004b7e86
    FSTP float ptr [EBX + 0x2424]       ; 004b7e88
    FLD float ptr [ESI]                 ; 004b7e8e
    FMUL float ptr [EBP + 0x18]         ; 004b7e90
    FSTP float ptr [ESP + 0xbc]         ; 004b7e93
    FLD float ptr [ESI + 0x4]           ; 004b7e9a
    FMUL float ptr [EBP + 0x18]         ; 004b7e9d
    LEA EAX,[EBX + 0x2414]              ; 004b7ea0
    FSTP float ptr [ESP + 0xc0]         ; 004b7ea6
    FLD float ptr [ESI + 0x8]           ; 004b7ead
    FMUL float ptr [EBP + 0x18]         ; 004b7eb0
    LEA EDX,[EBX + 0x23a4]              ; 004b7eb3
    FLD float ptr [ESP + 0xbc]          ; 004b7eb9
    FXCH                                ; 004b7ec0
    FSTP float ptr [ESP + 0xc4]         ; 004b7ec2
    FADD float ptr [EAX]                ; 004b7ec9
    FLD float ptr [ESP + 0xc0]          ; 004b7ecb
    FXCH                                ; 004b7ed2
    FSTP float ptr [ESP + 0x98]         ; 004b7ed4
    FADD float ptr [EAX + 0x4]          ; 004b7edb
    FLD float ptr [ESP + 0xc4]          ; 004b7ede
    FXCH                                ; 004b7ee5
    FSTP float ptr [ESP + 0x9c]         ; 004b7ee7
    FADD float ptr [EAX + 0x8]          ; 004b7eee
    FLD float ptr [ESP + 0x98]          ; 004b7ef1
    FXCH                                ; 004b7ef8
    FSTP float ptr [ESP + 0xa0]         ; 004b7efa
    FADD float ptr [EDX]                ; 004b7f01
    FLD float ptr [ESP + 0x9c]          ; 004b7f03
    FXCH                                ; 004b7f0a
    FSTP float ptr [ESP + 0x110]        ; 004b7f0c
    FADD float ptr [EDX + 0x4]          ; 004b7f13
    FLD float ptr [ESP + 0xa0]          ; 004b7f16
    FXCH                                ; 004b7f1d
    FSTP float ptr [ESP + 0x114]        ; 004b7f1f
    FADD float ptr [EDX + 0x8]          ; 004b7f26
    FSTP float ptr [ESP + 0x118]        ; 004b7f29
    MOV dword ptr [EAX + 0x8],0x0       ; 004b7f30
    MOV ECX,dword ptr [EAX + 0x8]       ; 004b7f37
    MOV dword ptr [EAX + 0x4],ECX       ; 004b7f3a
    MOV ECX,dword ptr [EAX + 0x4]       ; 004b7f3d
    MOV dword ptr [EAX],ECX             ; 004b7f40
    MOV dword ptr [EDX + 0x8],0x0       ; 004b7f42
    LEA ESI,[EBX + 0x20]                ; 004b7f49
    MOV EAX,dword ptr [EDX + 0x8]       ; 004b7f4c
    MOV dword ptr [EDX + 0x4],EAX       ; 004b7f4f
    MOV EAX,dword ptr [EDX + 0x4]       ; 004b7f52
    MOV dword ptr [EDX],EAX             ; 004b7f55
    MOV EAX,dword ptr [ESI]             ; 004b7f57
    MOV dword ptr [ESP + 0xc8],EAX      ; 004b7f59
    LEA EAX,[ESI + 0x4]                 ; 004b7f60
    MOV EAX,dword ptr [EAX]             ; 004b7f63
    MOV dword ptr [ESP + 0xcc],EAX      ; 004b7f65
    LEA EAX,[ESI + 0x8]                 ; 004b7f6c
    MOV EAX,dword ptr [EAX]             ; 004b7f6f
    MOV dword ptr [ESP + 0xd0],EAX      ; 004b7f71
    LEA EAX,[ESP + 0x110]               ; 004b7f78
    PUSH EAX                            ; 004b7f7f
    PUSH EBX                            ; 004b7f80
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 004b7f81
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004b7f86
    FLD float ptr [EBX + 0x2dcc]        ; 004b7f89
    FADD float ptr [EBP + 0x18]         ; 004b7f8f
    FSTP float ptr [EBX + 0x2dcc]       ; 004b7f92
    FLD float ptr [ESP + 0x114]         ; 004b7f98
    FMUL ST0                            ; 004b7f9f
    FLD float ptr [ESP + 0x110]         ; 004b7fa1
    FMUL ST0                            ; 004b7fa8
    FADDP                               ; 004b7faa
    FLD float ptr [ESP + 0x118]         ; 004b7fac
    FMUL ST0                            ; 004b7fb3
    FADDP                               ; 004b7fb5
    FSQRT                               ; 004b7fb7
    FLD double ptr [ESP + 0x8]          ; 004b7fb9
    FMUL double ptr [0x00585c82]        ; 004b7fbd | DOUBLE_00585c82
    FCOMPP                              ; 004b7fc3
    FNSTSW AX                           ; 004b7fc5
    SAHF                                ; 004b7fc7
    JBE 0x004b7fe8                      ; 004b7fc8
        ;   XREF to: 004b7fe8 (CONDITIONAL_JUMP)  ; LAB_004b7fe8
    JMP 0x004b7297                      ; 004b7fca
        ;   XREF to: 004b7297 (UNCONDITIONAL_JUMP)  ; LAB_004b7297
    MOV ECX,dword ptr [EBX + 0xdc]      ; 004b7fcf
        ;   Label: LAB_004b7fcf
    TEST ECX,ECX                        ; 004b7fd5
    JNZ 0x004b7e69                      ; 004b7fd7
        ;   XREF to: 004b7e69 (CONDITIONAL_JUMP)  ; LAB_004b7e69
    MOV dword ptr [EBX + 0x2dcc],ECX    ; 004b7fdd
    JMP 0x004b72a1                      ; 004b7fe3
        ;   XREF to: 004b72a1 (UNCONDITIONAL_JUMP)  ; LAB_004b72a1
    FLD float ptr [ESI]                 ; 004b7fe8
        ;   Label: LAB_004b7fe8
    FSUB float ptr [ESP + 0xc8]         ; 004b7fea
    FMUL ST0                            ; 004b7ff1
    FLD float ptr [ESI + 0x4]           ; 004b7ff3
    FSUB float ptr [ESP + 0xcc]         ; 004b7ff6
    FMUL ST0                            ; 004b7ffd
    FLD float ptr [ESI + 0x8]           ; 004b7fff
    FXCH                                ; 004b8002
    FADDP ST2,ST0                       ; 004b8004
    FSUB float ptr [ESP + 0xd0]         ; 004b8006
    FMUL ST0                            ; 004b800d
    FADDP                               ; 004b800f
    FSQRT                               ; 004b8011
    FLD double ptr [ESP + 0x8]          ; 004b8013
    FMUL double ptr [0x00585c8a]        ; 004b8017 | DOUBLE_00585c8a
    FCOMPP                              ; 004b801d
    FNSTSW AX                           ; 004b801f
    SAHF                                ; 004b8021
    JC 0x004b7297                       ; 004b8022
        ;   XREF to: 004b7297 (CONDITIONAL_JUMP)  ; LAB_004b7297
    JMP 0x004b72a1                      ; 004b8028
        ;   XREF to: 004b72a1 (UNCONDITIONAL_JUMP)  ; LAB_004b72a1
    CMP dword ptr [ESP + 0x174],0x0     ; 004b802d
        ;   Label: LAB_004b802d
    JNZ 0x004b7323                      ; 004b8035
        ;   XREF to: 004b7323 (CONDITIONAL_JUMP)  ; LAB_004b7323
    FLD float ptr [EBP + 0x18]          ; 004b803b
    FDIV float ptr [ESP + 0x178]        ; 004b803e
    FSUBR float ptr [EBX + 0x1f94c]     ; 004b8045
    JMP 0x004b7333                      ; 004b804b
        ;   XREF to: 004b7333 (UNCONDITIONAL_JUMP)  ; LAB_004b7333
    FLD1                                ; 004b8050
        ;   Label: LAB_004b8050
    FCOMP double ptr [ESP + 0x10]       ; 004b8052
    FNSTSW AX                           ; 004b8056
    SAHF                                ; 004b8058
    JNC 0x004b8065                      ; 004b8059
        ;   XREF to: 004b8065 (CONDITIONAL_JUMP)  ; LAB_004b8065
    MOV dword ptr [EBX + 0x1f94c],0x3f800000 ; 004b805b
    FLD float ptr [EBX + 0x1f948]       ; 004b8065
        ;   Label: LAB_004b8065
    FMUL double ptr [0x00585c92]        ; 004b806b | DOUBLE_00585c92
    SUB ESP,0x4                         ; 004b8071
    FADD double ptr [0x00585c9a]        ; 004b8074 | DOUBLE_00585c9a
    MOV EAX,[0x01cae1a0]                ; 004b807a | DAT_01cae1a0
    FSTP float ptr [ESP]                ; 004b807f
    PUSH EAX                            ; 004b8082
    LEA ESI,[EBX + 0x150]               ; 004b8083
    PUSH ESI                            ; 004b8089
    CALL core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50 ; 004b808a
        ;   XREF to: 004e1f50 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50(CMotionController * this_ptr, int motion_index, float marker_position)
    MOV dword ptr [ESP + 0x1b4],EAX     ; 004b808f
    FLD float ptr [ESP + 0x1b4]         ; 004b8096
    ADD ESP,0xc                         ; 004b809d
    PUSH 0x51b650                       ; 004b80a0
    MOV EDX,dword ptr [EBX + 0x1f934]   ; 004b80a5
    PUSH EDX                            ; 004b80ab
    MOV ECX,dword ptr [0x01cae1a0]      ; 004b80ac | DAT_01cae1a0
    PUSH dword ptr [EBX + 0x1f94c]      ; 004b80b2
    FSTP float ptr [ESP + 0x174]        ; 004b80b8
    PUSH dword ptr [ESP + 0x174]        ; 004b80bf
    PUSH ECX                            ; 004b80c6
    PUSH ESI                            ; 004b80c7
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0 ; 004b80c8
        ;   XREF to: 0051c3d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    ADD ESP,0x18                        ; 004b80cd
    PUSH 0x51b650                       ; 004b80d0
    MOV EAX,dword ptr [EBX + 0x1f938]   ; 004b80d5
    PUSH EAX                            ; 004b80db
    PUSH dword ptr [EBX + 0x1f94c]      ; 004b80dc
    MOV EDX,dword ptr [0x01cae1a0]      ; 004b80e2 | DAT_01cae1a0
    PUSH dword ptr [ESP + 0x174]        ; 004b80e8
    PUSH EDX                            ; 004b80ef
    PUSH ESI                            ; 004b80f0
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0 ; 004b80f1
        ;   XREF to: 0051c3d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    FLD float ptr [EBX + 0x1f94c]       ; 004b80f6
    FLD1                                ; 004b80fc
    ADD ESP,0x18                        ; 004b80fe
    FCOMPP                              ; 004b8101
    FNSTSW AX                           ; 004b8103
    SAHF                                ; 004b8105
    JA 0x004b7366                       ; 004b8106
        ;   XREF to: 004b7366 (CONDITIONAL_JUMP)  ; LAB_004b7366
    FLD float ptr [EBX + 0x1f948]       ; 004b810c
    FLDZ                                ; 004b8112
    FCOMPP                              ; 004b8114
    FNSTSW AX                           ; 004b8116
    SAHF                                ; 004b8118
    JNC 0x004b7366                      ; 004b8119
        ;   XREF to: 004b7366 (CONDITIONAL_JUMP)  ; LAB_004b7366
    FLD float ptr [EBP + 0x18]          ; 004b811f
    FDIV float ptr [ESP + 0x16c]        ; 004b8122
    FADD float ptr [EBX + 0x1f948]      ; 004b8129
    FST float ptr [EBX + 0x1f948]       ; 004b812f
    FLD1                                ; 004b8135
    FCOMPP                              ; 004b8137
    FNSTSW AX                           ; 004b8139
    SAHF                                ; 004b813b
    JNC 0x004b7366                      ; 004b813c
        ;   XREF to: 004b7366 (CONDITIONAL_JUMP)  ; LAB_004b7366
    MOV dword ptr [EBX + 0x1f948],0x3f800000 ; 004b8142
    JMP 0x004b7366                      ; 004b814c
        ;   XREF to: 004b7366 (UNCONDITIONAL_JUMP)  ; LAB_004b7366
    MOV EAX,[0x02ddf9a8]                ; 004b8151 | g_CWeaponActorType_02ddf970.name_hash
        ;   Label: LAB_004b8151
    PUSH EAX                            ; 004b8156
    MOV EDX,dword ptr [EBX + 0x24f0]    ; 004b8157
    PUSH EDX                            ; 004b815d
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004b815e
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004b8163
    TEST EAX,EAX                        ; 004b8166
    JZ 0x004b7404                       ; 004b8168
        ;   XREF to: 004b7404 (CONDITIONAL_JUMP)  ; LAB_004b7404
    PUSH 0x585c17                       ; 004b816e | = "deputeFireShotgun"
    MOV ECX,dword ptr [0x005b7650]      ; 004b8173 | DAT_005b7650
    PUSH ECX                            ; 004b8179
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004b817a
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004b817f
    TEST EAX,EAX                        ; 004b8182
    JZ 0x004b7404                       ; 004b8184
        ;   XREF to: 004b7404 (CONDITIONAL_JUMP)  ; LAB_004b7404
    MOV dword ptr [EBX + 0x1f948],0x3c23d70a ; 004b818a
    MOV ESP,EBP                         ; 004b8194
    POP EBP                             ; 004b8196
    POP EDI                             ; 004b8197
    POP ESI                             ; 004b8198
    POP EBX                             ; 004b8199
    RET                                 ; 004b819a

