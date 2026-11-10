; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CConstruct * core_construc_cpp_CConstruct_dtor_FUN_00447660(CConstruct *this_ptr,uint flags)
;
; Parameters:
; CConstruct *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CConstructTypeInfo
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

    PUSH EBX                            ; 00447660
        ;   Label: core_construc.cpp_CConstruct_dtor_FUN_00447660
    MOV EBX,dword ptr [ESP + 0x8]       ; 00447661
    TEST byte ptr [ESP + 0xc],0x4       ; 00447665
    JNZ 0x004476bd                      ; 0044766a
        ;   XREF to: 004476bd (CONDITIONAL_JUMP)  ; LAB_004476bd
    PUSH 0x0                            ; 0044766c
    ADD EBX,0x35dc                      ; 0044766e
    PUSH EBX                            ; 00447674
    CALL core_armour.cpp_FUN_0040ee30   ; 00447675
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 0044767a
    PUSH 0x0                            ; 0044767d
    SUB EAX,0x93c                       ; 0044767f
    PUSH EAX                            ; 00447684
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 00447685
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0044768a
    PUSH 0x0                            ; 0044768d
    SUB EAX,0x2b48                      ; 0044768f
    PUSH EAX                            ; 00447694
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 00447695
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0044769a
    PUSH 0x1                            ; 0044769d
    LEA EBX,[EAX + 0xfffffea8]          ; 0044769f
    PUSH EBX                            ; 004476a5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004476a6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004476ab
    MOV DL,byte ptr [ESP + 0xc]         ; 004476ae
    MOV EBX,EAX                         ; 004476b2
    TEST DL,0x2                         ; 004476b4
    JNZ 0x004476d8                      ; 004476b7
        ;   XREF to: 004476d8 (CONDITIONAL_JUMP)  ; LAB_004476d8
    MOV EAX,EBX                         ; 004476b9
    POP EBX                             ; 004476bb
    RET                                 ; 004476bc
    PUSH 0x5fdf20                       ; 004476bd | g_CConstructTypeInfo
        ;   Label: LAB_004476bd
    PUSH EBX                            ; 004476c2
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004476c3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 004476c8
    PUSH EAX                            ; 004476cb
    CALL crt_unknown.c_FUN_005c0336     ; 004476cc
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004476d1
    MOV EAX,EBX                         ; 004476d4
    POP EBX                             ; 004476d6
    RET                                 ; 004476d7
    PUSH EAX                            ; 004476d8
        ;   Label: LAB_004476d8
    CALL crt_unknown.c_FUN_005c0344     ; 004476d9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004476de
    MOV EAX,EBX                         ; 004476e1
    POP EBX                             ; 004476e3
    RET                                 ; 004476e4

