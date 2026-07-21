; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(undefined4 *param_1)
;
;
; XREF[15]:
;   FUN_0040a420 at 0040a43a
;   FUN_004f6170 at 004f684e
;   FUN_004f7360 at 004f7384
;   FUN_00510a40 at 00510ba8
;   FUN_00533750 at 00533a06
;   core_actor.cpp_CDemonActor_testPointInCylinder_FUN_0040a390 at 0040a39b
;   core_door.cpp_CDoor_process_FUN_00455640 at 004559d0
;   core_flame.cpp_CFlame_process_FUN_0048d0c0 at 0048d26d
;   core_pendulum.cpp_CPendulum_testCollisionWithActor_FUN_004f2e60 at 004f2e75
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80 at 0050ee61
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

