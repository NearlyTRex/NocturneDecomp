; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_CTrigger_onProjectileHit_FUN_0059bdd0(CTrigger *this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   core_crossbow.cpp_CCrossbow_fire_FUN_00449a50 at 00449d88
;   core_elephant.cpp_CElephantGun_fire_FUN_0049e1a0 at 0049e6ca
;   core_gun.cpp_CGun_fire_FUN_004e8630 at 004e8e2c
;   core_lightgun.cpp_CLightGun_fire_FUN_00500310 at 00500766
;   core_lightpis.cpp_CLightPis_fire_FUN_00501a70 at 00501ec6
;   core_rifle.cpp_CRifle_fire_FUN_00540080 at 0054074f
;   core_shotgun.cpp_CShotgun_fire_FUN_00561760 at 00561c7b
;   core_tommygun.cpp_CTommyGun_fire_FUN_00598420 at 00598c61
;   core_turret.cpp_CTurret_fire_FUN_005a3870 at 005a3d51
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059bdd0
        ;   Label: core_trigger.cpp_CTrigger_onProjectileHit_FUN_0059bdd0
    CMP dword ptr [EAX + 0x174],0x4     ; 0059bdd4
    JZ 0x0059bdde                       ; 0059bddb
        ;   XREF to: 0059bdde (CONDITIONAL_JUMP)  ; LAB_0059bdde
    RET                                 ; 0059bddd
    MOV dword ptr [EAX + 0x2f0],0x1     ; 0059bdde
        ;   Label: LAB_0059bdde
    RET                                 ; 0059bde8

