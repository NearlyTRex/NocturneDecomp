; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_dtor_FUN_004a11b0(CFlashlight *this_ptr,uint flags)
;
; Parameters:
; CFlashlight *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFlashlightTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_00589ae0
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a11b0
        ;   Label: core_flashlit.cpp_CFlashlight_dtor_FUN_004a11b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a11b1
    TEST byte ptr [ESP + 0xc],0x4       ; 004a11b5
    JNZ 0x004a11d6                      ; 004a11ba
        ;   XREF to: 004a11d6 (CONDITIONAL_JUMP)  ; LAB_004a11d6
    PUSH 0x1                            ; 004a11bc
    PUSH EBX                            ; 004a11be
    CALL core_weapon.cpp_CWeapon_dtor_FUN_00589ae0 ; 004a11bf
        ;   XREF to: 00589ae0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_00589ae0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a11c4
    MOV DL,byte ptr [ESP + 0xc]         ; 004a11c7
    MOV EBX,EAX                         ; 004a11cb
    TEST DL,0x2                         ; 004a11cd
    JNZ 0x004a11f1                      ; 004a11d0
        ;   XREF to: 004a11f1 (CONDITIONAL_JUMP)  ; LAB_004a11f1
    MOV EAX,EBX                         ; 004a11d2
    POP EBX                             ; 004a11d4
    RET                                 ; 004a11d5
    PUSH 0x5f6de0                       ; 004a11d6 | g_CFlashlightTypeInfo
        ;   Label: LAB_004a11d6
    PUSH EBX                            ; 004a11db
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004a11dc
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004a11e1
    PUSH EAX                            ; 004a11e4
    CALL crt_unknown.c_FUN_005b7fce     ; 004a11e5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004a11ea
    MOV EAX,EBX                         ; 004a11ed
    POP EBX                             ; 004a11ef
    RET                                 ; 004a11f0
    PUSH EAX                            ; 004a11f1
        ;   Label: LAB_004a11f1
    CALL crt_unknown.c_FUN_005b7fdc     ; 004a11f2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004a11f7
    MOV EAX,EBX                         ; 004a11fa
    POP EBX                             ; 004a11fc
    RET                                 ; 004a11fd

