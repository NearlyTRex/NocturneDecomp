; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_necklace_cpp_CNecklace_process_FUN_005adad0(CNecklace *this_ptr,float delta_time)
;
; Parameters:
; CNecklace *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005f0f37
;   CSimpleParticleSystem* g_CSimpleParticleSystemPtr = 026687b0
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_boxactor.cpp_CBoxActor_process_FUN_0041c090
;   core_bwspart.cpp_CSimpleParticleSystem_emit_FUN_005a8300
;   core_xform.cpp_FUN_00591530
;   core_xform.cpp_FUN_00594380
;   core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005adad0
        ;   Label: core_necklace.cpp_CNecklace_process_FUN_005adad0
    PUSH ESI                            ; 005adad1
    PUSH EDI                            ; 005adad2
    PUSH EBP                            ; 005adad3
    MOV EBP,ESP                         ; 005adad4
    SUB ESP,0x154                       ; 005adad6
    SUB EBP,0x7a                        ; 005adadc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005adadf
    PUSH dword ptr [EBP + 0x92]         ; 005adae5
    PUSH EBX                            ; 005adaeb
    CALL core_boxactor.cpp_CBoxActor_process_FUN_0041c090 ; 005adaec
        ;   XREF to: 0041c090 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_process_FUN_0041c090(CBoxActor * this_ptr, float delta_time)
    FLD float ptr [EBX + 0x2a8]         ; 005adaf1
    FSUB float ptr [EBP + 0x92]         ; 005adaf7
    ADD ESP,0x8                         ; 005adafd
    FST float ptr [EBX + 0x2a8]         ; 005adb00
    FLDZ                                ; 005adb06
    FCOMPP                              ; 005adb08
    FNSTSW AX                           ; 005adb0a
    SAHF                                ; 005adb0c
    JNC 0x005adb17                      ; 005adb0d
        ;   XREF to: 005adb17 (CONDITIONAL_JUMP)  ; LAB_005adb17
    LEA ESP,[EBP + 0x7a]                ; 005adb0f
    POP EBP                             ; 005adb12
    POP EDI                             ; 005adb13
    POP ESI                             ; 005adb14
    POP EBX                             ; 005adb15
    RET                                 ; 005adb16
    LEA ESI,[EBP + -0x62]               ; 005adb17
        ;   Label: LAB_005adb17
    PUSH EBX                            ; 005adb1a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005adb1b
    MOV dword ptr [EBX + 0x2a8],0x3dcccccd ; 005adb21
    LEA EDI,[EBP + -0x7a]               ; 005adb2b
    CALL dword ptr [EAX + 0x24]         ; 005adb2e
    MOV ECX,0x6                         ; 005adb31
    LEA ESI,[EBP + -0x62]               ; 005adb36
    MOVSD.REP ES:EDI,ESI                ; 005adb39
    LEA EAX,[EBP + -0x7a]               ; 005adb3b
    FLD float ptr [EBP + -0x7a]         ; 005adb3e
    FLD float ptr [EBP + -0x76]         ; 005adb41
    FLD float ptr [EBP + -0x72]         ; 005adb44
    LEA EDI,[EBP + 0x4e]                ; 005adb47
    LEA ESI,[EBP + 0x5a]                ; 005adb4a
    FXCH ST2                            ; 005adb4d
    FADD float ptr [EAX + 0xc]          ; 005adb4f
    FXCH                                ; 005adb52
    FADD float ptr [EAX + 0x10]         ; 005adb54
    FXCH ST2                            ; 005adb57
    FADD float ptr [EAX + 0x14]         ; 005adb59
    FXCH                                ; 005adb5c
    FSTP float ptr [EBP + 0x5a]         ; 005adb5e
    FXCH                                ; 005adb61
    FSTP float ptr [EBP + 0x5e]         ; 005adb63
    FSTP float ptr [EBP + 0x62]         ; 005adb66
    MOVSD ES:EDI,ESI                    ; 005adb69
    MOVSD ES:EDI,ESI                    ; 005adb6a
    MOVSD ES:EDI,ESI                    ; 005adb6b
    FLD float ptr [0x005f0f37]          ; 005adb6c | DAT_005f0f37
    FLD float ptr [EBP + 0x4e]          ; 005adb72
    FMUL ST1                            ; 005adb75
    FLD float ptr [EBP + 0x52]          ; 005adb77
    FMUL ST2                            ; 005adb7a
    ADD ESP,0x4                         ; 005adb7c
    FLD float ptr [EBP + 0x56]          ; 005adb7f
    FMULP ST3                           ; 005adb82
    PUSH 0x40c90fdb                     ; 005adb84
    PUSH 0x0                            ; 005adb89
    FXCH                                ; 005adb8b
    FSTP float ptr [EBP + 0x2a]         ; 005adb8d
    FSTP float ptr [EBP + 0x2e]         ; 005adb90
    FSTP float ptr [EBP + 0x32]         ; 005adb93
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005adb96
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 005adb9b
    LEA EDI,[EBP + 0x6]                 ; 005adb9e
    MOV dword ptr [EBP + 0x76],EAX      ; 005adba1
    PUSH 0x40c90fdb                     ; 005adba4
    FLD float ptr [EBP + 0x76]          ; 005adba9
    PUSH 0x0                            ; 005adbac
    FSTP float ptr [EBP + 0x66]         ; 005adbae
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005adbb1
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 005adbb6
    LEA ESI,[EBP + 0x2a]                ; 005adbb9
    MOV dword ptr [EBP + 0x76],EAX      ; 005adbbc
    PUSH 0x40c90fdb                     ; 005adbbf
    FLD float ptr [EBP + 0x76]          ; 005adbc4
    PUSH 0x0                            ; 005adbc7
    FSTP float ptr [EBP + 0x6a]         ; 005adbc9
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005adbcc
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 005adbd1
    MOV EAX,dword ptr [EBP + 0x66]      ; 005adbd4
    FLD float ptr [EBP + 0x76]          ; 005adbd7
    MOV dword ptr [EBP + -0x1e],EAX     ; 005adbda
    MOV EAX,dword ptr [EBP + 0x6a]      ; 005adbdd
    FSTP float ptr [EBP + 0x72]         ; 005adbe0
    MOV dword ptr [EBP + -0x1a],EAX     ; 005adbe3
    MOV EAX,dword ptr [EBP + 0x72]      ; 005adbe6
    ADD ESP,0x8                         ; 005adbe9
    MOV dword ptr [EBP + -0x16],EAX     ; 005adbec
    LEA EAX,[EBP + -0x1e]               ; 005adbef
    MOVSD ES:EDI,ESI                    ; 005adbf2
    MOVSD ES:EDI,ESI                    ; 005adbf3
    MOVSD ES:EDI,ESI                    ; 005adbf4
    PUSH EAX                            ; 005adbf5
    LEA ESI,[EBP + -0x3a]               ; 005adbf6
    LEA EDI,[EBP + -0x4a]               ; 005adbf9
    CALL core_xform.cpp_FUN_00594380    ; 005adbfc
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00594380()
    LEA ESI,[EBP + -0x3a]               ; 005adc01
    LEA EAX,[EBP + -0x4a]               ; 005adc04
    ADD ESP,0x4                         ; 005adc07
    MOVSD ES:EDI,ESI                    ; 005adc0a
    MOVSD ES:EDI,ESI                    ; 005adc0b
    MOVSD ES:EDI,ESI                    ; 005adc0c
    MOVSD ES:EDI,ESI                    ; 005adc0d
    PUSH EAX                            ; 005adc0e
    LEA ESI,[EBP + 0xffffff26]          ; 005adc0f
    CALL core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10 ; 005adc15
        ;   XREF to: 00593a10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10(CQuaternion4f * quat_in, CMatrix3x4f * matrix_out)
    ADD ESP,0x4                         ; 005adc1a
    LEA EAX,[EBP + 0xffffff56]          ; 005adc1d
    LEA EDI,[EBP + 0xffffff56]          ; 005adc23
    PUSH EAX                            ; 005adc29
    MOV ECX,0xc                         ; 005adc2a
    LEA ESI,[EBP + 0xffffff26]          ; 005adc2f
    PUSH 0x3f800000                     ; 005adc35
    MOVSD.REP ES:EDI,ESI                ; 005adc3a
    PUSH 0x3f000000                     ; 005adc3c
    LEA ESI,[EBP + 0x12]                ; 005adc41
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005adc44
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 005adc49
    LEA EDI,[EBP + -0x12]               ; 005adc4c
    MOV EAX,dword ptr [EBP + 0x76]      ; 005adc4f
    MOV dword ptr [EBP + 0x6e],EAX      ; 005adc52
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005adc55
    ADD ESP,0x8                         ; 005adc58
    MOV dword ptr [EBP + 0x2],EAX       ; 005adc5b
    LEA EAX,[EBP + -0x6]                ; 005adc5e
    XOR EDX,EDX                         ; 005adc61
    PUSH EAX                            ; 005adc63
    MOV dword ptr [EBP + -0x6],EDX      ; 005adc64
    MOV dword ptr [EBP + -0x2],EDX      ; 005adc67
    CALL core_xform.cpp_FUN_00591530    ; 005adc6a
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[EBP + 0x12]                ; 005adc6f
    MOVSD ES:EDI,ESI                    ; 005adc72
    MOVSD ES:EDI,ESI                    ; 005adc73
    MOVSD ES:EDI,ESI                    ; 005adc74
    FLD float ptr [EBP + -0x12]         ; 005adc75
    FLD float ptr [EBP + -0xe]          ; 005adc78
    FLD float ptr [EBP + -0xa]          ; 005adc7b
    LEA EDI,[EBP + 0x42]                ; 005adc7e
    LEA ESI,[EBP + 0x36]                ; 005adc81
    FXCH ST2                            ; 005adc84
    FADD float ptr [EBP + 0x6]          ; 005adc86
    FXCH                                ; 005adc89
    FADD float ptr [EBP + 0xa]          ; 005adc8b
    FXCH ST2                            ; 005adc8e
    FADD float ptr [EBP + 0xe]          ; 005adc90
    FXCH                                ; 005adc93
    FSTP float ptr [EBP + 0x36]         ; 005adc95
    FXCH                                ; 005adc98
    FSTP float ptr [EBP + 0x3a]         ; 005adc9a
    FSTP float ptr [EBP + 0x3e]         ; 005adc9d
    MOVSD ES:EDI,ESI                    ; 005adca0
    MOVSD ES:EDI,ESI                    ; 005adca1
    MOVSD ES:EDI,ESI                    ; 005adca2
    LEA EDI,[EBP + 0x1e]                ; 005adca3
    MOV ESI,0x265370c                   ; 005adca6
    MOVSD ES:EDI,ESI                    ; 005adcab
    MOVSD ES:EDI,ESI                    ; 005adcac
    MOVSD ES:EDI,ESI                    ; 005adcad
    XOR ESI,ESI                         ; 005adcae
    MOV EDI,0x3f800000                  ; 005adcb0
    MOV dword ptr [EBP + -0x2a],ESI     ; 005adcb5
    MOV dword ptr [EBP + -0x26],EDI     ; 005adcb8
    MOV dword ptr [EBP + -0x22],ESI     ; 005adcbb
    FLD float ptr [EBP + 0x42]          ; 005adcbe
    FADD float ptr [EBX + 0x20]         ; 005adcc1
    FLD float ptr [EBP + 0x46]          ; 005adcc4
    FXCH                                ; 005adcc7
    FSTP float ptr [EBP + 0x42]         ; 005adcc9
    FADD float ptr [EBX + 0x24]         ; 005adccc
    FLD float ptr [EBP + 0x4a]          ; 005adccf
    FXCH                                ; 005adcd2
    FSTP float ptr [EBP + 0x46]         ; 005adcd4
    FADD float ptr [EBX + 0x28]         ; 005adcd7
    ADD ESP,0x8                         ; 005adcda
    FSTP float ptr [EBP + 0x4a]         ; 005adcdd
    PUSH ESI                            ; 005adce0
    LEA EAX,[EBP + -0x2a]               ; 005adce1
    PUSH EAX                            ; 005adce4
    LEA EAX,[EBP + 0x1e]                ; 005adce5
    PUSH EAX                            ; 005adce8
    LEA EAX,[EBP + 0x42]                ; 005adce9
    PUSH EAX                            ; 005adcec
    PUSH 0x3f800000                     ; 005adced
    PUSH 0x3ee66666                     ; 005adcf2
    PUSH 0x3ed26e98                     ; 005adcf7
    PUSH 0x0                            ; 005adcfc
    PUSH 0x3ecccccd                     ; 005adcfe
    PUSH 0x0                            ; 005add03
    PUSH 0x3f800000                     ; 005add05
    MOV EDX,dword ptr [0x0061ebfc]      ; 005add0a | g_CSimpleParticleSystemPtr
    PUSH 0x3f800000                     ; 005add10
    PUSH EDX                            ; 005add15
    CALL core_bwspart.cpp_CSimpleParticleSystem_emit_FUN_005a8300 ; 005add16
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_emit_FUN_005a8300(CSimpleParticleSystem * this_ptr, undefined4 param_2, undefined4 param_3, undefined4 param_4, ...)
    ADD ESP,0x34                        ; 005add1b
    LEA ESP,[EBP + 0x7a]                ; 005add1e
    POP EBP                             ; 005add21
    POP EDI                             ; 005add22
    POP ESI                             ; 005add23
    POP EBX                             ; 005add24
    RET                                 ; 005add25

