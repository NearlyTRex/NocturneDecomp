; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_drone_cpp_CDrone_processDamage_FUN_00463150(int param_1,int param_2)
;
;
; Referenced Globals:
;   string s_drone-die?.wav_0057df57
;   string s_drone-hurt?.wav_0057df66
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;   sound_sndmain.cpp_killSfx_FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463150
        ;   Label: core_drone.cpp_CDrone_processDamage_FUN_00463150
    PUSH ESI                            ; 00463151
    PUSH EDI                            ; 00463152
    PUSH EBP                            ; 00463153
    MOV EBX,dword ptr [ESP + 0x14]      ; 00463154
    MOV EDX,dword ptr [EBX + 0xbd38]    ; 00463158
    PUSH EDX                            ; 0046315e
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 0046315f
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 00463164
    MOV ECX,dword ptr [EBX + 0xbd34]    ; 00463167
    PUSH ECX                            ; 0046316d
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 0046316e
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 00463173
    MOV EAX,dword ptr [ESP + 0x18]      ; 00463176
    FLD float ptr [EAX + 0x4]           ; 0046317a
    FSUBR float ptr [EBX + 0x2434]      ; 0046317d
    FST float ptr [EBX + 0x2434]        ; 00463183
    FLDZ                                ; 00463189
    FCOMPP                              ; 0046318b
    FNSTSW AX                           ; 0046318d
    SAHF                                ; 0046318f
    JC 0x00463212                       ; 00463190
        ;   XREF to: 00463212 (CONDITIONAL_JUMP)  ; LAB_00463212
    LEA ESI,[EBX + 0x150]               ; 00463196
    PUSH ESI                            ; 0046319c
    MOV dword ptr [EBX + 0x2434],0x0    ; 0046319d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004631a7
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004631ac
    ADD ESP,0x4                         ; 004631af
    CMP EAX,0x8                         ; 004631b2
    JZ 0x004631c9                       ; 004631b5
        ;   XREF to: 004631c9 (CONDITIONAL_JUMP)  ; LAB_004631c9
    CMP EAX,0x7                         ; 004631b7
    JZ 0x004631c9                       ; 004631ba
        ;   XREF to: 004631c9 (CONDITIONAL_JUMP)  ; LAB_004631c9
    PUSH 0x1                            ; 004631bc
    PUSH 0x7                            ; 004631be
    PUSH ESI                            ; 004631c0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004631c1
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004631c6
    MOV EBP,dword ptr [EBX + 0xbd30]    ; 004631c9
        ;   Label: LAB_004631c9
    PUSH EBP                            ; 004631cf
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 004631d0
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 004631d5
    MOV EAX,dword ptr [EBX + 0xbd34]    ; 004631d8
    PUSH EAX                            ; 004631de
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 004631df
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 004631e4
    PUSH 0x57df57                       ; 004631e7 | = "drone-die?.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004631ec
    PUSH EBX                            ; 004631f2
    CALL dword ptr [EAX + 0x24]         ; 004631f3
    ADD ESP,0x8                         ; 004631f6
    MOV dword ptr [EBX + 0xbd30],EAX    ; 004631f9
    MOV EDX,dword ptr [ESP + 0x18]      ; 004631ff
        ;   Label: LAB_004631ff
    PUSH EDX                            ; 00463203
    PUSH EBX                            ; 00463204
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 00463205
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_processDamage_FUN_00479f70()
    ADD ESP,0x8                         ; 0046320a
    POP EBP                             ; 0046320d
    POP EDI                             ; 0046320e
    POP ESI                             ; 0046320f
    POP EBX                             ; 00463210
    RET                                 ; 00463211
    MOV ESI,dword ptr [EBX + 0xbd34]    ; 00463212
        ;   Label: LAB_00463212
    PUSH ESI                            ; 00463218
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00463219
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 0046321e
    MOV EDI,dword ptr [EBX + 0xbd30]    ; 00463221
    PUSH EDI                            ; 00463227
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00463228
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 0046322d
    TEST EAX,EAX                        ; 00463230
    JZ 0x0046329b                       ; 00463232
        ;   XREF to: 0046329b (CONDITIONAL_JUMP)  ; LAB_0046329b
    PUSH 0x2                            ; 00463234
        ;   Label: LAB_00463234
    PUSH 0x0                            ; 00463236
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 00463238
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomInt_FUN_0040de00()
    ADD ESP,0x8                         ; 0046323d
    MOV ESI,EAX                         ; 00463240
    TEST EAX,EAX                        ; 00463242
    JNZ 0x00463259                      ; 00463244
        ;   XREF to: 00463259 (CONDITIONAL_JUMP)  ; LAB_00463259
    PUSH 0x1                            ; 00463246
    PUSH 0x3                            ; 00463248
    LEA EAX,[EBX + 0x150]               ; 0046324a
    PUSH EAX                            ; 00463250
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00463251
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00463256
    CMP ESI,0x1                         ; 00463259
        ;   Label: LAB_00463259
    JNZ 0x00463270                      ; 0046325c
        ;   XREF to: 00463270 (CONDITIONAL_JUMP)  ; LAB_00463270
    PUSH ESI                            ; 0046325e
    PUSH 0x4                            ; 0046325f
    LEA EAX,[EBX + 0x150]               ; 00463261
    PUSH EAX                            ; 00463267
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00463268
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0046326d
    CMP ESI,0x2                         ; 00463270
        ;   Label: LAB_00463270
    JNZ 0x004631ff                      ; 00463273
        ;   XREF to: 004631ff (CONDITIONAL_JUMP)  ; LAB_004631ff
    PUSH 0x1                            ; 00463275
    PUSH 0x5                            ; 00463277
    LEA EAX,[EBX + 0x150]               ; 00463279
    PUSH EAX                            ; 0046327f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00463280
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00463285
    MOV EDX,dword ptr [ESP + 0x18]      ; 00463288
    PUSH EDX                            ; 0046328c
    PUSH EBX                            ; 0046328d
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 0046328e
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_processDamage_FUN_00479f70()
    ADD ESP,0x8                         ; 00463293
    POP EBP                             ; 00463296
    POP EDI                             ; 00463297
    POP ESI                             ; 00463298
    POP EBX                             ; 00463299
    RET                                 ; 0046329a
    PUSH 0x57df66                       ; 0046329b | = "drone-hurt?.wav"
        ;   Label: LAB_0046329b
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004632a0
    PUSH EBX                            ; 004632a6
    CALL dword ptr [EAX + 0x24]         ; 004632a7
    ADD ESP,0x8                         ; 004632aa
    MOV dword ptr [EBX + 0xbd30],EAX    ; 004632ad
    JMP 0x00463234                      ; 004632b3
        ;   XREF to: 00463234 (UNCONDITIONAL_JUMP)  ; LAB_00463234

