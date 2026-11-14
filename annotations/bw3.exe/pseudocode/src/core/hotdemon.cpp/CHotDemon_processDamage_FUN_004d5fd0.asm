; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hotdemon_cpp_CHotDemon_processDamage_FUN_004d5fd0(CHotDemon *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_hotdemon_die_wav_005c53f6
;   TerminatedCString s_hotdemon_hurt_wav_005c5407
;   undefined4 DAT_005c5421
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_enemy.cpp_CEnemy_processDamage_FUN_00489b80
;   core_enemy.cpp_FUN_0048a1b0
;   core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   sound_sndmain.cpp_isSfxPlaying_FUN_00556700
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d5fd0
        ;   Label: core_hotdemon.cpp_CHotDemon_processDamage_FUN_004d5fd0
    PUSH EBP                            ; 004d5fd1
    SUB ESP,0x20                        ; 004d5fd2
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004d5fd5
    MOV EDX,dword ptr [EBP + 0xd054]    ; 004d5fd9
    PUSH EDX                            ; 004d5fdf
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 004d5fe0
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 004d5fe5
    MOV EAX,dword ptr [ESP + 0x30]      ; 004d5fe8
    CMP dword ptr [EAX + 0x28],0x8      ; 004d5fec
    JZ 0x004d6083                       ; 004d5ff0
        ;   XREF to: 004d6083 (CONDITIONAL_JUMP)  ; LAB_004d6083
    MOV EAX,dword ptr [ESP + 0x30]      ; 004d5ff6
        ;   Label: LAB_004d5ff6
    FLD float ptr [EAX + 0x4]           ; 004d5ffa
    FSUBR float ptr [EBP + 0x2538]      ; 004d5ffd
    LEA EBX,[EBP + 0x158]               ; 004d6003
    FST float ptr [EBP + 0x2538]        ; 004d6009
    FLDZ                                ; 004d600f
    FCOMPP                              ; 004d6011
    FNSTSW AX                           ; 004d6013
    SAHF                                ; 004d6015
    JNC 0x004d60e7                      ; 004d6016
        ;   XREF to: 004d60e7 (CONDITIONAL_JUMP)  ; LAB_004d60e7
    MOV EAX,dword ptr [ESP + 0x30]      ; 004d601c
    PUSH dword ptr [EAX + 0x4]          ; 004d6020
    PUSH EBP                            ; 004d6023
    CALL core_enemy.cpp_FUN_0048a1b0    ; 004d6024
        ;   XREF to: 0048a1b0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_0048a1b0()
    ADD ESP,0x8                         ; 004d6029
    TEST EAX,EAX                        ; 004d602c
    JZ 0x004d6058                       ; 004d602e
        ;   XREF to: 004d6058 (CONDITIONAL_JUMP)  ; LAB_004d6058
    PUSH EBX                            ; 004d6030
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004d6031
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d6036
    ADD ESP,0x4                         ; 004d6039
    CMP EAX,0x6                         ; 004d603c
    JGE 0x004d6174                      ; 004d603f
        ;   XREF to: 004d6174 (CONDITIONAL_JUMP)  ; LAB_004d6174
    PUSH 0x1                            ; 004d6045
        ;   Label: LAB_004d6045
    PUSH 0x3                            ; 004d6047
    LEA EAX,[EBP + 0x158]               ; 004d6049
    PUSH EAX                            ; 004d604f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d6050
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004d6050
    ADD ESP,0xc                         ; 004d6055
    MOV EAX,dword ptr [EBP + 0xd058]    ; 004d6058
        ;   Label: LAB_004d6058
    PUSH EAX                            ; 004d605e
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 004d605f
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004d6064
    TEST EAX,EAX                        ; 004d6067
    JZ 0x004d6187                       ; 004d6069
        ;   XREF to: 004d6187 (CONDITIONAL_JUMP)  ; LAB_004d6187
    MOV ECX,dword ptr [ESP + 0x30]      ; 004d606f
        ;   Label: LAB_004d606f
    PUSH ECX                            ; 004d6073
    PUSH EBP                            ; 004d6074
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 004d6075
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004d607a
    ADD ESP,0x20                        ; 004d607d
    POP EBP                             ; 004d6080
    POP EBX                             ; 004d6081
    RET                                 ; 004d6082
    PUSH EDI                            ; 004d6083
        ;   Label: LAB_004d6083
    PUSH ESI                            ; 004d6084
    FLD float ptr [EAX + 0x4]           ; 004d6085
    ADD EAX,0x1c                        ; 004d6088
    FLD ST0                             ; 004d608b
    FMUL double ptr [0x005c5421]        ; 004d608d | DAT_005c5421
    PUSH EAX                            ; 004d6093
    LEA ESI,[ESP + 0x18]                ; 004d6094
    LEA EDI,[ESP + 0xc]                 ; 004d6098
    PUSH EBP                            ; 004d609c
    FSTP ST1                            ; 004d609d
    FSTP float ptr [EAX + -0x18]        ; 004d609f
    CALL core_actor.cpp_FUN_00408b80    ; 004d60a2
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x1c]                ; 004d60a7
    ADD ESP,0x8                         ; 004d60ab
    XOR EBX,EBX                         ; 004d60ae
    MOVSD ES:EDI,ESI                    ; 004d60b0
    MOVSD ES:EDI,ESI                    ; 004d60b1
    MOVSD ES:EDI,ESI                    ; 004d60b2
    XOR ESI,ESI                         ; 004d60b3
    PUSH 0xffff                         ; 004d60b5
        ;   Label: LAB_004d60b5
    PUSH ESI                            ; 004d60ba
    PUSH 0x4000                         ; 004d60bb
    PUSH 0x4000                         ; 004d60c0
    PUSH ESI                            ; 004d60c5
    LEA EAX,[ESP + 0x1c]                ; 004d60c6
    PUSH EAX                            ; 004d60ca
    MOV EDI,dword ptr [0x005fc5a0]      ; 004d60cb | DAT_005fc5a0
    PUSH EDI                            ; 004d60d1
    INC EBX                             ; 004d60d2
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0 ; 004d60d3
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004d60d8
    CMP EBX,0x5                         ; 004d60db
    JL 0x004d60b5                       ; 004d60de
        ;   XREF to: 004d60b5 (CONDITIONAL_JUMP)  ; LAB_004d60b5
    POP ESI                             ; 004d60e0
    POP EDI                             ; 004d60e1
    JMP 0x004d5ff6                      ; 004d60e2
        ;   XREF to: 004d5ff6 (UNCONDITIONAL_JUMP)  ; LAB_004d5ff6
    PUSH EBX                            ; 004d60e7
        ;   Label: LAB_004d60e7
    MOV dword ptr [EBP + 0x2538],0x0    ; 004d60e8
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004d60f2
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d60f7
    ADD ESP,0x4                         ; 004d60fa
    CMP EAX,0x4                         ; 004d60fd
    JZ 0x004d606f                       ; 004d6100
        ;   XREF to: 004d606f (CONDITIONAL_JUMP)  ; LAB_004d606f
    CMP EAX,0x5                         ; 004d6106
    JZ 0x004d606f                       ; 004d6109
        ;   XREF to: 004d606f (CONDITIONAL_JUMP)  ; LAB_004d606f
    CMP EAX,0xa                         ; 004d610f
    JZ 0x004d606f                       ; 004d6112
        ;   XREF to: 004d606f (CONDITIONAL_JUMP)  ; LAB_004d606f
    CMP EAX,0xb                         ; 004d6118
    JZ 0x004d606f                       ; 004d611b
        ;   XREF to: 004d606f (CONDITIONAL_JUMP)  ; LAB_004d606f
    CMP EAX,0x6                         ; 004d6121
    JL 0x004d616e                       ; 004d6124
        ;   XREF to: 004d616e (CONDITIONAL_JUMP)  ; LAB_004d616e
    PUSH 0x1                            ; 004d6126
    PUSH 0xa                            ; 004d6128
    PUSH EBX                            ; 004d612a
        ;   Label: LAB_004d612a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004d612b
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d6130
    MOV EDX,dword ptr [EBP + 0xd058]    ; 004d6133
    PUSH EDX                            ; 004d6139
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 004d613a
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 004d613f
    PUSH 0x5c53f6                       ; 004d6142 | = "hotdemon-die.wav"
    MOV EAX,dword ptr [EBP + 0x154]     ; 004d6147
    PUSH EBP                            ; 004d614d
    CALL dword ptr [EAX + 0x2c]         ; 004d614e
    ADD ESP,0x8                         ; 004d6151
    MOV dword ptr [EBP + 0xd058],EAX    ; 004d6154
    MOV ECX,dword ptr [ESP + 0x30]      ; 004d615a
    PUSH ECX                            ; 004d615e
    PUSH EBP                            ; 004d615f
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 004d6160
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004d6165
    ADD ESP,0x20                        ; 004d6168
    POP EBP                             ; 004d616b
    POP EBX                             ; 004d616c
    RET                                 ; 004d616d
    PUSH 0x1                            ; 004d616e
        ;   Label: LAB_004d616e
    PUSH 0x4                            ; 004d6170
    JMP 0x004d612a                      ; 004d6172
        ;   XREF to: 004d612a (UNCONDITIONAL_JUMP)  ; LAB_004d612a
    CMP EAX,0xf                         ; 004d6174
        ;   Label: LAB_004d6174
    JZ 0x004d6045                       ; 004d6177
        ;   XREF to: 004d6045 (CONDITIONAL_JUMP)  ; LAB_004d6045
    PUSH 0x1                            ; 004d617d
    PUSH 0x9                            ; 004d617f
    PUSH EBX                            ; 004d6181
    JMP 0x004d6050                      ; 004d6182
        ;   XREF to: 004d6050 (UNCONDITIONAL_JUMP)  ; LAB_004d6050
    PUSH 0x5c5407                       ; 004d6187 | = "hotdemon-hurt?.wav"
        ;   Label: LAB_004d6187
    MOV EAX,dword ptr [EBP + 0x154]     ; 004d618c
    PUSH EBP                            ; 004d6192
    CALL dword ptr [EAX + 0x2c]         ; 004d6193
    ADD ESP,0x8                         ; 004d6196
    MOV dword ptr [EBP + 0xd058],EAX    ; 004d6199
    MOV ECX,dword ptr [ESP + 0x30]      ; 004d619f
    PUSH ECX                            ; 004d61a3
    PUSH EBP                            ; 004d61a4
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 004d61a5
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004d61aa
    ADD ESP,0x20                        ; 004d61ad
    POP EBP                             ; 004d61b0
    POP EBX                             ; 004d61b1
    RET                                 ; 004d61b2

