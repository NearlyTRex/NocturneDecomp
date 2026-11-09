; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CExorcism * core_exorcism_cpp_CExorcism_dtor_FUN_0048b730(CExorcism *this_ptr,uint flags)
;
; Parameters:
; CExorcism *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CExorcismTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_0057aed0
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048b730
        ;   Label: core_exorcism.cpp_CExorcism_dtor_FUN_0048b730
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048b731
    TEST byte ptr [ESP + 0xc],0x4       ; 0048b735
    JNZ 0x0048b756                      ; 0048b73a
        ;   XREF to: 0048b756 (CONDITIONAL_JUMP)  ; LAB_0048b756
    PUSH 0x1                            ; 0048b73c
    PUSH EBX                            ; 0048b73e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_0057aed0 ; 0048b73f
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_0057aed0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0048b744
    MOV DL,byte ptr [ESP + 0xc]         ; 0048b747
    MOV EBX,EAX                         ; 0048b74b
    TEST DL,0x2                         ; 0048b74d
    JNZ 0x0048b771                      ; 0048b750
        ;   XREF to: 0048b771 (CONDITIONAL_JUMP)  ; LAB_0048b771
    MOV EAX,EBX                         ; 0048b752
    POP EBX                             ; 0048b754
    RET                                 ; 0048b755
    PUSH 0x5df5d0                       ; 0048b756 | g_CExorcismTypeInfo
        ;   Label: LAB_0048b756
    PUSH EBX                            ; 0048b75b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0048b75c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 0048b761
    PUSH EAX                            ; 0048b764
    CALL crt_unknown.c_FUN_005a30b6     ; 0048b765
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0048b76a
    MOV EAX,EBX                         ; 0048b76d
    POP EBX                             ; 0048b76f
    RET                                 ; 0048b770
    PUSH EAX                            ; 0048b771
        ;   Label: LAB_0048b771
    CALL crt_unknown.c_FUN_005a30c4     ; 0048b772
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0048b777
    MOV EAX,EBX                         ; 0048b77a
    POP EBX                             ; 0048b77c
    RET                                 ; 0048b77d

