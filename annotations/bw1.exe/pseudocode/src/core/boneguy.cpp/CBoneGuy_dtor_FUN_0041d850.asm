; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoneGuy * core_boneguy_cpp_CBoneGuy_dtor_FUN_0041d850(CBoneGuy *this_ptr,uint flags)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBoneGuyTypeInfo
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

    PUSH EBX                            ; 0041d850
        ;   Label: core_boneguy.cpp_CBoneGuy_dtor_FUN_0041d850
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041d851
    TEST byte ptr [ESP + 0xc],0x4       ; 0041d855
    JNZ 0x0041d8ad                      ; 0041d85a
        ;   XREF to: 0041d8ad (CONDITIONAL_JUMP)  ; LAB_0041d8ad
    PUSH 0x0                            ; 0041d85c
    ADD EBX,0x35dc                      ; 0041d85e
    PUSH EBX                            ; 0041d864
    CALL core_armour.cpp_FUN_0040ee30   ; 0041d865
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 0041d86a
    PUSH 0x0                            ; 0041d86d
    SUB EAX,0x93c                       ; 0041d86f
    PUSH EAX                            ; 0041d874
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 0041d875
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041d87a
    PUSH 0x0                            ; 0041d87d
    SUB EAX,0x2b48                      ; 0041d87f
    PUSH EAX                            ; 0041d884
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 0041d885
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041d88a
    PUSH 0x1                            ; 0041d88d
    LEA EBX,[EAX + 0xfffffea8]          ; 0041d88f
    PUSH EBX                            ; 0041d895
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 0041d896
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041d89b
    MOV DL,byte ptr [ESP + 0xc]         ; 0041d89e
    MOV EBX,EAX                         ; 0041d8a2
    TEST DL,0x2                         ; 0041d8a4
    JNZ 0x0041d8c8                      ; 0041d8a7
        ;   XREF to: 0041d8c8 (CONDITIONAL_JUMP)  ; LAB_0041d8c8
    MOV EAX,EBX                         ; 0041d8a9
    POP EBX                             ; 0041d8ab
    RET                                 ; 0041d8ac
    PUSH 0x5fcdb0                       ; 0041d8ad | g_CBoneGuyTypeInfo
        ;   Label: LAB_0041d8ad
    PUSH EBX                            ; 0041d8b2
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0041d8b3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 0041d8b8
    PUSH EAX                            ; 0041d8bb
    CALL crt_unknown.c_FUN_005c0336     ; 0041d8bc
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0041d8c1
    MOV EAX,EBX                         ; 0041d8c4
    POP EBX                             ; 0041d8c6
    RET                                 ; 0041d8c7
    PUSH EAX                            ; 0041d8c8
        ;   Label: LAB_0041d8c8
    CALL crt_unknown.c_FUN_005c0344     ; 0041d8c9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0041d8ce
    MOV EAX,EBX                         ; 0041d8d1
    POP EBX                             ; 0041d8d3
    RET                                 ; 0041d8d4

