; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_fire_cpp_CFireball_onCollision_FUN_00484b60(CVector3f *param_1)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; Referenced Globals:
;   TerminatedCString s_rock_x_wav_0058111c
;   TerminatedCString s_rock_x_wav_00581127
;   undefined4 DAT_005b80f0
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createFireball_FUN_0048b270
;   core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90
;   core_set.cpp_FUN_0050e660
;   sound_sndmain.cpp_killSfx_FUN_00527230
;   sound_sndmain.cpp_popSfxOptions_FUN_005263c0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00526340
;   sound_sndmain.cpp_setNextSfxStaticPosition_FUN_00525f50
;   sound_sndmain.cpp_setNextSfxVolume_FUN_005260f0
;   sound_sndmain.cpp_startSfx_FUN_005265a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484b60
        ;   Label: core_fire.cpp_CFireball_onCollision_FUN_00484b60
    PUSH ESI                            ; 00484b61
    PUSH EDI                            ; 00484b62
    PUSH EBP                            ; 00484b63
    MOV EBX,dword ptr [ESP + 0x14]      ; 00484b64
    MOV EDX,dword ptr [EBX + 0x58]      ; 00484b68
    PUSH EDX                            ; 00484b6b
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00484b6c
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    MOV ECX,dword ptr [EBX + 0x44]      ; 00484b71
    ADD ESP,0x4                         ; 00484b74
    TEST ECX,ECX                        ; 00484b77
    JNZ 0x00484c1d                      ; 00484b79
        ;   XREF to: 00484c1d (CONDITIONAL_JUMP)  ; LAB_00484c1d
    XOR ESI,ESI                         ; 00484b7f
    XOR EDI,EDI                         ; 00484b81
    PUSH EDI                            ; 00484b83
        ;   Label: LAB_00484b83
    PUSH 0x1                            ; 00484b84
    PUSH EDI                            ; 00484b86
    PUSH EBX                            ; 00484b87
    MOV EAX,[0x005b80f0]                ; 00484b88 | DAT_005b80f0
    PUSH EAX                            ; 00484b8d
    CALL core_fire.cpp_CFireEffect_createFireball_FUN_0048b270 ; 00484b8e
        ;   XREF to: 0048b270 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createFireball_FUN_0048b270(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int lighting_active, ...)
    ADD ESP,0x14                        ; 00484b93
    PUSH 0xffff                         ; 00484b96
    PUSH EDI                            ; 00484b9b
    PUSH 0x10000                        ; 00484b9c
    PUSH 0x10000                        ; 00484ba1
    PUSH EDI                            ; 00484ba6
    PUSH EBX                            ; 00484ba7
    MOV EDX,dword ptr [0x005b80f0]      ; 00484ba8 | DAT_005b80f0
    PUSH EDX                            ; 00484bae
    INC ESI                             ; 00484baf
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 00484bb0
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 00484bb5
    CMP ESI,0x8                         ; 00484bb8
    JL 0x00484b83                       ; 00484bbb
        ;   XREF to: 00484b83 (CONDITIONAL_JUMP)  ; LAB_00484b83
    PUSH 0x3f800000                     ; 00484bbd
    PUSH 0x0                            ; 00484bc2
    PUSH 0x0                            ; 00484bc4
    MOV ECX,dword ptr [0x005be368]      ; 00484bc6 | DAT_005be368
    PUSH 0x42c80000                     ; 00484bcc
    PUSH ECX                            ; 00484bd1 | DAT_01e57284
    CALL core_set.cpp_FUN_0050e660      ; 00484bd2
        ;   XREF to: 0050e660 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_0050e660()
    ADD ESP,0x14                        ; 00484bd7
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 00484bda
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
    SUB ESP,0x8                         ; 00484bdf
    FLD float ptr [EBX + 0x8]           ; 00484be2
    FSTP double ptr [ESP]               ; 00484be5
    SUB ESP,0x8                         ; 00484be8
    FLD float ptr [EBX + 0x4]           ; 00484beb
    FSTP double ptr [ESP]               ; 00484bee
    SUB ESP,0x8                         ; 00484bf1
    FLD float ptr [EBX]                 ; 00484bf4
    FSTP double ptr [ESP]               ; 00484bf6
    CALL sound_sndmain.cpp_setNextSfxStaticPosition_FUN_00525f50 ; 00484bf9
        ;   XREF to: 00525f50 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxStaticPosition_FUN_00525f50(double pos_x, double pos_y, double pos_z)
    ADD ESP,0x18                        ; 00484bfe
    PUSH 0x58111c                       ; 00484c01 | = "rock-x.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005265a0 ; 00484c06
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005265a0(char * filename)
        ;   Label: LAB_00484c06
    ADD ESP,0x4                         ; 00484c0b
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 00484c0e
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    MOV EAX,0x1                         ; 00484c13
    POP EBP                             ; 00484c18
    POP EDI                             ; 00484c19
    POP ESI                             ; 00484c1a
    POP EBX                             ; 00484c1b
    RET                                 ; 00484c1c
    CMP ECX,0x2                         ; 00484c1d
        ;   Label: LAB_00484c1d
    JNZ 0x00484c85                      ; 00484c20
        ;   XREF to: 00484c85 (CONDITIONAL_JUMP)  ; LAB_00484c85
    XOR ESI,ESI                         ; 00484c22
    MOV EDI,0x10000                     ; 00484c24
    PUSH 0xffff                         ; 00484c29
        ;   Label: LAB_00484c29
    PUSH 0x2                            ; 00484c2e
    PUSH EDI                            ; 00484c30
    PUSH EDI                            ; 00484c31
    PUSH 0x0                            ; 00484c32
    PUSH EBX                            ; 00484c34
    MOV EBP,dword ptr [0x005b80f0]      ; 00484c35 | DAT_005b80f0
    PUSH EBP                            ; 00484c3b
    INC ESI                             ; 00484c3c
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 00484c3d
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 00484c42
    CMP ESI,0x8                         ; 00484c45
    JL 0x00484c29                       ; 00484c48
        ;   XREF to: 00484c29 (CONDITIONAL_JUMP)  ; LAB_00484c29
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 00484c4a
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
    SUB ESP,0x8                         ; 00484c4f
    FLD float ptr [EBX + 0x8]           ; 00484c52
    FSTP double ptr [ESP]               ; 00484c55
    SUB ESP,0x8                         ; 00484c58
    FLD float ptr [EBX + 0x4]           ; 00484c5b
    FSTP double ptr [ESP]               ; 00484c5e
    SUB ESP,0x8                         ; 00484c61
    FLD float ptr [EBX]                 ; 00484c64
    FSTP double ptr [ESP]               ; 00484c66
    CALL sound_sndmain.cpp_setNextSfxStaticPosition_FUN_00525f50 ; 00484c69
        ;   XREF to: 00525f50 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxStaticPosition_FUN_00525f50(double pos_x, double pos_y, double pos_z)
    ADD ESP,0x18                        ; 00484c6e
    PUSH 0x3f4ccccd                     ; 00484c71
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005260f0 ; 00484c76
        ;   XREF to: 005260f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_005260f0(float volume)
    ADD ESP,0x4                         ; 00484c7b
    PUSH 0x581127                       ; 00484c7e | = "rock-x.wav"
    JMP 0x00484c06                      ; 00484c83
        ;   XREF to: 00484c06 (UNCONDITIONAL_JUMP)  ; LAB_00484c06
    XOR EAX,EAX                         ; 00484c85
        ;   Label: LAB_00484c85
    POP EBP                             ; 00484c87
    POP EDI                             ; 00484c88
    POP ESI                             ; 00484c89
    POP EBX                             ; 00484c8a
    RET                                 ; 00484c8b

