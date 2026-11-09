; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_CTrigger_onProjectileHit_FUN_00578550(CTrigger *this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_crossbow.cpp_FUN_0043a7a0 at 0043aad8
;   core_elephant.cpp_FUN_00485b40 at 0048606a
;   core_gun.cpp_FUN_004cbdc0 at 004cc5c2
;   core_lightgun.cpp_FUN_004e2e70 at 004e32d8
;   core_shotgun.cpp_FUN_0053f170 at 0053f68b
;   core_tommygun.cpp_FUN_00575800 at 00576041
;   core_turret.cpp_FUN_0057fc20 at 00580101
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00578550
        ;   Label: core_trigger.cpp_CTrigger_onProjectileHit_FUN_00578550
    CMP dword ptr [EAX + 0x2d0],0x4     ; 00578554
    JZ 0x0057855e                       ; 0057855b
        ;   XREF to: 0057855e (CONDITIONAL_JUMP)  ; LAB_0057855e
    RET                                 ; 0057855d
    MOV dword ptr [EAX + 0x44c],0x1     ; 0057855e
        ;   Label: LAB_0057855e
    RET                                 ; 00578568

