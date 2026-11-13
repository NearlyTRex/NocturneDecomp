; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAngelSpirit * __cdecl core_hotdemon_cpp_CAngelSpirit_dtor_FUN_004d64f0(CAngelSpirit *this_ptr,uint flags)
;
; Parameters:
; CAngelSpirit *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CAngelSpiritTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_armour.cpp_FUN_00410370
;   core_cloth.cpp_CClothList_dtor_FUN_0043f900
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d64f0
        ;   Label: core_hotdemon.cpp_CAngelSpirit_dtor_FUN_004d64f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d64f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004d64f5
    JNZ 0x004d654d                      ; 004d64fa
        ;   XREF to: 004d654d (CONDITIONAL_JUMP)  ; LAB_004d654d
    PUSH 0x0                            ; 004d64fc
    ADD EBX,0x385c                      ; 004d64fe
    PUSH EBX                            ; 004d6504
    CALL core_armour.cpp_FUN_00410370   ; 004d6505
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 004d650a
    PUSH 0x0                            ; 004d650d
    SUB EAX,0x954                       ; 004d650f
    PUSH EAX                            ; 004d6514
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 004d6515
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d651a
    PUSH 0x0                            ; 004d651d
    SUB EAX,0x2db0                      ; 004d651f
    PUSH EAX                            ; 004d6524
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 004d6525
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d652a
    PUSH 0x1                            ; 004d652d
    LEA EBX,[EAX + 0xfffffea8]          ; 004d652f
    PUSH EBX                            ; 004d6535
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004d6536
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d653b
    MOV DL,byte ptr [ESP + 0xc]         ; 004d653e
    MOV EBX,EAX                         ; 004d6542
    TEST DL,0x2                         ; 004d6544
    JNZ 0x004d6568                      ; 004d6547
        ;   XREF to: 004d6568 (CONDITIONAL_JUMP)  ; LAB_004d6568
    MOV EAX,EBX                         ; 004d6549
    POP EBX                             ; 004d654b
    RET                                 ; 004d654c
    PUSH 0x5e1e70                       ; 004d654d | g_CAngelSpiritTypeInfo
        ;   Label: LAB_004d654d
    PUSH EBX                            ; 004d6552
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004d6553
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004d6558
    PUSH EAX                            ; 004d655b
    CALL crt_unknown.c_FUN_005a30b6     ; 004d655c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004d6561
    MOV EAX,EBX                         ; 004d6564
    POP EBX                             ; 004d6566
    RET                                 ; 004d6567
    PUSH EAX                            ; 004d6568
        ;   Label: LAB_004d6568
    CALL crt_unknown.c_FUN_005a30c4     ; 004d6569
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004d656e
    MOV EAX,EBX                         ; 004d6571
    POP EBX                             ; 004d6573
    RET                                 ; 004d6574

