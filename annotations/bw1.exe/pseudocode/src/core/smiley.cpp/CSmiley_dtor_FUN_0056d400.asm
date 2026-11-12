; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSmiley * core_smiley_cpp_CSmiley_dtor_FUN_0056d400(CSmiley *this_ptr,uint flags)
;
; Parameters:
; CSmiley *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSmileyTypeInfo
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

    PUSH EBX                            ; 0056d400
        ;   Label: core_smiley.cpp_CSmiley_dtor_FUN_0056d400
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056d401
    TEST byte ptr [ESP + 0xc],0x4       ; 0056d405
    JNZ 0x0056d45d                      ; 0056d40a
        ;   XREF to: 0056d45d (CONDITIONAL_JUMP)  ; LAB_0056d45d
    PUSH 0x0                            ; 0056d40c
    ADD EBX,0x35dc                      ; 0056d40e
    PUSH EBX                            ; 0056d414
    CALL core_armour.cpp_FUN_0040ee30   ; 0056d415
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 0056d41a
    PUSH 0x0                            ; 0056d41d
    SUB EAX,0x93c                       ; 0056d41f
    PUSH EAX                            ; 0056d424
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 0056d425
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056d42a
    PUSH 0x0                            ; 0056d42d
    SUB EAX,0x2b48                      ; 0056d42f
    PUSH EAX                            ; 0056d434
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 0056d435
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056d43a
    PUSH 0x1                            ; 0056d43d
    LEA EBX,[EAX + 0xfffffea8]          ; 0056d43f
    PUSH EBX                            ; 0056d445
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 0056d446
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056d44b
    MOV DL,byte ptr [ESP + 0xc]         ; 0056d44e
    MOV EBX,EAX                         ; 0056d452
    TEST DL,0x2                         ; 0056d454
    JNZ 0x0056d478                      ; 0056d457
        ;   XREF to: 0056d478 (CONDITIONAL_JUMP)  ; LAB_0056d478
    MOV EAX,EBX                         ; 0056d459
    POP EBX                             ; 0056d45b
    RET                                 ; 0056d45c
    PUSH 0x605ab0                       ; 0056d45d | g_CSmileyTypeInfo
        ;   Label: LAB_0056d45d
    PUSH EBX                            ; 0056d462
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0056d463
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0056d468
    PUSH EAX                            ; 0056d46b
    CALL crt_unknown.c_FUN_005c0336     ; 0056d46c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0056d471
    MOV EAX,EBX                         ; 0056d474
    POP EBX                             ; 0056d476
    RET                                 ; 0056d477
    PUSH EAX                            ; 0056d478
        ;   Label: LAB_0056d478
    CALL crt_unknown.c_FUN_005c0344     ; 0056d479
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0056d47e
    MOV EAX,EBX                         ; 0056d481
    POP EBX                             ; 0056d483
    RET                                 ; 0056d484

