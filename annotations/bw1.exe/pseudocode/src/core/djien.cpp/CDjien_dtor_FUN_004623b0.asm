; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDjien * core_djien_cpp_CDjien_dtor_FUN_004623b0(CDjien *this_ptr,uint flags)
;
; Parameters:
; CDjien *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDjienTypeInfo
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

    PUSH EBX                            ; 004623b0
        ;   Label: core_djien.cpp_CDjien_dtor_FUN_004623b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004623b1
    TEST byte ptr [ESP + 0xc],0x4       ; 004623b5
    JNZ 0x0046240d                      ; 004623ba
        ;   XREF to: 0046240d (CONDITIONAL_JUMP)  ; LAB_0046240d
    PUSH 0x0                            ; 004623bc
    ADD EBX,0x35dc                      ; 004623be
    PUSH EBX                            ; 004623c4
    CALL core_armour.cpp_FUN_0040ee30   ; 004623c5
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 004623ca
    PUSH 0x0                            ; 004623cd
    SUB EAX,0x93c                       ; 004623cf
    PUSH EAX                            ; 004623d4
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 004623d5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004623da
    PUSH 0x0                            ; 004623dd
    SUB EAX,0x2b48                      ; 004623df
    PUSH EAX                            ; 004623e4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 004623e5
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004623ea
    PUSH 0x1                            ; 004623ed
    LEA EBX,[EAX + 0xfffffea8]          ; 004623ef
    PUSH EBX                            ; 004623f5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004623f6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004623fb
    MOV DL,byte ptr [ESP + 0xc]         ; 004623fe
    MOV EBX,EAX                         ; 00462402
    TEST DL,0x2                         ; 00462404
    JNZ 0x00462428                      ; 00462407
        ;   XREF to: 00462428 (CONDITIONAL_JUMP)  ; LAB_00462428
    MOV EAX,EBX                         ; 00462409
    POP EBX                             ; 0046240b
    RET                                 ; 0046240c
    PUSH 0x5febb0                       ; 0046240d | g_CDjienTypeInfo
        ;   Label: LAB_0046240d
    PUSH EBX                            ; 00462412
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00462413
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00462418
    PUSH EAX                            ; 0046241b
    CALL crt_unknown.c_FUN_005c0336     ; 0046241c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00462421
    MOV EAX,EBX                         ; 00462424
    POP EBX                             ; 00462426
    RET                                 ; 00462427
    PUSH EAX                            ; 00462428
        ;   Label: LAB_00462428
    CALL crt_unknown.c_FUN_005c0344     ; 00462429
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0046242e
    MOV EAX,EBX                         ; 00462431
    POP EBX                             ; 00462433
    RET                                 ; 00462434

