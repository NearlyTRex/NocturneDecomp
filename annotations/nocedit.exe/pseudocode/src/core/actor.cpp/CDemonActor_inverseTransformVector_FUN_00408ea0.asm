; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor *this_ptr,CVector3f *output_vector,CVector3f *input_vector)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_vector
; CVector3f *      Stack[0xc]:4   input_vector
;
; XREF[18]:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 at 0040956a
;   core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_00422390 at 004223ba
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 at 0042d777
;   core_charactr.cpp_CCharacter_followActor_FUN_0042c5f0 at 0042c731
;   core_charactr.cpp_CCharacter_setOrientation_FUN_0042ded0 at 0042df32
;   core_fire.cpp_CBulletHole_init_FUN_004bf7f0 at 004bf9ca
;   core_fire.cpp_CFireEffect_traceLaser_FUN_004c8230 at 004c8487
;   core_flies.cpp_CFlies_process_FUN_004cbf00 at 004cc014
;   core_gabriela.cpp_CGabriella_process_FUN_004d2ea0 at 004d35c1
;   core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004f2c40 at 004f2d12
;   ... and 8 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408ea0
        ;   Label: core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
    MOV EBX,dword ptr [ESP + 0xc]       ; 00408ea1
    MOV EDX,dword ptr [ESP + 0x10]      ; 00408ea5
    PUSH EDX                            ; 00408ea9
    MOV EAX,dword ptr [ESP + 0xc]       ; 00408eaa
    PUSH EBX                            ; 00408eae
    ADD EAX,0x3c                        ; 00408eaf
    PUSH EAX                            ; 00408eb2
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 00408eb3
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00408eb8
    MOV EAX,EBX                         ; 00408ebb
    POP EBX                             ; 00408ebd
    RET                                 ; 00408ebe

