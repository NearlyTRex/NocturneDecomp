; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance *this_ptr,uint flags)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[38]:
;   core_armour.cpp_CArmour_dtor_FUN_0040fc30 at 0040fc99
;   core_armour.cpp_CEnemy_dtor_FUN_0040fcf0 at 0040fd59
;   core_batcreat.cpp_CBatCreature_dtor_FUN_004132c0 at 00413329
;   core_batman.cpp_CBatman_dtor_FUN_00414c60 at 00414cc9
;   core_beast.cpp_CBeast_dtor_FUN_00415250 at 004152b9
;   core_biggs.cpp_CBiggs_dtor_FUN_00415a30 at 00415aa9
;   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041a400 at 0041a479
;   core_bride.cpp_CBride_dtor_FUN_00420f20 at 00420f89
;   core_bugs.cpp_CBugs_dtor_FUN_00423d90 at 00423e09
;   core_charactr.cpp_CCharacter_dtor_FUN_0042b5d0 at 0042b639
;   ... and 28 more
;
; Referenced Globals:
;   CMotionController_vtable g_CDeformableModelInstanceVTable
;   WatcomTypeInfo g_CDeformableModelInstanceTypeInfo_005a1f00
;
; Called Functions:
;   core_curtain.cpp_CVector3f_arrdtor_FUN_0043f9a0
;   core_motion.cpp_CMotionController_dtor_FUN_004e1150
;   core_skeleton.cpp_CDeformableModelInstance_FUN_0051b7d0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b6e0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0051b6e1
    TEST byte ptr [ESP + 0xc],0x4       ; 0051b6e5
    JNZ 0x0051b727                      ; 0051b6ea
        ;   XREF to: 0051b727 (CONDITIONAL_JUMP)  ; LAB_0051b727
    PUSH EBX                            ; 0051b6ec
    MOV dword ptr [EBX + 0x50],0x5a1ed4 ; 0051b6ed | g_CDeformableModelInstanceVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0051b7d0 ; 0051b6f4
        ;   XREF to: 0051b7d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_FUN_0051b7d0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051b6f9
    PUSH 0x0                            ; 0051b6fc
    ADD EBX,0x58                        ; 0051b6fe
    PUSH EBX                            ; 0051b701
    CALL core_curtain.cpp_CVector3f_arrdtor_FUN_0043f9a0 ; 0051b702
        ;   XREF to: 0043f9a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_curtain.cpp_CVector3f_arrdtor_FUN_0043f9a0(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051b707
    PUSH 0x1                            ; 0051b70a
    LEA EBX,[EAX + -0x58]               ; 0051b70c
    PUSH EBX                            ; 0051b70f
    CALL core_motion.cpp_CMotionController_dtor_FUN_004e1150 ; 0051b710
        ;   XREF to: 004e1150 (UNCONDITIONAL_CALL)  ; CMotionController * core_motion.cpp_CMotionController_dtor_FUN_004e1150(CMotionController * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051b715
    MOV DL,byte ptr [ESP + 0xc]         ; 0051b718
    MOV EBX,EAX                         ; 0051b71c
    TEST DL,0x2                         ; 0051b71e
    JNZ 0x0051b742                      ; 0051b721
        ;   XREF to: 0051b742 (CONDITIONAL_JUMP)  ; LAB_0051b742
    MOV EAX,EBX                         ; 0051b723
    POP EBX                             ; 0051b725
    RET                                 ; 0051b726
    PUSH 0x5a1f00                       ; 0051b727 | g_CDeformableModelInstanceTypeInfo_005a1f00
        ;   Label: LAB_0051b727
    PUSH EBX                            ; 0051b72c
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0051b72d
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0051b732
    PUSH EAX                            ; 0051b735
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0051b736
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0051b73b
    MOV EAX,EBX                         ; 0051b73e
    POP EBX                             ; 0051b740
    RET                                 ; 0051b741
    PUSH EAX                            ; 0051b742
        ;   Label: LAB_0051b742
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 0051b743
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 0051b748
    MOV EAX,EBX                         ; 0051b74b
    POP EBX                             ; 0051b74d
    RET                                 ; 0051b74e

