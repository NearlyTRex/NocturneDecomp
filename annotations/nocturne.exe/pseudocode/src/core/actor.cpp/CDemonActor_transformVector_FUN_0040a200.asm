; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[54]:
;   core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_0040a540 at 0040a593
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740 at 0040a901
;   core_actor.cpp_FUN_0040b300 at 0040b3aa
;   core_baron.cpp_CBaron_attachToOwner_FUN_00410a80 at 00410aeb
;   core_baron.cpp_CBaron_updateMountedPosition_FUN_00410bf0 at 00410c36
;   core_batman.cpp_CBatman_processDismemberment_FUN_004145f0 at 00414903
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40 at 00416fcd
;   core_boxactor.cpp_CBoxActor_process_FUN_0041e5e0 at 0041e937
;   core_charactr.cpp_CCharacter_dropCarriedObject_FUN_00429170 at 004291a3
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 at 0042506c
;   ... and 44 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a200
        ;   Label: core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040a201
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040a205
    PUSH EDX                            ; 0040a209
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040a20a
    PUSH EBX                            ; 0040a20e
    ADD EAX,0x3c                        ; 0040a20f
    PUSH EAX                            ; 0040a212
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0040a213
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    ADD ESP,0xc                         ; 0040a218
    MOV EAX,EBX                         ; 0040a21b
    POP EBX                             ; 0040a21d
    RET                                 ; 0040a21e

