; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBeast * __cdecl core_beast_cpp_CBeast_dtor_FUN_00414900(CBeast *this_ptr,uint flags)
;
; Parameters:
; CBeast *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBeastTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_armour.cpp_FUN_0040ee30
;   core_cloth.cpp_CClothList_dtor_FUN_00441ca0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414900
        ;   Label: core_beast.cpp_CBeast_dtor_FUN_00414900
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414901
    TEST byte ptr [ESP + 0xc],0x4       ; 00414905
    JNZ 0x0041495d                      ; 0041490a
        ;   XREF to: 0041495d (CONDITIONAL_JUMP)  ; LAB_0041495d
    PUSH 0x0                            ; 0041490c
    ADD EBX,0x35dc                      ; 0041490e
    PUSH EBX                            ; 00414914
    CALL core_armour.cpp_FUN_0040ee30   ; 00414915
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 0041491a
    PUSH 0x0                            ; 0041491d
    SUB EAX,0x93c                       ; 0041491f
    PUSH EAX                            ; 00414924
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 00414925
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041492a
    PUSH 0x0                            ; 0041492d
    SUB EAX,0x2b48                      ; 0041492f
    PUSH EAX                            ; 00414934
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 00414935
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041493a
    PUSH 0x1                            ; 0041493d
    LEA EBX,[EAX + 0xfffffea8]          ; 0041493f
    PUSH EBX                            ; 00414945
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 00414946
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041494b
    MOV DL,byte ptr [ESP + 0xc]         ; 0041494e
    MOV EBX,EAX                         ; 00414952
    TEST DL,0x2                         ; 00414954
    JNZ 0x00414978                      ; 00414957
        ;   XREF to: 00414978 (CONDITIONAL_JUMP)  ; LAB_00414978
    MOV EAX,EBX                         ; 00414959
    POP EBX                             ; 0041495b
    RET                                 ; 0041495c
    PUSH 0x5fc580                       ; 0041495d | g_CBeastTypeInfo
        ;   Label: LAB_0041495d
    PUSH EBX                            ; 00414962
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00414963
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00414968
    PUSH EAX                            ; 0041496b
    CALL crt_unknown.c_FUN_005c0336     ; 0041496c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00414971
    MOV EAX,EBX                         ; 00414974
    POP EBX                             ; 00414976
    RET                                 ; 00414977
    PUSH EAX                            ; 00414978
        ;   Label: LAB_00414978
    CALL crt_unknown.c_FUN_005c0344     ; 00414979
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0041497e
    MOV EAX,EBX                         ; 00414981
    POP EBX                             ; 00414983
    RET                                 ; 00414984

