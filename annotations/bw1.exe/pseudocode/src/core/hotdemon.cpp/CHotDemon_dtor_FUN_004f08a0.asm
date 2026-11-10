; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHotDemon * core_hotdemon_cpp_CHotDemon_dtor_FUN_004f08a0(CHotDemon *this_ptr,uint flags)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CHotDemonTypeInfo
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

    PUSH EBX                            ; 004f08a0
        ;   Label: core_hotdemon.cpp_CHotDemon_dtor_FUN_004f08a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f08a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004f08a5
    JNZ 0x004f08fd                      ; 004f08aa
        ;   XREF to: 004f08fd (CONDITIONAL_JUMP)  ; LAB_004f08fd
    PUSH 0x0                            ; 004f08ac
    ADD EBX,0x35dc                      ; 004f08ae
    PUSH EBX                            ; 004f08b4
    CALL core_armour.cpp_FUN_0040ee30   ; 004f08b5
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 004f08ba
    PUSH 0x0                            ; 004f08bd
    SUB EAX,0x93c                       ; 004f08bf
    PUSH EAX                            ; 004f08c4
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 004f08c5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f08ca
    PUSH 0x0                            ; 004f08cd
    SUB EAX,0x2b48                      ; 004f08cf
    PUSH EAX                            ; 004f08d4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 004f08d5
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f08da
    PUSH 0x1                            ; 004f08dd
    LEA EBX,[EAX + 0xfffffea8]          ; 004f08df
    PUSH EBX                            ; 004f08e5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004f08e6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f08eb
    MOV DL,byte ptr [ESP + 0xc]         ; 004f08ee
    MOV EBX,EAX                         ; 004f08f2
    TEST DL,0x2                         ; 004f08f4
    JNZ 0x004f0918                      ; 004f08f7
        ;   XREF to: 004f0918 (CONDITIONAL_JUMP)  ; LAB_004f0918
    MOV EAX,EBX                         ; 004f08f9
    POP EBX                             ; 004f08fb
    RET                                 ; 004f08fc
    PUSH 0x602460                       ; 004f08fd | g_CHotDemonTypeInfo
        ;   Label: LAB_004f08fd
    PUSH EBX                            ; 004f0902
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004f0903
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 004f0908
    PUSH EAX                            ; 004f090b
    CALL crt_unknown.c_FUN_005c0336     ; 004f090c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004f0911
    MOV EAX,EBX                         ; 004f0914
    POP EBX                             ; 004f0916
    RET                                 ; 004f0917
    PUSH EAX                            ; 004f0918
        ;   Label: LAB_004f0918
    CALL crt_unknown.c_FUN_005c0344     ; 004f0919
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004f091e
    MOV EAX,EBX                         ; 004f0921
    POP EBX                             ; 004f0923
    RET                                 ; 004f0924

