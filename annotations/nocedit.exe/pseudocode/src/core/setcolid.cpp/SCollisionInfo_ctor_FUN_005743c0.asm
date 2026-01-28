; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SCollisionInfo * __cdecl core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(SCollisionInfo *this_ptr)
;
; Parameters:
; SCollisionInfo * Stack[0x4]:4   this_ptr
;
; XREF[16]:
;   core_actor.cpp_CDemonActor_testLineIntersection_FUN_00409150 at 0040916a
;   core_actor.cpp_CDemonActor_testPointInCylinder_FUN_004090c0 at 004090cb
;   core_actor.cpp_CDemonActor_testRayIntersection_FUN_004093f0 at 004093fb
;   core_door.cpp_CDoor_process_FUN_004800c0 at 00480450
;   core_flame.cpp_FUN_004c9c00 at 004c9dad
;   core_pendulum.cpp_FUN_005495c0 at 005495d5
;   core_platfrm.cpp_FUN_0054cc30 at 0054d30e
;   core_platfrm.cpp_FUN_0054df80 at 0054dfa4
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 at 00571891
;   core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10 at 00572b55
;   ... and 6 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005743c0
        ;   Label: core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
    MOV dword ptr [EAX + 0x20],0x0      ; 005743c4
    MOV dword ptr [EAX + 0x24],0x0      ; 005743cb
    MOV dword ptr [EAX],0x0             ; 005743d2
    RET                                 ; 005743d8

