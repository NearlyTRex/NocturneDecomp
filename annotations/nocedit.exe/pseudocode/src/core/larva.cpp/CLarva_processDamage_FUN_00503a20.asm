; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_larva_cpp_CLarva_processDamage_FUN_00503a20(CLarva *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CLarva *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined8       Stack[-0x100]:8  local_100
; undefined8       Stack[-0xf8]:8  local_f8
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined1       Stack[-0xe8]:1  local_e8
; undefined1       Stack[-0x84]:1  local_84
;
; Referenced Globals:
;   TerminatedCString s_sml_00630fbe
;   TerminatedCString s_med_00630fc2
;   TerminatedCString s_big_00630fc6
;   TerminatedCString s_l_s_die_wav_00630fdb
;   TerminatedCString s_l_s_shot_wav_00630fe8
;   double DOUBLE_00630ffb = 0.300000000000000
;   double DOUBLE_00631003 = 0.700000000000000
;   CGore* g_CGorePtr = 02d83364
;   CGore g_CGoreInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10
;   core_gore.cpp_CGore_FUN_004edbb0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503a20
        ;   Label: core_larva.cpp_CLarva_processDamage_FUN_00503a20
    PUSH ESI                            ; 00503a21
    PUSH EDI                            ; 00503a22
    PUSH EBP                            ; 00503a23
    MOV EBP,ESP                         ; 00503a24
    SUB ESP,0xec                        ; 00503a26
    AND ESP,0xfffffff8                  ; 00503a2c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00503a2f
    MOV EDI,dword ptr [EBP + 0x18]      ; 00503a32
    FLD float ptr [EDI + 0x4]           ; 00503a35
    FSUBR float ptr [EBX + 0x243c]      ; 00503a38
    FST float ptr [EBX + 0x243c]        ; 00503a3e
    FLDZ                                ; 00503a44
    FCOMPP                              ; 00503a46
    FNSTSW AX                           ; 00503a48
    SAHF                                ; 00503a4a
    JC 0x00503b58                       ; 00503a4b
        ;   XREF to: 00503b58 (CONDITIONAL_JUMP)  ; LAB_00503b58
    LEA ESI,[EBX + 0x158]               ; 00503a51
    PUSH ESI                            ; 00503a57
    MOV dword ptr [EBX + 0x243c],0x0    ; 00503a58
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00503a62
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00503a67
    ADD ESP,0x4                         ; 00503a6a
    CMP EAX,0x5                         ; 00503a6d
    JZ 0x00503a84                       ; 00503a70
        ;   XREF to: 00503a84 (CONDITIONAL_JUMP)  ; LAB_00503a84
    CMP EAX,0x4                         ; 00503a72
    JZ 0x00503a84                       ; 00503a75
        ;   XREF to: 00503a84 (CONDITIONAL_JUMP)  ; LAB_00503a84
    PUSH 0x1                            ; 00503a77
    PUSH 0x4                            ; 00503a79
    PUSH ESI                            ; 00503a7b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00503a7c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00503a81
    MOV ESI,dword ptr [EBX + 0xbec0]    ; 00503a84
        ;   Label: LAB_00503a84
    PUSH ESI                            ; 00503a8a
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 00503a8b
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 00503a90
    MOV EAX,dword ptr [EBX + 0xbec4]    ; 00503a93
    PUSH EAX                            ; 00503a99
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 00503a9a
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 00503a9f
    MOV EAX,dword ptr [EBX + 0x261c]    ; 00503aa2
    MOV dword ptr [ESP + 0x14],EAX      ; 00503aa8
    FLD float ptr [ESP + 0x14]          ; 00503aac
    FST double ptr [ESP]                ; 00503ab0
    FCOMP double ptr [0x00630ffb]       ; 00503ab3 | DOUBLE_00630ffb
    FNSTSW AX                           ; 00503ab9
    SAHF                                ; 00503abb
    JNC 0x00503b36                      ; 00503abc
        ;   XREF to: 00503b36 (CONDITIONAL_JUMP)  ; LAB_00503b36
    MOV EAX,0x630fbe                    ; 00503abe | = "sml"
    PUSH EAX                            ; 00503ac3 | = "sml" | s_med_00630fc2 | s_big_00630fc6
        ;   Label: LAB_00503ac3
    PUSH 0x630fdb                       ; 00503ac4 | = "l%s-die?.wav"
    LEA EAX,[ESP + 0x20]                ; 00503ac9
    PUSH EAX                            ; 00503acd
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00503ace
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00503ad3
    LEA ESI,[ESP + 0x18]                ; 00503ad6
    PUSH ESI                            ; 00503ada
    MOV EAX,dword ptr [EBX + 0x154]     ; 00503adb
    PUSH EBX                            ; 00503ae1
    CALL dword ptr [EAX + 0x24]         ; 00503ae2
    ADD ESP,0x8                         ; 00503ae5
    MOV dword ptr [EBX + 0xbec0],EAX    ; 00503ae8
    LEA EAX,[EDI + 0x1c]                ; 00503aee
        ;   Label: LAB_00503aee
    PUSH EAX                            ; 00503af1
    LEA EAX,[ESP + 0xe4]                ; 00503af2
    PUSH EAX                            ; 00503af9
    PUSH EBX                            ; 00503afa
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00503afb
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00503b00
    MOV EDX,dword ptr [EBX + 0x2610]    ; 00503b03
    PUSH EDX                            ; 00503b09
    PUSH 0xa                            ; 00503b0a
    PUSH 0x0                            ; 00503b0c
    LEA EAX,[ESP + 0xec]                ; 00503b0e
    PUSH EAX                            ; 00503b15
    MOV ECX,dword ptr [0x0067b9a0]      ; 00503b16 | g_CGoreInstance | g_CGorePtr
    PUSH ECX                            ; 00503b1c | g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004edbb0 ; 00503b1d
        ;   XREF to: 004edbb0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_FUN_004edbb0(CGore * this_ptr)
    ADD ESP,0x14                        ; 00503b22
    PUSH EDI                            ; 00503b25
    PUSH EBX                            ; 00503b26
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 00503b27
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00503b2c
    MOV ESP,EBP                         ; 00503b2f
    POP EBP                             ; 00503b31
    POP EDI                             ; 00503b32
    POP ESI                             ; 00503b33
    POP EBX                             ; 00503b34
    RET                                 ; 00503b35
    FLD double ptr [ESP]                ; 00503b36
        ;   Label: LAB_00503b36
    FCOMP double ptr [0x00631003]       ; 00503b39 | DOUBLE_00631003
    FNSTSW AX                           ; 00503b3f
    SAHF                                ; 00503b41
    JNC 0x00503b4e                      ; 00503b42
        ;   XREF to: 00503b4e (CONDITIONAL_JUMP)  ; LAB_00503b4e
    MOV EAX,0x630fc2                    ; 00503b44 | = "med"
    JMP 0x00503ac3                      ; 00503b49
        ;   XREF to: 00503ac3 (UNCONDITIONAL_JUMP)  ; LAB_00503ac3
    MOV EAX,0x630fc6                    ; 00503b4e | = "big"
        ;   Label: LAB_00503b4e
    JMP 0x00503ac3                      ; 00503b53
        ;   XREF to: 00503ac3 (UNCONDITIONAL_JUMP)  ; LAB_00503ac3
    MOV EDX,dword ptr [EBX + 0xbec4]    ; 00503b58
        ;   Label: LAB_00503b58
    PUSH EDX                            ; 00503b5e
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 00503b5f
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 00503b64
    MOV ECX,dword ptr [EBX + 0xbec0]    ; 00503b67
    PUSH ECX                            ; 00503b6d
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00503b6e
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00503b73
    TEST EAX,EAX                        ; 00503b76
    JNZ 0x00503bca                      ; 00503b78
        ;   XREF to: 00503bca (CONDITIONAL_JUMP)  ; LAB_00503bca
    MOV EAX,dword ptr [EBX + 0x261c]    ; 00503b7a
    MOV dword ptr [ESP + 0x10],EAX      ; 00503b80
    FLD float ptr [ESP + 0x10]          ; 00503b84
    FST double ptr [ESP + 0x8]          ; 00503b88
    FCOMP double ptr [0x00630ffb]       ; 00503b8c | DOUBLE_00630ffb
    FNSTSW AX                           ; 00503b92
    SAHF                                ; 00503b94
    JNC 0x00503be2                      ; 00503b95
        ;   XREF to: 00503be2 (CONDITIONAL_JUMP)  ; LAB_00503be2
    MOV EAX,0x630fbe                    ; 00503b97 | = "sml"
    PUSH EAX                            ; 00503b9c | = "sml" | s_med_00630fc2 | s_big_00630fc6
        ;   Label: LAB_00503b9c
    PUSH 0x630fe8                       ; 00503b9d | = "l%s-shot?.wav"
    LEA EAX,[ESP + 0x84]                ; 00503ba2
    PUSH EAX                            ; 00503ba9
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00503baa
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00503baf
    LEA ESI,[ESP + 0x7c]                ; 00503bb2
    PUSH ESI                            ; 00503bb6
    MOV EAX,dword ptr [EBX + 0x154]     ; 00503bb7
    PUSH EBX                            ; 00503bbd
    CALL dword ptr [EAX + 0x24]         ; 00503bbe
    ADD ESP,0x8                         ; 00503bc1
    MOV dword ptr [EBX + 0xbec0],EAX    ; 00503bc4
    PUSH 0x1                            ; 00503bca
        ;   Label: LAB_00503bca
    PUSH 0x3                            ; 00503bcc
    LEA EAX,[EBX + 0x158]               ; 00503bce
    PUSH EAX                            ; 00503bd4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00503bd5
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00503bda
    JMP 0x00503aee                      ; 00503bdd
        ;   XREF to: 00503aee (UNCONDITIONAL_JUMP)  ; LAB_00503aee
    FLD double ptr [ESP + 0x8]          ; 00503be2
        ;   Label: LAB_00503be2
    FCOMP double ptr [0x00631003]       ; 00503be6 | DOUBLE_00631003
    FNSTSW AX                           ; 00503bec
    SAHF                                ; 00503bee
    JNC 0x00503bf8                      ; 00503bef
        ;   XREF to: 00503bf8 (CONDITIONAL_JUMP)  ; LAB_00503bf8
    MOV EAX,0x630fc2                    ; 00503bf1 | = "med"
    JMP 0x00503b9c                      ; 00503bf6
        ;   XREF to: 00503b9c (UNCONDITIONAL_JUMP)  ; LAB_00503b9c
    MOV EAX,0x630fc6                    ; 00503bf8 | = "big"
        ;   Label: LAB_00503bf8
    JMP 0x00503b9c                      ; 00503bfd
        ;   XREF to: 00503b9c (UNCONDITIONAL_JUMP)  ; LAB_00503b9c

