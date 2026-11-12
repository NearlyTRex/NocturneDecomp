; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHeal * core_heal_cpp_CHeal_dtor_FUN_004d1cb0(CHeal *this_ptr,uint flags)
;
; Parameters:
; CHeal *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CHealTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_0057aed0
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d1cb0
        ;   Label: core_heal.cpp_CHeal_dtor_FUN_004d1cb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d1cb1
    TEST byte ptr [ESP + 0xc],0x4       ; 004d1cb5
    JNZ 0x004d1cd6                      ; 004d1cba
        ;   XREF to: 004d1cd6 (CONDITIONAL_JUMP)  ; LAB_004d1cd6
    PUSH 0x1                            ; 004d1cbc
    PUSH EBX                            ; 004d1cbe
    CALL core_weapon.cpp_CWeapon_dtor_FUN_0057aed0 ; 004d1cbf
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_0057aed0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d1cc4
    MOV DL,byte ptr [ESP + 0xc]         ; 004d1cc7
    MOV EBX,EAX                         ; 004d1ccb
    TEST DL,0x2                         ; 004d1ccd
    JNZ 0x004d1cf1                      ; 004d1cd0
        ;   XREF to: 004d1cf1 (CONDITIONAL_JUMP)  ; LAB_004d1cf1
    MOV EAX,EBX                         ; 004d1cd2
    POP EBX                             ; 004d1cd4
    RET                                 ; 004d1cd5
    PUSH 0x5e12d0                       ; 004d1cd6 | g_CHealTypeInfo
        ;   Label: LAB_004d1cd6
    PUSH EBX                            ; 004d1cdb
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004d1cdc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004d1ce1
    PUSH EAX                            ; 004d1ce4
    CALL crt_unknown.c_FUN_005a30b6     ; 004d1ce5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004d1cea
    MOV EAX,EBX                         ; 004d1ced
    POP EBX                             ; 004d1cef
    RET                                 ; 004d1cf0
    PUSH EAX                            ; 004d1cf1
        ;   Label: LAB_004d1cf1
    CALL crt_unknown.c_FUN_005a30c4     ; 004d1cf2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004d1cf7
    MOV EAX,EBX                         ; 004d1cfa
    POP EBX                             ; 004d1cfc
    RET                                 ; 004d1cfd

