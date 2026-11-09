; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_imp_cpp_FUN_004d7d50(CImp *param_1,SDamageInfo *param_2)
;
;
; Referenced Globals:
;   undefined4 s_imp_die_wav_005dab58+1
;   TerminatedCString s_imp_hurt_wav_005dab66
;   undefined4 DAT_005dab79
;   undefined4 DAT_00614d30
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_enemy.cpp_FUN_00488890
;   core_fire.cpp_FUN_0049d090
;   core_imp.cpp_FUN_004d7ab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   sound_sndmain.cpp_FUN_00550b70
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7d50
        ;   Label: core_imp.cpp_FUN_004d7d50
    PUSH EBP                            ; 004d7d51
    SUB ESP,0x20                        ; 004d7d52
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004d7d55
    MOV EDX,dword ptr [EBP + 0x10af8]   ; 004d7d59
    PUSH EDX                            ; 004d7d5f
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 004d7d60
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 004d7d65
    MOV EAX,dword ptr [ESP + 0x30]      ; 004d7d68
    CMP dword ptr [EAX + 0x28],0x8      ; 004d7d6c
    JNZ 0x004d7dce                      ; 004d7d70
        ;   XREF to: 004d7dce (CONDITIONAL_JUMP)  ; LAB_004d7dce
    PUSH EDI                            ; 004d7d72
    PUSH ESI                            ; 004d7d73
    FLD float ptr [EAX + 0x4]           ; 004d7d74
    ADD EAX,0x1c                        ; 004d7d77
    FLD ST0                             ; 004d7d7a
    FMUL double ptr [0x005dab79]        ; 004d7d7c | DAT_005dab79
    PUSH EAX                            ; 004d7d82
    LEA ESI,[ESP + 0xc]                 ; 004d7d83
    LEA EDI,[ESP + 0x18]                ; 004d7d87
    PUSH EBP                            ; 004d7d8b
    FSTP ST1                            ; 004d7d8c
    FSTP float ptr [EAX + -0x18]        ; 004d7d8e
    CALL core_actor.cpp_FUN_00408d70    ; 004d7d91
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x10]                ; 004d7d96
    ADD ESP,0x8                         ; 004d7d9a
    XOR EBX,EBX                         ; 004d7d9d
    MOVSD ES:EDI,ESI                    ; 004d7d9f
    MOVSD ES:EDI,ESI                    ; 004d7da0
    MOVSD ES:EDI,ESI                    ; 004d7da1
    MOV ESI,0x4000                      ; 004d7da2
    PUSH 0xffff                         ; 004d7da7
        ;   Label: LAB_004d7da7
    PUSH 0x0                            ; 004d7dac
    PUSH ESI                            ; 004d7dae
    PUSH ESI                            ; 004d7daf
    PUSH 0x0                            ; 004d7db0
    LEA EAX,[ESP + 0x28]                ; 004d7db2
    PUSH EAX                            ; 004d7db6
    MOV EDI,dword ptr [0x00614d30]      ; 004d7db7 | DAT_00614d30
    PUSH EDI                            ; 004d7dbd
    INC EBX                             ; 004d7dbe
    CALL core_fire.cpp_FUN_0049d090     ; 004d7dbf
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_0049d090(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004d7dc4
    CMP EBX,0x5                         ; 004d7dc7
    JL 0x004d7da7                       ; 004d7dca
        ;   XREF to: 004d7da7 (CONDITIONAL_JUMP)  ; LAB_004d7da7
    POP ESI                             ; 004d7dcc
    POP EDI                             ; 004d7dcd
    MOV EAX,dword ptr [ESP + 0x30]      ; 004d7dce
        ;   Label: LAB_004d7dce
    PUSH EAX                            ; 004d7dd2
    PUSH EBP                            ; 004d7dd3
    CALL core_imp.cpp_FUN_004d7ab0      ; 004d7dd4
        ;   XREF to: 004d7ab0 (UNCONDITIONAL_CALL)  ; void core_imp.cpp_FUN_004d7ab0(CImp * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004d7dd9
    MOV EAX,dword ptr [ESP + 0x30]      ; 004d7ddc
    FLD float ptr [EAX + 0x4]           ; 004d7de0
    FSUBR float ptr [EBP + 0x25a8]      ; 004d7de3
    LEA EBX,[EBP + 0x2b4]               ; 004d7de9
    FST float ptr [EBP + 0x25a8]        ; 004d7def
    FLDZ                                ; 004d7df5
    FCOMPP                              ; 004d7df7
    FNSTSW AX                           ; 004d7df9
    SAHF                                ; 004d7dfb
    JC 0x004d7e66                       ; 004d7dfc
        ;   XREF to: 004d7e66 (CONDITIONAL_JUMP)  ; LAB_004d7e66
    PUSH EBX                            ; 004d7dfe
    MOV dword ptr [EBP + 0x25a8],0x0    ; 004d7dff
    CALL core_motion.cpp_FUN_005035c0   ; 004d7e09
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d7e0e
    ADD ESP,0x4                         ; 004d7e11
    CMP EAX,0x6                         ; 004d7e14
    JZ 0x004d7e52                       ; 004d7e17
        ;   XREF to: 004d7e52 (CONDITIONAL_JUMP)  ; LAB_004d7e52
    CMP EAX,0x7                         ; 004d7e19
    JZ 0x004d7e52                       ; 004d7e1c
        ;   XREF to: 004d7e52 (CONDITIONAL_JUMP)  ; LAB_004d7e52
    PUSH 0x1                            ; 004d7e1e
    PUSH 0x6                            ; 004d7e20
    PUSH EBX                            ; 004d7e22
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d7e23
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d7e28
    MOV ECX,dword ptr [EBP + 0x10afc]   ; 004d7e2b
    PUSH ECX                            ; 004d7e31
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 004d7e32
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 004d7e37
    PUSH 0x5dab59                       ; 004d7e3a | s_imp_die_wav_005dab58+1
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 004d7e3f
        ;   Label: LAB_004d7e3f
    PUSH EBP                            ; 004d7e45
    CALL dword ptr [EAX + 0x34]         ; 004d7e46
    ADD ESP,0x8                         ; 004d7e49
    MOV dword ptr [EBP + 0x10afc],EAX   ; 004d7e4c
    MOV EBX,dword ptr [ESP + 0x30]      ; 004d7e52
        ;   Label: LAB_004d7e52
    PUSH EBX                            ; 004d7e56
    PUSH EBP                            ; 004d7e57
    CALL core_enemy.cpp_FUN_00488890    ; 004d7e58
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00488890()
    ADD ESP,0x8                         ; 004d7e5d
    ADD ESP,0x20                        ; 004d7e60
    POP EBP                             ; 004d7e63
    POP EBX                             ; 004d7e64
    RET                                 ; 004d7e65
    PUSH 0x1                            ; 004d7e66
        ;   Label: LAB_004d7e66
    PUSH 0x5                            ; 004d7e68
    PUSH EBX                            ; 004d7e6a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d7e6b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d7e70
    MOV EDX,dword ptr [EBP + 0x10afc]   ; 004d7e73
    PUSH EDX                            ; 004d7e79
    CALL sound_sndmain.cpp_FUN_00550b70 ; 004d7e7a
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004d7e7f
    TEST EAX,EAX                        ; 004d7e82
    JNZ 0x004d7e52                      ; 004d7e84
        ;   XREF to: 004d7e52 (CONDITIONAL_JUMP)  ; LAB_004d7e52
    PUSH 0x5dab66                       ; 004d7e86 | = "imp-hurt?.wav"
    JMP 0x004d7e3f                      ; 004d7e8b
        ;   XREF to: 004d7e3f (UNCONDITIONAL_JUMP)  ; LAB_004d7e3f

