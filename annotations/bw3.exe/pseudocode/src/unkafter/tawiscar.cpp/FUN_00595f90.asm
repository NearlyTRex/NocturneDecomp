; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_tawiscar_cpp_FUN_00595f90(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_werewolf_die_wav_005d942c
;   TerminatedCString s_werewolf_hurt_wav_005d943e
;   undefined4 DAT_005d9451
;   undefined4 DAT_005d9459
;   undefined4 DAT_005d9461
;   undefined4 DAT_005fc5a0
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CDemonSetInstance.field1420892_0x15ae5c
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_enemy.cpp_FUN_00489b80
;   core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   sound_sndmain.cpp_FUN_00556700
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;   unkafter_tawiscar.cpp_FUN_00595710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00595f90
        ;   Label: unkafter_tawiscar.cpp_FUN_00595f90
    PUSH ESI                            ; 00595f91
    PUSH EDI                            ; 00595f92
    PUSH EBP                            ; 00595f93
    MOV EBP,ESP                         ; 00595f94
    SUB ESP,0x28                        ; 00595f96
    AND ESP,0xfffffff8                  ; 00595f99
    MOV EAX,dword ptr [EBP + 0x14]      ; 00595f9c
    MOV EDX,dword ptr [EAX + 0xd070]    ; 00595f9f
    PUSH EDX                            ; 00595fa5
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 00595fa6
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 00595fab
    MOV EAX,dword ptr [EBP + 0x18]      ; 00595fae
    CMP dword ptr [EAX + 0x30],0x6c     ; 00595fb1
    JZ 0x005960d4                       ; 00595fb5
        ;   XREF to: 005960d4 (CONDITIONAL_JUMP)  ; LAB_005960d4
    CMP dword ptr [EAX + 0x28],0x3      ; 00595fbb
    JZ 0x00596107                       ; 00595fbf
        ;   XREF to: 00596107 (CONDITIONAL_JUMP)  ; LAB_00596107
    LEA EAX,[EAX]                       ; 00595fc5
    LEA EDX,[EDX]                       ; 00595fcb
    MOV EBX,EBX                         ; 00595fce
    MOV EAX,dword ptr [EBP + 0x18]      ; 00595fd0
        ;   Label: LAB_00595fd0
    FLD float ptr [EAX + 0x4]           ; 00595fd3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00595fd6
    FSUBR float ptr [EAX + 0x2538]      ; 00595fd9
    LEA EBX,[EAX + 0x158]               ; 00595fdf
    FST float ptr [EAX + 0x2538]        ; 00595fe5
    FLDZ                                ; 00595feb
    FCOMPP                              ; 00595fed
    FNSTSW AX                           ; 00595fef
    SAHF                                ; 00595ff1
    JC 0x00596188                       ; 00595ff2
        ;   XREF to: 00596188 (CONDITIONAL_JUMP)  ; LAB_00596188
    MOV EAX,dword ptr [EBP + 0x14]      ; 00595ff8
    MOV dword ptr [EAX + 0x2540],0x0    ; 00595ffb
    PUSH EBX                            ; 00596005
    MOV dword ptr [EAX + 0x2538],0x0    ; 00596006
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00596010
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00596015
    ADD ESP,0x4                         ; 00596018
    CMP EAX,0xd                         ; 0059601b
    JZ 0x005960bd                       ; 0059601e
        ;   XREF to: 005960bd (CONDITIONAL_JUMP)  ; LAB_005960bd
    CMP EAX,0xc                         ; 00596024
    JZ 0x005960bd                       ; 00596027
        ;   XREF to: 005960bd (CONDITIONAL_JUMP)  ; LAB_005960bd
    PUSH 0x1                            ; 0059602d
    PUSH 0xc                            ; 0059602f
    PUSH EBX                            ; 00596031
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00596032
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00596037
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059603a
    CMP dword ptr [EAX + 0xd054],0x0    ; 0059603d
    JNZ 0x00596076                      ; 00596044
        ;   XREF to: 00596076 (CONDITIONAL_JUMP)  ; LAB_00596076
    MOV EAX,[0x00603b28]                ; 00596046 | g_CDemonSetPtr
    CMP dword ptr [EAX + 0x15ae5c],0x0  ; 0059604b | g_CDemonSetInstance.field1420892_0x15ae5c
    JZ 0x00596076                       ; 00596052
        ;   XREF to: 00596076 (CONDITIONAL_JUMP)  ; LAB_00596076
    MOV EAX,dword ptr [EBP + 0x14]      ; 00596054
    FLD float ptr [EAX + 0x20]          ; 00596057
    FST double ptr [ESP]                ; 0059605a
    FCOMP double ptr [0x005d9459]       ; 0059605d | DAT_005d9459
    FNSTSW AX                           ; 00596063
    SAHF                                ; 00596065
    JBE 0x00596167                      ; 00596066
        ;   XREF to: 00596167 (CONDITIONAL_JUMP)  ; LAB_00596167
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059606c
    MOV dword ptr [EAX + 0x34],0xbfc90fdb ; 0059606f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00596076
        ;   Label: LAB_00596076
    MOV ESI,dword ptr [EAX + 0xd078]    ; 00596079
    PUSH ESI                            ; 0059607f
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 00596080
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 00596085
    PUSH 0x5d942c                       ; 00596088 | = "werewolf-die?.wav"
    MOV EDI,dword ptr [EBP + 0x14]      ; 0059608d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00596090
    PUSH EDI                            ; 00596093
    MOV EAX,dword ptr [EAX + 0x154]     ; 00596094
    CALL dword ptr [EAX + 0x2c]         ; 0059609a
    ADD ESP,0x8                         ; 0059609d
    PUSH 0x41c80000                     ; 005960a0
    MOV dword ptr [EDI + 0xd078],EAX    ; 005960a5
    PUSH 0x32                           ; 005960ab
    MOV EAX,dword ptr [EDI + 0x154]     ; 005960ad
    PUSH EDI                            ; 005960b3
    CALL dword ptr [EAX + 0xa8]         ; 005960b4
    ADD ESP,0xc                         ; 005960ba
    MOV ECX,dword ptr [EBP + 0x18]      ; 005960bd
        ;   Label: LAB_005960bd
    PUSH ECX                            ; 005960c0
    MOV EBX,dword ptr [EBP + 0x14]      ; 005960c1
    PUSH EBX                            ; 005960c4
    CALL core_enemy.cpp_FUN_00489b80    ; 005960c5
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489b80()
    ADD ESP,0x8                         ; 005960ca
    MOV ESP,EBP                         ; 005960cd
    POP EBP                             ; 005960cf
    POP EDI                             ; 005960d0
    POP ESI                             ; 005960d1
    POP EBX                             ; 005960d2
    RET                                 ; 005960d3
    MOV EDI,dword ptr [EBP + 0x14]      ; 005960d4
        ;   Label: LAB_005960d4
    PUSH EDI                            ; 005960d7
    CALL unkafter_tawiscar.cpp_FUN_00595710 ; 005960d8
        ;   XREF to: 00595710 (UNCONDITIONAL_CALL)  ; undefined unkafter_tawiscar.cpp_FUN_00595710()
    ADD ESP,0x4                         ; 005960dd
    PUSH 0x1                            ; 005960e0
    PUSH 0x16                           ; 005960e2
    LEA EAX,[EDI + 0x158]               ; 005960e4
    PUSH EAX                            ; 005960ea
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005960eb
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005960f0
    MOV EAX,dword ptr [EBP + 0x18]      ; 005960f3
    PUSH EAX                            ; 005960f6
    PUSH EDI                            ; 005960f7
    CALL core_enemy.cpp_FUN_00489b80    ; 005960f8
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489b80()
    ADD ESP,0x8                         ; 005960fd
    MOV ESP,EBP                         ; 00596100
    POP EBP                             ; 00596102
    POP EDI                             ; 00596103
    POP ESI                             ; 00596104
    POP EBX                             ; 00596105
    RET                                 ; 00596106
    FLD float ptr [EAX + 0x4]           ; 00596107
        ;   Label: LAB_00596107
    ADD EAX,0x1c                        ; 0059610a
    FLD ST0                             ; 0059610d
    FMUL double ptr [0x005d9451]        ; 0059610f | DAT_005d9451
    PUSH EAX                            ; 00596115
    MOV ESI,dword ptr [EBP + 0x14]      ; 00596116
    LEA EDI,[ESP + 0xc]                 ; 00596119
    PUSH ESI                            ; 0059611d
    FSTP ST1                            ; 0059611e
    LEA ESI,[ESP + 0x1c]                ; 00596120
    FSTP float ptr [EAX + -0x18]        ; 00596124
    CALL core_actor.cpp_FUN_00408b80    ; 00596127
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x1c]                ; 0059612c
    ADD ESP,0x8                         ; 00596130
    XOR EBX,EBX                         ; 00596133
    MOVSD ES:EDI,ESI                    ; 00596135
    MOVSD ES:EDI,ESI                    ; 00596136
    MOVSD ES:EDI,ESI                    ; 00596137
    MOV ESI,0x4000                      ; 00596138
    PUSH 0xffff                         ; 0059613d
        ;   Label: LAB_0059613d
    PUSH 0x0                            ; 00596142
    PUSH ESI                            ; 00596144
    PUSH ESI                            ; 00596145
    PUSH 0x0                            ; 00596146
    LEA EAX,[ESP + 0x1c]                ; 00596148
    PUSH EAX                            ; 0059614c
    MOV ECX,dword ptr [0x005fc5a0]      ; 0059614d | DAT_005fc5a0
    PUSH ECX                            ; 00596153
    INC EBX                             ; 00596154
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0 ; 00596155
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 0059615a
    CMP EBX,0x5                         ; 0059615d
    JL 0x0059613d                       ; 00596160
        ;   XREF to: 0059613d (CONDITIONAL_JUMP)  ; LAB_0059613d
    JMP 0x00595fd0                      ; 00596162
        ;   XREF to: 00595fd0 (UNCONDITIONAL_JUMP)  ; LAB_00595fd0
    FLD double ptr [ESP]                ; 00596167
        ;   Label: LAB_00596167
    FCOMP double ptr [0x005d9461]       ; 0059616a | DAT_005d9461
    FNSTSW AX                           ; 00596170
    SAHF                                ; 00596172
    JNC 0x00596076                      ; 00596173
        ;   XREF to: 00596076 (CONDITIONAL_JUMP)  ; LAB_00596076
    MOV EAX,dword ptr [EBP + 0x14]      ; 00596179
    MOV dword ptr [EAX + 0x34],0x3fc90fdb ; 0059617c
    JMP 0x00596076                      ; 00596183
        ;   XREF to: 00596076 (UNCONDITIONAL_JUMP)  ; LAB_00596076
    MOV EAX,dword ptr [EBP + 0x14]      ; 00596188
        ;   Label: LAB_00596188
    CMP dword ptr [EAX + 0xd054],0x2    ; 0059618b
    JZ 0x00596203                       ; 00596192
        ;   XREF to: 00596203 (CONDITIONAL_JUMP)  ; LAB_00596203
    PUSH EBX                            ; 00596194
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00596195
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0059619a
    ADD ESP,0x4                         ; 0059619d
    CMP EAX,0xe                         ; 005961a0
    JNZ 0x00596243                      ; 005961a3
        ;   XREF to: 00596243 (CONDITIONAL_JUMP)  ; LAB_00596243
    PUSH 0x2                            ; 005961a9
        ;   Label: LAB_005961a9
    PUSH 0x0                            ; 005961ab
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 005961ad
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 005961b2
    MOV EBX,EAX                         ; 005961b5
    TEST EAX,EAX                        ; 005961b7
    JNZ 0x005961d0                      ; 005961b9
        ;   XREF to: 005961d0 (CONDITIONAL_JUMP)  ; LAB_005961d0
    PUSH 0x1                            ; 005961bb
    MOV EAX,dword ptr [EBP + 0x14]      ; 005961bd
    PUSH 0x9                            ; 005961c0
    ADD EAX,0x158                       ; 005961c2
    PUSH EAX                            ; 005961c7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005961c8
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005961cd
    CMP EBX,0x1                         ; 005961d0
        ;   Label: LAB_005961d0
    JNZ 0x005961e9                      ; 005961d3
        ;   XREF to: 005961e9 (CONDITIONAL_JUMP)  ; LAB_005961e9
    PUSH EBX                            ; 005961d5
    MOV EAX,dword ptr [EBP + 0x14]      ; 005961d6
    PUSH 0xa                            ; 005961d9
    ADD EAX,0x158                       ; 005961db
    PUSH EAX                            ; 005961e0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005961e1
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005961e6
    CMP EBX,0x2                         ; 005961e9
        ;   Label: LAB_005961e9
    JNZ 0x00596203                      ; 005961ec
        ;   XREF to: 00596203 (CONDITIONAL_JUMP)  ; LAB_00596203
    PUSH 0x1                            ; 005961ee
    MOV EAX,dword ptr [EBP + 0x14]      ; 005961f0
    PUSH 0xb                            ; 005961f3
    ADD EAX,0x158                       ; 005961f5
        ;   Label: LAB_005961f5
    PUSH EAX                            ; 005961fa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005961fb
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00596200
    MOV EAX,dword ptr [EBP + 0x14]      ; 00596203
        ;   Label: LAB_00596203
    MOV EDI,dword ptr [EAX + 0xd078]    ; 00596206
    PUSH EDI                            ; 0059620c
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059620d
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00596212
    TEST EAX,EAX                        ; 00596215
    JNZ 0x005960bd                      ; 00596217
        ;   XREF to: 005960bd (CONDITIONAL_JUMP)  ; LAB_005960bd
    PUSH 0x5d943e                       ; 0059621d | = "werewolf-hurt?.wav"
    MOV EDX,dword ptr [EBP + 0x14]      ; 00596222
    MOV EAX,dword ptr [EBP + 0x14]      ; 00596225
    PUSH EDX                            ; 00596228
    MOV EAX,dword ptr [EAX + 0x154]     ; 00596229
    CALL dword ptr [EAX + 0x2c]         ; 0059622f
    ADD ESP,0x8                         ; 00596232
    MOV EBX,dword ptr [EBP + 0x14]      ; 00596235
    MOV dword ptr [EBX + 0xd078],EAX    ; 00596238
    JMP 0x005960bd                      ; 0059623e
        ;   XREF to: 005960bd (UNCONDITIONAL_JUMP)  ; LAB_005960bd
    CMP EAX,0xf                         ; 00596243
        ;   Label: LAB_00596243
    JZ 0x005961a9                       ; 00596246
        ;   XREF to: 005961a9 (CONDITIONAL_JUMP)  ; LAB_005961a9
    TEST EAX,EAX                        ; 0059624c
    JNZ 0x005962a5                      ; 0059624e
        ;   XREF to: 005962a5 (CONDITIONAL_JUMP)  ; LAB_005962a5
    PUSH 0x2                            ; 00596250
        ;   Label: LAB_00596250
    PUSH 0x0                            ; 00596252
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00596254
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00596259
    MOV EBX,EAX                         ; 0059625c
    TEST EAX,EAX                        ; 0059625e
    JNZ 0x00596277                      ; 00596260
        ;   XREF to: 00596277 (CONDITIONAL_JUMP)  ; LAB_00596277
    PUSH 0x1                            ; 00596262
    MOV EAX,dword ptr [EBP + 0x14]      ; 00596264
    PUSH 0x10                           ; 00596267
    ADD EAX,0x158                       ; 00596269
    PUSH EAX                            ; 0059626e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0059626f
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00596274
    CMP EBX,0x1                         ; 00596277
        ;   Label: LAB_00596277
    JNZ 0x00596290                      ; 0059627a
        ;   XREF to: 00596290 (CONDITIONAL_JUMP)  ; LAB_00596290
    PUSH EBX                            ; 0059627c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059627d
    PUSH 0x11                           ; 00596280
    ADD EAX,0x158                       ; 00596282
    PUSH EAX                            ; 00596287
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00596288
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059628d
    CMP EBX,0x2                         ; 00596290
        ;   Label: LAB_00596290
    JNZ 0x00596203                      ; 00596293
        ;   XREF to: 00596203 (CONDITIONAL_JUMP)  ; LAB_00596203
    PUSH 0x1                            ; 00596299
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059629b
    PUSH 0x12                           ; 0059629e
    JMP 0x005961f5                      ; 005962a0
        ;   XREF to: 005961f5 (UNCONDITIONAL_JUMP)  ; LAB_005961f5
    CMP EAX,0x1                         ; 005962a5
        ;   Label: LAB_005962a5
    JZ 0x00596250                       ; 005962a8
        ;   XREF to: 00596250 (CONDITIONAL_JUMP)  ; LAB_00596250
    CMP EAX,0x2                         ; 005962aa
    JZ 0x00596250                       ; 005962ad
        ;   XREF to: 00596250 (CONDITIONAL_JUMP)  ; LAB_00596250
    CMP EAX,0x13                        ; 005962af
    JZ 0x00596250                       ; 005962b2
        ;   XREF to: 00596250 (CONDITIONAL_JUMP)  ; LAB_00596250
    CMP EAX,0x3                         ; 005962b4
    JZ 0x00596250                       ; 005962b7
        ;   XREF to: 00596250 (CONDITIONAL_JUMP)  ; LAB_00596250
    CMP EAX,0x4                         ; 005962b9
    JZ 0x00596250                       ; 005962bc
        ;   XREF to: 00596250 (CONDITIONAL_JUMP)  ; LAB_00596250
    JMP 0x00596203                      ; 005962be
        ;   XREF to: 00596203 (UNCONDITIONAL_JUMP)  ; LAB_00596203

