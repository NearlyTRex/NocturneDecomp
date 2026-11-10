; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sentinel_cpp_CSentinel_processDamage_FUN_0052b890(CSentinel *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_sentinel_die_wav_005e542e
;   TerminatedCString s_sentinel_hurt_wav_005e543f
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_enemy.cpp_CEnemy_processDamage_FUN_00488890
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   sound_sndmain.cpp_FUN_00550b70
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b890
        ;   Label: core_sentinel.cpp_CSentinel_processDamage_FUN_0052b890
    PUSH ESI                            ; 0052b891
    PUSH EDI                            ; 0052b892
    MOV EBX,dword ptr [ESP + 0x10]      ; 0052b893
    MOV EAX,dword ptr [ESP + 0x14]      ; 0052b897
    FLD float ptr [EAX + 0x4]           ; 0052b89b
    FSUBR float ptr [EBX + 0x25a8]      ; 0052b89e
    LEA ESI,[EBX + 0x2b4]               ; 0052b8a4
    FST float ptr [EBX + 0x25a8]        ; 0052b8aa
    FLDZ                                ; 0052b8b0
    FCOMPP                              ; 0052b8b2
    FNSTSW AX                           ; 0052b8b4
    SAHF                                ; 0052b8b6
    JC 0x0052b91f                       ; 0052b8b7
        ;   XREF to: 0052b91f (CONDITIONAL_JUMP)  ; LAB_0052b91f
    PUSH ESI                            ; 0052b8b9
    MOV dword ptr [EBX + 0x25a8],0x0    ; 0052b8ba
    CALL core_motion.cpp_FUN_005035c0   ; 0052b8c4
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0052b8c9
    ADD ESP,0x4                         ; 0052b8cc
    CMP EAX,0x8                         ; 0052b8cf
    JZ 0x0052b90d                       ; 0052b8d2
        ;   XREF to: 0052b90d (CONDITIONAL_JUMP)  ; LAB_0052b90d
    CMP EAX,0x9                         ; 0052b8d4
    JZ 0x0052b90d                       ; 0052b8d7
        ;   XREF to: 0052b90d (CONDITIONAL_JUMP)  ; LAB_0052b90d
    PUSH 0x1                            ; 0052b8d9
    PUSH 0x8                            ; 0052b8db
    PUSH ESI                            ; 0052b8dd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b8de
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b8e3
    MOV ECX,dword ptr [EBX + 0x10af8]   ; 0052b8e6
    PUSH ECX                            ; 0052b8ec
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0052b8ed
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 0052b8f2
    PUSH 0x5e542e                       ; 0052b8f5 | = "sentinel-die.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0052b8fa
        ;   Label: LAB_0052b8fa
    PUSH EBX                            ; 0052b900
    CALL dword ptr [EAX + 0x34]         ; 0052b901
    ADD ESP,0x8                         ; 0052b904
    MOV dword ptr [EBX + 0x10af8],EAX   ; 0052b907
    MOV ESI,dword ptr [ESP + 0x14]      ; 0052b90d
        ;   Label: LAB_0052b90d
    PUSH ESI                            ; 0052b911
    PUSH EBX                            ; 0052b912
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 0052b913
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0052b918
    POP EDI                             ; 0052b91b
    POP ESI                             ; 0052b91c
    POP EBX                             ; 0052b91d
    RET                                 ; 0052b91e
    PUSH 0x2                            ; 0052b91f
        ;   Label: LAB_0052b91f
    PUSH 0x0                            ; 0052b921
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0052b923
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0052b928
    MOV EDI,EAX                         ; 0052b92b
    TEST EAX,EAX                        ; 0052b92d
    JNZ 0x0052b93e                      ; 0052b92f
        ;   XREF to: 0052b93e (CONDITIONAL_JUMP)  ; LAB_0052b93e
    PUSH 0x1                            ; 0052b931
    PUSH 0x5                            ; 0052b933
    PUSH ESI                            ; 0052b935
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b936
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b93b
    CMP EDI,0x1                         ; 0052b93e
        ;   Label: LAB_0052b93e
    JNZ 0x0052b955                      ; 0052b941
        ;   XREF to: 0052b955 (CONDITIONAL_JUMP)  ; LAB_0052b955
    PUSH EDI                            ; 0052b943
    PUSH 0x6                            ; 0052b944
    LEA EAX,[EBX + 0x2b4]               ; 0052b946
    PUSH EAX                            ; 0052b94c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b94d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b952
    CMP EDI,0x2                         ; 0052b955
        ;   Label: LAB_0052b955
    JNZ 0x0052b96d                      ; 0052b958
        ;   XREF to: 0052b96d (CONDITIONAL_JUMP)  ; LAB_0052b96d
    PUSH 0x1                            ; 0052b95a
    PUSH 0x7                            ; 0052b95c
    LEA EAX,[EBX + 0x2b4]               ; 0052b95e
    PUSH EAX                            ; 0052b964
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0052b965
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052b96a
    MOV EDX,dword ptr [EBX + 0x10af8]   ; 0052b96d
        ;   Label: LAB_0052b96d
    PUSH EDX                            ; 0052b973
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0052b974
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0052b979
    TEST EAX,EAX                        ; 0052b97c
    JNZ 0x0052b90d                      ; 0052b97e
        ;   XREF to: 0052b90d (CONDITIONAL_JUMP)  ; LAB_0052b90d
    PUSH 0x5e543f                       ; 0052b980 | = "sentinel-hurt?.wav"
    JMP 0x0052b8fa                      ; 0052b985
        ;   XREF to: 0052b8fa (UNCONDITIONAL_JUMP)  ; LAB_0052b8fa

