; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(CFlameCan *this_ptr)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040b300 at 0040bb68
;   core_elephant.cpp_FUN_00477890 at 00477f6a
;   core_fire.cpp_CGunFlame_init_FUN_004880d0 at 0048820c
;   core_flamecan.cpp_CFlameCan_process_FUN_0048e5a0 at 0048e5d1
;   core_gun.cpp_CGun_fire_FUN_004b27c0 at 004b2cae
;   core_set.cpp_CDemonSet_processActors_FUN_00509140 at 0050959e
;   core_shotgun.cpp_FUN_00515ea0 at 005165b1
;   core_tommygun.cpp_FUN_00545c30 at 00546165
;   core_turret.cpp_CTurret_fire_FUN_0054ab10 at 0054afdc
;
; Referenced Globals:
;   undefined4 DAT_005b80f0
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e550
        ;   Label: core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550
    PUSH ESI                            ; 0048e551
    PUSH EDI                            ; 0048e552
    MOV EDI,dword ptr [ESP + 0x10]      ; 0048e553
    LEA ESI,[EDI + 0x358]               ; 0048e557
    MOV dword ptr [EDI + 0x2cc],0x1     ; 0048e55d
    XOR EBX,EBX                         ; 0048e567
    PUSH 0xffff                         ; 0048e569
        ;   Label: LAB_0048e569
    PUSH 0x0                            ; 0048e56e
    PUSH 0x4000                         ; 0048e570
    PUSH 0x4000                         ; 0048e575
    PUSH 0x0                            ; 0048e57a
    PUSH ESI                            ; 0048e57c
    MOV EDX,dword ptr [0x005b80f0]      ; 0048e57d | DAT_005b80f0
    PUSH EDX                            ; 0048e583
    INC EBX                             ; 0048e584
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 0048e585
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 0048e58a
    CMP EBX,0x5                         ; 0048e58d
    JL 0x0048e569                       ; 0048e590
        ;   XREF to: 0048e569 (CONDITIONAL_JUMP)  ; LAB_0048e569
    MOV dword ptr [EDI + 0x4e4],0x1     ; 0048e592
    POP EDI                             ; 0048e59c
    POP ESI                             ; 0048e59d
    POP EBX                             ; 0048e59e
    RET                                 ; 0048e59f

