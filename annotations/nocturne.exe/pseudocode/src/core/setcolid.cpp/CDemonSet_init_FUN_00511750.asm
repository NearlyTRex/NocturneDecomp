; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_init_FUN_00511750(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[31]:
;   core_actor.cpp_CDemonActor_processFootstepAt_FUN_0040d9f0 at 0040dac2
;   core_actor.cpp_CDemonActor_processFootstep_FUN_0040d930 at 0040d9ba
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429730 at 00429a7d
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 at 004254e1
;   core_crossbow.cpp_CCrossbow_fire_FUN_0043d1c0 at 0043d310
;   core_elephant.cpp_CElephantGun_fire_FUN_00477890 at 00477a82
;   core_emitter.cpp_CEmitter_renderOpaque_FUN_00478f80 at 00478fc9
;   core_fire.cpp_CFireEffect_traceLaser_FUN_0048b6f0 at 0048bc14
;   core_gabriela.cpp_CGabriella_processAI_FUN_00496d10 at 004971e0
;   core_gabriela.cpp_CGabriella_scoreTargetVisibility_FUN_00498de0 at 00499068
;   ... and 21 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00511750
        ;   Label: core_setcolid.cpp_CDemonSet_init_FUN_00511750
    MOV dword ptr [EAX + 0x15f2ac],0x0  ; 00511754
    MOV dword ptr [EAX + 0x15f2b0],0x0  ; 0051175e
    MOV dword ptr [EAX + 0x15f2f4],0x0  ; 00511768
    MOV dword ptr [EAX + 0x15f298],0x0  ; 00511772
    RET                                 ; 0051177c

