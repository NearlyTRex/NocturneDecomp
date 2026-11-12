; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stranger_cpp_CStranger_tryClimbLadder_FUN_0058ce80(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x158]:8  local_158
; undefined        Stack[-0x150]:1  local_150
; undefined        Stack[-0x138]:1  local_138
; undefined        Stack[-0xf0]:1  local_f0
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_stranger.cpp_CStranger_handleActionButton_FUN_00591120 at 00591381
;
; Referenced Globals:
;   TerminatedCString s_Climbing_ladder_s_005f6d19
;   undefined4 DAT_005f6d31
;   undefined4 DAT_005f6d39
;   undefined4 DAT_005f6d41
;   undefined4 DAT_005f6d49
;   undefined4 DAT_005f6d51
;   undefined4 DAT_005f6d59
;   CConsole* g_CConsolePtr = 007db5f0
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CConsole g_CConsoleInstance
;   undefined4 g_CLadderClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;   engine_console.cpp_CConsole_printf_FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058ce80
        ;   Label: core_stranger.cpp_CStranger_tryClimbLadder_FUN_0058ce80
    PUSH ESI                            ; 0058ce81
    PUSH EDI                            ; 0058ce82
    PUSH EBP                            ; 0058ce83
    MOV EBP,ESP                         ; 0058ce84
    SUB ESP,0x148                       ; 0058ce86
    AND ESP,0xfffffff8                  ; 0058ce8c
    PUSH 0x0                            ; 0058ce8f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058ce91
    PUSH EAX                            ; 0058ce94
    MOV dword ptr [EAX + 0x1ff84],0x0   ; 0058ce95
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590 ; 0058ce9f
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0x14c],EAX     ; 0058cea4
    FLD float ptr [ESP + 0x14c]         ; 0058ceab
    ADD ESP,0x8                         ; 0058ceb2
    FCOMP double ptr [0x005f6d31]       ; 0058ceb5 | DAT_005f6d31
    FNSTSW AX                           ; 0058cebb
    SAHF                                ; 0058cebd
    JC 0x0058cf02                       ; 0058cebe
        ;   XREF to: 0058cf02 (CONDITIONAL_JUMP)  ; LAB_0058cf02
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058cec0
    MOV ECX,dword ptr [EAX + 0x25b0]    ; 0058cec3
    TEST ECX,ECX                        ; 0058cec9
    JNZ 0x0058cf02                      ; 0058cecb
        ;   XREF to: 0058cf02 (CONDITIONAL_JUMP)  ; LAB_0058cf02
    CMP dword ptr [EAX + 0x2628],0x0    ; 0058cecd
    JNZ 0x0058cf02                      ; 0058ced4
        ;   XREF to: 0058cf02 (CONDITIONAL_JUMP)  ; LAB_0058cf02
    MOV dword ptr [ESP + 0x13c],ECX     ; 0058ced6
    ADD EAX,0x20                        ; 0058cedd
    MOV dword ptr [ESP + 0x138],ECX     ; 0058cee0
    MOV dword ptr [ESP + 0x134],EAX     ; 0058cee7
    MOV EAX,[0x00622c18]                ; 0058ceee | g_CDemonSetPtr
        ;   Label: LAB_0058ceee
    MOV EBX,dword ptr [ESP + 0x13c]     ; 0058cef3
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 0058cefa | g_CDemonSetInstance.actor_count
    JL 0x0058cf2d                       ; 0058cf00
        ;   XREF to: 0058cf2d (CONDITIONAL_JUMP)  ; LAB_0058cf2d
    XOR EAX,EAX                         ; 0058cf02
        ;   Label: LAB_0058cf02
    MOV ESP,EBP                         ; 0058cf04
    POP EBP                             ; 0058cf06
    POP EDI                             ; 0058cf07
    POP ESI                             ; 0058cf08
    POP EBX                             ; 0058cf09
    RET                                 ; 0058cf0a
    MOV EBX,dword ptr [ESP + 0x13c]     ; 0058cf0b
        ;   Label: LAB_0058cf0b
    MOV ECX,dword ptr [ESP + 0x138]     ; 0058cf12
    INC EBX                             ; 0058cf19
    ADD ECX,0x4                         ; 0058cf1a
    MOV dword ptr [ESP + 0x13c],EBX     ; 0058cf1d
    MOV dword ptr [ESP + 0x138],ECX     ; 0058cf24
    JMP 0x0058ceee                      ; 0058cf2b
        ;   XREF to: 0058ceee (UNCONDITIONAL_JUMP)  ; LAB_0058ceee
    MOV ECX,dword ptr [ESP + 0x138]     ; 0058cf2d
        ;   Label: LAB_0058cf2d
    MOV EBX,dword ptr [0x01d1bcdc]      ; 0058cf34 | g_CLadderClassInfo.name_hash
    ADD EAX,ECX                         ; 0058cf3a
    PUSH EBX                            ; 0058cf3c
    MOV EAX,dword ptr [EAX + 0x14d168]  ; 0058cf3d | g_CDemonSetInstance.actors[0]
    PUSH EAX                            ; 0058cf43
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0058cf44
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0058cf49
    MOV EBX,EAX                         ; 0058cf4c
    MOV dword ptr [ESP + 0x140],EAX     ; 0058cf4e
    TEST EAX,EAX                        ; 0058cf55
    JZ 0x0058cf0b                       ; 0058cf57
        ;   XREF to: 0058cf0b (CONDITIONAL_JUMP)  ; LAB_0058cf0b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058cf59
    FLD float ptr [EAX + 0x24]          ; 0058cf5c
    FSUB float ptr [EBX + 0x24]         ; 0058cf5f
    FABS                                ; 0058cf62
    FCOMP double ptr [0x005f6d41]       ; 0058cf64 | DAT_005f6d41
    FNSTSW AX                           ; 0058cf6a
    SAHF                                ; 0058cf6c
    JA 0x0058cf0b                       ; 0058cf6d
        ;   XREF to: 0058cf0b (CONDITIONAL_JUMP)  ; LAB_0058cf0b
    MOV ESI,dword ptr [ESP + 0x134]     ; 0058cf6f
    PUSH ESI                            ; 0058cf76
    PUSH EBX                            ; 0058cf77
    LEA ESI,[ESP + 0x70]                ; 0058cf78
    LEA EDI,[ESP + 0xf4]                ; 0058cf7c
    CALL core_actor.cpp_FUN_00408bb0    ; 0058cf83
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x70]                ; 0058cf88
    ADD ESP,0x8                         ; 0058cf8c
    MOVSD ES:EDI,ESI                    ; 0058cf8f
    MOVSD ES:EDI,ESI                    ; 0058cf90
    MOVSD ES:EDI,ESI                    ; 0058cf91
    FLD float ptr [ESP + 0xf4]          ; 0058cf92
    FST double ptr [ESP]                ; 0058cf99
    FABS                                ; 0058cf9c
    FCOMP double ptr [0x005f6d49]       ; 0058cf9e | DAT_005f6d49
    FNSTSW AX                           ; 0058cfa4
    SAHF                                ; 0058cfa6
    JA 0x0058cf0b                       ; 0058cfa7
        ;   XREF to: 0058cf0b (CONDITIONAL_JUMP)  ; LAB_0058cf0b
    FLDZ                                ; 0058cfad
    FCOMP double ptr [ESP]              ; 0058cfaf
    FNSTSW AX                           ; 0058cfb2
    SAHF                                ; 0058cfb4
    JA 0x0058cf0b                       ; 0058cfb5
        ;   XREF to: 0058cf0b (CONDITIONAL_JUMP)  ; LAB_0058cf0b
    PUSH EBX                            ; 0058cfbb
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058cfbc
    LEA ESI,[ESP + 0xc]                 ; 0058cfc2
    LEA EDI,[ESP + 0x24]                ; 0058cfc6
    CALL dword ptr [EAX + 0x1c]         ; 0058cfca
    MOV ECX,0x6                         ; 0058cfcd
    LEA ESI,[ESP + 0xc]                 ; 0058cfd2
    ADD ESP,0x4                         ; 0058cfd6
    MOVSD.REP ES:EDI,ESI                ; 0058cfd9
    FLD float ptr [ESP + 0xec]          ; 0058cfdb
    FCOMP float ptr [ESP + 0x2c]        ; 0058cfe2
    FNSTSW AX                           ; 0058cfe6
    SAHF                                ; 0058cfe8
    JBE 0x0058d010                      ; 0058cfe9
        ;   XREF to: 0058d010 (CONDITIONAL_JUMP)  ; LAB_0058d010
    FLD float ptr [ESP + 0x2c]          ; 0058cfeb
    FLD1                                ; 0058cfef
    FADDP                               ; 0058cff1
    FLD float ptr [ESP + 0xec]          ; 0058cff3
    FCOMPP                              ; 0058cffa
    FNSTSW AX                           ; 0058cffc
    SAHF                                ; 0058cffe
    JA 0x0058cf0b                       ; 0058cfff
        ;   XREF to: 0058cf0b (CONDITIONAL_JUMP)  ; LAB_0058cf0b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0058d005
    MOV dword ptr [ESP + 0xec],EAX      ; 0058d009
    FLD float ptr [ESP + 0xec]          ; 0058d010
        ;   Label: LAB_0058d010
    FCOMP float ptr [ESP + 0x20]        ; 0058d017
    FNSTSW AX                           ; 0058d01b
    SAHF                                ; 0058d01d
    JNC 0x0058d047                      ; 0058d01e
        ;   XREF to: 0058d047 (CONDITIONAL_JUMP)  ; LAB_0058d047
    FLD float ptr [ESP + 0x20]          ; 0058d020
    FADD double ptr [0x005f6d51]        ; 0058d024 | DAT_005f6d51
    FLD float ptr [ESP + 0xec]          ; 0058d02a
    FCOMPP                              ; 0058d031
    FNSTSW AX                           ; 0058d033
    SAHF                                ; 0058d035
    JC 0x0058cf0b                       ; 0058d036
        ;   XREF to: 0058cf0b (CONDITIONAL_JUMP)  ; LAB_0058cf0b
    MOV EAX,dword ptr [ESP + 0x20]      ; 0058d03c
    MOV dword ptr [ESP + 0xec],EAX      ; 0058d040
    FLD float ptr [ESP + 0x20]          ; 0058d047
        ;   Label: LAB_0058d047
    FLD float ptr [ESP + 0x24]          ; 0058d04b
    FLD float ptr [ESP + 0x28]          ; 0058d04f
    LEA EDI,[ESP + 0xc8]                ; 0058d053
    LEA ESI,[ESP + 0x5c]                ; 0058d05a
    FXCH ST2                            ; 0058d05e
    FADD float ptr [ESP + 0x2c]         ; 0058d060
    FXCH                                ; 0058d064
    FADD float ptr [ESP + 0x30]         ; 0058d066
    FXCH ST2                            ; 0058d06a
    FADD float ptr [ESP + 0x34]         ; 0058d06c
    FXCH                                ; 0058d070
    FSTP float ptr [ESP + 0x5c]         ; 0058d072
    FXCH                                ; 0058d076
    FSTP float ptr [ESP + 0x60]         ; 0058d078
    FSTP float ptr [ESP + 0x64]         ; 0058d07c
    MOVSD ES:EDI,ESI                    ; 0058d080
    MOVSD ES:EDI,ESI                    ; 0058d081
    MOVSD ES:EDI,ESI                    ; 0058d082
    FLD float ptr [0x005f6d39]          ; 0058d083 | DAT_005f6d39
    FLD float ptr [ESP + 0xc8]          ; 0058d089
    FMUL ST1                            ; 0058d090
    FLD float ptr [ESP + 0xcc]          ; 0058d092
    FMUL ST2                            ; 0058d099
    FLD float ptr [ESP + 0xd0]          ; 0058d09b
    FMULP ST3                           ; 0058d0a2
    LEA EDI,[ESP + 0x110]               ; 0058d0a4
    LEA ESI,[ESP + 0x104]               ; 0058d0ab
    FXCH                                ; 0058d0b2
    FSTP float ptr [ESP + 0x104]        ; 0058d0b4
    FSTP float ptr [ESP + 0x108]        ; 0058d0bb
    FSTP float ptr [ESP + 0x10c]        ; 0058d0c2
    MOVSD ES:EDI,ESI                    ; 0058d0c9
    MOVSD ES:EDI,ESI                    ; 0058d0ca
    MOVSD ES:EDI,ESI                    ; 0058d0cb
    MOV EAX,dword ptr [ESP + 0x118]     ; 0058d0cc
    MOV dword ptr [ESP + 0xf4],EAX      ; 0058d0d3
    LEA EAX,[ESP + 0xec]                ; 0058d0da
    PUSH EAX                            ; 0058d0e1
    MOV EDI,dword ptr [ESP + 0x144]     ; 0058d0e2
    PUSH EDI                            ; 0058d0e9
    LEA ESI,[ESP + 0xe8]                ; 0058d0ea
    LEA EBX,[ESP + 0xf4]                ; 0058d0f1
    CALL core_actor.cpp_FUN_00408b40    ; 0058d0f8
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA EDI,[ESP + 0x58]                ; 0058d0fd
    LEA ESI,[ESP + 0xe8]                ; 0058d101
    ADD ESP,0x8                         ; 0058d108
    LEA EAX,[ESP + 0x50]                ; 0058d10b
    MOVSD ES:EDI,ESI                    ; 0058d10f
    MOVSD ES:EDI,ESI                    ; 0058d110
    MOVSD ES:EDI,ESI                    ; 0058d111
    CMP EBX,EAX                         ; 0058d112
    JZ 0x0058d137                       ; 0058d114
        ;   XREF to: 0058d137 (CONDITIONAL_JUMP)  ; LAB_0058d137
    MOV EAX,dword ptr [ESP + 0x50]      ; 0058d116
    MOV dword ptr [ESP + 0xec],EAX      ; 0058d11a
    MOV EAX,dword ptr [ESP + 0x54]      ; 0058d121
    MOV dword ptr [ESP + 0xf0],EAX      ; 0058d125
    MOV EAX,dword ptr [ESP + 0x58]      ; 0058d12c
    MOV dword ptr [ESP + 0xf4],EAX      ; 0058d130
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d137
        ;   Label: LAB_0058d137
    MOV EAX,dword ptr [EAX + 0x44]      ; 0058d13a
    MOV dword ptr [ESP + 0x12c],EAX     ; 0058d13d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d144
    MOV EAX,dword ptr [EAX + 0x50]      ; 0058d147
    MOV dword ptr [ESP + 0x124],EAX     ; 0058d14a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d151
    MOV EAX,dword ptr [EAX + 0x5c]      ; 0058d154
    MOV dword ptr [ESP + 0x11c],EAX     ; 0058d157
    MOV EAX,dword ptr [ESP + 0x140]     ; 0058d15e
    MOV EAX,dword ptr [EAX + 0x44]      ; 0058d165
    MOV dword ptr [ESP + 0x130],EAX     ; 0058d168
    MOV EAX,dword ptr [ESP + 0x140]     ; 0058d16f
    MOV EAX,dword ptr [EAX + 0x50]      ; 0058d176
    MOV dword ptr [ESP + 0x120],EAX     ; 0058d179
    FLD float ptr [ESP + 0x124]         ; 0058d180
    FMUL float ptr [ESP + 0x120]        ; 0058d187
    MOV EAX,dword ptr [ESP + 0x140]     ; 0058d18e
    FLD float ptr [ESP + 0x12c]         ; 0058d195
    FMUL float ptr [ESP + 0x130]        ; 0058d19c
    MOV EAX,dword ptr [EAX + 0x5c]      ; 0058d1a3
    FADDP                               ; 0058d1a6
    MOV dword ptr [ESP + 0x128],EAX     ; 0058d1a8
    FLD float ptr [ESP + 0x11c]         ; 0058d1af
    FMUL float ptr [ESP + 0x128]        ; 0058d1b6
    FADDP                               ; 0058d1bd
    FABS                                ; 0058d1bf
    FLD double ptr [0x005f6d59]         ; 0058d1c1 | DAT_005f6d59
    FCOS                                ; 0058d1c7
    FCOMPP                              ; 0058d1c9
    FNSTSW AX                           ; 0058d1cb
    SAHF                                ; 0058d1cd
    JA 0x0058cf0b                       ; 0058d1ce
        ;   XREF to: 0058cf0b (CONDITIONAL_JUMP)  ; LAB_0058cf0b
    MOV EAX,dword ptr [ESP + 0x140]     ; 0058d1d4
    ADD EAX,0x20                        ; 0058d1db
    PUSH EAX                            ; 0058d1de
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d1df
    PUSH EAX                            ; 0058d1e2
    LEA ESI,[ESP + 0xac]                ; 0058d1e3
    LEA EDI,[ESP + 0xb8]                ; 0058d1ea
    CALL core_actor.cpp_FUN_00408bb0    ; 0058d1f1
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0xac]                ; 0058d1f6
    ADD ESP,0x8                         ; 0058d1fd
    MOVSD ES:EDI,ESI                    ; 0058d200
    MOVSD ES:EDI,ESI                    ; 0058d201
    MOVSD ES:EDI,ESI                    ; 0058d202
    FLD float ptr [ESP + 0xb8]          ; 0058d203
    FLDZ                                ; 0058d20a
    FCOMPP                              ; 0058d20c
    FNSTSW AX                           ; 0058d20e
    SAHF                                ; 0058d210
    JNC 0x0058cf0b                      ; 0058d211
        ;   XREF to: 0058cf0b (CONDITIONAL_JUMP)  ; LAB_0058cf0b
    PUSH 0x1                            ; 0058d217
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d219
    PUSH 0x37                           ; 0058d21c
    ADD EAX,0x158                       ; 0058d21e
    MOV EBX,dword ptr [ESP + 0x148]     ; 0058d223
    PUSH EAX                            ; 0058d22a
    MOV dword ptr [EAX + 0x1fe2c],EBX   ; 0058d22b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0058d231
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058d236
    MOV ESI,0x40000000                  ; 0058d239
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d23e
    XOR EDX,EDX                         ; 0058d241
    MOV EBX,EAX                         ; 0058d243
    MOV dword ptr [EAX + 0xc1e4],0x0    ; 0058d245
    LEA EAX,[ESP + 0xd4]                ; 0058d24f
    MOV EDI,dword ptr [ESP + 0x140]     ; 0058d256
    PUSH EAX                            ; 0058d25d
    MOV dword ptr [ESP + 0xd8],EDX      ; 0058d25e
    MOV dword ptr [ESP + 0xe0],ESI      ; 0058d265
    PUSH EDI                            ; 0058d26c
    LEA ESI,[ESP + 0x7c]                ; 0058d26d
    MOV dword ptr [ESP + 0xe0],EDX      ; 0058d271
    CALL core_actor.cpp_FUN_00408b40    ; 0058d278
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA EDI,[ESP + 0x100]               ; 0058d27d
    LEA ESI,[ESP + 0x7c]                ; 0058d284
    ADD ESP,0x8                         ; 0058d288
    ADD EBX,0x20228                     ; 0058d28b
    MOVSD ES:EDI,ESI                    ; 0058d291
    MOVSD ES:EDI,ESI                    ; 0058d292
    MOVSD ES:EDI,ESI                    ; 0058d293
    LEA EAX,[ESP + 0x8c]                ; 0058d294
    FLD float ptr [ESP + 0xf8]          ; 0058d29b
    FLD float ptr [ESP + 0xfc]          ; 0058d2a2
    FLD float ptr [ESP + 0x100]         ; 0058d2a9
    LEA EDI,[ESP + 0x8c]                ; 0058d2b0
    LEA ESI,[ESP + 0x80]                ; 0058d2b7
    FXCH ST2                            ; 0058d2be
    FSUB float ptr [EBX + 0xfffdfdf8]   ; 0058d2c0
    FXCH                                ; 0058d2c6
    FSUB float ptr [EBX + 0xfffdfdfc]   ; 0058d2c8
    FXCH ST2                            ; 0058d2ce
    FSUB float ptr [EBX + 0xfffdfe00]   ; 0058d2d0
    FXCH                                ; 0058d2d6
    FSTP float ptr [ESP + 0x80]         ; 0058d2d8
    FXCH                                ; 0058d2df
    FSTP float ptr [ESP + 0x84]         ; 0058d2e1
    FSTP float ptr [ESP + 0x88]         ; 0058d2e8
    MOVSD ES:EDI,ESI                    ; 0058d2ef
    MOVSD ES:EDI,ESI                    ; 0058d2f0
    MOVSD ES:EDI,ESI                    ; 0058d2f1
    CMP EBX,EAX                         ; 0058d2f2
    JZ 0x0058d313                       ; 0058d2f4
        ;   XREF to: 0058d313 (CONDITIONAL_JUMP)  ; LAB_0058d313
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0058d2f6
    MOV dword ptr [EBX],EAX             ; 0058d2fd
    MOV EAX,dword ptr [ESP + 0x90]      ; 0058d2ff
    MOV dword ptr [EBX + 0x4],EAX       ; 0058d306
    MOV EAX,dword ptr [ESP + 0x94]      ; 0058d309
    MOV dword ptr [EBX + 0x8],EAX       ; 0058d310
    FLD float ptr [ESP + 0xec]          ; 0058d313
        ;   Label: LAB_0058d313
    FLD float ptr [ESP + 0xf0]          ; 0058d31a
    FLD float ptr [ESP + 0xf4]          ; 0058d321
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d328
    LEA EDI,[ESP + 0x38]                ; 0058d32b
    LEA ESI,[ESP + 0x44]                ; 0058d32f
    FXCH ST2                            ; 0058d333
    FSUB float ptr [EAX + 0x20]         ; 0058d335
    FXCH                                ; 0058d338
    FSUB float ptr [EAX + 0x24]         ; 0058d33a
    FXCH ST2                            ; 0058d33d
    FSUB float ptr [EAX + 0x28]         ; 0058d33f
    FXCH                                ; 0058d342
    FSTP float ptr [ESP + 0x44]         ; 0058d344
    FXCH                                ; 0058d348
    FSTP float ptr [ESP + 0x48]         ; 0058d34a
    FSTP float ptr [ESP + 0x4c]         ; 0058d34e
    LEA EAX,[ESP + 0x38]                ; 0058d352
    MOVSD ES:EDI,ESI                    ; 0058d356
    MOVSD ES:EDI,ESI                    ; 0058d357
    MOVSD ES:EDI,ESI                    ; 0058d358
    PUSH EAX                            ; 0058d359
    LEA ESI,[ESP + 0xc0]                ; 0058d35a
    LEA EDI,[ESP + 0x9c]                ; 0058d361
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 0058d368
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0xc0]                ; 0058d36d
    ADD ESP,0x4                         ; 0058d374
    MOVSD ES:EDI,ESI                    ; 0058d377
    MOVSD ES:EDI,ESI                    ; 0058d378
    MOVSD ES:EDI,ESI                    ; 0058d379
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058d37a
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0058d37d
    MOV dword ptr [EBX + 0x20234],EAX   ; 0058d384
    MOV EAX,dword ptr [ESP + 0x140]     ; 0058d38a
    PUSH EAX                            ; 0058d391
    PUSH 0x5f6d19                       ; 0058d392 | = "Climbing ladder %s\n"
    MOV EDX,dword ptr [0x00611100]      ; 0058d397 | g_CConsolePtr
    PUSH EDX                            ; 0058d39d | g_CConsoleInstance
    MOV dword ptr [EBX + 0x20238],0x3f800000 ; 0058d39e
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0058d3a8
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    MOV EAX,0x1                         ; 0058d3ad
    ADD ESP,0xc                         ; 0058d3b2
    MOV ESP,EBP                         ; 0058d3b5
    POP EBP                             ; 0058d3b7
    POP EDI                             ; 0058d3b8
    POP ESI                             ; 0058d3b9
    POP EBX                             ; 0058d3ba
    RET                                 ; 0058d3bb

