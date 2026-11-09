; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SCollisionInfo * __cdecl core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0(SCollisionInfo *this_ptr)
;
; Parameters:
; SCollisionInfo * Stack[0x4]:4   this_ptr
;
; XREF[16]:
;   core_actor.cpp_CDemonActor_testCylinderCollision_FUN_00408f00 at 00408f0b
;   core_actor.cpp_FUN_00408f90 at 00408faa
;   core_door.cpp_FUN_0045f5a0 at 0045f957
;   core_flame.cpp_CFlame_process_FUN_0049f2e0 at 0049f4a1
;   core_pendulum.cpp_FUN_00514f40 at 00514f55
;   core_platfrm.cpp_CPlatform_isActorOnPlatform_FUN_005197b0 at 005197d6
;   core_platfrm.cpp_FUN_005184c0 at 00518c02
;   core_setcolid.cpp_FUN_00534ea0 at 00535081
;   core_setcolid.cpp_FUN_00536490 at 0053662b
;   core_setcolid.cpp_FUN_00537030 at 00537198
;   ... and 6 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00537fa0
        ;   Label: core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0
    MOV dword ptr [EAX + 0x20],0x0      ; 00537fa4
    MOV dword ptr [EAX + 0x24],0x0      ; 00537fab
    MOV dword ptr [EAX],0x0             ; 00537fb2
    RET                                 ; 00537fb8

