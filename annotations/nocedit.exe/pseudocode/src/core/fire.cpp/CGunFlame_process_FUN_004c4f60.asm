; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CGunFlame_process_FUN_004c4f60(CGunFlame * this_ptr)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 at 004c70b8
;
; Referenced Globals:
;   float FLOAT_00629f43 = 0.9700000
;   double DOUBLE_00629f4b = 0.200000000000000
;   double DOUBLE_00629f53 = 0.5
;   float FLOAT_00629f5b = -20
;   undefined4 DAT_0065dcc8
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CGame* g_CGamePtr = 02d81a9c
;   CFireEffect g_CFireEffectInstance
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
;   core_fire.cpp_CGunFlame_FUN_004c4c00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4f60
        ;   Label: core_fire.cpp_CGunFlame_process_FUN_004c4f60
    PUSH ESI                            ; 004c4f61
    PUSH EBP                            ; 004c4f62
    MOV EBP,ESP                         ; 004c4f63
    SUB ESP,0x24                        ; 004c4f65
    AND ESP,0xfffffff8                  ; 004c4f68
    MOV EBX,dword ptr [EBP + 0x10]      ; 004c4f6b
    MOV EAX,[0x0067b654]                ; 004c4f6e | CGame * g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x264]     ; 004c4f73 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP],EAX             ; 004c4f79
    FLD float ptr [EBX]                 ; 004c4f7c
    FSUB float ptr [ESP]                ; 004c4f7e
    MOV dword ptr [ESP + 0x20],EAX      ; 004c4f81
    FST float ptr [EBX]                 ; 004c4f85
    FLDZ                                ; 004c4f87
    FCOMPP                              ; 004c4f89
    FNSTSW AX                           ; 004c4f8b
    SAHF                                ; 004c4f8d
    JC 0x004c4f9c                       ; 004c4f8e | LAB_004c4f9c
        ;   XREF to: 004c4f9c (CONDITIONAL_JUMP)
    MOV dword ptr [EBX],0x0             ; 004c4f90
    MOV ESP,EBP                         ; 004c4f96
        ;   Label: LAB_004c4f96
    POP EBP                             ; 004c4f98
    POP ESI                             ; 004c4f99
    POP EBX                             ; 004c4f9a
    RET                                 ; 004c4f9b
    LEA EAX,[EBX + 0x10]                ; 004c4f9c
        ;   Label: LAB_004c4f9c
    FLD float ptr [ESP]                 ; 004c4f9f
    FLD float ptr [EAX]                 ; 004c4fa2
    FMUL ST1                            ; 004c4fa4
    FSTP float ptr [ESP + 0x4]          ; 004c4fa6
    FLD float ptr [EAX + 0x4]           ; 004c4faa
    FMUL ST1                            ; 004c4fad
    FSTP float ptr [ESP + 0x8]          ; 004c4faf
    FLD float ptr [EAX + 0x8]           ; 004c4fb3
    FMUL ST1                            ; 004c4fb6
    FLD ST1                             ; 004c4fb8
    LEA ESI,[EBX + 0x4]                 ; 004c4fba
    FXCH                                ; 004c4fbd
    FSTP float ptr [ESP + 0xc]          ; 004c4fbf
    FLD float ptr [ESI]                 ; 004c4fc3
    FADD float ptr [ESP + 0x4]          ; 004c4fc5
    FLD float ptr [ESI + 0x4]           ; 004c4fc9
    FXCH                                ; 004c4fcc
    FSTP float ptr [ESI]                ; 004c4fce
    FADD float ptr [ESP + 0x8]          ; 004c4fd0
    FLD float ptr [ESI + 0x8]           ; 004c4fd4
    FXCH                                ; 004c4fd7
    FSTP float ptr [ESI + 0x4]          ; 004c4fd9
    FADD float ptr [ESP + 0xc]          ; 004c4fdc
    FXCH                                ; 004c4fe0
    FMUL double ptr [0x00629f4b]        ; 004c4fe2 | double DOUBLE_00629f4b
    FXCH                                ; 004c4fe8
    FSTP float ptr [ESI + 0x8]          ; 004c4fea
    FLD float ptr [0x00629f43]          ; 004c4fed | float FLOAT_00629f43
    FLD float ptr [EAX]                 ; 004c4ff3
    FMUL ST1                            ; 004c4ff5
    FLD float ptr [EAX + 0x4]           ; 004c4ff7
    FMUL ST2                            ; 004c4ffa
    FLD float ptr [EAX + 0x8]           ; 004c4ffc
    FMULP ST3                           ; 004c4fff
    FXCH                                ; 004c5001
    FSTP float ptr [EAX]                ; 004c5003
    FSTP float ptr [EAX + 0x4]          ; 004c5005
    FSTP float ptr [EAX + 0x8]          ; 004c5008
    FLD float ptr [EBX + 0x14]          ; 004c500b
    FXCH                                ; 004c500e
    FADD ST0,ST1                        ; 004c5010
    FXCH ST2                            ; 004c5012
    FMUL double ptr [0x00629f53]        ; 004c5014 | double DOUBLE_00629f53
    FXCH ST2                            ; 004c501a
    FSTP ST1                            ; 004c501c
    SUB ESP,0x4                         ; 004c501e
    FSTP float ptr [EBX + 0x14]         ; 004c5021
    FSTP float ptr [ESP]                ; 004c5024
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004c5027 | int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004c502c
    TEST EAX,EAX                        ; 004c502f
    JZ 0x004c504f                       ; 004c5031 | LAB_004c504f
        ;   XREF to: 004c504f (CONDITIONAL_JUMP)
    PUSH 0xffff                         ; 004c5033
    PUSH 0x0                            ; 004c5038
    PUSH 0x3f000000                     ; 004c503a
    PUSH ESI                            ; 004c503f
    MOV EDX,dword ptr [0x0067a3d0]      ; 004c5040 | CFireEffect g_CFireEffectInstance | CFireEffect * g_CFireEffectPtr
    PUSH EDX                            ; 004c5046 | CFireEffect g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20 ; 004c5047 | void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
        ;   XREF to: 004c7b20 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004c504c
    CMP dword ptr [EBX + 0x20],0x0      ; 004c504f
        ;   Label: LAB_004c504f
    JZ 0x004c506e                       ; 004c5053 | LAB_004c506e
        ;   XREF to: 004c506e (CONDITIONAL_JUMP)
    PUSH dword ptr [ESP + 0x20]         ; 004c5055
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004c5059 | int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004c505e
    TEST EAX,EAX                        ; 004c5061
    JZ 0x004c506e                       ; 004c5063 | LAB_004c506e
        ;   XREF to: 004c506e (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004c5065
    CALL core_fire.cpp_CGunFlame_FUN_004c4c00 ; 004c5066 | void core_fire.cpp_CGunFlame_FUN_004c4c00(CGunFlame * this_ptr)
        ;   XREF to: 004c4c00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004c506b
    FLD float ptr [ESP + 0x20]          ; 004c506e
        ;   Label: LAB_004c506e
    FMUL float ptr [0x0065dcc8]         ; 004c5072 | DAT_0065dcc8
    FADD float ptr [EBX + 0x1c]         ; 004c5078
    FSTP float ptr [EBX + 0x1c]         ; 004c507b
    CMP dword ptr [EBX + 0x1c],0x41a00000 ; 004c507e
    JL 0x004c4f96                       ; 004c5085 | LAB_004c4f96
        ;   XREF to: 004c4f96 (CONDITIONAL_JUMP)
    FLD float ptr [0x00629f5b]          ; 004c508b | float FLOAT_00629f5b
    FLD float ptr [EBX + 0x1c]          ; 004c5091
        ;   Label: LAB_004c5091
    FADD ST0,ST1                        ; 004c5094
    FSTP float ptr [EBX + 0x1c]         ; 004c5096
    CMP dword ptr [EBX + 0x1c],0x41a00000 ; 004c5099
    JGE 0x004c5091                      ; 004c50a0 | LAB_004c5091
        ;   XREF to: 004c5091 (CONDITIONAL_JUMP)
    FSTP ST0                            ; 004c50a2
    MOV ESP,EBP                         ; 004c50a4
    POP EBP                             ; 004c50a6
    POP ESI                             ; 004c50a7
    POP EBX                             ; 004c50a8
    RET                                 ; 004c50a9

