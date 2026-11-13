; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_CDraculaBride_processDamage_FUN_00464f60(CDraculaBride *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 s_s_4_bride_launch_wav_005d11a2+2
;   TerminatedCString s_bride_die_wav_005d11b5
;   TerminatedCString s_bride_hurt_wav_005d11c4
;   undefined4 DAT_005d11d4
;   undefined4 DAT_00614d30
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_actor.cpp_randomChance_FUN_0040d060
;   core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70
;   core_dracbrid.cpp_CDraculaBride_checkHeartShot_FUN_00464f10
;   core_dracbrid.cpp_FUN_00465400
;   core_enemy.cpp_CEnemy_processDamage_FUN_00488890
;   core_fire.cpp_CFireEffect_createSpark_FUN_0049d090
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00464f60
        ;   Label: core_dracbrid.cpp_CDraculaBride_processDamage_FUN_00464f60
    PUSH ESI                            ; 00464f61
    PUSH EDI                            ; 00464f62
    PUSH EBP                            ; 00464f63
    SUB ESP,0x54                        ; 00464f64
    MOV EBP,dword ptr [ESP + 0x68]      ; 00464f67
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00464f6b
    XOR EDX,EDX                         ; 00464f6f
    MOV ECX,dword ptr [EAX + 0x28]      ; 00464f71
    MOV dword ptr [ESP + 0x50],EDX      ; 00464f74
    CMP ECX,0x7                         ; 00464f78
    JZ 0x004650a2                       ; 00464f7b
        ;   XREF to: 004650a2 (CONDITIONAL_JUMP)  ; LAB_004650a2
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00464f81
        ;   Label: LAB_00464f81
    CMP dword ptr [EAX + 0x30],0x68     ; 00464f85
    JNZ 0x00464f93                      ; 00464f89
        ;   XREF to: 00464f93 (CONDITIONAL_JUMP)  ; LAB_00464f93
    MOV dword ptr [ESP + 0x50],0x1      ; 00464f8b
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00464f93
        ;   Label: LAB_00464f93
    CMP dword ptr [EAX + 0x30],0x6c     ; 00464f97
    JNZ 0x00464ff1                      ; 00464f9b
        ;   XREF to: 00464ff1 (CONDITIONAL_JUMP)  ; LAB_00464ff1
    PUSH 0x0                            ; 00464f9d
    LEA EAX,[EBP + 0x2b4]               ; 00464f9f
    PUSH EAX                            ; 00464fa5
    LEA ESI,[ESP + 0x8]                 ; 00464fa6
    LEA EDI,[ESP + 0x44]                ; 00464faa
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 00464fae
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 00464fb3
    LEA EAX,[ESP + 0x3c]                ; 00464fb6
    MOV ESI,ESP                         ; 00464fba
    PUSH EAX                            ; 00464fbc
    MOVSD ES:EDI,ESI                    ; 00464fbd
    MOVSD ES:EDI,ESI                    ; 00464fbe
    MOVSD ES:EDI,ESI                    ; 00464fbf
    PUSH EBP                            ; 00464fc0
    LEA ESI,[ESP + 0x14]                ; 00464fc1
    CALL core_actor.cpp_FUN_00408d70    ; 00464fc5
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 00464fca
    PUSH 0x0                            ; 00464fcd
    PUSH 0x41200000                     ; 00464fcf
    PUSH 0x0                            ; 00464fd4
    PUSH 0x0                            ; 00464fd6
    LEA EAX,[ESP + 0x40]                ; 00464fd8
    PUSH EAX                            ; 00464fdc
    LEA EDI,[ESP + 0x44]                ; 00464fdd
    LEA ESI,[ESP + 0x20]                ; 00464fe1
    PUSH EBP                            ; 00464fe5
    MOVSD ES:EDI,ESI                    ; 00464fe6
    MOVSD ES:EDI,ESI                    ; 00464fe7
    MOVSD ES:EDI,ESI                    ; 00464fe8
    CALL core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70 ; 00464fe9
        ;   XREF to: 00426e70 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70(CCharacter * this_ptr, CVector3f * position, int fire_type, int flame_type, ...)
    ADD ESP,0x18                        ; 00464fee
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00464ff1
        ;   Label: LAB_00464ff1
    PUSH ESI                            ; 00464ff5
    PUSH EBP                            ; 00464ff6
    CALL core_dracbrid.cpp_CDraculaBride_checkHeartShot_FUN_00464f10 ; 00464ff7
        ;   XREF to: 00464f10 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_CDraculaBride_checkHeartShot_FUN_00464f10(CDraculaBride * this_ptr, SDamageInfo * damage_info)
    MOV EAX,ESI                         ; 00464ffc
    ADD ESP,0x8                         ; 00464ffe
    FLD float ptr [EAX + 0x4]           ; 00465001
    FSUBR float ptr [EBP + 0x25a8]      ; 00465004
    LEA EBX,[EBP + 0x2b4]               ; 0046500a
    FST float ptr [EBP + 0x25a8]        ; 00465010
    FLDZ                                ; 00465016
    FCOMPP                              ; 00465018
    FNSTSW AX                           ; 0046501a
    SAHF                                ; 0046501c
    JC 0x00465131                       ; 0046501d
        ;   XREF to: 00465131 (CONDITIONAL_JUMP)  ; LAB_00465131
    PUSH EBX                            ; 00465023
    MOV dword ptr [EBP + 0x25a8],0x0    ; 00465024
    CALL core_motion.cpp_FUN_005035c0   ; 0046502e
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00465033
    ADD ESP,0x4                         ; 00465036
    CMP EAX,0x11                        ; 00465039
    JZ 0x00465077                       ; 0046503c
        ;   XREF to: 00465077 (CONDITIONAL_JUMP)  ; LAB_00465077
    CMP EAX,0x10                        ; 0046503e
    JZ 0x00465077                       ; 00465041
        ;   XREF to: 00465077 (CONDITIONAL_JUMP)  ; LAB_00465077
    CMP EAX,0xa                         ; 00465043
    JZ 0x00465077                       ; 00465046
        ;   XREF to: 00465077 (CONDITIONAL_JUMP)  ; LAB_00465077
    CMP EAX,0x7                         ; 00465048
    JZ 0x00465077                       ; 0046504b
        ;   XREF to: 00465077 (CONDITIONAL_JUMP)  ; LAB_00465077
    CMP dword ptr [ESP + 0x50],0x0      ; 0046504d
    JZ 0x00465107                       ; 00465052
        ;   XREF to: 00465107 (CONDITIONAL_JUMP)  ; LAB_00465107
    PUSH 0x1                            ; 00465058
    PUSH 0x7                            ; 0046505a
    PUSH EBX                            ; 0046505c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0046505d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00465062
    PUSH 0x5d11a4                       ; 00465065 | s_s_4_bride_launch_wav_005d11a2+2
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 0046506a
    PUSH EBP                            ; 00465070
    CALL dword ptr [EAX + 0x38]         ; 00465071
    ADD ESP,0x8                         ; 00465074
    PUSH 0x3ecccccd                     ; 00465077
        ;   Label: LAB_00465077
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 0046507c
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 00465081
    TEST EAX,EAX                        ; 00465084
    JNZ 0x00465119                      ; 00465086
        ;   XREF to: 00465119 (CONDITIONAL_JUMP)  ; LAB_00465119
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0046508c
        ;   Label: LAB_0046508c
    PUSH EAX                            ; 00465090
    PUSH EBP                            ; 00465091
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 00465092
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00465097
    ADD ESP,0x54                        ; 0046509a
    POP EBP                             ; 0046509d
    POP EDI                             ; 0046509e
    POP ESI                             ; 0046509f
    POP EBX                             ; 004650a0
    RET                                 ; 004650a1
    FLD float ptr [EAX + 0x4]           ; 004650a2
        ;   Label: LAB_004650a2
    ADD EAX,0x1c                        ; 004650a5
    FLD ST0                             ; 004650a8
    FMUL double ptr [0x005d11d4]        ; 004650aa | DAT_005d11d4
    PUSH EAX                            ; 004650b0
    LEA ESI,[ESP + 0x28]                ; 004650b1
    LEA EDI,[ESP + 0x1c]                ; 004650b5
    PUSH EBP                            ; 004650b9
    FSTP ST1                            ; 004650ba
    FSTP float ptr [EAX + -0x18]        ; 004650bc
    CALL core_actor.cpp_FUN_00408d70    ; 004650bf
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x2c]                ; 004650c4
    ADD ESP,0x8                         ; 004650c8
    XOR EBX,EBX                         ; 004650cb
    MOVSD ES:EDI,ESI                    ; 004650cd
    MOVSD ES:EDI,ESI                    ; 004650ce
    MOVSD ES:EDI,ESI                    ; 004650cf
    MOV ESI,0x4000                      ; 004650d0
    PUSH 0xffff                         ; 004650d5
        ;   Label: LAB_004650d5
    PUSH 0x0                            ; 004650da
    PUSH ESI                            ; 004650dc
    PUSH ESI                            ; 004650dd
    PUSH 0x0                            ; 004650de
    LEA EAX,[ESP + 0x2c]                ; 004650e0
    PUSH EAX                            ; 004650e4
    MOV EDI,dword ptr [0x00614d30]      ; 004650e5 | DAT_00614d30
    PUSH EDI                            ; 004650eb
    INC EBX                             ; 004650ec
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0049d090 ; 004650ed
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0049d090(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004650f2
    CMP EBX,0x5                         ; 004650f5
    JL 0x004650d5                       ; 004650f8
        ;   XREF to: 004650d5 (CONDITIONAL_JUMP)  ; LAB_004650d5
    MOV dword ptr [ESP + 0x50],0x1      ; 004650fa
    JMP 0x00464f81                      ; 00465102
        ;   XREF to: 00464f81 (UNCONDITIONAL_JUMP)  ; LAB_00464f81
    PUSH 0x1                            ; 00465107
        ;   Label: LAB_00465107
    PUSH 0xa                            ; 00465109
    PUSH EBX                            ; 0046510b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0046510c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00465111
    JMP 0x00465077                      ; 00465114
        ;   XREF to: 00465077 (UNCONDITIONAL_JUMP)  ; LAB_00465077
    PUSH 0x40000000                     ; 00465119
        ;   Label: LAB_00465119
    PUSH 0x5d11b5                       ; 0046511e | = "bride-die?.wav"
    PUSH EBP                            ; 00465123
    CALL core_dracbrid.cpp_FUN_00465400 ; 00465124
        ;   XREF to: 00465400 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_FUN_00465400(CDraculaBride * this_ptr, char * sound_name, float volume)
    ADD ESP,0xc                         ; 00465129
    JMP 0x0046508c                      ; 0046512c
        ;   XREF to: 0046508c (UNCONDITIONAL_JUMP)  ; LAB_0046508c
    PUSH EBX                            ; 00465131
        ;   Label: LAB_00465131
    CALL core_motion.cpp_FUN_005035c0   ; 00465132
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00465137
    ADD ESP,0x4                         ; 0046513a
    CMP EAX,0x8                         ; 0046513d
    JNZ 0x00465182                      ; 00465140
        ;   XREF to: 00465182 (CONDITIONAL_JUMP)  ; LAB_00465182
    PUSH 0x1                            ; 00465142
        ;   Label: LAB_00465142
    PUSH 0x1                            ; 00465144
    LEA EAX,[EBP + 0x2b4]               ; 00465146
        ;   Label: LAB_00465146
    PUSH EAX                            ; 0046514c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0046514d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00465152
    PUSH 0x3ecccccd                     ; 00465155
        ;   Label: LAB_00465155
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 0046515a
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0046515f
    TEST EAX,EAX                        ; 00465162
    JZ 0x0046508c                       ; 00465164
        ;   XREF to: 0046508c (CONDITIONAL_JUMP)  ; LAB_0046508c
    PUSH 0x40000000                     ; 0046516a
    PUSH 0x5d11c4                       ; 0046516f | = "bride-hurt?.wav"
    PUSH EBP                            ; 00465174
    CALL core_dracbrid.cpp_FUN_00465400 ; 00465175
        ;   XREF to: 00465400 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_FUN_00465400(CDraculaBride * this_ptr, char * sound_name, float volume)
    ADD ESP,0xc                         ; 0046517a
    JMP 0x0046508c                      ; 0046517d
        ;   XREF to: 0046508c (UNCONDITIONAL_JUMP)  ; LAB_0046508c
    CMP EAX,0x9                         ; 00465182
        ;   Label: LAB_00465182
    JZ 0x00465142                       ; 00465185
        ;   XREF to: 00465142 (CONDITIONAL_JUMP)  ; LAB_00465142
    CMP EAX,0x2                         ; 00465187
    JZ 0x00465142                       ; 0046518a
        ;   XREF to: 00465142 (CONDITIONAL_JUMP)  ; LAB_00465142
    TEST EAX,EAX                        ; 0046518c
    JZ 0x00465195                       ; 0046518e
        ;   XREF to: 00465195 (CONDITIONAL_JUMP)  ; LAB_00465195
    CMP EAX,0xe                         ; 00465190
    JNZ 0x004651e3                      ; 00465193
        ;   XREF to: 004651e3 (CONDITIONAL_JUMP)  ; LAB_004651e3
    PUSH 0x2                            ; 00465195
        ;   Label: LAB_00465195
    PUSH 0x0                            ; 00465197
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 00465199
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0046519e
    MOV EBX,EAX                         ; 004651a1
    TEST EAX,EAX                        ; 004651a3
    JNZ 0x004651ba                      ; 004651a5
        ;   XREF to: 004651ba (CONDITIONAL_JUMP)  ; LAB_004651ba
    PUSH 0x1                            ; 004651a7
    PUSH 0x4                            ; 004651a9
    LEA EAX,[EBP + 0x2b4]               ; 004651ab
    PUSH EAX                            ; 004651b1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004651b2
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004651b7
    CMP EBX,0x1                         ; 004651ba
        ;   Label: LAB_004651ba
    JNZ 0x004651d1                      ; 004651bd
        ;   XREF to: 004651d1 (CONDITIONAL_JUMP)  ; LAB_004651d1
    PUSH EBX                            ; 004651bf
    PUSH 0x5                            ; 004651c0
    LEA EAX,[EBP + 0x2b4]               ; 004651c2
    PUSH EAX                            ; 004651c8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004651c9
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004651ce
    CMP EBX,0x2                         ; 004651d1
        ;   Label: LAB_004651d1
    JNZ 0x00465155                      ; 004651d4
        ;   XREF to: 00465155 (CONDITIONAL_JUMP)  ; LAB_00465155
    PUSH 0x1                            ; 004651da
    PUSH 0x6                            ; 004651dc
    JMP 0x00465146                      ; 004651de
        ;   XREF to: 00465146 (UNCONDITIONAL_JUMP)  ; LAB_00465146
    CMP EAX,0x13                        ; 004651e3
        ;   Label: LAB_004651e3
    JZ 0x00465195                       ; 004651e6
        ;   XREF to: 00465195 (CONDITIONAL_JUMP)  ; LAB_00465195
    CMP EAX,0xc                         ; 004651e8
    JZ 0x00465195                       ; 004651eb
        ;   XREF to: 00465195 (CONDITIONAL_JUMP)  ; LAB_00465195
    CMP EAX,0x12                        ; 004651ed
    JZ 0x00465195                       ; 004651f0
        ;   XREF to: 00465195 (CONDITIONAL_JUMP)  ; LAB_00465195
    CMP EAX,0x14                        ; 004651f2
    JZ 0x00465195                       ; 004651f5
        ;   XREF to: 00465195 (CONDITIONAL_JUMP)  ; LAB_00465195
    CMP EAX,0x15                        ; 004651f7
    JZ 0x00465195                       ; 004651fa
        ;   XREF to: 00465195 (CONDITIONAL_JUMP)  ; LAB_00465195
    JMP 0x00465155                      ; 004651fc
        ;   XREF to: 00465155 (UNCONDITIONAL_JUMP)  ; LAB_00465155

