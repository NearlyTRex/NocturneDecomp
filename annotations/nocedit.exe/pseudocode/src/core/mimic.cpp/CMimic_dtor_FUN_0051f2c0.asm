; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMimic * __cdecl core_mimic_cpp_CMimic_dtor_FUN_0051f2c0(CMimic *this_ptr,uint flags)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   TerminatedCString s_core_mimic_cpp_0063855b
;   CEnemy_full_vtable g_CMimicVTable
;   WatcomTypeInfo g_CMimicTypeInfo
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_armour.cpp_CFlame_arrdtor_FUN_00412720
;   core_armour.cpp_CVector3f_arrdtor_FUN_004126e0
;   core_armour.cpp_SFire_arrdtor_FUN_00412700
;   core_cloth.cpp_CCloth_dtor_FUN_00438c00
;   core_cloth.cpp_CClothList_dtor_FUN_0043bf80
;   core_morph.cpp_CMorph_dtor_FUN_0052b330
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f2c0
        ;   Label: core_mimic.cpp_CMimic_dtor_FUN_0051f2c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0051f2c1
    TEST byte ptr [ESP + 0xc],0x4       ; 0051f2c5
    JNZ 0x0051f3b7                      ; 0051f2ca
        ;   XREF to: 0051f3b7 (CONDITIONAL_JUMP)  ; LAB_0051f3b7
    MOV EDX,0x63855b                    ; 0051f2d0 | = "..\\core\\mimic.cpp"
    MOV ECX,0xa9                        ; 0051f2d5
    MOV EAX,dword ptr [EBX + 0x4ca54]   ; 0051f2da
    MOV dword ptr [EBX + 0x154],0x661424 ; 0051f2e0 | g_CMimicVTable
    MOV dword ptr [0x0067d20c],EDX      ; 0051f2ea | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ECX      ; 0051f2f0 | g_CurrentDebugLine
    TEST EAX,EAX                        ; 0051f2f6
    JZ 0x0051f30c                       ; 0051f2f8
        ;   XREF to: 0051f30c (CONDITIONAL_JUMP)  ; LAB_0051f30c
    PUSH 0x2                            ; 0051f2fa
    MOV EDX,dword ptr [EAX + 0x154]     ; 0051f2fc
    PUSH EAX                            ; 0051f302
    CALL dword ptr [EDX + 0xe4]         ; 0051f303
    ADD ESP,0x8                         ; 0051f309
    PUSH 0x0                            ; 0051f30c
        ;   Label: LAB_0051f30c
    ADD EBX,0x4be24                     ; 0051f30e
    PUSH EBX                            ; 0051f314
    MOV dword ptr [EBX + 0xc30],0x0     ; 0051f315
    CALL core_morph.cpp_CMorph_dtor_FUN_0052b330 ; 0051f31f
        ;   XREF to: 0052b330 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_0052b330(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051f324
    PUSH 0x0                            ; 0051f327
    SUB EAX,0x3fea0                     ; 0051f329
    PUSH EAX                            ; 0051f32e
    CALL core_cloth.cpp_CCloth_dtor_FUN_00438c00 ; 0051f32f
        ;   XREF to: 00438c00 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_dtor_FUN_00438c00(CCloth * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051f334
    PUSH 0x0                            ; 0051f337
    SUB EAX,0x8bb8                      ; 0051f339
    PUSH EAX                            ; 0051f33e
    CALL core_armour.cpp_CFlame_arrdtor_FUN_00412720 ; 0051f33f
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_00412720(CFlame * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051f344
    PUSH 0x0                            ; 0051f347
    SUB EAX,0x4b0                       ; 0051f349
    PUSH EAX                            ; 0051f34e
    CALL core_armour.cpp_SFire_arrdtor_FUN_00412700 ; 0051f34f
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_00412700(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 0051f354
    PUSH 0x0                            ; 0051f357
    SUB EAX,0x20c                       ; 0051f359
    PUSH EAX                            ; 0051f35e
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 0051f35f
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051f364
    PUSH 0x0                            ; 0051f367
    SUB EAX,0xb4                        ; 0051f369
    PUSH EAX                            ; 0051f36e
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 0051f36f
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051f374
    PUSH 0x0                            ; 0051f377
    SUB EAX,0x1c8                       ; 0051f379
    PUSH EAX                            ; 0051f37e
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 0051f37f
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051f384
    PUSH 0x0                            ; 0051f387
    SUB EAX,0x293c                      ; 0051f389
    PUSH EAX                            ; 0051f38e
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 0051f38f
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051f394
    PUSH 0x1                            ; 0051f397
    LEA EBX,[EAX + 0xfffffea8]          ; 0051f399
    PUSH EBX                            ; 0051f39f
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0051f3a0
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051f3a5
    MOV DL,byte ptr [ESP + 0xc]         ; 0051f3a8
    MOV EBX,EAX                         ; 0051f3ac
    TEST DL,0x2                         ; 0051f3ae
    JNZ 0x0051f3d2                      ; 0051f3b1
        ;   XREF to: 0051f3d2 (CONDITIONAL_JUMP)  ; LAB_0051f3d2
    MOV EAX,EBX                         ; 0051f3b3
    POP EBX                             ; 0051f3b5
    RET                                 ; 0051f3b6
    PUSH 0x661590                       ; 0051f3b7 | g_CMimicTypeInfo
        ;   Label: LAB_0051f3b7
    PUSH EBX                            ; 0051f3bc
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 0051f3bd
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0051f3c2
    PUSH EAX                            ; 0051f3c5
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0051f3c6
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0051f3cb
    MOV EAX,EBX                         ; 0051f3ce
    POP EBX                             ; 0051f3d0
    RET                                 ; 0051f3d1
    PUSH EAX                            ; 0051f3d2
        ;   Label: LAB_0051f3d2
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 0051f3d3
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0051f3d8
    MOV EAX,EBX                         ; 0051f3db
    POP EBX                             ; 0051f3dd
    RET                                 ; 0051f3de

