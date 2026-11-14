; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSentinel * __cdecl core_sentinel_cpp_CSentinel_dtor_FUN_0054ce30(CSentinel *this_ptr,uint flags)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSentinelTypeInfo
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

    PUSH EBX                            ; 0054ce30
        ;   Label: core_sentinel.cpp_CSentinel_dtor_FUN_0054ce30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054ce31
    TEST byte ptr [ESP + 0xc],0x4       ; 0054ce35
    JNZ 0x0054ce8d                      ; 0054ce3a
        ;   XREF to: 0054ce8d (CONDITIONAL_JUMP)  ; LAB_0054ce8d
    PUSH 0x0                            ; 0054ce3c
    ADD EBX,0x35dc                      ; 0054ce3e
    PUSH EBX                            ; 0054ce44
    CALL core_armour.cpp_FUN_0040ee30   ; 0054ce45
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 0054ce4a
    PUSH 0x0                            ; 0054ce4d
    SUB EAX,0x93c                       ; 0054ce4f
    PUSH EAX                            ; 0054ce54
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 0054ce55
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054ce5a
    PUSH 0x0                            ; 0054ce5d
    SUB EAX,0x2b48                      ; 0054ce5f
    PUSH EAX                            ; 0054ce64
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 0054ce65
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054ce6a
    PUSH 0x1                            ; 0054ce6d
    LEA EBX,[EAX + 0xfffffea8]          ; 0054ce6f
    PUSH EBX                            ; 0054ce75
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 0054ce76
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054ce7b
    MOV DL,byte ptr [ESP + 0xc]         ; 0054ce7e
    MOV EBX,EAX                         ; 0054ce82
    TEST DL,0x2                         ; 0054ce84
    JNZ 0x0054cea8                      ; 0054ce87
        ;   XREF to: 0054cea8 (CONDITIONAL_JUMP)  ; LAB_0054cea8
    MOV EAX,EBX                         ; 0054ce89
    POP EBX                             ; 0054ce8b
    RET                                 ; 0054ce8c
    PUSH 0x604fb0                       ; 0054ce8d | g_CSentinelTypeInfo
        ;   Label: LAB_0054ce8d
    PUSH EBX                            ; 0054ce92
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0054ce93
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0054ce98
    PUSH EAX                            ; 0054ce9b
    CALL crt_unknown.c_FUN_005c0336     ; 0054ce9c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0054cea1
    MOV EAX,EBX                         ; 0054cea4
    POP EBX                             ; 0054cea6
    RET                                 ; 0054cea7
    PUSH EAX                            ; 0054cea8
        ;   Label: LAB_0054cea8
    CALL crt_unknown.c_FUN_005c0344     ; 0054cea9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0054ceae
    MOV EAX,EBX                         ; 0054ceb1
    POP EBX                             ; 0054ceb3
    RET                                 ; 0054ceb4

