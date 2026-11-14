; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fforest_cpp_FUN_005a2ac0(CEnemy *param_1)
;
;
; XREF[1]:
;   core_fforest.cpp_CTwigZombie_processStates_FUN_005a28a0 at 005a28f8
;
; Referenced Globals:
;   TerminatedCString s_Chasing_005f0013
;   undefined4 DAT_005f001b
;   undefined4 DAT_005f001f
;   undefined4 DAT_005ff170
;   undefined4 DAT_005ff174
;   undefined4 DAT_005ff178
;   undefined4 DAT_0265370c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_actor.cpp_FUN_00408d70
;   core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   core_motion.cpp_FUN_00503e60
;   core_muzzle.cpp_FUN_0059d8e0
;   core_muzzle.cpp_FUN_0059dcb0
;   core_xform.cpp_FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a2ac0
        ;   Label: core_fforest.cpp_FUN_005a2ac0
    PUSH ESI                            ; 005a2ac1
    PUSH EDI                            ; 005a2ac2
    PUSH EBP                            ; 005a2ac3
    MOV EBP,ESP                         ; 005a2ac4
    SUB ESP,0xb0                        ; 005a2ac6
    AND ESP,0xfffffff8                  ; 005a2acc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a2acf
    PUSH EBX                            ; 005a2ad2
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a2ad3
    CALL dword ptr [EAX + 0x17c]        ; 005a2ad9
    ADD ESP,0x4                         ; 005a2adf
    TEST EAX,EAX                        ; 005a2ae2
    JNZ 0x005a2aed                      ; 005a2ae4
        ;   XREF to: 005a2aed (CONDITIONAL_JUMP)  ; LAB_005a2aed
    MOV ESP,EBP                         ; 005a2ae6
        ;   Label: LAB_005a2ae6
    POP EBP                             ; 005a2ae8
    POP EDI                             ; 005a2ae9
    POP ESI                             ; 005a2aea
    POP EBX                             ; 005a2aeb
    RET                                 ; 005a2aec
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005a2aed
        ;   Label: LAB_005a2aed
    ADD EAX,0x20                        ; 005a2af3
    PUSH EAX                            ; 005a2af6
    PUSH EBX                            ; 005a2af7
    CALL core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850 ; 005a2af8
        ;   XREF to: 00423850 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850(CCharacter * this_ptr, CVector3f * target)
    ADD ESP,0x8                         ; 005a2afd
    LEA ESI,[EBX + 0x2b4]               ; 005a2b00
    PUSH ESI                            ; 005a2b06
    CALL core_motion.cpp_FUN_00503e60   ; 005a2b07
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0xb0],EAX      ; 005a2b0c
    FLD float ptr [ESP + 0xb0]          ; 005a2b13
    ADD ESP,0x4                         ; 005a2b1a
    PUSH ESI                            ; 005a2b1d
    FSTP float ptr [ESP + 0xac]         ; 005a2b1e
    CALL core_motion.cpp_FUN_005035c0   ; 005a2b25
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a2b2a
    ADD ESP,0x4                         ; 005a2b2d
    CMP EAX,0x2                         ; 005a2b30
    JNZ 0x005a2da5                      ; 005a2b33
        ;   XREF to: 005a2da5 (CONDITIONAL_JUMP)  ; LAB_005a2da5
    FLD float ptr [ESP + 0xa8]          ; 005a2b39
    FCOMP float ptr [0x005ff174]        ; 005a2b40 | DAT_005ff174
    FNSTSW AX                           ; 005a2b46
    SAHF                                ; 005a2b48
    JC 0x005a2d3b                       ; 005a2b49
        ;   XREF to: 005a2d3b (CONDITIONAL_JUMP)  ; LAB_005a2d3b
    FLD float ptr [ESP + 0xa8]          ; 005a2b4f
    FCOMP float ptr [0x005ff178]        ; 005a2b56 | DAT_005ff178
    FNSTSW AX                           ; 005a2b5c
    SAHF                                ; 005a2b5e
    JA 0x005a2d3b                       ; 005a2b5f
        ;   XREF to: 005a2d3b (CONDITIONAL_JUMP)  ; LAB_005a2d3b
    MOV EAX,ESP                         ; 005a2b65
    PUSH EAX                            ; 005a2b67
    MOV dword ptr [EBX + 0x10a60],0x3f800000 ; 005a2b68
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 005a2b72
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    FLD float ptr [EBX + 0x2824]        ; 005a2b77
    ADD ESP,0x4                         ; 005a2b7d
    FMUL float ptr [0x005f001b]         ; 005a2b80 | DAT_005f001b
    MOV dword ptr [ESP + 0x34],EBX      ; 005a2b86
    MOV dword ptr [ESP + 0x38],EBX      ; 005a2b8a
    PUSH EBX                            ; 005a2b8e
    FSTP float ptr [ESP + 0x8]          ; 005a2b8f
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 005a2b93
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    MOV ESI,dword ptr [EBX + 0x11850]   ; 005a2b98
    LEA EAX,[ESI*0x4 + 0x0]             ; 005a2b9e
    SUB EAX,ESI                         ; 005a2ba5
    SHL EAX,0x4                         ; 005a2ba7
    LEA ESI,[EBX + 0x1134]              ; 005a2baa
    ADD ESP,0x4                         ; 005a2bb0
    ADD EAX,ESI                         ; 005a2bb3
    PUSH EAX                            ; 005a2bb5
    MOV dword ptr [ESP + 0xb0],ESI      ; 005a2bb6
    PUSH 0x265370c                      ; 005a2bbd | DAT_0265370c
    LEA ESI,[ESP + 0x98]                ; 005a2bc2
    LEA EDI,[ESP + 0x8c]                ; 005a2bc9
    CALL core_xform.cpp_FUN_00591530    ; 005a2bd0
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[ESP + 0x98]                ; 005a2bd5
    ADD ESP,0x8                         ; 005a2bdc
    MOVSD ES:EDI,ESI                    ; 005a2bdf
    MOVSD ES:EDI,ESI                    ; 005a2be0
    MOVSD ES:EDI,ESI                    ; 005a2be1
    MOV ESI,dword ptr [EBX + 0x11854]   ; 005a2be2
    LEA EAX,[ESI*0x4 + 0x0]             ; 005a2be8
    SUB EAX,ESI                         ; 005a2bef
    MOV ECX,dword ptr [ESP + 0xac]      ; 005a2bf1
    SHL EAX,0x4                         ; 005a2bf8
    ADD EAX,ECX                         ; 005a2bfb
    PUSH EAX                            ; 005a2bfd
    PUSH 0x265370c                      ; 005a2bfe | DAT_0265370c
    LEA ESI,[ESP + 0x74]                ; 005a2c03
    LEA EDI,[ESP + 0x80]                ; 005a2c07
    CALL core_xform.cpp_FUN_00591530    ; 005a2c0e
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[ESP + 0x74]                ; 005a2c13
    ADD ESP,0x8                         ; 005a2c17
    MOVSD ES:EDI,ESI                    ; 005a2c1a
    MOVSD ES:EDI,ESI                    ; 005a2c1b
    MOVSD ES:EDI,ESI                    ; 005a2c1c
    FLD float ptr [ESP + 0x78]          ; 005a2c1d
    FLD float ptr [ESP + 0x7c]          ; 005a2c21
    FLD float ptr [ESP + 0x80]          ; 005a2c25
    LEA EDI,[ESP + 0x3c]                ; 005a2c2c
    LEA ESI,[ESP + 0x48]                ; 005a2c30
    FXCH ST2                            ; 005a2c34
    FSUB float ptr [ESP + 0x84]         ; 005a2c36
    FXCH                                ; 005a2c3d
    FSUB float ptr [ESP + 0x88]         ; 005a2c3f
    FXCH ST2                            ; 005a2c46
    FSUB float ptr [ESP + 0x8c]         ; 005a2c48
    FXCH                                ; 005a2c4f
    FSTP float ptr [ESP + 0x48]         ; 005a2c51
    FXCH                                ; 005a2c55
    FSTP float ptr [ESP + 0x4c]         ; 005a2c57
    FSTP float ptr [ESP + 0x50]         ; 005a2c5b
    MOVSD ES:EDI,ESI                    ; 005a2c5f
    MOVSD ES:EDI,ESI                    ; 005a2c60
    MOVSD ES:EDI,ESI                    ; 005a2c61
    FLD float ptr [0x005f001f]          ; 005a2c62 | DAT_005f001f
    FLD float ptr [ESP + 0x3c]          ; 005a2c68
    FMUL ST1                            ; 005a2c6c
    FLD float ptr [ESP + 0x40]          ; 005a2c6e
    FMUL ST2                            ; 005a2c72
    FLD float ptr [ESP + 0x44]          ; 005a2c74
    FMULP ST3                           ; 005a2c78
    FXCH                                ; 005a2c7a
    FSTP float ptr [ESP + 0x3c]         ; 005a2c7c
    FSTP float ptr [ESP + 0x40]         ; 005a2c80
    FLD float ptr [ESP + 0x3c]          ; 005a2c84
    FLD float ptr [ESP + 0x40]          ; 005a2c88
    FADD float ptr [ESP + 0x88]         ; 005a2c8c
    FXCH                                ; 005a2c93
    FADD float ptr [ESP + 0x84]         ; 005a2c95
    FXCH                                ; 005a2c9c
    FST float ptr [ESP + 0x40]          ; 005a2c9e
    FMUL float ptr [ESP + 0x40]         ; 005a2ca2
    FXCH                                ; 005a2ca6
    FST float ptr [ESP + 0x3c]          ; 005a2ca8
    FMUL float ptr [ESP + 0x3c]         ; 005a2cac
    FXCH ST2                            ; 005a2cb0
    FADD float ptr [ESP + 0x8c]         ; 005a2cb2
    FXCH ST2                            ; 005a2cb9
    FADDP                               ; 005a2cbb
    FXCH                                ; 005a2cbd
    FST float ptr [ESP + 0x44]          ; 005a2cbf
    FMUL float ptr [ESP + 0x44]         ; 005a2cc3
    FADDP                               ; 005a2cc7
    FSQRT                               ; 005a2cc9
    LEA EAX,[ESP + 0x3c]                ; 005a2ccb
    PUSH EAX                            ; 005a2ccf
    LEA ESI,[ESP + 0x58]                ; 005a2cd0
    LEA EDI,[ESP + 0x64]                ; 005a2cd4
    PUSH EBX                            ; 005a2cd8
    FSTP float ptr [ESP + 0xac]         ; 005a2cd9
    CALL core_actor.cpp_FUN_00408d70    ; 005a2ce0
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x5c]                ; 005a2ce5
    ADD ESP,0x8                         ; 005a2ce9
    MOVSD ES:EDI,ESI                    ; 005a2cec
    MOVSD ES:EDI,ESI                    ; 005a2ced
    MOVSD ES:EDI,ESI                    ; 005a2cee
    LEA EAX,[ESP + 0x60]                ; 005a2cef
    LEA ESI,[ESP + 0x3c]                ; 005a2cf3
    CMP ESI,EAX                         ; 005a2cf7
    JZ 0x005a2d13                       ; 005a2cf9
        ;   XREF to: 005a2d13 (CONDITIONAL_JUMP)  ; LAB_005a2d13
    MOV EAX,dword ptr [ESP + 0x60]      ; 005a2cfb
    MOV dword ptr [ESP + 0x3c],EAX      ; 005a2cff
    MOV EAX,dword ptr [ESP + 0x64]      ; 005a2d03
    MOV dword ptr [ESP + 0x40],EAX      ; 005a2d07
    MOV EAX,dword ptr [ESP + 0x68]      ; 005a2d0b
    MOV dword ptr [ESP + 0x44],EAX      ; 005a2d0f
    MOV EAX,ESP                         ; 005a2d13
        ;   Label: LAB_005a2d13
    PUSH EAX                            ; 005a2d15
    LEA EAX,[ESP + 0x40]                ; 005a2d16
    PUSH dword ptr [ESP + 0xa8]         ; 005a2d1a
    PUSH EAX                            ; 005a2d21
    PUSH EBX                            ; 005a2d22
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 005a2d23
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 005a2d28
    PUSH EBX                            ; 005a2d2b
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 005a2d2c
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005a2d31
    MOV ESP,EBP                         ; 005a2d34
    POP EBP                             ; 005a2d36
    POP EDI                             ; 005a2d37
    POP ESI                             ; 005a2d38
    POP EBX                             ; 005a2d39
    RET                                 ; 005a2d3a
    FLD float ptr [ESP + 0xa8]          ; 005a2d3b
        ;   Label: LAB_005a2d3b
    FCOMP float ptr [0x005ff178]        ; 005a2d42 | DAT_005ff178
    FNSTSW AX                           ; 005a2d48
    SAHF                                ; 005a2d4a
    JBE 0x005a2ae6                      ; 005a2d4b
        ;   XREF to: 005a2ae6 (CONDITIONAL_JUMP)  ; LAB_005a2ae6
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 005a2d51
    LEA EAX,[EBX + 0x20]                ; 005a2d57
    FLD float ptr [ESI + 0x20]          ; 005a2d5a
    FSUB float ptr [EAX]                ; 005a2d5d
    FMUL ST0                            ; 005a2d5f
    FLD float ptr [ESI + 0x28]          ; 005a2d61
    FSUB float ptr [EAX + 0x8]          ; 005a2d64
    FMUL ST0                            ; 005a2d67
    FADDP                               ; 005a2d69
    FSQRT                               ; 005a2d6b
    FCOMP float ptr [0x005ff170]        ; 005a2d6d | DAT_005ff170
    FNSTSW AX                           ; 005a2d73
    SAHF                                ; 005a2d75
    JBE 0x005a2ae6                      ; 005a2d76
        ;   XREF to: 005a2ae6 (CONDITIONAL_JUMP)  ; LAB_005a2ae6
    ADD EBX,0x10af8                     ; 005a2d7c
    PUSH 0x3f800000                     ; 005a2d82
    PUSH EBX                            ; 005a2d87
    CALL core_muzzle.cpp_FUN_0059dcb0   ; 005a2d88
        ;   XREF to: 0059dcb0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059dcb0()
    ADD ESP,0x8                         ; 005a2d8d
    PUSH 0x5f0013                       ; 005a2d90 | = "Chasing"
    PUSH EBX                            ; 005a2d95
    CALL core_muzzle.cpp_FUN_0059d8e0   ; 005a2d96
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 005a2d9b
    MOV ESP,EBP                         ; 005a2d9e
    POP EBP                             ; 005a2da0
    POP EDI                             ; 005a2da1
    POP ESI                             ; 005a2da2
    POP EBX                             ; 005a2da3
    RET                                 ; 005a2da4
    PUSH 0x1                            ; 005a2da5
        ;   Label: LAB_005a2da5
    PUSH 0x2                            ; 005a2da7
    PUSH ESI                            ; 005a2da9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a2daa
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a2daf
    MOV ESP,EBP                         ; 005a2db2
    POP EBP                             ; 005a2db4
    POP EDI                             ; 005a2db5
    POP ESI                             ; 005a2db6
    POP EBX                             ; 005a2db7
    RET                                 ; 005a2db8

