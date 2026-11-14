; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_dtor_FUN_004a76a0(CFlashlight *this_ptr,uint flags)
;
; Parameters:
; CFlashlight *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFlashlightTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_0057aed0
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a76a0
        ;   Label: core_flashlit.cpp_CFlashlight_dtor_FUN_004a76a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a76a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004a76a5
    JNZ 0x004a76c6                      ; 004a76aa
        ;   XREF to: 004a76c6 (CONDITIONAL_JUMP)  ; LAB_004a76c6
    PUSH 0x1                            ; 004a76ac
    PUSH EBX                            ; 004a76ae
    CALL core_weapon.cpp_CWeapon_dtor_FUN_0057aed0 ; 004a76af
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_0057aed0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a76b4
    MOV DL,byte ptr [ESP + 0xc]         ; 004a76b7
    MOV EBX,EAX                         ; 004a76bb
    TEST DL,0x2                         ; 004a76bd
    JNZ 0x004a76e1                      ; 004a76c0
        ;   XREF to: 004a76e1 (CONDITIONAL_JUMP)  ; LAB_004a76e1
    MOV EAX,EBX                         ; 004a76c2
    POP EBX                             ; 004a76c4
    RET                                 ; 004a76c5
    PUSH 0x5e0190                       ; 004a76c6 | g_CFlashlightTypeInfo
        ;   Label: LAB_004a76c6
    PUSH EBX                            ; 004a76cb
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004a76cc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004a76d1
    PUSH EAX                            ; 004a76d4
    CALL crt_unknown.c_FUN_005a30b6     ; 004a76d5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004a76da
    MOV EAX,EBX                         ; 004a76dd
    POP EBX                             ; 004a76df
    RET                                 ; 004a76e0
    PUSH EAX                            ; 004a76e1
        ;   Label: LAB_004a76e1
    CALL crt_unknown.c_FUN_005a30c4     ; 004a76e2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004a76e7
    MOV EAX,EBX                         ; 004a76ea
    POP EBX                             ; 004a76ec
    RET                                 ; 004a76ed

