; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[31]:
;   core_actor.cpp_CDemonActor_processFootstepAt_FUN_0040c8f0 at 0040c9c2
;   core_actor.cpp_CDemonActor_processFootstep_FUN_0040c830 at 0040c8ba
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 at 0042d8ed
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 at 00429455
;   core_crossbow.cpp_CCrossbow_fire_FUN_00448f20 at 00449302
;   core_emitter.cpp_CEmitter_renderOpaque_FUN_004a8860 at 004a89ca
;   core_fire.cpp_CFireEffect_FUN_004c8230 at 004c89c1
;   core_gabriela.cpp_CGabriella_FUN_004d4190 at 004d4660
;   core_gabriela.cpp_CGabriella_FUN_004d5fe0 at 004d6036
;   core_gabriela.cpp_CGabriella_FUN_004d6260 at 004d64e8
;   ... and 21 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00574180
        ;   Label: core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
    MOV dword ptr [EAX + 0x15f694],0x0  ; 00574184
    MOV dword ptr [EAX + 0x15f698],0x0  ; 0057418e
    MOV dword ptr [EAX + 0x15f6dc],0x0  ; 00574198
    MOV dword ptr [EAX + 0x15f680],0x0  ; 005741a2
    RET                                 ; 005741ac

