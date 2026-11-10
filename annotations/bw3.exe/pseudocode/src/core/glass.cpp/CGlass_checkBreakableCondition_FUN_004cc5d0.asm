; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_glass_cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(CGlass *this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
;
; XREF[10]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_00409f60 at 0040a640
;   core_blundrbs.cpp_CBlunderbus_fire_FUN_00410490 at 004113cd
;   core_burncrss.cpp_CBurncross_fire_FUN_00424550 at 00424d71
;   core_elephant.cpp_CElephantGun_fire_FUN_00486d40 at 004874b6
;   core_exorcism.cpp_CExorcism_fire_FUN_0048b020 at 0048b4f2
;   core_flintlck.cpp_CFlintlock_fire_FUN_004ae850 at 004af354
;   core_gun.cpp_CGun_fire_FUN_004d0fc0 at 004d1795
;   core_rifle.cpp_CRifle_fire_FUN_00527d70 at 00528415
;   core_set.cpp_CDemonSet_processActors_FUN_005353e0 at 00535771
;   core_tommygun.cpp_CTommyGun_fire_FUN_0056b410 at 0056bc2a
;
; Referenced Globals:
;   undefined4 DAT_005fba60
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cc5d0
        ;   Label: core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0
    ADD EAX,0x33c                       ; 004cc5d4
    PUSH EAX                            ; 004cc5d9
    MOV EDX,dword ptr [0x005fba60]      ; 004cc5da | DAT_005fba60
    PUSH EDX                            ; 004cc5e0
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 004cc5e1
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004cc5e6
    RET                                 ; 004cc5e9

