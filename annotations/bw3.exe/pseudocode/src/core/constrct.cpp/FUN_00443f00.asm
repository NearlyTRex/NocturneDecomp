; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_constrct_cpp_FUN_00443f00(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_stick_leaps_wav_005b9778
;   TerminatedCString s_stick_hurt_growl_wav_005b9788
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_construc.cpp_FUN_00444110
;   core_enemy.cpp_FUN_00489b80
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   sound_sndmain.cpp_FUN_00556700
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443f00
        ;   Label: core_constrct.cpp_FUN_00443f00
    PUSH ESI                            ; 00443f01
    PUSH EDI                            ; 00443f02
    MOV EBX,dword ptr [ESP + 0x10]      ; 00443f03
    MOV EDI,dword ptr [ESP + 0x14]      ; 00443f07
    MOV EDX,dword ptr [EBX + 0xd108]    ; 00443f0b
    PUSH EDX                            ; 00443f11
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 00443f12
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 00443f17
    MOV ECX,dword ptr [EBX + 0xd100]    ; 00443f1a
    PUSH ECX                            ; 00443f20
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 00443f21
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 00443f26
    MOV ESI,dword ptr [EBX + 0xd0f0]    ; 00443f29
    PUSH ESI                            ; 00443f2f
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 00443f30
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 00443f35
    LEA ESI,[EBX + 0x158]               ; 00443f38
    PUSH ESI                            ; 00443f3e
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00443f3f
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00443f44
    ADD ESP,0x4                         ; 00443f47
    CMP EAX,0xc                         ; 00443f4a
    JZ 0x00443fcf                       ; 00443f4d
        ;   XREF to: 00443fcf (CONDITIONAL_JUMP)  ; LAB_00443fcf
    CMP dword ptr [EBX + 0xd844],0x1    ; 00443f53
    JZ 0x00443fcb                       ; 00443f5a
        ;   XREF to: 00443fcb (CONDITIONAL_JUMP)  ; LAB_00443fcb
    FLD float ptr [EDI + 0x4]           ; 00443f5c
    FSUBR float ptr [EBX + 0x2538]      ; 00443f5f
    FST float ptr [EBX + 0x2538]        ; 00443f65
    FLDZ                                ; 00443f6b
    FCOMPP                              ; 00443f6d
    FNSTSW AX                           ; 00443f6f
    SAHF                                ; 00443f71
    JNC 0x00443fe0                      ; 00443f72
        ;   XREF to: 00443fe0 (CONDITIONAL_JUMP)  ; LAB_00443fe0
    PUSH 0x1                            ; 00443f74
    PUSH 0x2                            ; 00443f76
    PUSH 0x0                            ; 00443f78
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00443f7a
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00443f7f
    ADD EAX,0x7                         ; 00443f82
    PUSH EAX                            ; 00443f85
    PUSH ESI                            ; 00443f86
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00443f87
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00443f8c
    MOV EAX,dword ptr [EBX + 0xd104]    ; 00443f8f
    PUSH EAX                            ; 00443f95
    CALL sound_sndmain.cpp_FUN_00556700 ; 00443f96
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00443f9b
    TEST EAX,EAX                        ; 00443f9e
    JNZ 0x00443fba                      ; 00443fa0
        ;   XREF to: 00443fba (CONDITIONAL_JUMP)  ; LAB_00443fba
    PUSH 0x5b9788                       ; 00443fa2 | = "stick-hurt_growl.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00443fa7
    PUSH EBX                            ; 00443fad
    CALL dword ptr [EAX + 0x2c]         ; 00443fae
    ADD ESP,0x8                         ; 00443fb1
    MOV dword ptr [EBX + 0xd104],EAX    ; 00443fb4
    PUSH EDI                            ; 00443fba
        ;   Label: LAB_00443fba
    PUSH EBX                            ; 00443fbb
    MOV dword ptr [EDI + 0x8],0x0       ; 00443fbc
    CALL core_enemy.cpp_FUN_00489b80    ; 00443fc3
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489b80()
    ADD ESP,0x8                         ; 00443fc8
    POP EDI                             ; 00443fcb
        ;   Label: LAB_00443fcb
    POP ESI                             ; 00443fcc
    POP EBX                             ; 00443fcd
    RET                                 ; 00443fce
    PUSH 0x1                            ; 00443fcf
        ;   Label: LAB_00443fcf
    PUSH 0xe                            ; 00443fd1
    PUSH ESI                            ; 00443fd3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00443fd4
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00443fd9
    POP EDI                             ; 00443fdc
    POP ESI                             ; 00443fdd
    POP EBX                             ; 00443fde
    RET                                 ; 00443fdf
    PUSH 0x5b9778                       ; 00443fe0 | = "stick-leaps.wav"
        ;   Label: LAB_00443fe0
    MOV EAX,dword ptr [EBX + 0x154]     ; 00443fe5
    PUSH EBX                            ; 00443feb
    MOV dword ptr [EBX + 0x2538],0x3f800000 ; 00443fec
    CALL dword ptr [EAX + 0x2c]         ; 00443ff6
    ADD ESP,0x8                         ; 00443ff9
    PUSH EBX                            ; 00443ffc
    MOV dword ptr [EBX + 0xd10c],EAX    ; 00443ffd
    CALL core_construc.cpp_FUN_00444110 ; 00444003
        ;   XREF to: 00444110 (UNCONDITIONAL_CALL)  ; undefined core_construc.cpp_FUN_00444110()
    ADD ESP,0x4                         ; 00444008
    JMP 0x00443fba                      ; 0044400b
        ;   XREF to: 00443fba (UNCONDITIONAL_JUMP)  ; LAB_00443fba

