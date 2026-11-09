; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_FUN_00595f30(CZombie *param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_CHASE_2_005eef6a
;   TerminatedCString s_ghoul_eat_wav_005eef72
;   TerminatedCString s_s_picked_up_s_using_hand_005eef82
;   TerminatedCString s_core_zombie_cpp_005eefa1
;   undefined4 DAT_005eefb4
;   TerminatedCString s_s_lugging_s_005eefb9
;   TerminatedCString s_zom_h0_wav_005eefc8
;   TerminatedCString s_core_zombie_cpp_005eefd4
;   undefined4 DAT_005eefe7
;   TerminatedCString s_s_tossing_s_005eefec
;   TerminatedCString s_zom_h0_wav_005eeffb
;   TerminatedCString s_zombie_bang_door_wav_005ef007
;   TerminatedCString s_ghoul_eat_wav_005ef01d
;   undefined4 s_ghoul_eat_wav_005ef01d+1
;   undefined4 s_ghoul_eat_wav_005ef01d+2
;   ... and 52 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_CVector3f_ctor_FUN_0040d340
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d30
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_FUN_0040cf60
;   core_actor.cpp_FUN_0040d060
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_charactr.cpp_FUN_00423a10
;   core_charactr.cpp_FUN_00423a60
;   core_charactr.cpp_FUN_00424430
;   core_charactr.cpp_FUN_00424470
;   ... and 36 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00595f30
        ;   Label: core_zombie.cpp_FUN_00595f30
    PUSH ESI                            ; 00595f31
    PUSH EDI                            ; 00595f32
    PUSH EBP                            ; 00595f33
    MOV EBP,ESP                         ; 00595f34
    SUB ESP,0x618                       ; 00595f36
    SUB EBP,0x7a                        ; 00595f3c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00595f3f
    PUSH dword ptr [EBP + 0x92]         ; 00595f45
    PUSH EBX                            ; 00595f4b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 00595f4c
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00595f51
    TEST EAX,EAX                        ; 00595f54
    JNZ 0x00595f60                      ; 00595f56
        ;   XREF to: 00595f60 (CONDITIONAL_JUMP)  ; LAB_00595f60
    LEA ESP,[EBP + 0x7a]                ; 00595f58
        ;   Label: LAB_00595f58
    POP EBP                             ; 00595f5b
    POP EDI                             ; 00595f5c
    POP ESI                             ; 00595f5d
    POP EBX                             ; 00595f5e
    RET                                 ; 00595f5f
    XOR EDX,EDX                         ; 00595f60
        ;   Label: LAB_00595f60
    PUSH EDX                            ; 00595f62
    PUSH 0x5eef6a                       ; 00595f63 | = "CHASE_2"
    LEA EAX,[EBX + 0x2b4]               ; 00595f68
    PUSH EAX                            ; 00595f6e
    MOV dword ptr [EBP + 0x36],EDX      ; 00595f6f
    CALL core_motion.cpp_FUN_00503860   ; 00595f72
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00595f77
    PUSH EAX                            ; 00595f7a
    CALL core_motion.cpp_FUN_00502fa0   ; 00595f7b
        ;   XREF to: 00502fa0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_00502fa0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00595f80
    CMP EAX,0x16                        ; 00595f83
    JNZ 0x00595f8f                      ; 00595f86
        ;   XREF to: 00595f8f (CONDITIONAL_JUMP)  ; LAB_00595f8f
    MOV dword ptr [EBP + 0x36],0x1      ; 00595f88
    MOV ESI,dword ptr [EBX + 0x276c]    ; 00595f8f
        ;   Label: LAB_00595f8f
    TEST ESI,ESI                        ; 00595f95
    JNZ 0x00596029                      ; 00595f97
        ;   XREF to: 00596029 (CONDITIONAL_JUMP)  ; LAB_00596029
    FLD float ptr [EBX + 0x10bd0]       ; 00595f9d
    FLDZ                                ; 00595fa3
    FCOMPP                              ; 00595fa5
    FNSTSW AX                           ; 00595fa7
    SAHF                                ; 00595fa9
    JC 0x00596089                       ; 00595faa
        ;   XREF to: 00596089 (CONDITIONAL_JUMP)  ; LAB_00596089
    LEA EAX,[EBP + 0xfffffb12]          ; 00595fb0
        ;   Label: LAB_00595fb0
    FLD float ptr [EBP + 0x92]          ; 00595fb6
    ADD EAX,0xc                         ; 00595fbc
    FMUL float ptr [EBX + 0x10a60]      ; 00595fbf
    MOV dword ptr [EBP + 0x1e],EAX      ; 00595fc5
    LEA EAX,[EBP + 0xfffffb72]          ; 00595fc8
    ADD EAX,0xc                         ; 00595fce
    MOV dword ptr [EBP + 0x26],EAX      ; 00595fd1
    LEA EAX,[EBX + 0x2b4]               ; 00595fd4
    FSTP float ptr [EBP + -0x12]        ; 00595fda
    MOV dword ptr [EBP + 0x5a],EAX      ; 00595fdd
    FLD float ptr [EBP + -0x12]         ; 00595fe0
        ;   Label: LAB_00595fe0
    FLDZ                                ; 00595fe3
    FCOMPP                              ; 00595fe5
    FNSTSW AX                           ; 00595fe7
    SAHF                                ; 00595fe9
    JNC 0x00596aa3                      ; 00595fea
        ;   XREF to: 00596aa3 (CONDITIONAL_JUMP)  ; LAB_00596aa3
    LEA EAX,[EBP + -0x12]               ; 00595ff0
    PUSH EAX                            ; 00595ff3
    MOV ECX,dword ptr [EBP + 0x5a]      ; 00595ff4
    PUSH ECX                            ; 00595ff7
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 00595ff8
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00595ffd
    MOV ESI,EAX                         ; 00596000
    CMP EAX,0xb                         ; 00596002
    JNC 0x00596a4b                      ; 00596005
        ;   XREF to: 00596a4b (CONDITIONAL_JUMP)  ; LAB_00596a4b
    CMP EAX,0x5                         ; 0059600b
    JNC 0x00596a85                      ; 0059600e
        ;   XREF to: 00596a85 (CONDITIONAL_JUMP)  ; LAB_00596a85
    CMP EAX,0x2                         ; 00596014
    JZ 0x0059642f                       ; 00596017
        ;   XREF to: 0059642f (CONDITIONAL_JUMP)  ; LAB_0059642f
    PUSH ESI                            ; 0059601d
        ;   Label: LAB_0059601d
    PUSH EBX                            ; 0059601e
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 0059601f
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00596024
    JMP 0x00595fe0                      ; 00596027
        ;   XREF to: 00595fe0 (UNCONDITIONAL_JUMP)  ; LAB_00595fe0
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 00596029
        ;   Label: LAB_00596029
    PUSH 0x0                            ; 0059602f
    MOV dword ptr [EBP + 0x76],EAX      ; 00596031
    LEA EAX,[EBX + 0x2b4]               ; 00596034
    MOV dword ptr [EBP + 0x1a],ESI      ; 0059603a
    PUSH EAX                            ; 0059603d
    LEA ESI,[EBP + 0xfffffdee]          ; 0059603e
    LEA EDI,[EBP + 0xfffffdbe]          ; 00596044
    CALL core_skeleton.cpp_FUN_00546a90 ; 0059604a
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    ADD ESP,0x8                         ; 0059604f
    LEA EAX,[EBP + 0xfffffdbe]          ; 00596052
    LEA ESI,[EBP + 0xfffffdee]          ; 00596058
    PUSH EAX                            ; 0059605e
    MOVSD ES:EDI,ESI                    ; 0059605f
    MOVSD ES:EDI,ESI                    ; 00596060
    MOVSD ES:EDI,ESI                    ; 00596061
    PUSH EBX                            ; 00596062
    MOV EDI,dword ptr [EBP + 0x1a]      ; 00596063
    MOV EAX,dword ptr [EBP + 0x76]      ; 00596066
    PUSH EDI                            ; 00596069
    CALL dword ptr [EAX + 0x118]        ; 0059606a
    ADD ESP,0xc                         ; 00596070
    TEST EAX,EAX                        ; 00596073
    JNZ 0x00595f58                      ; 00596075
        ;   XREF to: 00595f58 (CONDITIONAL_JUMP)  ; LAB_00595f58
    MOV dword ptr [EBX + 0x276c],EAX    ; 0059607b
    LEA ESP,[EBP + 0x7a]                ; 00596081
    POP EBP                             ; 00596084
    POP EDI                             ; 00596085
    POP ESI                             ; 00596086
    POP EBX                             ; 00596087
    RET                                 ; 00596088
    FLD float ptr [EBX + 0x10bd0]       ; 00596089
        ;   Label: LAB_00596089
    FSUB float ptr [EBP + 0x92]         ; 0059608f
    FSTP float ptr [EBX + 0x10bd0]      ; 00596095
    JMP 0x00595fb0                      ; 0059609b
        ;   XREF to: 00595fb0 (UNCONDITIONAL_JUMP)  ; LAB_00595fb0
    MOV EDI,0x1                         ; 005960a0
        ;   Label: LAB_005960a0
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005960a5
    MOV dword ptr [EBP + 0x3a],EDI      ; 005960ab
    TEST EAX,EAX                        ; 005960ae
    JNZ 0x005960c0                      ; 005960b0
        ;   XREF to: 005960c0 (CONDITIONAL_JUMP)  ; LAB_005960c0
    PUSH EBX                            ; 005960b2
        ;   Label: LAB_005960b2
    CALL core_zombie.cpp_FUN_00599d00   ; 005960b3
        ;   XREF to: 00599d00 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_00599d00(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005960b8
    JMP 0x00595fe0                      ; 005960bb
        ;   XREF to: 00595fe0 (UNCONDITIONAL_JUMP)  ; LAB_00595fe0
    MOV EAX,[0x005fe318]                ; 005960c0 | DAT_005fe318
        ;   Label: LAB_005960c0
    MOV dword ptr [EBP + 0xfffffc9a],EAX ; 005960c5
    LEA EAX,[EBP + 0xfffffc92]          ; 005960cb
    LEA ESI,[EBP + 0xfffffc26]          ; 005960d1
    PUSH EAX                            ; 005960d7
    LEA EDI,[EBP + 0xfffffd0a]          ; 005960d8
    XOR EDX,EDX                         ; 005960de
    PUSH EBX                            ; 005960e0
    MOV dword ptr [EBP + 0xfffffc92],EDX ; 005960e1
    MOV dword ptr [EBP + 0xfffffc96],EDX ; 005960e7
    CALL core_actor.cpp_FUN_00408d70    ; 005960ed
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[EBP + 0xfffffc26]          ; 005960f2
    MOVSD ES:EDI,ESI                    ; 005960f8
    MOVSD ES:EDI,ESI                    ; 005960f9
    MOVSD ES:EDI,ESI                    ; 005960fa
    FLD float ptr [EBP + 0xfffffd0a]    ; 005960fb
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00596101
    FLD float ptr [EBP + 0xfffffd0e]    ; 00596107
    FXCH                                ; 0059610d
    FSUB float ptr [EAX + 0x20]         ; 0059610f
    FLD float ptr [EBP + 0xfffffd12]    ; 00596112
    FXCH                                ; 00596118
    FSTP float ptr [EBP + -0x6e]        ; 0059611a
    FXCH                                ; 0059611d
    FSUB float ptr [EAX + 0x24]         ; 0059611f
    LEA EDI,[EBP + 0xfffffc3e]          ; 00596122
    FSTP float ptr [EBP + -0x6a]        ; 00596128
    FSUB float ptr [EAX + 0x28]         ; 0059612b
    LEA ESI,[EBP + -0x6e]               ; 0059612e
    FSTP float ptr [EBP + -0x66]        ; 00596131
    MOVSD ES:EDI,ESI                    ; 00596134
    MOVSD ES:EDI,ESI                    ; 00596135
    MOVSD ES:EDI,ESI                    ; 00596136
    FLD float ptr [EBP + 0xfffffc3e]    ; 00596137
    FMUL ST0                            ; 0059613d
    FLD float ptr [EBP + 0xfffffc46]    ; 0059613f
    FMUL ST0                            ; 00596145
    FADDP                               ; 00596147
    FSQRT                               ; 00596149
    XOR ESI,ESI                         ; 0059614b
    ADD ESP,0x8                         ; 0059614d
    MOV dword ptr [EBP + 0xfffffc42],ESI ; 00596150
    FLD1                                ; 00596156
    FCOMPP                              ; 00596158
    FNSTSW AX                           ; 0059615a
    SAHF                                ; 0059615c
    JC 0x005960b2                       ; 0059615d
        ;   XREF to: 005960b2 (CONDITIONAL_JUMP)  ; LAB_005960b2
    CMP dword ptr [EBP + 0x3a],0x0      ; 00596163
    JZ 0x00596231                       ; 00596167
        ;   XREF to: 00596231 (CONDITIONAL_JUMP)  ; LAB_00596231
    MOV EDX,0x40800000                  ; 0059616d
    LEA EAX,[EBP + 0xfffffdb2]          ; 00596172
    LEA EDI,[EBP + 0xfffffce6]          ; 00596178
    PUSH EAX                            ; 0059617e
    MOV dword ptr [EBP + 0xfffffdb2],ESI ; 0059617f
    MOV dword ptr [EBP + 0xfffffdba],ESI ; 00596185
    PUSH EBX                            ; 0059618b
    LEA ESI,[EBP + 0xfffffe8a]          ; 0059618c
    MOV dword ptr [EBP + 0xfffffdb6],EDX ; 00596192
    CALL core_actor.cpp_FUN_00408d70    ; 00596198
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[EBP + 0xfffffe8a]          ; 0059619d
    MOVSD ES:EDI,ESI                    ; 005961a3
    MOVSD ES:EDI,ESI                    ; 005961a4
    MOVSD ES:EDI,ESI                    ; 005961a5
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 005961a6
    LEA EDI,[EBP + 0xfffffe7e]          ; 005961ac
    LEA ESI,[ESI + 0x20]                ; 005961b2
    MOVSD ES:EDI,ESI                    ; 005961b5
    MOVSD ES:EDI,ESI                    ; 005961b6
    MOVSD ES:EDI,ESI                    ; 005961b7
    ADD ESP,0x8                         ; 005961b8
    MOV ESI,dword ptr [0x0061b5a8]      ; 005961bb | g_CDemonSetPtr
    MOV EAX,dword ptr [EBP + 0xfffffcea] ; 005961c1
    PUSH ESI                            ; 005961c7 | g_CDemonSetInstance
    MOV dword ptr [EBP + 0xfffffe82],EAX ; 005961c8
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 005961ce
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005961d3
    PUSH EBX                            ; 005961d6
    MOV EDI,dword ptr [0x0061b5a8]      ; 005961d7 | g_CDemonSetPtr
    PUSH EDI                            ; 005961dd | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 005961de
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005961e3
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005961e6
    PUSH EAX                            ; 005961ec
    MOV EDX,dword ptr [0x0061b5a8]      ; 005961ed | g_CDemonSetPtr
    PUSH EDX                            ; 005961f3 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 005961f4
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005961f9
    LEA EAX,[EBP + 0xfffffe7e]          ; 005961fc
    PUSH EAX                            ; 00596202
    LEA EAX,[EBP + 0xfffffce6]          ; 00596203
    PUSH EAX                            ; 00596209
    MOV ECX,dword ptr [0x0061b5a8]      ; 0059620a | g_CDemonSetPtr
    PUSH ECX                            ; 00596210 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00535e10 ; 00596211
        ;   XREF to: 00535e10 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00535e10(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 00596216
    TEST EAX,EAX                        ; 00596219
    JZ 0x00596222                       ; 0059621b
        ;   XREF to: 00596222 (CONDITIONAL_JUMP)  ; LAB_00596222
    XOR ESI,ESI                         ; 0059621d
    MOV dword ptr [EBP + 0x3a],ESI      ; 0059621f
    MOV EDI,dword ptr [0x0061b5a8]      ; 00596222 | g_CDemonSetPtr
        ;   Label: LAB_00596222
    PUSH EDI                            ; 00596228 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 00596229
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0059622e
    CMP dword ptr [EBP + 0x3a],0x0      ; 00596231
        ;   Label: LAB_00596231
    JZ 0x00596258                       ; 00596235
        ;   XREF to: 00596258 (CONDITIONAL_JUMP)  ; LAB_00596258
    PUSH 0x0                            ; 00596237
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00596239
    PUSH EBX                            ; 0059623f
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 00596240
    PUSH EAX                            ; 00596246
    CALL dword ptr [ESI + 0xf4]         ; 00596247
    ADD ESP,0xc                         ; 0059624d
    TEST EAX,EAX                        ; 00596250
    JZ 0x005960b2                       ; 00596252
        ;   XREF to: 005960b2 (CONDITIONAL_JUMP)  ; LAB_005960b2
    CMP dword ptr [EBP + 0x3a],0x0      ; 00596258
        ;   Label: LAB_00596258
    JNZ 0x00595fe0                      ; 0059625c
        ;   XREF to: 00595fe0 (CONDITIONAL_JUMP)  ; LAB_00595fe0
    PUSH EBX                            ; 00596262
    CALL core_zombie.cpp_FUN_00599d00   ; 00596263
        ;   XREF to: 00599d00 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_00599d00(CZombie * this_ptr)
    ADD ESP,0x4                         ; 00596268
    JMP 0x00595fe0                      ; 0059626b
        ;   XREF to: 00595fe0 (UNCONDITIONAL_JUMP)  ; LAB_00595fe0
    CMP dword ptr [EBX + 0x10a78],0x0   ; 00596270
        ;   Label: LAB_00596270
    JNZ 0x00596287                      ; 00596277
        ;   XREF to: 00596287 (CONDITIONAL_JUMP)  ; LAB_00596287
    PUSH EBX                            ; 00596279
    CALL core_zombie.cpp_FUN_00599d00   ; 0059627a
        ;   XREF to: 00599d00 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_00599d00(CZombie * this_ptr)
    ADD ESP,0x4                         ; 0059627f
    JMP 0x00595fe0                      ; 00596282
        ;   XREF to: 00595fe0 (UNCONDITIONAL_JUMP)  ; LAB_00595fe0
    MOV EDI,dword ptr [EBX + 0x10b88]   ; 00596287
        ;   Label: LAB_00596287
    PUSH EDI                            ; 0059628d
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0059628e
    PUSH EAX                            ; 00596291
    LEA ESI,[EBP + 0xfffffcb6]          ; 00596292
    LEA EDI,[EBP + 0xffffff3e]          ; 00596298
    CALL core_skeleton.cpp_FUN_005469a0 ; 0059629e
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 005962a3
    LEA EAX,[EBP + 0xffffff3e]          ; 005962a6
    LEA ESI,[EBP + 0xfffffcb6]          ; 005962ac
    PUSH EAX                            ; 005962b2
    MOVSD ES:EDI,ESI                    ; 005962b3
    MOVSD ES:EDI,ESI                    ; 005962b4
    MOVSD ES:EDI,ESI                    ; 005962b5
    PUSH EBX                            ; 005962b6
    LEA ESI,[EBP + 0xfffffcc2]          ; 005962b7
    LEA EDI,[EBP + 0xfffffed2]          ; 005962bd
    CALL core_actor.cpp_FUN_00408d70    ; 005962c3
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[EBP + 0xfffffcc2]          ; 005962c8
    MOVSD ES:EDI,ESI                    ; 005962ce
    MOVSD ES:EDI,ESI                    ; 005962cf
    MOVSD ES:EDI,ESI                    ; 005962d0
    MOV EDX,dword ptr [EBX + 0x10bc4]   ; 005962d1
    ADD ESP,0x8                         ; 005962d7
    TEST EDX,EDX                        ; 005962da
    JL 0x00596306                       ; 005962dc
        ;   XREF to: 00596306 (CONDITIONAL_JUMP)  ; LAB_00596306
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005962de
    PUSH EAX                            ; 005962e4
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 005962e5
    CALL dword ptr [ESI + 0xfc]         ; 005962eb
    ADD ESP,0x4                         ; 005962f1
    CMP EAX,EBX                         ; 005962f4
    JZ 0x0059633f                       ; 005962f6
        ;   XREF to: 0059633f (CONDITIONAL_JUMP)  ; LAB_0059633f
    PUSH EBX                            ; 005962f8
    CALL core_zombie.cpp_FUN_00599d00   ; 005962f9
        ;   XREF to: 00599d00 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_00599d00(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005962fe
    JMP 0x00595fe0                      ; 00596301
        ;   XREF to: 00595fe0 (UNCONDITIONAL_JUMP)  ; LAB_00595fe0
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00596306
        ;   Label: LAB_00596306
    FLD float ptr [EBP + 0xfffffed2]    ; 0059630c
    FSUB float ptr [EAX + 0x20]         ; 00596312
    FMUL ST0                            ; 00596315
    FLD float ptr [EBP + 0xfffffeda]    ; 00596317
    FSUB float ptr [EAX + 0x28]         ; 0059631d
    FMUL ST0                            ; 00596320
    FADDP                               ; 00596322
    FSQRT                               ; 00596324
    FCOMP double ptr [0x005ef1ba]       ; 00596326 | DAT_005ef1ba
    FNSTSW AX                           ; 0059632c
    SAHF                                ; 0059632e
    JBE 0x0059633f                      ; 0059632f
        ;   XREF to: 0059633f (CONDITIONAL_JUMP)  ; LAB_0059633f
    PUSH EBX                            ; 00596331
    CALL core_zombie.cpp_FUN_00599d00   ; 00596332
        ;   XREF to: 00599d00 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_00599d00(CZombie * this_ptr)
    ADD ESP,0x4                         ; 00596337
    JMP 0x00595fe0                      ; 0059633a
        ;   XREF to: 00595fe0 (UNCONDITIONAL_JUMP)  ; LAB_00595fe0
    LEA EAX,[EBP + 0xfffffa62]          ; 0059633f
        ;   Label: LAB_0059633f
    PUSH EAX                            ; 00596345
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 00596346
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0059634b
    PUSH 0x41c80000                     ; 0059634e
    PUSH 0x41700000                     ; 00596353
    LEA ESI,[EBP + 0xfffffa62]          ; 00596358
    CALL core_actor.cpp_FUN_0040cf60    ; 0059635e
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 00596363
    ADD ESP,0x8                         ; 00596366
    MOV dword ptr [EBP + 0xfffffa96],EBX ; 00596369
    MOV dword ptr [EBP + 0xfffffa9a],EBX ; 0059636f
    FLD float ptr [EBP + 0x76]          ; 00596375
    PUSH ESI                            ; 00596378
    FSTP float ptr [EBP + 0xfffffa66]   ; 00596379
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0059637f
    PUSH EAX                            ; 00596385
    MOV EDI,dword ptr [EAX + 0x2b0]     ; 00596386
    CALL dword ptr [EDI + 0x110]        ; 0059638c
    FLD float ptr [EBP + 0xfffffa66]    ; 00596392
    FLDZ                                ; 00596398
    ADD ESP,0x8                         ; 0059639a
    FXCH                                ; 0059639d
    FSTP double ptr [EBP + -0x2e]       ; 0059639f
    FCOMP double ptr [EBP + -0x2e]      ; 005963a2
    FNSTSW AX                           ; 005963a5
    SAHF                                ; 005963a7
    JNC 0x005963df                      ; 005963a8
        ;   XREF to: 005963df (CONDITIONAL_JUMP)  ; LAB_005963df
    FLD double ptr [EBP + -0x2e]        ; 005963aa
    FMUL double ptr [0x005ef182]        ; 005963ad | DAT_005ef182
    FMUL double ptr [0x005ef18a]        ; 005963b3 | DAT_005ef18a
    PUSH 0x0                            ; 005963b9
    CALL crt_math.c_round_FUN_005b7ff0  ; 005963bb
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [EBP + 0x4e]        ; 005963c0
    MOV ECX,dword ptr [EBP + 0x4e]      ; 005963c3
    PUSH ECX                            ; 005963c6
    PUSH 0x0                            ; 005963c7
    LEA EAX,[EBP + 0xfffffed2]          ; 005963c9
    PUSH EAX                            ; 005963cf
    MOV ESI,dword ptr [0x006167e0]      ; 005963d0 | g_CGorePtr
    PUSH ESI                            ; 005963d6
    CALL core_gore.cpp_FUN_004c9850     ; 005963d7
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004c9850(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 005963dc
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005963df
        ;   Label: LAB_005963df
    PUSH EAX                            ; 005963e5
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 005963e6
    CALL dword ptr [ESI + 0x114]        ; 005963ec
    ADD ESP,0x4                         ; 005963f2
    TEST EAX,EAX                        ; 005963f5
    JLE 0x00596418                      ; 005963f7
        ;   XREF to: 00596418 (CONDITIONAL_JUMP)  ; LAB_00596418
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005963f9
    PUSH EAX                            ; 005963ff
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 00596400
    CALL dword ptr [ESI + 0xf8]         ; 00596406
    ADD ESP,0x4                         ; 0059640c
    PUSH EBX                            ; 0059640f
    CALL core_zombie.cpp_FUN_00599d00   ; 00596410
        ;   XREF to: 00599d00 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_00599d00(CZombie * this_ptr)
    ADD ESP,0x4                         ; 00596415
    PUSH 0x5eef72                       ; 00596418 | = "ghoul-eat-?.wav"
        ;   Label: LAB_00596418
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0059641d
    PUSH EBX                            ; 00596423
    CALL dword ptr [EAX + 0x34]         ; 00596424
    ADD ESP,0x8                         ; 00596427
    JMP 0x00595fe0                      ; 0059642a
        ;   XREF to: 00595fe0 (UNCONDITIONAL_JUMP)  ; LAB_00595fe0
    MOV ECX,dword ptr [EBX + 0x10b08]   ; 0059642f
        ;   Label: LAB_0059642f
    TEST ECX,ECX                        ; 00596435
    JZ 0x00595fe0                       ; 00596437
        ;   XREF to: 00595fe0 (CONDITIONAL_JUMP)  ; LAB_00595fe0
    MOV ESI,dword ptr [EBX + 0x10b0c]   ; 0059643d
    PUSH ESI                            ; 00596443
    PUSH EBX                            ; 00596444
    MOV EDI,ECX                         ; 00596445
    MOV dword ptr [EBX + 0x10b08],0x0   ; 00596447
    CALL core_zombie.cpp_FUN_00598e40   ; 00596451
        ;   XREF to: 00598e40 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_FUN_00598e40(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 00596456
    MOV ESI,EAX                         ; 00596459
    TEST EAX,EAX                        ; 0059645b
    JL 0x00595fe0                       ; 0059645d
        ;   XREF to: 00595fe0 (CONDITIONAL_JUMP)  ; LAB_00595fe0
    PUSH 0x0                            ; 00596463
    PUSH 0x3e4ccccd                     ; 00596465
    PUSH EDI                            ; 0059646a
    PUSH EAX                            ; 0059646b
    PUSH EBX                            ; 0059646c
    CALL core_charactr.cpp_FUN_00428b10 ; 0059646d
        ;   XREF to: 00428b10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00428b10()
    ADD ESP,0x14                        ; 00596472
    PUSH ESI                            ; 00596475
    PUSH EDI                            ; 00596476
    PUSH EBX                            ; 00596477
    MOV EAX,0x5eef82                    ; 00596478 | = "%s picked up %s using hand %d\n"
    PUSH EAX                            ; 0059647d | = "%s picked up %s using hand %d\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 0059647e | g_CConsolePtr
    PUSH EDI                            ; 00596484 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 00596485
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x14                        ; 0059648a
    JMP 0x00595fe0                      ; 0059648d
        ;   XREF to: 00595fe0 (UNCONDITIONAL_JUMP)  ; LAB_00595fe0
    PUSH 0x2                            ; 00596492
        ;   Label: LAB_00596492
    PUSH EBX                            ; 00596494
    CALL core_zombie.cpp_FUN_00598e40   ; 00596495
        ;   XREF to: 00598e40 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_FUN_00598e40(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 0059649a
    MOV ESI,EAX                         ; 0059649d
    TEST EAX,EAX                        ; 0059649f
    JL 0x00596519                       ; 005964a1
        ;   XREF to: 00596519 (CONDITIONAL_JUMP)  ; LAB_00596519
    IMUL EAX,ESI,0x78                   ; 005964a3
        ;   Label: LAB_005964a3
    ADD EAX,EBX                         ; 005964a6
    MOV EDX,dword ptr [EAX + 0x2620]    ; 005964a8
    TEST EDX,EDX                        ; 005964ae
    JZ 0x00595fe0                       ; 005964b0
        ;   XREF to: 00595fe0 (CONDITIONAL_JUMP)  ; LAB_00595fe0
    PUSH EDX                            ; 005964b6
    PUSH EBX                            ; 005964b7
    PUSH 0x5eefb9                       ; 005964b8 | = "%s lugging %s\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 005964bd | g_CConsolePtr
    PUSH EDI                            ; 005964c3 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 005964c4
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    MOV EDX,0x40c00000                  ; 005964c9
    XOR EAX,EAX                         ; 005964ce
    ADD ESP,0x10                        ; 005964d0
    MOV dword ptr [EBP + 0xfffffcda],EAX ; 005964d3
    LEA EAX,[EBP + 0xfffffcda]          ; 005964d9
    MOV ECX,0x41880000                  ; 005964df
    PUSH EAX                            ; 005964e4
    MOV dword ptr [EBP + 0xfffffcde],EDX ; 005964e5
    MOV dword ptr [EBP + 0xfffffce2],ECX ; 005964eb
    PUSH ESI                            ; 005964f1
    MOV EDI,dword ptr [EBX + 0x2b0]     ; 005964f2
    PUSH EBX                            ; 005964f8
    CALL dword ptr [EDI + 0x130]        ; 005964f9
    ADD ESP,0xc                         ; 005964ff
    PUSH 0x5eefc8                       ; 00596502 | = "zom-h0?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00596507
    PUSH EBX                            ; 0059650d
    CALL dword ptr [EAX + 0x34]         ; 0059650e
    ADD ESP,0x8                         ; 00596511
    JMP 0x00595fe0                      ; 00596514
        ;   XREF to: 00595fe0 (UNCONDITIONAL_JUMP)  ; LAB_00595fe0
    MOV ECX,0x5eefa1                    ; 00596519 | = "..\\core\\zombie.cpp"
        ;   Label: LAB_00596519
    MOV EDI,0x1ef                       ; 0059651e
    PUSH 0x5eefb4                       ; 00596523 | DAT_005eefb4
    MOV dword ptr [0x01d046a0],ECX      ; 00596528 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0059652e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00596534
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00596539
    JMP 0x005964a3                      ; 0059653c
        ;   XREF to: 005964a3 (UNCONDITIONAL_JUMP)  ; LAB_005964a3
    PUSH 0x3                            ; 00596541
        ;   Label: LAB_00596541
    PUSH EBX                            ; 00596543
    CALL core_zombie.cpp_FUN_00598e40   ; 00596544
        ;   XREF to: 00598e40 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_FUN_00598e40(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 00596549
    MOV dword ptr [EBP + -0x22],EAX     ; 0059654c
    TEST EAX,EAX                        ; 0059654f
    JL 0x00596622                       ; 00596551
        ;   XREF to: 00596622 (CONDITIONAL_JUMP)  ; LAB_00596622
    IMUL EAX,dword ptr [EBP + -0x22],0x78 ; 00596557
        ;   Label: LAB_00596557
    LEA EDX,[EBX + EAX*0x1]             ; 0059655b
    MOV ECX,dword ptr [EDX + 0x2620]    ; 0059655e
    MOV dword ptr [EBP + -0x1e],EDX     ; 00596564
    TEST ECX,ECX                        ; 00596567
    JZ 0x00595fe0                       ; 00596569
        ;   XREF to: 00595fe0 (CONDITIONAL_JUMP)  ; LAB_00595fe0
    PUSH ECX                            ; 0059656f
    PUSH EBX                            ; 00596570
    PUSH 0x5eefec                       ; 00596571 | = "%s tossing %s\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 00596576 | g_CConsolePtr
    PUSH EDI                            ; 0059657c | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0059657d
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    XOR EAX,EAX                         ; 00596582
    MOV ECX,0x3f800000                  ; 00596584
    MOV dword ptr [EBP + 0xfffffd22],EAX ; 00596589
    MOV dword ptr [EBP + 0xfffffd26],EAX ; 0059658f
    MOV dword ptr [EBP + 0xfffffd2a],ECX ; 00596595
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 0059659b
    ADD ESP,0x10                        ; 005965a1
    TEST ESI,ESI                        ; 005965a4
    JNZ 0x0059664a                      ; 005965a6
        ;   XREF to: 0059664a (CONDITIONAL_JUMP)  ; LAB_0059664a
    FLD float ptr [0x005ef17e]          ; 005965ac | DAT_005ef17e
        ;   Label: LAB_005965ac
    FLD float ptr [EBP + 0xfffffd22]    ; 005965b2
    FMUL ST1                            ; 005965b8
    FLD float ptr [EBP + 0xfffffd26]    ; 005965ba
    FMUL ST2                            ; 005965c0
    FLD float ptr [EBP + 0xfffffd2a]    ; 005965c2
    FMULP ST3                           ; 005965c8
    LEA EAX,[EBP + 0xfffffd22]          ; 005965ca
    MOV EDX,dword ptr [EBP + -0x22]     ; 005965d0
    PUSH EAX                            ; 005965d3
    FXCH                                ; 005965d4
    FSTP float ptr [EBP + 0xfffffd22]   ; 005965d6
    FSTP float ptr [EBP + 0xfffffd26]   ; 005965dc
    FSTP float ptr [EBP + 0xfffffd2a]   ; 005965e2
    FLD float ptr [EBP + 0xfffffd26]    ; 005965e8
    PUSH EDX                            ; 005965ee
    FADD float ptr [0x005ef1b2]         ; 005965ef | DAT_005ef1b2
    PUSH EBX                            ; 005965f5
    FSTP float ptr [EBP + 0xfffffd26]   ; 005965f6
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 005965fc
    CALL dword ptr [ESI + 0x130]        ; 00596602
    ADD ESP,0xc                         ; 00596608
    PUSH 0x5eeffb                       ; 0059660b | = "zom-h0?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00596610
    PUSH EBX                            ; 00596616
    CALL dword ptr [EAX + 0x34]         ; 00596617
    ADD ESP,0x8                         ; 0059661a
    JMP 0x00595fe0                      ; 0059661d
        ;   XREF to: 00595fe0 (UNCONDITIONAL_JUMP)  ; LAB_00595fe0
    MOV ESI,0x5eefd4                    ; 00596622 | = "..\\core\\zombie.cpp"
        ;   Label: LAB_00596622
    MOV EDI,0x206                       ; 00596627
    PUSH 0x5eefe7                       ; 0059662c | DAT_005eefe7
    MOV dword ptr [0x01d046a0],ESI      ; 00596631 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00596637 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0059663d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00596642
    JMP 0x00596557                      ; 00596645
        ;   XREF to: 00596557 (UNCONDITIONAL_JUMP)  ; LAB_00596557
    MOV EAX,dword ptr [EBP + -0x1e]     ; 0059664a
        ;   Label: LAB_0059664a
    MOV EAX,dword ptr [EAX + 0x2620]    ; 0059664d
    PUSH EAX                            ; 00596653
    MOV EDI,dword ptr [EAX + 0x2b0]     ; 00596654
    LEA ESI,[EBP + 0xfffffb5a]          ; 0059665a
    CALL dword ptr [EDI + 0x24]         ; 00596660
    MOV ECX,0x6                         ; 00596663
    LEA EDI,[EBP + 0xfffffb12]          ; 00596668
    LEA ESI,[EBP + 0xfffffb5a]          ; 0059666e
    MOVSD.REP ES:EDI,ESI                ; 00596674
    MOV EAX,dword ptr [EBP + 0x1e]      ; 00596676
    FLD float ptr [EBP + 0xfffffb16]    ; 00596679
    FLD float ptr [EBP + 0xfffffb12]    ; 0059667f
    FADD float ptr [EAX]                ; 00596685
    FLD float ptr [EBP + 0xfffffb1a]    ; 00596687
    FXCH                                ; 0059668d
    FSTP float ptr [EBP + 0xfffffe2a]   ; 0059668f
    FXCH                                ; 00596695
    FADD float ptr [EAX + 0x4]          ; 00596697
    LEA EDI,[EBP + 0xfffffeba]          ; 0059669a
    FSTP float ptr [EBP + 0xfffffe2e]   ; 005966a0
    FADD float ptr [EAX + 0x8]          ; 005966a6
    LEA ESI,[EBP + 0xfffffe2a]          ; 005966a9
    FSTP float ptr [EBP + 0xfffffe32]   ; 005966af
    MOVSD ES:EDI,ESI                    ; 005966b5
    MOVSD ES:EDI,ESI                    ; 005966b6
    MOVSD ES:EDI,ESI                    ; 005966b7
    FLD float ptr [EBP + 0xfffffeba]    ; 005966b8
    FMUL float ptr [0x005ef17a]         ; 005966be | DAT_005ef17a
    FLD float ptr [EBP + 0xfffffebe]    ; 005966c4
    FMUL float ptr [0x005ef17a]         ; 005966ca | DAT_005ef17a
    ADD ESP,0x4                         ; 005966d0
    LEA EAX,[EBP + 0xfffffdfa]          ; 005966d3
    FLD float ptr [EBP + 0xfffffec2]    ; 005966d9
    FMUL float ptr [0x005ef17a]         ; 005966df | DAT_005ef17a
    PUSH EAX                            ; 005966e5
    LEA EDI,[EBP + 0xfffffdfa]          ; 005966e6
    LEA ESI,[EBP + 0xfffffe72]          ; 005966ec
    MOV EAX,dword ptr [EBP + -0x1e]     ; 005966f2
    FXCH ST2                            ; 005966f5
    FSTP float ptr [EBP + 0xfffffe72]   ; 005966f7
    FSTP float ptr [EBP + 0xfffffe76]   ; 005966fd
    FSTP float ptr [EBP + 0xfffffe7a]   ; 00596703
    MOVSD ES:EDI,ESI                    ; 00596709
    MOVSD ES:EDI,ESI                    ; 0059670a
    MOVSD ES:EDI,ESI                    ; 0059670b
    MOV EDI,dword ptr [EAX + 0x2620]    ; 0059670c
    PUSH EDI                            ; 00596712
    LEA ESI,[EBP + 0xfffffc9e]          ; 00596713
    LEA EDI,[EBP + 0xfffffe4e]          ; 00596719
    CALL core_actor.cpp_FUN_00408d70    ; 0059671f
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[EBP + 0xfffffc9e]          ; 00596724
    MOVSD ES:EDI,ESI                    ; 0059672a
    MOVSD ES:EDI,ESI                    ; 0059672b
    MOVSD ES:EDI,ESI                    ; 0059672c
    ADD ESP,0x8                         ; 0059672d
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00596730
    PUSH EAX                            ; 00596736
    MOV EDI,dword ptr [EAX + 0x2b0]     ; 00596737
    LEA ESI,[EBP + 0xfffffafa]          ; 0059673d
    CALL dword ptr [EDI + 0x24]         ; 00596743
    MOV ECX,0x6                         ; 00596746
    LEA EDI,[EBP + 0xfffffb72]          ; 0059674b
    LEA ESI,[EBP + 0xfffffafa]          ; 00596751
    MOVSD.REP ES:EDI,ESI                ; 00596757
    MOV EAX,dword ptr [EBP + 0x26]      ; 00596759
    FLD float ptr [EBP + 0xfffffb76]    ; 0059675c
    FLD float ptr [EBP + 0xfffffb72]    ; 00596762
    FADD float ptr [EAX]                ; 00596768
    FLD float ptr [EBP + 0xfffffb7a]    ; 0059676a
    FXCH                                ; 00596770
    FSTP float ptr [EBP + 0xfffffede]   ; 00596772
    FXCH                                ; 00596778
    FADD float ptr [EAX + 0x4]          ; 0059677a
    LEA EDI,[EBP + 0xffffff62]          ; 0059677d
    FSTP float ptr [EBP + 0xfffffee2]   ; 00596783
    FADD float ptr [EAX + 0x8]          ; 00596789
    LEA ESI,[EBP + 0xfffffede]          ; 0059678c
    FSTP float ptr [EBP + 0xfffffee6]   ; 00596792
    MOVSD ES:EDI,ESI                    ; 00596798
    MOVSD ES:EDI,ESI                    ; 00596799
    MOVSD ES:EDI,ESI                    ; 0059679a
    FLD float ptr [EBP + 0xffffff62]    ; 0059679b
    FMUL float ptr [0x005ef17a]         ; 005967a1 | DAT_005ef17a
    FLD float ptr [EBP + 0xffffff66]    ; 005967a7
    FMUL float ptr [0x005ef17a]         ; 005967ad | DAT_005ef17a
    FLD float ptr [EBP + 0xffffff6a]    ; 005967b3
    FMUL float ptr [0x005ef17a]         ; 005967b9 | DAT_005ef17a
    ADD ESP,0x4                         ; 005967bf
    LEA EAX,[EBP + 0xfffffc7a]          ; 005967c2
    LEA EDI,[EBP + 0xfffffc7a]          ; 005967c8
    LEA ESI,[EBP + 0xffffff26]          ; 005967ce
    FXCH ST2                            ; 005967d4
    FSTP float ptr [EBP + 0xffffff26]   ; 005967d6
    FSTP float ptr [EBP + 0xffffff2a]   ; 005967dc
    FSTP float ptr [EBP + 0xffffff2e]   ; 005967e2
    MOVSD ES:EDI,ESI                    ; 005967e8
    MOVSD ES:EDI,ESI                    ; 005967e9
    MOVSD ES:EDI,ESI                    ; 005967ea
    PUSH EAX                            ; 005967eb
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005967ec
    PUSH EAX                            ; 005967f2
    LEA ESI,[EBP + 0xfffffd52]          ; 005967f3
    LEA EDI,[EBP + 0xfffffcfe]          ; 005967f9
    CALL core_actor.cpp_FUN_00408d70    ; 005967ff
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[EBP + 0xfffffd52]          ; 00596804
    MOVSD ES:EDI,ESI                    ; 0059680a
    MOVSD ES:EDI,ESI                    ; 0059680b
    MOVSD ES:EDI,ESI                    ; 0059680c
    FLD float ptr [EBP + 0xfffffcfe]    ; 0059680d
    FLD float ptr [EBP + 0xfffffd02]    ; 00596813
    FLD float ptr [EBP + 0xfffffd06]    ; 00596819
    LEA EDI,[EBP + 0xfffffd76]          ; 0059681f
    LEA ESI,[EBP + 0xfffffec6]          ; 00596825
    FXCH ST2                            ; 0059682b
    FSUB float ptr [EBP + 0xfffffe4e]   ; 0059682d
    FXCH                                ; 00596833
    FSUB float ptr [EBP + 0xfffffe52]   ; 00596835
    FXCH ST2                            ; 0059683b
    FSUB float ptr [EBP + 0xfffffe56]   ; 0059683d
    FXCH                                ; 00596843
    FSTP float ptr [EBP + 0xfffffec6]   ; 00596845
    FXCH                                ; 0059684b
    FSTP float ptr [EBP + 0xfffffeca]   ; 0059684d
    FSTP float ptr [EBP + 0xfffffece]   ; 00596853
    MOVSD ES:EDI,ESI                    ; 00596859
    MOVSD ES:EDI,ESI                    ; 0059685a
    MOVSD ES:EDI,ESI                    ; 0059685b
    FLD float ptr [EBP + 0xfffffd7a]    ; 0059685c
    FMUL ST0                            ; 00596862
    FLD float ptr [EBP + 0xfffffd76]    ; 00596864
    FMUL ST0                            ; 0059686a
    FADDP                               ; 0059686c
    FLD float ptr [EBP + 0xfffffd7e]    ; 0059686e
    FMUL ST0                            ; 00596874
    FADDP                               ; 00596876
    FSQRT                               ; 00596878
    ADD ESP,0x8                         ; 0059687a
    FST float ptr [EBP + 0x2a]          ; 0059687d
    FLDZ                                ; 00596880
    FCOMPP                              ; 00596882
    FNSTSW AX                           ; 00596884
    SAHF                                ; 00596886
    JNC 0x005965ac                      ; 00596887
        ;   XREF to: 005965ac (CONDITIONAL_JUMP)  ; LAB_005965ac
    LEA EAX,[EBP + 0xfffffd76]          ; 0059688d
    PUSH EAX                            ; 00596893
    PUSH EBX                            ; 00596894
    LEA ESI,[EBP + 0xfffffc1a]          ; 00596895
    LEA EDI,[EBP + 0xfffffbea]          ; 0059689b
    CALL core_actor.cpp_FUN_00408d30    ; 005968a1
        ;   XREF to: 00408d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d30()
    LEA ESI,[EBP + 0xfffffc1a]          ; 005968a6
    MOVSD ES:EDI,ESI                    ; 005968ac
    MOVSD ES:EDI,ESI                    ; 005968ad
    MOVSD ES:EDI,ESI                    ; 005968ae
    FLD1                                ; 005968af
    FLD float ptr [EBP + 0xfffffbea]    ; 005968b1
    FXCH                                ; 005968b7
    FDIV float ptr [EBP + 0x2a]         ; 005968b9
    FXCH                                ; 005968bc
    FMUL ST1                            ; 005968be
    FLD float ptr [EBP + 0xfffffbee]    ; 005968c0
    FMUL ST2                            ; 005968c6
    FLD float ptr [EBP + 0xfffffbf2]    ; 005968c8
    FMULP ST3                           ; 005968ce
    LEA EDI,[EBP + 0xfffffc56]          ; 005968d0
    LEA ESI,[EBP + 0xfffffd2e]          ; 005968d6
    FXCH                                ; 005968dc
    FSTP float ptr [EBP + 0xfffffd2e]   ; 005968de
    FSTP float ptr [EBP + 0xfffffd32]   ; 005968e4
    FSTP float ptr [EBP + 0xfffffd36]   ; 005968ea
    MOVSD ES:EDI,ESI                    ; 005968f0
    MOVSD ES:EDI,ESI                    ; 005968f1
    MOVSD ES:EDI,ESI                    ; 005968f2
    LEA EAX,[EBP + 0xfffffd22]          ; 005968f3
    LEA ESI,[EBP + 0xfffffc56]          ; 005968f9
    ADD ESP,0x8                         ; 005968ff
    CMP EAX,ESI                         ; 00596902
    JZ 0x005965ac                       ; 00596904
        ;   XREF to: 005965ac (CONDITIONAL_JUMP)  ; LAB_005965ac
    MOV EAX,dword ptr [EBP + 0xfffffc56] ; 0059690a
    MOV dword ptr [EBP + 0xfffffd22],EAX ; 00596910
    MOV EAX,dword ptr [EBP + 0xfffffc5a] ; 00596916
    MOV dword ptr [EBP + 0xfffffd26],EAX ; 0059691c
    MOV EAX,dword ptr [EBP + 0xfffffc5e] ; 00596922
    MOV dword ptr [EBP + 0xfffffd2a],EAX ; 00596928
    JMP 0x005965ac                      ; 0059692e
        ;   XREF to: 005965ac (UNCONDITIONAL_JUMP)  ; LAB_005965ac
    MOV EDX,dword ptr [EBX + 0x10b14]   ; 00596933
        ;   Label: LAB_00596933
    TEST EDX,EDX                        ; 00596939
    JZ 0x00595fe0                       ; 0059693b
        ;   XREF to: 00595fe0 (CONDITIONAL_JUMP)  ; LAB_00595fe0
    PUSH 0x3e99999a                     ; 00596941
    PUSH EDX                            ; 00596946
    CALL core_door.cpp_FUN_00460310     ; 00596947
        ;   XREF to: 00460310 (UNCONDITIONAL_CALL)  ; void core_door.cpp_FUN_00460310(CDoor * this_ptr, float swing_range)
    ADD ESP,0x8                         ; 0059694c
    MOV EAX,dword ptr [EBX + 0x10b14]   ; 0059694f
    PUSH 0x5ef007                       ; 00596955 | = "zombie-bang-door?.wav"
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 0059695a
    PUSH EAX                            ; 00596960
    CALL dword ptr [ESI + 0x34]         ; 00596961
    ADD ESP,0x8                         ; 00596964
    MOV dword ptr [EBX + 0x10b14],0x0   ; 00596967
    JMP 0x00595fe0                      ; 00596971
        ;   XREF to: 00595fe0 (UNCONDITIONAL_JUMP)  ; LAB_00595fe0
    MOV ESI,dword ptr [EBX + 0x10b88]   ; 00596976
        ;   Label: LAB_00596976
    PUSH ESI                            ; 0059697c
    MOV EDI,dword ptr [EBP + 0x5a]      ; 0059697d
    PUSH EDI                            ; 00596980
    LEA ESI,[EBP + 0xfffffef6]          ; 00596981
    CALL core_skeleton.cpp_FUN_005469a0 ; 00596987
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    LEA EDI,[EBP + 0xfffffeea]          ; 0059698c
    ADD ESP,0x8                         ; 00596992
    LEA EAX,[EBP + 0xfffffeea]          ; 00596995
    LEA ESI,[EBP + 0xfffffef6]          ; 0059699b
    PUSH EAX                            ; 005969a1
    MOVSD ES:EDI,ESI                    ; 005969a2
    MOVSD ES:EDI,ESI                    ; 005969a3
    MOVSD ES:EDI,ESI                    ; 005969a4
    PUSH EBX                            ; 005969a5
    LEA ESI,[EBP + 0xfffffc6e]          ; 005969a6
    CALL core_actor.cpp_FUN_00408d70    ; 005969ac
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 005969b1
    PUSH 0x0                            ; 005969b4
    PUSH 0x3                            ; 005969b6
    PUSH 0x0                            ; 005969b8
    LEA EAX,[EBP + 0xffffff56]          ; 005969ba
    LEA EDI,[EBP + 0xffffff56]          ; 005969c0
    PUSH EAX                            ; 005969c6
    MOV EAX,[0x006167e0]                ; 005969c7 | g_CGorePtr
    LEA ESI,[EBP + 0xfffffc6e]          ; 005969cc
    PUSH EAX                            ; 005969d2
    MOVSD ES:EDI,ESI                    ; 005969d3
    MOVSD ES:EDI,ESI                    ; 005969d4
    MOVSD ES:EDI,ESI                    ; 005969d5
    CALL core_gore.cpp_FUN_004c9850     ; 005969d6
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004c9850(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 005969db
    PUSH 0x3f000000                     ; 005969de
    CALL core_actor.cpp_FUN_0040d060    ; 005969e3
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 005969e8
    TEST EAX,EAX                        ; 005969eb
    JZ 0x00596a2d                       ; 005969ed
        ;   XREF to: 00596a2d (CONDITIONAL_JUMP)  ; LAB_00596a2d
    MOV ESI,0x5ef01d                    ; 005969ef | = "ghoul-eat-?.wav"
    LEA EDI,[EBP + 0xfffffada]          ; 005969f4
        ;   Label: LAB_005969f4
    PUSH EDI                            ; 005969fa
    MOV AL,byte ptr [ESI]               ; 005969fb | = "ghoul-eat-?.wav" | s_ghoul_eat_wav_005ef01d+2 | s_ghoul_dig_wav_005ef02d
        ;   Label: LAB_005969fb
    MOV byte ptr [EDI],AL               ; 005969fd
    CMP AL,0x0                          ; 005969ff
    JZ 0x00596a13                       ; 00596a01
        ;   XREF to: 00596a13 (CONDITIONAL_JUMP)  ; LAB_00596a13
    MOV AL,byte ptr [ESI + 0x1]         ; 00596a03 | s_ghoul_eat_wav_005ef01d+1 | s_ghoul_eat_wav_005ef01d+3 | s_ghoul_dig_wav_005ef02d+1
    ADD ESI,0x2                         ; 00596a06
    MOV byte ptr [EDI + 0x1],AL         ; 00596a09
    ADD EDI,0x2                         ; 00596a0c
    CMP AL,0x0                          ; 00596a0f
    JNZ 0x005969fb                      ; 00596a11
        ;   XREF to: 005969fb (CONDITIONAL_JUMP)  ; LAB_005969fb
    POP EDI                             ; 00596a13
        ;   Label: LAB_00596a13
    LEA ESI,[EBP + 0xfffffada]          ; 00596a14
    PUSH ESI                            ; 00596a1a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00596a1b
    PUSH EBX                            ; 00596a21
    CALL dword ptr [EAX + 0x34]         ; 00596a22
    ADD ESP,0x8                         ; 00596a25
    JMP 0x00595fe0                      ; 00596a28
        ;   XREF to: 00595fe0 (UNCONDITIONAL_JUMP)  ; LAB_00595fe0
    MOV ESI,0x5ef02d                    ; 00596a2d | = "ghoul-dig-?.wav"
        ;   Label: LAB_00596a2d
    JMP 0x005969f4                      ; 00596a32
        ;   XREF to: 005969f4 (UNCONDITIONAL_JUMP)  ; LAB_005969f4
    PUSH 0x5ef03d                       ; 00596a34 | = "fall-?.wav"
        ;   Label: LAB_00596a34
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00596a39
    PUSH EBX                            ; 00596a3f
    CALL dword ptr [EAX + 0x34]         ; 00596a40
    ADD ESP,0x8                         ; 00596a43
    JMP 0x00595fe0                      ; 00596a46
        ;   XREF to: 00595fe0 (UNCONDITIONAL_JUMP)  ; LAB_00595fe0
    JBE 0x00596492                      ; 00596a4b
        ;   XREF to: 00596492 (CONDITIONAL_JUMP)  ; LAB_00596492
        ;   Label: LAB_00596a4b
    CMP EAX,0xd                         ; 00596a51
    JC 0x00596541                       ; 00596a54
        ;   XREF to: 00596541 (CONDITIONAL_JUMP)  ; LAB_00596541
    JBE 0x00596933                      ; 00596a5a
        ;   XREF to: 00596933 (CONDITIONAL_JUMP)  ; LAB_00596933
    CMP EAX,0x65                        ; 00596a60
    JC 0x0059601d                       ; 00596a63
        ;   XREF to: 0059601d (CONDITIONAL_JUMP)  ; LAB_0059601d
    JBE 0x00596a34                      ; 00596a69
        ;   XREF to: 00596a34 (CONDITIONAL_JUMP)  ; LAB_00596a34
    CMP EAX,0x29a                       ; 00596a6b
    JZ 0x00596976                       ; 00596a70
        ;   XREF to: 00596976 (CONDITIONAL_JUMP)  ; LAB_00596976
    PUSH ESI                            ; 00596a76
    PUSH EBX                            ; 00596a77
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 00596a78
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00596a7d
    JMP 0x00595fe0                      ; 00596a80
        ;   XREF to: 00595fe0 (UNCONDITIONAL_JUMP)  ; LAB_00595fe0
    JBE 0x005960a0                      ; 00596a85
        ;   XREF to: 005960a0 (CONDITIONAL_JUMP)  ; LAB_005960a0
        ;   Label: LAB_00596a85
    CMP EAX,0xa                         ; 00596a8b
    JZ 0x00596270                       ; 00596a8e
        ;   XREF to: 00596270 (CONDITIONAL_JUMP)  ; LAB_00596270
    PUSH ESI                            ; 00596a94
    PUSH EBX                            ; 00596a95
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 00596a96
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00596a9b
    JMP 0x00595fe0                      ; 00596a9e
        ;   XREF to: 00595fe0 (UNCONDITIONAL_JUMP)  ; LAB_00595fe0
    FLD float ptr [EBP + 0x92]          ; 00596aa3
        ;   Label: LAB_00596aa3
    FMUL float ptr [EBX + 0x10a60]      ; 00596aa9
    SUB ESP,0x4                         ; 00596aaf
    MOV EAX,dword ptr [EBX + 0x2510]    ; 00596ab2
    MOV dword ptr [EBX + 0x2594],EAX    ; 00596ab8
    FSTP float ptr [ESP]                ; 00596abe
    PUSH EBX                            ; 00596ac1
    CALL core_charactr.cpp_FUN_0042b2a0 ; 00596ac2
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    MOV EAX,dword ptr [EBX + 0x10bc0]   ; 00596ac7
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 00596acd
    ADD ESP,0x8                         ; 00596ad4
    TEST EDX,EDX                        ; 00596ad7
    JZ 0x00596d21                       ; 00596ad9
        ;   XREF to: 00596d21 (CONDITIONAL_JUMP)  ; LAB_00596d21
    MOV EAX,dword ptr [EBX + 0x10bcc]   ; 00596adf
        ;   Label: LAB_00596adf
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 00596ae5
    JZ 0x00596d35                       ; 00596aed
        ;   XREF to: 00596d35 (CONDITIONAL_JUMP)  ; LAB_00596d35
    LEA EDI,[EBX + 0x2b4]               ; 00596af3
        ;   Label: LAB_00596af3
    PUSH EDI                            ; 00596af9
    CALL core_motion.cpp_FUN_005035c0   ; 00596afa
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 00596aff
    MOV ESI,dword ptr [EAX + 0x24]      ; 00596b02
    PUSH dword ptr [EBP + 0x92]         ; 00596b05
    XOR EAX,EAX                         ; 00596b0b
    PUSH EBX                            ; 00596b0d
    MOV dword ptr [EBP + -0x16],EAX     ; 00596b0e
    CALL core_charactr.cpp_FUN_004287f0 ; 00596b11
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00596b16
    TEST EAX,EAX                        ; 00596b19
    JZ 0x00597c4d                       ; 00596b1b
        ;   XREF to: 00597c4d (CONDITIONAL_JUMP)  ; LAB_00597c4d
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 00596b21
    CMP EAX,0x2                         ; 00596b27
    JNC 0x00596de3                      ; 00596b2a
        ;   XREF to: 00596de3 (CONDITIONAL_JUMP)  ; LAB_00596de3
    CMP EAX,0x1                         ; 00596b30
    JNZ 0x00596dee                      ; 00596b33
        ;   XREF to: 00596dee (CONDITIONAL_JUMP)  ; LAB_00596dee
    CMP ESI,0x1                         ; 00596b39
        ;   Label: LAB_00596b39
    JZ 0x00596b47                       ; 00596b3c
        ;   XREF to: 00596b47 (CONDITIONAL_JUMP)  ; LAB_00596b47
    PUSH EBX                            ; 00596b3e
    CALL core_zombie.cpp_FUN_00599d00   ; 00596b3f
        ;   XREF to: 00599d00 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_00599d00(CZombie * this_ptr)
    ADD ESP,0x4                         ; 00596b44
    LEA EAX,[EBX + 0x2508]              ; 00596b47
        ;   Label: LAB_00596b47
    MOV dword ptr [EAX + 0x8],0x0       ; 00596b4d
    MOV EDX,dword ptr [EAX + 0x8]       ; 00596b54
    MOV dword ptr [EAX + 0x4],EDX       ; 00596b57
    MOV EDX,dword ptr [EAX + 0x4]       ; 00596b5a
    MOV dword ptr [EAX],EDX             ; 00596b5d
    FLD float ptr [EBX + 0x10a74]       ; 00596b5f
        ;   Label: LAB_00596b5f
    FLDZ                                ; 00596b65
    FCOMPP                              ; 00596b67
    FNSTSW AX                           ; 00596b69
    SAHF                                ; 00596b6b
    JNC 0x00596b80                      ; 00596b6c
        ;   XREF to: 00596b80 (CONDITIONAL_JUMP)  ; LAB_00596b80
    FLD float ptr [EBX + 0x10a74]       ; 00596b6e
    FSUB float ptr [EBP + 0x92]         ; 00596b74
    FSTP float ptr [EBX + 0x10a74]      ; 00596b7a
    LEA EAX,[EBX + 0x2b4]               ; 00596b80
        ;   Label: LAB_00596b80
    PUSH EAX                            ; 00596b86
    CALL core_motion.cpp_FUN_005035c0   ; 00596b87
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 00596b8c
    MOV EAX,dword ptr [EAX + 0x24]      ; 00596b8f
    LEA EDX,[EBX + 0x2508]              ; 00596b92
    MOV dword ptr [EBP + 0x62],EAX      ; 00596b98
    MOV dword ptr [EBP + 0x56],EDX      ; 00596b9b
    CMP EAX,0xe                         ; 00596b9e
    JNZ 0x00597ce5                      ; 00596ba1
        ;   XREF to: 00597ce5 (CONDITIONAL_JUMP)  ; LAB_00597ce5
    MOV EAX,EDX                         ; 00596ba7
    MOV dword ptr [EDX + 0x8],0x0       ; 00596ba9
    MOV ECX,dword ptr [EAX + 0x8]       ; 00596bb0
    MOV dword ptr [EDX + 0x4],ECX       ; 00596bb3
    MOV ECX,dword ptr [EAX + 0x4]       ; 00596bb6
    MOV dword ptr [EDX],ECX             ; 00596bb9
    PUSH EBX                            ; 00596bbb
        ;   Label: LAB_00596bbb
    MOV EDI,dword ptr [EBP + 0x62]      ; 00596bbc
    CALL core_charactr.cpp_FUN_00424470 ; 00596bbf
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00596bc4
    CMP EDI,0xe                         ; 00596bc7
    JZ 0x00596bea                       ; 00596bca
        ;   XREF to: 00596bea (CONDITIONAL_JUMP)  ; LAB_00596bea
    LEA EAX,[EBX + 0x2b4]               ; 00596bcc
    PUSH EAX                            ; 00596bd2
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 00596bd3
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00596bd8
    PUSH dword ptr [EBP + 0x92]         ; 00596bdb
    PUSH EBX                            ; 00596be1
    CALL core_charactr.cpp_FUN_00429e90 ; 00596be2
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00596be7
    CMP dword ptr [EBX + 0x10a64],0x0   ; 00596bea
        ;   Label: LAB_00596bea
    JNZ 0x00596ccf                      ; 00596bf1
        ;   XREF to: 00596ccf (CONDITIONAL_JUMP)  ; LAB_00596ccf
    MOV EAX,dword ptr [EBX + 0x10bc8]   ; 00596bf7
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 00596bfd
    JZ 0x00598033                       ; 00596c05
        ;   XREF to: 00598033 (CONDITIONAL_JUMP)  ; LAB_00598033
    MOV EDI,dword ptr [EBX + 0x10b9c]   ; 00596c0b
    PUSH 0x3e4ccccd                     ; 00596c11
    PUSH EDI                            ; 00596c16
    MOV EAX,dword ptr [EBX + 0x10bb4]   ; 00596c17
    PUSH EAX                            ; 00596c1d
    PUSH EBX                            ; 00596c1e
    CALL core_charactr.cpp_FUN_00427060 ; 00596c1f
        ;   XREF to: 00427060 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427060()
    MOV EAX,dword ptr [EBX + 0x10bb4]   ; 00596c24
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 00596c2a
    ADD ESP,0x10                        ; 00596c31
    TEST EDX,EDX                        ; 00596c34
    JZ 0x00596c54                       ; 00596c36
        ;   XREF to: 00596c54 (CONDITIONAL_JUMP)  ; LAB_00596c54
    MOV ECX,dword ptr [EBX + 0x10b94]   ; 00596c38
    PUSH 0x3e4ccccd                     ; 00596c3e
    PUSH ECX                            ; 00596c43
    MOV ESI,dword ptr [EBX + 0x10bb8]   ; 00596c44
    PUSH ESI                            ; 00596c4a
    PUSH EBX                            ; 00596c4b
    CALL core_charactr.cpp_FUN_00427060 ; 00596c4c
        ;   XREF to: 00427060 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427060()
    ADD ESP,0x10                        ; 00596c51
    MOV EDI,dword ptr [EBX + 0x10ba0]   ; 00596c54
        ;   Label: LAB_00596c54
    PUSH 0x3e4ccccd                     ; 00596c5a
    PUSH EDI                            ; 00596c5f
    MOV EAX,dword ptr [EBX + 0x10bbc]   ; 00596c60
    PUSH EAX                            ; 00596c66
    PUSH EBX                            ; 00596c67
    CALL core_charactr.cpp_FUN_00427060 ; 00596c68
        ;   XREF to: 00427060 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427060()
    MOV EAX,dword ptr [EBX + 0x10bbc]   ; 00596c6d
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 00596c73
    ADD ESP,0x10                        ; 00596c7a
    TEST EDX,EDX                        ; 00596c7d
    JZ 0x00596c9d                       ; 00596c7f
        ;   XREF to: 00596c9d (CONDITIONAL_JUMP)  ; LAB_00596c9d
    MOV ECX,dword ptr [EBX + 0x10b98]   ; 00596c81
    PUSH 0x3e4ccccd                     ; 00596c87
    PUSH ECX                            ; 00596c8c
    MOV ESI,dword ptr [EBX + 0x10bc0]   ; 00596c8d
    PUSH ESI                            ; 00596c93
    PUSH EBX                            ; 00596c94
    CALL core_charactr.cpp_FUN_00427060 ; 00596c95
        ;   XREF to: 00427060 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427060()
    ADD ESP,0x10                        ; 00596c9a
    MOV EDI,dword ptr [EBX + 0x10b88]   ; 00596c9d
        ;   Label: LAB_00596c9d
    PUSH 0x3f333333                     ; 00596ca3
    PUSH EDI                            ; 00596ca8
    MOV EAX,dword ptr [EBX + 0x10bcc]   ; 00596ca9
    PUSH EAX                            ; 00596caf
        ;   Label: LAB_00596caf
    PUSH EBX                            ; 00596cb0
    CALL core_charactr.cpp_FUN_00427130 ; 00596cb1
        ;   XREF to: 00427130 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00427130(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 00596cb6
    CMP dword ptr [EBX + 0x10bc4],0x0   ; 00596cb9
    JL 0x00598044                       ; 00596cc0
        ;   XREF to: 00598044 (CONDITIONAL_JUMP)  ; LAB_00598044
    PUSH EBX                            ; 00596cc6
        ;   Label: LAB_00596cc6
    CALL core_charactr.cpp_FUN_00426f30 ; 00596cc7
        ;   XREF to: 00426f30 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00426f30()
    ADD ESP,0x4                         ; 00596ccc
    PUSH 0x1                            ; 00596ccf
        ;   Label: LAB_00596ccf
    PUSH EBX                            ; 00596cd1
    CALL core_zombie.cpp_FUN_00598e40   ; 00596cd2
        ;   XREF to: 00598e40 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_FUN_00598e40(CZombie * this_ptr, int object_shape_type)
    MOV EDX,dword ptr [EBP + -0x16]     ; 00596cd7
    ADD ESP,0x8                         ; 00596cda
    TEST EDX,EDX                        ; 00596cdd
    JZ 0x00595f58                       ; 00596cdf
        ;   XREF to: 00595f58 (CONDITIONAL_JUMP)  ; LAB_00595f58
    TEST EAX,EAX                        ; 00596ce5
    JL 0x00595f58                       ; 00596ce7
        ;   XREF to: 00595f58 (CONDITIONAL_JUMP)  ; LAB_00595f58
    SHL EAX,0x3                         ; 00596ced
    MOV EDX,EAX                         ; 00596cf0
    SHL EAX,0x4                         ; 00596cf2
    SUB EAX,EDX                         ; 00596cf5
    ADD EAX,EBX                         ; 00596cf7
    MOV ECX,dword ptr [EAX + 0x2620]    ; 00596cf9
    TEST ECX,ECX                        ; 00596cff
    JZ 0x00595f58                       ; 00596d01
        ;   XREF to: 00595f58 (CONDITIONAL_JUMP)  ; LAB_00595f58
    PUSH 0x2                            ; 00596d07
    MOV EDX,dword ptr [ECX + 0x2b0]     ; 00596d09
    PUSH ECX                            ; 00596d0f
    CALL dword ptr [EDX + 0x80]         ; 00596d10
    ADD ESP,0x8                         ; 00596d16
    LEA ESP,[EBP + 0x7a]                ; 00596d19
    POP EBP                             ; 00596d1c
    POP EDI                             ; 00596d1d
    POP ESI                             ; 00596d1e
    POP EBX                             ; 00596d1f
    RET                                 ; 00596d20
    MOV EAX,dword ptr [EBX + 0x10bb8]   ; 00596d21
        ;   Label: LAB_00596d21
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 00596d27
    JNZ 0x00596adf                      ; 00596d2f
        ;   XREF to: 00596adf (CONDITIONAL_JUMP)  ; LAB_00596adf
    FLD float ptr [EBX + 0x10bd4]       ; 00596d35
        ;   Label: LAB_00596d35
    FLDZ                                ; 00596d3b
    FCOMPP                              ; 00596d3d
    FNSTSW AX                           ; 00596d3f
    SAHF                                ; 00596d41
    JA 0x00596af3                       ; 00596d42
        ;   XREF to: 00596af3 (CONDITIONAL_JUMP)  ; LAB_00596af3
    FLD float ptr [EBX + 0x10bd4]       ; 00596d48
    FADD float ptr [EBP + 0x92]         ; 00596d4e
    FST float ptr [EBX + 0x10bd4]       ; 00596d54
    FCOMP double ptr [0x005ef13a]       ; 00596d5a | DAT_005ef13a
    FNSTSW AX                           ; 00596d60
    SAHF                                ; 00596d62
    JC 0x00596af3                       ; 00596d63
        ;   XREF to: 00596af3 (CONDITIONAL_JUMP)  ; LAB_00596af3
    LEA EAX,[EBP + 0xfffffa9e]          ; 00596d69
    PUSH EAX                            ; 00596d6f
    MOV EDI,0x461c3f9a                  ; 00596d70
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 00596d75
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    LEA EAX,[EBP + 0xfffffa9e]          ; 00596d7a
    ADD ESP,0x4                         ; 00596d80
    MOV dword ptr [EBP + 0xfffffaa2],EDI ; 00596d83
    MOV dword ptr [EBP + 0xfffffad2],EBX ; 00596d89
    MOV dword ptr [EBP + 0xfffffad6],EBX ; 00596d8f
    PUSH EAX                            ; 00596d95
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 00596d96
    PUSH EBX                            ; 00596d9c
    CALL dword ptr [EDX + 0x110]        ; 00596d9d
    ADD ESP,0x8                         ; 00596da3
    MOV dword ptr [EBX + 0x10bd4],0xbf800000 ; 00596da6
    JMP 0x00596af3                      ; 00596db0
        ;   XREF to: 00596af3 (UNCONDITIONAL_JUMP)  ; LAB_00596af3
    PUSH 0x1                            ; 00596db5
        ;   Label: LAB_00596db5
    PUSH 0x0                            ; 00596db7
    LEA EAX,[EBX + 0x2b4]               ; 00596db9
    PUSH EAX                            ; 00596dbf
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00596dc0
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00596dc5
    PUSH EBX                            ; 00596dc8
    MOV EAX,0x5ef048                    ; 00596dc9 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 00596dce | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x00609ed0]      ; 00596dcf | g_CConsolePtr
    PUSH EDX                            ; 00596dd5 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 00596dd6
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 00596ddb
    JMP 0x00596b47                      ; 00596dde
        ;   XREF to: 00596b47 (UNCONDITIONAL_JUMP)  ; LAB_00596b47
    JBE 0x00596b39                      ; 00596de3
        ;   XREF to: 00596b39 (CONDITIONAL_JUMP)  ; LAB_00596b39
        ;   Label: LAB_00596de3
    CMP EAX,0x3                         ; 00596de9
    JZ 0x00596db5                       ; 00596dec
        ;   XREF to: 00596db5 (CONDITIONAL_JUMP)  ; LAB_00596db5
    PUSH 0x1                            ; 00596dee
        ;   Label: LAB_00596dee
    PUSH 0x0                            ; 00596df0
    LEA EAX,[EBX + 0x2b4]               ; 00596df2
    PUSH EAX                            ; 00596df8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00596df9
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00596dfe
    JMP 0x00596b47                      ; 00596e01
        ;   XREF to: 00596b47 (UNCONDITIONAL_JUMP)  ; LAB_00596b47
    MOV EAX,[0x01cedef4]                ; 00596e06 | DAT_01cedef4
        ;   Label: LAB_00596e06
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 00596e0b
    PUSH EAX                            ; 00596e12
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00596e13
    CALL dword ptr [EDX + 0x114]        ; 00596e19
    ADD ESP,0x4                         ; 00596e1f
    TEST EAX,EAX                        ; 00596e22
    JZ 0x00596ef3                       ; 00596e24
        ;   XREF to: 00596ef3 (CONDITIONAL_JUMP)  ; LAB_00596ef3
    FLD float ptr [EBP + -0xe]          ; 00596e2a
        ;   Label: LAB_00596e2a
    FLDZ                                ; 00596e2d
    FCOMPP                              ; 00596e2f
    FNSTSW AX                           ; 00596e31
    SAHF                                ; 00596e33
    JA 0x00596b5f                       ; 00596e34
        ;   XREF to: 00596b5f (CONDITIONAL_JUMP)  ; LAB_00596b5f
    CMP dword ptr [EBX + 0x10a78],0x0   ; 00596e3a
    JZ 0x00596b5f                       ; 00596e41
        ;   XREF to: 00596b5f (CONDITIONAL_JUMP)  ; LAB_00596b5f
    FLD float ptr [EBP + 0x6a]          ; 00596e47
    FMUL float ptr [EBX + 0x10a60]      ; 00596e4a
    FLD float ptr [EBP + 0x92]          ; 00596e50
    FLD ST0                             ; 00596e56
    FMUL float ptr [EBX + 0x10a60]      ; 00596e58
    FXCH ST2                            ; 00596e5e
    FMULP                               ; 00596e60
    SUB ESP,0x4                         ; 00596e62
    FSTP float ptr [EBX + 0x2594]       ; 00596e65
    FSTP float ptr [ESP]                ; 00596e6b
    PUSH EBX                            ; 00596e6e
    CALL core_charactr.cpp_FUN_0042b2a0 ; 00596e6f
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 00596e74
    MOV EAX,dword ptr [EBP + -0xe]      ; 00596e77
    PUSH 0x3f490fdb                     ; 00596e7a
    XOR EDX,EDX                         ; 00596e7f
    PUSH 0x40400000                     ; 00596e81
    MOV dword ptr [EBP + -0x56],EDX     ; 00596e86
    MOV dword ptr [EBP + -0x4e],EAX     ; 00596e89
    LEA EAX,[EBP + -0x56]               ; 00596e8c
    MOV dword ptr [EBP + -0x52],EDX     ; 00596e8f
    PUSH EAX                            ; 00596e92
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00596e93
    PUSH EAX                            ; 00596e99
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00596e9a
    CALL dword ptr [EDX + 0xcc]         ; 00596ea0
    ADD ESP,0x4                         ; 00596ea6
    PUSH EAX                            ; 00596ea9
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00596eaa
    ADD EAX,0x20                        ; 00596eb0
    PUSH EAX                            ; 00596eb3
    PUSH EBX                            ; 00596eb4
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 00596eb5
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00596eba
    CMP EAX,0x1                         ; 00596ebd
    JZ 0x00596b5f                       ; 00596ec0
        ;   XREF to: 00596b5f (CONDITIONAL_JUMP)  ; LAB_00596b5f
    PUSH EBX                            ; 00596ec6
    PUSH 0x5ef11f                       ; 00596ec7 | = "%s giving up attack\n"
    MOV ESI,dword ptr [0x00609ed0]      ; 00596ecc | g_CConsolePtr
    PUSH ESI                            ; 00596ed2 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 00596ed3
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 00596ed8
    PUSH EBX                            ; 00596edb
    CALL core_zombie.cpp_FUN_00599d00   ; 00596edc
        ;   XREF to: 00599d00 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_00599d00(CZombie * this_ptr)
    ADD ESP,0x4                         ; 00596ee1
    MOV dword ptr [EBX + 0x2578],0x0    ; 00596ee4
    JMP 0x00596b5f                      ; 00596eee
        ;   XREF to: 00596b5f (UNCONDITIONAL_JUMP)  ; LAB_00596b5f
    PUSH dword ptr [EBP + 0x92]         ; 00596ef3
        ;   Label: LAB_00596ef3
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00596ef9
    PUSH EBX                            ; 00596eff
    CALL dword ptr [EAX + 0x150]        ; 00596f00
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 00596f06
    ADD ESP,0x8                         ; 00596f0c
    TEST ECX,ECX                        ; 00596f0f
    JZ 0x00596e2a                       ; 00596f11
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    PUSH 0x1                            ; 00596f17
        ;   Label: LAB_00596f17
    PUSH 0x0                            ; 00596f19
    LEA EAX,[EBX + 0x2b4]               ; 00596f1b
    PUSH EAX                            ; 00596f21
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00596f22
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00596f27
    JMP 0x00596e2a                      ; 00596f2a
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    FLD float ptr [EBX + 0x10be4]       ; 00596f2f
        ;   Label: LAB_00596f2f
    FSUB float ptr [EBP + 0x92]         ; 00596f35
    FST float ptr [EBX + 0x10be4]       ; 00596f3b
    FLDZ                                ; 00596f41
    FCOMPP                              ; 00596f43
    FNSTSW AX                           ; 00596f45
    SAHF                                ; 00596f47
    JC 0x00596e2a                       ; 00596f48
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    PUSH dword ptr [EBP + 0x92]         ; 00596f4e
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00596f54
    PUSH EBX                            ; 00596f5a
    MOV dword ptr [EBX + 0x10be4],0x0   ; 00596f5b
    CALL dword ptr [EAX + 0x150]        ; 00596f65
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 00596f6b
    ADD ESP,0x8                         ; 00596f71
    TEST EDI,EDI                        ; 00596f74
    JZ 0x00596e2a                       ; 00596f76
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    FLD float ptr [ESI]                 ; 00596f7c
    FSUB float ptr [EDI + 0x20]         ; 00596f7e
    LEA EDX,[EBP + 0xfffffd16]          ; 00596f81
    FSTP float ptr [EBP + 0xfffffe1e]   ; 00596f87
    FLD float ptr [ESI + 0x4]           ; 00596f8d
    FSUB float ptr [EDI + 0x24]         ; 00596f90
    LEA EAX,[EBP + 0xfffffe42]          ; 00596f93
    FSTP float ptr [EBP + 0xfffffe22]   ; 00596f99
    FLD float ptr [ESI + 0x8]           ; 00596f9f
    LEA ESI,[EBP + 0xfffffe1e]          ; 00596fa2
    FSUB float ptr [EDI + 0x28]         ; 00596fa8
    LEA EDI,[EBP + 0xfffffd16]          ; 00596fab
    FSTP float ptr [EBP + 0xfffffe26]   ; 00596fb1
    MOVSD ES:EDI,ESI                    ; 00596fb7
    MOVSD ES:EDI,ESI                    ; 00596fb8
    MOVSD ES:EDI,ESI                    ; 00596fb9
    CMP EAX,EDX                         ; 00596fba
    JNZ 0x0059710f                      ; 00596fbc
        ;   XREF to: 0059710f (CONDITIONAL_JUMP)  ; LAB_0059710f
    FLD float ptr [EBP + 0xfffffe46]    ; 00596fc2
        ;   Label: LAB_00596fc2
    FMUL ST0                            ; 00596fc8
    FLD float ptr [EBP + 0xfffffe42]    ; 00596fca
    FMUL ST0                            ; 00596fd0
    FADDP                               ; 00596fd2
    FLD float ptr [EBP + 0xfffffe4a]    ; 00596fd4
    FMUL ST0                            ; 00596fda
    FADDP                               ; 00596fdc
    FSTP float ptr [EBP + 0x72]         ; 00596fde
    MOV EAX,dword ptr [EBP + 0x72]      ; 00596fe1
    MOV EDX,dword ptr [0x01caf5b4]      ; 00596fe4 | DAT_01caf5b4
    SAR EAX,0x1                         ; 00596fea
    ADD EAX,EDX                         ; 00596fec
    MOV dword ptr [EBP + -0xa],EAX      ; 00596fee
    FLD float ptr [EBP + -0xa]          ; 00596ff1
    FCOMP double ptr [0x005ef142]       ; 00596ff4 | DAT_005ef142
    FNSTSW AX                           ; 00596ffa
    SAHF                                ; 00596ffc
    JA 0x00596e2a                       ; 00596ffd
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    MOV EAX,dword ptr [EBX + 0x3444]    ; 00597003
    MOV dword ptr [EBP + 0x6e],EAX      ; 00597009
    FLD float ptr [EBP + 0x6e]          ; 0059700c
    FCOMP float ptr [EBX + 0x3440]      ; 0059700f
    FNSTSW AX                           ; 00597015
    SAHF                                ; 00597017
    JNC 0x00597023                      ; 00597018
        ;   XREF to: 00597023 (CONDITIONAL_JUMP)  ; LAB_00597023
    MOV EAX,dword ptr [EBX + 0x24fc]    ; 0059701a
    MOV dword ptr [EBP + 0x6e],EAX      ; 00597020
    FLD float ptr [EBP + 0x6e]          ; 00597023
        ;   Label: LAB_00597023
    FCOMP float ptr [EBX + 0x3440]      ; 00597026
    FNSTSW AX                           ; 0059702c
    SAHF                                ; 0059702e
    JC 0x00597138                       ; 0059702f
        ;   XREF to: 00597138 (CONDITIONAL_JUMP)  ; LAB_00597138
    XOR ESI,ESI                         ; 00597035
        ;   Label: LAB_00597035
    MOV dword ptr [EBP + 0x76],ESI      ; 00597037
        ;   Label: LAB_00597037
    FILD dword ptr [EBP + 0x76]         ; 0059703a
    FMUL float ptr [0x005ef192]         ; 0059703d | DAT_005ef192
    MOV EAX,[0x0061b5a8]                ; 00597043 | g_CDemonSetPtr
    FMUL float ptr [0x005ef196]         ; 00597048 | DAT_005ef196
    PUSH EAX                            ; 0059704e | g_CDemonSetInstance
    FSTP float ptr [EBP + -0x6]         ; 0059704f
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 00597052
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00597057
    PUSH EBX                            ; 0059705a
    MOV EDX,dword ptr [0x0061b5a8]      ; 0059705b | g_CDemonSetPtr
    PUSH EDX                            ; 00597061 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 00597062
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    FLD float ptr [EBP + -0x6]          ; 00597067
    FLD ST0                             ; 0059706a
    FCOS                                ; 0059706c
    FXCH                                ; 0059706e
    FSIN                                ; 00597070
    FXCH                                ; 00597072
    FLD double ptr [0x005ef19a]         ; 00597074 | DAT_005ef19a
    FXCH                                ; 0059707a
    FMUL ST1                            ; 0059707c
    FXCH ST2                            ; 0059707e
    FMULP                               ; 00597080
    FLD float ptr [EBX + 0x24]          ; 00597082
    ADD ESP,0x8                         ; 00597085
    FADD float ptr [EBP + 0x6e]         ; 00597088
    SUB ESP,0x4                         ; 0059708b
    FSTP float ptr [ESP]                ; 0059708e
    FLD float ptr [EBX + 0x24]          ; 00597091
    FADD float ptr [EBX + 0x3440]       ; 00597094
    SUB ESP,0x4                         ; 0059709a
    FSTP float ptr [ESP]                ; 0059709d
    PUSH dword ptr [EBX + 0x3434]       ; 005970a0
    SUB ESP,0x4                         ; 005970a6
    FXCH                                ; 005970a9
    FSTP float ptr [ESP]                ; 005970ab
    SUB ESP,0x4                         ; 005970ae
    FSTP float ptr [ESP]                ; 005970b1
    PUSH dword ptr [EBX + 0x28]         ; 005970b4
    MOV ECX,dword ptr [0x0061b5a8]      ; 005970b7 | g_CDemonSetPtr
    PUSH dword ptr [EBX + 0x20]         ; 005970bd
    PUSH ECX                            ; 005970c0 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00537030 ; 005970c1
        ;   XREF to: 00537030 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00537030()
    MOV EDI,dword ptr [0x0061b5a8]      ; 005970c6 | g_CDemonSetPtr
    MOV dword ptr [EBP + 0x76],EAX      ; 005970cc
    ADD ESP,0x20                        ; 005970cf
    FLD float ptr [EBP + 0x76]          ; 005970d2
    PUSH EDI                            ; 005970d5 | g_CDemonSetInstance
    FSTP float ptr [EBP + -0x2]         ; 005970d6
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 005970d9
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    FLD float ptr [EBP + -0x2]          ; 005970de
    FLD1                                ; 005970e1
    ADD ESP,0x4                         ; 005970e3
    FCOMPP                              ; 005970e6
    FNSTSW AX                           ; 005970e8
    SAHF                                ; 005970ea
    JBE 0x0059714c                      ; 005970eb
        ;   XREF to: 0059714c (CONDITIONAL_JUMP)  ; LAB_0059714c
    CMP ESI,0x4                         ; 005970ed
        ;   Label: LAB_005970ed
    JGE 0x00596f17                      ; 005970f0
        ;   XREF to: 00596f17 (CONDITIONAL_JUMP)  ; LAB_00596f17
    MOV dword ptr [EBX + 0x10be4],0x40400000 ; 005970f6
    MOV dword ptr [EBX + 0x10a78],0x0   ; 00597100
    JMP 0x00596e2a                      ; 0059710a
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    MOV EAX,dword ptr [EBP + 0xfffffd16] ; 0059710f
        ;   Label: LAB_0059710f
    MOV dword ptr [EBP + 0xfffffe42],EAX ; 00597115
    MOV EAX,dword ptr [EBP + 0xfffffd1a] ; 0059711b
    MOV dword ptr [EBP + 0xfffffe46],EAX ; 00597121
    MOV EAX,dword ptr [EBP + 0xfffffd1e] ; 00597127
    MOV dword ptr [EBP + 0xfffffe4a],EAX ; 0059712d
    JMP 0x00596fc2                      ; 00597133
        ;   XREF to: 00596fc2 (UNCONDITIONAL_JUMP)  ; LAB_00596fc2
    FLD float ptr [EBX + 0x3440]        ; 00597138
        ;   Label: LAB_00597138
    FADD double ptr [0x005ef14a]        ; 0059713e | DAT_005ef14a
    FSTP float ptr [EBP + 0x6e]         ; 00597144
    JMP 0x00597035                      ; 00597147
        ;   XREF to: 00597035 (UNCONDITIONAL_JUMP)  ; LAB_00597035
    INC ESI                             ; 0059714c
        ;   Label: LAB_0059714c
    CMP ESI,0x4                         ; 0059714d
    JL 0x00597037                       ; 00597150
        ;   XREF to: 00597037 (CONDITIONAL_JUMP)  ; LAB_00597037
    JMP 0x005970ed                      ; 00597156
        ;   XREF to: 005970ed (UNCONDITIONAL_JUMP)  ; LAB_005970ed
    LEA EAX,[EBX + 0x10b18]             ; 00597158
        ;   Label: LAB_00597158
    PUSH EAX                            ; 0059715e
    MOV EDX,dword ptr [0x006141f0]      ; 0059715f | DAT_006141f0
    PUSH EDX                            ; 00597165
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 00597166
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0059716b
    TEST EAX,EAX                        ; 0059716e
    JZ 0x00596e2a                       ; 00597170
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    FLD float ptr [EBX + 0x10be0]       ; 00597176
    FSUB float ptr [EBP + 0x92]         ; 0059717c
    FST float ptr [EBX + 0x10be0]       ; 00597182
    FLDZ                                ; 00597188
    FCOMPP                              ; 0059718a
    FNSTSW AX                           ; 0059718c
    SAHF                                ; 0059718e
    JBE 0x00596e2a                      ; 0059718f
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    FLD1                                ; 00597195
    XOR ECX,ECX                         ; 00597197
    MOV dword ptr [EBP + 0x6],ESI       ; 00597199
    MOV dword ptr [EBP + 0x2],ECX       ; 0059719c
    FADD float ptr [EBX + 0x10be0]      ; 0059719f
    MOV dword ptr [EBP + 0x5e],ECX      ; 005971a5
    FSTP float ptr [EBX + 0x10be0]      ; 005971a8
    MOV EAX,[0x0061b5a8]                ; 005971ae | g_CDemonSetPtr
        ;   Label: LAB_005971ae
    MOV EDX,dword ptr [EBP + 0x2]       ; 005971b3
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 005971b6 | g_CDemonSetInstance.field1372328_0x14f0a8
    JGE 0x00596e2a                      ; 005971bc
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    ADD EAX,dword ptr [EBP + 0x5e]      ; 005971c2
    PUSH EBX                            ; 005971c5
    MOV ESI,dword ptr [EAX + 0x14f0ac]  ; 005971c6 | g_CDemonSetInstance.field1372332_0x14f0ac
    PUSH ESI                            ; 005971cc
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005971cd
    CALL dword ptr [EAX + 0xec]         ; 005971d3
    ADD ESP,0x8                         ; 005971d9
    TEST EAX,EAX                        ; 005971dc
    JNZ 0x005971f2                      ; 005971de
        ;   XREF to: 005971f2 (CONDITIONAL_JUMP)  ; LAB_005971f2
    MOV EDI,dword ptr [EBP + 0x2]       ; 005971e0
        ;   Label: LAB_005971e0
    MOV ESI,dword ptr [EBP + 0x5e]      ; 005971e3
    INC EDI                             ; 005971e6
    ADD ESI,0x4                         ; 005971e7
    MOV dword ptr [EBP + 0x2],EDI       ; 005971ea
    MOV dword ptr [EBP + 0x5e],ESI      ; 005971ed
    JMP 0x005971ae                      ; 005971f0
        ;   XREF to: 005971ae (UNCONDITIONAL_JUMP)  ; LAB_005971ae
    MOV EAX,dword ptr [EBP + 0x6]       ; 005971f2
        ;   Label: LAB_005971f2
    FLD float ptr [ESI + 0x20]          ; 005971f5
    FSUB float ptr [EAX]                ; 005971f8
    FSTP float ptr [EBP + 0xfffffc62]   ; 005971fa
    FLD float ptr [ESI + 0x24]          ; 00597200
    FSUB float ptr [EAX + 0x4]          ; 00597203
    LEA EDI,[EBP + 0xffffff1a]          ; 00597206
    FSTP float ptr [EBP + 0xfffffc66]   ; 0059720c
    FLD float ptr [ESI + 0x28]          ; 00597212
    FSUB float ptr [EAX + 0x8]          ; 00597215
    LEA ESI,[EBP + 0xfffffc62]          ; 00597218
    FSTP float ptr [EBP + 0xfffffc6a]   ; 0059721e
    MOVSD ES:EDI,ESI                    ; 00597224
    MOVSD ES:EDI,ESI                    ; 00597225
    MOVSD ES:EDI,ESI                    ; 00597226
    FLD float ptr [EBP + 0xffffff1e]    ; 00597227
    FABS                                ; 0059722d
    FCOMP double ptr [0x005ef1aa]       ; 0059722f | DAT_005ef1aa
    FNSTSW AX                           ; 00597235
    SAHF                                ; 00597237
    JA 0x005971e0                       ; 00597238
        ;   XREF to: 005971e0 (CONDITIONAL_JUMP)  ; LAB_005971e0
    FLD float ptr [EBP + 0xffffff1a]    ; 0059723a
    FMUL ST0                            ; 00597240
    FLD float ptr [EBP + 0xffffff22]    ; 00597242
    FMUL ST0                            ; 00597248
    FADDP                               ; 0059724a
    FSQRT                               ; 0059724c
    XOR EDI,EDI                         ; 0059724e
    MOV dword ptr [EBP + 0xffffff1e],EDI ; 00597250
    FCOMP float ptr [EBX + 0x10a70]     ; 00597256
    FNSTSW AX                           ; 0059725c
    SAHF                                ; 0059725e
    JA 0x005971e0                       ; 0059725f
        ;   XREF to: 005971e0 (CONDITIONAL_JUMP)  ; LAB_005971e0
    PUSH EBX                            ; 00597265
    PUSH 0x5ef072                       ; 00597266 | = "%s rising from the grave\n"
    MOV EAX,[0x00609ed0]                ; 0059726b | g_CConsolePtr
    PUSH EAX                            ; 00597270 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 00597271
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 00597276
    PUSH 0x1                            ; 00597279
    PUSH 0xf                            ; 0059727b
    LEA EAX,[EBX + 0x2b4]               ; 0059727d
    PUSH EAX                            ; 00597283
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00597284
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EDX,dword ptr [EBX + 0x10b10]   ; 00597289
    ADD ESP,0xc                         ; 0059728f
    TEST EDX,EDX                        ; 00597292
    JZ 0x005972a5                       ; 00597294
        ;   XREF to: 005972a5 (CONDITIONAL_JUMP)  ; LAB_005972a5
    PUSH EDX                            ; 00597296
    CALL core_grave.cpp_FUN_004ca3e0    ; 00597297
        ;   XREF to: 004ca3e0 (UNCONDITIONAL_CALL)  ; void core_grave.cpp_FUN_004ca3e0(CGrave * this_ptr)
    ADD ESP,0x4                         ; 0059729c
    MOV dword ptr [EBX + 0x10b10],EDI   ; 0059729f
    MOV dword ptr [EBX + 0x10a70],0x42c80000 ; 005972a5
        ;   Label: LAB_005972a5
    JMP 0x00596e2a                      ; 005972af
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    MOV EAX,dword ptr [EBX + 0x10a64]   ; 005972b4
        ;   Label: LAB_005972b4
    TEST EAX,EAX                        ; 005972ba
    JNZ 0x00596e2a                      ; 005972bc
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    CMP dword ptr [EBX + 0xdc],0x0      ; 005972c2
    JNZ 0x00596e2a                      ; 005972c9
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    PUSH EAX                            ; 005972cf
    PUSH EDI                            ; 005972d0
    LEA ESI,[EBP + -0x7a]               ; 005972d1
    CALL core_skeleton.cpp_FUN_005469a0 ; 005972d4
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    LEA EDI,[EBP + -0x62]               ; 005972d9
    ADD ESP,0x8                         ; 005972dc
    LEA EAX,[EBP + -0x62]               ; 005972df
    LEA ESI,[EBP + -0x7a]               ; 005972e2
    PUSH EAX                            ; 005972e5
    MOVSD ES:EDI,ESI                    ; 005972e6
    MOVSD ES:EDI,ESI                    ; 005972e7
    MOVSD ES:EDI,ESI                    ; 005972e8
    PUSH EBX                            ; 005972e9
    LEA ESI,[EBP + 0xffffff02]          ; 005972ea
    CALL core_actor.cpp_FUN_00408d70    ; 005972f0
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 005972f5
    PUSH 0x0                            ; 005972f8
    LEA EAX,[EBP + 0xffffff4a]          ; 005972fa
    LEA EDI,[EBP + 0xffffff4a]          ; 00597300
    PUSH EAX                            ; 00597306
    MOV ECX,dword ptr [0x006167e0]      ; 00597307 | g_CGorePtr
    LEA ESI,[EBP + 0xffffff02]          ; 0059730d
    PUSH ECX                            ; 00597313
    MOVSD ES:EDI,ESI                    ; 00597314
    MOVSD ES:EDI,ESI                    ; 00597315
    MOVSD ES:EDI,ESI                    ; 00597316
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0 ; 00597317
        ;   XREF to: 004c9ad0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 0059731c
    MOV dword ptr [EBX + 0x10a64],0x1   ; 0059731f
    JMP 0x00596e2a                      ; 00597329
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    FLD float ptr [EBP + 0x92]          ; 0059732e
        ;   Label: LAB_0059732e
    FMUL double ptr [0x005ef172]        ; 00597334 | DAT_005ef172
    SUB ESP,0x4                         ; 0059733a
    FSTP float ptr [ESP]                ; 0059733d
    CALL core_actor.cpp_FUN_0040d060    ; 00597340
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 00597345
    TEST EAX,EAX                        ; 00597348
    JZ 0x00597374                       ; 0059734a
        ;   XREF to: 00597374 (CONDITIONAL_JUMP)  ; LAB_00597374
    PUSH 0x0                            ; 0059734c
    MOV EAX,0x5ef08c                    ; 0059734e | = "pickass"
    PUSH EAX                            ; 00597353 | = "pickass"
    LEA EAX,[EBX + 0x2b4]               ; 00597354
    PUSH EAX                            ; 0059735a
    CALL core_motion.cpp_FUN_00503860   ; 0059735b
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00597360
    PUSH EAX                            ; 00597363
    CALL core_motion.cpp_FUN_00502f10   ; 00597364
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00597369
    TEST EAX,EAX                        ; 0059736c
    JGE 0x0059740d                      ; 0059736e
        ;   XREF to: 0059740d (CONDITIONAL_JUMP)  ; LAB_0059740d
    PUSH dword ptr [EBP + 0x92]         ; 00597374
        ;   Label: LAB_00597374
    PUSH EBX                            ; 0059737a
    CALL core_enemy.cpp_FUN_00488970    ; 0059737b
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00597380
    TEST EAX,EAX                        ; 00597383
    JZ 0x00597390                       ; 00597385
        ;   XREF to: 00597390 (CONDITIONAL_JUMP)  ; LAB_00597390
    PUSH EBX                            ; 00597387
    CALL core_zombie.cpp_FUN_00599d00   ; 00597388
        ;   XREF to: 00599d00 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_00599d00(CZombie * this_ptr)
    ADD ESP,0x4                         ; 0059738d
    PUSH dword ptr [EBP + 0x92]         ; 00597390
        ;   Label: LAB_00597390
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00597396
    PUSH EBX                            ; 0059739c
    CALL dword ptr [EAX + 0x150]        ; 0059739d
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 005973a3
    ADD ESP,0x8                         ; 005973a9
    TEST EDX,EDX                        ; 005973ac
    JNZ 0x005973b6                      ; 005973ae
        ;   XREF to: 005973b6 (CONDITIONAL_JUMP)  ; LAB_005973b6
    CMP dword ptr [EBP + 0x36],0x0      ; 005973b0
    JNZ 0x00597425                      ; 005973b4
        ;   XREF to: 00597425 (CONDITIONAL_JUMP)  ; LAB_00597425
    CMP dword ptr [EBX + 0x10a78],0x0   ; 005973b6
        ;   Label: LAB_005973b6
    JZ 0x00596e2a                       ; 005973bd
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    PUSH EBX                            ; 005973c3
    CALL core_zombie.cpp_FUN_00599d00   ; 005973c4
        ;   XREF to: 00599d00 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_00599d00(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005973c9
    MOV EDI,dword ptr [EBX + 0x10bdc]   ; 005973cc
    PUSH EDI                            ; 005973d2
    CALL sound_sndmain.cpp_FUN_00550b70 ; 005973d3
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 005973d8
    TEST EAX,EAX                        ; 005973db
    JNZ 0x00596e2a                      ; 005973dd
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    CMP dword ptr [EBX + 0x10b84],0x0   ; 005973e3
    JZ 0x0059746f                       ; 005973ea
        ;   XREF to: 0059746f (CONDITIONAL_JUMP)  ; LAB_0059746f
    PUSH 0x5ef094                       ; 005973f0 | = "f-zombie-alert?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005973f5
    PUSH EBX                            ; 005973fb
    CALL dword ptr [EAX + 0x34]         ; 005973fc
    ADD ESP,0x8                         ; 005973ff
    MOV dword ptr [EBX + 0x10bdc],EAX   ; 00597402
    JMP 0x00596e2a                      ; 00597408
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    PUSH 0x1                            ; 0059740d
        ;   Label: LAB_0059740d
    PUSH 0x10                           ; 0059740f
    LEA EAX,[EBX + 0x2b4]               ; 00597411
    PUSH EAX                            ; 00597417
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00597418
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059741d
    JMP 0x00596e2a                      ; 00597420
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    MOV EAX,[0x01cedef4]                ; 00597425 | DAT_01cedef4
        ;   Label: LAB_00597425
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 0059742a
    PUSH EAX                            ; 00597431
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00597432
    CALL dword ptr [EDX + 0x114]        ; 00597438
    ADD ESP,0x4                         ; 0059743e
    TEST EAX,EAX                        ; 00597441
    JZ 0x00596e2a                       ; 00597443
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    MOV EAX,[0x00616494]                ; 00597449 | g_CGamePtr
    MOV dword ptr [EAX + 0x23c],0x1     ; 0059744e | g_CGameInstance.field572_0x23c
    MOV EAX,[0x01cedef4]                ; 00597458 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 0059745d
    MOV dword ptr [EBX + 0x10a78],EAX   ; 00597464
    JMP 0x005973b6                      ; 0059746a
        ;   XREF to: 005973b6 (UNCONDITIONAL_JUMP)  ; LAB_005973b6
    PUSH 0x5ef0a8                       ; 0059746f | = "zom-a0?.wav"
        ;   Label: LAB_0059746f
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00597474
    PUSH EBX                            ; 0059747a
    CALL dword ptr [EAX + 0x34]         ; 0059747b
    ADD ESP,0x8                         ; 0059747e
    MOV dword ptr [EBX + 0x10bdc],EAX   ; 00597481
    JMP 0x00596e2a                      ; 00597487
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    PUSH dword ptr [EBP + 0x92]         ; 0059748c
        ;   Label: LAB_0059748c
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00597492
    PUSH EBX                            ; 00597498
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 00597499
    CALL dword ptr [EAX + 0x150]        ; 0059749f
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005974a5
    ADD ESP,0x8                         ; 005974ab
    TEST EAX,EAX                        ; 005974ae
    JNZ 0x005974f9                      ; 005974b0
        ;   XREF to: 005974f9 (CONDITIONAL_JUMP)  ; LAB_005974f9
    CMP dword ptr [EBP + 0x36],0x0      ; 005974b2
    JZ 0x005974f9                       ; 005974b6
        ;   XREF to: 005974f9 (CONDITIONAL_JUMP)  ; LAB_005974f9
    MOV EAX,[0x01cedef4]                ; 005974b8 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 005974bd
    PUSH EAX                            ; 005974c4
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 005974c5
    CALL dword ptr [EDX + 0x114]        ; 005974cb
    ADD ESP,0x4                         ; 005974d1
    TEST EAX,EAX                        ; 005974d4
    JZ 0x005974f9                       ; 005974d6
        ;   XREF to: 005974f9 (CONDITIONAL_JUMP)  ; LAB_005974f9
    MOV EAX,[0x00616494]                ; 005974d8 | g_CGamePtr
    MOV dword ptr [EAX + 0x23c],0x1     ; 005974dd | g_CGameInstance.field572_0x23c
    MOV EAX,[0x01cedef4]                ; 005974e7 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 005974ec
    MOV dword ptr [EBX + 0x10a78],EAX   ; 005974f3
    CMP dword ptr [EBX + 0x10a78],0x0   ; 005974f9
        ;   Label: LAB_005974f9
    JZ 0x0059754c                       ; 00597500
        ;   XREF to: 0059754c (CONDITIONAL_JUMP)  ; LAB_0059754c
    TEST ESI,ESI                        ; 00597502
    JNZ 0x00597581                      ; 00597504
        ;   XREF to: 00597581 (CONDITIONAL_JUMP)  ; LAB_00597581
    MOV EDI,dword ptr [EBX + 0x10bdc]   ; 0059750a
    PUSH EDI                            ; 00597510
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00597511
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00597516
    TEST EAX,EAX                        ; 00597519
    JNZ 0x0059753e                      ; 0059751b
        ;   XREF to: 0059753e (CONDITIONAL_JUMP)  ; LAB_0059753e
    CMP dword ptr [EBX + 0x10b84],0x0   ; 0059751d
    JZ 0x0059757a                       ; 00597524
        ;   XREF to: 0059757a (CONDITIONAL_JUMP)  ; LAB_0059757a
    PUSH 0x5ef0b4                       ; 00597526 | = "f-zombie-alert?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0059752b
        ;   Label: LAB_0059752b
    PUSH EBX                            ; 00597531
    CALL dword ptr [EAX + 0x34]         ; 00597532
    ADD ESP,0x8                         ; 00597535
    MOV dword ptr [EBX + 0x10bdc],EAX   ; 00597538
    PUSH EBX                            ; 0059753e
        ;   Label: LAB_0059753e
    CALL core_zombie.cpp_FUN_00599d00   ; 0059753f
        ;   XREF to: 00599d00 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_00599d00(CZombie * this_ptr)
    ADD ESP,0x4                         ; 00597544
    JMP 0x00596e2a                      ; 00597547
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    PUSH dword ptr [EBP + 0x92]         ; 0059754c
        ;   Label: LAB_0059754c
    PUSH EBX                            ; 00597552
    CALL core_enemy.cpp_FUN_00488970    ; 00597553
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00597558
    TEST EAX,EAX                        ; 0059755b
    JNZ 0x00596e2a                      ; 0059755d
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    PUSH 0x1                            ; 00597563
    PUSH EAX                            ; 00597565
    LEA EAX,[EBX + 0x2b4]               ; 00597566
    PUSH EAX                            ; 0059756c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0059756d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00597572
    JMP 0x00596e2a                      ; 00597575
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    PUSH 0x5ef0c8                       ; 0059757a | = "zom-a0?.wav"
        ;   Label: LAB_0059757a
    JMP 0x0059752b                      ; 0059757f
        ;   XREF to: 0059752b (UNCONDITIONAL_JUMP)  ; LAB_0059752b
    MOV EAX,dword ptr [EBX + 0x10bb8]   ; 00597581
        ;   Label: LAB_00597581
    XOR ESI,ESI                         ; 00597587
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 00597589
    MOV dword ptr [EBP + 0xe],ESI       ; 00597590
    TEST EDI,EDI                        ; 00597593
    JZ 0x0059759e                       ; 00597595
        ;   XREF to: 0059759e (CONDITIONAL_JUMP)  ; LAB_0059759e
    MOV dword ptr [EBP + 0xe],0x1       ; 00597597
    MOV EAX,dword ptr [EBX + 0x10bc0]   ; 0059759e
        ;   Label: LAB_0059759e
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 005975a4
    JZ 0x005975b1                       ; 005975ac
        ;   XREF to: 005975b1 (CONDITIONAL_JUMP)  ; LAB_005975b1
    INC dword ptr [EBP + 0xe]           ; 005975ae
    LEA EAX,[EBX + 0x2508]              ; 005975b1
        ;   Label: LAB_005975b1
    PUSH dword ptr [EBP + 0x92]         ; 005975b7
    MOV dword ptr [EAX + 0x8],0x0       ; 005975bd
    PUSH EBX                            ; 005975c4
    MOV EDX,dword ptr [EAX + 0x8]       ; 005975c5
    MOV dword ptr [EAX + 0x4],EDX       ; 005975c8
    MOV EDX,dword ptr [EAX + 0x4]       ; 005975cb
    MOV dword ptr [EAX],EDX             ; 005975ce
    CALL core_zombie.cpp_FUN_005984e0   ; 005975d0
        ;   XREF to: 005984e0 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_FUN_005984e0(CZombie * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005975d5
    TEST EAX,EAX                        ; 005975d8
    JNZ 0x00596e2a                      ; 005975da
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    PUSH 0x1                            ; 005975e0
    MOV EAX,[0x005fe318]                ; 005975e2 | DAT_005fe318
    PUSH EBX                            ; 005975e7
    MOV dword ptr [EBP + 0x12],EAX      ; 005975e8
    CALL core_zombie.cpp_FUN_00598e40   ; 005975eb
        ;   XREF to: 00598e40 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_FUN_00598e40(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 005975f0
    MOV dword ptr [EBP + 0x16],EAX      ; 005975f3
    TEST EAX,EAX                        ; 005975f6
    JL 0x005976c7                       ; 005975f8
        ;   XREF to: 005976c7 (CONDITIONAL_JUMP)  ; LAB_005976c7
    SHL EAX,0x3                         ; 005975fe
    MOV EDX,EAX                         ; 00597601
    SHL EAX,0x4                         ; 00597603
    SUB EAX,EDX                         ; 00597606
    ADD EAX,EBX                         ; 00597608
    MOV ESI,dword ptr [EAX + 0x2620]    ; 0059760a
    TEST ESI,ESI                        ; 00597610
    JZ 0x005976c7                       ; 00597612
        ;   XREF to: 005976c7 (CONDITIONAL_JUMP)  ; LAB_005976c7
    CMP dword ptr [EBX + 0x10b0c],0x1   ; 00597618
    JNZ 0x005976c7                      ; 0059761f
        ;   XREF to: 005976c7 (CONDITIONAL_JUMP)  ; LAB_005976c7
    MOV EDX,0x3f800000                  ; 00597625
    MOV EAX,ESI                         ; 0059762a
    MOV dword ptr [EBP + 0x22],EDX      ; 0059762c
    TEST ESI,ESI                        ; 0059762f
    JZ 0x005976c1                       ; 00597631
        ;   XREF to: 005976c1 (CONDITIONAL_JUMP)  ; LAB_005976c1
    PUSH ESI                            ; 00597637
    MOV EDX,dword ptr [ESI + 0x2b0]     ; 00597638
    LEA ESI,[EBP + 0xfffffbba]          ; 0059763e
    LEA EDI,[EBP + 0xfffffb42]          ; 00597644
    CALL dword ptr [EDX + 0x24]         ; 0059764a
    MOV ECX,0x6                         ; 0059764d
    LEA ESI,[EBP + 0xfffffbba]          ; 00597652
    LEA EAX,[EBP + 0xfffffcce]          ; 00597658
    ADD ESP,0x4                         ; 0059765e
    MOVSD.REP ES:EDI,ESI                ; 00597661
    PUSH EAX                            ; 00597663
    LEA ESI,[EBP + 0xfffffb42]          ; 00597664
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d340 ; 0059766a
        ;   XREF to: 0040d340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d340(CVector3f * this_ptr)
    FLD float ptr [ESI + 0xc]           ; 0059766f
    FSUB float ptr [EBP + 0xfffffb42]   ; 00597672
    FSTP float ptr [EBP + 0xfffffcce]   ; 00597678
    FLD float ptr [ESI + 0x10]          ; 0059767e
    FSUB float ptr [EBP + 0xfffffb46]   ; 00597681
    LEA EDI,[EBP + 0xfffffe5a]          ; 00597687
    FSTP float ptr [EBP + 0xfffffcd2]   ; 0059768d
    FLD float ptr [ESI + 0x14]          ; 00597693
    FSUB float ptr [EBP + 0xfffffb4a]   ; 00597696
    LEA ESI,[EBP + 0xfffffcce]          ; 0059769c
    FSTP float ptr [EBP + 0xfffffcd6]   ; 005976a2
    MOVSD ES:EDI,ESI                    ; 005976a8
    MOVSD ES:EDI,ESI                    ; 005976a9
    MOVSD ES:EDI,ESI                    ; 005976aa
    FLD float ptr [EBP + 0xfffffe62]    ; 005976ab
    FMUL double ptr [0x005ef14a]        ; 005976b1 | DAT_005ef14a
    FLD1                                ; 005976b7
    FADDP                               ; 005976b9
    ADD ESP,0x4                         ; 005976bb
    FSTP float ptr [EBP + 0x22]         ; 005976be
    MOV EAX,dword ptr [EBP + 0x22]      ; 005976c1
        ;   Label: LAB_005976c1
    MOV dword ptr [EBP + 0x12],EAX      ; 005976c4
    PUSH 0x3eb2b8c2                     ; 005976c7
        ;   Label: LAB_005976c7
    PUSH 0x3f8ccccd                     ; 005976cc
    XOR ECX,ECX                         ; 005976d1
    MOV EAX,dword ptr [EBP + 0x12]      ; 005976d3
    MOV dword ptr [EBP + 0xfffffdca],ECX ; 005976d6
    MOV dword ptr [EBP + 0xfffffdd2],EAX ; 005976dc
    LEA EAX,[EBP + 0xfffffdca]          ; 005976e2
    MOV dword ptr [EBP + 0xfffffdce],ECX ; 005976e8
    PUSH EAX                            ; 005976ee
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005976ef
    PUSH EAX                            ; 005976f5
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 005976f6
    CALL dword ptr [EDX + 0xcc]         ; 005976fc
    ADD ESP,0x4                         ; 00597702
    PUSH EAX                            ; 00597705
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00597706
    ADD EAX,0x20                        ; 0059770c
    PUSH EAX                            ; 0059770f
    PUSH EBX                            ; 00597710
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 00597711
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    LEA EDX,[EBX + 0x2b4]               ; 00597716
    ADD ESP,0x18                        ; 0059771c
    MOV dword ptr [EBP + 0x52],EDX      ; 0059771f
    TEST EAX,EAX                        ; 00597722
    JL 0x005977a9                       ; 00597724
        ;   XREF to: 005977a9 (CONDITIONAL_JUMP)  ; LAB_005977a9
    JLE 0x00597829                      ; 0059772a
        ;   XREF to: 00597829 (CONDITIONAL_JUMP)  ; LAB_00597829
    CMP dword ptr [EBP + 0xe],0x0       ; 00597730
    JLE 0x00596e2a                      ; 00597734
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    FLD float ptr [EBX + 0x10a74]       ; 0059773a
    FLDZ                                ; 00597740
    FCOMPP                              ; 00597742
    FNSTSW AX                           ; 00597744
    SAHF                                ; 00597746
    JC 0x00596e2a                       ; 00597747
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0059774d
    PUSH EAX                            ; 00597753
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00597754
    CALL dword ptr [EDX + 0xfc]         ; 0059775a
    ADD ESP,0x4                         ; 00597760
    TEST EAX,EAX                        ; 00597763
    JNZ 0x00596e2a                      ; 00597765
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    MOV ESI,dword ptr [EBP + 0x16]      ; 0059776b
    TEST ESI,ESI                        ; 0059776e
    JL 0x005977d3                       ; 00597770
        ;   XREF to: 005977d3 (CONDITIONAL_JUMP)  ; LAB_005977d3
    LEA EAX,[ESI*0x8 + 0x0]             ; 00597772
    MOV EDX,EAX                         ; 00597779
    SHL EAX,0x4                         ; 0059777b
    SUB EAX,EDX                         ; 0059777e
    CMP dword ptr [EBX + EAX*0x1 + 0x2620],0x0 ; 00597780
    JZ 0x005977d3                       ; 00597788
        ;   XREF to: 005977d3 (CONDITIONAL_JUMP)  ; LAB_005977d3
    PUSH 0x1                            ; 0059778a
    PUSH 0x2                            ; 0059778c
    MOV EDX,dword ptr [EBP + 0x52]      ; 0059778e
    PUSH EDX                            ; 00597791
        ;   Label: LAB_00597791
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00597792
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00597792
    ADD ESP,0xc                         ; 00597797
    MOV dword ptr [EBX + 0x10a74],0x3f4ccccd ; 0059779a
    JMP 0x00596e2a                      ; 005977a4
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    PUSH EBX                            ; 005977a9
        ;   Label: LAB_005977a9
    PUSH 0x5ef0d4                       ; 005977aa | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 005977af | g_CConsolePtr
    PUSH ECX                            ; 005977b5 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 005977b6
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 005977bb
    PUSH 0x1                            ; 005977be
    PUSH 0x0                            ; 005977c0
    MOV ESI,dword ptr [EBP + 0x52]      ; 005977c2
    PUSH ESI                            ; 005977c5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005977c6
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005977cb
    JMP 0x00596e2a                      ; 005977ce
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    CMP dword ptr [EBP + 0x36],0x0      ; 005977d3
        ;   Label: LAB_005977d3
    JZ 0x00597819                       ; 005977d7
        ;   XREF to: 00597819 (CONDITIONAL_JUMP)  ; LAB_00597819
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005977d9
    PUSH EAX                            ; 005977df
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 005977e0
    CALL dword ptr [EDX + 0x114]        ; 005977e6
    ADD ESP,0x4                         ; 005977ec
    TEST EAX,EAX                        ; 005977ef
    JZ 0x00597819                       ; 005977f1
        ;   XREF to: 00597819 (CONDITIONAL_JUMP)  ; LAB_00597819
    PUSH 0x3f000000                     ; 005977f3
    CALL core_actor.cpp_FUN_0040d060    ; 005977f8
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 005977fd
    LEA EDX,[EBX + 0x2b4]               ; 00597800
    TEST EAX,EAX                        ; 00597806
    JZ 0x00597810                       ; 00597808
        ;   XREF to: 00597810 (CONDITIONAL_JUMP)  ; LAB_00597810
    PUSH 0x1                            ; 0059780a
    PUSH 0x18                           ; 0059780c
    JMP 0x00597791                      ; 0059780e
        ;   XREF to: 00597791 (UNCONDITIONAL_JUMP)  ; LAB_00597791
    PUSH 0x1                            ; 00597810
        ;   Label: LAB_00597810
    PUSH 0x19                           ; 00597812
    JMP 0x00597791                      ; 00597814
        ;   XREF to: 00597791 (UNCONDITIONAL_JUMP)  ; LAB_00597791
    PUSH 0x1                            ; 00597819
        ;   Label: LAB_00597819
    PUSH 0x3                            ; 0059781b
    LEA EAX,[EBX + 0x2b4]               ; 0059781d
    PUSH EAX                            ; 00597823
    JMP 0x00597792                      ; 00597824
        ;   XREF to: 00597792 (UNCONDITIONAL_JUMP)  ; LAB_00597792
    MOV EDI,dword ptr [EBX + 0x10b0c]   ; 00597829
        ;   Label: LAB_00597829
    PUSH EDI                            ; 0059782f
    PUSH EBX                            ; 00597830
    CALL core_zombie.cpp_FUN_00598e40   ; 00597831
        ;   XREF to: 00598e40 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_FUN_00598e40(CZombie * this_ptr, int object_shape_type)
    MOV dword ptr [EBP + 0x2e],EAX      ; 00597836
    LEA EAX,[EBX + 0x20]                ; 00597839
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 0059783c
    FLD float ptr [EAX]                 ; 00597842
    FSUB float ptr [EDX + 0x20]         ; 00597844
    FSTP float ptr [EBP + 0xfffffbf6]   ; 00597847
    FLD float ptr [EAX + 0x4]           ; 0059784d
    FSUB float ptr [EDX + 0x24]         ; 00597850
    LEA ESI,[EBP + 0xfffffbf6]          ; 00597853
    FSTP float ptr [EBP + 0xfffffbfa]   ; 00597859
    FLD float ptr [EAX + 0x8]           ; 0059785f
    FSUB float ptr [EDX + 0x28]         ; 00597862
    LEA EDI,[EBP + 0xfffffe66]          ; 00597865
    FSTP float ptr [EBP + 0xfffffbfe]   ; 0059786b
    MOVSD ES:EDI,ESI                    ; 00597871
    MOVSD ES:EDI,ESI                    ; 00597872
    MOVSD ES:EDI,ESI                    ; 00597873
    FLD float ptr [EBP + 0xfffffe6a]    ; 00597874
    FMUL ST0                            ; 0059787a
    FLD float ptr [EBP + 0xfffffe66]    ; 0059787c
    FMUL ST0                            ; 00597882
    FADDP                               ; 00597884
    FLD float ptr [EBP + 0xfffffe6e]    ; 00597886
    FMUL ST0                            ; 0059788c
    FADDP                               ; 0059788e
    FSQRT                               ; 00597890
    ADD ESP,0x8                         ; 00597892
    ADD EDX,0x20                        ; 00597895
    FCOMP double ptr [0x005ef162]       ; 00597898 | DAT_005ef162
    FNSTSW AX                           ; 0059789e
    SAHF                                ; 005978a0
    JNC 0x00596e2a                      ; 005978a1
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    PUSH EDX                            ; 005978a7
    PUSH EBX                            ; 005978a8
    LEA ESI,[EBP + 0xfffffc32]          ; 005978a9
    LEA EDI,[EBP + 0xfffffc4a]          ; 005978af
    CALL core_actor.cpp_FUN_00408de0    ; 005978b5
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[EBP + 0xfffffc32]          ; 005978ba
    LEA EAX,[EBP + 0xfffffc4a]          ; 005978c0
    ADD ESP,0x8                         ; 005978c6
    MOVSD ES:EDI,ESI                    ; 005978c9
    MOVSD ES:EDI,ESI                    ; 005978ca
    MOVSD ES:EDI,ESI                    ; 005978cb
    PUSH EAX                            ; 005978cc
    LEA ESI,[EBP + 0xfffffcf2]          ; 005978cd
    LEA EDI,[EBP + 0xfffffc0e]          ; 005978d3
    CALL core_vecdir.cpp_FUN_005838f0   ; 005978d9
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[EBP + 0xfffffcf2]          ; 005978de
    MOVSD ES:EDI,ESI                    ; 005978e4
    MOVSD ES:EDI,ESI                    ; 005978e5
    MOVSD ES:EDI,ESI                    ; 005978e6
    FLD float ptr [EBP + 0xfffffc12]    ; 005978e7
    FABS                                ; 005978ed
    ADD ESP,0x4                         ; 005978ef
    FCOMP double ptr [0x005ef16a]       ; 005978f2 | DAT_005ef16a
    FNSTSW AX                           ; 005978f8
    SAHF                                ; 005978fa
    JNC 0x00596e2a                      ; 005978fb
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    MOV EAX,dword ptr [EBP + 0x2e]      ; 00597901
    TEST EAX,EAX                        ; 00597904
    JL 0x00596e2a                       ; 00597906
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    MOV EDX,dword ptr [EBX + 0x10b0c]   ; 0059790c
    CMP EDX,0x2                         ; 00597912
    JC 0x00596e2a                       ; 00597915
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    SHL EAX,0x3                         ; 0059791b
    MOV ESI,EAX                         ; 0059791e
    SHL EAX,0x4                         ; 00597920
    SUB EAX,ESI                         ; 00597923
    ADD EAX,EBX                         ; 00597925
    CMP EDX,0x2                         ; 00597927
    JA 0x00597999                       ; 0059792a
        ;   XREF to: 00597999 (CONDITIONAL_JUMP)  ; LAB_00597999
    CMP dword ptr [EAX + 0x2620],0x0    ; 0059792c
    JZ 0x00596e2a                       ; 00597933
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    PUSH EBX                            ; 00597939
    PUSH 0x5ef101                       ; 0059793a | = "%s lugging\n"
    MOV EAX,[0x00609ed0]                ; 0059793f | g_CConsolePtr
    PUSH EAX                            ; 00597944 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 00597945
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 0059794a
    PUSH 0x1                            ; 0059794d
    PUSH 0xd                            ; 0059794f
    MOV EDX,dword ptr [EBP + 0x52]      ; 00597951
    PUSH EDX                            ; 00597954
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00597955
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059795a
    JMP 0x00596e2a                      ; 0059795d
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    CMP dword ptr [EAX + 0x2620],0x0    ; 00597962
        ;   Label: LAB_00597962
    JZ 0x00596e2a                       ; 00597969
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    PUSH EBX                            ; 0059796f
    PUSH 0x5ef0f5                       ; 00597970 | = "%s tossing\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 00597975 | g_CConsolePtr
    PUSH ECX                            ; 0059797b | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0059797c
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 00597981
    PUSH 0x1                            ; 00597984
    PUSH 0xb                            ; 00597986
    MOV ESI,dword ptr [EBP + 0x52]      ; 00597988
    PUSH ESI                            ; 0059798b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0059798c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00597991
    JMP 0x00596e2a                      ; 00597994
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    CMP EDX,0x3                         ; 00597999
        ;   Label: LAB_00597999
    JZ 0x00597962                       ; 0059799c
        ;   XREF to: 00597962 (CONDITIONAL_JUMP)  ; LAB_00597962
    JMP 0x00596e2a                      ; 0059799e
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 005979a3
        ;   Label: LAB_005979a3
    TEST ESI,ESI                        ; 005979a9
    JZ 0x0059753e                       ; 005979ab
        ;   XREF to: 0059753e (CONDITIONAL_JUMP)  ; LAB_0059753e
    PUSH ESI                            ; 005979b1
    MOV EDX,dword ptr [ESI + 0x2b0]     ; 005979b2
    CALL dword ptr [EDX + 0x114]        ; 005979b8
    ADD ESP,0x4                         ; 005979be
    TEST EAX,EAX                        ; 005979c1
    JG 0x0059753e                       ; 005979c3
        ;   XREF to: 0059753e (CONDITIONAL_JUMP)  ; LAB_0059753e
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005979c9
    PUSH EAX                            ; 005979cf
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 005979d0
    CALL dword ptr [EDX + 0xfc]         ; 005979d6
    ADD ESP,0x4                         ; 005979dc
    TEST EAX,EAX                        ; 005979df
    JNZ 0x005979f8                      ; 005979e1
        ;   XREF to: 005979f8 (CONDITIONAL_JUMP)  ; LAB_005979f8
    MOV EDI,0x40400000                  ; 005979e3
    MOV EAX,[0x005fe318]                ; 005979e8 | DAT_005fe318
    MOV dword ptr [EBP + 0x6a],EDI      ; 005979ed
    MOV dword ptr [EBP + -0xe],EAX      ; 005979f0
    JMP 0x00596e2a                      ; 005979f3
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    CMP EAX,EBX                         ; 005979f8
        ;   Label: LAB_005979f8
    JZ 0x00596e2a                       ; 005979fa
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    PUSH EBX                            ; 00597a00
        ;   Label: LAB_00597a00
    CALL core_zombie.cpp_FUN_00599d00   ; 00597a01
        ;   XREF to: 00599d00 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_00599d00(CZombie * this_ptr)
    ADD ESP,0x4                         ; 00597a06
    JMP 0x00596e2a                      ; 00597a09
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    CMP dword ptr [EBX + 0x10a78],0x0   ; 00597a0e
        ;   Label: LAB_00597a0e
    JZ 0x00597a00                       ; 00597a15
        ;   XREF to: 00597a00 (CONDITIONAL_JUMP)  ; LAB_00597a00
    PUSH 0x1                            ; 00597a17
    PUSH EBX                            ; 00597a19
    CALL core_zombie.cpp_FUN_00598e40   ; 00597a1a
        ;   XREF to: 00598e40 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_FUN_00598e40(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 00597a1f
    MOV ESI,EAX                         ; 00597a22
    TEST EAX,EAX                        ; 00597a24
    JL 0x00597bb6                       ; 00597a26
        ;   XREF to: 00597bb6 (CONDITIONAL_JUMP)  ; LAB_00597bb6
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00597a2c
    PUSH EAX                            ; 00597a32
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00597a33
    CALL dword ptr [EDX + 0x114]        ; 00597a39
    ADD ESP,0x4                         ; 00597a3f
    TEST EAX,EAX                        ; 00597a42
    JG 0x00597bb6                       ; 00597a44
        ;   XREF to: 00597bb6 (CONDITIONAL_JUMP)  ; LAB_00597bb6
    MOV EAX,ESI                         ; 00597a4a
    SHL EAX,0x3                         ; 00597a4c
    MOV EDX,EAX                         ; 00597a4f
    SHL EAX,0x4                         ; 00597a51
    SUB EAX,EDX                         ; 00597a54
    CMP dword ptr [EBX + EAX*0x1 + 0x2620],0x0 ; 00597a56
    JZ 0x00597bb6                       ; 00597a5e
        ;   XREF to: 00597bb6 (CONDITIONAL_JUMP)  ; LAB_00597bb6
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00597a64
    PUSH EAX                            ; 00597a6a
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00597a6b
    CALL dword ptr [EDX + 0xfc]         ; 00597a71
    ADD ESP,0x4                         ; 00597a77
    TEST EAX,EAX                        ; 00597a7a
    JNZ 0x00597bb6                      ; 00597a7c
        ;   XREF to: 00597bb6 (CONDITIONAL_JUMP)  ; LAB_00597bb6
    SHL ESI,0x3                         ; 00597a82
    MOV EAX,ESI                         ; 00597a85
    SHL EAX,0x4                         ; 00597a87
    SUB EAX,ESI                         ; 00597a8a
    MOV ECX,0x3f800000                  ; 00597a8c
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x2620] ; 00597a91
    MOV dword ptr [EBP + 0x66],ECX      ; 00597a98
    TEST EAX,EAX                        ; 00597a9b
    JZ 0x00597b66                       ; 00597a9d
        ;   XREF to: 00597b66 (CONDITIONAL_JUMP)  ; LAB_00597b66
    PUSH EAX                            ; 00597aa3
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00597aa4
    LEA ESI,[EBP + 0xfffffba2]          ; 00597aaa
    LEA EDI,[EBP + 0xfffffb8a]          ; 00597ab0
    CALL dword ptr [EDX + 0x24]         ; 00597ab6
    MOV ECX,0x6                         ; 00597ab9
    LEA ESI,[EBP + 0xfffffba2]          ; 00597abe
    ADD ESP,0x4                         ; 00597ac4
    MOVSD.REP ES:EDI,ESI                ; 00597ac7
    LEA EAX,[EBP + 0xfffffde2]          ; 00597ac9
    LEA EDI,[EBP + 0xfffffb8a]          ; 00597acf
    PUSH EAX                            ; 00597ad5
    LEA ESI,[EDI + 0xc]                 ; 00597ad6
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d340 ; 00597ad9
        ;   XREF to: 0040d340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d340(CVector3f * this_ptr)
    FLD float ptr [ESI]                 ; 00597ade
    FSUB float ptr [EDI]                ; 00597ae0
    FSTP float ptr [EBP + 0xfffffde2]   ; 00597ae2
    FLD float ptr [ESI + 0x4]           ; 00597ae8
    FSUB float ptr [EDI + 0x4]          ; 00597aeb
    FSTP float ptr [EBP + 0xfffffde6]   ; 00597aee
    FLD float ptr [ESI + 0x8]           ; 00597af4
    LEA ESI,[EBP + 0xfffffde2]          ; 00597af7
    FSUB float ptr [EDI + 0x8]          ; 00597afd
    LEA EDI,[EBP + 0xfffffe06]          ; 00597b00
    FSTP float ptr [EBP + 0xfffffdea]   ; 00597b06
    MOVSD ES:EDI,ESI                    ; 00597b0c
    MOVSD ES:EDI,ESI                    ; 00597b0d
    MOVSD ES:EDI,ESI                    ; 00597b0e
    LEA EDI,[EBP + 0xfffffd9a]          ; 00597b0f
    LEA ESI,[EBP + 0xfffffe06]          ; 00597b15
    MOVSD ES:EDI,ESI                    ; 00597b1b
    MOVSD ES:EDI,ESI                    ; 00597b1c
    MOVSD ES:EDI,ESI                    ; 00597b1d
    LEA EDI,[EBP + 0xfffffd8e]          ; 00597b1e
    LEA ESI,[EBP + 0xfffffd9a]          ; 00597b24
    MOVSD ES:EDI,ESI                    ; 00597b2a
    MOVSD ES:EDI,ESI                    ; 00597b2b
    MOVSD ES:EDI,ESI                    ; 00597b2c
    LEA EDI,[EBP + 0xfffffe12]          ; 00597b2d
    LEA ESI,[EBP + 0xfffffd8e]          ; 00597b33
    MOVSD ES:EDI,ESI                    ; 00597b39
    MOVSD ES:EDI,ESI                    ; 00597b3a
    MOVSD ES:EDI,ESI                    ; 00597b3b
    LEA EDI,[EBP + 0xfffffd46]          ; 00597b3c
    LEA ESI,[EBP + 0xfffffe12]          ; 00597b42
    MOVSD ES:EDI,ESI                    ; 00597b48
    MOVSD ES:EDI,ESI                    ; 00597b49
    MOVSD ES:EDI,ESI                    ; 00597b4a
    FLD float ptr [EBP + 0xfffffd4e]    ; 00597b4b
    FMUL double ptr [0x005ef14a]        ; 00597b51 | DAT_005ef14a
    FLD float ptr [EBP + 0x66]          ; 00597b57
    FXCH                                ; 00597b5a
    FADD ST0,ST1                        ; 00597b5c
    ADD ESP,0x4                         ; 00597b5e
    FSTP ST1                            ; 00597b61
    FSTP float ptr [EBP + 0x66]         ; 00597b63
    MOV EAX,dword ptr [EBP + 0x66]      ; 00597b66
        ;   Label: LAB_00597b66
    MOV dword ptr [EBP + -0xe],EAX      ; 00597b69
    LEA EAX,[EBX + 0x2b4]               ; 00597b6c
    PUSH EAX                            ; 00597b72
    CALL core_motion.cpp_FUN_00503e60   ; 00597b73
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    FLD1                                ; 00597b78
    MOV dword ptr [EBP + 0x76],EAX      ; 00597b7a
    ADD ESP,0x4                         ; 00597b7d
    MOV EAX,dword ptr [EBP + 0x76]      ; 00597b80
    MOV dword ptr [EBP + 0x32],EAX      ; 00597b83
    FLD float ptr [EBP + 0x32]          ; 00597b86
    FSTP double ptr [EBP + -0x3e]       ; 00597b89
    FCOMP double ptr [EBP + -0x3e]      ; 00597b8c
    FNSTSW AX                           ; 00597b8f
    SAHF                                ; 00597b91
    JA 0x00596e2a                       ; 00597b92
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    FLD double ptr [EBP + -0x3e]        ; 00597b98
    FCOMP double ptr [0x005ef15a]       ; 00597b9b | DAT_005ef15a
    FNSTSW AX                           ; 00597ba1
    SAHF                                ; 00597ba3
    JA 0x00596e2a                       ; 00597ba4
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    MOV dword ptr [EBP + -0x16],0x1     ; 00597baa
    JMP 0x00596e2a                      ; 00597bb1
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    PUSH EBX                            ; 00597bb6
        ;   Label: LAB_00597bb6
    PUSH 0x5ef10d                       ; 00597bb7 | = "%s gave up swing\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 00597bbc | g_CConsolePtr
    PUSH EDI                            ; 00597bc2 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 00597bc3
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 00597bc8
    PUSH EBX                            ; 00597bcb
    CALL core_zombie.cpp_FUN_00599d00   ; 00597bcc
        ;   XREF to: 00599d00 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_00599d00(CZombie * this_ptr)
    ADD ESP,0x4                         ; 00597bd1
    JMP 0x00596e2a                      ; 00597bd4
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    PUSH dword ptr [EBP + 0x92]         ; 00597bd9
        ;   Label: LAB_00597bd9
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00597bdf
    PUSH EBX                            ; 00597be5
    CALL dword ptr [EAX + 0x150]        ; 00597be6
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00597bec
    ADD ESP,0x8                         ; 00597bf2
    TEST EAX,EAX                        ; 00597bf5
    JZ 0x00596e2a                       ; 00597bf7
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    FLD float ptr [ESI]                 ; 00597bfd
    FSUB float ptr [EAX + 0x20]         ; 00597bff
    FMUL ST0                            ; 00597c02
    FLD float ptr [ESI + 0x8]           ; 00597c04
    FSUB float ptr [EAX + 0x28]         ; 00597c07
    FMUL ST0                            ; 00597c0a
    MOV EDX,EAX                         ; 00597c0c
    FADDP                               ; 00597c0e
    ADD EAX,0x20                        ; 00597c10
    FSQRT                               ; 00597c13
    FCOMP double ptr [0x005ef152]       ; 00597c15 | DAT_005ef152
    FNSTSW AX                           ; 00597c1b
    SAHF                                ; 00597c1d
    JA 0x00596e2a                       ; 00597c1e
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    FLD float ptr [EBX + 0x24]          ; 00597c24
    FSUB float ptr [EDX + 0x24]         ; 00597c27
    FABS                                ; 00597c2a
    FCOMP double ptr [0x005ef15a]       ; 00597c2c | DAT_005ef15a
    FNSTSW AX                           ; 00597c32
    SAHF                                ; 00597c34
    JA 0x00596e2a                       ; 00597c35
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    PUSH 0x1                            ; 00597c3b
    PUSH 0x0                            ; 00597c3d
    PUSH EDI                            ; 00597c3f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00597c40
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00597c45
    JMP 0x00596e2a                      ; 00597c48
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    MOV EDX,0xbf800000                  ; 00597c4d
        ;   Label: LAB_00597c4d
    MOV ECX,0x3e99999a                  ; 00597c52
    PUSH EDI                            ; 00597c57
    MOV dword ptr [EBP + -0xe],EDX      ; 00597c58
    MOV dword ptr [EBP + 0x6a],ECX      ; 00597c5b
    CALL core_motion.cpp_FUN_005035c0   ; 00597c5e
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00597c63
    ADD ESP,0x4                         ; 00597c66
    CMP EAX,0x8                         ; 00597c69
    JNC 0x00597c80                      ; 00597c6c
        ;   XREF to: 00597c80 (CONDITIONAL_JUMP)  ; LAB_00597c80
    CMP EAX,0x1                         ; 00597c6e
    JNC 0x00597cc8                      ; 00597c71
        ;   XREF to: 00597cc8 (CONDITIONAL_JUMP)  ; LAB_00597cc8
    TEST EAX,EAX                        ; 00597c73
    JZ 0x0059732e                       ; 00597c75
        ;   XREF to: 0059732e (CONDITIONAL_JUMP)  ; LAB_0059732e
    JMP 0x00596e2a                      ; 00597c7b
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    JBE 0x005972b4                      ; 00597c80
        ;   XREF to: 005972b4 (CONDITIONAL_JUMP)  ; LAB_005972b4
        ;   Label: LAB_00597c80
    LEA ESI,[EBX + 0x20]                ; 00597c86
    CMP EAX,0x18                        ; 00597c89
    JNC 0x00597cab                      ; 00597c8c
        ;   XREF to: 00597cab (CONDITIONAL_JUMP)  ; LAB_00597cab
    CMP EAX,0xe                         ; 00597c8e
    JC 0x00596e2a                       ; 00597c91
        ;   XREF to: 00596e2a (CONDITIONAL_JUMP)  ; LAB_00596e2a
    JBE 0x00597158                      ; 00597c97
        ;   XREF to: 00597158 (CONDITIONAL_JUMP)  ; LAB_00597158
    CMP EAX,0x14                        ; 00597c9d
    JZ 0x00597bd9                       ; 00597ca0
        ;   XREF to: 00597bd9 (CONDITIONAL_JUMP)  ; LAB_00597bd9
    JMP 0x00596e2a                      ; 00597ca6
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    JBE 0x00596e06                      ; 00597cab
        ;   XREF to: 00596e06 (CONDITIONAL_JUMP)  ; LAB_00596e06
        ;   Label: LAB_00597cab
    CMP EAX,0x19                        ; 00597cb1
    JBE 0x00596e06                      ; 00597cb4
        ;   XREF to: 00596e06 (CONDITIONAL_JUMP)  ; LAB_00596e06
    CMP EAX,0x1c                        ; 00597cba
    JZ 0x00596f2f                       ; 00597cbd
        ;   XREF to: 00596f2f (CONDITIONAL_JUMP)  ; LAB_00596f2f
    JMP 0x00596e2a                      ; 00597cc3
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    JBE 0x0059748c                      ; 00597cc8
        ;   XREF to: 0059748c (CONDITIONAL_JUMP)  ; LAB_0059748c
        ;   Label: LAB_00597cc8
    CMP EAX,0x2                         ; 00597cce
    JBE 0x00597a0e                      ; 00597cd1
        ;   XREF to: 00597a0e (CONDITIONAL_JUMP)  ; LAB_00597a0e
    CMP EAX,0x3                         ; 00597cd7
    JZ 0x005979a3                       ; 00597cda
        ;   XREF to: 005979a3 (CONDITIONAL_JUMP)  ; LAB_005979a3
    JMP 0x00596e2a                      ; 00597ce0
        ;   XREF to: 00596e2a (UNCONDITIONAL_JUMP)  ; LAB_00596e2a
    CMP EAX,0xf                         ; 00597ce5
        ;   Label: LAB_00597ce5
    JNZ 0x00597d4c                      ; 00597ce8
        ;   XREF to: 00597d4c (CONDITIONAL_JUMP)  ; LAB_00597d4c
    PUSH EDX                            ; 00597cea
    PUSH EBX                            ; 00597ceb
    LEA ESI,[EBP + 0xfffffd5e]          ; 00597cec
    LEA EDI,[EBP + 0xfffffe96]          ; 00597cf2
    CALL core_actor.cpp_FUN_00408cf0    ; 00597cf8
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[EBP + 0xfffffd5e]          ; 00597cfd
    LEA EAX,[EBX + 0x20]                ; 00597d03
    MOVSD ES:EDI,ESI                    ; 00597d06
    MOVSD ES:EDI,ESI                    ; 00597d07
    MOVSD ES:EDI,ESI                    ; 00597d08
    FLD float ptr [EAX]                 ; 00597d09
    FADD float ptr [EBP + 0xfffffe96]   ; 00597d0b
    FLD float ptr [EAX + 0x4]           ; 00597d11
    FXCH                                ; 00597d14
    FSTP float ptr [EAX]                ; 00597d16
    FADD float ptr [EBP + 0xfffffe9a]   ; 00597d18
    FLD float ptr [EAX + 0x8]           ; 00597d1e
    FXCH                                ; 00597d21
    FSTP float ptr [EAX + 0x4]          ; 00597d23
    FADD float ptr [EBP + 0xfffffe9e]   ; 00597d26
    FSTP float ptr [EAX + 0x8]          ; 00597d2c
    MOV EAX,dword ptr [EBP + 0x56]      ; 00597d2f
    MOV dword ptr [EAX + 0x8],0x0       ; 00597d32
    ADD ESP,0x8                         ; 00597d39
    MOV EDX,dword ptr [EAX + 0x8]       ; 00597d3c
    MOV dword ptr [EAX + 0x4],EDX       ; 00597d3f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00597d42
    MOV dword ptr [EAX],EDX             ; 00597d45
    JMP 0x00596bbb                      ; 00597d47
        ;   XREF to: 00596bbb (UNCONDITIONAL_JUMP)  ; LAB_00596bbb
    PUSH EBX                            ; 00597d4c
        ;   Label: LAB_00597d4c
    CALL core_charactr.cpp_FUN_00424430 ; 00597d4d
        ;   XREF to: 00424430 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00424430(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00597d52
    TEST EAX,EAX                        ; 00597d55
    JZ 0x00596bbb                       ; 00597d57
        ;   XREF to: 00596bbb (CONDITIONAL_JUMP)  ; LAB_00596bbb
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 00597d5d
    TEST EDI,EDI                        ; 00597d63
    JZ 0x00597d91                       ; 00597d65
        ;   XREF to: 00597d91 (CONDITIONAL_JUMP)  ; LAB_00597d91
    PUSH EDI                            ; 00597d67
    MOV EDX,dword ptr [EDI + 0x2b0]     ; 00597d68
    CALL dword ptr [EDX + 0xfc]         ; 00597d6e
    ADD ESP,0x4                         ; 00597d74
    CMP EAX,EBX                         ; 00597d77
    JNZ 0x00597d91                      ; 00597d79
        ;   XREF to: 00597d91 (CONDITIONAL_JUMP)  ; LAB_00597d91
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00597d7b
    PUSH EAX                            ; 00597d81
    MOV EDX,dword ptr [0x0061b5a8]      ; 00597d82 | g_CDemonSetPtr
    PUSH EDX                            ; 00597d88 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 00597d89
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00597d8e
    PUSH dword ptr [EBP + 0x92]         ; 00597d91
        ;   Label: LAB_00597d91
    PUSH EBX                            ; 00597d97
    LEA ESI,[EBX + 0x2588]              ; 00597d98
    CALL core_charactr.cpp_FUN_00423a10 ; 00597d9e
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    FLD float ptr [ESI]                 ; 00597da3
    FMUL float ptr [EBP + 0x92]         ; 00597da5
    FSTP float ptr [EBP + 0xfffffe36]   ; 00597dab
    FLD float ptr [ESI + 0x4]           ; 00597db1
    FMUL float ptr [EBP + 0x92]         ; 00597db4
    FSTP float ptr [EBP + 0xfffffe3a]   ; 00597dba
    FLD float ptr [ESI + 0x8]           ; 00597dc0
    FMUL float ptr [EBP + 0x92]         ; 00597dc3
    LEA EDI,[EBP + -0x4a]               ; 00597dc9
    LEA ESI,[EBP + 0xfffffe36]          ; 00597dcc
    FSTP float ptr [EBP + 0xfffffe3e]   ; 00597dd2
    MOVSD ES:EDI,ESI                    ; 00597dd8
    MOVSD ES:EDI,ESI                    ; 00597dd9
    MOVSD ES:EDI,ESI                    ; 00597dda
    LEA EAX,[EBX + 0x257c]              ; 00597ddb
    FLD float ptr [EBP + -0x46]         ; 00597de1
    FLD float ptr [EBP + -0x4a]         ; 00597de4
    FADD float ptr [EAX]                ; 00597de7
    FLD float ptr [EBP + -0x42]         ; 00597de9
    FXCH                                ; 00597dec
    FSTP float ptr [EBP + 0xfffffd3a]   ; 00597dee
    FXCH                                ; 00597df4
    FADD float ptr [EAX + 0x4]          ; 00597df6
    LEA EDI,[EBP + 0xffffff0e]          ; 00597df9
    FSTP float ptr [EBP + 0xfffffd3e]   ; 00597dff
    FADD float ptr [EAX + 0x8]          ; 00597e05
    LEA ESI,[EBP + 0xfffffd3a]          ; 00597e08
    FSTP float ptr [EBP + 0xfffffd42]   ; 00597e0e
    MOVSD ES:EDI,ESI                    ; 00597e14
    MOVSD ES:EDI,ESI                    ; 00597e15
    MOVSD ES:EDI,ESI                    ; 00597e16
    LEA EDX,[EBX + 0x2508]              ; 00597e17
    FLD float ptr [EBP + 0xffffff12]    ; 00597e1d
    FLD float ptr [EBP + 0xffffff0e]    ; 00597e23
    FADD float ptr [EDX]                ; 00597e29
    FLD float ptr [EBP + 0xffffff16]    ; 00597e2b
    FXCH                                ; 00597e31
    FSTP float ptr [EBP + 0xfffffd6a]   ; 00597e33
    FXCH                                ; 00597e39
    FADD float ptr [EDX + 0x4]          ; 00597e3b
    LEA EDI,[EBP + 0xffffff6e]          ; 00597e3e
    FSTP float ptr [EBP + 0xfffffd6e]   ; 00597e44
    FADD float ptr [EDX + 0x8]          ; 00597e4a
    LEA ESI,[EBP + 0xfffffd6a]          ; 00597e4d
    FSTP float ptr [EBP + 0xfffffd72]   ; 00597e53
    MOVSD ES:EDI,ESI                    ; 00597e59
    MOVSD ES:EDI,ESI                    ; 00597e5a
    MOVSD ES:EDI,ESI                    ; 00597e5b
    MOV dword ptr [EAX + 0x8],0x0       ; 00597e5c
    ADD ESP,0x8                         ; 00597e63
    MOV ECX,dword ptr [EAX + 0x8]       ; 00597e66
    MOV dword ptr [EAX + 0x4],ECX       ; 00597e69
    MOV ECX,dword ptr [EAX + 0x4]       ; 00597e6c
    MOV dword ptr [EAX],ECX             ; 00597e6f
    MOV dword ptr [EDX + 0x8],0x0       ; 00597e71
    LEA EAX,[EBP + 0xffffff6e]          ; 00597e78
    FLD float ptr [EDX + 0x8]           ; 00597e7e
    PUSH EAX                            ; 00597e81
    FST float ptr [EDX + 0x4]           ; 00597e82
    PUSH EBX                            ; 00597e85
    FSTP float ptr [EDX]                ; 00597e86
    CALL core_charactr.cpp_FUN_00423a60 ; 00597e88
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    MOV ECX,dword ptr [EBP + 0x62]      ; 00597e8d
    ADD ESP,0x8                         ; 00597e90
    CMP ECX,0x1                         ; 00597e93
    JNZ 0x00596bbb                      ; 00597e96
        ;   XREF to: 00596bbb (CONDITIONAL_JUMP)  ; LAB_00596bbb
    MOV ESI,dword ptr [0x01b4d36c]      ; 00597e9c | g_CDoorClassInfo.name_hash
    PUSH ESI                            ; 00597ea2
    MOV EDI,dword ptr [0x007bdc98]      ; 00597ea3 | DAT_007bdc98
    PUSH EDI                            ; 00597ea9
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00597eaa
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV dword ptr [EBP + 0x4a],EAX      ; 00597eaf
    ADD ESP,0x8                         ; 00597eb2
    MOV dword ptr [EBP + 0x46],EAX      ; 00597eb5
    TEST EAX,EAX                        ; 00597eb8
    JZ 0x00596bbb                       ; 00597eba
        ;   XREF to: 00596bbb (CONDITIONAL_JUMP)  ; LAB_00596bbb
    MOV EDX,dword ptr [EBP + 0x4a]      ; 00597ec0
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00597ec3
    PUSH EDX                            ; 00597ec9
    LEA ESI,[EBP + 0xfffffb2a]          ; 00597eca
    LEA EDI,[EBP + 0xfffffbd2]          ; 00597ed0
    CALL dword ptr [EAX + 0x24]         ; 00597ed6
    MOV ECX,0x6                         ; 00597ed9
    LEA ESI,[EBP + 0xfffffb2a]          ; 00597ede
    MOVSD.REP ES:EDI,ESI                ; 00597ee4
    LEA EAX,[EBP + 0xfffffbd2]          ; 00597ee6
    FLD float ptr [EBP + 0xfffffbd6]    ; 00597eec
    FLD float ptr [EBP + 0xfffffbd2]    ; 00597ef2
    FADD float ptr [EAX + 0xc]          ; 00597ef8
    FLD float ptr [EBP + 0xfffffbda]    ; 00597efb
    FXCH                                ; 00597f01
    FSTP float ptr [EBP + 0xfffffc86]   ; 00597f03
    FXCH                                ; 00597f09
    FADD float ptr [EAX + 0x10]         ; 00597f0b
    LEA EDI,[EBP + 0xfffffda6]          ; 00597f0e
    FSTP float ptr [EBP + 0xfffffc8a]   ; 00597f14
    FADD float ptr [EAX + 0x14]         ; 00597f1a
    LEA ESI,[EBP + 0xfffffc86]          ; 00597f1d
    FSTP float ptr [EBP + 0xfffffc8e]   ; 00597f23
    MOVSD ES:EDI,ESI                    ; 00597f29
    MOVSD ES:EDI,ESI                    ; 00597f2a
    MOVSD ES:EDI,ESI                    ; 00597f2b
    FLD float ptr [0x005ef17a]          ; 00597f2c | DAT_005ef17a
    FLD float ptr [EBP + 0xfffffda6]    ; 00597f32
    FMUL ST1                            ; 00597f38
    FLD float ptr [EBP + 0xfffffdaa]    ; 00597f3a
    FMUL ST2                            ; 00597f40
    FLD float ptr [EBP + 0xfffffdae]    ; 00597f42
    FMULP ST3                           ; 00597f48
    ADD ESP,0x4                         ; 00597f4a
    LEA EAX,[EBP + 0xfffffdd6]          ; 00597f4d
    MOV ECX,dword ptr [EBP + 0x4a]      ; 00597f53
    PUSH EAX                            ; 00597f56
    LEA EDI,[EBP + 0xfffffdd6]          ; 00597f57
    LEA ESI,[EBP + 0xfffffc02]          ; 00597f5d
    FXCH                                ; 00597f63
    FSTP float ptr [EBP + 0xfffffc02]   ; 00597f65
    FSTP float ptr [EBP + 0xfffffc06]   ; 00597f6b
    FSTP float ptr [EBP + 0xfffffc0a]   ; 00597f71
    MOVSD ES:EDI,ESI                    ; 00597f77
    MOVSD ES:EDI,ESI                    ; 00597f78
    MOVSD ES:EDI,ESI                    ; 00597f79
    PUSH ECX                            ; 00597f7a
    LEA ESI,[EBP + 0xfffffeae]          ; 00597f7b
    LEA EDI,[EBP + 0xffffff7a]          ; 00597f81
    CALL core_actor.cpp_FUN_00408d70    ; 00597f87
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 00597f8c
    LEA EAX,[EBP + 0xffffff7a]          ; 00597f8f
    LEA ESI,[EBP + 0xfffffeae]          ; 00597f95
    PUSH EAX                            ; 00597f9b
    MOVSD ES:EDI,ESI                    ; 00597f9c
    MOVSD ES:EDI,ESI                    ; 00597f9d
    MOVSD ES:EDI,ESI                    ; 00597f9e
    PUSH EBX                            ; 00597f9f
    LEA ESI,[EBP + 0xfffffea2]          ; 00597fa0
    LEA EDI,[EBP + 0xffffff32]          ; 00597fa6
    CALL core_actor.cpp_FUN_00408de0    ; 00597fac
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[EBP + 0xfffffea2]          ; 00597fb1
    LEA EAX,[EBP + 0xffffff32]          ; 00597fb7
    ADD ESP,0x8                         ; 00597fbd
    MOVSD ES:EDI,ESI                    ; 00597fc0
    MOVSD ES:EDI,ESI                    ; 00597fc1
    MOVSD ES:EDI,ESI                    ; 00597fc2
    PUSH EAX                            ; 00597fc3
    LEA ESI,[EBP + 0xfffffd82]          ; 00597fc4
    LEA EDI,[EBP + 0xfffffcaa]          ; 00597fca
    CALL core_vecdir.cpp_FUN_005838f0   ; 00597fd0
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[EBP + 0xfffffd82]          ; 00597fd5
    MOVSD ES:EDI,ESI                    ; 00597fdb
    MOVSD ES:EDI,ESI                    ; 00597fdc
    MOVSD ES:EDI,ESI                    ; 00597fdd
    FLD float ptr [EBP + 0xfffffcae]    ; 00597fde
    FABS                                ; 00597fe4
    ADD ESP,0x4                         ; 00597fe6
    FCOMP double ptr [0x005ef1a2]       ; 00597fe9 | DAT_005ef1a2
    FNSTSW AX                           ; 00597fef
    SAHF                                ; 00597ff1
    JNC 0x00596bbb                      ; 00597ff2
        ;   XREF to: 00596bbb (CONDITIONAL_JUMP)  ; LAB_00596bbb
    PUSH 0x3f000000                     ; 00597ff8
    CALL core_actor.cpp_FUN_0040d060    ; 00597ffd
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040d060(float probability_threshold)
    MOV ESI,0x12                        ; 00598002
    ADD ESP,0x4                         ; 00598007
    TEST EAX,EAX                        ; 0059800a
    JZ 0x00598013                       ; 0059800c
        ;   XREF to: 00598013 (CONDITIONAL_JUMP)  ; LAB_00598013
    MOV ESI,0x13                        ; 0059800e
    PUSH 0x1                            ; 00598013
        ;   Label: LAB_00598013
    PUSH ESI                            ; 00598015
    LEA EAX,[EBX + 0x2b4]               ; 00598016
    PUSH EAX                            ; 0059801c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0059801d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBP + 0x46]      ; 00598022
    ADD ESP,0xc                         ; 00598025
    MOV dword ptr [EBX + 0x10b14],EAX   ; 00598028
    JMP 0x00596bbb                      ; 0059802e
        ;   XREF to: 00596bbb (UNCONDITIONAL_JUMP)  ; LAB_00596bbb
    MOV ECX,dword ptr [EBX + 0x10bb0]   ; 00598033
        ;   Label: LAB_00598033
    PUSH 0x3f000000                     ; 00598039
    PUSH ECX                            ; 0059803e
    JMP 0x00596caf                      ; 0059803f
        ;   XREF to: 00596caf (UNCONDITIONAL_JUMP)  ; LAB_00596caf
    MOV EAX,dword ptr [EBX + 0x10bc8]   ; 00598044
        ;   Label: LAB_00598044
    SHL EAX,0x2                         ; 0059804a
    ADD EAX,EBX                         ; 0059804d
    CMP dword ptr [EAX + 0x23f4],0x0    ; 0059804f
    JZ 0x00596cc6                       ; 00598056
        ;   XREF to: 00596cc6 (CONDITIONAL_JUMP)  ; LAB_00596cc6
    MOV dword ptr [EAX + 0x23f4],0x0    ; 0059805c
    MOV ESI,dword ptr [EBX + 0x10bb0]   ; 00598066
    PUSH 0x3e4ccccd                     ; 0059806c
    PUSH ESI                            ; 00598071
    MOV EDI,dword ptr [EBX + 0x10bc8]   ; 00598072
    PUSH EDI                            ; 00598078
    PUSH EBX                            ; 00598079
    CALL core_charactr.cpp_FUN_00427060 ; 0059807a
        ;   XREF to: 00427060 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427060()
    MOV EAX,dword ptr [EBX + 0x10bc8]   ; 0059807f
    ADD ESP,0x10                        ; 00598085
    MOV dword ptr [EBX + EAX*0x4 + 0x23f4],0x1 ; 00598088
    JMP 0x00596cc6                      ; 00598093
        ;   XREF to: 00596cc6 (UNCONDITIONAL_JUMP)  ; LAB_00596cc6

