; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSearchParty * core_bwsearch_cpp_CSearchParty_dtor_FUN_005a8e80(CSearchParty *this_ptr,uint flags)
;
; Parameters:
; CSearchParty *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSearchPartyTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_armour.cpp_FUN_0040f2b0
;   core_cloth.cpp_CClothList_dtor_FUN_005b1480
;   core_muzzle.cpp_FUN_0059df70
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8e80
        ;   Label: core_bwsearch.cpp_CSearchParty_dtor_FUN_005a8e80
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a8e81
    TEST byte ptr [ESP + 0xc],0x4       ; 005a8e85
    JNZ 0x005a8eed                      ; 005a8e8a
        ;   XREF to: 005a8eed (CONDITIONAL_JUMP)  ; LAB_005a8eed
    PUSH 0x0                            ; 005a8e8c
    ADD EBX,0x3a20                      ; 005a8e8e
    PUSH EBX                            ; 005a8e94
    CALL core_armour.cpp_FUN_0040f2b0   ; 005a8e95
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 005a8e9a
    PUSH 0x0                            ; 005a8e9d
    SUB EAX,0x9c8                       ; 005a8e9f
    PUSH EAX                            ; 005a8ea4
    CALL core_muzzle.cpp_FUN_0059df70   ; 005a8ea5
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 005a8eaa
    PUSH 0x0                            ; 005a8ead
    SUB EAX,0x34c                       ; 005a8eaf
    PUSH EAX                            ; 005a8eb4
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 005a8eb5
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a8eba
    PUSH 0x0                            ; 005a8ebd
    SUB EAX,0x2a58                      ; 005a8ebf
    PUSH EAX                            ; 005a8ec4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 005a8ec5
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a8eca
    PUSH 0x1                            ; 005a8ecd
    LEA EBX,[EAX + 0xfffffd4c]          ; 005a8ecf
    PUSH EBX                            ; 005a8ed5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 005a8ed6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a8edb
    MOV DL,byte ptr [ESP + 0xc]         ; 005a8ede
    MOV EBX,EAX                         ; 005a8ee2
    TEST DL,0x2                         ; 005a8ee4
    JNZ 0x005a8f08                      ; 005a8ee7
        ;   XREF to: 005a8f08 (CONDITIONAL_JUMP)  ; LAB_005a8f08
    MOV EAX,EBX                         ; 005a8ee9
    POP EBX                             ; 005a8eeb
    RET                                 ; 005a8eec
    PUSH 0x6004a0                       ; 005a8eed | g_CSearchPartyTypeInfo
        ;   Label: LAB_005a8eed
    PUSH EBX                            ; 005a8ef2
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 005a8ef3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 005a8ef8
    PUSH EAX                            ; 005a8efb
    CALL crt_unknown.c_FUN_005b7fce     ; 005a8efc
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005a8f01
    MOV EAX,EBX                         ; 005a8f04
    POP EBX                             ; 005a8f06
    RET                                 ; 005a8f07
    PUSH EAX                            ; 005a8f08
        ;   Label: LAB_005a8f08
    CALL crt_unknown.c_FUN_005b7fdc     ; 005a8f09
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005a8f0e
    MOV EAX,EBX                         ; 005a8f11
    POP EBX                             ; 005a8f13
    RET                                 ; 005a8f14

