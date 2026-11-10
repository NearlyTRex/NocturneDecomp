; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_processDamage_FUN_00500080(CMobster *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 s_mobster_die_wav_005deef4+1
;   TerminatedCString s_mobster_hit_wav_005def07
;   undefined4 g_CTommyGunClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_randomChance_FUN_0040d060
;   core_enemy.cpp_CEnemy_processDamage_FUN_00488890
;   core_mobster.cpp_CMobster_processDismemberment_FUN_004ffcc0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   sound_sndmain.cpp_FUN_00550b70
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00500080
        ;   Label: core_mobster.cpp_CMobster_processDamage_FUN_00500080
    PUSH ESI                            ; 00500081
    PUSH EDI                            ; 00500082
    PUSH EBP                            ; 00500083
    MOV EBX,dword ptr [ESP + 0x14]      ; 00500084
    MOV EDI,dword ptr [ESP + 0x18]      ; 00500088
    MOV EDX,dword ptr [EBX + 0x10b98]   ; 0050008c
    PUSH EDX                            ; 00500092
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 00500093
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 00500098
    MOV ECX,dword ptr [EBX + 0x10b90]   ; 0050009b
    PUSH ECX                            ; 005000a1
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 005000a2
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 005000a7
    PUSH EDI                            ; 005000aa
    PUSH EBX                            ; 005000ab
    CALL core_mobster.cpp_CMobster_processDismemberment_FUN_004ffcc0 ; 005000ac
        ;   XREF to: 004ffcc0 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_processDismemberment_FUN_004ffcc0(CMobster * this_ptr, SDamageInfo * damage_info)
    MOV EAX,dword ptr [EBX + 0x10ba0]   ; 005000b1
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 005000b7
    ADD ESP,0x8                         ; 005000be
    TEST ESI,ESI                        ; 005000c1
    JNZ 0x005000dc                      ; 005000c3
        ;   XREF to: 005000dc (CONDITIONAL_JUMP)  ; LAB_005000dc
    MOV EAX,dword ptr [EBX + 0x10ba8]   ; 005000c5
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 005000cb
    JNZ 0x005000dc                      ; 005000d3
        ;   XREF to: 005000dc (CONDITIONAL_JUMP)  ; LAB_005000dc
    MOV dword ptr [EDI + 0x4],0x461c3f9a ; 005000d5
    FLD float ptr [EDI + 0x4]           ; 005000dc
        ;   Label: LAB_005000dc
    FSUBR float ptr [EBX + 0x25a8]      ; 005000df
    LEA ESI,[EBX + 0x2b4]               ; 005000e5
    FST float ptr [EBX + 0x25a8]        ; 005000eb
    FLDZ                                ; 005000f1
    FCOMPP                              ; 005000f3
    FNSTSW AX                           ; 005000f5
    SAHF                                ; 005000f7
    JNC 0x00500154                      ; 005000f8
        ;   XREF to: 00500154 (CONDITIONAL_JUMP)  ; LAB_00500154
    MOV EAX,[0x02653574]                ; 005000fa | g_CTommyGunClassInfo.name_hash
    PUSH EAX                            ; 005000ff
    MOV EDX,dword ptr [EDI + 0x34]      ; 00500100
    PUSH EDX                            ; 00500103
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00500104
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 00500109
    TEST EAX,EAX                        ; 0050010c
    JZ 0x00500121                       ; 0050010e
        ;   XREF to: 00500121 (CONDITIONAL_JUMP)  ; LAB_00500121
    PUSH 0x3f000000                     ; 00500110
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 00500115
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0050011a
    TEST EAX,EAX                        ; 0050011d
    JZ 0x0050012e                       ; 0050011f
        ;   XREF to: 0050012e (CONDITIONAL_JUMP)  ; LAB_0050012e
    PUSH 0x1                            ; 00500121
        ;   Label: LAB_00500121
    PUSH 0x3                            ; 00500123
    PUSH ESI                            ; 00500125
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00500126
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0050012b
    MOV ECX,dword ptr [EBX + 0x10b8c]   ; 0050012e
        ;   Label: LAB_0050012e
    PUSH ECX                            ; 00500134
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00500135
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0050013a
    TEST EAX,EAX                        ; 0050013d
    JZ 0x005001df                       ; 0050013f
        ;   XREF to: 005001df (CONDITIONAL_JUMP)  ; LAB_005001df
    PUSH EDI                            ; 00500145
        ;   Label: LAB_00500145
    PUSH EBX                            ; 00500146
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 00500147
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0050014c
    POP EBP                             ; 0050014f
    POP EDI                             ; 00500150
    POP ESI                             ; 00500151
    POP EBX                             ; 00500152
    RET                                 ; 00500153
    PUSH ESI                            ; 00500154
        ;   Label: LAB_00500154
    MOV dword ptr [EBX + 0x25a8],0x0    ; 00500155
    CALL core_motion.cpp_FUN_005035c0   ; 0050015f
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00500164
    ADD ESP,0x4                         ; 00500167
    CMP EAX,0x5                         ; 0050016a
    JZ 0x00500145                       ; 0050016d
        ;   XREF to: 00500145 (CONDITIONAL_JUMP)  ; LAB_00500145
    CMP EAX,0x4                         ; 0050016f
    JZ 0x00500145                       ; 00500172
        ;   XREF to: 00500145 (CONDITIONAL_JUMP)  ; LAB_00500145
    PUSH 0x1                            ; 00500174
    PUSH 0x4                            ; 00500176
    PUSH ESI                            ; 00500178
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00500179
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0050017e
    PUSH 0x0                            ; 00500181
    PUSH 0x1                            ; 00500183
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00500185
    PUSH EBX                            ; 0050018b
    CALL dword ptr [EAX + 0x130]        ; 0050018c
    MOV ESI,dword ptr [EBX + 0x10b94]   ; 00500192
    ADD ESP,0xc                         ; 00500198
    TEST ESI,ESI                        ; 0050019b
    JNZ 0x00500145                      ; 0050019d
        ;   XREF to: 00500145 (CONDITIONAL_JUMP)  ; LAB_00500145
    MOV EBP,dword ptr [EBX + 0x10b8c]   ; 0050019f
    PUSH EBP                            ; 005001a5
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 005001a6
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 005001ab
    PUSH 0x5deef5                       ; 005001ae | s_mobster_die_wav_005deef4+1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005001b3
    PUSH EBX                            ; 005001b9
    CALL dword ptr [EAX + 0x34]         ; 005001ba
    MOV dword ptr [EBX + 0x10b94],0x1   ; 005001bd
    ADD ESP,0x8                         ; 005001c7
    MOV dword ptr [EBX + 0x10b8c],EAX   ; 005001ca
    PUSH EDI                            ; 005001d0
    PUSH EBX                            ; 005001d1
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 005001d2
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005001d7
    POP EBP                             ; 005001da
    POP EDI                             ; 005001db
    POP ESI                             ; 005001dc
    POP EBX                             ; 005001dd
    RET                                 ; 005001de
    PUSH 0x5def07                       ; 005001df | = "mobster-hit-?.wav"
        ;   Label: LAB_005001df
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005001e4
    PUSH EBX                            ; 005001ea
    CALL dword ptr [EAX + 0x34]         ; 005001eb
    ADD ESP,0x8                         ; 005001ee
    MOV dword ptr [EBX + 0x10b8c],EAX   ; 005001f1
    PUSH EDI                            ; 005001f7
    PUSH EBX                            ; 005001f8
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 005001f9
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005001fe
    POP EBP                             ; 00500201
    POP EDI                             ; 00500202
    POP ESI                             ; 00500203
    POP EBX                             ; 00500204
    RET                                 ; 00500205

