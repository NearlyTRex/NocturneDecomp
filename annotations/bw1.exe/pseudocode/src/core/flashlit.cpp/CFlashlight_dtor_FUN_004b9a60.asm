; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_dtor_FUN_004b9a60(CFlashlight *this_ptr,uint flags)
;
; Parameters:
; CFlashlight *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFlashlightTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9a60
        ;   Label: core_flashlit.cpp_CFlashlight_dtor_FUN_004b9a60
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b9a61
    TEST byte ptr [ESP + 0xc],0x4       ; 004b9a65
    JNZ 0x004b9a86                      ; 004b9a6a
        ;   XREF to: 004b9a86 (CONDITIONAL_JUMP)  ; LAB_004b9a86
    PUSH 0x1                            ; 004b9a6c
    PUSH EBX                            ; 004b9a6e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0 ; 004b9a6f
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b9a74
    MOV DL,byte ptr [ESP + 0xc]         ; 004b9a77
    MOV EBX,EAX                         ; 004b9a7b
    TEST DL,0x2                         ; 004b9a7d
    JNZ 0x004b9aa1                      ; 004b9a80
        ;   XREF to: 004b9aa1 (CONDITIONAL_JUMP)  ; LAB_004b9aa1
    MOV EAX,EBX                         ; 004b9a82
    POP EBX                             ; 004b9a84
    RET                                 ; 004b9a85
    PUSH 0x600830                       ; 004b9a86 | g_CFlashlightTypeInfo
        ;   Label: LAB_004b9a86
    PUSH EBX                            ; 004b9a8b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004b9a8c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 004b9a91
    PUSH EAX                            ; 004b9a94
    CALL crt_unknown.c_FUN_005c0336     ; 004b9a95
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004b9a9a
    MOV EAX,EBX                         ; 004b9a9d
    POP EBX                             ; 004b9a9f
    RET                                 ; 004b9aa0
    PUSH EAX                            ; 004b9aa1
        ;   Label: LAB_004b9aa1
    CALL crt_unknown.c_FUN_005c0344     ; 004b9aa2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004b9aa7
    MOV EAX,EBX                         ; 004b9aaa
    POP EBX                             ; 004b9aac
    RET                                 ; 004b9aad

