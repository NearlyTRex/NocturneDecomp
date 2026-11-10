; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonDog * core_dog_cpp_CDemonDog_dtor_FUN_004638a0(CDemonDog *this_ptr,uint flags)
;
; Parameters:
; CDemonDog *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonDogTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_cloth.cpp_CClothList_dtor_FUN_0043f900
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   unkafter_armour.cpp_FUN_00410370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004638a0
        ;   Label: core_dog.cpp_CDemonDog_dtor_FUN_004638a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004638a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004638a5
    JNZ 0x004638fd                      ; 004638aa
        ;   XREF to: 004638fd (CONDITIONAL_JUMP)  ; LAB_004638fd
    PUSH 0x0                            ; 004638ac
    ADD EBX,0x385c                      ; 004638ae
    PUSH EBX                            ; 004638b4
    CALL unkafter_armour.cpp_FUN_00410370 ; 004638b5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 004638ba
    PUSH 0x0                            ; 004638bd
    SUB EAX,0x954                       ; 004638bf
    PUSH EAX                            ; 004638c4
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 004638c5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004638ca
    PUSH 0x0                            ; 004638cd
    SUB EAX,0x2db0                      ; 004638cf
    PUSH EAX                            ; 004638d4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 004638d5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004638da
    PUSH 0x1                            ; 004638dd
    LEA EBX,[EAX + 0xfffffea8]          ; 004638df
    PUSH EBX                            ; 004638e5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004638e6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004638eb
    MOV DL,byte ptr [ESP + 0xc]         ; 004638ee
    MOV EBX,EAX                         ; 004638f2
    TEST DL,0x2                         ; 004638f4
    JNZ 0x00463918                      ; 004638f7
        ;   XREF to: 00463918 (CONDITIONAL_JUMP)  ; LAB_00463918
    MOV EAX,EBX                         ; 004638f9
    POP EBX                             ; 004638fb
    RET                                 ; 004638fc
    PUSH 0x5deb30                       ; 004638fd | g_CDemonDogTypeInfo
        ;   Label: LAB_004638fd
    PUSH EBX                            ; 00463902
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00463903
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00463908
    PUSH EAX                            ; 0046390b
    CALL crt_unknown.c_FUN_005a30b6     ; 0046390c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00463911
    MOV EAX,EBX                         ; 00463914
    POP EBX                             ; 00463916
    RET                                 ; 00463917
    PUSH EAX                            ; 00463918
        ;   Label: LAB_00463918
    CALL crt_unknown.c_FUN_005a30c4     ; 00463919
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0046391e
    MOV EAX,EBX                         ; 00463921
    POP EBX                             ; 00463923
    RET                                 ; 00463924

