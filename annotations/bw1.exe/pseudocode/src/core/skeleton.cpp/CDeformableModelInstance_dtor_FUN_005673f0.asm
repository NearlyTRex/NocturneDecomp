; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance *this_ptr,uint flags)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[50]:
;   core_armour.cpp_CArmour_dtor_FUN_0040ecc0 at 0040ecf5
;   core_armour.cpp_CEnemy_dtor_FUN_0040ed50 at 0040ed85
;   core_batcreat.cpp_CBatCreature_dtor_FUN_00412690 at 004126c5
;   core_batman.cpp_CBatman_dtor_FUN_00414320 at 00414355
;   core_beast.cpp_CBeast_dtor_FUN_00414900 at 00414935
;   core_biggs.cpp_CBiggs_dtor_FUN_004150f0 at 00415135
;   core_bird.cpp_CBird_dtor_FUN_004159f0 at 00415a35
;   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041d850 at 0041d885
;   core_bride.cpp_CBride_dtor_FUN_00424e90 at 00424ec5
;   core_bugs.cpp_CBugs_dtor_FUN_00428180 at 004281b5
;   ... and 40 more
;
; Referenced Globals:
;   WatcomTypeInfo g_CDeformableModelInstanceTypeInfo
;   void* g_CDeformableModelInstanceVTable = 005673f0
;
; Called Functions:
;   core_motion.cpp_CMotionController_dtor_FUN_00524200
;   core_skeleton.cpp_CDeformableModelInstance_free_FUN_005674d0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005673f0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005673f1
    TEST byte ptr [ESP + 0xc],0x4       ; 005673f5
    JNZ 0x00567426                      ; 005673fa
        ;   XREF to: 00567426 (CONDITIONAL_JUMP)  ; LAB_00567426
    PUSH EBX                            ; 005673fc
    MOV dword ptr [EBX + 0x50],0x6058b4 ; 005673fd | g_CDeformableModelInstanceVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_free_FUN_005674d0 ; 00567404
        ;   XREF to: 005674d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_free_FUN_005674d0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00567409
    PUSH 0x1                            ; 0056740c
    PUSH EBX                            ; 0056740e
    CALL core_motion.cpp_CMotionController_dtor_FUN_00524200 ; 0056740f
        ;   XREF to: 00524200 (UNCONDITIONAL_CALL)  ; CMotionController * core_motion.cpp_CMotionController_dtor_FUN_00524200(CMotionController * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00567414
    MOV DL,byte ptr [ESP + 0xc]         ; 00567417
    MOV EBX,EAX                         ; 0056741b
    TEST DL,0x2                         ; 0056741d
    JNZ 0x00567441                      ; 00567420
        ;   XREF to: 00567441 (CONDITIONAL_JUMP)  ; LAB_00567441
    MOV EAX,EBX                         ; 00567422
    POP EBX                             ; 00567424
    RET                                 ; 00567425
    PUSH 0x600810                       ; 00567426 | g_CDeformableModelInstanceTypeInfo
        ;   Label: LAB_00567426
    PUSH EBX                            ; 0056742b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0056742c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00567431
    PUSH EAX                            ; 00567434
    CALL crt_unknown.c_FUN_005c0336     ; 00567435
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0056743a
    MOV EAX,EBX                         ; 0056743d
    POP EBX                             ; 0056743f
    RET                                 ; 00567440
    PUSH EAX                            ; 00567441
        ;   Label: LAB_00567441
    CALL crt_unknown.c_FUN_005c0344     ; 00567442
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00567447
    MOV EAX,EBX                         ; 0056744a
    POP EBX                             ; 0056744c
    RET                                 ; 0056744d

