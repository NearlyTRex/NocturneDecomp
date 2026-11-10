; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_constrct_cpp_CConstruct_processDamage_FUN_00447090(CConstruct *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CConstruct *     Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_stick_leaps_wav_005d7070
;   TerminatedCString s_stick_hurt_growl_wav_005d7080
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_construc.cpp_FUN_004472a0
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   sound_sndmain.cpp_FUN_005735a0
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447090
        ;   Label: core_constrct.cpp_CConstruct_processDamage_FUN_00447090
    PUSH ESI                            ; 00447091
    PUSH EDI                            ; 00447092
    PUSH EBP                            ; 00447093
    MOV EBX,dword ptr [ESP + 0x14]      ; 00447094
    MOV EDI,dword ptr [ESP + 0x18]      ; 00447098
    MOV EDX,dword ptr [EBX + 0xc31c]    ; 0044709c
    PUSH EDX                            ; 004470a2
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004470a3
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 004470a8
    MOV ECX,dword ptr [EBX + 0xc314]    ; 004470ab
    PUSH ECX                            ; 004470b1
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004470b2
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 004470b7
    MOV ESI,dword ptr [EBX + 0xc304]    ; 004470ba
    PUSH ESI                            ; 004470c0
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004470c1
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 004470c6
    LEA ESI,[EBX + 0x158]               ; 004470c9
    PUSH ESI                            ; 004470cf
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004470d0
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004470d5
    ADD ESP,0x4                         ; 004470d8
    CMP EAX,0xc                         ; 004470db
    JZ 0x00447154                       ; 004470de
        ;   XREF to: 00447154 (CONDITIONAL_JUMP)  ; LAB_00447154
    FLD float ptr [EDI + 0x4]           ; 004470e0
    FSUBR float ptr [EBX + 0x2538]      ; 004470e3
    FST float ptr [EBX + 0x2538]        ; 004470e9
    FLDZ                                ; 004470ef
    FCOMPP                              ; 004470f1
    FNSTSW AX                           ; 004470f3
    SAHF                                ; 004470f5
    JNC 0x00447166                      ; 004470f6
        ;   XREF to: 00447166 (CONDITIONAL_JUMP)  ; LAB_00447166
    PUSH 0x1                            ; 004470f8
    PUSH 0x2                            ; 004470fa
    PUSH 0x0                            ; 004470fc
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 004470fe
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00447103
    ADD EAX,0x7                         ; 00447106
    PUSH EAX                            ; 00447109
    PUSH ESI                            ; 0044710a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0044710b
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00447110
    MOV EBP,dword ptr [EBX + 0xc318]    ; 00447113
    PUSH EBP                            ; 00447119
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0044711a
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0044711f
    TEST EAX,EAX                        ; 00447122
    JNZ 0x0044713e                      ; 00447124
        ;   XREF to: 0044713e (CONDITIONAL_JUMP)  ; LAB_0044713e
    PUSH 0x5d7080                       ; 00447126 | = "stick-hurt_growl.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0044712b
    PUSH EBX                            ; 00447131
    CALL dword ptr [EAX + 0x2c]         ; 00447132
    ADD ESP,0x8                         ; 00447135
    MOV dword ptr [EBX + 0xc318],EAX    ; 00447138
    PUSH EDI                            ; 0044713e
        ;   Label: LAB_0044713e
    PUSH EBX                            ; 0044713f
    MOV dword ptr [EDI + 0x8],0x0       ; 00447140
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 00447147
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0044714c
    POP EBP                             ; 0044714f
    POP EDI                             ; 00447150
    POP ESI                             ; 00447151
    POP EBX                             ; 00447152
    RET                                 ; 00447153
    PUSH 0x1                            ; 00447154
        ;   Label: LAB_00447154
    PUSH 0xe                            ; 00447156
    PUSH ESI                            ; 00447158
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00447159
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0044715e
    POP EBP                             ; 00447161
    POP EDI                             ; 00447162
    POP ESI                             ; 00447163
    POP EBX                             ; 00447164
    RET                                 ; 00447165
    PUSH 0x5d7070                       ; 00447166 | = "stick-leaps.wav"
        ;   Label: LAB_00447166
    MOV EAX,dword ptr [EBX + 0x154]     ; 0044716b
    PUSH EBX                            ; 00447171
    MOV dword ptr [EBX + 0x2538],0x3f800000 ; 00447172
    CALL dword ptr [EAX + 0x2c]         ; 0044717c
    ADD ESP,0x8                         ; 0044717f
    PUSH EBX                            ; 00447182
    MOV dword ptr [EBX + 0xc320],EAX    ; 00447183
    CALL core_construc.cpp_FUN_004472a0 ; 00447189
        ;   XREF to: 004472a0 (UNCONDITIONAL_CALL)  ; undefined core_construc.cpp_FUN_004472a0()
    ADD ESP,0x4                         ; 0044718e
    JMP 0x0044713e                      ; 00447191
        ;   XREF to: 0044713e (UNCONDITIONAL_JUMP)  ; LAB_0044713e

