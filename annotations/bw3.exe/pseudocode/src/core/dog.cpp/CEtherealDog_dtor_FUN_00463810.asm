; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEtherealDog * core_dog_cpp_CEtherealDog_dtor_FUN_00463810(CEtherealDog *this_ptr,uint flags)
;
; Parameters:
; CEtherealDog *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CEtherealDogTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_cloth.cpp_FUN_0043f900
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   unkafter_armour.cpp_FUN_00410370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463810
        ;   Label: core_dog.cpp_CEtherealDog_dtor_FUN_00463810
    MOV EBX,dword ptr [ESP + 0x8]       ; 00463811
    TEST byte ptr [ESP + 0xc],0x4       ; 00463815
    JNZ 0x0046386d                      ; 0046381a
        ;   XREF to: 0046386d (CONDITIONAL_JUMP)  ; LAB_0046386d
    PUSH 0x0                            ; 0046381c
    ADD EBX,0x385c                      ; 0046381e
    PUSH EBX                            ; 00463824
    CALL unkafter_armour.cpp_FUN_00410370 ; 00463825
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 0046382a
    PUSH 0x0                            ; 0046382d
    SUB EAX,0x954                       ; 0046382f
    PUSH EAX                            ; 00463834
    CALL core_cloth.cpp_FUN_0043f900    ; 00463835
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0046383a
    PUSH 0x0                            ; 0046383d
    SUB EAX,0x2db0                      ; 0046383f
    PUSH EAX                            ; 00463844
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 00463845
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0046384a
    PUSH 0x1                            ; 0046384d
    LEA EBX,[EAX + 0xfffffea8]          ; 0046384f
    PUSH EBX                            ; 00463855
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 00463856
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0046385b
    MOV DL,byte ptr [ESP + 0xc]         ; 0046385e
    MOV EBX,EAX                         ; 00463862
    TEST DL,0x2                         ; 00463864
    JNZ 0x00463888                      ; 00463867
        ;   XREF to: 00463888 (CONDITIONAL_JUMP)  ; LAB_00463888
    MOV EAX,EBX                         ; 00463869
    POP EBX                             ; 0046386b
    RET                                 ; 0046386c
    PUSH 0x5deb10                       ; 0046386d | g_CEtherealDogTypeInfo
        ;   Label: LAB_0046386d
    PUSH EBX                            ; 00463872
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00463873
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00463878
    PUSH EAX                            ; 0046387b
    CALL crt_unknown.c_FUN_005a30b6     ; 0046387c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00463881
    MOV EAX,EBX                         ; 00463884
    POP EBX                             ; 00463886
    RET                                 ; 00463887
    PUSH EAX                            ; 00463888
        ;   Label: LAB_00463888
    CALL crt_unknown.c_FUN_005a30c4     ; 00463889
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0046388e
    MOV EAX,EBX                         ; 00463891
    POP EBX                             ; 00463893
    RET                                 ; 00463894

