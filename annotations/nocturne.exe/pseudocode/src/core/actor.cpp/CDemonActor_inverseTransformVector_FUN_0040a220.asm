; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220(CDemonActor *this_ptr,CVector3f *output_vector,CVector3f *input_vector)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_vector
; CVector3f *      Stack[0xc]:4   input_vector
;
; XREF[18]:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740 at 0040a83a
;   core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_0041ef90 at 0041efba
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429730 at 00429907
;   core_charactr.cpp_CCharacter_followActor_FUN_00428780 at 004288c1
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 at 0042578b
;   core_charactr.cpp_CCharacter_setOrientation_FUN_0042a060 at 0042a0c2
;   core_fire.cpp_CBulletHole_init_FUN_00482c80 at 00482e5a
;   core_fire.cpp_CFireEffect_traceLaser_FUN_0048b6f0 at 0048b947
;   core_flies.cpp_CFlies_process_FUN_0048f090 at 0048f1a4
;   core_gabriela.cpp_CGabriella_process_FUN_00495a20 at 00496141
;   ... and 8 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a220
        ;   Label: core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040a221
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040a225
    PUSH EDX                            ; 0040a229
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040a22a
    PUSH EBX                            ; 0040a22e
    ADD EAX,0x3c                        ; 0040a22f
    PUSH EAX                            ; 0040a232
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 0040a233
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0040a238
    MOV EAX,EBX                         ; 0040a23b
    POP EBX                             ; 0040a23d
    RET                                 ; 0040a23e

