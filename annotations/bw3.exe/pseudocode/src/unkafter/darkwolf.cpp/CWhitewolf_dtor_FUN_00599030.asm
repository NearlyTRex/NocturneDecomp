; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWhitewolf * unkafter_darkwolf_cpp_CWhitewolf_dtor_FUN_00599030(CWhitewolf *this_ptr,uint flags)
;
; Parameters:
; CWhitewolf *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CWhitewolfTypeInfo
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

    PUSH EBX                            ; 00599030
        ;   Label: unkafter_darkwolf.cpp_CWhitewolf_dtor_FUN_00599030
    MOV EBX,dword ptr [ESP + 0x8]       ; 00599031
    TEST byte ptr [ESP + 0xc],0x4       ; 00599035
    JNZ 0x0059909d                      ; 0059903a
        ;   XREF to: 0059909d (CONDITIONAL_JUMP)  ; LAB_0059909d
    PUSH 0x0                            ; 0059903c
    ADD EBX,0xd064                      ; 0059903e
    PUSH EBX                            ; 00599044
    CALL core_morph.cpp_CMorph_dtor_FUN_004fa8c0 ; 00599045
        ;   XREF to: 004fa8c0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_004fa8c0(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059904a
    PUSH 0x0                            ; 0059904d
    SUB EAX,0x9808                      ; 0059904f
    PUSH EAX                            ; 00599054
    CALL unkafter_armour.cpp_FUN_00410370 ; 00599055
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 0059905a
    PUSH 0x0                            ; 0059905d
    SUB EAX,0x954                       ; 0059905f
    PUSH EAX                            ; 00599064
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 00599065
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059906a
    PUSH 0x0                            ; 0059906d
    SUB EAX,0x2db0                      ; 0059906f
    PUSH EAX                            ; 00599074
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 00599075
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059907a
    PUSH 0x1                            ; 0059907d
    LEA EBX,[EAX + 0xfffffea8]          ; 0059907f
    PUSH EBX                            ; 00599085
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 00599086
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059908b
    MOV DL,byte ptr [ESP + 0xc]         ; 0059908e
    MOV EBX,EAX                         ; 00599092
    TEST DL,0x2                         ; 00599094
    JNZ 0x005990b8                      ; 00599097
        ;   XREF to: 005990b8 (CONDITIONAL_JUMP)  ; LAB_005990b8
    MOV EAX,EBX                         ; 00599099
    POP EBX                             ; 0059909b
    RET                                 ; 0059909c
    PUSH 0x5e7ca0                       ; 0059909d | g_CWhitewolfTypeInfo
        ;   Label: LAB_0059909d
    PUSH EBX                            ; 005990a2
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 005990a3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 005990a8
    PUSH EAX                            ; 005990ab
    CALL crt_unknown.c_FUN_005a30b6     ; 005990ac
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 005990b1
    MOV EAX,EBX                         ; 005990b4
    POP EBX                             ; 005990b6
    RET                                 ; 005990b7
    PUSH EAX                            ; 005990b8
        ;   Label: LAB_005990b8
    CALL crt_unknown.c_FUN_005a30c4     ; 005990b9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 005990be
    MOV EAX,EBX                         ; 005990c1
    POP EBX                             ; 005990c3
    RET                                 ; 005990c4

