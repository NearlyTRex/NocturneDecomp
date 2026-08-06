; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMelee * __cdecl core_melee_cpp_CMelee_dtor_FUN_004cf1a0(CMelee *this_ptr,uint flags)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CMeleeTypeInfo_005a04f0
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_00553ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf1a0
        ;   Label: core_melee.cpp_CMelee_dtor_FUN_004cf1a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cf1a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004cf1a5
    JNZ 0x004cf1c6                      ; 004cf1aa
        ;   XREF to: 004cf1c6 (CONDITIONAL_JUMP)  ; LAB_004cf1c6
    PUSH 0x1                            ; 004cf1ac
    PUSH EBX                            ; 004cf1ae
    CALL core_weapon.cpp_CWeapon_dtor_FUN_00553ea0 ; 004cf1af
        ;   XREF to: 00553ea0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_00553ea0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004cf1b4
    MOV DL,byte ptr [ESP + 0xc]         ; 004cf1b7
    MOV EBX,EAX                         ; 004cf1bb
    TEST DL,0x2                         ; 004cf1bd
    JNZ 0x004cf1e1                      ; 004cf1c0
        ;   XREF to: 004cf1e1 (CONDITIONAL_JUMP)  ; LAB_004cf1e1
    MOV EAX,EBX                         ; 004cf1c2
    POP EBX                             ; 004cf1c4
    RET                                 ; 004cf1c5
    PUSH 0x5a04f0                       ; 004cf1c6 | g_CMeleeTypeInfo_005a04f0
        ;   Label: LAB_004cf1c6
    PUSH EBX                            ; 004cf1cb
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004cf1cc
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004cf1d1
    PUSH EAX                            ; 004cf1d4
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004cf1d5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004cf1da
    MOV EAX,EBX                         ; 004cf1dd
    POP EBX                             ; 004cf1df
    RET                                 ; 004cf1e0
    PUSH EAX                            ; 004cf1e1
        ;   Label: LAB_004cf1e1
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 004cf1e2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 004cf1e7
    MOV EAX,EBX                         ; 004cf1ea
    POP EBX                             ; 004cf1ec
    RET                                 ; 004cf1ed

