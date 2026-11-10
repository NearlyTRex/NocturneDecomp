; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_glass_cpp_CGlass_checkBreakableCondition_FUN_004c72d0(CGlass *this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a050 at 0040a7f9
;   core_crossbow.cpp_CCrossbow_fire_FUN_0043a7a0 at 0043ad9c
;   core_elephant.cpp_CElephantGun_fire_FUN_00485b40 at 004862b6
;   core_gun.cpp_CGun_fire_FUN_004cbdc0 at 004cc59b
;   core_set.cpp_CDemonSet_processActors_FUN_0052e940 at 0052ed0d
;   core_shotgun.cpp_CShotgun_fire_FUN_0053f170 at 0053f8e9
;   core_tommygun.cpp_CTommyGun_fire_FUN_00575800 at 0057601a
;   core_turret.cpp_CTurret_fire_FUN_0057fc20 at 00580157
;
; Referenced Globals:
;   undefined4 DAT_006141f0
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c72d0
        ;   Label: core_glass.cpp_CGlass_checkBreakableCondition_FUN_004c72d0
    ADD EAX,0x468                       ; 004c72d4
    PUSH EAX                            ; 004c72d9
    MOV EDX,dword ptr [0x006141f0]      ; 004c72da | DAT_006141f0
    PUSH EDX                            ; 004c72e0
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 004c72e1
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004c72e6
    RET                                 ; 004c72e9

