; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShadow * core_shadow_cpp_CShadow_dtor_FUN_005603b0(CShadow *this_ptr,uint flags)
;
; Parameters:
; CShadow *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CShadowTypeInfo
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

    PUSH EBX                            ; 005603b0
        ;   Label: core_shadow.cpp_CShadow_dtor_FUN_005603b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005603b1
    TEST byte ptr [ESP + 0xc],0x4       ; 005603b5
    JNZ 0x0056040d                      ; 005603ba
        ;   XREF to: 0056040d (CONDITIONAL_JUMP)  ; LAB_0056040d
    PUSH 0x0                            ; 005603bc
    ADD EBX,0x35dc                      ; 005603be
    PUSH EBX                            ; 005603c4
    CALL core_armour.cpp_FUN_0040ee30   ; 005603c5
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 005603ca
    PUSH 0x0                            ; 005603cd
    SUB EAX,0x93c                       ; 005603cf
    PUSH EAX                            ; 005603d4
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 005603d5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005603da
    PUSH 0x0                            ; 005603dd
    SUB EAX,0x2b48                      ; 005603df
    PUSH EAX                            ; 005603e4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 005603e5
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005603ea
    PUSH 0x1                            ; 005603ed
    LEA EBX,[EAX + 0xfffffea8]          ; 005603ef
    PUSH EBX                            ; 005603f5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 005603f6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005603fb
    MOV DL,byte ptr [ESP + 0xc]         ; 005603fe
    MOV EBX,EAX                         ; 00560402
    TEST DL,0x2                         ; 00560404
    JNZ 0x00560428                      ; 00560407
        ;   XREF to: 00560428 (CONDITIONAL_JUMP)  ; LAB_00560428
    MOV EAX,EBX                         ; 00560409
    POP EBX                             ; 0056040b
    RET                                 ; 0056040c
    PUSH 0x605300                       ; 0056040d | g_CShadowTypeInfo
        ;   Label: LAB_0056040d
    PUSH EBX                            ; 00560412
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00560413
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00560418
    PUSH EAX                            ; 0056041b
    CALL crt_unknown.c_FUN_005c0336     ; 0056041c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00560421
    MOV EAX,EBX                         ; 00560424
    POP EBX                             ; 00560426
    RET                                 ; 00560427
    PUSH EAX                            ; 00560428
        ;   Label: LAB_00560428
    CALL crt_unknown.c_FUN_005c0344     ; 00560429
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0056042e
    MOV EAX,EBX                         ; 00560431
    POP EBX                             ; 00560433
    RET                                 ; 00560434

