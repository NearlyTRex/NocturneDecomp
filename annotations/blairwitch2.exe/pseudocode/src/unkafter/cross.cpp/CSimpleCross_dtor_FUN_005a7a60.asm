; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSimpleCross * unkafter_cross_cpp_CSimpleCross_dtor_FUN_005a7a60(CSimpleCross *this_ptr,uint flags)
;
; Parameters:
; CSimpleCross *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSimpleCrossTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_00589ae0
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7a60
        ;   Label: unkafter_cross.cpp_CSimpleCross_dtor_FUN_005a7a60
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a7a61
    TEST byte ptr [ESP + 0xc],0x4       ; 005a7a65
    JNZ 0x005a7a86                      ; 005a7a6a
        ;   XREF to: 005a7a86 (CONDITIONAL_JUMP)  ; LAB_005a7a86
    PUSH 0x1                            ; 005a7a6c
    PUSH EBX                            ; 005a7a6e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_00589ae0 ; 005a7a6f
        ;   XREF to: 00589ae0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_00589ae0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a7a74
    MOV DL,byte ptr [ESP + 0xc]         ; 005a7a77
    MOV EBX,EAX                         ; 005a7a7b
    TEST DL,0x2                         ; 005a7a7d
    JNZ 0x005a7aa1                      ; 005a7a80
        ;   XREF to: 005a7aa1 (CONDITIONAL_JUMP)  ; LAB_005a7aa1
    MOV EAX,EBX                         ; 005a7a82
    POP EBX                             ; 005a7a84
    RET                                 ; 005a7a85
    PUSH 0x6000c0                       ; 005a7a86 | g_CSimpleCrossTypeInfo
        ;   Label: LAB_005a7a86
    PUSH EBX                            ; 005a7a8b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 005a7a8c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 005a7a91
    PUSH EAX                            ; 005a7a94
    CALL crt_unknown.c_FUN_005b7fce     ; 005a7a95
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005a7a9a
    MOV EAX,EBX                         ; 005a7a9d
    POP EBX                             ; 005a7a9f
    RET                                 ; 005a7aa0
    PUSH EAX                            ; 005a7aa1
        ;   Label: LAB_005a7aa1
    CALL crt_unknown.c_FUN_005b7fdc     ; 005a7aa2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005a7aa7
    MOV EAX,EBX                         ; 005a7aaa
    POP EBX                             ; 005a7aac
    RET                                 ; 005a7aad

