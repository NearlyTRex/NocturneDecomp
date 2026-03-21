; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor *this_ptr,CVector3f *output,CVector3f *input)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output
; CVector3f *      Stack[0xc]:4   input
;
; XREF[49]:
;   core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_00409270 at 004092c3
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 at 0040a2cd
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 at 00409631
;   core_baron.cpp_CBaron_attachToOwner_FUN_00413470 at 004134db
;   core_baron.cpp_CBaron_updateMountedPosition_FUN_004135e0 at 00413626
;   core_batman.cpp_CBatman_processDismemberment_FUN_00417660 at 00417973
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050 at 0041a2dd
;   core_boxactor.cpp_CBoxActor_process_FUN_004219e0 at 00421d37
;   core_charactr.cpp_CCharacter_dropCarriedObject_FUN_0042cfe0 at 0042d013
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 at 00428f5c
;   ... and 39 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408e80
        ;   Label: core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
    MOV EBX,dword ptr [ESP + 0xc]       ; 00408e81
    MOV EDX,dword ptr [ESP + 0x10]      ; 00408e85
    PUSH EDX                            ; 00408e89
    MOV EAX,dword ptr [ESP + 0xc]       ; 00408e8a
    PUSH EBX                            ; 00408e8e
    ADD EAX,0x3c                        ; 00408e8f
    PUSH EAX                            ; 00408e92
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 00408e93
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00408e98
    MOV EAX,EBX                         ; 00408e9b
    POP EBX                             ; 00408e9d
    RET                                 ; 00408e9e

