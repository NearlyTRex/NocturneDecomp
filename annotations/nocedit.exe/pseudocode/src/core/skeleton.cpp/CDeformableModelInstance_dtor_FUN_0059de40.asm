; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40 (CDeformableModelInstance *this_ptr,uint d1,uint d2,uint d3,uint d4)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
; uint             Stack[0x14]:4   d4
;
; XREF[39]:
;   core_armour.cpp_CArmour_dtor_FUN_00412500 at 00412569
;   core_batcreat.cpp_CBatCreature_dtor_FUN_00416320 at 00416389
;   core_batman.cpp_CBatman_dtor_FUN_00417d60 at 00417dc9
;   core_beast.cpp_CBeast_dtor_FUN_00418490 at 004184f9
;   core_biggs.cpp_CBiggs_dtor_FUN_00418d10 at 00418d89
;   core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280 at 0041b4ca
;   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041da40 at 0041dab9
;   core_bride.cpp_CBride_dtor_FUN_00424b80 at 00424be9
;   core_bugs.cpp_CBugs_dtor_FUN_00427bd0 at 00427c49
;   core_charactr.cpp_CCharacter_dtor_FUN_0042f9f0 at 0042fa59
;   ... and 29 more
;
; Referenced Globals:
;   WatcomTypeInfo g_CDeformableModelInstanceTypeInfo
;   CMotionController_vtable g_CDeformableModelInstanceVTable
;
; Called Functions:
;   core_curtain.cpp_freeVectors_FUN_0044baf0
;   core_motion.cpp_CMotionController_dtor_FUN_0052d5a0
;   core_skeleton.cpp_CDeformableModelInstance_free_FUN_0059df40
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059de40
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059de41
    TEST byte ptr [ESP + 0xc],0x4       ; 0059de45
    JNZ 0x0059de87                      ; 0059de4a
        ;   XREF to: 0059de87 (CONDITIONAL_JUMP)  ; LAB_0059de87
    PUSH EBX                            ; 0059de4c
    MOV dword ptr [EBX + 0x50],0x662ec4 ; 0059de4d | g_CDeformableModelInstanceVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_free_FUN_0059df40 ; 0059de54
        ;   XREF to: 0059df40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_free_FUN_0059df40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059de59
    PUSH 0x0                            ; 0059de5c
    ADD EBX,0x58                        ; 0059de5e
    PUSH EBX                            ; 0059de61
    CALL core_curtain.cpp_freeVectors_FUN_0044baf0 ; 0059de62
        ;   XREF to: 0044baf0 (UNCONDITIONAL_CALL)  ; void core_curtain.cpp_freeVectors_FUN_0044baf0(CVector3f * * array)
    ADD ESP,0x8                         ; 0059de67
    PUSH 0x1                            ; 0059de6a
    LEA EBX,[EAX + -0x58]               ; 0059de6c
    PUSH EBX                            ; 0059de6f
    CALL core_motion.cpp_CMotionController_dtor_FUN_0052d5a0 ; 0059de70
        ;   XREF to: 0052d5a0 (UNCONDITIONAL_CALL)  ; CMotionController * core_motion.cpp_CMotionController_dtor_FUN_0052d5a0(CMotionController * this_ptr, uint d1)
    ADD ESP,0x8                         ; 0059de75
    MOV DL,byte ptr [ESP + 0xc]         ; 0059de78
    MOV EBX,EAX                         ; 0059de7c
    TEST DL,0x2                         ; 0059de7e
    JNZ 0x0059dea2                      ; 0059de81
        ;   XREF to: 0059dea2 (CONDITIONAL_JUMP)  ; LAB_0059dea2
    MOV EAX,EBX                         ; 0059de83
    POP EBX                             ; 0059de85
    RET                                 ; 0059de86
    PUSH 0x65af20                       ; 0059de87 | g_CDeformableModelInstanceTypeInfo
        ;   Label: LAB_0059de87
    PUSH EBX                            ; 0059de8c
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 0059de8d
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0059de92
    PUSH EAX                            ; 0059de95
    CALL crt_memory.c_free_FUN_005fe659 ; 0059de96
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0059de9b
    MOV EAX,EBX                         ; 0059de9e
    POP EBX                             ; 0059dea0
    RET                                 ; 0059dea1
    PUSH EAX                            ; 0059dea2
        ;   Label: LAB_0059dea2
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0059dea3
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0059dea8
    MOV EAX,EBX                         ; 0059deab
    POP EBX                             ; 0059dead
    RET                                 ; 0059deae

