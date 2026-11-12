; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCharacter * core_charactr_cpp_CCharacter_dtor_FUN_00410290(CCharacter *this_ptr,uint flags)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CCharacterTypeInfo
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

    PUSH EBX                            ; 00410290
        ;   Label: core_charactr.cpp_CCharacter_dtor_FUN_00410290
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410291
    TEST byte ptr [ESP + 0xc],0x4       ; 00410295
    JNZ 0x004102ed                      ; 0041029a
        ;   XREF to: 004102ed (CONDITIONAL_JUMP)  ; LAB_004102ed
    PUSH 0x0                            ; 0041029c
    ADD EBX,0x385c                      ; 0041029e
    PUSH EBX                            ; 004102a4
    CALL core_armour.cpp_FUN_00410370   ; 004102a5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 004102aa
    PUSH 0x0                            ; 004102ad
    SUB EAX,0x954                       ; 004102af
    PUSH EAX                            ; 004102b4
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 004102b5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004102ba
    PUSH 0x0                            ; 004102bd
    SUB EAX,0x2db0                      ; 004102bf
    PUSH EAX                            ; 004102c4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 004102c5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004102ca
    PUSH 0x1                            ; 004102cd
    LEA EBX,[EAX + 0xfffffea8]          ; 004102cf
    PUSH EBX                            ; 004102d5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004102d6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004102db
    MOV DL,byte ptr [ESP + 0xc]         ; 004102de
    MOV EBX,EAX                         ; 004102e2
    TEST DL,0x2                         ; 004102e4
    JNZ 0x00410308                      ; 004102e7
        ;   XREF to: 00410308 (CONDITIONAL_JUMP)  ; LAB_00410308
    MOV EAX,EBX                         ; 004102e9
    POP EBX                             ; 004102eb
    RET                                 ; 004102ec
    PUSH 0x5dbc80                       ; 004102ed | g_CCharacterTypeInfo
        ;   Label: LAB_004102ed
    PUSH EBX                            ; 004102f2
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004102f3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004102f8
    PUSH EAX                            ; 004102fb
    CALL crt_unknown.c_FUN_005a30b6     ; 004102fc
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00410301
    MOV EAX,EBX                         ; 00410304
    POP EBX                             ; 00410306
    RET                                 ; 00410307
    PUSH EAX                            ; 00410308
        ;   Label: LAB_00410308
    CALL crt_unknown.c_FUN_005a30c4     ; 00410309
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0041030e
    MOV EAX,EBX                         ; 00410311
    POP EBX                             ; 00410313
    RET                                 ; 00410314

