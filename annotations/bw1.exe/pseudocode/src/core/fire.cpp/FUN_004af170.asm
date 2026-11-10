; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004af170(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005df27c
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_01c43530
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_particle.cpp_FUN_00532250
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af170
        ;   Label: core_fire.cpp_FUN_004af170
    PUSH ESI                            ; 004af171
    PUSH EBP                            ; 004af172
    MOV EBP,ESP                         ; 004af173
    SUB ESP,0x1c                        ; 004af175
    AND ESP,0xfffffff8                  ; 004af178
    MOV EBX,dword ptr [EBP + 0x10]      ; 004af17b
    PUSH EBX                            ; 004af17e
    CALL core_particle.cpp_FUN_00532250 ; 004af17f
        ;   XREF to: 00532250 (UNCONDITIONAL_CALL)  ; undefined core_particle.cpp_FUN_00532250()
    LEA ECX,[EBX + 0xc]                 ; 004af184
    FLD float ptr [ECX + 0x4]           ; 004af187
    FMUL ST0                            ; 004af18a
    FLD float ptr [ECX]                 ; 004af18c
    FMUL ST0                            ; 004af18e
    FADDP                               ; 004af190
    FLD float ptr [ECX + 0x8]           ; 004af192
    FMUL ST0                            ; 004af195
    FADDP                               ; 004af197
    ADD ESP,0x4                         ; 004af199
    FSQRT                               ; 004af19c
    MOV EAX,[0x01c43530]                ; 004af19e | DAT_01c43530
    MOV EDX,EAX                         ; 004af1a3
    SAR EDX,0x1f                        ; 004af1a5
    SHL EDX,0x2                         ; 004af1a8
    SBB EAX,EDX                         ; 004af1ab
    SAR EAX,0x2                         ; 004af1ad
    FST float ptr [ESP + 0x4]           ; 004af1b0
    FST double ptr [ESP + 0x8]          ; 004af1b4
    FMUL double ptr [0x005df27c]        ; 004af1b8 | DAT_005df27c
    CALL crt_math.c_round_FUN_005c03a0  ; 004af1be
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x10]        ; 004af1c3
    MOV EDX,dword ptr [ESP + 0x10]      ; 004af1c7
    IMUL EDX                            ; 004af1cb
    SHRD EAX,EDX,0x10                   ; 004af1cd
    MOV EDX,dword ptr [EBX + 0x44]      ; 004af1d1
    ADD EDX,EAX                         ; 004af1d4
    MOV EAX,[0x01c43530]                ; 004af1d6 | DAT_01c43530
    MOV dword ptr [EBX + 0x44],EDX      ; 004af1db
    MOV EDX,EAX                         ; 004af1de
    SAR EDX,0x1f                        ; 004af1e0
    SUB EAX,EDX                         ; 004af1e3
    SAR EAX,0x1                         ; 004af1e5
    MOV EDX,dword ptr [ESP + 0x10]      ; 004af1e7
    IMUL EDX                            ; 004af1eb
    SHRD EAX,EDX,0x10                   ; 004af1ed
    MOV ESI,dword ptr [EBX + 0x48]      ; 004af1f1
    ADD ESI,EAX                         ; 004af1f4
    FLDZ                                ; 004af1f6
    MOV dword ptr [EBX + 0x48],ESI      ; 004af1f8
    FCOMP double ptr [ESP + 0x8]        ; 004af1fb
    FNSTSW AX                           ; 004af1ff
    SAHF                                ; 004af201
    JNC 0x004af238                      ; 004af202
        ;   XREF to: 004af238 (CONDITIONAL_JUMP)  ; LAB_004af238
    FLD float ptr [ESP + 0x4]           ; 004af204
    FLD ST0                             ; 004af208
    MOV EAX,[0x0061d95c]                ; 004af20a | g_CGamePtr
    FMUL float ptr [EBX + 0x40]         ; 004af20f
    FMUL float ptr [EAX + 0x294]        ; 004af212 | g_CGameInstance.delta_time_float
    FSUBP                               ; 004af218
    FST float ptr [ESP]                 ; 004af21a
    FLDZ                                ; 004af21d
    FCOMPP                              ; 004af21f
    FNSTSW AX                           ; 004af221
    SAHF                                ; 004af223
    JC 0x004af23e                       ; 004af224
        ;   XREF to: 004af23e (CONDITIONAL_JUMP)  ; LAB_004af23e
    MOV dword ptr [ECX + 0x8],0x0       ; 004af226
    MOV EAX,dword ptr [ECX + 0x8]       ; 004af22d
    MOV dword ptr [ECX + 0x4],EAX       ; 004af230
    MOV EAX,dword ptr [ECX + 0x4]       ; 004af233
    MOV dword ptr [ECX],EAX             ; 004af236
    MOV ESP,EBP                         ; 004af238
        ;   Label: LAB_004af238
    POP EBP                             ; 004af23a
    POP ESI                             ; 004af23b
    POP EBX                             ; 004af23c
    RET                                 ; 004af23d
    FLD float ptr [ESP]                 ; 004af23e
        ;   Label: LAB_004af23e
    FDIV float ptr [ESP + 0x4]          ; 004af241
    FLD float ptr [ECX]                 ; 004af245
    FXCH                                ; 004af247
    FSTP float ptr [ESP + 0x18]         ; 004af249
    FMUL float ptr [ESP + 0x18]         ; 004af24d
    FLD float ptr [ECX + 0x4]           ; 004af251
    FMUL float ptr [ESP + 0x18]         ; 004af254
    FLD float ptr [ECX + 0x8]           ; 004af258
    FMUL float ptr [ESP + 0x18]         ; 004af25b
    FXCH ST2                            ; 004af25f
    FSTP float ptr [ECX]                ; 004af261
    FSTP float ptr [ECX + 0x4]          ; 004af263
    FSTP float ptr [ECX + 0x8]          ; 004af266
    MOV ESP,EBP                         ; 004af269
    POP EBP                             ; 004af26b
    POP ESI                             ; 004af26c
    POP EBX                             ; 004af26d
    RET                                 ; 004af26e

