; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPassenger * __cdecl core_passngr_cpp_CPassenger_dtor_FUN_00545c10(CPassenger *this_ptr,uint flags)
;
; Parameters:
; CPassenger *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   TerminatedCString s_core_passngr_cpp_0063e7b0
;   CDemonActor_vtable g_CPassengerVTable
;   WatcomTypeInfo g_CPassengerTypeInfo
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_armour.cpp_CFlame_arrdtor_FUN_00412720
;   core_armour.cpp_CVector3f_arrdtor_FUN_004126e0
;   core_armour.cpp_SFire_arrdtor_FUN_00412700
;   core_cloth.cpp_CClothList_dtor_FUN_0043bf80
;   core_morph.cpp_CMorph_dtor_FUN_0052b330
;   core_path.cpp_CPathMap_dtor_FUN_005464d0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545c10
        ;   Label: core_passngr.cpp_CPassenger_dtor_FUN_00545c10
    PUSH ESI                            ; 00545c11
    MOV EBX,dword ptr [ESP + 0xc]       ; 00545c12
    TEST byte ptr [ESP + 0x10],0x4      ; 00545c16
    JNZ 0x00545d03                      ; 00545c1b
        ;   XREF to: 00545d03 (CONDITIONAL_JUMP)  ; LAB_00545d03
    MOV EDX,dword ptr [EBX + 0x1f810]   ; 00545c21
    MOV dword ptr [EBX + 0x154],0x661f64 ; 00545c27 | g_CPassengerVTable
    TEST EDX,EDX                        ; 00545c31
    JZ 0x00545c61                       ; 00545c33
        ;   XREF to: 00545c61 (CONDITIONAL_JUMP)  ; LAB_00545c61
    MOV ESI,0x50                        ; 00545c35
    MOV ECX,0x63e7b0                    ; 00545c3a | = "..\\core\\passngr.cpp"
    MOV EAX,EDX                         ; 00545c3f
    MOV dword ptr [0x02f0d944],ESI      ; 00545c41 | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],ECX      ; 00545c47 | g_CurrentDebugFilename
    JZ 0x00545c61                       ; 00545c4d
        ;   XREF to: 00545c61 (CONDITIONAL_JUMP)  ; LAB_00545c61
    PUSH 0x2                            ; 00545c4f
    MOV EDX,dword ptr [EDX + 0x154]     ; 00545c51
    PUSH EAX                            ; 00545c57
    CALL dword ptr [EDX + 0xe4]         ; 00545c58
    ADD ESP,0x8                         ; 00545c5e
    PUSH 0x0                            ; 00545c61
        ;   Label: LAB_00545c61
    ADD EBX,0x1f814                     ; 00545c63
    PUSH EBX                            ; 00545c69
    CALL core_morph.cpp_CMorph_dtor_FUN_0052b330 ; 00545c6a
        ;   XREF to: 0052b330 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_0052b330(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00545c6f
    PUSH 0x0                            ; 00545c72
    SUB EAX,0x139f0                     ; 00545c74
    PUSH EAX                            ; 00545c79
    CALL core_path.cpp_CPathMap_dtor_FUN_005464d0 ; 00545c7a
        ;   XREF to: 005464d0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_005464d0(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00545c7f
    PUSH 0x0                            ; 00545c82
    SUB EAX,0x8a58                      ; 00545c84
    PUSH EAX                            ; 00545c89
    CALL core_armour.cpp_CFlame_arrdtor_FUN_00412720 ; 00545c8a
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_00412720(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 00545c8f
    PUSH 0x0                            ; 00545c92
    SUB EAX,0x4b0                       ; 00545c94
    PUSH EAX                            ; 00545c99
    CALL core_armour.cpp_SFire_arrdtor_FUN_00412700 ; 00545c9a
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_00412700(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 00545c9f
    PUSH 0x0                            ; 00545ca2
    SUB EAX,0x20c                       ; 00545ca4
    PUSH EAX                            ; 00545ca9
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 00545caa
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 00545caf
    PUSH 0x0                            ; 00545cb2
    SUB EAX,0xb4                        ; 00545cb4
    PUSH EAX                            ; 00545cb9
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_004126e0 ; 00545cba
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 00545cbf
    PUSH 0x0                            ; 00545cc2
    SUB EAX,0x1c8                       ; 00545cc4
    PUSH EAX                            ; 00545cc9
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 00545cca
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00545ccf
    PUSH 0x0                            ; 00545cd2
    SUB EAX,0x293c                      ; 00545cd4
    PUSH EAX                            ; 00545cd9
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 00545cda
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00545cdf
    PUSH 0x1                            ; 00545ce2
    LEA EBX,[EAX + 0xfffffea8]          ; 00545ce4
    PUSH EBX                            ; 00545cea
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00545ceb
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00545cf0
    MOV DL,byte ptr [ESP + 0x10]        ; 00545cf3
    MOV EBX,EAX                         ; 00545cf7
    TEST DL,0x2                         ; 00545cf9
    JNZ 0x00545d1f                      ; 00545cfc
        ;   XREF to: 00545d1f (CONDITIONAL_JUMP)  ; LAB_00545d1f
    MOV EAX,EBX                         ; 00545cfe
    POP ESI                             ; 00545d00
    POP EBX                             ; 00545d01
    RET                                 ; 00545d02
    PUSH 0x6620c0                       ; 00545d03 | g_CPassengerTypeInfo
        ;   Label: LAB_00545d03
    PUSH EBX                            ; 00545d08
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 00545d09
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00545d0e
    PUSH EAX                            ; 00545d11
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00545d12
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00545d17
    MOV EAX,EBX                         ; 00545d1a
    POP ESI                             ; 00545d1c
    POP EBX                             ; 00545d1d
    RET                                 ; 00545d1e
    PUSH EAX                            ; 00545d1f
        ;   Label: LAB_00545d1f
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 00545d20
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00545d25
    MOV EAX,EBX                         ; 00545d28
    POP ESI                             ; 00545d2a
    POP EBX                             ; 00545d2b
    RET                                 ; 00545d2c

