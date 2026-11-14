; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fire_cpp_CFireball_onCollision_FUN_004aee60(CFireball *this_ptr,CVector3f *collision_normal)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   collision_normal
;
; Referenced Globals:
;   TerminatedCString s_rock_x_wav_005df24c
;   TerminatedCString s_rock_x_wav_005df257
;   undefined4 DAT_0061c010
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createFireball_FUN_004b5e00
;   core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0
;   core_set.cpp_CDemonSet_initCameraShake_FUN_00555ab0
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;   sound_sndmain.cpp_popSfxOptions_FUN_00572b40
;   sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0
;   sound_sndmain.cpp_setNextSfxStaticPosition_FUN_00572780
;   sound_sndmain.cpp_setNextSfxVolume_FUN_005728e0
;   sound_sndmain.cpp_startSfx_FUN_00572d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aee60
        ;   Label: core_fire.cpp_CFireball_onCollision_FUN_004aee60
    PUSH ESI                            ; 004aee61
    PUSH EDI                            ; 004aee62
    PUSH EBP                            ; 004aee63
    MOV EBX,dword ptr [ESP + 0x14]      ; 004aee64
    MOV EDX,dword ptr [EBX + 0x60]      ; 004aee68
    PUSH EDX                            ; 004aee6b
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004aee6c
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    MOV ECX,dword ptr [EBX + 0x4c]      ; 004aee71
    ADD ESP,0x4                         ; 004aee74
    TEST ECX,ECX                        ; 004aee77
    JNZ 0x004aef1d                      ; 004aee79
        ;   XREF to: 004aef1d (CONDITIONAL_JUMP)  ; LAB_004aef1d
    XOR ESI,ESI                         ; 004aee7f
    XOR EDI,EDI                         ; 004aee81
    PUSH EDI                            ; 004aee83
        ;   Label: LAB_004aee83
    PUSH 0x1                            ; 004aee84
    PUSH EDI                            ; 004aee86
    PUSH EBX                            ; 004aee87
    MOV EAX,[0x0061c010]                ; 004aee88 | DAT_0061c010
    PUSH EAX                            ; 004aee8d
    CALL core_fire.cpp_CFireEffect_createFireball_FUN_004b5e00 ; 004aee8e
        ;   XREF to: 004b5e00 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createFireball_FUN_004b5e00(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int lighting_active, ...)
    ADD ESP,0x14                        ; 004aee93
    PUSH 0xffff                         ; 004aee96
    PUSH EDI                            ; 004aee9b
    PUSH 0x10000                        ; 004aee9c
    PUSH 0x10000                        ; 004aeea1
    PUSH EDI                            ; 004aeea6
    PUSH EBX                            ; 004aeea7
    MOV EDX,dword ptr [0x0061c010]      ; 004aeea8 | DAT_0061c010
    PUSH EDX                            ; 004aeeae
    INC ESI                             ; 004aeeaf
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0 ; 004aeeb0
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004aeeb5
    CMP ESI,0x8                         ; 004aeeb8
    JL 0x004aee83                       ; 004aeebb
        ;   XREF to: 004aee83 (CONDITIONAL_JUMP)  ; LAB_004aee83
    PUSH 0x3f800000                     ; 004aeebd
    PUSH 0x0                            ; 004aeec2
    PUSH 0x0                            ; 004aeec4
    MOV ECX,dword ptr [0x00622c18]      ; 004aeec6 | g_CDemonSetPtr
    PUSH 0x42c80000                     ; 004aeecc
    PUSH ECX                            ; 004aeed1 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_initCameraShake_FUN_00555ab0 ; 004aeed2
        ;   XREF to: 00555ab0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initCameraShake_FUN_00555ab0(CDemonSet * this_ptr, float peak, float attack, float sustain, ...)
    ADD ESP,0x14                        ; 004aeed7
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0 ; 004aeeda
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0()
    SUB ESP,0x8                         ; 004aeedf
    FLD float ptr [EBX + 0x8]           ; 004aeee2
    FSTP double ptr [ESP]               ; 004aeee5
    SUB ESP,0x8                         ; 004aeee8
    FLD float ptr [EBX + 0x4]           ; 004aeeeb
    FSTP double ptr [ESP]               ; 004aeeee
    SUB ESP,0x8                         ; 004aeef1
    FLD float ptr [EBX]                 ; 004aeef4
    FSTP double ptr [ESP]               ; 004aeef6
    CALL sound_sndmain.cpp_setNextSfxStaticPosition_FUN_00572780 ; 004aeef9
        ;   XREF to: 00572780 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxStaticPosition_FUN_00572780(double pos_x, double pos_y, double pos_z)
    ADD ESP,0x18                        ; 004aeefe
    PUSH 0x5df24c                       ; 004aef01 | = "rock-x.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 004aef06
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
        ;   Label: LAB_004aef06
    ADD ESP,0x4                         ; 004aef0b
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00572b40 ; 004aef0e
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00572b40()
    MOV EAX,0x1                         ; 004aef13
    POP EBP                             ; 004aef18
    POP EDI                             ; 004aef19
    POP ESI                             ; 004aef1a
    POP EBX                             ; 004aef1b
    RET                                 ; 004aef1c
    CMP ECX,0x2                         ; 004aef1d
        ;   Label: LAB_004aef1d
    JNZ 0x004aef85                      ; 004aef20
        ;   XREF to: 004aef85 (CONDITIONAL_JUMP)  ; LAB_004aef85
    XOR ESI,ESI                         ; 004aef22
    MOV EDI,0x10000                     ; 004aef24
    PUSH 0xffff                         ; 004aef29
        ;   Label: LAB_004aef29
    PUSH 0x2                            ; 004aef2e
    PUSH EDI                            ; 004aef30
    PUSH EDI                            ; 004aef31
    PUSH 0x0                            ; 004aef32
    PUSH EBX                            ; 004aef34
    MOV EBP,dword ptr [0x0061c010]      ; 004aef35 | DAT_0061c010
    PUSH EBP                            ; 004aef3b
    INC ESI                             ; 004aef3c
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0 ; 004aef3d
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004aef42
    CMP ESI,0x8                         ; 004aef45
    JL 0x004aef29                       ; 004aef48
        ;   XREF to: 004aef29 (CONDITIONAL_JUMP)  ; LAB_004aef29
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0 ; 004aef4a
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0()
    SUB ESP,0x8                         ; 004aef4f
    FLD float ptr [EBX + 0x8]           ; 004aef52
    FSTP double ptr [ESP]               ; 004aef55
    SUB ESP,0x8                         ; 004aef58
    FLD float ptr [EBX + 0x4]           ; 004aef5b
    FSTP double ptr [ESP]               ; 004aef5e
    SUB ESP,0x8                         ; 004aef61
    FLD float ptr [EBX]                 ; 004aef64
    FSTP double ptr [ESP]               ; 004aef66
    CALL sound_sndmain.cpp_setNextSfxStaticPosition_FUN_00572780 ; 004aef69
        ;   XREF to: 00572780 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxStaticPosition_FUN_00572780(double pos_x, double pos_y, double pos_z)
    ADD ESP,0x18                        ; 004aef6e
    PUSH 0x3f4ccccd                     ; 004aef71
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005728e0 ; 004aef76
        ;   XREF to: 005728e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_005728e0(float volume)
    ADD ESP,0x4                         ; 004aef7b
    PUSH 0x5df257                       ; 004aef7e | = "rock-x.wav"
    JMP 0x004aef06                      ; 004aef83
        ;   XREF to: 004aef06 (UNCONDITIONAL_JUMP)  ; LAB_004aef06
    XOR EAX,EAX                         ; 004aef85
        ;   Label: LAB_004aef85
    POP EBP                             ; 004aef87
    POP EDI                             ; 004aef88
    POP ESI                             ; 004aef89
    POP EBX                             ; 004aef8a
    RET                                 ; 004aef8b

