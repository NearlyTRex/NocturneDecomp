; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTawiscara * __cdecl core_tawiscara_cpp_CTawiscara_dtor_FUN_00596570(CTawiscara *this_ptr,uint flags)
;
; Parameters:
; CTawiscara *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTawiscaraTypeInfo
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

    PUSH EBX                            ; 00596570
        ;   Label: core_tawiscara.cpp_CTawiscara_dtor_FUN_00596570
    MOV EBX,dword ptr [ESP + 0x8]       ; 00596571
    TEST byte ptr [ESP + 0xc],0x4       ; 00596575
    JNZ 0x005965cd                      ; 0059657a
        ;   XREF to: 005965cd (CONDITIONAL_JUMP)  ; LAB_005965cd
    PUSH 0x0                            ; 0059657c
    ADD EBX,0x385c                      ; 0059657e
    PUSH EBX                            ; 00596584
    CALL core_armour.cpp_FUN_00410370   ; 00596585
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 0059658a
    PUSH 0x0                            ; 0059658d
    SUB EAX,0x954                       ; 0059658f
    PUSH EAX                            ; 00596594
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 00596595
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059659a
    PUSH 0x0                            ; 0059659d
    SUB EAX,0x2db0                      ; 0059659f
    PUSH EAX                            ; 005965a4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 005965a5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005965aa
    PUSH 0x1                            ; 005965ad
    LEA EBX,[EAX + 0xfffffea8]          ; 005965af
    PUSH EBX                            ; 005965b5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 005965b6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005965bb
    MOV DL,byte ptr [ESP + 0xc]         ; 005965be
    MOV EBX,EAX                         ; 005965c2
    TEST DL,0x2                         ; 005965c4
    JNZ 0x005965e8                      ; 005965c7
        ;   XREF to: 005965e8 (CONDITIONAL_JUMP)  ; LAB_005965e8
    MOV EAX,EBX                         ; 005965c9
    POP EBX                             ; 005965cb
    RET                                 ; 005965cc
    PUSH 0x5e7690                       ; 005965cd | g_CTawiscaraTypeInfo
        ;   Label: LAB_005965cd
    PUSH EBX                            ; 005965d2
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 005965d3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005965d8
    PUSH EAX                            ; 005965db
    CALL crt_unknown.c_FUN_005a30b6     ; 005965dc
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 005965e1
    MOV EAX,EBX                         ; 005965e4
    POP EBX                             ; 005965e6
    RET                                 ; 005965e7
    PUSH EAX                            ; 005965e8
        ;   Label: LAB_005965e8
    CALL crt_unknown.c_FUN_005a30c4     ; 005965e9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 005965ee
    MOV EAX,EBX                         ; 005965f1
    POP EBX                             ; 005965f3
    RET                                 ; 005965f4

