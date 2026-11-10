; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_emitter_cpp_FUN_00487c80(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005bda04
;   undefined4 DAT_005bda0c
;   undefined4 DAT_005bda14
;   undefined4 DAT_005bda1c
;   undefined4 DAT_005bda24
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_fire.cpp_CFireEffect_createFireball_FUN_004a2830
;   core_hero.cpp_closestHeroToPoint_FUN_004d22c0
;   crt_math.c_atan2_FUN_005a5cc1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487c80
        ;   Label: core_emitter.cpp_FUN_00487c80
    PUSH ESI                            ; 00487c81
    PUSH EDI                            ; 00487c82
    PUSH EBP                            ; 00487c83
    MOV EBP,ESP                         ; 00487c84
    SUB ESP,0x7c                        ; 00487c86
    AND ESP,0xfffffff8                  ; 00487c89
    MOV EBX,dword ptr [EBP + 0x14]      ; 00487c8c
    ADD EBX,0x20                        ; 00487c8f
    PUSH EBX                            ; 00487c92
    LEA EDI,[ESP + 0x2c]                ; 00487c93
    LEA ESI,[ESP + 0x14]                ; 00487c97
    CALL core_hero.cpp_closestHeroToPoint_FUN_004d22c0 ; 00487c9b
        ;   XREF to: 004d22c0 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_closestHeroToPoint_FUN_004d22c0(CLocation * location)
    FLD float ptr [EAX + 0x24]          ; 00487ca0
    FLD float ptr [EAX + 0x28]          ; 00487ca3
    FLD float ptr [EAX + 0x20]          ; 00487ca6
    ADD ESP,0x4                         ; 00487ca9
    LEA EAX,[ESP + 0x28]                ; 00487cac
    FSUB float ptr [EBX]                ; 00487cb0
    FXCH ST2                            ; 00487cb2
    FSUB float ptr [EBX + 0x4]          ; 00487cb4
    FXCH                                ; 00487cb7
    FSUB float ptr [EBX + 0x8]          ; 00487cb9
    FXCH ST2                            ; 00487cbc
    FSTP float ptr [ESP + 0x10]         ; 00487cbe
    FSTP float ptr [ESP + 0x14]         ; 00487cc2
    FSTP float ptr [ESP + 0x18]         ; 00487cc6
    LEA EBX,[ESP + 0x34]                ; 00487cca
    MOVSD ES:EDI,ESI                    ; 00487cce
    MOVSD ES:EDI,ESI                    ; 00487ccf
    MOVSD ES:EDI,ESI                    ; 00487cd0
    CMP EBX,EAX                         ; 00487cd1
    JZ 0x00487ced                       ; 00487cd3
        ;   XREF to: 00487ced (CONDITIONAL_JUMP)  ; LAB_00487ced
    MOV EAX,dword ptr [ESP + 0x28]      ; 00487cd5
    MOV dword ptr [ESP + 0x34],EAX      ; 00487cd9
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00487cdd
    MOV dword ptr [ESP + 0x38],EAX      ; 00487ce1
    MOV EAX,dword ptr [ESP + 0x30]      ; 00487ce5
    MOV dword ptr [ESP + 0x3c],EAX      ; 00487ce9
    FLD float ptr [ESP + 0x38]          ; 00487ced
        ;   Label: LAB_00487ced
    PUSH 0x41000000                     ; 00487cf1
    FADD float ptr [0x005bda04]         ; 00487cf6 | DAT_005bda04
    PUSH 0xc1000000                     ; 00487cfc
    FSTP float ptr [ESP + 0x40]         ; 00487d01
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00487d05
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x80],EAX      ; 00487d0a
    FLD float ptr [ESP + 0x80]          ; 00487d11
    ADD ESP,0x8                         ; 00487d18
    PUSH 0x41000000                     ; 00487d1b
    FADD float ptr [ESP + 0x38]         ; 00487d20
    PUSH 0xc1000000                     ; 00487d24
    FSTP float ptr [ESP + 0x3c]         ; 00487d29
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00487d2d
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    FLD double ptr [0x005bda0c]         ; 00487d32 | DAT_005bda0c
    FLD ST0                             ; 00487d38
    MOV dword ptr [ESP + 0x80],EAX      ; 00487d3a
    FSIN                                ; 00487d41
    FLD double ptr [0x005bda1c]         ; 00487d43 | DAT_005bda1c
    FPTAN                               ; 00487d49
    FSTP ST0                            ; 00487d4b
    FLD float ptr [ESP + 0x80]          ; 00487d4d
    ADD ESP,0x8                         ; 00487d54
    FADD float ptr [ESP + 0x3c]         ; 00487d57
    FST float ptr [ESP + 0x3c]          ; 00487d5b
    FLD float ptr [ESP + 0x34]          ; 00487d5f
    CALL crt_math.c_atan2_FUN_005a5cc1  ; 00487d63
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005a5cc1()
    FLD float ptr [ESP + 0x3c]          ; 00487d68
    FMUL ST0                            ; 00487d6c
    FLD float ptr [ESP + 0x34]          ; 00487d6e
    FMUL ST0                            ; 00487d72
    FADDP                               ; 00487d74
    FSQRT                               ; 00487d76
    FXCH ST4                            ; 00487d78
    FCOS                                ; 00487d7a
    FLD ST1                             ; 00487d7c
    FSIN                                ; 00487d7e
    FXCH ST2                            ; 00487d80
    FCOS                                ; 00487d82
    FXCH ST5                            ; 00487d84
    FSTP double ptr [ESP + 0x4c]        ; 00487d86
    FXCH ST2                            ; 00487d8a
    FMUL double ptr [ESP + 0x4c]        ; 00487d8c
    FSUB float ptr [ESP + 0x38]         ; 00487d90
    FLD ST2                             ; 00487d94
    FMUL float ptr [0x005bda24]         ; 00487d96 | DAT_005bda24
    FLD double ptr [ESP + 0x4c]         ; 00487d9c
    FMUL double ptr [0x005bda14]        ; 00487da0 | DAT_005bda14
    FXCH                                ; 00487da6
    FMUL ST4                            ; 00487da8
    FXCH                                ; 00487daa
    FMUL double ptr [ESP + 0x4c]        ; 00487dac
    FXCH                                ; 00487db0
    FMULP ST2                           ; 00487db2
    FXCH ST2                            ; 00487db4
    FMUL ST3                            ; 00487db6
    FXCH ST5                            ; 00487db8
    FMULP ST3                           ; 00487dba
    FXCH                                ; 00487dbc
    FSTP float ptr [ESP + 0x70]         ; 00487dbe
    FXCH ST2                            ; 00487dc2
    FCHS                                ; 00487dc4
    FSTP float ptr [ESP + 0x44]         ; 00487dc6
    FXCH                                ; 00487dca
    FST float ptr [ESP]                 ; 00487dcc
    FLDZ                                ; 00487dcf
    FXCH ST3                            ; 00487dd1
    FSTP float ptr [ESP + 0x40]         ; 00487dd3
    FXCH                                ; 00487dd7
    FSTP float ptr [ESP + 0x48]         ; 00487dd9
    FXCH                                ; 00487ddd
    FCOMPP                              ; 00487ddf
    FNSTSW AX                           ; 00487de1
    SAHF                                ; 00487de3
    JNC 0x00487e6d                      ; 00487de4
        ;   XREF to: 00487e6d (CONDITIONAL_JUMP)  ; LAB_00487e6d
    FLD float ptr [ESP + 0x70]          ; 00487dea
    FDIV float ptr [ESP]                ; 00487dee
    FSQRT                               ; 00487df1
    FLD float ptr [ESP + 0x40]          ; 00487df3
    FXCH                                ; 00487df7
    FSTP float ptr [ESP + 0x74]         ; 00487df9
    FMUL float ptr [ESP + 0x74]         ; 00487dfd
    FLD float ptr [ESP + 0x44]          ; 00487e01
    FMUL float ptr [ESP + 0x74]         ; 00487e05
    FLD float ptr [ESP + 0x48]          ; 00487e09
    FMUL float ptr [ESP + 0x74]         ; 00487e0d
    LEA EDI,[ESP + 0x4]                 ; 00487e11
    LEA ESI,[ESP + 0x1c]                ; 00487e15
    LEA EBX,[ESP + 0x4]                 ; 00487e19
    LEA EAX,[ESP + 0x40]                ; 00487e1d
    FXCH ST2                            ; 00487e21
    FSTP float ptr [ESP + 0x1c]         ; 00487e23
    FSTP float ptr [ESP + 0x20]         ; 00487e27
    FSTP float ptr [ESP + 0x24]         ; 00487e2b
    MOVSD ES:EDI,ESI                    ; 00487e2f
    MOVSD ES:EDI,ESI                    ; 00487e30
    MOVSD ES:EDI,ESI                    ; 00487e31
    CMP EAX,EBX                         ; 00487e32
    JZ 0x00487e4e                       ; 00487e34
        ;   XREF to: 00487e4e (CONDITIONAL_JUMP)  ; LAB_00487e4e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00487e36
    MOV dword ptr [ESP + 0x40],EAX      ; 00487e3a
    MOV EAX,dword ptr [ESP + 0x8]       ; 00487e3e
    MOV dword ptr [ESP + 0x44],EAX      ; 00487e42
    MOV EAX,dword ptr [ESP + 0xc]       ; 00487e46
    MOV dword ptr [ESP + 0x48],EAX      ; 00487e4a
    PUSH 0x0                            ; 00487e4e
        ;   Label: LAB_00487e4e
    PUSH 0x0                            ; 00487e50
    LEA EAX,[ESP + 0x48]                ; 00487e52
    PUSH EAX                            ; 00487e56
    MOV EAX,dword ptr [EBP + 0x14]      ; 00487e57
    ADD EAX,0x20                        ; 00487e5a
    PUSH EAX                            ; 00487e5d
    MOV EDX,dword ptr [0x005fc5a0]      ; 00487e5e | DAT_005fc5a0
    PUSH EDX                            ; 00487e64
    CALL core_fire.cpp_CFireEffect_createFireball_FUN_004a2830 ; 00487e65
        ;   XREF to: 004a2830 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createFireball_FUN_004a2830(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int lighting_active, ...)
    ADD ESP,0x14                        ; 00487e6a
    MOV ESP,EBP                         ; 00487e6d
        ;   Label: LAB_00487e6d
    POP EBP                             ; 00487e6f
    POP EDI                             ; 00487e70
    POP ESI                             ; 00487e71
    POP EBX                             ; 00487e72
    RET                                 ; 00487e73

