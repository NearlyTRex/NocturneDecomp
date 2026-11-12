; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_health_cpp_CHealthItem_process_FUN_004cdb60(CHealthItem *this_ptr,float delta_time)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005d99bc
;   CSimpleParticleSystem* g_CSimpleParticleSystemPtr = 026687b0
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_bwspart.cpp_CSimpleParticleSystem_emit_FUN_005a8300
;   core_bwspart.cpp_CSimpleParticleSystem_process_FUN_005a8180
;   core_xform.cpp_FUN_00591530
;   core_xform.cpp_FUN_00594380
;   core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdb60
        ;   Label: core_health.cpp_CHealthItem_process_FUN_004cdb60
    PUSH ESI                            ; 004cdb61
    PUSH EDI                            ; 004cdb62
    PUSH EBP                            ; 004cdb63
    MOV EBP,ESP                         ; 004cdb64
    SUB ESP,0x150                       ; 004cdb66
    SUB EBP,0x7a                        ; 004cdb6c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004cdb6f
    LEA EAX,[EBX + 0x154]               ; 004cdb75
    PUSH dword ptr [EBP + 0x92]         ; 004cdb7b
    PUSH EAX                            ; 004cdb81
    CALL core_bwspart.cpp_CSimpleParticleSystem_process_FUN_005a8180 ; 004cdb82
        ;   XREF to: 005a8180 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_process_FUN_005a8180(CSimpleParticleSystem * this_ptr, float param_2)
    FLD float ptr [EBX + 0x438]         ; 004cdb87
    FSUB float ptr [EBP + 0x92]         ; 004cdb8d
    ADD ESP,0x8                         ; 004cdb93
    FST float ptr [EBX + 0x438]         ; 004cdb96
    FLDZ                                ; 004cdb9c
    FCOMPP                              ; 004cdb9e
    FNSTSW AX                           ; 004cdba0
    SAHF                                ; 004cdba2
    JNC 0x004cdbad                      ; 004cdba3
        ;   XREF to: 004cdbad (CONDITIONAL_JUMP)  ; LAB_004cdbad
    LEA ESP,[EBP + 0x7a]                ; 004cdba5
    POP EBP                             ; 004cdba8
    POP EDI                             ; 004cdba9
    POP ESI                             ; 004cdbaa
    POP EBX                             ; 004cdbab
    RET                                 ; 004cdbac
    LEA ESI,[EBP + -0x76]               ; 004cdbad
        ;   Label: LAB_004cdbad
    PUSH EBX                            ; 004cdbb0
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004cdbb1
    MOV dword ptr [EBX + 0x438],0x3e4ccccd ; 004cdbb7
    LEA EDI,[EBP + -0x5e]               ; 004cdbc1
    CALL dword ptr [EAX + 0x24]         ; 004cdbc4
    MOV ECX,0x6                         ; 004cdbc7
    LEA ESI,[EBP + -0x76]               ; 004cdbcc
    MOVSD.REP ES:EDI,ESI                ; 004cdbcf
    LEA EAX,[EBP + -0x5e]               ; 004cdbd1
    FLD float ptr [EBP + -0x5e]         ; 004cdbd4
    FLD float ptr [EBP + -0x5a]         ; 004cdbd7
    FLD float ptr [EBP + -0x56]         ; 004cdbda
    LEA EDI,[EBP + -0x1a]               ; 004cdbdd
    LEA ESI,[EBP + 0x46]                ; 004cdbe0
    FXCH ST2                            ; 004cdbe3
    FADD float ptr [EAX + 0xc]          ; 004cdbe5
    FXCH                                ; 004cdbe8
    FADD float ptr [EAX + 0x10]         ; 004cdbea
    FXCH ST2                            ; 004cdbed
    FADD float ptr [EAX + 0x14]         ; 004cdbef
    FXCH                                ; 004cdbf2
    FSTP float ptr [EBP + 0x46]         ; 004cdbf4
    FXCH                                ; 004cdbf7
    FSTP float ptr [EBP + 0x4a]         ; 004cdbf9
    FSTP float ptr [EBP + 0x4e]         ; 004cdbfc
    MOVSD ES:EDI,ESI                    ; 004cdbff
    MOVSD ES:EDI,ESI                    ; 004cdc00
    MOVSD ES:EDI,ESI                    ; 004cdc01
    FLD float ptr [0x005d99bc]          ; 004cdc02 | DAT_005d99bc
    FLD float ptr [EBP + -0x1a]         ; 004cdc08
    FMUL ST1                            ; 004cdc0b
    FLD float ptr [EBP + -0x16]         ; 004cdc0d
    FMUL ST2                            ; 004cdc10
    ADD ESP,0x4                         ; 004cdc12
    FLD float ptr [EBP + -0x12]         ; 004cdc15
    FMULP ST3                           ; 004cdc18
    PUSH 0x40c90fdb                     ; 004cdc1a
    PUSH 0x0                            ; 004cdc1f
    FXCH                                ; 004cdc21
    FSTP float ptr [EBP + 0x5e]         ; 004cdc23
    FSTP float ptr [EBP + 0x62]         ; 004cdc26
    FSTP float ptr [EBP + 0x66]         ; 004cdc29
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004cdc2c
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 004cdc31
    LEA EDI,[EBP + 0xa]                 ; 004cdc34
    MOV dword ptr [EBP + 0x76],EAX      ; 004cdc37
    PUSH 0x40c90fdb                     ; 004cdc3a
    FLD float ptr [EBP + 0x76]          ; 004cdc3f
    PUSH 0x0                            ; 004cdc42
    FSTP float ptr [EBP + 0x6e]         ; 004cdc44
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004cdc47
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 004cdc4c
    LEA ESI,[EBP + 0x5e]                ; 004cdc4f
    MOV dword ptr [EBP + 0x76],EAX      ; 004cdc52
    PUSH 0x40c90fdb                     ; 004cdc55
    FLD float ptr [EBP + 0x76]          ; 004cdc5a
    PUSH 0x0                            ; 004cdc5d
    FSTP float ptr [EBP + 0x72]         ; 004cdc5f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004cdc62
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004cdc67
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004cdc6a
    FLD float ptr [EBP + 0x76]          ; 004cdc6d
    MOV dword ptr [EBP + 0x3a],EAX      ; 004cdc70
    MOV EAX,dword ptr [EBP + 0x72]      ; 004cdc73
    FSTP float ptr [EBP + 0x6a]         ; 004cdc76
    MOV dword ptr [EBP + 0x3e],EAX      ; 004cdc79
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004cdc7c
    ADD ESP,0x8                         ; 004cdc7f
    MOV dword ptr [EBP + 0x42],EAX      ; 004cdc82
    LEA EAX,[EBP + 0x3a]                ; 004cdc85
    MOVSD ES:EDI,ESI                    ; 004cdc88
    MOVSD ES:EDI,ESI                    ; 004cdc89
    MOVSD ES:EDI,ESI                    ; 004cdc8a
    PUSH EAX                            ; 004cdc8b
    LEA ESI,[EBP + -0x36]               ; 004cdc8c
    LEA EDI,[EBP + -0x46]               ; 004cdc8f
    CALL core_xform.cpp_FUN_00594380    ; 004cdc92
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00594380()
    LEA ESI,[EBP + -0x36]               ; 004cdc97
    LEA EAX,[EBP + -0x46]               ; 004cdc9a
    ADD ESP,0x4                         ; 004cdc9d
    MOVSD ES:EDI,ESI                    ; 004cdca0
    MOVSD ES:EDI,ESI                    ; 004cdca1
    MOVSD ES:EDI,ESI                    ; 004cdca2
    MOVSD ES:EDI,ESI                    ; 004cdca3
    PUSH EAX                            ; 004cdca4
    LEA ESI,[EBP + 0xffffff2a]          ; 004cdca5
    LEA EDI,[EBP + 0xffffff5a]          ; 004cdcab
    CALL core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10 ; 004cdcb1
        ;   XREF to: 00593a10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10()
    MOV ECX,0xc                         ; 004cdcb6
    LEA ESI,[EBP + 0xffffff2a]          ; 004cdcbb
    ADD ESP,0x4                         ; 004cdcc1
    LEA EAX,[EBP + 0xffffff5a]          ; 004cdcc4
    XOR EDX,EDX                         ; 004cdcca
    PUSH EAX                            ; 004cdccc
    MOV dword ptr [EBP + 0x22],EDX      ; 004cdccd
    MOVSD.REP ES:EDI,ESI                ; 004cdcd0
    MOV dword ptr [EBP + 0x26],EDX      ; 004cdcd2
    MOV ESI,0x3f000000                  ; 004cdcd5
    LEA EAX,[EBP + 0x22]                ; 004cdcda
    MOV dword ptr [EBP + 0x2a],ESI      ; 004cdcdd
    PUSH EAX                            ; 004cdce0
    LEA ESI,[EBP + -0xe]                ; 004cdce1
    LEA EDI,[EBP + -0x2]                ; 004cdce4
    CALL core_xform.cpp_FUN_00591530    ; 004cdce7
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[EBP + -0xe]                ; 004cdcec
    MOVSD ES:EDI,ESI                    ; 004cdcef
    MOVSD ES:EDI,ESI                    ; 004cdcf0
    MOVSD ES:EDI,ESI                    ; 004cdcf1
    FLD float ptr [EBP + -0x2]          ; 004cdcf2
    FLD float ptr [EBP + 0x2]           ; 004cdcf5
    FLD float ptr [EBP + 0x6]           ; 004cdcf8
    LEA EDI,[EBP + 0x16]                ; 004cdcfb
    LEA ESI,[EBP + 0x52]                ; 004cdcfe
    FXCH ST2                            ; 004cdd01
    FADD float ptr [EBP + 0xa]          ; 004cdd03
    FXCH                                ; 004cdd06
    FADD float ptr [EBP + 0xe]          ; 004cdd08
    FXCH ST2                            ; 004cdd0b
    FADD float ptr [EBP + 0x12]         ; 004cdd0d
    FXCH                                ; 004cdd10
    FSTP float ptr [EBP + 0x52]         ; 004cdd12
    FXCH                                ; 004cdd15
    FSTP float ptr [EBP + 0x56]         ; 004cdd17
    FSTP float ptr [EBP + 0x5a]         ; 004cdd1a
    MOVSD ES:EDI,ESI                    ; 004cdd1d
    MOVSD ES:EDI,ESI                    ; 004cdd1e
    MOVSD ES:EDI,ESI                    ; 004cdd1f
    LEA EDI,[EBP + 0x2e]                ; 004cdd20
    MOV ESI,0x265370c                   ; 004cdd23
    MOVSD ES:EDI,ESI                    ; 004cdd28
    MOVSD ES:EDI,ESI                    ; 004cdd29
    MOVSD ES:EDI,ESI                    ; 004cdd2a
    MOV EAX,0x3f800000                  ; 004cdd2b
    XOR EDI,EDI                         ; 004cdd30
    MOV dword ptr [EBP + -0x22],EAX     ; 004cdd32
    MOV dword ptr [EBP + -0x26],EDI     ; 004cdd35
    MOV dword ptr [EBP + -0x1e],EDI     ; 004cdd38
    FLD float ptr [EBP + 0x16]          ; 004cdd3b
    FADD float ptr [EBX + 0x20]         ; 004cdd3e
    FLD float ptr [EBP + 0x1a]          ; 004cdd41
    FXCH                                ; 004cdd44
    FSTP float ptr [EBP + 0x16]         ; 004cdd46
    FADD float ptr [EBX + 0x24]         ; 004cdd49
    FLD float ptr [EBP + 0x1e]          ; 004cdd4c
    FXCH                                ; 004cdd4f
    FSTP float ptr [EBP + 0x1a]         ; 004cdd51
    FADD float ptr [EBX + 0x28]         ; 004cdd54
    ADD ESP,0x8                         ; 004cdd57
    FSTP float ptr [EBP + 0x1e]         ; 004cdd5a
    PUSH EDI                            ; 004cdd5d
    LEA EAX,[EBP + -0x26]               ; 004cdd5e
    PUSH EAX                            ; 004cdd61
    LEA EAX,[EBP + 0x2e]                ; 004cdd62
    PUSH EAX                            ; 004cdd65
    LEA EAX,[EBP + 0x16]                ; 004cdd66
    PUSH EAX                            ; 004cdd69
    PUSH 0x0                            ; 004cdd6a
    PUSH 0x0                            ; 004cdd6c
    PUSH 0x3f800000                     ; 004cdd6e
    PUSH 0x0                            ; 004cdd73
    PUSH 0x3ecccccd                     ; 004cdd75
    PUSH 0x0                            ; 004cdd7a
    PUSH 0x3f800000                     ; 004cdd7c
    MOV ECX,dword ptr [0x0061ebfc]      ; 004cdd81 | g_CSimpleParticleSystemPtr
    PUSH 0x3f800000                     ; 004cdd87
    PUSH ECX                            ; 004cdd8c
    CALL core_bwspart.cpp_CSimpleParticleSystem_emit_FUN_005a8300 ; 004cdd8d
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_emit_FUN_005a8300(CSimpleParticleSystem * this_ptr, undefined4 param_2, undefined4 param_3, undefined4 param_4, ...)
    ADD ESP,0x34                        ; 004cdd92
    LEA ESP,[EBP + 0x7a]                ; 004cdd95
    POP EBP                             ; 004cdd98
    POP EDI                             ; 004cdd99
    POP ESI                             ; 004cdd9a
    POP EBX                             ; 004cdd9b
    RET                                 ; 004cdd9c

