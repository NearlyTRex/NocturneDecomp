; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_emitter_cpp_CEmitter_launchFireballAtHero_FUN_004a7e80(CEmitter *this_ptr)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
; Local Variables:
; float            Stack[-0x6c]:4  local_6c
; float            Stack[-0x68]:4  local_68
; float            Stack[-0x64]:4  local_64
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; CVector3f        Stack[-0x54]:12  local_54
; CVector3f        Stack[-0x48]:12  local_48
; double           Stack[-0x3c]:8  dStack_3c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
; float            Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_summonFireEmitters_FUN_005e7410 at 005e7463
;
; Referenced Globals:
;   float FLOAT_0062407e = 5
;   double DOUBLE_00624082 = -1.30899693895833
;   double DOUBLE_0062408a = 32
;   double DOUBLE_00624092 = 1.30899693895833
;   float FLOAT_0062409a = 2
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CFireEffect g_CFireEffectInstance
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_fire.cpp_CFireEffect_createFireball_FUN_004c7db0
;   core_hero.cpp_closestHeroToPoint_FUN_004f2170
;   crt_math.c_atan2_FUN_006013b1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7e80
        ;   Label: core_emitter.cpp_CEmitter_launchFireballAtHero_FUN_004a7e80
    PUSH EBP                            ; 004a7e81
    MOV EBP,ESP                         ; 004a7e82
    SUB ESP,0x64                        ; 004a7e84
    AND ESP,0xfffffff8                  ; 004a7e87
    MOV EBX,dword ptr [EBP + 0xc]       ; 004a7e8a
    ADD EBX,0x20                        ; 004a7e8d
    PUSH EBX                            ; 004a7e90
    CALL core_hero.cpp_closestHeroToPoint_FUN_004f2170 ; 004a7e91
        ;   XREF to: 004f2170 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_closestHeroToPoint_FUN_004f2170(CLocation * location)
    FLD float ptr [EAX + 0x20]          ; 004a7e96
    FSUB float ptr [EBX]                ; 004a7e99
    ADD ESP,0x4                         ; 004a7e9b
    FSTP float ptr [ESP + 0x10]         ; 004a7e9e
    FLD float ptr [EAX + 0x24]          ; 004a7ea2
    FSUB float ptr [EBX + 0x4]          ; 004a7ea5
    FSTP float ptr [ESP + 0x14]         ; 004a7ea8
    FLD float ptr [EAX + 0x28]          ; 004a7eac
    LEA EAX,[ESP + 0x4]                 ; 004a7eaf
    FSUB float ptr [EBX + 0x8]          ; 004a7eb3
    LEA EBX,[ESP + 0x10]                ; 004a7eb6
    FSTP float ptr [ESP + 0x18]         ; 004a7eba
    CMP EAX,EBX                         ; 004a7ebe
    JZ 0x004a7eda                       ; 004a7ec0
        ;   XREF to: 004a7eda (CONDITIONAL_JUMP)  ; LAB_004a7eda
    MOV EAX,dword ptr [ESP + 0x10]      ; 004a7ec2
    MOV dword ptr [ESP + 0x4],EAX       ; 004a7ec6
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a7eca
    MOV dword ptr [ESP + 0x8],EAX       ; 004a7ece
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a7ed2
    MOV dword ptr [ESP + 0xc],EAX       ; 004a7ed6
    FLD float ptr [ESP + 0x8]           ; 004a7eda
        ;   Label: LAB_004a7eda
    PUSH 0x41000000                     ; 004a7ede
    FADD float ptr [0x0062407e]         ; 004a7ee3 | FLOAT_0062407e
    PUSH 0xc1000000                     ; 004a7ee9
    FSTP float ptr [ESP + 0x10]         ; 004a7eee
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004a7ef2
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x68],EAX      ; 004a7ef7
    FLD float ptr [ESP + 0x68]          ; 004a7efb
    ADD ESP,0x8                         ; 004a7eff
    PUSH 0x41000000                     ; 004a7f02
    FADD float ptr [ESP + 0x8]          ; 004a7f07
    PUSH 0xc1000000                     ; 004a7f0b
    FSTP float ptr [ESP + 0xc]          ; 004a7f10
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004a7f14
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    FLD double ptr [0x00624082]         ; 004a7f19 | DOUBLE_00624082
    FLD ST0                             ; 004a7f1f
    MOV dword ptr [ESP + 0x68],EAX      ; 004a7f21
    FSIN                                ; 004a7f25
    FLD double ptr [0x00624092]         ; 004a7f27 | DOUBLE_00624092
    FPTAN                               ; 004a7f2d
    FSTP ST0                            ; 004a7f2f
    FLD float ptr [ESP + 0x68]          ; 004a7f31
    ADD ESP,0x8                         ; 004a7f35
    FADD float ptr [ESP + 0xc]          ; 004a7f38
    FST float ptr [ESP + 0xc]           ; 004a7f3c
    FLD float ptr [ESP + 0x4]           ; 004a7f40
    CALL crt_math.c_atan2_FUN_006013b1  ; 004a7f44
        ;   XREF to: 006013b1 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
    FLD float ptr [ESP + 0xc]           ; 004a7f49
    FMUL ST0                            ; 004a7f4d
    FLD float ptr [ESP + 0x4]           ; 004a7f4f
    FMUL ST0                            ; 004a7f53
    FADDP                               ; 004a7f55
    FSQRT                               ; 004a7f57
    FXCH ST4                            ; 004a7f59
    FCOS                                ; 004a7f5b
    FLD ST1                             ; 004a7f5d
    FSIN                                ; 004a7f5f
    FXCH ST2                            ; 004a7f61
    FCOS                                ; 004a7f63
    FXCH ST5                            ; 004a7f65
    FSTP double ptr [ESP + 0x34]        ; 004a7f67
    FXCH ST2                            ; 004a7f6b
    FMUL double ptr [ESP + 0x34]        ; 004a7f6d
    FSUB float ptr [ESP + 0x8]          ; 004a7f71
    FLD ST2                             ; 004a7f75
    FMUL float ptr [0x0062409a]         ; 004a7f77 | FLOAT_0062409a
    FLD double ptr [ESP + 0x34]         ; 004a7f7d
    FMUL double ptr [0x0062408a]        ; 004a7f81 | DOUBLE_0062408a
    FXCH                                ; 004a7f87
    FMUL ST4                            ; 004a7f89
    FXCH                                ; 004a7f8b
    FMUL double ptr [ESP + 0x34]        ; 004a7f8d
    FXCH                                ; 004a7f91
    FMULP ST2                           ; 004a7f93
    FXCH ST2                            ; 004a7f95
    FMUL ST3                            ; 004a7f97
    FXCH ST5                            ; 004a7f99
    FMULP ST3                           ; 004a7f9b
    FXCH                                ; 004a7f9d
    FSTP float ptr [ESP + 0x58]         ; 004a7f9f
    FXCH ST2                            ; 004a7fa3
    FCHS                                ; 004a7fa5
    FSTP float ptr [ESP + 0x2c]         ; 004a7fa7
    FXCH                                ; 004a7fab
    FST float ptr [ESP]                 ; 004a7fad
    FLDZ                                ; 004a7fb0
    FXCH ST3                            ; 004a7fb2
    FSTP float ptr [ESP + 0x28]         ; 004a7fb4
    FXCH                                ; 004a7fb8
    FSTP float ptr [ESP + 0x30]         ; 004a7fba
    FXCH                                ; 004a7fbe
    FCOMPP                              ; 004a7fc0
    FNSTSW AX                           ; 004a7fc2
    SAHF                                ; 004a7fc4
    JNC 0x004a803f                      ; 004a7fc5
        ;   XREF to: 004a803f (CONDITIONAL_JUMP)  ; LAB_004a803f
    FLD float ptr [ESP + 0x58]          ; 004a7fc7
    FDIV float ptr [ESP]                ; 004a7fcb
    FSQRT                               ; 004a7fce
    FLD float ptr [ESP + 0x28]          ; 004a7fd0
    FXCH                                ; 004a7fd4
    FSTP float ptr [ESP + 0x5c]         ; 004a7fd6
    FMUL float ptr [ESP + 0x5c]         ; 004a7fda
    FLD float ptr [ESP + 0x2c]          ; 004a7fde
    FMUL float ptr [ESP + 0x5c]         ; 004a7fe2
    FLD float ptr [ESP + 0x30]          ; 004a7fe6
    FMUL float ptr [ESP + 0x5c]         ; 004a7fea
    LEA EBX,[ESP + 0x28]                ; 004a7fee
    LEA EAX,[ESP + 0x1c]                ; 004a7ff2
    FXCH ST2                            ; 004a7ff6
    FSTP float ptr [ESP + 0x1c]         ; 004a7ff8
    FSTP float ptr [ESP + 0x20]         ; 004a7ffc
    FSTP float ptr [ESP + 0x24]         ; 004a8000
    CMP EBX,EAX                         ; 004a8004
    JZ 0x004a8020                       ; 004a8006
        ;   XREF to: 004a8020 (CONDITIONAL_JUMP)  ; LAB_004a8020
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004a8008
    MOV dword ptr [ESP + 0x28],EAX      ; 004a800c
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a8010
    MOV dword ptr [ESP + 0x2c],EAX      ; 004a8014
    MOV EAX,dword ptr [ESP + 0x24]      ; 004a8018
    MOV dword ptr [ESP + 0x30],EAX      ; 004a801c
    PUSH 0x0                            ; 004a8020
        ;   Label: LAB_004a8020
    PUSH 0x0                            ; 004a8022
    LEA EAX,[ESP + 0x30]                ; 004a8024
    PUSH EAX                            ; 004a8028
    MOV EAX,dword ptr [EBP + 0xc]       ; 004a8029
    ADD EAX,0x20                        ; 004a802c
    PUSH EAX                            ; 004a802f
    MOV EDX,dword ptr [0x0067a3d0]      ; 004a8030 | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH EDX                            ; 004a8036 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createFireball_FUN_004c7db0 ; 004a8037
        ;   XREF to: 004c7db0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createFireball_FUN_004c7db0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int lighting_active, ...)
    ADD ESP,0x14                        ; 004a803c
    MOV ESP,EBP                         ; 004a803f
        ;   Label: LAB_004a803f
    POP EBP                             ; 004a8041
    POP EBX                             ; 004a8042
    RET                                 ; 004a8043

