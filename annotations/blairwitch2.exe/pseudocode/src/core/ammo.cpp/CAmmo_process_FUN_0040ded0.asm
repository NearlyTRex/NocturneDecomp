; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammo_cpp_CAmmo_process_FUN_0040ded0(CAmmo *this_ptr,float delta_time)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005cb0da
;   CSimpleParticleSystem* g_CSimpleParticleSystemPtr = 026687b0
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_xform.cpp_FUN_00591530
;   core_xform.cpp_FUN_00594380
;   core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10
;   unkafter_superopt.cpp_FUN_005a8300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ded0
        ;   Label: core_ammo.cpp_CAmmo_process_FUN_0040ded0
    PUSH ESI                            ; 0040ded1
    PUSH EDI                            ; 0040ded2
    PUSH EBP                            ; 0040ded3
    MOV EBP,ESP                         ; 0040ded4
    SUB ESP,0x144                       ; 0040ded6
    SUB EBP,0x7a                        ; 0040dedc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0040dedf
    FLD float ptr [EBX + 0x478]         ; 0040dee5
    FSUB float ptr [EBP + 0x92]         ; 0040deeb
    FST float ptr [EBX + 0x478]         ; 0040def1
    FLDZ                                ; 0040def7
    FCOMPP                              ; 0040def9
    FNSTSW AX                           ; 0040defb
    SAHF                                ; 0040defd
    JNC 0x0040df08                      ; 0040defe
        ;   XREF to: 0040df08 (CONDITIONAL_JUMP)  ; LAB_0040df08
    LEA ESP,[EBP + 0x7a]                ; 0040df00
    POP EBP                             ; 0040df03
    POP EDI                             ; 0040df04
    POP ESI                             ; 0040df05
    POP EBX                             ; 0040df06
    RET                                 ; 0040df07
    LEA ESI,[EBP + -0x52]               ; 0040df08
        ;   Label: LAB_0040df08
    PUSH EBX                            ; 0040df0b
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0040df0c
    MOV dword ptr [EBX + 0x478],0x3dcccccd ; 0040df12
    LEA EDI,[EBP + -0x6a]               ; 0040df1c
    CALL dword ptr [EAX + 0x24]         ; 0040df1f
    MOV ECX,0x6                         ; 0040df22
    LEA ESI,[EBP + -0x52]               ; 0040df27
    MOVSD.REP ES:EDI,ESI                ; 0040df2a
    LEA EAX,[EBP + -0x6a]               ; 0040df2c
    FLD float ptr [EBP + -0x6a]         ; 0040df2f
    FLD float ptr [EBP + -0x66]         ; 0040df32
    FLD float ptr [EBP + -0x62]         ; 0040df35
    LEA EDI,[EBP + 0x3a]                ; 0040df38
    LEA ESI,[EBP + -0x1a]               ; 0040df3b
    FXCH ST2                            ; 0040df3e
    FADD float ptr [EAX + 0xc]          ; 0040df40
    FXCH                                ; 0040df43
    FADD float ptr [EAX + 0x10]         ; 0040df45
    FXCH ST2                            ; 0040df48
    FADD float ptr [EAX + 0x14]         ; 0040df4a
    FXCH                                ; 0040df4d
    FSTP float ptr [EBP + -0x1a]        ; 0040df4f
    FXCH                                ; 0040df52
    FSTP float ptr [EBP + -0x16]        ; 0040df54
    FSTP float ptr [EBP + -0x12]        ; 0040df57
    MOVSD ES:EDI,ESI                    ; 0040df5a
    MOVSD ES:EDI,ESI                    ; 0040df5b
    MOVSD ES:EDI,ESI                    ; 0040df5c
    FLD float ptr [0x005cb0da]          ; 0040df5d | DAT_005cb0da
    FLD float ptr [EBP + 0x3a]          ; 0040df63
    FMUL ST1                            ; 0040df66
    FLD float ptr [EBP + 0x3e]          ; 0040df68
    FMUL ST2                            ; 0040df6b
    ADD ESP,0x4                         ; 0040df6d
    FLD float ptr [EBP + 0x42]          ; 0040df70
    FMULP ST3                           ; 0040df73
    PUSH 0x40c90fdb                     ; 0040df75
    PUSH 0x0                            ; 0040df7a
    LEA EDI,[EBP + 0x5e]                ; 0040df7c
    FXCH                                ; 0040df7f
    FSTP float ptr [EBP + -0x2]         ; 0040df81
    FSTP float ptr [EBP + 0x2]          ; 0040df84
    FSTP float ptr [EBP + 0x6]          ; 0040df87
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0040df8a
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 0040df8f
    LEA ESI,[EBP + -0x2]                ; 0040df92
    MOV dword ptr [EBP + 0x76],EAX      ; 0040df95
    PUSH 0x40c90fdb                     ; 0040df98
    FLD float ptr [EBP + 0x76]          ; 0040df9d
    PUSH 0x0                            ; 0040dfa0
    FSTP float ptr [EBP + 0x6e]         ; 0040dfa2
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0040dfa5
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 0040dfaa
    MOVSD ES:EDI,ESI                    ; 0040dfad
    MOVSD ES:EDI,ESI                    ; 0040dfae
    MOVSD ES:EDI,ESI                    ; 0040dfaf
    MOV dword ptr [EBP + 0x76],EAX      ; 0040dfb0
    PUSH 0x40c90fdb                     ; 0040dfb3
    FLD float ptr [EBP + 0x76]          ; 0040dfb8
    PUSH 0x0                            ; 0040dfbb
    FSTP float ptr [EBP + 0x6a]         ; 0040dfbd
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0040dfc0
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0040dfc5
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0040dfc8
    FLD float ptr [EBP + 0x76]          ; 0040dfcb
    MOV dword ptr [EBP + 0xa],EAX       ; 0040dfce
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0040dfd1
    FSTP float ptr [EBP + 0x72]         ; 0040dfd4
    MOV dword ptr [EBP + 0xe],EAX       ; 0040dfd7
    MOV EAX,dword ptr [EBP + 0x72]      ; 0040dfda
    ADD ESP,0x8                         ; 0040dfdd
    MOV dword ptr [EBP + 0x12],EAX      ; 0040dfe0
    LEA EAX,[EBP + 0xa]                 ; 0040dfe3
    PUSH EAX                            ; 0040dfe6
    LEA ESI,[EBP + -0x3a]               ; 0040dfe7
    LEA EDI,[EBP + -0x2a]               ; 0040dfea
    CALL core_xform.cpp_FUN_00594380    ; 0040dfed
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00594380()
    LEA ESI,[EBP + -0x3a]               ; 0040dff2
    LEA EAX,[EBP + -0x2a]               ; 0040dff5
    ADD ESP,0x4                         ; 0040dff8
    MOVSD ES:EDI,ESI                    ; 0040dffb
    MOVSD ES:EDI,ESI                    ; 0040dffc
    MOVSD ES:EDI,ESI                    ; 0040dffd
    MOVSD ES:EDI,ESI                    ; 0040dffe
    PUSH EAX                            ; 0040dfff
    LEA ESI,[EBP + 0xffffff66]          ; 0040e000
    LEA EDI,[EBP + 0xffffff36]          ; 0040e006
    CALL core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10 ; 0040e00c
        ;   XREF to: 00593a10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10()
    MOV ECX,0xc                         ; 0040e011
    LEA ESI,[EBP + 0xffffff66]          ; 0040e016
    ADD ESP,0x4                         ; 0040e01c
    LEA EAX,[EBP + 0xffffff36]          ; 0040e01f
    XOR EDX,EDX                         ; 0040e025
    PUSH EAX                            ; 0040e027
    MOV dword ptr [EBP + 0x16],EDX      ; 0040e028
    MOVSD.REP ES:EDI,ESI                ; 0040e02b
    MOV dword ptr [EBP + 0x1a],EDX      ; 0040e02d
    MOV ESI,0x3e800000                  ; 0040e030
    LEA EAX,[EBP + 0x16]                ; 0040e035
    MOV dword ptr [EBP + 0x1e],ESI      ; 0040e038
    PUSH EAX                            ; 0040e03b
    LEA ESI,[EBP + 0x46]                ; 0040e03c
    LEA EDI,[EBP + 0x52]                ; 0040e03f
    CALL core_xform.cpp_FUN_00591530    ; 0040e042
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[EBP + 0x46]                ; 0040e047
    LEA EAX,[EBP + -0xe]                ; 0040e04a
    ADD ESP,0x8                         ; 0040e04d
    MOVSD ES:EDI,ESI                    ; 0040e050
    MOVSD ES:EDI,ESI                    ; 0040e051
    MOVSD ES:EDI,ESI                    ; 0040e052
    PUSH 0x0                            ; 0040e053
    FLD float ptr [EBP + 0x52]          ; 0040e055
    FLD float ptr [EBP + 0x56]          ; 0040e058
    FLD float ptr [EBP + 0x5a]          ; 0040e05b
    LEA EDI,[EBP + 0x22]                ; 0040e05e
    LEA ESI,[EBP + 0x2e]                ; 0040e061
    PUSH 0x0                            ; 0040e064
    FXCH ST2                            ; 0040e066
    FADD float ptr [EBP + 0x5e]         ; 0040e068
    FXCH                                ; 0040e06b
    FADD float ptr [EBP + 0x62]         ; 0040e06d
    FXCH ST2                            ; 0040e070
    FADD float ptr [EBP + 0x66]         ; 0040e072
    PUSH EAX                            ; 0040e075
    FXCH                                ; 0040e076
    FSTP float ptr [EBP + 0x2e]         ; 0040e078
    FXCH                                ; 0040e07b
    FSTP float ptr [EBP + 0x32]         ; 0040e07d
    FSTP float ptr [EBP + 0x36]         ; 0040e080
    MOVSD ES:EDI,ESI                    ; 0040e083
    MOVSD ES:EDI,ESI                    ; 0040e084
    MOVSD ES:EDI,ESI                    ; 0040e085
    LEA EAX,[EBP + 0x22]                ; 0040e086
    FLD float ptr [EBP + 0x22]          ; 0040e089
    PUSH EAX                            ; 0040e08c
    FLD float ptr [EBP + 0x26]          ; 0040e08d
    PUSH 0x3f800000                     ; 0040e090
    FLD float ptr [EBP + 0x2a]          ; 0040e095
    PUSH 0x3f800000                     ; 0040e098
    LEA EDI,[EBP + -0xe]                ; 0040e09d
    PUSH 0x3f800000                     ; 0040e0a0
    MOV ESI,0x265370c                   ; 0040e0a5
    PUSH 0x0                            ; 0040e0aa
    MOVSD ES:EDI,ESI                    ; 0040e0ac
    MOVSD ES:EDI,ESI                    ; 0040e0ad
    MOVSD ES:EDI,ESI                    ; 0040e0ae
    PUSH 0x3e4ccccd                     ; 0040e0af
    MOV EDI,dword ptr [0x0061ebfc]      ; 0040e0b4 | g_CSimpleParticleSystemPtr
    PUSH 0x0                            ; 0040e0ba
    FXCH ST2                            ; 0040e0bc
    FADD float ptr [EBX + 0x20]         ; 0040e0be
    PUSH 0x3f800000                     ; 0040e0c1
    FSTP float ptr [EBP + 0x22]         ; 0040e0c6
    FADD float ptr [EBX + 0x24]         ; 0040e0c9
    PUSH 0x3f000000                     ; 0040e0cc
    FSTP float ptr [EBP + 0x26]         ; 0040e0d1
    FADD float ptr [EBX + 0x28]         ; 0040e0d4
    PUSH EDI                            ; 0040e0d7
    FSTP float ptr [EBP + 0x2a]         ; 0040e0d8
    CALL unkafter_superopt.cpp_FUN_005a8300 ; 0040e0db
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8300()
    ADD ESP,0x34                        ; 0040e0e0
    LEA ESP,[EBP + 0x7a]                ; 0040e0e3
    POP EBP                             ; 0040e0e6
    POP EDI                             ; 0040e0e7
    POP ESI                             ; 0040e0e8
    POP EBX                             ; 0040e0e9
    RET                                 ; 0040e0ea

