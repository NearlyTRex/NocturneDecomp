; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flame_cpp_CFlame_updateGlobe_FUN_0048e230(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_flame.cpp_CFlame_process_FUN_0048d0c0 at 0048d227
;
; Referenced Globals:
;   double DOUBLE_00581617 = 0.5
;   double DOUBLE_0058161f = 65535
;   double DOUBLE_00581627 = 2
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e230
        ;   Label: core_flame.cpp_CFlame_updateGlobe_FUN_0048e230
    PUSH ESI                            ; 0048e231
    PUSH EBP                            ; 0048e232
    MOV EBP,ESP                         ; 0048e233
    SUB ESP,0x18                        ; 0048e235
    AND ESP,0xfffffff8                  ; 0048e238
    MOV EBX,dword ptr [EBP + 0x10]      ; 0048e23b
    LEA EDX,[EBX + 0x20]                ; 0048e23e
    MOV EAX,dword ptr [EDX]             ; 0048e241
    MOV dword ptr [ESP],EAX             ; 0048e243
    LEA EAX,[EDX + 0x4]                 ; 0048e246
    MOV EAX,dword ptr [EAX]             ; 0048e249
    MOV dword ptr [ESP + 0x4],EAX       ; 0048e24b
    LEA EAX,[EDX + 0x8]                 ; 0048e24f
    MOV EAX,dword ptr [EAX]             ; 0048e252
    MOV dword ptr [ESP + 0x8],EAX       ; 0048e254
    FLD float ptr [EBX + 0x154]         ; 0048e258
    FMUL double ptr [0x00581617]        ; 0048e25e | DOUBLE_00581617
    MOV EAX,ESP                         ; 0048e264
    LEA ESI,[EBX + 0x160]               ; 0048e266
    PUSH EAX                            ; 0048e26c
    FLD float ptr [ESP + 0x8]           ; 0048e26d
    FXCH                                ; 0048e271
    FADD ST0,ST1                        ; 0048e273
    PUSH ESI                            ; 0048e275
    FSTP ST1                            ; 0048e276
    FSTP float ptr [ESP + 0xc]          ; 0048e278
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90 ; 0048e27c
        ;   XREF to: 0044cd90 (UNCONDITIONAL_CALL)  ; undefined core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90()
    ADD ESP,0x8                         ; 0048e281
    PUSH dword ptr [EBX + 0x27c]        ; 0048e284
    FLD float ptr [EBX + 0x27c]         ; 0048e28a
    SUB ESP,0x4                         ; 0048e290
    FCHS                                ; 0048e293
    FSTP float ptr [ESP]                ; 0048e295
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0048e298
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x1c],EAX      ; 0048e29d
    FLD float ptr [ESP + 0x1c]          ; 0048e2a1
    FADD float ptr [EBX + 0x278]        ; 0048e2a5
    FMUL double ptr [0x0058161f]        ; 0048e2ab | DOUBLE_0058161f
    ADD ESP,0x8                         ; 0048e2b1
    CALL crt_math.c_round_FUN_00563a30  ; 0048e2b4
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x14]        ; 0048e2b9
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048e2bd
    MOV EDX,EAX                         ; 0048e2c1
    SAR EDX,0x1f                        ; 0048e2c3
    MOV dword ptr [ESI + 0x3c],EAX      ; 0048e2c6
    SHL EDX,0x8                         ; 0048e2c9
    SBB EAX,EDX                         ; 0048e2cc
    SAR EAX,0x8                         ; 0048e2ce
    MOV EDX,EAX                         ; 0048e2d1
    SAR EDX,0x1f                        ; 0048e2d3
    SHL EDX,0x2                         ; 0048e2d6
    SBB EAX,EDX                         ; 0048e2d9
    SAR EAX,0x2                         ; 0048e2db
    MOV byte ptr [ESI + 0x1c],AL        ; 0048e2de
    FLD float ptr [EBX + 0x154]         ; 0048e2e1
    FMUL float ptr [EBX + 0x1a4]        ; 0048e2e7
    FMUL double ptr [0x00581627]        ; 0048e2ed | DOUBLE_00581627
    SUB ESP,0x4                         ; 0048e2f3
    FSTP float ptr [ESP]                ; 0048e2f6
    PUSH ESI                            ; 0048e2f9
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0 ; 0048e2fa
        ;   XREF to: 0044cde0 (UNCONDITIONAL_CALL)  ; undefined core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0()
    ADD ESP,0x8                         ; 0048e2ff
    MOV dword ptr [ESI + 0x20],0x2      ; 0048e302
    MOV ESP,EBP                         ; 0048e309
    POP EBP                             ; 0048e30b
    POP ESI                             ; 0048e30c
    POP EBX                             ; 0048e30d
    RET                                 ; 0048e30e

