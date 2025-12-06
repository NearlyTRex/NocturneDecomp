; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CFlashlight * core_flamegun.cpp_FUN_004cbc60(CFlashlight * this_ptr, uint d1, uint d2)
;
; Parameters:
; CFlashlight *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CFlashlightTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbc60
        ;   Label: core_flamegun.cpp_FUN_004cbc60
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cbc61
    TEST byte ptr [ESP + 0xc],0x4       ; 004cbc65
    JNZ 0x004cbc86                      ; 004cbc6a | LAB_004cbc86
        ;   XREF to: 004cbc86 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 004cbc6c
    PUSH EBX                            ; 004cbc6e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80 ; 004cbc6f | CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005edf80(CWeapon * this_ptr, uint d1, uint d2, uint d3)
        ;   XREF to: 005edf80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004cbc74
    MOV DL,byte ptr [ESP + 0xc]         ; 004cbc77
    MOV EBX,EAX                         ; 004cbc7b
    TEST DL,0x2                         ; 004cbc7d
    JNZ 0x004cbca1                      ; 004cbc80 | LAB_004cbca1
        ;   XREF to: 004cbca1 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 004cbc82
    POP EBX                             ; 004cbc84
    RET                                 ; 004cbc85
    PUSH 0x65e4e0                       ; 004cbc86 | WatcomTypeInfo g_CFlashlightTypeInfo
        ;   Label: LAB_004cbc86
    PUSH EBX                            ; 004cbc8b
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 004cbc8c | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004cbc91
    PUSH EAX                            ; 004cbc94
    CALL crt_memory.c_free_FUN_005fe659 ; 004cbc95 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004cbc9a
    MOV EAX,EBX                         ; 004cbc9d
    POP EBX                             ; 004cbc9f
    RET                                 ; 004cbca0
    PUSH EAX                            ; 004cbca1
        ;   Label: LAB_004cbca1
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004cbca2 | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004cbca7
    MOV EAX,EBX                         ; 004cbcaa
    POP EBX                             ; 004cbcac
    RET                                 ; 004cbcad

