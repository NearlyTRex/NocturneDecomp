; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStylerDemon * core_styldemo_cpp_CStylerDemon_dtor_FUN_005a0910(CStylerDemon *this_ptr,uint flags)
;
; Parameters:
; CStylerDemon *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CStylerDemonTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
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

    PUSH EBX                            ; 005a0910
        ;   Label: core_styldemo.cpp_CStylerDemon_dtor_FUN_005a0910
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a0911
    TEST byte ptr [ESP + 0xc],0x4       ; 005a0915
    JNZ 0x005a097d                      ; 005a091a
        ;   XREF to: 005a097d (CONDITIONAL_JUMP)  ; LAB_005a097d
    PUSH 0x0                            ; 005a091c
    ADD EBX,0xd064                      ; 005a091e
    PUSH EBX                            ; 005a0924
    CALL core_morph.cpp_CMorph_dtor_FUN_004fa8c0 ; 005a0925
        ;   XREF to: 004fa8c0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_004fa8c0(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a092a
    PUSH 0x0                            ; 005a092d
    SUB EAX,0x9808                      ; 005a092f
    PUSH EAX                            ; 005a0934
    CALL unkafter_armour.cpp_FUN_00410370 ; 005a0935
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 005a093a
    PUSH 0x0                            ; 005a093d
    SUB EAX,0x954                       ; 005a093f
    PUSH EAX                            ; 005a0944
    CALL core_cloth.cpp_FUN_0043f900    ; 005a0945
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a094a
    PUSH 0x0                            ; 005a094d
    SUB EAX,0x2db0                      ; 005a094f
    PUSH EAX                            ; 005a0954
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 005a0955
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a095a
    PUSH 0x1                            ; 005a095d
    LEA EBX,[EAX + 0xfffffea8]          ; 005a095f
    PUSH EBX                            ; 005a0965
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 005a0966
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a096b
    MOV DL,byte ptr [ESP + 0xc]         ; 005a096e
    MOV EBX,EAX                         ; 005a0972
    TEST DL,0x2                         ; 005a0974
    JNZ 0x005a0998                      ; 005a0977
        ;   XREF to: 005a0998 (CONDITIONAL_JUMP)  ; LAB_005a0998
    MOV EAX,EBX                         ; 005a0979
    POP EBX                             ; 005a097b
    RET                                 ; 005a097c
    PUSH 0x5e8640                       ; 005a097d | g_CStylerDemonTypeInfo
        ;   Label: LAB_005a097d
    PUSH EBX                            ; 005a0982
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 005a0983
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 005a0988
    PUSH EAX                            ; 005a098b
    CALL crt_unknown.c_FUN_005a30b6     ; 005a098c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 005a0991
    MOV EAX,EBX                         ; 005a0994
    POP EBX                             ; 005a0996
    RET                                 ; 005a0997
    PUSH EAX                            ; 005a0998
        ;   Label: LAB_005a0998
    CALL crt_unknown.c_FUN_005a30c4     ; 005a0999
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 005a099e
    MOV EAX,EBX                         ; 005a09a1
    POP EBX                             ; 005a09a3
    RET                                 ; 005a09a4

