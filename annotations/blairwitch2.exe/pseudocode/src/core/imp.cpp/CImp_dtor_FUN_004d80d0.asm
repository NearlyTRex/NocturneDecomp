; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CImp * core_imp_cpp_CImp_dtor_FUN_004d80d0(CImp *this_ptr,uint flags)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CImpTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_armour.cpp_FUN_0040f2b0
;   core_cloth.cpp_CClothList_dtor_FUN_005b1480
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   unkaddr_0059d350.cpp_FUN_0059df70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d80d0
        ;   Label: core_imp.cpp_CImp_dtor_FUN_004d80d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d80d1
    TEST byte ptr [ESP + 0xc],0x4       ; 004d80d5
    JNZ 0x004d813d                      ; 004d80da
        ;   XREF to: 004d813d (CONDITIONAL_JUMP)  ; LAB_004d813d
    PUSH 0x0                            ; 004d80dc
    ADD EBX,0x3a20                      ; 004d80de
    PUSH EBX                            ; 004d80e4
    CALL core_armour.cpp_FUN_0040f2b0   ; 004d80e5
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 004d80ea
    PUSH 0x0                            ; 004d80ed
    SUB EAX,0x9c8                       ; 004d80ef
    PUSH EAX                            ; 004d80f4
    CALL unkaddr_0059d350.cpp_FUN_0059df70 ; 004d80f5
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 004d80fa
    PUSH 0x0                            ; 004d80fd
    SUB EAX,0x34c                       ; 004d80ff
    PUSH EAX                            ; 004d8104
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 004d8105
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d810a
    PUSH 0x0                            ; 004d810d
    SUB EAX,0x2a58                      ; 004d810f
    PUSH EAX                            ; 004d8114
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 004d8115
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d811a
    PUSH 0x1                            ; 004d811d
    LEA EBX,[EAX + 0xfffffd4c]          ; 004d811f
    PUSH EBX                            ; 004d8125
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 004d8126
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d812b
    MOV DL,byte ptr [ESP + 0xc]         ; 004d812e
    MOV EBX,EAX                         ; 004d8132
    TEST DL,0x2                         ; 004d8134
    JNZ 0x004d8158                      ; 004d8137
        ;   XREF to: 004d8158 (CONDITIONAL_JUMP)  ; LAB_004d8158
    MOV EAX,EBX                         ; 004d8139
    POP EBX                             ; 004d813b
    RET                                 ; 004d813c
    PUSH 0x5f8ed0                       ; 004d813d | g_CImpTypeInfo
        ;   Label: LAB_004d813d
    PUSH EBX                            ; 004d8142
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004d8143
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 004d8148
    PUSH EAX                            ; 004d814b
    CALL crt_unknown.c_FUN_005b7fce     ; 004d814c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004d8151
    MOV EAX,EBX                         ; 004d8154
    POP EBX                             ; 004d8156
    RET                                 ; 004d8157
    PUSH EAX                            ; 004d8158
        ;   Label: LAB_004d8158
    CALL crt_unknown.c_FUN_005b7fdc     ; 004d8159
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004d815e
    MOV EAX,EBX                         ; 004d8161
    POP EBX                             ; 004d8163
    RET                                 ; 004d8164

