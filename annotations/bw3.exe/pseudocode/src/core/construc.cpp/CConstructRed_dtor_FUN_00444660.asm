; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CConstructRed * core_construc_cpp_CConstructRed_dtor_FUN_00444660(CConstructRed *this_ptr,uint flags)
;
; Parameters:
; CConstructRed *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CConstructRedTypeInfo
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

    PUSH EBX                            ; 00444660
        ;   Label: core_construc.cpp_CConstructRed_dtor_FUN_00444660
    MOV EBX,dword ptr [ESP + 0x8]       ; 00444661
    TEST byte ptr [ESP + 0xc],0x4       ; 00444665
    JNZ 0x004446bd                      ; 0044466a
        ;   XREF to: 004446bd (CONDITIONAL_JUMP)  ; LAB_004446bd
    PUSH 0x0                            ; 0044466c
    ADD EBX,0x385c                      ; 0044466e
    PUSH EBX                            ; 00444674
    CALL core_armour.cpp_FUN_00410370   ; 00444675
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 0044467a
    PUSH 0x0                            ; 0044467d
    SUB EAX,0x954                       ; 0044467f
    PUSH EAX                            ; 00444684
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 00444685
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0044468a
    PUSH 0x0                            ; 0044468d
    SUB EAX,0x2db0                      ; 0044468f
    PUSH EAX                            ; 00444694
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 00444695
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0044469a
    PUSH 0x1                            ; 0044469d
    LEA EBX,[EAX + 0xfffffea8]          ; 0044469f
    PUSH EBX                            ; 004446a5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004446a6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004446ab
    MOV DL,byte ptr [ESP + 0xc]         ; 004446ae
    MOV EBX,EAX                         ; 004446b2
    TEST DL,0x2                         ; 004446b4
    JNZ 0x004446d8                      ; 004446b7
        ;   XREF to: 004446d8 (CONDITIONAL_JUMP)  ; LAB_004446d8
    MOV EAX,EBX                         ; 004446b9
    POP EBX                             ; 004446bb
    RET                                 ; 004446bc
    PUSH 0x5ddb20                       ; 004446bd | g_CConstructRedTypeInfo
        ;   Label: LAB_004446bd
    PUSH EBX                            ; 004446c2
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004446c3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004446c8
    PUSH EAX                            ; 004446cb
    CALL crt_unknown.c_FUN_005a30b6     ; 004446cc
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004446d1
    MOV EAX,EBX                         ; 004446d4
    POP EBX                             ; 004446d6
    RET                                 ; 004446d7
    PUSH EAX                            ; 004446d8
        ;   Label: LAB_004446d8
    CALL crt_unknown.c_FUN_005a30c4     ; 004446d9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004446de
    MOV EAX,EBX                         ; 004446e1
    POP EBX                             ; 004446e3
    RET                                 ; 004446e4

