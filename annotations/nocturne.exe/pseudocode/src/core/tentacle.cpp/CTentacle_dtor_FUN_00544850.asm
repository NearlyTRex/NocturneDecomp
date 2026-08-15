; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTentacle * __cdecl core_tentacle_cpp_CTentacle_dtor_FUN_00544850(CTentacle *this_ptr,uint flags)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTentacleTypeInfo_005a3250
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor50_FUN_0040fe30
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544850
        ;   Label: core_tentacle.cpp_CTentacle_dtor_FUN_00544850
    MOV EBX,dword ptr [ESP + 0x8]       ; 00544851
    TEST byte ptr [ESP + 0xc],0x4       ; 00544855
    JNZ 0x005448e1                      ; 0054485a
        ;   XREF to: 005448e1 (CONDITIONAL_JUMP)  ; LAB_005448e1
    PUSH 0x0                            ; 00544860
    ADD EBX,0x33c4                      ; 00544862
    PUSH EBX                            ; 00544868
    CALL core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50 ; 00544869
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50(CFlame * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054486e
    PUSH 0x0                            ; 00544871
    SUB EAX,0x4b0                       ; 00544873
    PUSH EAX                            ; 00544878
    CALL core_armour.cpp_SFire_arrdtor50_FUN_0040fe30 ; 00544879
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor50_FUN_0040fe30(SFire * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054487e
    PUSH 0x0                            ; 00544881
    SUB EAX,0x20c                       ; 00544883
    PUSH EAX                            ; 00544888
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10 ; 00544889
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054488e
    PUSH 0x0                            ; 00544891
    SUB EAX,0xb4                        ; 00544893
    PUSH EAX                            ; 00544898
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10 ; 00544899
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054489e
    PUSH 0x0                            ; 005448a1
    SUB EAX,0x1c8                       ; 005448a3
    PUSH EAX                            ; 005448a8
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 005448a9
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005448ae
    PUSH 0x0                            ; 005448b1
    SUB EAX,0x293c                      ; 005448b3
    PUSH EAX                            ; 005448b8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 005448b9
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005448be
    PUSH 0x1                            ; 005448c1
    LEA EBX,[EAX + 0xfffffeb0]          ; 005448c3
    PUSH EBX                            ; 005448c9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 005448ca
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005448cf
    MOV DL,byte ptr [ESP + 0xc]         ; 005448d2
    MOV EBX,EAX                         ; 005448d6
    TEST DL,0x2                         ; 005448d8
    JNZ 0x005448fc                      ; 005448db
        ;   XREF to: 005448fc (CONDITIONAL_JUMP)  ; LAB_005448fc
    MOV EAX,EBX                         ; 005448dd
    POP EBX                             ; 005448df
    RET                                 ; 005448e0
    PUSH 0x5a3250                       ; 005448e1 | g_CTentacleTypeInfo_005a3250
        ;   Label: LAB_005448e1
    PUSH EBX                            ; 005448e6
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 005448e7
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005448ec
    PUSH EAX                            ; 005448ef
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 005448f0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 005448f5
    MOV EAX,EBX                         ; 005448f8
    POP EBX                             ; 005448fa
    RET                                 ; 005448fb
    PUSH EAX                            ; 005448fc
        ;   Label: LAB_005448fc
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 005448fd
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 00544902
    MOV EAX,EBX                         ; 00544905
    POP EBX                             ; 00544907
    RET                                 ; 00544908

