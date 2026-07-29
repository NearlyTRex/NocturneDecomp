; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTVBat * __cdecl core_tvbat_cpp_CTVBat_dtor_FUN_0054c190(CTVBat *this_ptr,uint flags)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTVBatTypeInfo_005a3a40
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor_FUN_0040fe30
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c190
        ;   Label: core_tvbat.cpp_CTVBat_dtor_FUN_0054c190
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054c191
    TEST byte ptr [ESP + 0xc],0x4       ; 0054c195
    JNZ 0x0054c221                      ; 0054c19a
        ;   XREF to: 0054c221 (CONDITIONAL_JUMP)  ; LAB_0054c221
    PUSH 0x0                            ; 0054c1a0
    ADD EBX,0x33c4                      ; 0054c1a2
    PUSH EBX                            ; 0054c1a8
    CALL core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 ; 0054c1a9
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_0040fe50(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 0054c1ae
    PUSH 0x0                            ; 0054c1b1
    SUB EAX,0x4b0                       ; 0054c1b3
    PUSH EAX                            ; 0054c1b8
    CALL core_armour.cpp_SFire_arrdtor_FUN_0040fe30 ; 0054c1b9
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_0040fe30(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 0054c1be
    PUSH 0x0                            ; 0054c1c1
    SUB EAX,0x20c                       ; 0054c1c3
    PUSH EAX                            ; 0054c1c8
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 0054c1c9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 0054c1ce
    PUSH 0x0                            ; 0054c1d1
    SUB EAX,0xb4                        ; 0054c1d3
    PUSH EAX                            ; 0054c1d8
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 0054c1d9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 0054c1de
    PUSH 0x0                            ; 0054c1e1
    SUB EAX,0x1c8                       ; 0054c1e3
    PUSH EAX                            ; 0054c1e8
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 0054c1e9
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054c1ee
    PUSH 0x0                            ; 0054c1f1
    SUB EAX,0x293c                      ; 0054c1f3
    PUSH EAX                            ; 0054c1f8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 0054c1f9
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054c1fe
    PUSH 0x1                            ; 0054c201
    LEA EBX,[EAX + 0xfffffeb0]          ; 0054c203
    PUSH EBX                            ; 0054c209
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0054c20a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054c20f
    MOV DL,byte ptr [ESP + 0xc]         ; 0054c212
    MOV EBX,EAX                         ; 0054c216
    TEST DL,0x2                         ; 0054c218
    JNZ 0x0054c23c                      ; 0054c21b
        ;   XREF to: 0054c23c (CONDITIONAL_JUMP)  ; LAB_0054c23c
    MOV EAX,EBX                         ; 0054c21d
    POP EBX                             ; 0054c21f
    RET                                 ; 0054c220
    PUSH 0x5a3a40                       ; 0054c221 | g_CTVBatTypeInfo_005a3a40
        ;   Label: LAB_0054c221
    PUSH EBX                            ; 0054c226
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0054c227
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0054c22c
    PUSH EAX                            ; 0054c22f
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0054c230
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0054c235
    MOV EAX,EBX                         ; 0054c238
    POP EBX                             ; 0054c23a
    RET                                 ; 0054c23b
    PUSH EAX                            ; 0054c23c
        ;   Label: LAB_0054c23c
    CALL crt_unknown.c_FUN_00564494     ; 0054c23d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 0054c242
    MOV EAX,EBX                         ; 0054c245
    POP EBX                             ; 0054c247
    RET                                 ; 0054c248

