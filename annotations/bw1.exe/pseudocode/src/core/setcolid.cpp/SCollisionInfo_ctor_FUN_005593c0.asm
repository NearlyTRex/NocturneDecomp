; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SCollisionInfo * __cdecl core_setcolid_cpp_SCollisionInfo_ctor_FUN_005593c0(SCollisionInfo *this_ptr)
;
; Parameters:
; SCollisionInfo * Stack[0x4]:4   this_ptr
;
; XREF[16]:
;   core_actor.cpp_CDemonActor_testCylinderCollision_FUN_00408cd0 at 00408cdb
;   core_actor.cpp_CDemonActor_testLineIntersection_FUN_00408d60 at 00408d7a
;   core_doc.cpp_CDoc_updateArmRecoilBlend_FUN_00473c10 at 00473d3f
;   core_door.cpp_CDoor_process_FUN_00477ab0 at 00477e67
;   core_flame.cpp_CFlame_process_FUN_004b7b90 at 004b7d51
;   core_pendulum.cpp_CPendulum_testCollisionWithActor_FUN_00536290 at 005362a5
;   core_platfrm.cpp_CPlatform_isActorOnPlatform_FUN_0053ab00 at 0053ab26
;   core_platfrm.cpp_CPlatform_process_FUN_00539810 at 00539f52
;   core_setcolid.cpp_FUN_005562c0 at 005564a1
;   core_setcolid.cpp_FUN_005578b0 at 00557a4b
;   ... and 6 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005593c0
        ;   Label: core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0
    MOV dword ptr [EAX + 0x20],0x0      ; 005593c4
    MOV dword ptr [EAX + 0x24],0x0      ; 005593cb
    MOV dword ptr [EAX],0x0             ; 005593d2
    RET                                 ; 005593d8

