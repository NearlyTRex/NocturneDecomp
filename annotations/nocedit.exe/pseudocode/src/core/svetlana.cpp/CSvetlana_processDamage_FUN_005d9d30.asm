; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_svetlana_cpp_CSvetlana_processDamage_FUN_005d9d30(CSvetlana *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_svet_die_wav_00654b69
;   TerminatedCString s_svet_hurt_wav_00654b76
;   float FLOAT_00663d58 = 3
;   CGame* g_CGamePtr = 02d81a9c
;   CGore* g_CGorePtr = 02d83364
;   undefined4 DAT_02d81c6c
;   undefined4 DAT_02d81cc8
;   CGore g_CGoreInstance
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0
;   core_gore.cpp_CGore_FUN_004ee030
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d9d30
        ;   Label: core_svetlana.cpp_CSvetlana_processDamage_FUN_005d9d30
    PUSH ESI                            ; 005d9d31
    PUSH EDI                            ; 005d9d32
    MOV EBX,dword ptr [ESP + 0x10]      ; 005d9d33
    MOV EDI,dword ptr [ESP + 0x14]      ; 005d9d37
    TEST dword ptr [EBX + 0xbe24],0x7fffffff ; 005d9d3b
    JNZ 0x005d9de7                      ; 005d9d45
        ;   XREF to: 005d9de7 (CONDITIONAL_JUMP)  ; LAB_005d9de7
    MOV EAX,[0x0067b654]                ; 005d9d4b | g_CGamePtr
        ;   Label: LAB_005d9d4b
    CMP dword ptr [EAX + 0x1d0],0x0     ; 005d9d50 | DAT_02d81c6c
    JZ 0x005d9d60                       ; 005d9d57
        ;   XREF to: 005d9d60 (CONDITIONAL_JUMP)  ; LAB_005d9d60
    MOV dword ptr [EDI + 0x4],0x0       ; 005d9d59
    MOV EAX,[0x0067b654]                ; 005d9d60 | g_CGamePtr
        ;   Label: LAB_005d9d60
    MOV ESI,dword ptr [EAX + 0x22c]     ; 005d9d65 | DAT_02d81cc8
    TEST ESI,ESI                        ; 005d9d6b
    JZ 0x005d9df3                       ; 005d9d6d
        ;   XREF to: 005d9df3 (CONDITIONAL_JUMP)  ; LAB_005d9df3
    MOV EAX,[0x00663d58]                ; 005d9d73 | FLOAT_00663d58
        ;   Label: LAB_005d9d73
    MOV dword ptr [EBX + 0xbe24],EAX    ; 005d9d78
    FLD float ptr [EDI + 0x4]           ; 005d9d7e
    FSUBR float ptr [EBX + 0x243c]      ; 005d9d81
    LEA ESI,[EBX + 0x158]               ; 005d9d87
    FST float ptr [EBX + 0x243c]        ; 005d9d8d
    FLDZ                                ; 005d9d93
    FCOMPP                              ; 005d9d95
    FNSTSW AX                           ; 005d9d97
    SAHF                                ; 005d9d99
    JNC 0x005d9dfb                      ; 005d9d9a
        ;   XREF to: 005d9dfb (CONDITIONAL_JUMP)  ; LAB_005d9dfb
    FLD float ptr [EDI + 0x4]           ; 005d9d9c
    FLDZ                                ; 005d9d9f
    FCOMPP                              ; 005d9da1
    FNSTSW AX                           ; 005d9da3
    SAHF                                ; 005d9da5
    JNC 0x005d9dd9                      ; 005d9da6
        ;   XREF to: 005d9dd9 (CONDITIONAL_JUMP)  ; LAB_005d9dd9
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 005d9da8
    JNZ 0x005d9e8c                      ; 005d9daf
        ;   XREF to: 005d9e8c (CONDITIONAL_JUMP)  ; LAB_005d9e8c
    PUSH 0x1                            ; 005d9db5
    PUSH 0x4                            ; 005d9db7
    PUSH ESI                            ; 005d9db9
        ;   Label: LAB_005d9db9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005d9dba
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005d9dbf
    MOV EAX,dword ptr [EBX + 0x9f8bc]   ; 005d9dc2
    PUSH EAX                            ; 005d9dc8
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005d9dc9
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005d9dce
    TEST EAX,EAX                        ; 005d9dd1
    JZ 0x005d9e95                       ; 005d9dd3
        ;   XREF to: 005d9e95 (CONDITIONAL_JUMP)  ; LAB_005d9e95
    PUSH EDI                            ; 005d9dd9
        ;   Label: LAB_005d9dd9
    PUSH EBX                            ; 005d9dda
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0 ; 005d9ddb
        ;   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005d9de0
    POP EDI                             ; 005d9de3
    POP ESI                             ; 005d9de4
    POP EBX                             ; 005d9de5
    RET                                 ; 005d9de6
    MOV dword ptr [EDI + 0x4],0x0       ; 005d9de7
        ;   Label: LAB_005d9de7
    JMP 0x005d9d4b                      ; 005d9dee
        ;   XREF to: 005d9d4b (UNCONDITIONAL_JUMP)  ; LAB_005d9d4b
    MOV dword ptr [EDI + 0x4],ESI       ; 005d9df3
        ;   Label: LAB_005d9df3
    JMP 0x005d9d73                      ; 005d9df6
        ;   XREF to: 005d9d73 (UNCONDITIONAL_JUMP)  ; LAB_005d9d73
    PUSH ESI                            ; 005d9dfb
        ;   Label: LAB_005d9dfb
    MOV dword ptr [EBX + 0x243c],0x0    ; 005d9dfc
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005d9e06
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005d9e0b
    ADD ESP,0x4                         ; 005d9e0e
    CMP EAX,0x9                         ; 005d9e11
    JZ 0x005d9dd9                       ; 005d9e14
        ;   XREF to: 005d9dd9 (CONDITIONAL_JUMP)  ; LAB_005d9dd9
    PUSH ESI                            ; 005d9e16
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005d9e17
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005d9e1c
    ADD ESP,0x4                         ; 005d9e1f
    CMP EAX,0x8                         ; 005d9e22
    JZ 0x005d9dd9                       ; 005d9e25
        ;   XREF to: 005d9dd9 (CONDITIONAL_JUMP)  ; LAB_005d9dd9
    PUSH 0x1                            ; 005d9e27
    PUSH 0x8                            ; 005d9e29
    PUSH ESI                            ; 005d9e2b
    MOV dword ptr [EBX + 0x2598],0x0    ; 005d9e2c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005d9e36
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005d9e3b
    PUSH 0x0                            ; 005d9e3e
    PUSH 0x42480000                     ; 005d9e40
    PUSH 0x32                           ; 005d9e45
    PUSH EBX                            ; 005d9e47
    MOV EDX,dword ptr [0x0067b9a0]      ; 005d9e48 | g_CGoreInstance | g_CGorePtr
    PUSH EDX                            ; 005d9e4e | g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004ee030 ; 005d9e4f
        ;   XREF to: 004ee030 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_FUN_004ee030(CGore * this_ptr, CDemonActor * actor)
    ADD ESP,0x14                        ; 005d9e54
    MOV ECX,dword ptr [EBX + 0x9f8bc]   ; 005d9e57
    PUSH ECX                            ; 005d9e5d
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005d9e5e
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005d9e63
    PUSH 0x654b69                       ; 005d9e66 | = "svet-die.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005d9e6b
    PUSH EBX                            ; 005d9e71
    CALL dword ptr [EAX + 0x24]         ; 005d9e72
    ADD ESP,0x8                         ; 005d9e75
    MOV dword ptr [EBX + 0x9f8bc],EAX   ; 005d9e78
    PUSH EDI                            ; 005d9e7e
    PUSH EBX                            ; 005d9e7f
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0 ; 005d9e80
        ;   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005d9e85
    POP EDI                             ; 005d9e88
    POP ESI                             ; 005d9e89
    POP EBX                             ; 005d9e8a
    RET                                 ; 005d9e8b
    PUSH 0x1                            ; 005d9e8c
        ;   Label: LAB_005d9e8c
    PUSH 0xb                            ; 005d9e8e
    JMP 0x005d9db9                      ; 005d9e90
        ;   XREF to: 005d9db9 (UNCONDITIONAL_JUMP)  ; LAB_005d9db9
    PUSH 0x654b76                       ; 005d9e95 | = "svet-hurt?.wav"
        ;   Label: LAB_005d9e95
    MOV EAX,dword ptr [EBX + 0x154]     ; 005d9e9a
    PUSH EBX                            ; 005d9ea0
    CALL dword ptr [EAX + 0x24]         ; 005d9ea1
    ADD ESP,0x8                         ; 005d9ea4
    MOV dword ptr [EBX + 0x9f8bc],EAX   ; 005d9ea7
    PUSH EDI                            ; 005d9ead
    PUSH EBX                            ; 005d9eae
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0 ; 005d9eaf
        ;   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005d9eb4
    POP EDI                             ; 005d9eb7
    POP ESI                             ; 005d9eb8
    POP EBX                             ; 005d9eb9
    RET                                 ; 005d9eba

