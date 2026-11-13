; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bride_cpp_CBride_process_FUN_00423b70(CBride *this_ptr,float delta_time)
;
; Parameters:
; CBride *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_ub_attack_wav_005d4f09
;   TerminatedCString s_ub_howl_wav_005d4f18
;   TerminatedCString s_ub_attack_wav_005d4f25
;   undefined4 DAT_005d4f38
;   undefined4 DAT_005d4f40
;   undefined4 DAT_005d4f48
;   undefined4 DAT_005d4f50
;   undefined4 DAT_005d4f58
;   undefined4 DAT_005d4f60
;   undefined4 DAT_005d4f68
;   undefined4 DAT_005d4f70
;   undefined4 DAT_005fd08c
;   CGore* g_CGorePtr = 01cd0e3c
;   undefined4 DAT_007c5340
;   undefined4 DAT_007c5388
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00430b60
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_00430960
;   core_charactr.cpp_FUN_00430a90
;   core_charactr.cpp_FUN_00435320
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423b70
        ;   Label: core_bride.cpp_CBride_process_FUN_00423b70
    PUSH ESI                            ; 00423b71
    PUSH EDI                            ; 00423b72
    PUSH EBP                            ; 00423b73
    MOV EBP,ESP                         ; 00423b74
    SUB ESP,0x2a8                       ; 00423b76
    SUB EBP,0x7a                        ; 00423b7c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00423b7f
    PUSH dword ptr [EBP + 0x92]         ; 00423b85
    PUSH EBX                            ; 00423b8b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 00423b8c
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00423b91
    TEST EAX,EAX                        ; 00423b94
    JZ 0x0042482e                       ; 00423b96
        ;   XREF to: 0042482e (CONDITIONAL_JUMP)  ; LAB_0042482e
    FLD float ptr [EBX + 0xc290]        ; 00423b9c
    FLDZ                                ; 00423ba2
    FCOMPP                              ; 00423ba4
    FNSTSW AX                           ; 00423ba6
    SAHF                                ; 00423ba8
    JA 0x00423bbd                       ; 00423ba9
        ;   XREF to: 00423bbd (CONDITIONAL_JUMP)  ; LAB_00423bbd
    FLD float ptr [EBX + 0xc290]        ; 00423bab
    FSUB float ptr [EBP + 0x92]         ; 00423bb1
    FSTP float ptr [EBX + 0xc290]       ; 00423bb7
    LEA ESI,[EBX + 0x158]               ; 00423bbd
        ;   Label: LAB_00423bbd
    MOV EDX,0xbf800000                  ; 00423bc3
    PUSH ESI                            ; 00423bc8
    MOV dword ptr [EBP + 0x6e],EDX      ; 00423bc9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00423bcc
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00423bd1
    ADD ESP,0x4                         ; 00423bd4
    CMP EAX,0x5                         ; 00423bd7
    JNC 0x0042455f                      ; 00423bda
        ;   XREF to: 0042455f (CONDITIONAL_JUMP)  ; LAB_0042455f
    TEST EAX,EAX                        ; 00423be0
    JBE 0x00423dc3                      ; 00423be2
        ;   XREF to: 00423dc3 (CONDITIONAL_JUMP)  ; LAB_00423dc3
    CMP EAX,0x1                         ; 00423be8
    JNZ 0x00423ce1                      ; 00423beb
        ;   XREF to: 00423ce1 (CONDITIONAL_JUMP)  ; LAB_00423ce1
    FLD float ptr [EBX + 0xc290]        ; 00423bf1
    FLDZ                                ; 00423bf7
    FCOMPP                              ; 00423bf9
    FNSTSW AX                           ; 00423bfb
    SAHF                                ; 00423bfd
    JC 0x00423c42                       ; 00423bfe
        ;   XREF to: 00423c42 (CONDITIONAL_JUMP)  ; LAB_00423c42
    PUSH 0x41a00000                     ; 00423c00
    PUSH 0x41200000                     ; 00423c05
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00423c0a
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    ADD ESP,0x8                         ; 00423c0f
    PUSH 0x1                            ; 00423c12
    MOV dword ptr [EBP + 0x76],EAX      ; 00423c14
    PUSH 0x3                            ; 00423c17
    FLD float ptr [EBP + 0x76]          ; 00423c19
    PUSH ESI                            ; 00423c1c
    FSTP float ptr [EBX + 0xc290]       ; 00423c1d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00423c23
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00423c28
    MOV ESI,dword ptr [EBX + 0xc294]    ; 00423c2b
    PUSH ESI                            ; 00423c31
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 00423c32
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00423c37
    TEST EAX,EAX                        ; 00423c3a
    JZ 0x00423e6b                       ; 00423c3c
        ;   XREF to: 00423e6b (CONDITIONAL_JUMP)  ; LAB_00423e6b
    FLD float ptr [EBX + 0xc1d0]        ; 00423c42
        ;   Label: LAB_00423c42
    FMUL double ptr [0x005d4f58]        ; 00423c48 | DAT_005d4f58
    FLD float ptr [EBP + 0x92]          ; 00423c4e
    FLD ST0                             ; 00423c54
    FMUL float ptr [EBX + 0xc1d0]       ; 00423c56
    FXCH                                ; 00423c5c
    FMULP ST2                           ; 00423c5e
    SUB ESP,0x4                         ; 00423c60
    FXCH                                ; 00423c63
    FSTP float ptr [EBX + 0x2524]       ; 00423c65
    FSTP float ptr [ESP]                ; 00423c6b
    PUSH EBX                            ; 00423c6e
    CALL core_charactr.cpp_FUN_00435320 ; 00423c6f
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    MOV EAX,dword ptr [EBX + 0xc274]    ; 00423c74
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00423c7a
    ADD ESP,0x8                         ; 00423c81
    TEST EDX,EDX                        ; 00423c84
    JZ 0x00423e9f                       ; 00423c86
        ;   XREF to: 00423e9f (CONDITIONAL_JUMP)  ; LAB_00423e9f
    MOV EAX,dword ptr [EBX + 0xc288]    ; 00423c8c
        ;   Label: LAB_00423c8c
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00423c92
    JZ 0x00423eb3                       ; 00423c9a
        ;   XREF to: 00423eb3 (CONDITIONAL_JUMP)  ; LAB_00423eb3
    PUSH dword ptr [EBP + 0x92]         ; 00423ca0
        ;   Label: LAB_00423ca0
    MOV EAX,dword ptr [EBX + 0x154]     ; 00423ca6
    PUSH EBX                            ; 00423cac
    CALL dword ptr [EAX + 0x144]        ; 00423cad
    ADD ESP,0x8                         ; 00423cb3
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00423cb6
    LEA ESI,[EBX + 0x158]               ; 00423cbc
    TEST EAX,EAX                        ; 00423cc2
    JNZ 0x00423f44                      ; 00423cc4
        ;   XREF to: 00423f44 (CONDITIONAL_JUMP)  ; LAB_00423f44
    PUSH dword ptr [EBP + 0x92]         ; 00423cca
    PUSH EBX                            ; 00423cd0
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 00423cd1
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00423cd6
    TEST EAX,EAX                        ; 00423cd9
    JZ 0x00423f33                       ; 00423cdb
        ;   XREF to: 00423f33 (CONDITIONAL_JUMP)  ; LAB_00423f33
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 00423ce1
        ;   Label: LAB_00423ce1
    JNZ 0x0042457c                      ; 00423ce8
        ;   XREF to: 0042457c (CONDITIONAL_JUMP)  ; LAB_0042457c
    LEA EAX,[EBX + 0x249c]              ; 00423cee
        ;   Label: LAB_00423cee
    MOV dword ptr [EAX + 0x8],0x0       ; 00423cf4
    FLD float ptr [EBP + 0x92]          ; 00423cfb
    MOV EDX,dword ptr [EAX + 0x8]       ; 00423d01
    MOV dword ptr [EAX + 0x4],EDX       ; 00423d04
    MOV EDX,dword ptr [EAX + 0x4]       ; 00423d07
    MOV dword ptr [EAX],EDX             ; 00423d0a
    FMUL float ptr [EBX + 0xc1d0]       ; 00423d0c
    LEA ESI,[EBX + 0x158]               ; 00423d12
    FSTP float ptr [EBP + 0x66]         ; 00423d18
    FLD float ptr [EBP + 0x66]          ; 00423d1b
        ;   Label: LAB_00423d1b
    FLDZ                                ; 00423d1e
    FCOMPP                              ; 00423d20
    FNSTSW AX                           ; 00423d22
    SAHF                                ; 00423d24
    JNC 0x0042463c                      ; 00423d25
        ;   XREF to: 0042463c (CONDITIONAL_JUMP)  ; LAB_0042463c
    LEA EAX,[EBP + 0x66]                ; 00423d2b
    PUSH EAX                            ; 00423d2e
    PUSH ESI                            ; 00423d2f
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 00423d30
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00423d35
    CMP EAX,0x11                        ; 00423d38
    JZ 0x00423d1b                       ; 00423d3b
        ;   XREF to: 00423d1b (CONDITIONAL_JUMP)  ; LAB_00423d1b
    PUSH EAX                            ; 00423d3d
    PUSH EBX                            ; 00423d3e
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 00423d3f
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00423d44
    JMP 0x00423d1b                      ; 00423d47
        ;   XREF to: 00423d1b (UNCONDITIONAL_JUMP)  ; LAB_00423d1b
    MOV ECX,dword ptr [EBX + 0xc1d4]    ; 00423d49
        ;   Label: LAB_00423d49
    TEST ECX,ECX                        ; 00423d4f
    JNZ 0x00423ce1                      ; 00423d51
        ;   XREF to: 00423ce1 (CONDITIONAL_JUMP)  ; LAB_00423ce1
    PUSH ECX                            ; 00423d53
    PUSH ESI                            ; 00423d54
    LEA ESI,[EBP + 0x2a]                ; 00423d55
    LEA EDI,[EBP + 0x12]                ; 00423d58
    CALL core_skeleton.cpp_FUN_00569040 ; 00423d5b
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 00423d60
    LEA EAX,[EBP + 0x12]                ; 00423d63
    LEA ESI,[EBP + 0x2a]                ; 00423d66
    PUSH EAX                            ; 00423d69
    MOVSD ES:EDI,ESI                    ; 00423d6a
    MOVSD ES:EDI,ESI                    ; 00423d6b
    MOVSD ES:EDI,ESI                    ; 00423d6c
    PUSH EBX                            ; 00423d6d
    LEA ESI,[EBP + 0xffffff46]          ; 00423d6e
    LEA EDI,[EBP + -0x72]               ; 00423d74
    CALL core_actor.cpp_FUN_00408b40    ; 00423d77
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00423d7c
    LEA ESI,[EBP + 0xffffff46]          ; 00423d7f
    LEA EAX,[EBP + -0x72]               ; 00423d85
    PUSH 0x0                            ; 00423d88
    MOVSD ES:EDI,ESI                    ; 00423d8a
    MOVSD ES:EDI,ESI                    ; 00423d8b
    MOVSD ES:EDI,ESI                    ; 00423d8c
    PUSH EAX                            ; 00423d8d
    MOV ESI,dword ptr [0x0061dca4]      ; 00423d8e | g_CGorePtr
    PUSH ESI                            ; 00423d94
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004e62e0 ; 00423d95
        ;   XREF to: 004e62e0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004e62e0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 00423d9a
    PUSH 0x41c80000                     ; 00423d9d
    PUSH 0x32                           ; 00423da2
    MOV EAX,dword ptr [EBX + 0x154]     ; 00423da4
    PUSH EBX                            ; 00423daa
    CALL dword ptr [EAX + 0xa8]         ; 00423dab
    ADD ESP,0xc                         ; 00423db1
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 00423db4
    JMP 0x00423ce1                      ; 00423dbe
        ;   XREF to: 00423ce1 (UNCONDITIONAL_JUMP)  ; LAB_00423ce1
    PUSH dword ptr [EBP + 0x92]         ; 00423dc3
        ;   Label: LAB_00423dc3
    PUSH EBX                            ; 00423dc9
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 00423dca
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00423dcf
    TEST EAX,EAX                        ; 00423dd2
    JZ 0x00423dee                       ; 00423dd4
        ;   XREF to: 00423dee (CONDITIONAL_JUMP)  ; LAB_00423dee
    PUSH 0x1                            ; 00423dd6
    PUSH 0x1                            ; 00423dd8
    LEA EAX,[EBX + 0x158]               ; 00423dda
    PUSH EAX                            ; 00423de0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00423de1
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00423de6
    JMP 0x00423ce1                      ; 00423de9
        ;   XREF to: 00423ce1 (UNCONDITIONAL_JUMP)  ; LAB_00423ce1
    PUSH dword ptr [EBP + 0x92]         ; 00423dee
        ;   Label: LAB_00423dee
    MOV EAX,dword ptr [EBX + 0x154]     ; 00423df4
    PUSH EBX                            ; 00423dfa
    CALL dword ptr [EAX + 0x144]        ; 00423dfb
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00423e01
    ADD ESP,0x8                         ; 00423e07
    TEST EAX,EAX                        ; 00423e0a
    JZ 0x00423ce1                       ; 00423e0c
        ;   XREF to: 00423ce1 (CONDITIONAL_JUMP)  ; LAB_00423ce1
    PUSH 0x1                            ; 00423e12
    PUSH 0x1                            ; 00423e14
    PUSH ESI                            ; 00423e16
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00423e17
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00423e1c
    MOV EDX,dword ptr [EBX + 0xc294]    ; 00423e1f
    PUSH EDX                            ; 00423e25
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 00423e26
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00423e2b
    TEST EAX,EAX                        ; 00423e2e
    JNZ 0x00423ce1                      ; 00423e30
        ;   XREF to: 00423ce1 (CONDITIONAL_JUMP)  ; LAB_00423ce1
    MOV ECX,dword ptr [EBX + 0xc298]    ; 00423e36
    PUSH ECX                            ; 00423e3c
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 00423e3d
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00423e42
    TEST EAX,EAX                        ; 00423e45
    JNZ 0x00423ce1                      ; 00423e47
        ;   XREF to: 00423ce1 (CONDITIONAL_JUMP)  ; LAB_00423ce1
    MOV ESI,0x5d4f09                    ; 00423e4d | = "ub-attack?.wav"
    PUSH ESI                            ; 00423e52 | = "ub-attack?.wav"
    MOV EDX,dword ptr [EBX + 0x154]     ; 00423e53
    PUSH EBX                            ; 00423e59
    CALL dword ptr [EDX + 0x2c]         ; 00423e5a
    ADD ESP,0x8                         ; 00423e5d
    MOV dword ptr [EBX + 0xc298],EAX    ; 00423e60
    JMP 0x00423ce1                      ; 00423e66
        ;   XREF to: 00423ce1 (UNCONDITIONAL_JUMP)  ; LAB_00423ce1
    MOV EDI,dword ptr [EBX + 0xc298]    ; 00423e6b
        ;   Label: LAB_00423e6b
    PUSH EDI                            ; 00423e71
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 00423e72
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00423e77
    TEST EAX,EAX                        ; 00423e7a
    JNZ 0x00423c42                      ; 00423e7c
        ;   XREF to: 00423c42 (CONDITIONAL_JUMP)  ; LAB_00423c42
    PUSH 0x5d4f18                       ; 00423e82 | = "ub-howl?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00423e87
    PUSH EBX                            ; 00423e8d
    CALL dword ptr [EAX + 0x2c]         ; 00423e8e
    ADD ESP,0x8                         ; 00423e91
    MOV dword ptr [EBX + 0xc298],EAX    ; 00423e94
    JMP 0x00423c42                      ; 00423e9a
        ;   XREF to: 00423c42 (UNCONDITIONAL_JUMP)  ; LAB_00423c42
    MOV EAX,dword ptr [EBX + 0xc26c]    ; 00423e9f
        ;   Label: LAB_00423e9f
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00423ea5
    JNZ 0x00423c8c                      ; 00423ead
        ;   XREF to: 00423c8c (CONDITIONAL_JUMP)  ; LAB_00423c8c
    FLD float ptr [EBX + 0xc28c]        ; 00423eb3
        ;   Label: LAB_00423eb3
    FLDZ                                ; 00423eb9
    FCOMPP                              ; 00423ebb
    FNSTSW AX                           ; 00423ebd
    SAHF                                ; 00423ebf
    JA 0x00423ca0                       ; 00423ec0
        ;   XREF to: 00423ca0 (CONDITIONAL_JUMP)  ; LAB_00423ca0
    FLD float ptr [EBX + 0xc28c]        ; 00423ec6
    FADD float ptr [EBP + 0x92]         ; 00423ecc
    FST float ptr [EBX + 0xc28c]        ; 00423ed2
    FCOMP double ptr [0x005d4f50]       ; 00423ed8 | DAT_005d4f50
    FNSTSW AX                           ; 00423ede
    SAHF                                ; 00423ee0
    JC 0x00423ca0                       ; 00423ee1
        ;   XREF to: 00423ca0 (CONDITIONAL_JUMP)  ; LAB_00423ca0
    LEA EAX,[EBP + 0xfffffe0e]          ; 00423ee7
    PUSH EAX                            ; 00423eed
    MOV EDI,0x461c3f9a                  ; 00423eee
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00423ef3
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    LEA EAX,[EBP + 0xfffffe0e]          ; 00423ef8
    ADD ESP,0x4                         ; 00423efe
    MOV dword ptr [EBP + 0xfffffe12],EDI ; 00423f01
    MOV dword ptr [EBP + 0xfffffe42],EBX ; 00423f07
    MOV dword ptr [EBP + 0xfffffe46],EBX ; 00423f0d
    PUSH EAX                            ; 00423f13
    MOV EDX,dword ptr [EBX + 0x154]     ; 00423f14
    PUSH EBX                            ; 00423f1a
    CALL dword ptr [EDX + 0x108]        ; 00423f1b
    ADD ESP,0x8                         ; 00423f21
    MOV dword ptr [EBX + 0xc28c],0xbf800000 ; 00423f24
    JMP 0x00423ca0                      ; 00423f2e
        ;   XREF to: 00423ca0 (UNCONDITIONAL_JUMP)  ; LAB_00423ca0
    PUSH 0x1                            ; 00423f33
        ;   Label: LAB_00423f33
    PUSH EAX                            ; 00423f35
    PUSH ESI                            ; 00423f36
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00423f37
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00423f3c
    JMP 0x00423ce1                      ; 00423f3f
        ;   XREF to: 00423ce1 (UNCONDITIONAL_JUMP)  ; LAB_00423ce1
    PUSH 0x3e32b8c2                     ; 00423f44
        ;   Label: LAB_00423f44
    PUSH 0x3f800000                     ; 00423f49
    MOV EAX,[0x005fd08c]                ; 00423f4e | DAT_005fd08c
    XOR EDX,EDX                         ; 00423f53
    MOV dword ptr [EBP + 0xffffff22],EDX ; 00423f55
    MOV dword ptr [EBP + 0xffffff2a],EAX ; 00423f5b
    LEA EAX,[EBP + 0xffffff22]          ; 00423f61
    MOV dword ptr [EBP + 0xffffff26],EDX ; 00423f67
    PUSH EAX                            ; 00423f6d
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00423f6e
    PUSH EAX                            ; 00423f74
    MOV EDX,dword ptr [EAX + 0x154]     ; 00423f75
    CALL dword ptr [EDX + 0xc4]         ; 00423f7b
    ADD ESP,0x4                         ; 00423f81
    PUSH EAX                            ; 00423f84
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00423f85
    ADD EAX,0x20                        ; 00423f8b
    PUSH EAX                            ; 00423f8e
    PUSH EBX                            ; 00423f8f
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 00423f90
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00423f95
    TEST EAX,EAX                        ; 00423f98
    JL 0x00424040                       ; 00423f9a
        ;   XREF to: 00424040 (CONDITIONAL_JUMP)  ; LAB_00424040
    JLE 0x00423ce1                      ; 00423fa0
        ;   XREF to: 00423ce1 (CONDITIONAL_JUMP)  ; LAB_00423ce1
    FLD float ptr [EBX + 0xc1e4]        ; 00423fa6
    FLDZ                                ; 00423fac
    FCOMPP                              ; 00423fae
    FNSTSW AX                           ; 00423fb0
    SAHF                                ; 00423fb2
    JC 0x00423ce1                       ; 00423fb3
        ;   XREF to: 00423ce1 (CONDITIONAL_JUMP)  ; LAB_00423ce1
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00423fb9
    PUSH EAX                            ; 00423fbf
    MOV EDX,dword ptr [EAX + 0x154]     ; 00423fc0
    CALL dword ptr [EDX + 0xf4]         ; 00423fc6
    ADD ESP,0x4                         ; 00423fcc
    TEST EAX,EAX                        ; 00423fcf
    JNZ 0x00423ce1                      ; 00423fd1
        ;   XREF to: 00423ce1 (CONDITIONAL_JUMP)  ; LAB_00423ce1
    PUSH 0x3f000000                     ; 00423fd7
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 00423fdc
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 00423fe1
    TEST EAX,EAX                        ; 00423fe4
    JZ 0x00424052                       ; 00423fe6
        ;   XREF to: 00424052 (CONDITIONAL_JUMP)  ; LAB_00424052
    PUSH 0x1                            ; 00423fe8
    PUSH 0x5                            ; 00423fea
    PUSH ESI                            ; 00423fec
        ;   Label: LAB_00423fec
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00423fed
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00423ff2
    MOV ESI,dword ptr [EBX + 0xc294]    ; 00423ff5
    PUSH ESI                            ; 00423ffb
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 00423ffc
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00424001
    TEST EAX,EAX                        ; 00424004
    JNZ 0x00423ce1                      ; 00424006
        ;   XREF to: 00423ce1 (CONDITIONAL_JUMP)  ; LAB_00423ce1
    MOV EDI,dword ptr [EBX + 0xc298]    ; 0042400c
    PUSH EDI                            ; 00424012
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 00424013
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00424018
    TEST EAX,EAX                        ; 0042401b
    JNZ 0x00423ce1                      ; 0042401d
        ;   XREF to: 00423ce1 (CONDITIONAL_JUMP)  ; LAB_00423ce1
    PUSH 0x5d4f25                       ; 00424023 | = "ub-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00424028
    PUSH EBX                            ; 0042402e
    CALL dword ptr [EAX + 0x2c]         ; 0042402f
    ADD ESP,0x8                         ; 00424032
    MOV dword ptr [EBX + 0xc298],EAX    ; 00424035
    JMP 0x00423ce1                      ; 0042403b
        ;   XREF to: 00423ce1 (UNCONDITIONAL_JUMP)  ; LAB_00423ce1
    PUSH 0x1                            ; 00424040
        ;   Label: LAB_00424040
    PUSH 0x0                            ; 00424042
    PUSH ESI                            ; 00424044
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00424045
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0042404a
    JMP 0x00423ce1                      ; 0042404d
        ;   XREF to: 00423ce1 (UNCONDITIONAL_JUMP)  ; LAB_00423ce1
    PUSH 0x1                            ; 00424052
        ;   Label: LAB_00424052
    PUSH 0x6                            ; 00424054
    JMP 0x00423fec                      ; 00424056
        ;   XREF to: 00423fec (UNCONDITIONAL_JUMP)  ; LAB_00423fec
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 00424058
        ;   Label: LAB_00424058
    TEST EDI,EDI                        ; 0042405e
    JNZ 0x00424074                      ; 00424060
        ;   XREF to: 00424074 (CONDITIONAL_JUMP)  ; LAB_00424074
    PUSH 0x1                            ; 00424062
    PUSH 0x1                            ; 00424064
    PUSH ESI                            ; 00424066
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00424067
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0042406c
    JMP 0x00423ce1                      ; 0042406f
        ;   XREF to: 00423ce1 (UNCONDITIONAL_JUMP)  ; LAB_00423ce1
    PUSH EDI                            ; 00424074
        ;   Label: LAB_00424074
    MOV EDX,dword ptr [EDI + 0x154]     ; 00424075
    CALL dword ptr [EDX + 0xf4]         ; 0042407b
    ADD ESP,0x4                         ; 00424081
    TEST EAX,EAX                        ; 00424084
    JZ 0x0042409a                       ; 00424086
        ;   XREF to: 0042409a (CONDITIONAL_JUMP)  ; LAB_0042409a
    PUSH 0x1                            ; 00424088
    PUSH 0x1                            ; 0042408a
    PUSH ESI                            ; 0042408c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0042408d
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00424092
    JMP 0x00423ce1                      ; 00424095
        ;   XREF to: 00423ce1 (UNCONDITIONAL_JUMP)  ; LAB_00423ce1
    PUSH 0x3f000000                     ; 0042409a
        ;   Label: LAB_0042409a
    PUSH 0x3e4ccccd                     ; 0042409f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004240a4
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004240a9
    ADD ESP,0x8                         ; 004240ac
    FLD float ptr [EBP + 0x76]          ; 004240af
    PUSH ESI                            ; 004240b2
    FSTP float ptr [EBX + 0xc1e4]       ; 004240b3
    CALL core_motion.cpp_FUN_00525020   ; 004240b9
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 004240be
    ADD ESP,0x4                         ; 004240c1
    MOV EAX,dword ptr [EBP + 0x76]      ; 004240c4
    MOV dword ptr [EBP + 0x6a],EAX      ; 004240c7
    FLD float ptr [EBP + 0x6a]          ; 004240ca
    FST double ptr [EBP + 0x56]         ; 004240cd
    FCOMP double ptr [0x005d4f58]       ; 004240d0 | DAT_005d4f58
    FNSTSW AX                           ; 004240d6
    SAHF                                ; 004240d8
    JA 0x00423ce1                       ; 004240d9
        ;   XREF to: 00423ce1 (CONDITIONAL_JUMP)  ; LAB_00423ce1
    MOV EAX,[0x005fd08c]                ; 004240df | DAT_005fd08c
    FLD1                                ; 004240e4
    MOV dword ptr [EBP + 0x6e],EAX      ; 004240e6
    FCOMP double ptr [EBP + 0x56]       ; 004240e9
    FNSTSW AX                           ; 004240ec
    SAHF                                ; 004240ee
    JA 0x004241cd                       ; 004240ef
        ;   XREF to: 004241cd (CONDITIONAL_JUMP)  ; LAB_004241cd
    FLD double ptr [EBP + 0x56]         ; 004240f5
    FCOMP double ptr [0x005d4f40]       ; 004240f8 | DAT_005d4f40
    FNSTSW AX                           ; 004240fe
    SAHF                                ; 00424100
    JA 0x004241cd                       ; 00424101
        ;   XREF to: 004241cd (CONDITIONAL_JUMP)  ; LAB_004241cd
    MOV EAX,dword ptr [EBX + 0xc274]    ; 00424107
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0042410d
    JZ 0x00423ce1                       ; 00424115
        ;   XREF to: 00423ce1 (CONDITIONAL_JUMP)  ; LAB_00423ce1
    LEA EAX,[EBP + 0xfffffdd2]          ; 0042411b
    PUSH EAX                            ; 00424121
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00424122
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00424127
    PUSH 0x41700000                     ; 0042412a
    PUSH 0x40e00000                     ; 0042412f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00424134
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00424139
    ADD ESP,0x8                         ; 0042413c
    LEA EAX,[EBP + 0xfffffdd2]          ; 0042413f
    MOV EDX,dword ptr [0x007c5390]      ; 00424145 | DAT_007c5390
    PUSH EAX                            ; 0042414b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042414c
    LEA ESI,[EBP + -0x36]               ; 00424153
    SUB EAX,EDX                         ; 00424156
    MOV dword ptr [EBP + 0xfffffe06],EBX ; 00424158
    MOV EDX,EAX                         ; 0042415e
    MOV dword ptr [EBP + 0xfffffe0a],EBX ; 00424160
    SHL EDX,0x4                         ; 00424166
    LEA EAX,[EBX + 0xfd8]               ; 00424169
    PUSH 0x3ecccccd                     ; 0042416f
    ADD EAX,EDX                         ; 00424174
    LEA EDI,[EBP + 0xffffff2e]          ; 00424176
    PUSH EAX                            ; 0042417c
    FLD float ptr [EBP + 0x76]          ; 0042417d
    PUSH 0x7c5340                       ; 00424180 | DAT_007c5340
    FSTP float ptr [EBP + 0xfffffdd6]   ; 00424185
    CALL core_xform.cpp_FUN_005b5080    ; 0042418b
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 00424190
    LEA EAX,[EBP + 0xffffff2e]          ; 00424193
    LEA ESI,[EBP + -0x36]               ; 00424199
    PUSH EAX                            ; 0042419c
    MOVSD ES:EDI,ESI                    ; 0042419d
    MOVSD ES:EDI,ESI                    ; 0042419e
    MOVSD ES:EDI,ESI                    ; 0042419f
    PUSH EBX                            ; 004241a0
    LEA ESI,[EBP + -0x4e]               ; 004241a1
    CALL core_actor.cpp_FUN_00408b40    ; 004241a4
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004241a9
    LEA EAX,[EBP + 0xfffffefe]          ; 004241ac
    PUSH EAX                            ; 004241b2
    LEA EDI,[EBP + 0xfffffefe]          ; 004241b3
    LEA ESI,[EBP + -0x4e]               ; 004241b9
    PUSH EBX                            ; 004241bc
    MOVSD ES:EDI,ESI                    ; 004241bd
    MOVSD ES:EDI,ESI                    ; 004241be
    MOVSD ES:EDI,ESI                    ; 004241bf
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 004241c0
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004241c5
    JMP 0x00423ce1                      ; 004241c8
        ;   XREF to: 00423ce1 (UNCONDITIONAL_JUMP)  ; LAB_00423ce1
    FLD float ptr [EBP + 0x6a]          ; 004241cd
        ;   Label: LAB_004241cd
    FST double ptr [EBP + 0x4e]         ; 004241d0
    FCOMP double ptr [0x005d4f58]       ; 004241d3 | DAT_005d4f58
    FNSTSW AX                           ; 004241d9
    SAHF                                ; 004241db
    JC 0x00423ce1                       ; 004241dc
        ;   XREF to: 00423ce1 (CONDITIONAL_JUMP)  ; LAB_00423ce1
    FLD double ptr [EBP + 0x4e]         ; 004241e2
    FCOMP double ptr [0x005d4f60]       ; 004241e5 | DAT_005d4f60
    FNSTSW AX                           ; 004241eb
    SAHF                                ; 004241ed
    JA 0x00423ce1                       ; 004241ee
        ;   XREF to: 00423ce1 (CONDITIONAL_JUMP)  ; LAB_00423ce1
    MOV EAX,dword ptr [EBX + 0xc26c]    ; 004241f4
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004241fa
    JZ 0x00423ce1                       ; 00424202
        ;   XREF to: 00423ce1 (CONDITIONAL_JUMP)  ; LAB_00423ce1
    LEA EAX,[EBP + 0xfffffe4a]          ; 00424208
    PUSH EAX                            ; 0042420e
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0042420f
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00424214
    PUSH 0x41700000                     ; 00424217
    PUSH 0x40e00000                     ; 0042421c
    LEA ESI,[EBP + -0x2a]               ; 00424221
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00424224
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00424229
    ADD ESP,0x8                         ; 0042422c
    LEA EAX,[EBP + 0xfffffe4a]          ; 0042422f
    MOV EDX,dword ptr [0x007c538c]      ; 00424235 | DAT_007c538c
    PUSH EAX                            ; 0042423b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042423c
    MOV dword ptr [EBP + 0xfffffe7e],EBX ; 00424243
    SUB EAX,EDX                         ; 00424249
    MOV dword ptr [EBP + 0xfffffe82],EBX ; 0042424b
    SHL EAX,0x4                         ; 00424251
    LEA EDX,[EBX + 0xfd8]               ; 00424254
    PUSH 0x3ecccccd                     ; 0042425a
    ADD EAX,EDX                         ; 0042425f
    LEA EDI,[EBP + -0x66]               ; 00424261
    PUSH EAX                            ; 00424264
    FLD float ptr [EBP + 0x76]          ; 00424265
    PUSH 0x7c5340                       ; 00424268 | DAT_007c5340
    FSTP float ptr [EBP + 0xfffffe4e]   ; 0042426d
    CALL core_xform.cpp_FUN_005b5080    ; 00424273
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 00424278
    LEA EAX,[EBP + -0x66]               ; 0042427b
    LEA ESI,[EBP + -0x2a]               ; 0042427e
    PUSH EAX                            ; 00424281
    MOVSD ES:EDI,ESI                    ; 00424282
    MOVSD ES:EDI,ESI                    ; 00424283
    MOVSD ES:EDI,ESI                    ; 00424284
    PUSH EBX                            ; 00424285
    LEA ESI,[EBP + 0xffffff0a]          ; 00424286
    CALL core_actor.cpp_FUN_00408b40    ; 0042428c
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00424291
    LEA EAX,[EBP + -0x5a]               ; 00424294
    PUSH EAX                            ; 00424297
    LEA EDI,[EBP + -0x5a]               ; 00424298
    LEA ESI,[EBP + 0xffffff0a]          ; 0042429b
    PUSH EBX                            ; 004242a1
    MOVSD ES:EDI,ESI                    ; 004242a2
    MOVSD ES:EDI,ESI                    ; 004242a3
    MOVSD ES:EDI,ESI                    ; 004242a4
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 004242a5
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004242aa
    JMP 0x00423ce1                      ; 004242ad
        ;   XREF to: 00423ce1 (UNCONDITIONAL_JUMP)  ; LAB_00423ce1
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 004242b2
        ;   Label: LAB_004242b2
    TEST EDI,EDI                        ; 004242b8
    JNZ 0x004242ce                      ; 004242ba
        ;   XREF to: 004242ce (CONDITIONAL_JUMP)  ; LAB_004242ce
    PUSH 0x1                            ; 004242bc
    PUSH 0x1                            ; 004242be
    PUSH ESI                            ; 004242c0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004242c1
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004242c6
    JMP 0x00423ce1                      ; 004242c9
        ;   XREF to: 00423ce1 (UNCONDITIONAL_JUMP)  ; LAB_00423ce1
    PUSH EDI                            ; 004242ce
        ;   Label: LAB_004242ce
    MOV EDX,dword ptr [EDI + 0x154]     ; 004242cf
    CALL dword ptr [EDX + 0xf4]         ; 004242d5
    ADD ESP,0x4                         ; 004242db
    TEST EAX,EAX                        ; 004242de
    JZ 0x004242f4                       ; 004242e0
        ;   XREF to: 004242f4 (CONDITIONAL_JUMP)  ; LAB_004242f4
    PUSH 0x1                            ; 004242e2
    PUSH 0x1                            ; 004242e4
    PUSH ESI                            ; 004242e6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004242e7
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004242ec
    JMP 0x00423ce1                      ; 004242ef
        ;   XREF to: 00423ce1 (UNCONDITIONAL_JUMP)  ; LAB_00423ce1
    PUSH 0x3f000000                     ; 004242f4
        ;   Label: LAB_004242f4
    PUSH 0x3e4ccccd                     ; 004242f9
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004242fe
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00424303
    ADD ESP,0x8                         ; 00424306
    FLD float ptr [EBP + 0x76]          ; 00424309
    PUSH ESI                            ; 0042430c
    FSTP float ptr [EBX + 0xc1e4]       ; 0042430d
    CALL core_motion.cpp_FUN_00525020   ; 00424313
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00424318
    ADD ESP,0x4                         ; 0042431b
    MOV EAX,dword ptr [EBP + 0x76]      ; 0042431e
    MOV dword ptr [EBP + 0x72],EAX      ; 00424321
    FLD float ptr [EBP + 0x72]          ; 00424324
    FST double ptr [EBP + 0x46]         ; 00424327
    FCOMP double ptr [0x005d4f38]       ; 0042432a | DAT_005d4f38
    FNSTSW AX                           ; 00424330
    SAHF                                ; 00424332
    JA 0x00423ce1                       ; 00424333
        ;   XREF to: 00423ce1 (CONDITIONAL_JUMP)  ; LAB_00423ce1
    MOV EAX,[0x005fd08c]                ; 00424339 | DAT_005fd08c
    FLD1                                ; 0042433e
    MOV dword ptr [EBP + 0x6e],EAX      ; 00424340
    FCOMP double ptr [EBP + 0x46]       ; 00424343
    FNSTSW AX                           ; 00424346
    SAHF                                ; 00424348
    JA 0x0042441f                       ; 00424349
        ;   XREF to: 0042441f (CONDITIONAL_JUMP)  ; LAB_0042441f
    FLD double ptr [EBP + 0x46]         ; 0042434f
    FCOMP double ptr [0x005d4f40]       ; 00424352 | DAT_005d4f40
    FNSTSW AX                           ; 00424358
    SAHF                                ; 0042435a
    JA 0x0042441f                       ; 0042435b
        ;   XREF to: 0042441f (CONDITIONAL_JUMP)  ; LAB_0042441f
    MOV EAX,dword ptr [EBX + 0xc274]    ; 00424361
        ;   Label: LAB_00424361
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00424367
    JZ 0x00423ce1                       ; 0042436f
        ;   XREF to: 00423ce1 (CONDITIONAL_JUMP)  ; LAB_00423ce1
    LEA EAX,[EBP + 0xfffffe86]          ; 00424375
    PUSH EAX                            ; 0042437b
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0042437c
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00424381
    PUSH 0x41700000                     ; 00424384
    PUSH 0x40e00000                     ; 00424389
    LEA ESI,[EBP + -0x1e]               ; 0042438e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00424391
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00424396
    ADD ESP,0x8                         ; 00424399
    LEA EAX,[EBP + 0xfffffe86]          ; 0042439c
    MOV EDX,dword ptr [0x007c5390]      ; 004243a2 | DAT_007c5390
    PUSH EAX                            ; 004243a8
    LEA EAX,[EDX*0x4 + 0x0]             ; 004243a9
    MOV dword ptr [EBP + 0xfffffeba],EBX ; 004243b0
    SUB EAX,EDX                         ; 004243b6
    MOV dword ptr [EBP + 0xfffffebe],EBX ; 004243b8
    SHL EAX,0x4                         ; 004243be
    LEA EDX,[EBX + 0xfd8]               ; 004243c1
    PUSH 0x3ecccccd                     ; 004243c7
    ADD EAX,EDX                         ; 004243cc
    LEA EDI,[EBP + 0x6]                 ; 004243ce
    PUSH EAX                            ; 004243d1
    FLD float ptr [EBP + 0x76]          ; 004243d2
    PUSH 0x7c5340                       ; 004243d5 | DAT_007c5340
    FSTP float ptr [EBP + 0xfffffe8a]   ; 004243da
    CALL core_xform.cpp_FUN_005b5080    ; 004243e0
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 004243e5
    LEA EAX,[EBP + 0x6]                 ; 004243e8
    LEA ESI,[EBP + -0x1e]               ; 004243eb
    PUSH EAX                            ; 004243ee
    MOVSD ES:EDI,ESI                    ; 004243ef
    MOVSD ES:EDI,ESI                    ; 004243f0
    MOVSD ES:EDI,ESI                    ; 004243f1
    PUSH EBX                            ; 004243f2
    LEA ESI,[EBP + -0x12]               ; 004243f3
    CALL core_actor.cpp_FUN_00408b40    ; 004243f6
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004243fb
    LEA EAX,[EBP + 0xffffff3a]          ; 004243fe
    PUSH EAX                            ; 00424404
    LEA EDI,[EBP + 0xffffff3a]          ; 00424405
    LEA ESI,[EBP + -0x12]               ; 0042440b
    PUSH EBX                            ; 0042440e
    MOVSD ES:EDI,ESI                    ; 0042440f
    MOVSD ES:EDI,ESI                    ; 00424410
    MOVSD ES:EDI,ESI                    ; 00424411
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 00424412
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00424417
    JMP 0x00423ce1                      ; 0042441a
        ;   XREF to: 00423ce1 (UNCONDITIONAL_JUMP)  ; LAB_00423ce1
    FLD float ptr [EBP + 0x72]          ; 0042441f
        ;   Label: LAB_0042441f
    FST double ptr [EBP + 0x5e]         ; 00424422
    FCOMP double ptr [0x005d4f48]       ; 00424425 | DAT_005d4f48
    FNSTSW AX                           ; 0042442b
    SAHF                                ; 0042442d
    JC 0x00424442                       ; 0042442e
        ;   XREF to: 00424442 (CONDITIONAL_JUMP)  ; LAB_00424442
    FLD double ptr [EBP + 0x5e]         ; 00424430
    FCOMP double ptr [0x005d4f50]       ; 00424433 | DAT_005d4f50
    FNSTSW AX                           ; 00424439
    SAHF                                ; 0042443b
    JBE 0x00424361                      ; 0042443c
        ;   XREF to: 00424361 (CONDITIONAL_JUMP)  ; LAB_00424361
    FLD float ptr [EBP + 0x72]          ; 00424442
        ;   Label: LAB_00424442
    FST double ptr [EBP + 0x36]         ; 00424445
    FCOMP double ptr [0x005d4f58]       ; 00424448 | DAT_005d4f58
    FNSTSW AX                           ; 0042444e
    SAHF                                ; 00424450
    JC 0x00424533                       ; 00424451
        ;   XREF to: 00424533 (CONDITIONAL_JUMP)  ; LAB_00424533
    FLD double ptr [EBP + 0x36]         ; 00424457
    FCOMP double ptr [0x005d4f60]       ; 0042445a | DAT_005d4f60
    FNSTSW AX                           ; 00424460
    SAHF                                ; 00424462
    JA 0x00424533                       ; 00424463
        ;   XREF to: 00424533 (CONDITIONAL_JUMP)  ; LAB_00424533
    MOV EAX,dword ptr [EBX + 0xc26c]    ; 00424469
        ;   Label: LAB_00424469
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0042446f
    JZ 0x00423ce1                       ; 00424477
        ;   XREF to: 00423ce1 (CONDITIONAL_JUMP)  ; LAB_00423ce1
    LEA EAX,[EBP + 0xfffffec2]          ; 0042447d
    PUSH EAX                            ; 00424483
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00424484
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00424489
    PUSH 0x41700000                     ; 0042448c
    PUSH 0x40e00000                     ; 00424491
    LEA ESI,[EBP + 0x1e]                ; 00424496
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00424499
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0042449e
    ADD ESP,0x8                         ; 004244a1
    LEA EAX,[EBP + 0xfffffec2]          ; 004244a4
    MOV EDX,dword ptr [0x007c538c]      ; 004244aa | DAT_007c538c
    PUSH EAX                            ; 004244b0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004244b1
    MOV dword ptr [EBP + 0xfffffef6],EBX ; 004244b8
    SUB EAX,EDX                         ; 004244be
    MOV dword ptr [EBP + 0xfffffefa],EBX ; 004244c0
    SHL EAX,0x4                         ; 004244c6
    LEA EDX,[EBX + 0xfd8]               ; 004244c9
    PUSH 0x3ecccccd                     ; 004244cf
    ADD EAX,EDX                         ; 004244d4
    LEA EDI,[EBP + 0xffffff6a]          ; 004244d6
    PUSH EAX                            ; 004244dc
    FLD float ptr [EBP + 0x76]          ; 004244dd
    PUSH 0x7c5340                       ; 004244e0 | DAT_007c5340
    FSTP float ptr [EBP + 0xfffffec6]   ; 004244e5
    CALL core_xform.cpp_FUN_005b5080    ; 004244eb
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 004244f0
    LEA EAX,[EBP + 0xffffff6a]          ; 004244f3
    LEA ESI,[EBP + 0x1e]                ; 004244f9
    PUSH EAX                            ; 004244fc
    MOVSD ES:EDI,ESI                    ; 004244fd
    MOVSD ES:EDI,ESI                    ; 004244fe
    MOVSD ES:EDI,ESI                    ; 004244ff
    PUSH EBX                            ; 00424500
    LEA ESI,[EBP + 0xffffff52]          ; 00424501
    CALL core_actor.cpp_FUN_00408b40    ; 00424507
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0042450c
    LEA EAX,[EBP + 0xffffff76]          ; 0042450f
    PUSH EAX                            ; 00424515
    LEA EDI,[EBP + 0xffffff76]          ; 00424516
    LEA ESI,[EBP + 0xffffff52]          ; 0042451c
    PUSH EBX                            ; 00424522
    MOVSD ES:EDI,ESI                    ; 00424523
    MOVSD ES:EDI,ESI                    ; 00424524
    MOVSD ES:EDI,ESI                    ; 00424525
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 00424526
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0042452b
    JMP 0x00423ce1                      ; 0042452e
        ;   XREF to: 00423ce1 (UNCONDITIONAL_JUMP)  ; LAB_00423ce1
    FLD float ptr [EBP + 0x72]          ; 00424533
        ;   Label: LAB_00424533
    FST double ptr [EBP + 0x3e]         ; 00424536
    FCOMP double ptr [0x005d4f68]       ; 00424539 | DAT_005d4f68
    FNSTSW AX                           ; 0042453f
    SAHF                                ; 00424541
    JC 0x00423ce1                       ; 00424542
        ;   XREF to: 00423ce1 (CONDITIONAL_JUMP)  ; LAB_00423ce1
    FLD double ptr [EBP + 0x3e]         ; 00424548
    FCOMP double ptr [0x005d4f38]       ; 0042454b | DAT_005d4f38
    FNSTSW AX                           ; 00424551
    SAHF                                ; 00424553
    JBE 0x00424469                      ; 00424554
        ;   XREF to: 00424469 (CONDITIONAL_JUMP)  ; LAB_00424469
    JMP 0x00423ce1                      ; 0042455a
        ;   XREF to: 00423ce1 (UNCONDITIONAL_JUMP)  ; LAB_00423ce1
    JBE 0x00424058                      ; 0042455f
        ;   XREF to: 00424058 (CONDITIONAL_JUMP)  ; LAB_00424058
        ;   Label: LAB_0042455f
    CMP EAX,0x6                         ; 00424565
    JBE 0x004242b2                      ; 00424568
        ;   XREF to: 004242b2 (CONDITIONAL_JUMP)  ; LAB_004242b2
    CMP EAX,0xe                         ; 0042456e
    JZ 0x00423d49                       ; 00424571
        ;   XREF to: 00423d49 (CONDITIONAL_JUMP)  ; LAB_00423d49
    JMP 0x00423ce1                      ; 00424577
        ;   XREF to: 00423ce1 (UNCONDITIONAL_JUMP)  ; LAB_00423ce1
    FLD float ptr [EBP + 0x6e]          ; 0042457c
        ;   Label: LAB_0042457c
    FLDZ                                ; 0042457f
    FCOMPP                              ; 00424581
    FNSTSW AX                           ; 00424583
    SAHF                                ; 00424585
    JA 0x00423cee                       ; 00424586
        ;   XREF to: 00423cee (CONDITIONAL_JUMP)  ; LAB_00423cee
    FLD float ptr [EBX + 0xc1d0]        ; 0042458c
    FLD float ptr [EBP + 0x92]          ; 00424592
    FLD ST0                             ; 00424598
    FMUL double ptr [0x005d4f70]        ; 0042459a | DAT_005d4f70
    FXCH                                ; 004245a0
    FMUL float ptr [EBX + 0xc1d0]       ; 004245a2
    FXCH                                ; 004245a8
    FMULP ST2                           ; 004245aa
    SUB ESP,0x4                         ; 004245ac
    FXCH                                ; 004245af
    FSTP float ptr [EBX + 0x2524]       ; 004245b1
    FSTP float ptr [ESP]                ; 004245b7
    PUSH EBX                            ; 004245ba
    CALL core_charactr.cpp_FUN_00435320 ; 004245bb
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 004245c0
    XOR EDI,EDI                         ; 004245c3
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004245c5
    PUSH 0x3f060a92                     ; 004245c8
    MOV dword ptr [EBP + 0xffffff5e],EDI ; 004245cd
    PUSH 0x40400000                     ; 004245d3
    MOV dword ptr [EBP + 0xffffff66],EAX ; 004245d8
    LEA EAX,[EBP + 0xffffff5e]          ; 004245de
    MOV dword ptr [EBP + 0xffffff62],EDI ; 004245e4
    PUSH EAX                            ; 004245ea
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004245eb
    PUSH EAX                            ; 004245f1
    MOV EDX,dword ptr [EAX + 0x154]     ; 004245f2
    CALL dword ptr [EDX + 0xc4]         ; 004245f8
    ADD ESP,0x4                         ; 004245fe
    PUSH EAX                            ; 00424601
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00424602
    ADD EAX,0x20                        ; 00424608
    PUSH EAX                            ; 0042460b
    PUSH EBX                            ; 0042460c
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 0042460d
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00424612
    CMP EAX,0x1                         ; 00424615
    JZ 0x00423cee                       ; 00424618
        ;   XREF to: 00423cee (CONDITIONAL_JUMP)  ; LAB_00423cee
    PUSH 0x1                            ; 0042461e
    PUSH 0x1                            ; 00424620
    LEA EAX,[EBX + 0x158]               ; 00424622
    PUSH EAX                            ; 00424628
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00424629
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0042462e
    MOV dword ptr [EBX + 0x2508],EDI    ; 00424631
    JMP 0x00423cee                      ; 00424637
        ;   XREF to: 00423cee (UNCONDITIONAL_JUMP)  ; LAB_00423cee
    FLD float ptr [EBX + 0xc1e4]        ; 0042463c
        ;   Label: LAB_0042463c
    FLDZ                                ; 00424642
    FCOMPP                              ; 00424644
    FNSTSW AX                           ; 00424646
    SAHF                                ; 00424648
    JNC 0x0042465d                      ; 00424649
        ;   XREF to: 0042465d (CONDITIONAL_JUMP)  ; LAB_0042465d
    FLD float ptr [EBX + 0xc1e4]        ; 0042464b
    FSUB float ptr [EBP + 0x92]         ; 00424651
    FSTP float ptr [EBX + 0xc1e4]       ; 00424657
    FLD float ptr [EBX + 0x2508]        ; 0042465d
        ;   Label: LAB_0042465d
    FADD float ptr [EBX + 0x34]         ; 00424663
    PUSH EBX                            ; 00424666
    FSTP float ptr [EBX + 0x34]         ; 00424667
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 0042466a
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042466f
    PUSH EBX                            ; 00424672
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120 ; 00424673
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00424678
    TEST EAX,EAX                        ; 0042467b
    JZ 0x0042474d                       ; 0042467d
        ;   XREF to: 0042474d (CONDITIONAL_JUMP)  ; LAB_0042474d
    PUSH dword ptr [EBP + 0x92]         ; 00424683
    PUSH EBX                            ; 00424689
    CALL core_charactr.cpp_FUN_0042d700 ; 0042468a
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    LEA EAX,[EBX + 0x2518]              ; 0042468f
    FLD float ptr [EAX]                 ; 00424695
    FMUL float ptr [EBP + 0x92]         ; 00424697
    FLD float ptr [EAX + 0x4]           ; 0042469d
    FMUL float ptr [EBP + 0x92]         ; 004246a0
    FLD float ptr [EAX + 0x8]           ; 004246a6
    FMUL float ptr [EBP + 0x92]         ; 004246a9
    LEA EDI,[EBP + -0x6]                ; 004246af
    LEA ESI,[EBP + -0x7e]               ; 004246b2
    LEA EDX,[EBX + 0x250c]              ; 004246b5
    ADD ESP,0x8                         ; 004246bb
    LEA EAX,[EBX + 0x158]               ; 004246be
    FXCH ST2                            ; 004246c4
    FSTP float ptr [EBP + -0x7e]        ; 004246c6
    FSTP float ptr [EBP + -0x7a]        ; 004246c9
    FSTP float ptr [EBP + -0x76]        ; 004246cc
    MOVSD ES:EDI,ESI                    ; 004246cf
    MOVSD ES:EDI,ESI                    ; 004246d0
    MOVSD ES:EDI,ESI                    ; 004246d1
    PUSH EAX                            ; 004246d2
    FLD float ptr [EBP + -0x6]          ; 004246d3
    FLD float ptr [EBP + -0x2]          ; 004246d6
    FLD float ptr [EBP + 0x2]           ; 004246d9
    LEA EDI,[EBP + -0x42]               ; 004246dc
    LEA ESI,[EBP + 0xffffff16]          ; 004246df
    FXCH ST2                            ; 004246e5
    FADD float ptr [EDX]                ; 004246e7
    FXCH                                ; 004246e9
    FADD float ptr [EDX + 0x4]          ; 004246eb
    FXCH ST2                            ; 004246ee
    FADD float ptr [EDX + 0x8]          ; 004246f0
    FXCH                                ; 004246f3
    FSTP float ptr [EBP + 0xffffff16]   ; 004246f5
    FXCH                                ; 004246fb
    FSTP float ptr [EBP + 0xffffff1a]   ; 004246fd
    FSTP float ptr [EBP + 0xffffff1e]   ; 00424703
    MOVSD ES:EDI,ESI                    ; 00424709
    MOVSD ES:EDI,ESI                    ; 0042470a
    MOVSD ES:EDI,ESI                    ; 0042470b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0042470c
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00424711
    ADD ESP,0x4                         ; 00424714
    CMP EAX,0x1                         ; 00424717
    JZ 0x00424740                       ; 0042471a
        ;   XREF to: 00424740 (CONDITIONAL_JUMP)  ; LAB_00424740
    LEA EAX,[EBX + 0x249c]              ; 0042471c
    FLD float ptr [EBP + -0x42]         ; 00424722
    FADD float ptr [EAX]                ; 00424725
    FLD float ptr [EBP + -0x3e]         ; 00424727
    FXCH                                ; 0042472a
    FSTP float ptr [EBP + -0x42]        ; 0042472c
    FADD float ptr [EAX + 0x4]          ; 0042472f
    FLD float ptr [EBP + -0x3a]         ; 00424732
    FXCH                                ; 00424735
    FSTP float ptr [EBP + -0x3e]        ; 00424737
    FADD float ptr [EAX + 0x8]          ; 0042473a
    FSTP float ptr [EBP + -0x3a]        ; 0042473d
    LEA EAX,[EBP + -0x42]               ; 00424740
        ;   Label: LAB_00424740
    PUSH EAX                            ; 00424743
    PUSH EBX                            ; 00424744
    CALL core_charactr.cpp_FUN_0042d750 ; 00424745
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0042474a
    LEA EAX,[EBX + 0x158]               ; 0042474d
        ;   Label: LAB_0042474d
    PUSH EAX                            ; 00424753
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 00424754
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00424759
    PUSH dword ptr [EBP + 0x92]         ; 0042475c
    PUSH EBX                            ; 00424762
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 00424763
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0xc1d4]    ; 00424768
    ADD ESP,0x8                         ; 0042476e
    TEST EDX,EDX                        ; 00424771
    JNZ 0x0042482e                      ; 00424773
        ;   XREF to: 0042482e (CONDITIONAL_JUMP)  ; LAB_0042482e
    MOV ECX,dword ptr [0x007c539c]      ; 00424779 | DAT_007c539c
    PUSH 0x3e4ccccd                     ; 0042477f
    PUSH ECX                            ; 00424784
    MOV ESI,dword ptr [EBX + 0xc268]    ; 00424785
    PUSH ESI                            ; 0042478b
    PUSH EBX                            ; 0042478c
    CALL core_charactr.cpp_FUN_00430a90 ; 0042478d
        ;   XREF to: 00430a90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430a90()
    MOV EAX,dword ptr [EBX + 0xc268]    ; 00424792
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00424798
    ADD ESP,0x10                        ; 0042479f
    TEST EDI,EDI                        ; 004247a2
    JZ 0x004247c1                       ; 004247a4
        ;   XREF to: 004247c1 (CONDITIONAL_JUMP)  ; LAB_004247c1
    MOV EAX,[0x007c5394]                ; 004247a6 | DAT_007c5394
    PUSH 0x3e4ccccd                     ; 004247ab
    PUSH EAX                            ; 004247b0
    MOV EDX,dword ptr [EBX + 0xc26c]    ; 004247b1
    PUSH EDX                            ; 004247b7
    PUSH EBX                            ; 004247b8
    CALL core_charactr.cpp_FUN_00430a90 ; 004247b9
        ;   XREF to: 00430a90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430a90()
    ADD ESP,0x10                        ; 004247be
    MOV ECX,dword ptr [0x007c53a0]      ; 004247c1 | DAT_007c53a0
        ;   Label: LAB_004247c1
    PUSH 0x3e4ccccd                     ; 004247c7
    PUSH ECX                            ; 004247cc
    MOV ESI,dword ptr [EBX + 0xc270]    ; 004247cd
    PUSH ESI                            ; 004247d3
    PUSH EBX                            ; 004247d4
    CALL core_charactr.cpp_FUN_00430a90 ; 004247d5
        ;   XREF to: 00430a90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430a90()
    MOV EAX,dword ptr [EBX + 0xc270]    ; 004247da
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004247e0
    ADD ESP,0x10                        ; 004247e7
    TEST EDI,EDI                        ; 004247ea
    JZ 0x00424809                       ; 004247ec
        ;   XREF to: 00424809 (CONDITIONAL_JUMP)  ; LAB_00424809
    MOV EAX,[0x007c5398]                ; 004247ee | DAT_007c5398
    PUSH 0x3e4ccccd                     ; 004247f3
    PUSH EAX                            ; 004247f8
    MOV EDX,dword ptr [EBX + 0xc274]    ; 004247f9
    PUSH EDX                            ; 004247ff
    PUSH EBX                            ; 00424800
    CALL core_charactr.cpp_FUN_00430a90 ; 00424801
        ;   XREF to: 00430a90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430a90()
    ADD ESP,0x10                        ; 00424806
    MOV ECX,dword ptr [0x007c5388]      ; 00424809 | DAT_007c5388
        ;   Label: LAB_00424809
    PUSH 0x3f333333                     ; 0042480f
    PUSH ECX                            ; 00424814
    MOV ESI,dword ptr [EBX + 0xc288]    ; 00424815
    PUSH ESI                            ; 0042481b
    PUSH EBX                            ; 0042481c
    CALL core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00430b60 ; 0042481d
        ;   XREF to: 00430b60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00430b60(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 00424822
    PUSH EBX                            ; 00424825
    CALL core_charactr.cpp_FUN_00430960 ; 00424826
        ;   XREF to: 00430960 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430960()
    ADD ESP,0x4                         ; 0042482b
    LEA ESP,[EBP + 0x7a]                ; 0042482e
        ;   Label: LAB_0042482e
    POP EBP                             ; 00424831
    POP EDI                             ; 00424832
    POP ESI                             ; 00424833
    POP EBX                             ; 00424834
    RET                                 ; 00424835

