; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMelee * __cdecl core_melee_cpp_CMelee_dtor_FUN_0050edf0(CMelee *this_ptr,uint flags)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CMeleeTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050edf0
        ;   Label: core_melee.cpp_CMelee_dtor_FUN_0050edf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050edf1
    TEST byte ptr [ESP + 0xc],0x4       ; 0050edf5
    JNZ 0x0050ee16                      ; 0050edfa
        ;   XREF to: 0050ee16 (CONDITIONAL_JUMP)  ; LAB_0050ee16
    PUSH 0x1                            ; 0050edfc
    PUSH EBX                            ; 0050edfe
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80 ; 0050edff
        ;   XREF to: 005edf80 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005edf80(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0050ee04
    MOV DL,byte ptr [ESP + 0xc]         ; 0050ee07
    MOV EBX,EAX                         ; 0050ee0b
    TEST DL,0x2                         ; 0050ee0d
    JNZ 0x0050ee31                      ; 0050ee10
        ;   XREF to: 0050ee31 (CONDITIONAL_JUMP)  ; LAB_0050ee31
    MOV EAX,EBX                         ; 0050ee12
    POP EBX                             ; 0050ee14
    RET                                 ; 0050ee15
    PUSH 0x661280                       ; 0050ee16 | g_CMeleeTypeInfo
        ;   Label: LAB_0050ee16
    PUSH EBX                            ; 0050ee1b
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 0050ee1c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0050ee21
    PUSH EAX                            ; 0050ee24
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0050ee25
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0050ee2a
    MOV EAX,EBX                         ; 0050ee2d
    POP EBX                             ; 0050ee2f
    RET                                 ; 0050ee30
    PUSH EAX                            ; 0050ee31
        ;   Label: LAB_0050ee31
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0050ee32
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0050ee37
    MOV EAX,EBX                         ; 0050ee3a
    POP EBX                             ; 0050ee3c
    RET                                 ; 0050ee3d

