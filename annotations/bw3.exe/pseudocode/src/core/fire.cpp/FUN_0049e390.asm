; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_0049e390(CGunFlame *this_ptr)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined8       Stack[-0x48]:8  local_48
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_fire.cpp_FUN_004a1760 at 004a19c9
;
; Referenced Globals:
;   undefined4 DAT_005c0868
;   undefined4 DAT_005c0870
;   undefined4 DAT_005c0878
;   undefined4 DAT_005df908
;   undefined4 DAT_005fc5a0
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cf40
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560
;   core_fire.cpp_FUN_0049df60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e390
        ;   Label: core_fire.cpp_FUN_0049e390
    PUSH ESI                            ; 0049e391
    PUSH EDI                            ; 0049e392
    PUSH EBP                            ; 0049e393
    MOV EBP,ESP                         ; 0049e394
    SUB ESP,0x34                        ; 0049e396
    AND ESP,0xfffffff8                  ; 0049e399
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049e39c
    MOV EAX,[0x005fe9dc]                ; 0049e39f | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x314]     ; 0049e3a4 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x8],EAX       ; 0049e3aa
    FLD float ptr [EBX + 0xc]           ; 0049e3ae
    FSUB float ptr [ESP + 0x8]          ; 0049e3b1
    MOV dword ptr [ESP + 0x2c],EAX      ; 0049e3b5
    FST float ptr [EBX + 0xc]           ; 0049e3b9
    FLDZ                                ; 0049e3bc
    FCOMPP                              ; 0049e3be
    FNSTSW AX                           ; 0049e3c0
    SAHF                                ; 0049e3c2
    JNC 0x0049e487                      ; 0049e3c3
        ;   XREF to: 0049e487 (CONDITIONAL_JUMP)  ; LAB_0049e487
    LEA EAX,[EBX + 0x10]                ; 0049e3c9
    FLD float ptr [ESP + 0x8]           ; 0049e3cc
    FLD float ptr [EAX]                 ; 0049e3d0
    FMUL ST1                            ; 0049e3d2
    FLD float ptr [EAX + 0x4]           ; 0049e3d4
    FMUL ST2                            ; 0049e3d7
    FLD float ptr [EAX + 0x8]           ; 0049e3d9
    FMUL ST3                            ; 0049e3dc
    FXCH ST3                            ; 0049e3de
    FST double ptr [ESP]                ; 0049e3e0
    FMUL double ptr [0x005c0870]        ; 0049e3e3 | DAT_005c0870
    LEA EDI,[ESP + 0xc]                 ; 0049e3e9
    LEA ESI,[ESP + 0x18]                ; 0049e3ed
    FXCH ST2                            ; 0049e3f1
    FSTP float ptr [ESP + 0x18]         ; 0049e3f3
    FSTP float ptr [ESP + 0x1c]         ; 0049e3f7
    FXCH                                ; 0049e3fb
    FSTP float ptr [ESP + 0x20]         ; 0049e3fd
    MOVSD ES:EDI,ESI                    ; 0049e401
    MOVSD ES:EDI,ESI                    ; 0049e402
    MOVSD ES:EDI,ESI                    ; 0049e403
    FLD float ptr [EBX]                 ; 0049e404
    FLD float ptr [EBX + 0x4]           ; 0049e406
    FLD float ptr [EBX + 0x8]           ; 0049e409
    FXCH ST2                            ; 0049e40c
    FADD float ptr [ESP + 0xc]          ; 0049e40e
    FXCH                                ; 0049e412
    FADD float ptr [ESP + 0x10]         ; 0049e414
    FXCH ST2                            ; 0049e418
    FADD float ptr [ESP + 0x14]         ; 0049e41a
    FXCH                                ; 0049e41e
    FSTP float ptr [EBX]                ; 0049e420
    FXCH                                ; 0049e422
    FSTP float ptr [EBX + 0x4]          ; 0049e424
    FSTP float ptr [EBX + 0x8]          ; 0049e427
    FLD float ptr [0x005c0868]          ; 0049e42a | DAT_005c0868
    FLD float ptr [EAX]                 ; 0049e430
    FMUL ST1                            ; 0049e432
    FLD float ptr [EAX + 0x4]           ; 0049e434
    FMUL ST2                            ; 0049e437
    FLD float ptr [EAX + 0x8]           ; 0049e439
    FMULP ST3                           ; 0049e43c
    FXCH                                ; 0049e43e
    FSTP float ptr [EAX]                ; 0049e440
    FSTP float ptr [EAX + 0x4]          ; 0049e442
    FSTP float ptr [EAX + 0x8]          ; 0049e445
    FLD float ptr [EBX + 0x14]          ; 0049e448
    FXCH                                ; 0049e44b
    FADD ST0,ST1                        ; 0049e44d
    MOV EDX,dword ptr [EBX + 0x24]      ; 0049e44f
    FSTP ST1                            ; 0049e452
    FSTP float ptr [EBX + 0x14]         ; 0049e454
    TEST EDX,EDX                        ; 0049e457
    JZ 0x0049e495                       ; 0049e459
        ;   XREF to: 0049e495 (CONDITIONAL_JUMP)  ; LAB_0049e495
    FLD float ptr [ESP + 0x2c]          ; 0049e45b
        ;   Label: LAB_0049e45b
    FMUL float ptr [0x005df908]         ; 0049e45f | DAT_005df908
    FADD float ptr [EBX + 0x1c]         ; 0049e465
    FSTP float ptr [EBX + 0x1c]         ; 0049e468
        ;   Label: LAB_0049e468
    FLD float ptr [EBX + 0x1c]          ; 0049e46b
    FILD dword ptr [EBX + 0x28]         ; 0049e46e
    FSTP float ptr [ESP + 0x30]         ; 0049e471
    FCOMP float ptr [ESP + 0x30]        ; 0049e475
    FNSTSW AX                           ; 0049e479
    SAHF                                ; 0049e47b
    JC 0x0049e48e                       ; 0049e47c
        ;   XREF to: 0049e48e (CONDITIONAL_JUMP)  ; LAB_0049e48e
    FLD float ptr [EBX + 0x1c]          ; 0049e47e
    FSUB float ptr [ESP + 0x30]         ; 0049e481
    JMP 0x0049e468                      ; 0049e485
        ;   XREF to: 0049e468 (UNCONDITIONAL_JUMP)  ; LAB_0049e468
    MOV dword ptr [EBX + 0xc],0x0       ; 0049e487
        ;   Label: LAB_0049e487
    MOV ESP,EBP                         ; 0049e48e
        ;   Label: LAB_0049e48e
    POP EBP                             ; 0049e490
    POP EDI                             ; 0049e491
    POP ESI                             ; 0049e492
    POP EBX                             ; 0049e493
    RET                                 ; 0049e494
    FLD double ptr [ESP]                ; 0049e495
        ;   Label: LAB_0049e495
    FMUL double ptr [0x005c0878]        ; 0049e498 | DAT_005c0878
    SUB ESP,0x4                         ; 0049e49e
    FSTP float ptr [ESP]                ; 0049e4a1
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 0049e4a4
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 0049e4a9
    TEST EAX,EAX                        ; 0049e4ac
    JZ 0x0049e4cc                       ; 0049e4ae
        ;   XREF to: 0049e4cc (CONDITIONAL_JUMP)  ; LAB_0049e4cc
    PUSH 0x4000                         ; 0049e4b0
    PUSH 0x0                            ; 0049e4b5
    PUSH 0x3f000000                     ; 0049e4b7
    PUSH EBX                            ; 0049e4bc
    MOV ECX,dword ptr [0x005fc5a0]      ; 0049e4bd | DAT_005fc5a0
    PUSH ECX                            ; 0049e4c3
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560 ; 0049e4c4
        ;   XREF to: 004a2560 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 0049e4c9
    CMP dword ptr [EBX + 0x20],0x0      ; 0049e4cc
        ;   Label: LAB_0049e4cc
    JZ 0x0049e45b                       ; 0049e4d0
        ;   XREF to: 0049e45b (CONDITIONAL_JUMP)  ; LAB_0049e45b
    PUSH dword ptr [ESP + 0x2c]         ; 0049e4d2
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 0049e4d6
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 0049e4db
    TEST EAX,EAX                        ; 0049e4de
    JZ 0x0049e45b                       ; 0049e4e0
        ;   XREF to: 0049e45b (CONDITIONAL_JUMP)  ; LAB_0049e45b
    PUSH EBX                            ; 0049e4e6
    CALL core_fire.cpp_FUN_0049df60     ; 0049e4e7
        ;   XREF to: 0049df60 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_0049df60()
    ADD ESP,0x4                         ; 0049e4ec
    JMP 0x0049e45b                      ; 0049e4ef
        ;   XREF to: 0049e45b (UNCONDITIONAL_JUMP)  ; LAB_0049e45b

