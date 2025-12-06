; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CCrossbow * core_crossbow.cpp_CCrossbow_dtor_FUN_004495a0(CCrossbow * this_ptr, uint d1, uint d2, uint d3)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
;
; Referenced Globals:
;   WatcomTypeInfo g_CCrossbowTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004495a0
        ;   Label: core_crossbow.cpp_CCrossbow_dtor_FUN_004495a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004495a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004495a5
    JNZ 0x004495dd                      ; 004495aa | LAB_004495dd
        ;   XREF to: 004495dd (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 004495ac
    ADD EBX,0x57c                       ; 004495ae
    PUSH EBX                            ; 004495b4
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004495b5 | CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004495ba
    PUSH 0x1                            ; 004495bd
    LEA EBX,[EAX + 0xfffffa84]          ; 004495bf
    PUSH EBX                            ; 004495c5
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80 ; 004495c6 | CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005edf80(CWeapon * this_ptr, uint d1, uint d2, uint d3)
        ;   XREF to: 005edf80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004495cb
    MOV DL,byte ptr [ESP + 0xc]         ; 004495ce
    MOV EBX,EAX                         ; 004495d2
    TEST DL,0x2                         ; 004495d4
    JNZ 0x004495f8                      ; 004495d7 | LAB_004495f8
        ;   XREF to: 004495f8 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 004495d9
    POP EBX                             ; 004495db
    RET                                 ; 004495dc
    PUSH 0x65c4a0                       ; 004495dd | WatcomTypeInfo g_CCrossbowTypeInfo
        ;   Label: LAB_004495dd
    PUSH EBX                            ; 004495e2
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 004495e3 | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004495e8
    PUSH EAX                            ; 004495eb
    CALL crt_memory.c_free_FUN_005fe659 ; 004495ec | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004495f1
    MOV EAX,EBX                         ; 004495f4
    POP EBX                             ; 004495f6
    RET                                 ; 004495f7
    PUSH EAX                            ; 004495f8
        ;   Label: LAB_004495f8
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004495f9 | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004495fe
    MOV EAX,EBX                         ; 00449601
    POP EBX                             ; 00449603
    RET                                 ; 00449604

