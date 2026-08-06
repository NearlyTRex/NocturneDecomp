; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SCollisionInfo * __cdecl core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(SCollisionInfo *this_ptr)
;
; Parameters:
; SCollisionInfo * Stack[0x4]:4   this_ptr
;
; XREF[15]:
;   core_actor.cpp_CDemonActor_testLineIntersection_FUN_0040a420 at 0040a43a
;   core_actor.cpp_CDemonActor_testPointInCylinder_FUN_0040a390 at 0040a39b
;   core_door.cpp_CDoor_process_FUN_00455640 at 004559d0
;   core_flame.cpp_CFlame_process_FUN_0048d0c0 at 0048d26d
;   core_pendulum.cpp_CPendulum_testCollisionWithActor_FUN_004f2e60 at 004f2e75
;   core_platfrm.cpp_CPlatform_FUN_004f7360 at 004f7384
;   core_platfrm.cpp_CPlatform_process_FUN_004f6170 at 004f684e
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80 at 0050ee61
;   core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0 at 00510125
;   core_setcolid.cpp_CDemonSet_testCylinderCollision_FUN_00510a40 at 00510ba8
;   ... and 5 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00511990
        ;   Label: core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990
    MOV dword ptr [EAX + 0x20],0x0      ; 00511994
    MOV dword ptr [EAX + 0x24],0x0      ; 0051199b
    MOV dword ptr [EAX],0x0             ; 005119a2
    RET                                 ; 005119a8

