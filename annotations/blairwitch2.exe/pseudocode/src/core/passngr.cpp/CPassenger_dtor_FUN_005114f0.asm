; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPassenger * __cdecl core_passngr_cpp_CPassenger_dtor_FUN_005114f0(CPassenger *this_ptr,uint flags)
;
; Parameters:
; CPassenger *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   CCharacter_full_vtable g_CPassengerVTable
;   WatcomTypeInfo g_CPassengerTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_armour.cpp_FUN_0040f2b0
;   core_cloth.cpp_CClothList_dtor_FUN_005b1480
;   core_morph.cpp_CMorph_dtor_FUN_005b6e80
;   core_muzzle.cpp_FUN_0059df70
;   core_path.cpp_CPathMap_dtor_FUN_00511d10
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005114f0
        ;   Label: core_passngr.cpp_CPassenger_dtor_FUN_005114f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005114f1
    TEST byte ptr [ESP + 0xc],0x4       ; 005114f5
    JNZ 0x005115ab                      ; 005114fa
        ;   XREF to: 005115ab (CONDITIONAL_JUMP)  ; LAB_005115ab
    MOV EDX,dword ptr [EBX + 0x24450]   ; 00511500
    MOV dword ptr [EBX + 0x2b0],0x5fa924 ; 00511506 | g_CPassengerVTable
    TEST EDX,EDX                        ; 00511510
    JZ 0x0051152a                       ; 00511512
        ;   XREF to: 0051152a (CONDITIONAL_JUMP)  ; LAB_0051152a
    MOV EAX,EDX                         ; 00511514
    JZ 0x0051152a                       ; 00511516
        ;   XREF to: 0051152a (CONDITIONAL_JUMP)  ; LAB_0051152a
    PUSH 0x2                            ; 00511518
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 0051151a
    PUSH EAX                            ; 00511520
    CALL dword ptr [EDX + 0xd8]         ; 00511521
    ADD ESP,0x8                         ; 00511527
    PUSH 0x0                            ; 0051152a
        ;   Label: LAB_0051152a
    ADD EBX,0x24454                     ; 0051152c
    PUSH EBX                            ; 00511532
    CALL core_morph.cpp_CMorph_dtor_FUN_005b6e80 ; 00511533
        ;   XREF to: 005b6e80 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_005b6e80(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00511538
    PUSH 0x0                            ; 0051153b
    SUB EAX,0x139f4                     ; 0051153d
    PUSH EAX                            ; 00511542
    CALL core_path.cpp_CPathMap_dtor_FUN_00511d10 ; 00511543
        ;   XREF to: 00511d10 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_00511d10(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00511548
    PUSH 0x0                            ; 0051154b
    SUB EAX,0xd040                      ; 0051154d
    PUSH EAX                            ; 00511552
    CALL core_armour.cpp_FUN_0040f2b0   ; 00511553
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 00511558
    PUSH 0x0                            ; 0051155b
    SUB EAX,0x9c8                       ; 0051155d
    PUSH EAX                            ; 00511562
    CALL core_muzzle.cpp_FUN_0059df70   ; 00511563
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 00511568
    PUSH 0x0                            ; 0051156b
    SUB EAX,0x34c                       ; 0051156d
    PUSH EAX                            ; 00511572
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 00511573
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00511578
    PUSH 0x0                            ; 0051157b
    SUB EAX,0x2a58                      ; 0051157d
    PUSH EAX                            ; 00511582
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 00511583
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00511588
    PUSH 0x1                            ; 0051158b
    LEA EBX,[EAX + 0xfffffd4c]          ; 0051158d
    PUSH EBX                            ; 00511593
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 00511594
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00511599
    MOV DL,byte ptr [ESP + 0xc]         ; 0051159c
    MOV EBX,EAX                         ; 005115a0
    TEST DL,0x2                         ; 005115a2
    JNZ 0x005115c6                      ; 005115a5
        ;   XREF to: 005115c6 (CONDITIONAL_JUMP)  ; LAB_005115c6
    MOV EAX,EBX                         ; 005115a7
    POP EBX                             ; 005115a9
    RET                                 ; 005115aa
    PUSH 0x5faa70                       ; 005115ab | g_CPassengerTypeInfo
        ;   Label: LAB_005115ab
    PUSH EBX                            ; 005115b0
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 005115b1
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005115b6
    PUSH EAX                            ; 005115b9
    CALL crt_unknown.c_FUN_005b7fce     ; 005115ba
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005115bf
    MOV EAX,EBX                         ; 005115c2
    POP EBX                             ; 005115c4
    RET                                 ; 005115c5
    PUSH EAX                            ; 005115c6
        ;   Label: LAB_005115c6
    CALL crt_unknown.c_FUN_005b7fdc     ; 005115c7
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005115cc
    MOV EAX,EBX                         ; 005115cf
    POP EBX                             ; 005115d1
    RET                                 ; 005115d2

