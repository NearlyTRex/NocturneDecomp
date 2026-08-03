; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sentinel_cpp_CSentinel_processDamage_FUN_00506840(CSentinel *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_sentinel_die_wav_005900c6
;   TerminatedCString s_sentinel_hurt_wav_005900d7
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

    PUSH EBX                            ; 00506840
        ;   Label: core_sentinel.cpp_CSentinel_processDamage_FUN_00506840
    PUSH ESI                            ; 00506841
    PUSH EDI                            ; 00506842
    MOV EBX,dword ptr [ESP + 0x10]      ; 00506843
    MOV EAX,dword ptr [ESP + 0x14]      ; 00506847
    FLD float ptr [EAX + 0x4]           ; 0050684b
    FSUBR float ptr [EBX + 0x2434]      ; 0050684e
    LEA ESI,[EBX + 0x150]               ; 00506854
    FST float ptr [EBX + 0x2434]        ; 0050685a
    FLDZ                                ; 00506860
    FCOMPP                              ; 00506862
    FNSTSW AX                           ; 00506864
    SAHF                                ; 00506866
    JC 0x005068cf                       ; 00506867
        ;   XREF to: 005068cf (CONDITIONAL_JUMP)  ; LAB_005068cf
    PUSH ESI                            ; 00506869
    MOV dword ptr [EBX + 0x2434],0x0    ; 0050686a
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00506874
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00506879
    ADD ESP,0x4                         ; 0050687c
    CMP EAX,0x8                         ; 0050687f
    JZ 0x005068bd                       ; 00506882
        ;   XREF to: 005068bd (CONDITIONAL_JUMP)  ; LAB_005068bd
    CMP EAX,0x9                         ; 00506884
    JZ 0x005068bd                       ; 00506887
        ;   XREF to: 005068bd (CONDITIONAL_JUMP)  ; LAB_005068bd
    PUSH 0x1                            ; 00506889
    PUSH 0x8                            ; 0050688b
    PUSH ESI                            ; 0050688d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0050688e
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00506893
    MOV ECX,dword ptr [EBX + 0xbd24]    ; 00506896
    PUSH ECX                            ; 0050689c
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 0050689d
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 005068a2
    PUSH 0x5900c6                       ; 005068a5 | = "sentinel-die.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005068aa
        ;   Label: LAB_005068aa
    PUSH EBX                            ; 005068b0
    CALL dword ptr [EAX + 0x24]         ; 005068b1
    ADD ESP,0x8                         ; 005068b4
    MOV dword ptr [EBX + 0xbd24],EAX    ; 005068b7
    MOV ESI,dword ptr [ESP + 0x14]      ; 005068bd
        ;   Label: LAB_005068bd
    PUSH ESI                            ; 005068c1
    PUSH EBX                            ; 005068c2
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 005068c3
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00479f70(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005068c8
    POP EDI                             ; 005068cb
    POP ESI                             ; 005068cc
    POP EBX                             ; 005068cd
    RET                                 ; 005068ce
    PUSH 0x2                            ; 005068cf
        ;   Label: LAB_005068cf
    PUSH 0x0                            ; 005068d1
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 005068d3
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040de00(int min_value, int max_value)
    ADD ESP,0x8                         ; 005068d8
    MOV EDI,EAX                         ; 005068db
    TEST EAX,EAX                        ; 005068dd
    JNZ 0x005068ee                      ; 005068df
        ;   XREF to: 005068ee (CONDITIONAL_JUMP)  ; LAB_005068ee
    PUSH 0x1                            ; 005068e1
    PUSH 0x5                            ; 005068e3
    PUSH ESI                            ; 005068e5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005068e6
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005068eb
    CMP EDI,0x1                         ; 005068ee
        ;   Label: LAB_005068ee
    JNZ 0x00506905                      ; 005068f1
        ;   XREF to: 00506905 (CONDITIONAL_JUMP)  ; LAB_00506905
    PUSH EDI                            ; 005068f3
    PUSH 0x6                            ; 005068f4
    LEA EAX,[EBX + 0x150]               ; 005068f6
    PUSH EAX                            ; 005068fc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005068fd
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00506902
    CMP EDI,0x2                         ; 00506905
        ;   Label: LAB_00506905
    JNZ 0x0050691d                      ; 00506908
        ;   XREF to: 0050691d (CONDITIONAL_JUMP)  ; LAB_0050691d
    PUSH 0x1                            ; 0050690a
    PUSH 0x7                            ; 0050690c
    LEA EAX,[EBX + 0x150]               ; 0050690e
    PUSH EAX                            ; 00506914
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00506915
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0050691a
    MOV EDX,dword ptr [EBX + 0xbd24]    ; 0050691d
        ;   Label: LAB_0050691d
    PUSH EDX                            ; 00506923
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00506924
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 00506929
    TEST EAX,EAX                        ; 0050692c
    JNZ 0x005068bd                      ; 0050692e
        ;   XREF to: 005068bd (CONDITIONAL_JUMP)  ; LAB_005068bd
    PUSH 0x5900d7                       ; 00506930 | = "sentinel-hurt?.wav"
    JMP 0x005068aa                      ; 00506935
        ;   XREF to: 005068aa (UNCONDITIONAL_JUMP)  ; LAB_005068aa

