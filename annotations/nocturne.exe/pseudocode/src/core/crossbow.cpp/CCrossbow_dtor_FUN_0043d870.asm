; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_dtor_FUN_0043d870(CCrossbow *this_ptr,uint flags)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CCrossbowTypeInfo_0059bc50
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_weapon.cpp_CWeapon_dtor_FUN_00553ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043d870
        ;   Label: core_crossbow.cpp_CCrossbow_dtor_FUN_0043d870
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043d871
    TEST byte ptr [ESP + 0xc],0x4       ; 0043d875
    JNZ 0x0043d8ad                      ; 0043d87a
        ;   XREF to: 0043d8ad (CONDITIONAL_JUMP)  ; LAB_0043d8ad
    PUSH 0x1                            ; 0043d87c
    ADD EBX,0x574                       ; 0043d87e
    PUSH EBX                            ; 0043d884
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0043d885
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043d88a
    PUSH 0x1                            ; 0043d88d
    LEA EBX,[EAX + 0xfffffa8c]          ; 0043d88f
    PUSH EBX                            ; 0043d895
    CALL core_weapon.cpp_CWeapon_dtor_FUN_00553ea0 ; 0043d896
        ;   XREF to: 00553ea0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_00553ea0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043d89b
    MOV DL,byte ptr [ESP + 0xc]         ; 0043d89e
    MOV EBX,EAX                         ; 0043d8a2
    TEST DL,0x2                         ; 0043d8a4
    JNZ 0x0043d8c8                      ; 0043d8a7
        ;   XREF to: 0043d8c8 (CONDITIONAL_JUMP)  ; LAB_0043d8c8
    MOV EAX,EBX                         ; 0043d8a9
    POP EBX                             ; 0043d8ab
    RET                                 ; 0043d8ac
    PUSH 0x59bc50                       ; 0043d8ad | g_CCrossbowTypeInfo_0059bc50
        ;   Label: LAB_0043d8ad
    PUSH EBX                            ; 0043d8b2
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0043d8b3
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0043d8b8
    PUSH EAX                            ; 0043d8bb
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0043d8bc
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0043d8c1
    MOV EAX,EBX                         ; 0043d8c4
    POP EBX                             ; 0043d8c6
    RET                                 ; 0043d8c7
    PUSH EAX                            ; 0043d8c8
        ;   Label: LAB_0043d8c8
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 0043d8c9
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 0043d8ce
    MOV EAX,EBX                         ; 0043d8d1
    POP EBX                             ; 0043d8d3
    RET                                 ; 0043d8d4

