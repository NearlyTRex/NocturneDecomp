; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SCollisionInfo * __cdecl core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80(SCollisionInfo *this_ptr)
;
; Parameters:
; SCollisionInfo * Stack[0x4]:4   this_ptr
;
; XREF[14]:
;   core_actor.cpp_CDemonActor_testCylinderCollision_FUN_00408d10 at 00408d1b
;   core_actor.cpp_CDemonActor_testLineIntersection_FUN_00408da0 at 00408dba
;   core_door.cpp_CDoor_process_FUN_004642f0 at 004646a7
;   core_flame.cpp_CFlame_process_FUN_004a5b10 at 004a5cd1
;   core_pendulum.cpp_CPendulum_testCollisionWithActor_FUN_0050df70 at 0050df85
;   core_platfrm.cpp_CPlatform_isActorOnPlatform_FUN_005127f0 at 00512816
;   core_platfrm.cpp_CPlatform_process_FUN_005114f0 at 00511c32
;   core_setcolid.cpp_FUN_0053bc80 at 0053be61
;   core_setcolid.cpp_FUN_0053d270 at 0053d40b
;   core_setcolid.cpp_FUN_0053de10 at 0053df78
;   ... and 4 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053ed80
        ;   Label: core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80
    MOV dword ptr [EAX + 0x20],0x0      ; 0053ed84
    MOV dword ptr [EAX + 0x24],0x0      ; 0053ed8b
    MOV dword ptr [EAX],0x0             ; 0053ed92
    RET                                 ; 0053ed98

