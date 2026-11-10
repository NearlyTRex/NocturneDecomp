; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0(CTrigger *this_ptr,CDemonActor *actor)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[10]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_00409f20 at 0040a2c5
;   core_crossbow.cpp_CCrossbow_fire_FUN_00449a50 at 00449d92
;   core_elephant.cpp_CElephantGun_fire_FUN_0049e1a0 at 0049e6d4
;   core_gun.cpp_CGun_fire_FUN_004e8630 at 004e8e36
;   core_lightgun.cpp_CLightGun_fire_FUN_00500310 at 00500773
;   core_lightpis.cpp_CLightPis_fire_FUN_00501a70 at 00501ed3
;   core_rifle.cpp_CRifle_fire_FUN_00540080 at 00540759
;   core_shotgun.cpp_CShotgun_fire_FUN_00561760 at 00561c85
;   core_tommygun.cpp_CTommyGun_fire_FUN_00598420 at 00598c6b
;   core_turret.cpp_CTurret_fire_FUN_005a3870 at 005a3d5b
;
; Called Functions:
;   shape_edittool.cpp_wildcardStringMatch_FUN_0049dea0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059bdf0
        ;   Label: core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0059bdf4
    TEST EDX,EDX                        ; 0059bdf8
    JZ 0x0059b8c0                       ; 0059bdfa
        ;   XREF to: 0059b8c0 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x174],0x7     ; 0059be00
    JNZ 0x0059b8c0                      ; 0059be07
        ;   XREF to: 0059b8c0 (CONDITIONAL_JUMP)
    CMP byte ptr [EAX + 0x308],0x0      ; 0059be0d
    JNZ 0x0059be1c                      ; 0059be14
        ;   XREF to: 0059be1c (CONDITIONAL_JUMP)  ; LAB_0059be1c
    MOV EAX,0x1                         ; 0059be16
    RET                                 ; 0059be1b
    PUSH 0x0                            ; 0059be1c
        ;   Label: LAB_0059be1c
    PUSH EDX                            ; 0059be1e
    ADD EAX,0x308                       ; 0059be1f
    PUSH EAX                            ; 0059be24
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_0049dea0 ; 0059be25
        ;   XREF to: 0049dea0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_0049dea0(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 0059be2a
    RET                                 ; 0059be2d

