; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDarkwolf * unkafter_darkwolf_cpp_CDarkwolf_dtor_FUN_005990d0(CDarkwolf *this_ptr,uint flags)
;
; Parameters:
; CDarkwolf *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDarkwolfTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_cloth.cpp_CClothList_dtor_FUN_0043f900
;   core_morph.cpp_CMorph_dtor_FUN_004fa8c0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   unkafter_armour.cpp_FUN_00410370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005990d0
        ;   Label: unkafter_darkwolf.cpp_CDarkwolf_dtor_FUN_005990d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005990d1
    TEST byte ptr [ESP + 0xc],0x4       ; 005990d5
    JNZ 0x0059913d                      ; 005990da
        ;   XREF to: 0059913d (CONDITIONAL_JUMP)  ; LAB_0059913d
    PUSH 0x0                            ; 005990dc
    ADD EBX,0xd064                      ; 005990de
    PUSH EBX                            ; 005990e4
    CALL core_morph.cpp_CMorph_dtor_FUN_004fa8c0 ; 005990e5
        ;   XREF to: 004fa8c0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_004fa8c0(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005990ea
    PUSH 0x0                            ; 005990ed
    SUB EAX,0x9808                      ; 005990ef
    PUSH EAX                            ; 005990f4
    CALL unkafter_armour.cpp_FUN_00410370 ; 005990f5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 005990fa
    PUSH 0x0                            ; 005990fd
    SUB EAX,0x954                       ; 005990ff
    PUSH EAX                            ; 00599104
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 00599105
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059910a
    PUSH 0x0                            ; 0059910d
    SUB EAX,0x2db0                      ; 0059910f
    PUSH EAX                            ; 00599114
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 00599115
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059911a
    PUSH 0x1                            ; 0059911d
    LEA EBX,[EAX + 0xfffffea8]          ; 0059911f
    PUSH EBX                            ; 00599125
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 00599126
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059912b
    MOV DL,byte ptr [ESP + 0xc]         ; 0059912e
    MOV EBX,EAX                         ; 00599132
    TEST DL,0x2                         ; 00599134
    JNZ 0x00599158                      ; 00599137
        ;   XREF to: 00599158 (CONDITIONAL_JUMP)  ; LAB_00599158
    MOV EAX,EBX                         ; 00599139
    POP EBX                             ; 0059913b
    RET                                 ; 0059913c
    PUSH 0x5e7cc0                       ; 0059913d | g_CDarkwolfTypeInfo
        ;   Label: LAB_0059913d
    PUSH EBX                            ; 00599142
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00599143
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00599148
    PUSH EAX                            ; 0059914b
    CALL crt_unknown.c_FUN_005a30b6     ; 0059914c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00599151
    MOV EAX,EBX                         ; 00599154
    POP EBX                             ; 00599156
    RET                                 ; 00599157
    PUSH EAX                            ; 00599158
        ;   Label: LAB_00599158
    CALL crt_unknown.c_FUN_005a30c4     ; 00599159
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0059915e
    MOV EAX,EBX                         ; 00599161
    POP EBX                             ; 00599163
    RET                                 ; 00599164

