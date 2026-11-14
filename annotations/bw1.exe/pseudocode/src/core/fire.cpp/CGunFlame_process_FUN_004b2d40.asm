; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CGunFlame_process_FUN_004b2d40(CGunFlame *this_ptr)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004b4dd0 at 004b5038
;
; Referenced Globals:
;   undefined4 DAT_005df4f4
;   undefined4 DAT_005df4fc
;   undefined4 DAT_005df504
;   undefined4 DAT_005df50c
;   undefined4 DAT_005fffb4
;   undefined4 DAT_0061c010
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
;   core_fire.cpp_CGunFlame_init_FUN_004b2980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2d40
        ;   Label: core_fire.cpp_CGunFlame_process_FUN_004b2d40
    PUSH ESI                            ; 004b2d41
    PUSH EDI                            ; 004b2d42
    PUSH EBP                            ; 004b2d43
    MOV EBP,ESP                         ; 004b2d44
    SUB ESP,0x30                        ; 004b2d46
    AND ESP,0xfffffff8                  ; 004b2d49
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b2d4c
    MOV EAX,[0x0061d95c]                ; 004b2d4f | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x294]     ; 004b2d54 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP],EAX             ; 004b2d5a
    FLD float ptr [EBX]                 ; 004b2d5d
    FSUB float ptr [ESP]                ; 004b2d5f
    MOV dword ptr [ESP + 0x2c],EAX      ; 004b2d62
    FST float ptr [EBX]                 ; 004b2d66
    FLDZ                                ; 004b2d68
    FCOMPP                              ; 004b2d6a
    FNSTSW AX                           ; 004b2d6c
    SAHF                                ; 004b2d6e
    JC 0x004b2d7e                       ; 004b2d6f
        ;   XREF to: 004b2d7e (CONDITIONAL_JUMP)  ; LAB_004b2d7e
    MOV dword ptr [EBX],0x0             ; 004b2d71
    MOV ESP,EBP                         ; 004b2d77
        ;   Label: LAB_004b2d77
    POP EBP                             ; 004b2d79
    POP EDI                             ; 004b2d7a
    POP ESI                             ; 004b2d7b
    POP EBX                             ; 004b2d7c
    RET                                 ; 004b2d7d
    LEA EAX,[EBX + 0x10]                ; 004b2d7e
        ;   Label: LAB_004b2d7e
    FLD float ptr [ESP]                 ; 004b2d81
    FLD float ptr [EAX]                 ; 004b2d84
    FMUL ST1                            ; 004b2d86
    FLD float ptr [EAX + 0x4]           ; 004b2d88
    FMUL ST2                            ; 004b2d8b
    FLD float ptr [EAX + 0x8]           ; 004b2d8d
    FMUL ST3                            ; 004b2d90
    LEA EDI,[ESP + 0x4]                 ; 004b2d92
    LEA ESI,[ESP + 0x10]                ; 004b2d96
    FXCH ST2                            ; 004b2d9a
    FSTP float ptr [ESP + 0x10]         ; 004b2d9c
    FSTP float ptr [ESP + 0x14]         ; 004b2da0
    FSTP float ptr [ESP + 0x18]         ; 004b2da4
    MOVSD ES:EDI,ESI                    ; 004b2da8
    MOVSD ES:EDI,ESI                    ; 004b2da9
    MOVSD ES:EDI,ESI                    ; 004b2daa
    FLD ST0                             ; 004b2dab
    LEA ESI,[EBX + 0x4]                 ; 004b2dad
    FMUL double ptr [0x005df4fc]        ; 004b2db0 | DAT_005df4fc
    FLD float ptr [ESI]                 ; 004b2db6
    FLD float ptr [ESI + 0x4]           ; 004b2db8
    FLD float ptr [ESI + 0x8]           ; 004b2dbb
    FXCH ST2                            ; 004b2dbe
    FADD float ptr [ESP + 0x4]          ; 004b2dc0
    FXCH                                ; 004b2dc4
    FADD float ptr [ESP + 0x8]          ; 004b2dc6
    FXCH ST2                            ; 004b2dca
    FADD float ptr [ESP + 0xc]          ; 004b2dcc
    FXCH                                ; 004b2dd0
    FSTP float ptr [ESI]                ; 004b2dd2
    FXCH                                ; 004b2dd4
    FSTP float ptr [ESI + 0x4]          ; 004b2dd6
    FSTP float ptr [ESI + 0x8]          ; 004b2dd9
    FLD float ptr [0x005df4f4]          ; 004b2ddc | DAT_005df4f4
    FLD float ptr [EAX]                 ; 004b2de2
    FMUL ST1                            ; 004b2de4
    FLD float ptr [EAX + 0x4]           ; 004b2de6
    FMUL ST2                            ; 004b2de9
    FLD float ptr [EAX + 0x8]           ; 004b2deb
    FMULP ST3                           ; 004b2dee
    FXCH                                ; 004b2df0
    FSTP float ptr [EAX]                ; 004b2df2
    FSTP float ptr [EAX + 0x4]          ; 004b2df4
    FSTP float ptr [EAX + 0x8]          ; 004b2df7
    FLD float ptr [EBX + 0x14]          ; 004b2dfa
    FXCH                                ; 004b2dfd
    FADD ST0,ST1                        ; 004b2dff
    FXCH ST2                            ; 004b2e01
    FMUL double ptr [0x005df504]        ; 004b2e03 | DAT_005df504
    FXCH ST2                            ; 004b2e09
    FSTP ST1                            ; 004b2e0b
    SUB ESP,0x4                         ; 004b2e0d
    FSTP float ptr [EBX + 0x14]         ; 004b2e10
    FSTP float ptr [ESP]                ; 004b2e13
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 004b2e16
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 004b2e1b
    TEST EAX,EAX                        ; 004b2e1e
    JZ 0x004b2e3e                       ; 004b2e20
        ;   XREF to: 004b2e3e (CONDITIONAL_JUMP)  ; LAB_004b2e3e
    PUSH 0xffff                         ; 004b2e22
    PUSH 0x0                            ; 004b2e27
    PUSH 0x3f000000                     ; 004b2e29
    PUSH ESI                            ; 004b2e2e
    MOV EDX,dword ptr [0x0061c010]      ; 004b2e2f | DAT_0061c010
    PUSH EDX                            ; 004b2e35
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30 ; 004b2e36
        ;   XREF to: 004b5b30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 004b2e3b
    CMP dword ptr [EBX + 0x20],0x0      ; 004b2e3e
        ;   Label: LAB_004b2e3e
    JZ 0x004b2e5d                       ; 004b2e42
        ;   XREF to: 004b2e5d (CONDITIONAL_JUMP)  ; LAB_004b2e5d
    PUSH dword ptr [ESP + 0x2c]         ; 004b2e44
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 004b2e48
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 004b2e4d
    TEST EAX,EAX                        ; 004b2e50
    JZ 0x004b2e5d                       ; 004b2e52
        ;   XREF to: 004b2e5d (CONDITIONAL_JUMP)  ; LAB_004b2e5d
    PUSH EBX                            ; 004b2e54
    CALL core_fire.cpp_CGunFlame_init_FUN_004b2980 ; 004b2e55
        ;   XREF to: 004b2980 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CGunFlame_init_FUN_004b2980(CGunFlame * this_ptr)
    ADD ESP,0x4                         ; 004b2e5a
    FLD float ptr [ESP + 0x2c]          ; 004b2e5d
        ;   Label: LAB_004b2e5d
    FMUL float ptr [0x005fffb4]         ; 004b2e61 | DAT_005fffb4
    FADD float ptr [EBX + 0x1c]         ; 004b2e67
    FSTP float ptr [EBX + 0x1c]         ; 004b2e6a
    CMP dword ptr [EBX + 0x1c],0x41a00000 ; 004b2e6d
    JL 0x004b2d77                       ; 004b2e74
        ;   XREF to: 004b2d77 (CONDITIONAL_JUMP)  ; LAB_004b2d77
    FLD float ptr [0x005df50c]          ; 004b2e7a | DAT_005df50c
    FLD float ptr [EBX + 0x1c]          ; 004b2e80
        ;   Label: LAB_004b2e80
    FADD ST0,ST1                        ; 004b2e83
    FSTP float ptr [EBX + 0x1c]         ; 004b2e85
    CMP dword ptr [EBX + 0x1c],0x41a00000 ; 004b2e88
    JGE 0x004b2e80                      ; 004b2e8f
        ;   XREF to: 004b2e80 (CONDITIONAL_JUMP)  ; LAB_004b2e80
    FSTP ST0                            ; 004b2e91
    MOV ESP,EBP                         ; 004b2e93
    POP EBP                             ; 004b2e95
    POP EDI                             ; 004b2e96
    POP ESI                             ; 004b2e97
    POP EBX                             ; 004b2e98
    RET                                 ; 004b2e99

