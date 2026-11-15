; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __stack2_esi core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408d30(CDemonActor *this_ptr,CVector3f *input_vector,CVector3f *output_vector)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   input_vector
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[18]:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_004093a0 at 004094fa
;   core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_0041cb40 at 0041cb7b
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429420 at 004297c4
;   core_charactr.cpp_CCharacter_followActor_FUN_00428260 at 004283cc
;   core_charactr.cpp_CCharacter_setOrientation_FUN_00429d60 at 00429ddc
;   core_doc.cpp_FUN_00450c60 at 004522f4
;   core_fire.cpp_CBulletHole_init_FUN_00493a40 at 00493c9b
;   core_fire.cpp_CFireEffect_traceLaser_FUN_0049db20 at 0049ddd0
;   core_flies.cpp_CFlies_process_FUN_004a6c30 at 004a6cd1
;   core_gabriela.cpp_CGabriella_process_FUN_004ad640 at 004addf5
;   ... and 8 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_004495a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408d30
        ;   Label: core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408d30
    PUSH EDI                            ; 00408d31
    SUB ESP,0xc                         ; 00408d32
    MOV EBX,ESI                         ; 00408d35
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00408d37
    MOV ESI,dword ptr [ESP + 0x18]      ; 00408d3b
    PUSH EDX                            ; 00408d3f
    ADD ESI,0x3c                        ; 00408d40
    PUSH ESI                            ; 00408d43
    LEA ESI,[ESP + 0x8]                 ; 00408d44
    MOV EDI,EBX                         ; 00408d48
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_004495a0 ; 00408d4a
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_004495a0(CMatrix3x3f * this_ptr, CVector3f * input, CVector3f * output)
    LEA ESI,[ESP + 0x8]                 ; 00408d4f
    ADD ESP,0x8                         ; 00408d53
    MOVSD ES:EDI,ESI                    ; 00408d56
    MOVSD ES:EDI,ESI                    ; 00408d57
    MOVSD ES:EDI,ESI                    ; 00408d58
    MOV EAX,EBX                         ; 00408d59
    ADD ESP,0xc                         ; 00408d5b
    POP EDI                             ; 00408d5e
    POP EBX                             ; 00408d5f
    RET                                 ; 00408d60

