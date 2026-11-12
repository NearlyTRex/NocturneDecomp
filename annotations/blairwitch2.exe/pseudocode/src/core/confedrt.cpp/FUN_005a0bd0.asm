; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_confedrt_cpp_FUN_005a0bd0(int param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_Death_005efc45
;   TerminatedCString s_Animation_005efc4b
;   TerminatedCString s_Chasing_005efc55
;   TerminatedCString s_RangeAttack_005efc5d
;   TerminatedCString s_ChaseComplete_005efc69
;   undefined4 DAT_005fedb0
;   undefined4 DAT_0265370c
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_bwgrndma.cpp_FUN_005a7ed0
;   core_bwspart.cpp_CSimpleParticleSystem_emit_FUN_005a8300
;   core_bwspart.cpp_CSimpleParticleSystem_isActive_FUN_005a8130
;   core_bwspart.cpp_CSimpleParticleSystem_process_FUN_005a8180
;   core_muzzle.cpp_FUN_0059daa0
;   core_muzzle.cpp_FUN_0059dae0
;   core_xform.cpp_FUN_00591530
;   core_xform.cpp_multiplyQuaternion_FUN_00593c60
;   core_xform.cpp_quaternionFromAngleX_FUN_00593fa0
;   core_xform.cpp_quaternionFromAngleY_FUN_00593fe0
;   core_xform.cpp_quaternionFromAngleZ_FUN_00594020
;   core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0bd0
        ;   Label: core_confedrt.cpp_FUN_005a0bd0
    PUSH ESI                            ; 005a0bd1
    PUSH EDI                            ; 005a0bd2
    PUSH EBP                            ; 005a0bd3
    MOV EBP,ESP                         ; 005a0bd4
    SUB ESP,0x1a4                       ; 005a0bd6
    SUB EBP,0x7a                        ; 005a0bdc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005a0bdf
    PUSH 0x5efc45                       ; 005a0be5 | = "Death"
    ADD EBX,0x10af8                     ; 005a0bea
    PUSH EBX                            ; 005a0bf0
    CALL core_muzzle.cpp_FUN_0059daa0   ; 005a0bf1
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a0bf6
    TEST EAX,EAX                        ; 005a0bf9
    JNZ 0x005a0c13                      ; 005a0bfb
        ;   XREF to: 005a0c13 (CONDITIONAL_JUMP)  ; LAB_005a0c13
    PUSH 0x5efc4b                       ; 005a0bfd | = "Animation"
    PUSH EBX                            ; 005a0c02
    CALL core_muzzle.cpp_FUN_0059daa0   ; 005a0c03
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a0c08
    TEST EAX,EAX                        ; 005a0c0b
    JZ 0x005a0f29                       ; 005a0c0d
        ;   XREF to: 005a0f29 (CONDITIONAL_JUMP)  ; LAB_005a0f29
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005a0c13
        ;   Label: LAB_005a0c13
    ADD EAX,0x154                       ; 005a0c19
    PUSH dword ptr [EBP + 0x92]         ; 005a0c1e
    PUSH EAX                            ; 005a0c24
    MOV dword ptr [EBP + 0x6e],EAX      ; 005a0c25
    CALL core_bwspart.cpp_CSimpleParticleSystem_process_FUN_005a8180 ; 005a0c28
        ;   XREF to: 005a8180 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_process_FUN_005a8180(CSimpleParticleSystem * this_ptr, float param_2)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005a0c2d
    FLD float ptr [EAX + 0x2a8]         ; 005a0c33
    FSUB float ptr [EBP + 0x92]         ; 005a0c39
    ADD ESP,0x8                         ; 005a0c3f
    FST float ptr [EAX + 0x2a8]         ; 005a0c42
    FLDZ                                ; 005a0c48
    FCOMPP                              ; 005a0c4a
    FNSTSW AX                           ; 005a0c4c
    SAHF                                ; 005a0c4e
    JC 0x005a0f01                       ; 005a0c4f
        ;   XREF to: 005a0f01 (CONDITIONAL_JUMP)  ; LAB_005a0f01
    MOV EBX,dword ptr [EBP + 0x6e]      ; 005a0c55
    PUSH EBX                            ; 005a0c58
    CALL core_bwspart.cpp_CSimpleParticleSystem_isActive_FUN_005a8130 ; 005a0c59
        ;   XREF to: 005a8130 (UNCONDITIONAL_CALL)  ; int core_bwspart.cpp_CSimpleParticleSystem_isActive_FUN_005a8130(CSimpleParticleSystem * this_ptr)
    ADD ESP,0x4                         ; 005a0c5e
    TEST EAX,EAX                        ; 005a0c61
    JZ 0x005a0f01                       ; 005a0c63
        ;   XREF to: 005a0f01 (CONDITIONAL_JUMP)  ; LAB_005a0f01
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005a0c69
    MOV EBX,dword ptr [EBX + 0x11860]   ; 005a0c6f
    LEA EAX,[EBX*0x4 + 0x0]             ; 005a0c75
    SUB EAX,EBX                         ; 005a0c7c
    MOV EBX,EAX                         ; 005a0c7e
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005a0c80
    SHL EBX,0x4                         ; 005a0c86
    ADD EAX,0x1134                      ; 005a0c89
    ADD EAX,EBX                         ; 005a0c8e
    PUSH EAX                            ; 005a0c90
    PUSH 0x265370c                      ; 005a0c91 | DAT_0265370c
    LEA ESI,[EBP + 0x1e]                ; 005a0c96
    LEA EDI,[EBP + -0x1e]               ; 005a0c99
    CALL core_xform.cpp_FUN_00591530    ; 005a0c9c
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[EBP + 0x1e]                ; 005a0ca1
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005a0ca4
    MOVSD ES:EDI,ESI                    ; 005a0caa
    MOVSD ES:EDI,ESI                    ; 005a0cab
    MOVSD ES:EDI,ESI                    ; 005a0cac
    XOR EBX,EBX                         ; 005a0cad
    MOV dword ptr [EAX + 0x2a8],0x3d4ccccd ; 005a0caf
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005a0cb9
    ADD ESP,0x8                         ; 005a0cbc
    MOV dword ptr [EBP + 0x72],EAX      ; 005a0cbf
    CALL core_bwgrndma.cpp_FUN_005a7ed0 ; 005a0cc2
        ;   XREF to: 005a7ed0 (UNCONDITIONAL_CALL)  ; undefined core_bwgrndma.cpp_FUN_005a7ed0()
        ;   Label: LAB_005a0cc2
    TEST EAX,EAX                        ; 005a0cc7
    JZ 0x005a0ef7                       ; 005a0cc9
        ;   XREF to: 005a0ef7 (CONDITIONAL_JUMP)  ; LAB_005a0ef7
    PUSH 0x40c90fdb                     ; 005a0ccf
    PUSH 0x0                            ; 005a0cd4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005a0cd6
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 005a0cdb
    LEA ESI,[EBP + -0x6a]               ; 005a0cde
    MOV dword ptr [EBP + 0x76],EAX      ; 005a0ce1
    PUSH 0x40c90fdb                     ; 005a0ce4
    FLD float ptr [EBP + 0x76]          ; 005a0ce9
    PUSH 0x0                            ; 005a0cec
    FSTP float ptr [EBP + 0x52]         ; 005a0cee
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005a0cf1
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 005a0cf6
    LEA EDI,[EBP + -0x3a]               ; 005a0cf9
    MOV dword ptr [EBP + 0x76],EAX      ; 005a0cfc
    PUSH 0x40c90fdb                     ; 005a0cff
    FLD float ptr [EBP + 0x76]          ; 005a0d04
    PUSH 0x0                            ; 005a0d07
    FSTP float ptr [EBP + 0x4e]         ; 005a0d09
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005a0d0c
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 005a0d11
    MOV dword ptr [EBP + 0x76],EAX      ; 005a0d14
    SUB ESP,0x4                         ; 005a0d17
    MOV EAX,dword ptr [EBP + 0x76]      ; 005a0d1a
    MOV dword ptr [ESP],EAX             ; 005a0d1d
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_00594020 ; 005a0d20
        ;   XREF to: 00594020 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleZ_FUN_00594020()
    ADD ESP,0x4                         ; 005a0d25
    LEA EAX,[EBP + -0x3a]               ; 005a0d28
    LEA ESI,[EBP + -0x6a]               ; 005a0d2b
    PUSH EAX                            ; 005a0d2e
    MOVSD ES:EDI,ESI                    ; 005a0d2f
    MOVSD ES:EDI,ESI                    ; 005a0d30
    MOVSD ES:EDI,ESI                    ; 005a0d31
    MOVSD ES:EDI,ESI                    ; 005a0d32
    PUSH dword ptr [EBP + 0x4e]         ; 005a0d33
    LEA ESI,[EBP + 0xffffff46]          ; 005a0d36
    LEA EDI,[EBP + -0x7a]               ; 005a0d3c
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 005a0d3f
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    ADD ESP,0x4                         ; 005a0d44
    LEA EAX,[EBP + -0x7a]               ; 005a0d47
    LEA ESI,[EBP + 0xffffff46]          ; 005a0d4a
    PUSH EAX                            ; 005a0d50
    MOVSD ES:EDI,ESI                    ; 005a0d51
    MOVSD ES:EDI,ESI                    ; 005a0d52
    MOVSD ES:EDI,ESI                    ; 005a0d53
    MOVSD ES:EDI,ESI                    ; 005a0d54
    PUSH dword ptr [EBP + 0x52]         ; 005a0d55
    LEA ESI,[EBP + 0xffffff56]          ; 005a0d58
    LEA EDI,[EBP + 0xffffff76]          ; 005a0d5e
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00593fa0 ; 005a0d64
        ;   XREF to: 00593fa0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00593fa0()
    LEA ESI,[EBP + 0xffffff56]          ; 005a0d69
    LEA EAX,[EBP + 0xffffff76]          ; 005a0d6f
    ADD ESP,0x4                         ; 005a0d75
    MOVSD ES:EDI,ESI                    ; 005a0d78
    MOVSD ES:EDI,ESI                    ; 005a0d79
    MOVSD ES:EDI,ESI                    ; 005a0d7a
    MOVSD ES:EDI,ESI                    ; 005a0d7b
    PUSH EAX                            ; 005a0d7c
    LEA ESI,[EBP + 0xffffff36]          ; 005a0d7d
    LEA EDI,[EBP + -0x5a]               ; 005a0d83
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 005a0d86
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[EBP + 0xffffff36]          ; 005a0d8b
    LEA EAX,[EBP + -0x5a]               ; 005a0d91
    ADD ESP,0x8                         ; 005a0d94
    MOVSD ES:EDI,ESI                    ; 005a0d97
    MOVSD ES:EDI,ESI                    ; 005a0d98
    MOVSD ES:EDI,ESI                    ; 005a0d99
    MOVSD ES:EDI,ESI                    ; 005a0d9a
    PUSH EAX                            ; 005a0d9b
    LEA ESI,[EBP + 0xffffff66]          ; 005a0d9c
    LEA EDI,[EBP + -0x4a]               ; 005a0da2
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 005a0da5
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[EBP + 0xffffff66]          ; 005a0daa
    LEA EAX,[EBP + -0x4a]               ; 005a0db0
    ADD ESP,0x8                         ; 005a0db3
    MOVSD ES:EDI,ESI                    ; 005a0db6
    MOVSD ES:EDI,ESI                    ; 005a0db7
    MOVSD ES:EDI,ESI                    ; 005a0db8
    MOVSD ES:EDI,ESI                    ; 005a0db9
    PUSH EAX                            ; 005a0dba
    LEA ESI,[EBP + 0xffffff06]          ; 005a0dbb
    CALL core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10 ; 005a0dc1
        ;   XREF to: 00593a10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10()
    ADD ESP,0x4                         ; 005a0dc6
    LEA EAX,[EBP + 0xfffffed6]          ; 005a0dc9
    PUSH EAX                            ; 005a0dcf
    LEA EDI,[EBP + 0xfffffed6]          ; 005a0dd0
    MOV ECX,0xc                         ; 005a0dd6
    PUSH 0x40000000                     ; 005a0ddb
    LEA ESI,[EBP + 0xffffff06]          ; 005a0de0
    PUSH 0x3f800000                     ; 005a0de6
    MOVSD.REP ES:EDI,ESI                ; 005a0deb
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005a0ded
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    XOR ESI,ESI                         ; 005a0df2
    MOV dword ptr [EBP + 0x76],EAX      ; 005a0df4
    MOV dword ptr [EBP + 0x36],ESI      ; 005a0df7
    ADD ESP,0x8                         ; 005a0dfa
    MOV EAX,dword ptr [EBP + 0x76]      ; 005a0dfd
    MOV dword ptr [EBP + 0x56],EAX      ; 005a0e00
    MOV EAX,dword ptr [EBP + 0x56]      ; 005a0e03
    MOV dword ptr [EBP + 0x3e],ESI      ; 005a0e06
    MOV dword ptr [EBP + 0x3a],EAX      ; 005a0e09
    LEA EAX,[EBP + 0x36]                ; 005a0e0c
    PUSH EAX                            ; 005a0e0f
    LEA ESI,[EBP + 0x6]                 ; 005a0e10
    LEA EDI,[EBP + -0x2a]               ; 005a0e13
    CALL core_xform.cpp_FUN_00591530    ; 005a0e16
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[EBP + 0x6]                 ; 005a0e1b
    MOV EDX,0x40a00000                  ; 005a0e1e
    XOR EAX,EAX                         ; 005a0e23
    ADD ESP,0x8                         ; 005a0e25
    MOV dword ptr [EBP + -0x6],EAX      ; 005a0e28
    MOV dword ptr [EBP + -0x2],EDX      ; 005a0e2b
    MOV dword ptr [EBP + 0x2],EAX       ; 005a0e2e
    MOVSD ES:EDI,ESI                    ; 005a0e31
    MOVSD ES:EDI,ESI                    ; 005a0e32
    MOVSD ES:EDI,ESI                    ; 005a0e33
    PUSH EAX                            ; 005a0e34
    FLD float ptr [EBP + -0x2a]         ; 005a0e35
    FLD float ptr [EBP + -0x26]         ; 005a0e38
    FLD float ptr [EBP + -0x22]         ; 005a0e3b
    LEA EDI,[EBP + 0x42]                ; 005a0e3e
    LEA ESI,[EBP + 0x12]                ; 005a0e41
    LEA EAX,[EBP + -0x6]                ; 005a0e44
    FXCH ST2                            ; 005a0e47
    FADD float ptr [EBP + -0x1e]        ; 005a0e49
    FXCH                                ; 005a0e4c
    FADD float ptr [EBP + -0x1a]        ; 005a0e4e
    FXCH ST2                            ; 005a0e51
    FADD float ptr [EBP + -0x16]        ; 005a0e53
    PUSH EAX                            ; 005a0e56
    FXCH                                ; 005a0e57
    FSTP float ptr [EBP + 0x12]         ; 005a0e59
    FXCH                                ; 005a0e5c
    FSTP float ptr [EBP + 0x16]         ; 005a0e5e
    FSTP float ptr [EBP + 0x1a]         ; 005a0e61
    MOVSD ES:EDI,ESI                    ; 005a0e64
    MOVSD ES:EDI,ESI                    ; 005a0e65
    MOVSD ES:EDI,ESI                    ; 005a0e66
    LEA EAX,[EBP + -0x12]               ; 005a0e67
    FLD float ptr [EBP + 0x42]          ; 005a0e6a
    FLD float ptr [EBP + 0x46]          ; 005a0e6d
    FLD float ptr [EBP + 0x4a]          ; 005a0e70
    PUSH EAX                            ; 005a0e73
    LEA EDI,[EBP + -0x12]               ; 005a0e74
    LEA ESI,[EBP + 0x2a]                ; 005a0e77
    LEA EAX,[EBP + 0x42]                ; 005a0e7a
    FXCH ST2                            ; 005a0e7d
    FSUB float ptr [EBP + -0x1e]        ; 005a0e7f
    FXCH                                ; 005a0e82
    FSUB float ptr [EBP + -0x1a]        ; 005a0e84
    FXCH ST2                            ; 005a0e87
    FSUB float ptr [EBP + -0x16]        ; 005a0e89
    PUSH EAX                            ; 005a0e8c
    FXCH                                ; 005a0e8d
    FSTP float ptr [EBP + 0x2a]         ; 005a0e8f
    PUSH 0x0                            ; 005a0e92
    FXCH                                ; 005a0e94
    FSTP float ptr [EBP + 0x2e]         ; 005a0e96
    PUSH 0x3e4ccccd                     ; 005a0e99
    FSTP float ptr [EBP + 0x32]         ; 005a0e9e
    PUSH 0x0                            ; 005a0ea1
    MOVSD ES:EDI,ESI                    ; 005a0ea3
    MOVSD ES:EDI,ESI                    ; 005a0ea4
    MOVSD ES:EDI,ESI                    ; 005a0ea5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005a0ea6
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 005a0eab
    MOV dword ptr [EBP + 0x76],EAX      ; 005a0eae
    SUB ESP,0x4                         ; 005a0eb1
    MOV EAX,dword ptr [EBP + 0x76]      ; 005a0eb4
    MOV dword ptr [ESP],EAX             ; 005a0eb7
    PUSH 0x3f19999a                     ; 005a0eba
    PUSH 0x3e99999a                     ; 005a0ebf
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005a0ec4
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 005a0ec9
    MOV dword ptr [EBP + 0x76],EAX      ; 005a0ecc
    SUB ESP,0x4                         ; 005a0ecf
    MOV EAX,dword ptr [EBP + 0x76]      ; 005a0ed2
    MOV dword ptr [ESP],EAX             ; 005a0ed5
    PUSH 0x0                            ; 005a0ed8
    PUSH 0x3f333333                     ; 005a0eda
    PUSH 0x0                            ; 005a0edf
    PUSH 0x3f800000                     ; 005a0ee1
    MOV ESI,dword ptr [EBP + 0x72]      ; 005a0ee6
    PUSH 0x3f800000                     ; 005a0ee9
    PUSH ESI                            ; 005a0eee
    CALL core_bwspart.cpp_CSimpleParticleSystem_emit_FUN_005a8300 ; 005a0eef
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_emit_FUN_005a8300(CSimpleParticleSystem * this_ptr, undefined4 param_2, undefined4 param_3, undefined4 param_4, ...)
    ADD ESP,0x34                        ; 005a0ef4
    INC EBX                             ; 005a0ef7
        ;   Label: LAB_005a0ef7
    CMP EBX,0x14                        ; 005a0ef8
    JL 0x005a0cc2                       ; 005a0efb
        ;   XREF to: 005a0cc2 (CONDITIONAL_JUMP)  ; LAB_005a0cc2
    MOV EDI,dword ptr [EBP + 0x8e]      ; 005a0f01
        ;   Label: LAB_005a0f01
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005a0f07
    PUSH EDI                            ; 005a0f0d
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 005a0f0e
    CALL dword ptr [EAX + 0x17c]        ; 005a0f14
    ADD ESP,0x4                         ; 005a0f1a
    TEST EAX,EAX                        ; 005a0f1d
    JNZ 0x005a0f4a                      ; 005a0f1f
        ;   XREF to: 005a0f4a (CONDITIONAL_JUMP)  ; LAB_005a0f4a
    LEA ESP,[EBP + 0x7a]                ; 005a0f21
        ;   Label: LAB_005a0f21
    POP EBP                             ; 005a0f24
    POP EDI                             ; 005a0f25
    POP ESI                             ; 005a0f26
    POP EBX                             ; 005a0f27
    RET                                 ; 005a0f28
    MOV EDX,dword ptr [EBP + 0x8e]      ; 005a0f29
        ;   Label: LAB_005a0f29
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005a0f2f
    PUSH EDX                            ; 005a0f35
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 005a0f36
    CALL dword ptr [EAX + 0x17c]        ; 005a0f3c
    ADD ESP,0x4                         ; 005a0f42
    JMP 0x005a0c13                      ; 005a0f45
        ;   XREF to: 005a0c13 (UNCONDITIONAL_JUMP)  ; LAB_005a0c13
    PUSH 0x5efc55                       ; 005a0f4a | = "Chasing"
        ;   Label: LAB_005a0f4a
    LEA EBX,[EDI + 0x10af8]             ; 005a0f4f
    PUSH EBX                            ; 005a0f55
    CALL core_muzzle.cpp_FUN_0059daa0   ; 005a0f56
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a0f5b
    TEST EAX,EAX                        ; 005a0f5e
    JZ 0x005a0f21                       ; 005a0f60
        ;   XREF to: 005a0f21 (CONDITIONAL_JUMP)  ; LAB_005a0f21
    PUSH 0x5efc5d                       ; 005a0f62 | = "RangeAttack"
    PUSH 0x5efc69                       ; 005a0f67 | = "ChaseComplete"
    PUSH EBX                            ; 005a0f6c
    CALL core_muzzle.cpp_FUN_0059dae0   ; 005a0f6d
        ;   XREF to: 0059dae0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059dae0()
    ADD ESP,0xc                         ; 005a0f72
    TEST EAX,EAX                        ; 005a0f75
    JZ 0x005a0f21                       ; 005a0f77
        ;   XREF to: 005a0f21 (CONDITIONAL_JUMP)  ; LAB_005a0f21
    MOV EBX,dword ptr [EDI + 0x10a78]   ; 005a0f79
    FLD float ptr [EBX + 0x28]          ; 005a0f7f
    FLD float ptr [EBX + 0x20]          ; 005a0f82
    FSUB float ptr [EDI + 0x20]         ; 005a0f85
    FXCH                                ; 005a0f88
    FSUB float ptr [EDI + 0x28]         ; 005a0f8a
    FXCH                                ; 005a0f8d
    FST float ptr [EBP + 0x66]          ; 005a0f8f
    FMUL float ptr [EBP + 0x66]         ; 005a0f92
    FXCH                                ; 005a0f95
    FST float ptr [EBP + 0x6a]          ; 005a0f97
    FMUL float ptr [EBP + 0x6a]         ; 005a0f9a
    FXCH                                ; 005a0f9d
    FSTP float ptr [EBP + 0x5e]         ; 005a0f9f
    FSTP float ptr [EBP + 0x5a]         ; 005a0fa2
    FLD float ptr [EBP + 0x5e]          ; 005a0fa5
    FADD float ptr [EBP + 0x5a]         ; 005a0fa8
    FSQRT                               ; 005a0fab
    FST float ptr [EBP + 0x62]          ; 005a0fad
    FCOMP float ptr [0x005fedb0]        ; 005a0fb0 | DAT_005fedb0
    FNSTSW AX                           ; 005a0fb6
    SAHF                                ; 005a0fb8
    JNC 0x005a0f21                      ; 005a0fb9
        ;   XREF to: 005a0f21 (CONDITIONAL_JUMP)  ; LAB_005a0f21
    MOV EAX,dword ptr [EBP + 0x62]      ; 005a0fbf
    MOV dword ptr [EDI + 0x11394],EAX   ; 005a0fc2
    LEA ESP,[EBP + 0x7a]                ; 005a0fc8
    POP EBP                             ; 005a0fcb
    POP EDI                             ; 005a0fcc
    POP ESI                             ; 005a0fcd
    POP EBX                             ; 005a0fce
    RET                                 ; 005a0fcf

