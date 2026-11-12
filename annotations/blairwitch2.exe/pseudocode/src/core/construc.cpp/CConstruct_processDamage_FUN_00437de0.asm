; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_construc_cpp_CConstruct_processDamage_FUN_00437de0(CConstruct *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CConstruct *     Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_batman_die_wav_005cdef6
;   TerminatedCString s_batman_hurt_wav_005cdf05
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_construc.cpp_FUN_00438060
;   core_enemy.cpp_CEnemy_processDamage_FUN_00488890
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   sound_sndmain.cpp_FUN_00550b70
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437de0
        ;   Label: core_construc.cpp_CConstruct_processDamage_FUN_00437de0
    PUSH ESI                            ; 00437de1
    PUSH EDI                            ; 00437de2
    PUSH EBP                            ; 00437de3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00437de4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00437de8
    MOV EDX,dword ptr [EBX + 0x10ba0]   ; 00437dec
    PUSH EDX                            ; 00437df2
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 00437df3
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 00437df8
    MOV ECX,dword ptr [EBX + 0x10b98]   ; 00437dfb
    PUSH ECX                            ; 00437e01
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 00437e02
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 00437e07
    MOV EDI,dword ptr [EBX + 0x10b5c]   ; 00437e0a
    PUSH EDI                            ; 00437e10
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 00437e11
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    FLD float ptr [ESI + 0x4]           ; 00437e16
    FSUBR float ptr [EBX + 0x25a8]      ; 00437e19
    ADD ESP,0x4                         ; 00437e1f
    FST float ptr [EBX + 0x25a8]        ; 00437e22
    FLDZ                                ; 00437e28
    FCOMPP                              ; 00437e2a
    FNSTSW AX                           ; 00437e2c
    SAHF                                ; 00437e2e
    JC 0x00437e87                       ; 00437e2f
        ;   XREF to: 00437e87 (CONDITIONAL_JUMP)  ; LAB_00437e87
    PUSH EBX                            ; 00437e31
    MOV dword ptr [EBX + 0x25a8],0x3f800000 ; 00437e32
    CALL core_construc.cpp_FUN_00438060 ; 00437e3c
        ;   XREF to: 00438060 (UNCONDITIONAL_CALL)  ; undefined core_construc.cpp_FUN_00438060()
    ADD ESP,0x4                         ; 00437e41
    MOV EAX,dword ptr [EBX + 0x10b9c]   ; 00437e44
    PUSH EAX                            ; 00437e4a
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00437e4b
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00437e50
    TEST EAX,EAX                        ; 00437e53
    JZ 0x00437e6d                       ; 00437e55
        ;   XREF to: 00437e6d (CONDITIONAL_JUMP)  ; LAB_00437e6d
    PUSH ESI                            ; 00437e57
        ;   Label: LAB_00437e57
    PUSH EBX                            ; 00437e58
    MOV dword ptr [ESI + 0x8],0x0       ; 00437e59
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 00437e60
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00437e65
    POP EBP                             ; 00437e68
    POP EDI                             ; 00437e69
    POP ESI                             ; 00437e6a
    POP EBX                             ; 00437e6b
    RET                                 ; 00437e6c
    PUSH 0x5cdef6                       ; 00437e6d | = "batman-die.wav"
        ;   Label: LAB_00437e6d
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00437e72
    PUSH EBX                            ; 00437e78
    CALL dword ptr [EAX + 0x34]         ; 00437e79
    ADD ESP,0x8                         ; 00437e7c
    MOV dword ptr [EBX + 0x10b9c],EAX   ; 00437e7f
    JMP 0x00437e57                      ; 00437e85
        ;   XREF to: 00437e57 (UNCONDITIONAL_JUMP)  ; LAB_00437e57
    PUSH 0x1                            ; 00437e87
        ;   Label: LAB_00437e87
    PUSH 0x2                            ; 00437e89
    PUSH 0x0                            ; 00437e8b
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 00437e8d
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00437e92
    ADD EAX,0x7                         ; 00437e95
    PUSH EAX                            ; 00437e98
    LEA EAX,[EBX + 0x2b4]               ; 00437e99
    PUSH EAX                            ; 00437e9f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00437ea0
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00437ea5
    MOV EBP,dword ptr [EBX + 0x10b9c]   ; 00437ea8
    PUSH EBP                            ; 00437eae
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00437eaf
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00437eb4
    TEST EAX,EAX                        ; 00437eb7
    JNZ 0x00437e57                      ; 00437eb9
        ;   XREF to: 00437e57 (CONDITIONAL_JUMP)  ; LAB_00437e57
    PUSH 0x5cdf05                       ; 00437ebb | = "batman-hurt?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00437ec0
    PUSH EBX                            ; 00437ec6
    CALL dword ptr [EAX + 0x34]         ; 00437ec7
    ADD ESP,0x8                         ; 00437eca
    MOV dword ptr [EBX + 0x10b9c],EAX   ; 00437ecd
    JMP 0x00437e57                      ; 00437ed3
        ;   XREF to: 00437e57 (UNCONDITIONAL_JUMP)  ; LAB_00437e57

