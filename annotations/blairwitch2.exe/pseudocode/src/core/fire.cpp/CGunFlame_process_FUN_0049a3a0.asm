; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CGunFlame_process_FUN_0049a3a0(CGunFlame *this_ptr)
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
;   core_fire.cpp_CFireEffect_process_FUN_0049c430 at 0049c6b8
;
; Referenced Globals:
;   undefined4 DAT_005d56b2
;   undefined4 DAT_005d56ba
;   undefined4 DAT_005d56c2
;   undefined4 DAT_005d56ca
;   undefined4 DAT_005f6504
;   undefined4 DAT_00614d30
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040d060
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230
;   core_fire.cpp_CGunFlame_init_FUN_00499fe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a3a0
        ;   Label: core_fire.cpp_CGunFlame_process_FUN_0049a3a0
    PUSH ESI                            ; 0049a3a1
    PUSH EDI                            ; 0049a3a2
    PUSH EBP                            ; 0049a3a3
    MOV EBP,ESP                         ; 0049a3a4
    SUB ESP,0x30                        ; 0049a3a6
    AND ESP,0xfffffff8                  ; 0049a3a9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049a3ac
    MOV EAX,[0x00616494]                ; 0049a3af | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x284]     ; 0049a3b4 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP],EAX             ; 0049a3ba
    FLD float ptr [EBX]                 ; 0049a3bd
    FSUB float ptr [ESP]                ; 0049a3bf
    MOV dword ptr [ESP + 0x2c],EAX      ; 0049a3c2
    FST float ptr [EBX]                 ; 0049a3c6
    FLDZ                                ; 0049a3c8
    FCOMPP                              ; 0049a3ca
    FNSTSW AX                           ; 0049a3cc
    SAHF                                ; 0049a3ce
    JC 0x0049a3de                       ; 0049a3cf
        ;   XREF to: 0049a3de (CONDITIONAL_JUMP)  ; LAB_0049a3de
    MOV dword ptr [EBX],0x0             ; 0049a3d1
    MOV ESP,EBP                         ; 0049a3d7
        ;   Label: LAB_0049a3d7
    POP EBP                             ; 0049a3d9
    POP EDI                             ; 0049a3da
    POP ESI                             ; 0049a3db
    POP EBX                             ; 0049a3dc
    RET                                 ; 0049a3dd
    LEA EAX,[EBX + 0x10]                ; 0049a3de
        ;   Label: LAB_0049a3de
    FLD float ptr [ESP]                 ; 0049a3e1
    FLD float ptr [EAX]                 ; 0049a3e4
    FMUL ST1                            ; 0049a3e6
    FLD float ptr [EAX + 0x4]           ; 0049a3e8
    FMUL ST2                            ; 0049a3eb
    FLD float ptr [EAX + 0x8]           ; 0049a3ed
    FMUL ST3                            ; 0049a3f0
    LEA EDI,[ESP + 0x4]                 ; 0049a3f2
    LEA ESI,[ESP + 0x10]                ; 0049a3f6
    FXCH ST2                            ; 0049a3fa
    FSTP float ptr [ESP + 0x10]         ; 0049a3fc
    FSTP float ptr [ESP + 0x14]         ; 0049a400
    FSTP float ptr [ESP + 0x18]         ; 0049a404
    MOVSD ES:EDI,ESI                    ; 0049a408
    MOVSD ES:EDI,ESI                    ; 0049a409
    MOVSD ES:EDI,ESI                    ; 0049a40a
    FLD ST0                             ; 0049a40b
    LEA ESI,[EBX + 0x4]                 ; 0049a40d
    FMUL double ptr [0x005d56ba]        ; 0049a410 | DAT_005d56ba
    FLD float ptr [ESI]                 ; 0049a416
    FLD float ptr [ESI + 0x4]           ; 0049a418
    FLD float ptr [ESI + 0x8]           ; 0049a41b
    FXCH ST2                            ; 0049a41e
    FADD float ptr [ESP + 0x4]          ; 0049a420
    FXCH                                ; 0049a424
    FADD float ptr [ESP + 0x8]          ; 0049a426
    FXCH ST2                            ; 0049a42a
    FADD float ptr [ESP + 0xc]          ; 0049a42c
    FXCH                                ; 0049a430
    FSTP float ptr [ESI]                ; 0049a432
    FXCH                                ; 0049a434
    FSTP float ptr [ESI + 0x4]          ; 0049a436
    FSTP float ptr [ESI + 0x8]          ; 0049a439
    FLD float ptr [0x005d56b2]          ; 0049a43c | DAT_005d56b2
    FLD float ptr [EAX]                 ; 0049a442
    FMUL ST1                            ; 0049a444
    FLD float ptr [EAX + 0x4]           ; 0049a446
    FMUL ST2                            ; 0049a449
    FLD float ptr [EAX + 0x8]           ; 0049a44b
    FMULP ST3                           ; 0049a44e
    FXCH                                ; 0049a450
    FSTP float ptr [EAX]                ; 0049a452
    FSTP float ptr [EAX + 0x4]          ; 0049a454
    FSTP float ptr [EAX + 0x8]          ; 0049a457
    FLD float ptr [EBX + 0x14]          ; 0049a45a
    FXCH                                ; 0049a45d
    FADD ST0,ST1                        ; 0049a45f
    FXCH ST2                            ; 0049a461
    FMUL double ptr [0x005d56c2]        ; 0049a463 | DAT_005d56c2
    FXCH ST2                            ; 0049a469
    FSTP ST1                            ; 0049a46b
    SUB ESP,0x4                         ; 0049a46d
    FSTP float ptr [EBX + 0x14]         ; 0049a470
    FSTP float ptr [ESP]                ; 0049a473
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 0049a476
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0049a47b
    TEST EAX,EAX                        ; 0049a47e
    JZ 0x0049a49e                       ; 0049a480
        ;   XREF to: 0049a49e (CONDITIONAL_JUMP)  ; LAB_0049a49e
    PUSH 0xffff                         ; 0049a482
    PUSH 0x0                            ; 0049a487
    PUSH 0x3f000000                     ; 0049a489
    PUSH ESI                            ; 0049a48e
    MOV EDX,dword ptr [0x00614d30]      ; 0049a48f | DAT_00614d30
    PUSH EDX                            ; 0049a495
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230 ; 0049a496
        ;   XREF to: 0049d230 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 0049a49b
    CMP dword ptr [EBX + 0x20],0x0      ; 0049a49e
        ;   Label: LAB_0049a49e
    JZ 0x0049a4bd                       ; 0049a4a2
        ;   XREF to: 0049a4bd (CONDITIONAL_JUMP)  ; LAB_0049a4bd
    PUSH dword ptr [ESP + 0x2c]         ; 0049a4a4
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 0049a4a8
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0049a4ad
    TEST EAX,EAX                        ; 0049a4b0
    JZ 0x0049a4bd                       ; 0049a4b2
        ;   XREF to: 0049a4bd (CONDITIONAL_JUMP)  ; LAB_0049a4bd
    PUSH EBX                            ; 0049a4b4
    CALL core_fire.cpp_CGunFlame_init_FUN_00499fe0 ; 0049a4b5
        ;   XREF to: 00499fe0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CGunFlame_init_FUN_00499fe0(CGunFlame * this_ptr)
    ADD ESP,0x4                         ; 0049a4ba
    FLD float ptr [ESP + 0x2c]          ; 0049a4bd
        ;   Label: LAB_0049a4bd
    FMUL float ptr [0x005f6504]         ; 0049a4c1 | DAT_005f6504
    FADD float ptr [EBX + 0x1c]         ; 0049a4c7
    FSTP float ptr [EBX + 0x1c]         ; 0049a4ca
    CMP dword ptr [EBX + 0x1c],0x41a00000 ; 0049a4cd
    JL 0x0049a3d7                       ; 0049a4d4
        ;   XREF to: 0049a3d7 (CONDITIONAL_JUMP)  ; LAB_0049a3d7
    FLD float ptr [0x005d56ca]          ; 0049a4da | DAT_005d56ca
    FLD float ptr [EBX + 0x1c]          ; 0049a4e0
        ;   Label: LAB_0049a4e0
    FADD ST0,ST1                        ; 0049a4e3
    FSTP float ptr [EBX + 0x1c]         ; 0049a4e5
    CMP dword ptr [EBX + 0x1c],0x41a00000 ; 0049a4e8
    JGE 0x0049a4e0                      ; 0049a4ef
        ;   XREF to: 0049a4e0 (CONDITIONAL_JUMP)  ; LAB_0049a4e0
    FSTP ST0                            ; 0049a4f1
    MOV ESP,EBP                         ; 0049a4f3
    POP EBP                             ; 0049a4f5
    POP EDI                             ; 0049a4f6
    POP ESI                             ; 0049a4f7
    POP EBX                             ; 0049a4f8
    RET                                 ; 0049a4f9

