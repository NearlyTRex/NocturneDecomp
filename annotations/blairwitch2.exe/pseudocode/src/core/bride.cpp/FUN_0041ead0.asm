; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bride_cpp_FUN_0041ead0(CBride *param_1,SDamageInfo *param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_ub_die_wav_005cc8d9
;   TerminatedCString s_ub_hurt_wav_005cc8e5
;   undefined4 DAT_005cc8f9
;   undefined4 DAT_00614d30
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_0040d060
;   core_bride.cpp_CBride_processDismemberment_FUN_0041e8a0
;   core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70
;   core_enemy.cpp_FUN_00488890
;   core_fire.cpp_FUN_0049d090
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   core_skeleton.cpp_FUN_00546a90
;   sound_sndmain.cpp_FUN_00550b70
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041ead0
        ;   Label: core_bride.cpp_FUN_0041ead0
    PUSH ESI                            ; 0041ead1
    PUSH EDI                            ; 0041ead2
    PUSH EBP                            ; 0041ead3
    MOV EBP,ESP                         ; 0041ead4
    SUB ESP,0x50                        ; 0041ead6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041ead9
    MOV EDX,dword ptr [EAX + 0x10b24]   ; 0041eadc
    PUSH EDX                            ; 0041eae2
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0041eae3
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    MOV EAX,dword ptr [EBP + 0x18]      ; 0041eae8
    MOV ECX,dword ptr [EAX + 0x28]      ; 0041eaeb
    ADD ESP,0x4                         ; 0041eaee
    CMP ECX,0x7                         ; 0041eaf1
    JZ 0x0041ec48                       ; 0041eaf4
        ;   XREF to: 0041ec48 (CONDITIONAL_JUMP)  ; LAB_0041ec48
    LEA EAX,[EAX]                       ; 0041eafa
    MOV EAX,dword ptr [EBP + 0x18]      ; 0041eb00
        ;   Label: LAB_0041eb00
    CMP dword ptr [EAX + 0x30],0x6c     ; 0041eb03
    JNZ 0x0041eb5f                      ; 0041eb07
        ;   XREF to: 0041eb5f (CONDITIONAL_JUMP)  ; LAB_0041eb5f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041eb09
    PUSH 0x0                            ; 0041eb0c
    ADD EAX,0x2b4                       ; 0041eb0e
    PUSH EAX                            ; 0041eb13
    LEA ESI,[EBP + -0x20]               ; 0041eb14
    LEA EDI,[EBP + -0x38]               ; 0041eb17
    CALL core_skeleton.cpp_FUN_00546a90 ; 0041eb1a
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[EBP + -0x20]               ; 0041eb1f
    ADD ESP,0x8                         ; 0041eb22
    LEA EAX,[EBP + -0x38]               ; 0041eb25
    MOV ECX,dword ptr [EBP + 0x14]      ; 0041eb28
    PUSH EAX                            ; 0041eb2b
    MOVSD ES:EDI,ESI                    ; 0041eb2c
    MOVSD ES:EDI,ESI                    ; 0041eb2d
    MOVSD ES:EDI,ESI                    ; 0041eb2e
    PUSH ECX                            ; 0041eb2f
    LEA ESI,[EBP + -0x2c]               ; 0041eb30
    CALL core_actor.cpp_FUN_00408d70    ; 0041eb33
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0041eb38
    PUSH 0x0                            ; 0041eb3b
    PUSH 0x41200000                     ; 0041eb3d
    PUSH 0x0                            ; 0041eb42
    PUSH 0x0                            ; 0041eb44
    LEA EAX,[EBP + -0x44]               ; 0041eb46
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041eb49
    PUSH EAX                            ; 0041eb4c
    LEA EDI,[EBP + -0x44]               ; 0041eb4d
    LEA ESI,[EBP + -0x2c]               ; 0041eb50
    PUSH EBX                            ; 0041eb53
    MOVSD ES:EDI,ESI                    ; 0041eb54
    MOVSD ES:EDI,ESI                    ; 0041eb55
    MOVSD ES:EDI,ESI                    ; 0041eb56
    CALL core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70 ; 0041eb57
        ;   XREF to: 00426e70 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70(CCharacter * this_ptr, CVector3f * position, int fire_type, int flame_type, ...)
    ADD ESP,0x18                        ; 0041eb5c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0041eb5f
        ;   Label: LAB_0041eb5f
    PUSH ESI                            ; 0041eb62
    MOV EDI,dword ptr [EBP + 0x14]      ; 0041eb63
    PUSH EDI                            ; 0041eb66
    CALL core_bride.cpp_CBride_processDismemberment_FUN_0041e8a0 ; 0041eb67
        ;   XREF to: 0041e8a0 (UNCONDITIONAL_CALL)  ; void core_bride.cpp_CBride_processDismemberment_FUN_0041e8a0(CBride * this_ptr, SDamageInfo * damage_info)
    MOV EAX,ESI                         ; 0041eb6c
    FLD float ptr [EAX + 0x4]           ; 0041eb6e
    MOV EAX,dword ptr [EDI + 0x10b18]   ; 0041eb71
    SHL EAX,0x2                         ; 0041eb77
    FSUBR float ptr [EDI + 0x25a8]      ; 0041eb7a
    ADD EAX,EDI                         ; 0041eb80
    FSTP float ptr [EDI + 0x25a8]       ; 0041eb82
    MOV ECX,dword ptr [EAX + 0x23f4]    ; 0041eb88
    ADD ESP,0x8                         ; 0041eb8e
    TEST ECX,ECX                        ; 0041eb91
    JZ 0x0041eca4                       ; 0041eb93
        ;   XREF to: 0041eca4 (CONDITIONAL_JUMP)  ; LAB_0041eca4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041eb99
        ;   Label: LAB_0041eb99
    FLD float ptr [EAX + 0x25a8]        ; 0041eb9c
    FLDZ                                ; 0041eba2
    LEA EBX,[EAX + 0x2b4]               ; 0041eba4
    FCOMPP                              ; 0041ebaa
    FNSTSW AX                           ; 0041ebac
    SAHF                                ; 0041ebae
    JC 0x0041ecaf                       ; 0041ebaf
        ;   XREF to: 0041ecaf (CONDITIONAL_JUMP)  ; LAB_0041ecaf
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041ebb5
    PUSH EBX                            ; 0041ebb8
    MOV dword ptr [EAX + 0x25a8],0x0    ; 0041ebb9
    CALL core_motion.cpp_FUN_005035c0   ; 0041ebc3
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0041ebc8
    ADD ESP,0x4                         ; 0041ebcb
    CMP EAX,0xe                         ; 0041ebce
    JZ 0x0041ec31                       ; 0041ebd1
        ;   XREF to: 0041ec31 (CONDITIONAL_JUMP)  ; LAB_0041ec31
    CMP EAX,0xd                         ; 0041ebd3
    JZ 0x0041ec31                       ; 0041ebd6
        ;   XREF to: 0041ec31 (CONDITIONAL_JUMP)  ; LAB_0041ec31
    PUSH 0x1                            ; 0041ebd8
    PUSH 0x3f000000                     ; 0041ebda
    CALL core_actor.cpp_FUN_0040d060    ; 0041ebdf
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0041ebe4
    TEST EAX,EAX                        ; 0041ebe7
    SETZ AL                             ; 0041ebe9
    AND EAX,0xff                        ; 0041ebec
    ADD EAX,0xb                         ; 0041ebf1
    PUSH EAX                            ; 0041ebf4
    PUSH EBX                            ; 0041ebf5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041ebf6
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041ebfb
    ADD ESP,0xc                         ; 0041ebfe
    MOV EDI,dword ptr [EAX + 0x10b20]   ; 0041ec01
    PUSH EDI                            ; 0041ec07
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0041ec08
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 0041ec0d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041ec10
    PUSH 0x5cc8d9                       ; 0041ec13 | = "ub-die?.wav"
    MOV EDX,dword ptr [EBP + 0x14]      ; 0041ec18
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0041ec1b
    PUSH EDX                            ; 0041ec21
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041ec22
    CALL dword ptr [EAX + 0x34]         ; 0041ec25
    ADD ESP,0x8                         ; 0041ec28
    MOV dword ptr [EBX + 0x10b20],EAX   ; 0041ec2b
    MOV ECX,dword ptr [EBP + 0x18]      ; 0041ec31
        ;   Label: LAB_0041ec31
    PUSH ECX                            ; 0041ec34
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041ec35
    PUSH EBX                            ; 0041ec38
    CALL core_enemy.cpp_FUN_00488890    ; 0041ec39
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00488890()
    ADD ESP,0x8                         ; 0041ec3e
    MOV ESP,EBP                         ; 0041ec41
    POP EBP                             ; 0041ec43
    POP EDI                             ; 0041ec44
    POP ESI                             ; 0041ec45
    POP EBX                             ; 0041ec46
    RET                                 ; 0041ec47
    FLD float ptr [EAX + 0x4]           ; 0041ec48
        ;   Label: LAB_0041ec48
    FLD ST0                             ; 0041ec4b
    FMUL double ptr [0x005cc8f9]        ; 0041ec4d | DAT_005cc8f9
    ADD EAX,0x1c                        ; 0041ec53
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041ec56
    PUSH EAX                            ; 0041ec59
    LEA ESI,[EBP + -0x50]               ; 0041ec5a
    LEA EDI,[EBP + -0x14]               ; 0041ec5d
    PUSH EBX                            ; 0041ec60
    FSTP ST1                            ; 0041ec61
    FSTP float ptr [EAX + -0x18]        ; 0041ec63
    CALL core_actor.cpp_FUN_00408d70    ; 0041ec66
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[EBP + -0x50]               ; 0041ec6b
    XOR EBX,EBX                         ; 0041ec6e
    MOVSD ES:EDI,ESI                    ; 0041ec70
    MOVSD ES:EDI,ESI                    ; 0041ec71
    MOVSD ES:EDI,ESI                    ; 0041ec72
    ADD ESP,0x8                         ; 0041ec73
    MOV ESI,0x4000                      ; 0041ec76
    PUSH 0xffff                         ; 0041ec7b
        ;   Label: LAB_0041ec7b
    PUSH 0x0                            ; 0041ec80
    PUSH ESI                            ; 0041ec82
    PUSH ESI                            ; 0041ec83
    PUSH 0x0                            ; 0041ec84
    LEA EAX,[EBP + -0x14]               ; 0041ec86
    PUSH EAX                            ; 0041ec89
    MOV EDI,dword ptr [0x00614d30]      ; 0041ec8a | DAT_00614d30
    PUSH EDI                            ; 0041ec90
    INC EBX                             ; 0041ec91
    CALL core_fire.cpp_FUN_0049d090     ; 0041ec92
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_0049d090(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 0041ec97
    CMP EBX,0x5                         ; 0041ec9a
    JL 0x0041ec7b                       ; 0041ec9d
        ;   XREF to: 0041ec7b (CONDITIONAL_JUMP)  ; LAB_0041ec7b
    JMP 0x0041eb00                      ; 0041ec9f
        ;   XREF to: 0041eb00 (UNCONDITIONAL_JUMP)  ; LAB_0041eb00
    MOV dword ptr [EDI + 0x25a8],ECX    ; 0041eca4
        ;   Label: LAB_0041eca4
    JMP 0x0041eb99                      ; 0041ecaa
        ;   XREF to: 0041eb99 (UNCONDITIONAL_JUMP)  ; LAB_0041eb99
    PUSH 0x1                            ; 0041ecaf
        ;   Label: LAB_0041ecaf
    PUSH 0x3f000000                     ; 0041ecb1
    CALL core_actor.cpp_FUN_0040d060    ; 0041ecb6
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0041ecbb
    TEST EAX,EAX                        ; 0041ecbe
    SETZ AL                             ; 0041ecc0
    AND EAX,0xff                        ; 0041ecc3
    ADD EAX,0x7                         ; 0041ecc8
    PUSH EAX                            ; 0041eccb
    PUSH EBX                            ; 0041eccc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041eccd
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041ecd2
    ADD ESP,0xc                         ; 0041ecd5
    MOV EBX,dword ptr [EAX + 0x10b20]   ; 0041ecd8
    PUSH EBX                            ; 0041ecde
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0041ecdf
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0041ece4
    TEST EAX,EAX                        ; 0041ece7
    JNZ 0x0041ec31                      ; 0041ece9
        ;   XREF to: 0041ec31 (CONDITIONAL_JUMP)  ; LAB_0041ec31
    PUSH 0x5cc8e5                       ; 0041ecef | = "ub-hurt?.wav"
    MOV ESI,dword ptr [EBP + 0x14]      ; 0041ecf4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041ecf7
    PUSH ESI                            ; 0041ecfa
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0041ecfb
    CALL dword ptr [EAX + 0x34]         ; 0041ed01
    ADD ESP,0x8                         ; 0041ed04
    MOV dword ptr [ESI + 0x10b20],EAX   ; 0041ed07
    JMP 0x0041ec31                      ; 0041ed0d
        ;   XREF to: 0041ec31 (UNCONDITIONAL_JUMP)  ; LAB_0041ec31

