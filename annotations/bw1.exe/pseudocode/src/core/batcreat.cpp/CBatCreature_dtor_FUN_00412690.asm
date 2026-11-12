; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBatCreature * core_batcreat_cpp_CBatCreature_dtor_FUN_00412690(CBatCreature *this_ptr,uint flags)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBatCreatureTypeInfo
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

    PUSH EBX                            ; 00412690
        ;   Label: core_batcreat.cpp_CBatCreature_dtor_FUN_00412690
    MOV EBX,dword ptr [ESP + 0x8]       ; 00412691
    TEST byte ptr [ESP + 0xc],0x4       ; 00412695
    JNZ 0x004126ed                      ; 0041269a
        ;   XREF to: 004126ed (CONDITIONAL_JUMP)  ; LAB_004126ed
    PUSH 0x0                            ; 0041269c
    ADD EBX,0x35dc                      ; 0041269e
    PUSH EBX                            ; 004126a4
    CALL core_armour.cpp_FUN_0040ee30   ; 004126a5
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 004126aa
    PUSH 0x0                            ; 004126ad
    SUB EAX,0x93c                       ; 004126af
    PUSH EAX                            ; 004126b4
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 004126b5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004126ba
    PUSH 0x0                            ; 004126bd
    SUB EAX,0x2b48                      ; 004126bf
    PUSH EAX                            ; 004126c4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 004126c5
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004126ca
    PUSH 0x1                            ; 004126cd
    LEA EBX,[EAX + 0xfffffea8]          ; 004126cf
    PUSH EBX                            ; 004126d5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004126d6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004126db
    MOV DL,byte ptr [ESP + 0xc]         ; 004126de
    MOV EBX,EAX                         ; 004126e2
    TEST DL,0x2                         ; 004126e4
    JNZ 0x00412708                      ; 004126e7
        ;   XREF to: 00412708 (CONDITIONAL_JUMP)  ; LAB_00412708
    MOV EAX,EBX                         ; 004126e9
    POP EBX                             ; 004126eb
    RET                                 ; 004126ec
    PUSH 0x5fc130                       ; 004126ed | g_CBatCreatureTypeInfo
        ;   Label: LAB_004126ed
    PUSH EBX                            ; 004126f2
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004126f3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004126f8
    PUSH EAX                            ; 004126fb
    CALL crt_unknown.c_FUN_005c0336     ; 004126fc
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00412701
    MOV EAX,EBX                         ; 00412704
    POP EBX                             ; 00412706
    RET                                 ; 00412707
    PUSH EAX                            ; 00412708
        ;   Label: LAB_00412708
    CALL crt_unknown.c_FUN_005c0344     ; 00412709
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0041270e
    MOV EAX,EBX                         ; 00412711
    POP EBX                             ; 00412713
    RET                                 ; 00412714

