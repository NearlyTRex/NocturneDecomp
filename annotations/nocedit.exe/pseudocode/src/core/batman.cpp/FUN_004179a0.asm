; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_batman.cpp_FUN_004179a0()
;
; Local Variables:
; undefined1       Stack[-0x3c]:1  local_3c
; undefined1       Stack[-0x30]:1  local_30
; undefined1       Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   TerminatedCString s_batman_die_wav_0061597d
;   TerminatedCString s_batman_hurt_wav_0061598c
;   double DOUBLE_0061599d = 2
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CFireEffect g_CFireEffectInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_batman.cpp_FUN_00417660
;   core_charactr.cpp_CCharacter_FUN_0042b5b0
;   core_enemy.cpp_FUN_004a9f10
;   core_fire.cpp_CFireEffect_FUN_004c79d0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004179a0
        ;   Label: core_batman.cpp_FUN_004179a0
    PUSH ESI                            ; 004179a1
    PUSH EDI                            ; 004179a2
    PUSH EBP                            ; 004179a3
    SUB ESP,0x2c                        ; 004179a4
    MOV ESI,dword ptr [ESP + 0x40]      ; 004179a7
    MOV EDI,dword ptr [ESP + 0x44]      ; 004179ab
    MOV EDX,dword ptr [ESI + 0xbf74]    ; 004179af
    PUSH EDX                            ; 004179b5
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004179b6 | int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004179bb
    MOV ECX,dword ptr [ESI + 0xbf6c]    ; 004179be
    PUSH ECX                            ; 004179c4
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004179c5 | int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
    MOV EBX,dword ptr [EDI + 0x28]      ; 004179ca
    ADD ESP,0x4                         ; 004179cd
    CMP EBX,0x7                         ; 004179d0
    JZ 0x00417ac7                       ; 004179d3 | LAB_00417ac7
        ;   XREF to: 00417ac7 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 004179d9
    NOP                                 ; 004179df
    CMP dword ptr [EDI + 0x30],0x6c     ; 004179e0
        ;   Label: LAB_004179e0
    JNZ 0x00417a24                      ; 004179e4 | LAB_00417a24
        ;   XREF to: 00417a24 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 004179e6
    LEA EAX,[ESP + 0x4]                 ; 004179e8
    PUSH EAX                            ; 004179ec
    LEA EAX,[ESI + 0x158]               ; 004179ed
    PUSH EAX                            ; 004179f3
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004179f4 | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004179f9
    PUSH EAX                            ; 004179fc
    LEA EAX,[ESP + 0x1c]                ; 004179fd
    PUSH EAX                            ; 00417a01
    PUSH ESI                            ; 00417a02
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00417a03 | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00417a08
    PUSH 0x0                            ; 00417a0b
    PUSH 0x41200000                     ; 00417a0d
    PUSH 0x0                            ; 00417a12
    PUSH 0x0                            ; 00417a14
    LEA EAX,[ESP + 0x28]                ; 00417a16
    PUSH EAX                            ; 00417a1a
    PUSH ESI                            ; 00417a1b
    CALL core_charactr.cpp_CCharacter_FUN_0042b5b0 ; 00417a1c | void core_charactr.cpp_CCharacter_FUN_0042b5b0(CCharacter * this_ptr)
        ;   XREF to: 0042b5b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00417a21
    PUSH EDI                            ; 00417a24
        ;   Label: LAB_00417a24
    PUSH ESI                            ; 00417a25
    CALL core_batman.cpp_FUN_00417660   ; 00417a26 | undefined core_batman.cpp_FUN_00417660()
        ;   XREF to: 00417660 (UNCONDITIONAL_CALL)
    FLD float ptr [EDI + 0x4]           ; 00417a2b
    ADD ESP,0x8                         ; 00417a2e
    FSUBR float ptr [ESI + 0x243c]      ; 00417a31
    LEA EBX,[ESI + 0x158]               ; 00417a37
    FST float ptr [ESI + 0x243c]        ; 00417a3d
    FLDZ                                ; 00417a43
    FCOMPP                              ; 00417a45
    FNSTSW AX                           ; 00417a47
    SAHF                                ; 00417a49
    JNC 0x00417b19                      ; 00417a4a | LAB_00417b19
        ;   XREF to: 00417b19 (CONDITIONAL_JUMP)
    PUSH 0x2                            ; 00417a50
    PUSH 0x0                            ; 00417a52
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 00417a54 | int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00417a59
    MOV EBP,EAX                         ; 00417a5c
    TEST EAX,EAX                        ; 00417a5e
    JNZ 0x00417a6f                      ; 00417a60 | LAB_00417a6f
        ;   XREF to: 00417a6f (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 00417a62
    PUSH 0x4                            ; 00417a64
    PUSH EBX                            ; 00417a66
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00417a67 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00417a6c
    CMP EBP,0x1                         ; 00417a6f
        ;   Label: LAB_00417a6f
    JNZ 0x00417a86                      ; 00417a72 | LAB_00417a86
        ;   XREF to: 00417a86 (CONDITIONAL_JUMP)
    PUSH EBP                            ; 00417a74
    PUSH 0x5                            ; 00417a75
    LEA EAX,[ESI + 0x158]               ; 00417a77
    PUSH EAX                            ; 00417a7d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00417a7e | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00417a83
    CMP EBP,0x2                         ; 00417a86
        ;   Label: LAB_00417a86
    JNZ 0x00417a9e                      ; 00417a89 | LAB_00417a9e
        ;   XREF to: 00417a9e (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 00417a8b
    PUSH 0x6                            ; 00417a8d
    LEA EAX,[ESI + 0x158]               ; 00417a8f
    PUSH EAX                            ; 00417a95
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00417a96 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00417a9b
    MOV ECX,dword ptr [ESI + 0xbf70]    ; 00417a9e
        ;   Label: LAB_00417a9e
    PUSH ECX                            ; 00417aa4
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00417aa5 | int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00417aaa
    TEST EAX,EAX                        ; 00417aad
    JZ 0x00417b83                       ; 00417aaf | LAB_00417b83
        ;   XREF to: 00417b83 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00417ab5
        ;   Label: LAB_00417ab5
    PUSH ESI                            ; 00417ab6
    CALL core_enemy.cpp_FUN_004a9f10    ; 00417ab7 | undefined core_enemy.cpp_FUN_004a9f10()
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00417abc
    ADD ESP,0x2c                        ; 00417abf
    POP EBP                             ; 00417ac2
    POP EDI                             ; 00417ac3
    POP ESI                             ; 00417ac4
    POP EBX                             ; 00417ac5
    RET                                 ; 00417ac6
    FLD float ptr [EDI + 0x4]           ; 00417ac7
        ;   Label: LAB_00417ac7
    LEA EAX,[EDI + 0x1c]                ; 00417aca
    FLD ST0                             ; 00417acd
    FMUL double ptr [0x0061599d]        ; 00417acf | double DOUBLE_0061599d
    PUSH EAX                            ; 00417ad5
    LEA EAX,[ESP + 0x10]                ; 00417ad6
    XOR EBX,EBX                         ; 00417ada
    PUSH EAX                            ; 00417adc
    FSTP ST1                            ; 00417add
    PUSH ESI                            ; 00417adf
    FSTP float ptr [EDI + 0x4]          ; 00417ae0
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00417ae3 | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00417ae8
    MOV EBP,0x4000                      ; 00417aeb
    PUSH 0xffff                         ; 00417af0
        ;   Label: LAB_00417af0
    PUSH 0x0                            ; 00417af5
    PUSH EBP                            ; 00417af7
    PUSH EBP                            ; 00417af8
    PUSH 0x0                            ; 00417af9
    LEA EAX,[ESP + 0x20]                ; 00417afb
    PUSH EAX                            ; 00417aff
    MOV EAX,[0x0067a3d0]                ; 00417b00 | CFireEffect g_CFireEffectInstance | CFireEffect * g_CFireEffectPtr
    PUSH EAX                            ; 00417b05 | CFireEffect g_CFireEffectInstance
    INC EBX                             ; 00417b06
    CALL core_fire.cpp_CFireEffect_FUN_004c79d0 ; 00417b07 | void core_fire.cpp_CFireEffect_FUN_004c79d0(CFireEffect * this_ptr)
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x1c                        ; 00417b0c
    CMP EBX,0x5                         ; 00417b0f
    JL 0x00417af0                       ; 00417b12 | LAB_00417af0
        ;   XREF to: 00417af0 (CONDITIONAL_JUMP)
    JMP 0x004179e0                      ; 00417b14 | LAB_004179e0
        ;   XREF to: 004179e0 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 00417b19
        ;   Label: LAB_00417b19
    MOV dword ptr [ESI + 0x243c],0x0    ; 00417b1a
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00417b24 | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00417b29
    ADD ESP,0x4                         ; 00417b2c
    CMP EAX,0x7                         ; 00417b2f
    JZ 0x00417ab5                       ; 00417b32 | LAB_00417ab5
        ;   XREF to: 00417ab5 (CONDITIONAL_JUMP)
    CMP EAX,0x8                         ; 00417b34
    JZ 0x00417ab5                       ; 00417b37 | LAB_00417ab5
        ;   XREF to: 00417ab5 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 00417b3d
    PUSH 0x7                            ; 00417b3f
    PUSH EBX                            ; 00417b41
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00417b42 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00417b47
    MOV EBX,dword ptr [ESI + 0xbf70]    ; 00417b4a
    PUSH EBX                            ; 00417b50
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 00417b51 | int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00417b56
    PUSH 0x61597d                       ; 00417b59 | = "batman-die.wav" | s_batman_die_wav_0061597d = batman-die.wav
    MOV EAX,dword ptr [ESI + 0x154]     ; 00417b5e
    PUSH ESI                            ; 00417b64
    CALL dword ptr [EAX + 0x24]         ; 00417b65
    ADD ESP,0x8                         ; 00417b68
    MOV dword ptr [ESI + 0xbf70],EAX    ; 00417b6b
    PUSH EDI                            ; 00417b71
    PUSH ESI                            ; 00417b72
    CALL core_enemy.cpp_FUN_004a9f10    ; 00417b73 | undefined core_enemy.cpp_FUN_004a9f10()
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00417b78
    ADD ESP,0x2c                        ; 00417b7b
    POP EBP                             ; 00417b7e
    POP EDI                             ; 00417b7f
    POP ESI                             ; 00417b80
    POP EBX                             ; 00417b81
    RET                                 ; 00417b82
    PUSH 0x61598c                       ; 00417b83 | = "batman-hurt?.wav" | s_batman_hurt_wav_0061598c = batman-hurt?.wav
        ;   Label: LAB_00417b83
    MOV EAX,dword ptr [ESI + 0x154]     ; 00417b88
    PUSH ESI                            ; 00417b8e
    CALL dword ptr [EAX + 0x24]         ; 00417b8f
    ADD ESP,0x8                         ; 00417b92
    MOV dword ptr [ESI + 0xbf70],EAX    ; 00417b95
    PUSH EDI                            ; 00417b9b
    PUSH ESI                            ; 00417b9c
    CALL core_enemy.cpp_FUN_004a9f10    ; 00417b9d | undefined core_enemy.cpp_FUN_004a9f10()
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00417ba2
    ADD ESP,0x2c                        ; 00417ba5
    POP EBP                             ; 00417ba8
    POP EDI                             ; 00417ba9
    POP ESI                             ; 00417baa
    POP EBX                             ; 00417bab
    RET                                 ; 00417bac

