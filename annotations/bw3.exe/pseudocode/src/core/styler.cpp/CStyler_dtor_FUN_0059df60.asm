; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStyler * core_styler_cpp_CStyler_dtor_FUN_0059df60(CStyler *this_ptr,uint flags)
;
; Parameters:
; CStyler *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CStylerTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_cloth.cpp_FUN_0043c280
;   core_cloth.cpp_FUN_0043f900
;   core_morph.cpp_CMorph_dtor_FUN_004fa8c0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   unkafter_armour.cpp_FUN_00410370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059df60
        ;   Label: core_styler.cpp_CStyler_dtor_FUN_0059df60
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059df61
    TEST byte ptr [ESP + 0xc],0x4       ; 0059df65
    JNZ 0x0059dfdd                      ; 0059df6a
        ;   XREF to: 0059dfdd (CONDITIONAL_JUMP)  ; LAB_0059dfdd
    PUSH 0x0                            ; 0059df6c
    ADD EBX,0x47b98                     ; 0059df6e
    PUSH EBX                            ; 0059df74
    CALL core_morph.cpp_CMorph_dtor_FUN_004fa8c0 ; 0059df75
        ;   XREF to: 004fa8c0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_004fa8c0(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059df7a
    PUSH 0x0                            ; 0059df7d
    SUB EAX,0x3ab44                     ; 0059df7f
    PUSH EAX                            ; 0059df84
    CALL core_cloth.cpp_FUN_0043c280    ; 0059df85
        ;   XREF to: 0043c280 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043c280()
    ADD ESP,0x8                         ; 0059df8a
    PUSH 0x0                            ; 0059df8d
    SUB EAX,0x97f8                      ; 0059df8f
    PUSH EAX                            ; 0059df94
    CALL unkafter_armour.cpp_FUN_00410370 ; 0059df95
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 0059df9a
    PUSH 0x0                            ; 0059df9d
    SUB EAX,0x954                       ; 0059df9f
    PUSH EAX                            ; 0059dfa4
    CALL core_cloth.cpp_FUN_0043f900    ; 0059dfa5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059dfaa
    PUSH 0x0                            ; 0059dfad
    SUB EAX,0x2db0                      ; 0059dfaf
    PUSH EAX                            ; 0059dfb4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 0059dfb5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059dfba
    PUSH 0x1                            ; 0059dfbd
    LEA EBX,[EAX + 0xfffffea8]          ; 0059dfbf
    PUSH EBX                            ; 0059dfc5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0059dfc6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059dfcb
    MOV DL,byte ptr [ESP + 0xc]         ; 0059dfce
    MOV EBX,EAX                         ; 0059dfd2
    TEST DL,0x2                         ; 0059dfd4
    JNZ 0x0059dff8                      ; 0059dfd7
        ;   XREF to: 0059dff8 (CONDITIONAL_JUMP)  ; LAB_0059dff8
    MOV EAX,EBX                         ; 0059dfd9
    POP EBX                             ; 0059dfdb
    RET                                 ; 0059dfdc
    PUSH 0x5e84a0                       ; 0059dfdd | g_CStylerTypeInfo
        ;   Label: LAB_0059dfdd
    PUSH EBX                            ; 0059dfe2
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0059dfe3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 0059dfe8
    PUSH EAX                            ; 0059dfeb
    CALL crt_unknown.c_FUN_005a30b6     ; 0059dfec
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0059dff1
    MOV EAX,EBX                         ; 0059dff4
    POP EBX                             ; 0059dff6
    RET                                 ; 0059dff7
    PUSH EAX                            ; 0059dff8
        ;   Label: LAB_0059dff8
    CALL crt_unknown.c_FUN_005a30c4     ; 0059dff9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0059dffe
    MOV EAX,EBX                         ; 0059e001
    POP EBX                             ; 0059e003
    RET                                 ; 0059e004

