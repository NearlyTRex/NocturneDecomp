; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_shotgun_cpp_CShotgun_renderAimBeam_FUN_00562100(CShotgun *this_ptr)
;
; Parameters:
; CShotgun *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f1a03
;   undefined4 DAT_005f1a07
;   undefined4 DAT_00612560
;   undefined4 DAT_0061c010
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_fire.cpp_CFireEffect_createLaserCone_FUN_004b60e0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562100
        ;   Label: core_shotgun.cpp_CShotgun_renderAimBeam_FUN_00562100
    PUSH ESI                            ; 00562101
    PUSH EDI                            ; 00562102
    PUSH EBP                            ; 00562103
    MOV EBP,ESP                         ; 00562104
    SUB ESP,0xb0                        ; 00562106
    AND ESP,0xfffffff8                  ; 0056210c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056210f
    MOV EDX,dword ptr [0x00612560]      ; 00562112 | DAT_00612560
    PUSH EDX                            ; 00562118 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 00562119
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0056211e
    TEST EAX,EAX                        ; 00562121
    JZ 0x0056212c                       ; 00562123
        ;   XREF to: 0056212c (CONDITIONAL_JUMP)  ; LAB_0056212c
    MOV ESP,EBP                         ; 00562125
    POP EBP                             ; 00562127
    POP EDI                             ; 00562128
    POP ESI                             ; 00562129
    POP EBX                             ; 0056212a
    RET                                 ; 0056212b
    PUSH EBX                            ; 0056212c
        ;   Label: LAB_0056212c
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056212d
    LEA ESI,[ESP + 0x88]                ; 00562133
    LEA EDI,[ESP + 0x28]                ; 0056213a
    CALL dword ptr [EAX + 0xe0]         ; 0056213e
    ADD ESP,0x4                         ; 00562144
    LEA EAX,[ESP + 0x24]                ; 00562147
    LEA ESI,[ESP + 0x84]                ; 0056214b
    PUSH EAX                            ; 00562152
    MOVSD ES:EDI,ESI                    ; 00562153
    MOVSD ES:EDI,ESI                    ; 00562154
    MOVSD ES:EDI,ESI                    ; 00562155
    PUSH EBX                            ; 00562156
    LEA ESI,[ESP + 0x14]                ; 00562157
    LEA EDI,[ESP + 0x8]                 ; 0056215b
    CALL core_actor.cpp_FUN_00408b40    ; 0056215f
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x14]                ; 00562164
    ADD ESP,0x8                         ; 00562168
    MOVSD ES:EDI,ESI                    ; 0056216b
    MOVSD ES:EDI,ESI                    ; 0056216c
    MOVSD ES:EDI,ESI                    ; 0056216d
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 0056216e
    MOV dword ptr [ESP + 0x38],EAX      ; 00562174
    LEA EAX,[ESP + 0x30]                ; 00562178
    XOR ECX,ECX                         ; 0056217c
    PUSH EAX                            ; 0056217e
    LEA ESI,[ESP + 0xa0]                ; 0056217f
    LEA EDI,[ESP + 0x58]                ; 00562186
    PUSH EBX                            ; 0056218a
    MOV dword ptr [ESP + 0x38],ECX      ; 0056218b
    MOV dword ptr [ESP + 0x3c],ECX      ; 0056218f
    CALL core_actor.cpp_FUN_00408ac0    ; 00562193
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 00562198
    LEA ESI,[ESP + 0x9c]                ; 0056219b
    FLD float ptr [ESP]                 ; 005621a2
    FLD float ptr [ESP + 0x4]           ; 005621a5
    MOVSD ES:EDI,ESI                    ; 005621a9
    MOVSD ES:EDI,ESI                    ; 005621aa
    MOVSD ES:EDI,ESI                    ; 005621ab
    FLD float ptr [ESP + 0x8]           ; 005621ac
    FLD float ptr [ESP + 0x54]          ; 005621b0
    FLD float ptr [ESP + 0x58]          ; 005621b4
    FLD float ptr [ESP + 0x5c]          ; 005621b8
    LEA EDI,[ESP + 0x60]                ; 005621bc
    LEA ESI,[ESP + 0x90]                ; 005621c0
    FXCH ST2                            ; 005621c7
    FCHS                                ; 005621c9
    FXCH                                ; 005621cb
    FCHS                                ; 005621cd
    FXCH ST2                            ; 005621cf
    FCHS                                ; 005621d1
    FXCH ST5                            ; 005621d3
    FADD float ptr [ESP + 0x54]         ; 005621d5
    FXCH ST4                            ; 005621d9
    FADD float ptr [ESP + 0x58]         ; 005621db
    FXCH ST3                            ; 005621df
    FADD float ptr [ESP + 0x5c]         ; 005621e1
    FXCH                                ; 005621e5
    FSTP float ptr [ESP + 0x78]         ; 005621e7
    FXCH ST3                            ; 005621eb
    FSTP float ptr [ESP + 0x90]         ; 005621ed
    FXCH                                ; 005621f4
    FSTP float ptr [ESP + 0x94]         ; 005621f6
    FXCH                                ; 005621fd
    FSTP float ptr [ESP + 0x98]         ; 005621ff
    MOVSD ES:EDI,ESI                    ; 00562206
    MOVSD ES:EDI,ESI                    ; 00562207
    MOVSD ES:EDI,ESI                    ; 00562208
    FSTP float ptr [ESP + 0x7c]         ; 00562209
    LEA EDI,[ESP + 0x3c]                ; 0056220d
    LEA ESI,[ESP + 0x78]                ; 00562211
    FSTP float ptr [ESP + 0x80]         ; 00562215
    MOVSD ES:EDI,ESI                    ; 0056221c
    MOVSD ES:EDI,ESI                    ; 0056221d
    MOVSD ES:EDI,ESI                    ; 0056221e
    LEA EAX,[ESP + 0x48]                ; 0056221f
    LEA ESI,[ESP + 0x3c]                ; 00562223
    CMP EAX,ESI                         ; 00562227
    JZ 0x00562243                       ; 00562229
        ;   XREF to: 00562243 (CONDITIONAL_JUMP)  ; LAB_00562243
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0056222b
    MOV dword ptr [ESP + 0x48],EAX      ; 0056222f
    MOV EAX,dword ptr [ESP + 0x40]      ; 00562233
    MOV dword ptr [ESP + 0x4c],EAX      ; 00562237
    MOV EAX,dword ptr [ESP + 0x44]      ; 0056223b
    MOV dword ptr [ESP + 0x50],EAX      ; 0056223f
    FLD float ptr [ESP + 0x4c]          ; 00562243
        ;   Label: LAB_00562243
    FMUL ST0                            ; 00562247
    FLD float ptr [ESP + 0x48]          ; 00562249
    FMUL ST0                            ; 0056224d
    FADDP                               ; 0056224f
    FLD float ptr [ESP + 0x50]          ; 00562251
    FMUL ST0                            ; 00562255
    FADDP                               ; 00562257
    FSQRT                               ; 00562259
    FLDZ                                ; 0056225b
    FXCH                                ; 0056225d
    FSTP float ptr [ESP + 0xa8]         ; 0056225f
    FCOMP float ptr [ESP + 0xa8]        ; 00562266
    FNSTSW AX                           ; 0056226d
    SAHF                                ; 0056226f
    JNC 0x00562349                      ; 00562270
        ;   XREF to: 00562349 (CONDITIONAL_JUMP)  ; LAB_00562349
    FLD1                                ; 00562276
    FLD float ptr [ESP + 0x48]          ; 00562278
    FXCH                                ; 0056227c
    FDIV float ptr [ESP + 0xa8]         ; 0056227e
    FXCH                                ; 00562285
    FMUL ST1                            ; 00562287
    FLD float ptr [ESP + 0x4c]          ; 00562289
    FMUL ST2                            ; 0056228d
    FLD float ptr [ESP + 0x50]          ; 0056228f
    FMULP ST3                           ; 00562293
    FXCH                                ; 00562295
    FSTP float ptr [ESP + 0x48]         ; 00562297
    FSTP float ptr [ESP + 0x4c]         ; 0056229b
    FSTP float ptr [ESP + 0x50]         ; 0056229f
    FLD float ptr [EBX + 0x578]         ; 005622a3
        ;   Label: LAB_005622a3
    FMUL float ptr [0x005f1a03]         ; 005622a9 | DAT_005f1a03
    FMUL float ptr [0x005f1a07]         ; 005622af | DAT_005f1a07
    SUB ESP,0x4                         ; 005622b5
    FSTP float ptr [ESP]                ; 005622b8
    PUSH 0x0                            ; 005622bb
    PUSH 0xff                           ; 005622bd
    PUSH 0x0                            ; 005622c2
    LEA EAX,[ESP + 0x70]                ; 005622c4
    PUSH 0x3f800000                     ; 005622c8
    PUSH EAX                            ; 005622cd
    LEA EAX,[ESP + 0x18]                ; 005622ce
    PUSH EAX                            ; 005622d2
    MOV ECX,dword ptr [0x0061c010]      ; 005622d3 | DAT_0061c010
    PUSH ECX                            ; 005622d9
    LEA EDI,[ESP + 0x38]                ; 005622da
    CALL core_fire.cpp_CFireEffect_createLaserCone_FUN_004b60e0 ; 005622de
        ;   XREF to: 004b60e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserCone_FUN_004b60e0(CFireEffect * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    ADD ESP,0x20                        ; 005622e3
    MOV dword ptr [EBX + 0x57c],0x1     ; 005622e6
    LEA ESI,[ESP + 0x6c]                ; 005622f0
    FLD float ptr [ESP + 0x60]          ; 005622f4
    FLD float ptr [ESP + 0x64]          ; 005622f8
    FLD float ptr [ESP + 0x68]          ; 005622fc
    FXCH ST2                            ; 00562300
    FSUB float ptr [ESP]                ; 00562302
    FXCH                                ; 00562305
    FSUB float ptr [ESP + 0x4]          ; 00562307
    FXCH ST2                            ; 0056230b
    FSUB float ptr [ESP + 0x8]          ; 0056230d
    FXCH                                ; 00562311
    FSTP float ptr [ESP + 0x6c]         ; 00562313
    FXCH                                ; 00562317
    FSTP float ptr [ESP + 0x70]         ; 00562319
    FSTP float ptr [ESP + 0x74]         ; 0056231d
    MOVSD ES:EDI,ESI                    ; 00562321
    MOVSD ES:EDI,ESI                    ; 00562322
    MOVSD ES:EDI,ESI                    ; 00562323
    FLD float ptr [ESP + 0x1c]          ; 00562324
    FMUL ST0                            ; 00562328
    FLD float ptr [ESP + 0x18]          ; 0056232a
    FMUL ST0                            ; 0056232e
    FADDP                               ; 00562330
    FLD float ptr [ESP + 0x20]          ; 00562332
    FMUL ST0                            ; 00562336
    FADDP                               ; 00562338
    FSQRT                               ; 0056233a
    FSTP float ptr [EBX + 0x580]        ; 0056233c
    MOV ESP,EBP                         ; 00562342
    POP EBP                             ; 00562344
    POP EDI                             ; 00562345
    POP ESI                             ; 00562346
    POP EBX                             ; 00562347
    RET                                 ; 00562348
    XOR EDI,EDI                         ; 00562349
        ;   Label: LAB_00562349
    MOV dword ptr [ESP + 0x4c],EDI      ; 0056234b
    MOV dword ptr [ESP + 0x48],EDI      ; 0056234f
    MOV dword ptr [ESP + 0x50],EDI      ; 00562353
    JMP 0x005622a3                      ; 00562357
        ;   XREF to: 005622a3 (UNCONDITIONAL_JUMP)  ; LAB_005622a3

