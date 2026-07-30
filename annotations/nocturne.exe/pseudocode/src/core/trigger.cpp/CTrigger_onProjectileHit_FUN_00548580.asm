; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(CTrigger *this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_crossbow.cpp_FUN_0043d1c0 at 0043d53d
;   core_elephant.cpp_FUN_00477890 at 00477d34
;   core_gun.cpp_CGun_fire_FUN_004b27c0 at 004b2efd
;   core_lightgun.cpp_FUN_004c71a0 at 004c7713
;   core_shotgun.cpp_FUN_00515ea0 at 0051639c
;   core_tommygun.cpp_FUN_00545c30 at 005463b7
;   core_turret.cpp_CTurret_fire_FUN_0054ab10 at 0054af49
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00548580
        ;   Label: core_trigger.cpp_CTrigger_onProjectileHit_FUN_00548580
    CMP dword ptr [EAX + 0x16c],0x4     ; 00548584
    JZ 0x0054858e                       ; 0054858b
        ;   XREF to: 0054858e (CONDITIONAL_JUMP)  ; LAB_0054858e
    RET                                 ; 0054858d
    MOV dword ptr [EAX + 0x2e8],0x1     ; 0054858e
        ;   Label: LAB_0054858e
    RET                                 ; 00548598

