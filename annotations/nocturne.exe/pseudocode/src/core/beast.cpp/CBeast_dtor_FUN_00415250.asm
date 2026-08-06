; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBeast * __cdecl core_beast_cpp_CBeast_dtor_FUN_00415250(CBeast *this_ptr,uint flags)
;
; Parameters:
; CBeast *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBeastTypeInfo_0059a560
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor_FUN_0040fe30
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415250
        ;   Label: core_beast.cpp_CBeast_dtor_FUN_00415250
    MOV EBX,dword ptr [ESP + 0x8]       ; 00415251
    TEST byte ptr [ESP + 0xc],0x4       ; 00415255
    JNZ 0x004152e1                      ; 0041525a
        ;   XREF to: 004152e1 (CONDITIONAL_JUMP)  ; LAB_004152e1
    PUSH 0x0                            ; 00415260
    ADD EBX,0x33c4                      ; 00415262
    PUSH EBX                            ; 00415268
    CALL core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 ; 00415269
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_0040fe50(CFlame * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041526e
    PUSH 0x0                            ; 00415271
    SUB EAX,0x4b0                       ; 00415273
    PUSH EAX                            ; 00415278
    CALL core_armour.cpp_SFire_arrdtor_FUN_0040fe30 ; 00415279
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_0040fe30(SFire * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041527e
    PUSH 0x0                            ; 00415281
    SUB EAX,0x20c                       ; 00415283
    PUSH EAX                            ; 00415288
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 00415289
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041528e
    PUSH 0x0                            ; 00415291
    SUB EAX,0xb4                        ; 00415293
    PUSH EAX                            ; 00415298
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 00415299
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041529e
    PUSH 0x0                            ; 004152a1
    SUB EAX,0x1c8                       ; 004152a3
    PUSH EAX                            ; 004152a8
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 004152a9
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004152ae
    PUSH 0x0                            ; 004152b1
    SUB EAX,0x293c                      ; 004152b3
    PUSH EAX                            ; 004152b8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 004152b9
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004152be
    PUSH 0x1                            ; 004152c1
    LEA EBX,[EAX + 0xfffffeb0]          ; 004152c3
    PUSH EBX                            ; 004152c9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004152ca
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004152cf
    MOV DL,byte ptr [ESP + 0xc]         ; 004152d2
    MOV EBX,EAX                         ; 004152d6
    TEST DL,0x2                         ; 004152d8
    JNZ 0x004152fc                      ; 004152db
        ;   XREF to: 004152fc (CONDITIONAL_JUMP)  ; LAB_004152fc
    MOV EAX,EBX                         ; 004152dd
    POP EBX                             ; 004152df
    RET                                 ; 004152e0
    PUSH 0x59a560                       ; 004152e1 | g_CBeastTypeInfo_0059a560
        ;   Label: LAB_004152e1
    PUSH EBX                            ; 004152e6
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004152e7
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004152ec
    PUSH EAX                            ; 004152ef
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004152f0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004152f5
    MOV EAX,EBX                         ; 004152f8
    POP EBX                             ; 004152fa
    RET                                 ; 004152fb
    PUSH EAX                            ; 004152fc
        ;   Label: LAB_004152fc
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 004152fd
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 00415302
    MOV EAX,EBX                         ; 00415305
    POP EBX                             ; 00415307
    RET                                 ; 00415308

