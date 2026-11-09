; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMeleeAxe * core_meleeaxe_cpp_CMeleeAxe_dtor_FUN_0059d300(CMeleeAxe *this_ptr,uint flags)
;
; Parameters:
; CMeleeAxe *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CMeleeAxeTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_00589ae0
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d300
        ;   Label: core_meleeaxe.cpp_CMeleeAxe_dtor_FUN_0059d300
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059d301
    TEST byte ptr [ESP + 0xc],0x4       ; 0059d305
    JNZ 0x0059d326                      ; 0059d30a
        ;   XREF to: 0059d326 (CONDITIONAL_JUMP)  ; LAB_0059d326
    PUSH 0x1                            ; 0059d30c
    PUSH EBX                            ; 0059d30e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_00589ae0 ; 0059d30f
        ;   XREF to: 00589ae0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_00589ae0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059d314
    MOV DL,byte ptr [ESP + 0xc]         ; 0059d317
    MOV EBX,EAX                         ; 0059d31b
    TEST DL,0x2                         ; 0059d31d
    JNZ 0x0059d341                      ; 0059d320
        ;   XREF to: 0059d341 (CONDITIONAL_JUMP)  ; LAB_0059d341
    MOV EAX,EBX                         ; 0059d322
    POP EBX                             ; 0059d324
    RET                                 ; 0059d325
    PUSH 0x5feb40                       ; 0059d326 | g_CMeleeAxeTypeInfo
        ;   Label: LAB_0059d326
    PUSH EBX                            ; 0059d32b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0059d32c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 0059d331
    PUSH EAX                            ; 0059d334
    CALL crt_unknown.c_FUN_005b7fce     ; 0059d335
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0059d33a
    MOV EAX,EBX                         ; 0059d33d
    POP EBX                             ; 0059d33f
    RET                                 ; 0059d340
    PUSH EAX                            ; 0059d341
        ;   Label: LAB_0059d341
    CALL crt_unknown.c_FUN_005b7fdc     ; 0059d342
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0059d347
    MOV EAX,EBX                         ; 0059d34a
    POP EBX                             ; 0059d34c
    RET                                 ; 0059d34d

