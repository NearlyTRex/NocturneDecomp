; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightPis * __cdecl core_lightpis_cpp_CLightPis_dtor_FUN_00502cc0(CLightPis *this_ptr,uint flags)
;
; Parameters:
; CLightPis *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLightPisTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502cc0
        ;   Label: core_lightpis.cpp_CLightPis_dtor_FUN_00502cc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00502cc1
    TEST byte ptr [ESP + 0xc],0x4       ; 00502cc5
    JNZ 0x00502ce6                      ; 00502cca
        ;   XREF to: 00502ce6 (CONDITIONAL_JUMP)  ; LAB_00502ce6
    PUSH 0x1                            ; 00502ccc
    PUSH EBX                            ; 00502cce
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0 ; 00502ccf
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00502cd4
    MOV DL,byte ptr [ESP + 0xc]         ; 00502cd7
    MOV EBX,EAX                         ; 00502cdb
    TEST DL,0x2                         ; 00502cdd
    JNZ 0x00502d01                      ; 00502ce0
        ;   XREF to: 00502d01 (CONDITIONAL_JUMP)  ; LAB_00502d01
    MOV EAX,EBX                         ; 00502ce2
    POP EBX                             ; 00502ce4
    RET                                 ; 00502ce5
    PUSH 0x603290                       ; 00502ce6 | g_CLightPisTypeInfo
        ;   Label: LAB_00502ce6
    PUSH EBX                            ; 00502ceb
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00502cec
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00502cf1
    PUSH EAX                            ; 00502cf4
    CALL crt_unknown.c_FUN_005c0336     ; 00502cf5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00502cfa
    MOV EAX,EBX                         ; 00502cfd
    POP EBX                             ; 00502cff
    RET                                 ; 00502d00
    PUSH EAX                            ; 00502d01
        ;   Label: LAB_00502d01
    CALL crt_unknown.c_FUN_005c0344     ; 00502d02
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00502d07
    MOV EAX,EBX                         ; 00502d0a
    POP EBX                             ; 00502d0c
    RET                                 ; 00502d0d

