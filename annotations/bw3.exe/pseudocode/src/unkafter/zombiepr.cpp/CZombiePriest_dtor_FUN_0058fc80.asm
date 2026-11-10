; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombiePriest * unkafter_zombiepr_cpp_CZombiePriest_dtor_FUN_0058fc80(CZombiePriest *this_ptr,uint flags)
;
; Parameters:
; CZombiePriest *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CZombiePriestTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_cloth.cpp_CClothList_dtor_FUN_0043f900
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   unkafter_armour.cpp_FUN_00410370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058fc80
        ;   Label: unkafter_zombiepr.cpp_CZombiePriest_dtor_FUN_0058fc80
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058fc81
    TEST byte ptr [ESP + 0xc],0x4       ; 0058fc85
    JNZ 0x0058fcdd                      ; 0058fc8a
        ;   XREF to: 0058fcdd (CONDITIONAL_JUMP)  ; LAB_0058fcdd
    PUSH 0x0                            ; 0058fc8c
    ADD EBX,0x385c                      ; 0058fc8e
    PUSH EBX                            ; 0058fc94
    CALL unkafter_armour.cpp_FUN_00410370 ; 0058fc95
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 0058fc9a
    PUSH 0x0                            ; 0058fc9d
    SUB EAX,0x954                       ; 0058fc9f
    PUSH EAX                            ; 0058fca4
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 0058fca5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058fcaa
    PUSH 0x0                            ; 0058fcad
    SUB EAX,0x2db0                      ; 0058fcaf
    PUSH EAX                            ; 0058fcb4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 0058fcb5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058fcba
    PUSH 0x1                            ; 0058fcbd
    LEA EBX,[EAX + 0xfffffea8]          ; 0058fcbf
    PUSH EBX                            ; 0058fcc5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0058fcc6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058fccb
    MOV DL,byte ptr [ESP + 0xc]         ; 0058fcce
    MOV EBX,EAX                         ; 0058fcd2
    TEST DL,0x2                         ; 0058fcd4
    JNZ 0x0058fcf8                      ; 0058fcd7
        ;   XREF to: 0058fcf8 (CONDITIONAL_JUMP)  ; LAB_0058fcf8
    MOV EAX,EBX                         ; 0058fcd9
    POP EBX                             ; 0058fcdb
    RET                                 ; 0058fcdc
    PUSH 0x5e71c0                       ; 0058fcdd | g_CZombiePriestTypeInfo
        ;   Label: LAB_0058fcdd
    PUSH EBX                            ; 0058fce2
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0058fce3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 0058fce8
    PUSH EAX                            ; 0058fceb
    CALL crt_unknown.c_FUN_005a30b6     ; 0058fcec
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0058fcf1
    MOV EAX,EBX                         ; 0058fcf4
    POP EBX                             ; 0058fcf6
    RET                                 ; 0058fcf7
    PUSH EAX                            ; 0058fcf8
        ;   Label: LAB_0058fcf8
    CALL crt_unknown.c_FUN_005a30c4     ; 0058fcf9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0058fcfe
    MOV EAX,EBX                         ; 0058fd01
    POP EBX                             ; 0058fd03
    RET                                 ; 0058fd04

