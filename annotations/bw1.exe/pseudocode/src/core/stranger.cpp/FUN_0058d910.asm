; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stranger_cpp_FUN_0058d910(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x190]:8  local_190
; undefined8       Stack[-0x188]:8  local_188
; undefined8       Stack[-0x180]:8  local_180
; undefined        Stack[-0x148]:1  local_148
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined        Stack[-0x130]:1  local_130
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_stranger.cpp_FUN_00591120 at 005911c9
;
; Referenced Globals:
;   undefined4 s_actionPending_d_stranger_005f6da8+1
;   TerminatedCString s_Delta_to_dest_3_2f_3_2f_005f6dd1
;   undefined4 DAT_005f6df9
;   undefined4 DAT_005f6e01
;   undefined4 DAT_005f6e09
;   undefined4 DAT_005f6e11
;   CConsole* g_CConsolePtr = 007db5f0
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CConsole g_CConsoleInstance
;   undefined4 g_CCrateClassInfo.name_hash
;   undefined4 g_CActorDestinationClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.field1364324_0x14d164
;   undefined4 g_CDemonSetInstance.field1364328_0x14d168
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408bb0
;   core_charactr.cpp_FUN_00434590
;   core_dest.cpp_CActorDestination_acceptsActor_FUN_0045d550
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_motion.cpp_FUN_00524a40
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_FUN_005562c0
;   core_setcolid.cpp_FUN_00558450
;   core_stranger.cpp_FUN_00585170
;   engine_console.cpp_FUN_00445430
;   shape_edittool.cpp_FUN_00494340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058d910
        ;   Label: core_stranger.cpp_FUN_0058d910
    PUSH ESI                            ; 0058d911
    PUSH EDI                            ; 0058d912
    PUSH EBP                            ; 0058d913
    MOV EBP,ESP                         ; 0058d914
    SUB ESP,0x188                       ; 0058d916
    AND ESP,0xfffffff8                  ; 0058d91c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058d91f
    MOV EDX,dword ptr [EBX + 0x1ff78]   ; 0058d922
    TEST EDX,EDX                        ; 0058d928
    JNZ 0x0058e201                      ; 0058d92a
        ;   XREF to: 0058e201 (CONDITIONAL_JUMP)  ; LAB_0058e201
    CMP dword ptr [EBX + 0x2628],0x0    ; 0058d930
    JZ 0x0058e201                       ; 0058d937
        ;   XREF to: 0058e201 (CONDITIONAL_JUMP)  ; LAB_0058e201
    CMP dword ptr [EBX + 0x2c98],0xe    ; 0058d93d
    JZ 0x0058d96d                       ; 0058d944
        ;   XREF to: 0058d96d (CONDITIONAL_JUMP)  ; LAB_0058d96d
    PUSH EDX                            ; 0058d946
    PUSH EBX                            ; 0058d947
    CALL core_charactr.cpp_FUN_00434590 ; 0058d948
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434590()
    MOV dword ptr [ESP + 0x18c],EAX     ; 0058d94d
    FLD float ptr [ESP + 0x18c]         ; 0058d954
    ADD ESP,0x8                         ; 0058d95b
    FCOMP double ptr [0x005f6df9]       ; 0058d95e | DAT_005f6df9
    FNSTSW AX                           ; 0058d964
    SAHF                                ; 0058d966
    JC 0x0058e201                       ; 0058d967
        ;   XREF to: 0058e201 (CONDITIONAL_JUMP)  ; LAB_0058e201
    PUSH 0x0                            ; 0058d96d
        ;   Label: LAB_0058d96d
    LEA EAX,[EBX + 0x158]               ; 0058d96f
    PUSH EAX                            ; 0058d975
    CALL core_motion.cpp_FUN_00524a40   ; 0058d976
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x18c],EAX     ; 0058d97b
    FLD float ptr [ESP + 0x18c]         ; 0058d982
    FLD1                                ; 0058d989
    ADD ESP,0x8                         ; 0058d98b
    FCOMPP                              ; 0058d98e
    FNSTSW AX                           ; 0058d990
    SAHF                                ; 0058d992
    JA 0x0058e201                       ; 0058d993
        ;   XREF to: 0058e201 (CONDITIONAL_JUMP)  ; LAB_0058e201
    MOV EAX,dword ptr [EBX + 0x2628]    ; 0058d999
    TEST EAX,EAX                        ; 0058d99f
    JNZ 0x0058da26                      ; 0058d9a1
        ;   XREF to: 0058da26 (CONDITIONAL_JUMP)  ; LAB_0058da26
    XOR EDX,EDX                         ; 0058d9a7
        ;   Label: LAB_0058d9a7
    MOV dword ptr [ESP + 0x17c],EDX     ; 0058d9a9
    MOV dword ptr [ESP + 0x180],EDX     ; 0058d9b0
    MOV EAX,[0x00622c18]                ; 0058d9b7 | g_CDemonSetPtr
        ;   Label: LAB_0058d9b7
    MOV ESI,dword ptr [ESP + 0x17c]     ; 0058d9bc
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 0058d9c3 | g_CDemonSetInstance.field1364324_0x14d164
    JGE 0x0058dee9                      ; 0058d9c9
        ;   XREF to: 0058dee9 (CONDITIONAL_JUMP)  ; LAB_0058dee9
    MOV ESI,dword ptr [ESP + 0x180]     ; 0058d9cf
    MOV ECX,dword ptr [0x0152c398]      ; 0058d9d6 | g_CActorDestinationClassInfo.name_hash
    ADD EAX,ESI                         ; 0058d9dc
    PUSH ECX                            ; 0058d9de
    MOV EDI,dword ptr [EAX + 0x14d168]  ; 0058d9df | g_CDemonSetInstance.field1364328_0x14d168
    PUSH EDI                            ; 0058d9e5
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0058d9e6
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV dword ptr [ESP + 0x17c],EAX     ; 0058d9eb
    ADD ESP,0x8                         ; 0058d9f2
    MOV dword ptr [ESP + 0x154],EAX     ; 0058d9f5
    TEST EAX,EAX                        ; 0058d9fc
    JNZ 0x0058dd01                      ; 0058d9fe
        ;   XREF to: 0058dd01 (CONDITIONAL_JUMP)  ; LAB_0058dd01
    MOV ESI,dword ptr [ESP + 0x17c]     ; 0058da04
        ;   Label: LAB_0058da04
    MOV ECX,dword ptr [ESP + 0x180]     ; 0058da0b
    INC ESI                             ; 0058da12
    ADD ECX,0x4                         ; 0058da13
    MOV dword ptr [ESP + 0x17c],ESI     ; 0058da16
    MOV dword ptr [ESP + 0x180],ECX     ; 0058da1d
    JMP 0x0058d9b7                      ; 0058da24
        ;   XREF to: 0058d9b7 (UNCONDITIONAL_JUMP)  ; LAB_0058d9b7
    PUSH EBX                            ; 0058da26
        ;   Label: LAB_0058da26
    MOV ESI,dword ptr [EAX + 0x154]     ; 0058da27
    PUSH EAX                            ; 0058da2d
    CALL dword ptr [ESI + 0x84]         ; 0058da2e
    ADD ESP,0x8                         ; 0058da34
    CMP EAX,0x4                         ; 0058da37
    SETZ AL                             ; 0058da3a
    AND EAX,0xff                        ; 0058da3d
    JZ 0x0058d9a7                       ; 0058da42
        ;   XREF to: 0058d9a7 (CONDITIONAL_JUMP)  ; LAB_0058d9a7
    XOR EDI,EDI                         ; 0058da48
    MOV dword ptr [ESP + 0x168],EDI     ; 0058da4a
    MOV dword ptr [ESP + 0x164],EDI     ; 0058da51
    MOV EAX,[0x00622c18]                ; 0058da58 | g_CDemonSetPtr
        ;   Label: LAB_0058da58
    MOV ESI,dword ptr [ESP + 0x168]     ; 0058da5d
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 0058da64 | g_CDemonSetInstance.field1364324_0x14d164
    JGE 0x0058dee9                      ; 0058da6a
        ;   XREF to: 0058dee9 (CONDITIONAL_JUMP)  ; LAB_0058dee9
    MOV ECX,dword ptr [ESP + 0x164]     ; 0058da70
    MOV EDX,dword ptr [0x0152c398]      ; 0058da77 | g_CActorDestinationClassInfo.name_hash
    ADD EAX,ECX                         ; 0058da7d
    PUSH EDX                            ; 0058da7f
    MOV ESI,dword ptr [EAX + 0x14d168]  ; 0058da80 | g_CDemonSetInstance.field1364328_0x14d168
    PUSH ESI                            ; 0058da86
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0058da87
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV dword ptr [ESP + 0x178],EAX     ; 0058da8c
    ADD ESP,0x8                         ; 0058da93
    MOV dword ptr [ESP + 0x158],EAX     ; 0058da96
    TEST EAX,EAX                        ; 0058da9d
    JNZ 0x0058dac3                      ; 0058da9f
        ;   XREF to: 0058dac3 (CONDITIONAL_JUMP)  ; LAB_0058dac3
    MOV EDI,dword ptr [ESP + 0x168]     ; 0058daa1
        ;   Label: LAB_0058daa1
    MOV ESI,dword ptr [ESP + 0x164]     ; 0058daa8
    INC EDI                             ; 0058daaf
    ADD ESI,0x4                         ; 0058dab0
    MOV dword ptr [ESP + 0x168],EDI     ; 0058dab3
    MOV dword ptr [ESP + 0x164],ESI     ; 0058daba
    JMP 0x0058da58                      ; 0058dac1
        ;   XREF to: 0058da58 (UNCONDITIONAL_JUMP)  ; LAB_0058da58
    MOV EAX,dword ptr [EBX + 0x2628]    ; 0058dac3
        ;   Label: LAB_0058dac3
    PUSH EAX                            ; 0058dac9
    MOV EDX,dword ptr [ESP + 0x174]     ; 0058daca
    PUSH EDX                            ; 0058dad1
    CALL core_dest.cpp_CActorDestination_acceptsActor_FUN_0045d550 ; 0058dad2
        ;   XREF to: 0045d550 (UNCONDITIONAL_CALL)  ; int core_dest.cpp_CActorDestination_acceptsActor_FUN_0045d550(CActorDestination * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0058dad7
    TEST EAX,EAX                        ; 0058dada
    JZ 0x0058daa1                       ; 0058dadc
        ;   XREF to: 0058daa1 (CONDITIONAL_JUMP)  ; LAB_0058daa1
    MOV EAX,dword ptr [EBX + 0x2628]    ; 0058dade
    ADD EAX,0x20                        ; 0058dae4
    PUSH EAX                            ; 0058dae7
    PUSH EBX                            ; 0058dae8
    LEA ESI,[ESP + 0xa0]                ; 0058dae9
    CALL core_actor.cpp_FUN_00408bb0    ; 0058daf0
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    ADD ESP,0x8                         ; 0058daf5
    LEA EDI,[ESP + 0x110]               ; 0058daf8
    MOV EAX,dword ptr [ESP + 0x170]     ; 0058daff
    LEA ESI,[ESP + 0x98]                ; 0058db06
    ADD EAX,0x20                        ; 0058db0d
    MOVSD ES:EDI,ESI                    ; 0058db10
    MOVSD ES:EDI,ESI                    ; 0058db11
    MOVSD ES:EDI,ESI                    ; 0058db12
    PUSH EAX                            ; 0058db13
    LEA ESI,[ESP + 0x108]               ; 0058db14
    PUSH EBX                            ; 0058db1b
    LEA EDI,[ESP + 0x88]                ; 0058db1c
    MOV dword ptr [ESP + 0x164],EAX     ; 0058db23
    CALL core_actor.cpp_FUN_00408bb0    ; 0058db2a
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x10c]               ; 0058db2f
    ADD ESP,0x8                         ; 0058db36
    MOVSD ES:EDI,ESI                    ; 0058db39
    MOVSD ES:EDI,ESI                    ; 0058db3a
    MOVSD ES:EDI,ESI                    ; 0058db3b
    FLD float ptr [ESP + 0x80]          ; 0058db3c
    FLD float ptr [ESP + 0x84]          ; 0058db43
    FLD float ptr [ESP + 0x88]          ; 0058db4a
    LEA EDI,[ESP + 0x2c]                ; 0058db51
    LEA ESI,[ESP + 0x20]                ; 0058db55
    FXCH ST2                            ; 0058db59
    FSUB float ptr [ESP + 0x110]        ; 0058db5b
    FXCH                                ; 0058db62
    FSUB float ptr [ESP + 0x114]        ; 0058db64
    FXCH ST2                            ; 0058db6b
    FSUB float ptr [ESP + 0x118]        ; 0058db6d
    FXCH                                ; 0058db74
    FSTP float ptr [ESP + 0x20]         ; 0058db76
    FXCH                                ; 0058db7a
    FSTP float ptr [ESP + 0x24]         ; 0058db7c
    FSTP float ptr [ESP + 0x28]         ; 0058db80
    MOVSD ES:EDI,ESI                    ; 0058db84
    MOVSD ES:EDI,ESI                    ; 0058db85
    MOVSD ES:EDI,ESI                    ; 0058db86
    FLDZ                                ; 0058db87
    FCOMP float ptr [ESP + 0x34]        ; 0058db89
    FNSTSW AX                           ; 0058db8d
    SAHF                                ; 0058db8f
    JNC 0x0058daa1                      ; 0058db90
        ;   XREF to: 0058daa1 (CONDITIONAL_JUMP)  ; LAB_0058daa1
    FLD float ptr [ESP + 0x34]          ; 0058db96
    FCOMP double ptr [0x005f6e01]       ; 0058db9a | DAT_005f6e01
    FNSTSW AX                           ; 0058dba0
    SAHF                                ; 0058dba2
    JNC 0x0058daa1                      ; 0058dba3
        ;   XREF to: 0058daa1 (CONDITIONAL_JUMP)  ; LAB_0058daa1
    FLD float ptr [ESP + 0x2c]          ; 0058dba9
    FABS                                ; 0058dbad
    FCOMP double ptr [0x005f6e09]       ; 0058dbaf | DAT_005f6e09
    FNSTSW AX                           ; 0058dbb5
    SAHF                                ; 0058dbb7
    JNC 0x0058daa1                      ; 0058dbb8
        ;   XREF to: 0058daa1 (CONDITIONAL_JUMP)  ; LAB_0058daa1
    FLD float ptr [ESP + 0x30]          ; 0058dbbe
    FLDZ                                ; 0058dbc2
    FXCH                                ; 0058dbc4
    FSTP double ptr [ESP]               ; 0058dbc6
    FCOMP double ptr [ESP]              ; 0058dbc9
    FNSTSW AX                           ; 0058dbcc
    SAHF                                ; 0058dbce
    JNC 0x0058daa1                      ; 0058dbcf
        ;   XREF to: 0058daa1 (CONDITIONAL_JUMP)  ; LAB_0058daa1
    FLD double ptr [ESP]                ; 0058dbd5
    FCOMP double ptr [0x005f6e11]       ; 0058dbd8 | DAT_005f6e11
    FNSTSW AX                           ; 0058dbde
    SAHF                                ; 0058dbe0
    JNC 0x0058daa1                      ; 0058dbe1
        ;   XREF to: 0058daa1 (CONDITIONAL_JUMP)  ; LAB_0058daa1
    PUSH 0x1                            ; 0058dbe7
    PUSH 0x25                           ; 0058dbe9
    LEA EAX,[EBX + 0x158]               ; 0058dbeb
    PUSH EAX                            ; 0058dbf1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0058dbf2
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058dbf7
    MOV ESI,dword ptr [ESP + 0x15c]     ; 0058dbfa
    PUSH ESI                            ; 0058dc01
    PUSH EBX                            ; 0058dc02
    LEA ESI,[ESP + 0x4c]                ; 0058dc03
    LEA EDI,[ESP + 0x40]                ; 0058dc07
    CALL core_actor.cpp_FUN_00408bb0    ; 0058dc0b
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x4c]                ; 0058dc10
    ADD ESP,0x8                         ; 0058dc14
    MOVSD ES:EDI,ESI                    ; 0058dc17
    MOVSD ES:EDI,ESI                    ; 0058dc18
    MOVSD ES:EDI,ESI                    ; 0058dc19
    LEA EAX,[ESP + 0x38]                ; 0058dc1a
    LEA ESI,[EBX + 0x2006c]             ; 0058dc1e
    CMP ESI,EAX                         ; 0058dc24
    JZ 0x0058dc3c                       ; 0058dc26
        ;   XREF to: 0058dc3c (CONDITIONAL_JUMP)  ; LAB_0058dc3c
    MOV EAX,dword ptr [ESP + 0x38]      ; 0058dc28
    MOV dword ptr [ESI],EAX             ; 0058dc2c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0058dc2e
    MOV dword ptr [ESI + 0x4],EAX       ; 0058dc32
    MOV EAX,dword ptr [ESP + 0x40]      ; 0058dc35
    MOV dword ptr [ESI + 0x8],EAX       ; 0058dc39
    FLD float ptr [EBX + 0x20088]       ; 0058dc3c
        ;   Label: LAB_0058dc3c
    MOV EDI,dword ptr [EBX + 0x2628]    ; 0058dc42
    FSUB float ptr [EBX + 0x2007c]      ; 0058dc48
    PUSH EDI                            ; 0058dc4e
    FSTP float ptr [ESP + 0x150]        ; 0058dc4f
    CALL core_stranger.cpp_FUN_00585170 ; 0058dc56
        ;   XREF to: 00585170 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_00585170()
    MOV dword ptr [ESP + 0x188],EAX     ; 0058dc5b
    FLD float ptr [ESP + 0x188]         ; 0058dc62
    ADD ESP,0x4                         ; 0058dc69
    FSUBR float ptr [ESP + 0x14c]       ; 0058dc6c
    FADD float ptr [EBX + 0x20070]      ; 0058dc73
    MOV EAX,dword ptr [EBX + 0x1ff5c]   ; 0058dc79
    FSTP float ptr [EBX + 0x20070]      ; 0058dc7f
    TEST EAX,EAX                        ; 0058dc85
    JZ 0x0058dca3                       ; 0058dc87
        ;   XREF to: 0058dca3 (CONDITIONAL_JUMP)  ; LAB_0058dca3
    PUSH 0xee0                          ; 0058dc89
    PUSH EAX                            ; 0058dc8e
    PUSH 0x5f6da9                       ; 0058dc8f | s_actionPending_d_stranger_005f6da8+1
    MOV ECX,dword ptr [0x0061abc0]      ; 0058dc94 | g_CEditorToolsPtr
    PUSH ECX                            ; 0058dc9a
    CALL shape_edittool.cpp_FUN_00494340 ; 0058dc9b
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    ADD ESP,0x10                        ; 0058dca0
    MOV ESI,dword ptr [ESP + 0x158]     ; 0058dca3
        ;   Label: LAB_0058dca3
    LEA EAX,[EBX + 0x1ff90]             ; 0058dcaa
    ADD ESI,0x20                        ; 0058dcb0
    MOV dword ptr [EBX + 0x1ff5c],0x2   ; 0058dcb3
    CMP EAX,ESI                         ; 0058dcbd
    JZ 0x0058dcd1                       ; 0058dcbf
        ;   XREF to: 0058dcd1 (CONDITIONAL_JUMP)  ; LAB_0058dcd1
    MOV EDX,dword ptr [ESI]             ; 0058dcc1
    MOV dword ptr [EAX],EDX             ; 0058dcc3
    MOV EDX,dword ptr [ESI + 0x4]       ; 0058dcc5
    MOV dword ptr [EAX + 0x4],EDX       ; 0058dcc8
    MOV EDX,dword ptr [ESI + 0x8]       ; 0058dccb
    MOV dword ptr [EAX + 0x8],EDX       ; 0058dcce
    MOV EAX,dword ptr [ESP + 0x158]     ; 0058dcd1
        ;   Label: LAB_0058dcd1
    ADD EBX,0x1ff9c                     ; 0058dcd8
    ADD EAX,0x30                        ; 0058dcde
    CMP EBX,EAX                         ; 0058dce1
    JZ 0x0058dcf5                       ; 0058dce3
        ;   XREF to: 0058dcf5 (CONDITIONAL_JUMP)  ; LAB_0058dcf5
    MOV EDX,dword ptr [EAX]             ; 0058dce5
    MOV dword ptr [EBX],EDX             ; 0058dce7
    MOV EDX,dword ptr [EAX + 0x4]       ; 0058dce9
    MOV dword ptr [EBX + 0x4],EDX       ; 0058dcec
    MOV EDX,dword ptr [EAX + 0x8]       ; 0058dcef
    MOV dword ptr [EBX + 0x8],EDX       ; 0058dcf2
    MOV EAX,0x1                         ; 0058dcf5
        ;   Label: LAB_0058dcf5
    MOV ESP,EBP                         ; 0058dcfa
    POP EBP                             ; 0058dcfc
    POP EDI                             ; 0058dcfd
    POP ESI                             ; 0058dcfe
    POP EBX                             ; 0058dcff
    RET                                 ; 0058dd00
    MOV EDX,dword ptr [EBX + 0x2628]    ; 0058dd01
        ;   Label: LAB_0058dd01
    PUSH EDX                            ; 0058dd07
    PUSH EAX                            ; 0058dd08
    CALL core_dest.cpp_CActorDestination_acceptsActor_FUN_0045d550 ; 0058dd09
        ;   XREF to: 0045d550 (UNCONDITIONAL_CALL)  ; int core_dest.cpp_CActorDestination_acceptsActor_FUN_0045d550(CActorDestination * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0058dd0e
    TEST EAX,EAX                        ; 0058dd11
    JZ 0x0058da04                       ; 0058dd13
        ;   XREF to: 0058da04 (CONDITIONAL_JUMP)  ; LAB_0058da04
    MOV EAX,dword ptr [EBX + 0x2628]    ; 0058dd19
    ADD EAX,0x20                        ; 0058dd1f
    PUSH EAX                            ; 0058dd22
    PUSH EBX                            ; 0058dd23
    LEA ESI,[ESP + 0x70]                ; 0058dd24
    CALL core_actor.cpp_FUN_00408bb0    ; 0058dd28
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    ADD ESP,0x8                         ; 0058dd2d
    LEA EDI,[ESP + 0xd4]                ; 0058dd30
    MOV EAX,dword ptr [ESP + 0x174]     ; 0058dd37
    LEA ESI,[ESP + 0x68]                ; 0058dd3e
    ADD EAX,0x20                        ; 0058dd42
    MOVSD ES:EDI,ESI                    ; 0058dd45
    MOVSD ES:EDI,ESI                    ; 0058dd46
    MOVSD ES:EDI,ESI                    ; 0058dd47
    PUSH EAX                            ; 0058dd48
    LEA ESI,[ESP + 0x144]               ; 0058dd49
    PUSH EBX                            ; 0058dd50
    LEA EDI,[ESP + 0xc4]                ; 0058dd51
    MOV dword ptr [ESP + 0x168],EAX     ; 0058dd58
    CALL core_actor.cpp_FUN_00408bb0    ; 0058dd5f
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x148]               ; 0058dd64
    ADD ESP,0x8                         ; 0058dd6b
    MOVSD ES:EDI,ESI                    ; 0058dd6e
    MOVSD ES:EDI,ESI                    ; 0058dd6f
    MOVSD ES:EDI,ESI                    ; 0058dd70
    FLD float ptr [ESP + 0xbc]          ; 0058dd71
    FLD float ptr [ESP + 0xc0]          ; 0058dd78
    FLD float ptr [ESP + 0xc4]          ; 0058dd7f
    LEA EDI,[ESP + 0x8c]                ; 0058dd86
    LEA ESI,[ESP + 0x128]               ; 0058dd8d
    FXCH ST2                            ; 0058dd94
    FSUB float ptr [ESP + 0xd4]         ; 0058dd96
    FXCH                                ; 0058dd9d
    FSUB float ptr [ESP + 0xd8]         ; 0058dd9f
    FXCH ST2                            ; 0058dda6
    FSUB float ptr [ESP + 0xdc]         ; 0058dda8
    FXCH                                ; 0058ddaf
    FSTP float ptr [ESP + 0x128]        ; 0058ddb1
    FXCH                                ; 0058ddb8
    FSTP float ptr [ESP + 0x12c]        ; 0058ddba
    FSTP float ptr [ESP + 0x130]        ; 0058ddc1
    MOVSD ES:EDI,ESI                    ; 0058ddc8
    MOVSD ES:EDI,ESI                    ; 0058ddc9
    MOVSD ES:EDI,ESI                    ; 0058ddca
    FLD float ptr [ESP + 0x90]          ; 0058ddcb
    FLD float ptr [ESP + 0x94]          ; 0058ddd2
    FSTP double ptr [ESP + 0x8]         ; 0058ddd9
    MOV EDI,dword ptr [ESP + 0xc]       ; 0058dddd
    MOV EAX,dword ptr [ESP + 0x8]       ; 0058dde1
    PUSH EDI                            ; 0058dde5
    FSTP double ptr [ESP + 0x1c]        ; 0058dde6
    PUSH EAX                            ; 0058ddea
    MOV EDX,dword ptr [ESP + 0x24]      ; 0058ddeb
    MOV ECX,dword ptr [ESP + 0x20]      ; 0058ddef
    PUSH EDX                            ; 0058ddf3
    FLD float ptr [ESP + 0x98]          ; 0058ddf4
    PUSH ECX                            ; 0058ddfb
    FSTP double ptr [ESP + 0x20]        ; 0058ddfc
    MOV ESI,dword ptr [ESP + 0x24]      ; 0058de00
    PUSH ESI                            ; 0058de04
    MOV EDI,dword ptr [ESP + 0x24]      ; 0058de05
    PUSH EDI                            ; 0058de09
    PUSH 0x5f6dd1                       ; 0058de0a | = "Delta to dest : %3.2f,%3.2f,%3.2f\n"
    MOV EAX,[0x00611100]                ; 0058de0f | g_CConsolePtr
    PUSH EAX                            ; 0058de14 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 0058de15
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x20                        ; 0058de1a
    FLDZ                                ; 0058de1d
    FCOMP float ptr [ESP + 0x94]        ; 0058de1f
    FNSTSW AX                           ; 0058de26
    SAHF                                ; 0058de28
    JNC 0x0058da04                      ; 0058de29
        ;   XREF to: 0058da04 (CONDITIONAL_JUMP)  ; LAB_0058da04
    FLD double ptr [ESP + 0x8]          ; 0058de2f
    FCOMP double ptr [0x005f6e01]       ; 0058de33 | DAT_005f6e01
    FNSTSW AX                           ; 0058de39
    SAHF                                ; 0058de3b
    JNC 0x0058da04                      ; 0058de3c
        ;   XREF to: 0058da04 (CONDITIONAL_JUMP)  ; LAB_0058da04
    FLD double ptr [ESP + 0x10]         ; 0058de42
    FABS                                ; 0058de46
    FCOMP double ptr [0x005f6e09]       ; 0058de48 | DAT_005f6e09
    FNSTSW AX                           ; 0058de4e
    SAHF                                ; 0058de50
    JNC 0x0058da04                      ; 0058de51
        ;   XREF to: 0058da04 (CONDITIONAL_JUMP)  ; LAB_0058da04
    FLDZ                                ; 0058de57
    FCOMP double ptr [ESP + 0x18]       ; 0058de59
    FNSTSW AX                           ; 0058de5d
    SAHF                                ; 0058de5f
    JNC 0x0058da04                      ; 0058de60
        ;   XREF to: 0058da04 (CONDITIONAL_JUMP)  ; LAB_0058da04
    FLD double ptr [ESP + 0x18]         ; 0058de66
    FCOMP double ptr [0x005f6e11]       ; 0058de6a | DAT_005f6e11
    FNSTSW AX                           ; 0058de70
    SAHF                                ; 0058de72
    JNC 0x0058da04                      ; 0058de73
        ;   XREF to: 0058da04 (CONDITIONAL_JUMP)  ; LAB_0058da04
    MOV EDX,dword ptr [ESP + 0x160]     ; 0058de79
    LEA EAX,[EBX + 0x1ff90]             ; 0058de80
    MOV dword ptr [EBX + 0x1ff5c],0x2   ; 0058de86
    CMP EAX,EDX                         ; 0058de90
    JZ 0x0058dea6                       ; 0058de92
        ;   XREF to: 0058dea6 (CONDITIONAL_JUMP)  ; LAB_0058dea6
    MOV ESI,EDX                         ; 0058de94
    MOV EDX,dword ptr [ESI]             ; 0058de96
    MOV dword ptr [EAX],EDX             ; 0058de98
    MOV EDX,dword ptr [ESI + 0x4]       ; 0058de9a
    MOV dword ptr [EAX + 0x4],EDX       ; 0058de9d
    MOV EDX,dword ptr [ESI + 0x8]       ; 0058dea0
    MOV dword ptr [EAX + 0x8],EDX       ; 0058dea3
    MOV ESI,dword ptr [ESP + 0x154]     ; 0058dea6
        ;   Label: LAB_0058dea6
    LEA EAX,[EBX + 0x1ff9c]             ; 0058dead
    ADD ESI,0x30                        ; 0058deb3
    CMP EAX,ESI                         ; 0058deb6
    JZ 0x0058deca                       ; 0058deb8
        ;   XREF to: 0058deca (CONDITIONAL_JUMP)  ; LAB_0058deca
    MOV EDX,dword ptr [ESI]             ; 0058deba
    MOV dword ptr [EAX],EDX             ; 0058debc
    MOV EDX,dword ptr [ESI + 0x4]       ; 0058debe
    MOV dword ptr [EAX + 0x4],EDX       ; 0058dec1
    MOV EDX,dword ptr [ESI + 0x8]       ; 0058dec4
    MOV dword ptr [EAX + 0x8],EDX       ; 0058dec7
    PUSH 0x1                            ; 0058deca
        ;   Label: LAB_0058deca
    PUSH 0x21                           ; 0058decc
    ADD EBX,0x158                       ; 0058dece
    PUSH EBX                            ; 0058ded4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0058ded5
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 0058deda
    ADD ESP,0xc                         ; 0058dedf
    MOV ESP,EBP                         ; 0058dee2
    POP EBP                             ; 0058dee4
    POP EDI                             ; 0058dee5
    POP ESI                             ; 0058dee6
    POP EBX                             ; 0058dee7
    RET                                 ; 0058dee8
    PUSH EBX                            ; 0058dee9
        ;   Label: LAB_0058dee9
    MOV EDI,dword ptr [0x00622c18]      ; 0058deea | g_CDemonSetPtr
    PUSH EDI                            ; 0058def0 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0058def1
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0058def6
    MOV EAX,dword ptr [EBX + 0x2628]    ; 0058def9
    PUSH EAX                            ; 0058deff
    MOV EDX,dword ptr [0x00622c18]      ; 0058df00 | g_CDemonSetPtr
    PUSH EDX                            ; 0058df06 | g_CDemonSetInstance
    LEA EDI,[ESP + 0x64]                ; 0058df07
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0058df0b
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    MOV ESI,dword ptr [EBX + 0x2628]    ; 0058df10
    LEA EAX,[ESP + 0xac]                ; 0058df16
    ADD ESP,0x8                         ; 0058df1d
    LEA ESI,[ESI + 0x20]                ; 0058df20
    XOR ECX,ECX                         ; 0058df23
    PUSH EAX                            ; 0058df25
    MOVSD ES:EDI,ESI                    ; 0058df26
    MOVSD ES:EDI,ESI                    ; 0058df27
    MOVSD ES:EDI,ESI                    ; 0058df28
    PUSH EBX                            ; 0058df29
    MOV EDI,0x3f800000                  ; 0058df2a
    LEA ESI,[ESP + 0x58]                ; 0058df2f
    MOV dword ptr [ESP + 0xac],ECX      ; 0058df33
    MOV dword ptr [ESP + 0xb0],ECX      ; 0058df3a
    MOV dword ptr [ESP + 0xb4],EDI      ; 0058df41
    CALL core_actor.cpp_FUN_00408ac0    ; 0058df48
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA EDI,[ESP + 0x100]               ; 0058df4d
    LEA ESI,[ESP + 0x58]                ; 0058df54
    ADD ESP,0x8                         ; 0058df58
    MOV ECX,0x3fc00000                  ; 0058df5b
    FLD float ptr [ESP + 0x5c]          ; 0058df60
    FLD float ptr [ESP + 0x60]          ; 0058df64
    MOVSD ES:EDI,ESI                    ; 0058df68
    MOVSD ES:EDI,ESI                    ; 0058df69
    MOVSD ES:EDI,ESI                    ; 0058df6a
    FLD float ptr [ESP + 0x64]          ; 0058df6b
    LEA ESI,[ESP + 0x11c]               ; 0058df6f
    FXCH                                ; 0058df76
    FADD float ptr [ESP + 0xfc]         ; 0058df78
    MOV EAX,dword ptr [EBX + 0x24]      ; 0058df7f
    FSTP float ptr [ESP + 0x60]         ; 0058df82
    MOV dword ptr [ESP + 0x60],EAX      ; 0058df86
    XOR EAX,EAX                         ; 0058df8a
    FXCH                                ; 0058df8c
    FADD float ptr [ESP + 0xf8]         ; 0058df8e
    MOV dword ptr [ESP + 0xe0],EAX      ; 0058df95
    MOV dword ptr [ESP + 0xe4],EAX      ; 0058df9c
    LEA EAX,[ESP + 0xe0]                ; 0058dfa3
    FXCH                                ; 0058dfaa
    FADD float ptr [ESP + 0x100]        ; 0058dfac
    PUSH EAX                            ; 0058dfb3
    FXCH                                ; 0058dfb4
    FSTP float ptr [ESP + 0x60]         ; 0058dfb6
    PUSH EBX                            ; 0058dfba
    FSTP float ptr [ESP + 0x6c]         ; 0058dfbb
    MOV dword ptr [ESP + 0xf0],ECX      ; 0058dfbf
    CALL core_actor.cpp_FUN_00408ac0    ; 0058dfc6
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 0058dfcb
    LEA EDI,[ESP + 0x134]               ; 0058dfce
    PUSH 0x40400000                     ; 0058dfd5
    LEA ESI,[ESP + 0x120]               ; 0058dfda
    PUSH 0x3dcccccd                     ; 0058dfe1
    MOVSD ES:EDI,ESI                    ; 0058dfe6
    MOVSD ES:EDI,ESI                    ; 0058dfe7
    MOVSD ES:EDI,ESI                    ; 0058dfe8
    PUSH 0x3f800000                     ; 0058dfe9
    PUSH dword ptr [ESP + 0x148]        ; 0058dfee
    PUSH dword ptr [ESP + 0x144]        ; 0058dff5
    PUSH dword ptr [ESP + 0x78]         ; 0058dffc
    MOV ESI,dword ptr [0x00622c18]      ; 0058e000 | g_CDemonSetPtr
    PUSH dword ptr [ESP + 0x74]         ; 0058e006
    PUSH ESI                            ; 0058e00a | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00558450 ; 0058e00b
        ;   XREF to: 00558450 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00558450()
    MOV dword ptr [ESP + 0x1a4],EAX     ; 0058e010
    FLD float ptr [ESP + 0x1a4]         ; 0058e017
    FLD1                                ; 0058e01e
    ADD ESP,0x20                        ; 0058e020
    FCOMPP                              ; 0058e023
    FNSTSW AX                           ; 0058e025
    SAHF                                ; 0058e027
    JA 0x0058e13c                       ; 0058e028
        ;   XREF to: 0058e13c (CONDITIONAL_JUMP)  ; LAB_0058e13c
    FLD float ptr [ESP + 0x5c]          ; 0058e02e
    FLD float ptr [ESP + 0x60]          ; 0058e032
    FLD float ptr [ESP + 0x64]          ; 0058e036
    PUSH 0x3f000000                     ; 0058e03a
    LEA EDI,[ESP + 0xf0]                ; 0058e03f
    LEA ESI,[ESP + 0xb4]                ; 0058e046
    LEA EAX,[ESP + 0xf0]                ; 0058e04d
    FXCH ST2                            ; 0058e054
    FADD float ptr [ESP + 0x138]        ; 0058e056
    FXCH                                ; 0058e05d
    FADD float ptr [ESP + 0x13c]        ; 0058e05f
    FXCH ST2                            ; 0058e066
    FADD float ptr [ESP + 0x140]        ; 0058e068
    FXCH                                ; 0058e06f
    FSTP float ptr [ESP + 0xb4]         ; 0058e071
    FXCH                                ; 0058e078
    FSTP float ptr [ESP + 0xb8]         ; 0058e07a
    FSTP float ptr [ESP + 0xbc]         ; 0058e081
    MOVSD ES:EDI,ESI                    ; 0058e088
    MOVSD ES:EDI,ESI                    ; 0058e089
    MOVSD ES:EDI,ESI                    ; 0058e08a
    PUSH EAX                            ; 0058e08b
    MOV EDI,dword ptr [0x00622c18]      ; 0058e08c | g_CDemonSetPtr
    PUSH EDI                            ; 0058e092 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_005562c0 ; 0058e093
        ;   XREF to: 005562c0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_005562c0()
    MOV dword ptr [ESP + 0x190],EAX     ; 0058e098
    FLD float ptr [ESP + 0x190]         ; 0058e09f
    ADD ESP,0xc                         ; 0058e0a6
    MOV EAX,[0x00622c18]                ; 0058e0a9 | g_CDemonSetPtr
    PUSH EAX                            ; 0058e0ae | g_CDemonSetInstance
    FSTP float ptr [ESP + 0x154]        ; 0058e0af
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0058e0b6
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0058e0bb
    FLD float ptr [ESP + 0x150]         ; 0058e0be
    FSUB float ptr [EBX + 0x24]         ; 0058e0c5
    FABS                                ; 0058e0c8
    FLD1                                ; 0058e0ca
    FCOMPP                              ; 0058e0cc
    FNSTSW AX                           ; 0058e0ce
    SAHF                                ; 0058e0d0
    JC 0x0058e201                       ; 0058e0d1
        ;   XREF to: 0058e201 (CONDITIONAL_JUMP)  ; LAB_0058e201
    XOR EDX,EDX                         ; 0058e0d7
    MOV dword ptr [ESP + 0x16c],EDX     ; 0058e0d9
    MOV dword ptr [ESP + 0x178],EDX     ; 0058e0e0
    MOV EAX,[0x00622c18]                ; 0058e0e7 | g_CDemonSetPtr
        ;   Label: LAB_0058e0e7
    MOV ESI,dword ptr [ESP + 0x16c]     ; 0058e0ec
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 0058e0f3 | g_CDemonSetInstance.field1364324_0x14d164
    JL 0x0058e175                       ; 0058e0f9
        ;   XREF to: 0058e175 (CONDITIONAL_JUMP)  ; LAB_0058e175
    MOV EAX,dword ptr [EBX + 0x2628]    ; 0058e0fb
    MOV dword ptr [EBX + 0x1ff5c],0x6   ; 0058e101
    TEST EAX,EAX                        ; 0058e10b
    JNZ 0x0058e20a                      ; 0058e10d
        ;   XREF to: 0058e20a (CONDITIONAL_JUMP)  ; LAB_0058e20a
    PUSH 0x1                            ; 0058e113
        ;   Label: LAB_0058e113
    PUSH 0x1f                           ; 0058e115
    LEA EAX,[EBX + 0x158]               ; 0058e117
        ;   Label: LAB_0058e117
    PUSH EAX                            ; 0058e11d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0058e11e
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058e123
    MOV EAX,0x1                         ; 0058e126
    MOV dword ptr [EBX + 0x20014],0x40800000 ; 0058e12b
    MOV ESP,EBP                         ; 0058e135
    POP EBP                             ; 0058e137
    POP EDI                             ; 0058e138
    POP ESI                             ; 0058e139
    POP EBX                             ; 0058e13a
    RET                                 ; 0058e13b
    MOV EBX,dword ptr [0x00622c18]      ; 0058e13c | g_CDemonSetPtr
        ;   Label: LAB_0058e13c
    PUSH EBX                            ; 0058e142 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0058e143
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0058e148
    JMP 0x0058e201                      ; 0058e14b
        ;   XREF to: 0058e201 (UNCONDITIONAL_JUMP)  ; LAB_0058e201
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0058e150
        ;   Label: LAB_0058e150
    MOV EDI,dword ptr [ESP + 0x178]     ; 0058e157
    INC EAX                             ; 0058e15e
    ADD EDI,0x4                         ; 0058e15f
    MOV dword ptr [ESP + 0x16c],EAX     ; 0058e162
    MOV dword ptr [ESP + 0x178],EDI     ; 0058e169
    JMP 0x0058e0e7                      ; 0058e170
        ;   XREF to: 0058e0e7 (UNCONDITIONAL_JUMP)  ; LAB_0058e0e7
    MOV ECX,dword ptr [ESP + 0x178]     ; 0058e175
        ;   Label: LAB_0058e175
    MOV EDX,dword ptr [0x007dc6d8]      ; 0058e17c | g_CCrateClassInfo.name_hash
    ADD EAX,ECX                         ; 0058e182
    PUSH EDX                            ; 0058e184
    MOV ESI,dword ptr [EAX + 0x14d168]  ; 0058e185 | g_CDemonSetInstance.field1364328_0x14d168
    PUSH ESI                            ; 0058e18b
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0058e18c
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 0058e191
    TEST EAX,EAX                        ; 0058e194
    JZ 0x0058e150                       ; 0058e196
        ;   XREF to: 0058e150 (CONDITIONAL_JUMP)  ; LAB_0058e150
    FLD float ptr [EAX + 0x20]          ; 0058e198
    FLD float ptr [EAX + 0x24]          ; 0058e19b
    FLD float ptr [EAX + 0x28]          ; 0058e19e
    LEA EDI,[ESP + 0x74]                ; 0058e1a1
    LEA ESI,[ESP + 0xc8]                ; 0058e1a5
    FXCH ST2                            ; 0058e1ac
    FSUB float ptr [ESP + 0x5c]         ; 0058e1ae
    FXCH                                ; 0058e1b2
    FSUB float ptr [ESP + 0x60]         ; 0058e1b4
    FXCH ST2                            ; 0058e1b8
    FSUB float ptr [ESP + 0x64]         ; 0058e1ba
    FXCH                                ; 0058e1be
    FSTP float ptr [ESP + 0xc8]         ; 0058e1c0
    FXCH                                ; 0058e1c7
    FSTP float ptr [ESP + 0xcc]         ; 0058e1c9
    FSTP float ptr [ESP + 0xd0]         ; 0058e1d0
    MOVSD ES:EDI,ESI                    ; 0058e1d7
    MOVSD ES:EDI,ESI                    ; 0058e1d8
    MOVSD ES:EDI,ESI                    ; 0058e1d9
    FLD float ptr [ESP + 0x78]          ; 0058e1da
    FMUL ST0                            ; 0058e1de
    FLD float ptr [ESP + 0x74]          ; 0058e1e0
    FMUL ST0                            ; 0058e1e4
    FADDP                               ; 0058e1e6
    FLD float ptr [ESP + 0x7c]          ; 0058e1e8
    FMUL ST0                            ; 0058e1ec
    FADDP                               ; 0058e1ee
    FSQRT                               ; 0058e1f0
    FCOMP double ptr [0x005f6e09]       ; 0058e1f2 | DAT_005f6e09
    FNSTSW AX                           ; 0058e1f8
    SAHF                                ; 0058e1fa
    JNC 0x0058e150                      ; 0058e1fb
        ;   XREF to: 0058e150 (CONDITIONAL_JUMP)  ; LAB_0058e150
    XOR EAX,EAX                         ; 0058e201
        ;   Label: LAB_0058e201
    MOV ESP,EBP                         ; 0058e203
    POP EBP                             ; 0058e205
    POP EDI                             ; 0058e206
    POP ESI                             ; 0058e207
    POP EBX                             ; 0058e208
    RET                                 ; 0058e209
    PUSH EBX                            ; 0058e20a
        ;   Label: LAB_0058e20a
    MOV ESI,dword ptr [EAX + 0x154]     ; 0058e20b
    PUSH EAX                            ; 0058e211
    CALL dword ptr [ESI + 0x84]         ; 0058e212
    ADD ESP,0x8                         ; 0058e218
    CMP EAX,0x4                         ; 0058e21b
    SETZ AL                             ; 0058e21e
    AND EAX,0xff                        ; 0058e221
    JZ 0x0058e113                       ; 0058e226
        ;   XREF to: 0058e113 (CONDITIONAL_JUMP)  ; LAB_0058e113
    PUSH 0x1                            ; 0058e22c
    PUSH 0x24                           ; 0058e22e
    JMP 0x0058e117                      ; 0058e230
        ;   XREF to: 0058e117 (UNCONDITIONAL_JUMP)  ; LAB_0058e117

