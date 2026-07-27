; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CGunFlame_process_FUN_00488430(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_0048a390 at 0048a588
;
; Referenced Globals:
;   double DOUBLE_005813ac = 5.26105753567487E-315
;   double DOUBLE_005813b4 = 0.200000000000000
;   double DOUBLE_005813bc = 0.5
;   double DOUBLE_005813c4 = 1.60496654306895E-314
;   float FLOAT_0059d218 = 15
;   undefined4 DAT_005b80f0
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77850
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
;   core_fire.cpp_CGunFlame_init_FUN_004880d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488430
        ;   Label: core_fire.cpp_CGunFlame_process_FUN_00488430
    PUSH ESI                            ; 00488431
    PUSH EBP                            ; 00488432
    MOV EBP,ESP                         ; 00488433
    SUB ESP,0x24                        ; 00488435
    AND ESP,0xfffffff8                  ; 00488438
    MOV EBX,dword ptr [EBP + 0x10]      ; 0048843b
    MOV EAX,[0x005b9354]                ; 0048843e | DAT_005b9354
    MOV EAX,dword ptr [EAX + 0x264]     ; 00488443 | DAT_01c77850
    MOV dword ptr [ESP],EAX             ; 00488449
    FLD float ptr [EBX]                 ; 0048844c
    FSUB float ptr [ESP]                ; 0048844e
    MOV dword ptr [ESP + 0x20],EAX      ; 00488451
    FST float ptr [EBX]                 ; 00488455
    FLDZ                                ; 00488457
    FCOMPP                              ; 00488459
    FNSTSW AX                           ; 0048845b
    SAHF                                ; 0048845d
    JC 0x0048846c                       ; 0048845e
        ;   XREF to: 0048846c (CONDITIONAL_JUMP)  ; LAB_0048846c
    MOV dword ptr [EBX],0x0             ; 00488460
    MOV ESP,EBP                         ; 00488466
        ;   Label: LAB_00488466
    POP EBP                             ; 00488468
    POP ESI                             ; 00488469
    POP EBX                             ; 0048846a
    RET                                 ; 0048846b
    LEA EAX,[EBX + 0x10]                ; 0048846c
        ;   Label: LAB_0048846c
    FLD float ptr [ESP]                 ; 0048846f
    FLD float ptr [EAX]                 ; 00488472
    FMUL ST1                            ; 00488474
    FSTP float ptr [ESP + 0x4]          ; 00488476
    FLD float ptr [EAX + 0x4]           ; 0048847a
    FMUL ST1                            ; 0048847d
    FSTP float ptr [ESP + 0x8]          ; 0048847f
    FLD float ptr [EAX + 0x8]           ; 00488483
    FMUL ST1                            ; 00488486
    FLD ST1                             ; 00488488
    LEA ESI,[EBX + 0x4]                 ; 0048848a
    FXCH                                ; 0048848d
    FSTP float ptr [ESP + 0xc]          ; 0048848f
    FLD float ptr [ESI]                 ; 00488493
    FADD float ptr [ESP + 0x4]          ; 00488495
    FLD float ptr [ESI + 0x4]           ; 00488499
    FXCH                                ; 0048849c
    FSTP float ptr [ESI]                ; 0048849e
    FADD float ptr [ESP + 0x8]          ; 004884a0
    FLD float ptr [ESI + 0x8]           ; 004884a4
    FXCH                                ; 004884a7
    FSTP float ptr [ESI + 0x4]          ; 004884a9
    FADD float ptr [ESP + 0xc]          ; 004884ac
    FXCH                                ; 004884b0
    FMUL double ptr [0x005813b4]        ; 004884b2 | DOUBLE_005813b4
    FXCH                                ; 004884b8
    FSTP float ptr [ESI + 0x8]          ; 004884ba
    FLD float ptr [0x005813ac]          ; 004884bd | DOUBLE_005813ac
    FLD float ptr [EAX]                 ; 004884c3
    FMUL ST1                            ; 004884c5
    FLD float ptr [EAX + 0x4]           ; 004884c7
    FMUL ST2                            ; 004884ca
    FLD float ptr [EAX + 0x8]           ; 004884cc
    FMULP ST3                           ; 004884cf
    FXCH                                ; 004884d1
    FSTP float ptr [EAX]                ; 004884d3
    FSTP float ptr [EAX + 0x4]          ; 004884d5
    FSTP float ptr [EAX + 0x8]          ; 004884d8
    FLD float ptr [EBX + 0x14]          ; 004884db
    FXCH                                ; 004884de
    FADD ST0,ST1                        ; 004884e0
    FXCH ST2                            ; 004884e2
    FMUL double ptr [0x005813bc]        ; 004884e4 | DOUBLE_005813bc
    FXCH ST2                            ; 004884ea
    FSTP ST1                            ; 004884ec
    SUB ESP,0x4                         ; 004884ee
    FSTP float ptr [EBX + 0x14]         ; 004884f1
    FSTP float ptr [ESP]                ; 004884f4
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 004884f7
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 004884fc
    TEST EAX,EAX                        ; 004884ff
    JZ 0x0048851f                       ; 00488501
        ;   XREF to: 0048851f (CONDITIONAL_JUMP)  ; LAB_0048851f
    PUSH 0xffff                         ; 00488503
    PUSH 0x0                            ; 00488508
    PUSH 0x3f000000                     ; 0048850a
    PUSH ESI                            ; 0048850f
    MOV EDX,dword ptr [0x005b80f0]      ; 00488510 | DAT_005b80f0
    PUSH EDX                            ; 00488516
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0 ; 00488517
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0()
    ADD ESP,0x14                        ; 0048851c
    CMP dword ptr [EBX + 0x20],0x0      ; 0048851f
        ;   Label: LAB_0048851f
    JZ 0x0048853e                       ; 00488523
        ;   XREF to: 0048853e (CONDITIONAL_JUMP)  ; LAB_0048853e
    PUSH dword ptr [ESP + 0x20]         ; 00488525
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 00488529
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 0048852e
    TEST EAX,EAX                        ; 00488531
    JZ 0x0048853e                       ; 00488533
        ;   XREF to: 0048853e (CONDITIONAL_JUMP)  ; LAB_0048853e
    PUSH EBX                            ; 00488535
    CALL core_fire.cpp_CGunFlame_init_FUN_004880d0 ; 00488536
        ;   XREF to: 004880d0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CGunFlame_init_FUN_004880d0()
    ADD ESP,0x4                         ; 0048853b
    FLD float ptr [ESP + 0x20]          ; 0048853e
        ;   Label: LAB_0048853e
    FMUL float ptr [0x0059d218]         ; 00488542 | FLOAT_0059d218
    FADD float ptr [EBX + 0x1c]         ; 00488548
    FSTP float ptr [EBX + 0x1c]         ; 0048854b
    CMP dword ptr [EBX + 0x1c],0x41a00000 ; 0048854e
    JL 0x00488466                       ; 00488555
        ;   XREF to: 00488466 (CONDITIONAL_JUMP)  ; LAB_00488466
    FLD float ptr [0x005813c4]          ; 0048855b | DOUBLE_005813c4
    FLD float ptr [EBX + 0x1c]          ; 00488561
        ;   Label: LAB_00488561
    FADD ST0,ST1                        ; 00488564
    FSTP float ptr [EBX + 0x1c]         ; 00488566
    CMP dword ptr [EBX + 0x1c],0x41a00000 ; 00488569
    JGE 0x00488561                      ; 00488570
        ;   XREF to: 00488561 (CONDITIONAL_JUMP)  ; LAB_00488561
    FSTP ST0                            ; 00488572
    MOV ESP,EBP                         ; 00488574
    POP EBP                             ; 00488576
    POP ESI                             ; 00488577
    POP EBX                             ; 00488578
    RET                                 ; 00488579

