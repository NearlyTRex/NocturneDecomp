; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHotDemon * core_hotdemon_cpp_CHotDemon_dtor_FUN_004d6610(CHotDemon *this_ptr,uint flags)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CHotDemonTypeInfo
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

    PUSH EBX                            ; 004d6610
        ;   Label: core_hotdemon.cpp_CHotDemon_dtor_FUN_004d6610
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d6611
    TEST byte ptr [ESP + 0xc],0x4       ; 004d6615
    JNZ 0x004d666d                      ; 004d661a
        ;   XREF to: 004d666d (CONDITIONAL_JUMP)  ; LAB_004d666d
    PUSH 0x0                            ; 004d661c
    ADD EBX,0x385c                      ; 004d661e
    PUSH EBX                            ; 004d6624
    CALL unkafter_armour.cpp_FUN_00410370 ; 004d6625
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 004d662a
    PUSH 0x0                            ; 004d662d
    SUB EAX,0x954                       ; 004d662f
    PUSH EAX                            ; 004d6634
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 004d6635
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d663a
    PUSH 0x0                            ; 004d663d
    SUB EAX,0x2db0                      ; 004d663f
    PUSH EAX                            ; 004d6644
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 004d6645
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d664a
    PUSH 0x1                            ; 004d664d
    LEA EBX,[EAX + 0xfffffea8]          ; 004d664f
    PUSH EBX                            ; 004d6655
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004d6656
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d665b
    MOV DL,byte ptr [ESP + 0xc]         ; 004d665e
    MOV EBX,EAX                         ; 004d6662
    TEST DL,0x2                         ; 004d6664
    JNZ 0x004d6688                      ; 004d6667
        ;   XREF to: 004d6688 (CONDITIONAL_JUMP)  ; LAB_004d6688
    MOV EAX,EBX                         ; 004d6669
    POP EBX                             ; 004d666b
    RET                                 ; 004d666c
    PUSH 0x5e1eb0                       ; 004d666d | g_CHotDemonTypeInfo
        ;   Label: LAB_004d666d
    PUSH EBX                            ; 004d6672
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004d6673
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 004d6678
    PUSH EAX                            ; 004d667b
    CALL crt_unknown.c_FUN_005a30b6     ; 004d667c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004d6681
    MOV EAX,EBX                         ; 004d6684
    POP EBX                             ; 004d6686
    RET                                 ; 004d6687
    PUSH EAX                            ; 004d6688
        ;   Label: LAB_004d6688
    CALL crt_unknown.c_FUN_005a30c4     ; 004d6689
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004d668e
    MOV EAX,EBX                         ; 004d6691
    POP EBX                             ; 004d6693
    RET                                 ; 004d6694

