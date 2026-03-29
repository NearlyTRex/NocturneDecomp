; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDynamite * __cdecl core_dynamite_cpp_CDynamite_dtor_FUN_0049d120(CDynamite *this_ptr,uint flags)
;
; Parameters:
; CDynamite *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDynamiteTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d120
        ;   Label: core_dynamite.cpp_CDynamite_dtor_FUN_0049d120
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049d121
    TEST byte ptr [ESP + 0xc],0x4       ; 0049d125
    JNZ 0x0049d146                      ; 0049d12a
        ;   XREF to: 0049d146 (CONDITIONAL_JUMP)  ; LAB_0049d146
    PUSH 0x1                            ; 0049d12c
    PUSH EBX                            ; 0049d12e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80 ; 0049d12f
        ;   XREF to: 005edf80 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005edf80(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049d134
    MOV DL,byte ptr [ESP + 0xc]         ; 0049d137
    MOV EBX,EAX                         ; 0049d13b
    TEST DL,0x2                         ; 0049d13d
    JNZ 0x0049d161                      ; 0049d140
        ;   XREF to: 0049d161 (CONDITIONAL_JUMP)  ; LAB_0049d161
    MOV EAX,EBX                         ; 0049d142
    POP EBX                             ; 0049d144
    RET                                 ; 0049d145
    PUSH 0x65d420                       ; 0049d146 | g_CDynamiteTypeInfo
        ;   Label: LAB_0049d146
    PUSH EBX                            ; 0049d14b
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 0049d14c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0049d151
    PUSH EAX                            ; 0049d154
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0049d155
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0049d15a
    MOV EAX,EBX                         ; 0049d15d
    POP EBX                             ; 0049d15f
    RET                                 ; 0049d160
    PUSH EAX                            ; 0049d161
        ;   Label: LAB_0049d161
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 0049d162
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0049d167
    MOV EAX,EBX                         ; 0049d16a
    POP EBX                             ; 0049d16c
    RET                                 ; 0049d16d

