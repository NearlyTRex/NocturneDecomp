; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBindEvil * __cdecl core_bindevil_cpp_CBindEvil_dtor_FUN_0040f940(CBindEvil *this_ptr,uint flags)
;
; Parameters:
; CBindEvil *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBindEvilTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_0057aed0
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f940
        ;   Label: core_bindevil.cpp_CBindEvil_dtor_FUN_0040f940
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f941
    TEST byte ptr [ESP + 0xc],0x4       ; 0040f945
    JNZ 0x0040f966                      ; 0040f94a
        ;   XREF to: 0040f966 (CONDITIONAL_JUMP)  ; LAB_0040f966
    PUSH 0x1                            ; 0040f94c
    PUSH EBX                            ; 0040f94e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_0057aed0 ; 0040f94f
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_0057aed0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040f954
    MOV DL,byte ptr [ESP + 0xc]         ; 0040f957
    MOV EBX,EAX                         ; 0040f95b
    TEST DL,0x2                         ; 0040f95d
    JNZ 0x0040f981                      ; 0040f960
        ;   XREF to: 0040f981 (CONDITIONAL_JUMP)  ; LAB_0040f981
    MOV EAX,EBX                         ; 0040f962
    POP EBX                             ; 0040f964
    RET                                 ; 0040f965
    PUSH 0x5dbad0                       ; 0040f966 | g_CBindEvilTypeInfo
        ;   Label: LAB_0040f966
    PUSH EBX                            ; 0040f96b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0040f96c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0040f971
    PUSH EAX                            ; 0040f974
    CALL crt_unknown.c_FUN_005a30b6     ; 0040f975
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0040f97a
    MOV EAX,EBX                         ; 0040f97d
    POP EBX                             ; 0040f97f
    RET                                 ; 0040f980
    PUSH EAX                            ; 0040f981
        ;   Label: LAB_0040f981
    CALL crt_unknown.c_FUN_005a30c4     ; 0040f982
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0040f987
    MOV EAX,EBX                         ; 0040f98a
    POP EBX                             ; 0040f98c
    RET                                 ; 0040f98d

