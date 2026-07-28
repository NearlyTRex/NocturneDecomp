; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWeapon * core_flashlit_cpp_FUN_0048ee00(CWeapon *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CFlashlightTypeInfo_0059d9f0
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_00553ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ee00
        ;   Label: core_flashlit.cpp_FUN_0048ee00
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048ee01
    TEST byte ptr [ESP + 0xc],0x4       ; 0048ee05
    JNZ 0x0048ee26                      ; 0048ee0a
        ;   XREF to: 0048ee26 (CONDITIONAL_JUMP)  ; LAB_0048ee26
    PUSH 0x1                            ; 0048ee0c
    PUSH EBX                            ; 0048ee0e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_00553ea0 ; 0048ee0f
        ;   XREF to: 00553ea0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_00553ea0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0048ee14
    MOV DL,byte ptr [ESP + 0xc]         ; 0048ee17
    MOV EBX,EAX                         ; 0048ee1b
    TEST DL,0x2                         ; 0048ee1d
    JNZ 0x0048ee41                      ; 0048ee20
        ;   XREF to: 0048ee41 (CONDITIONAL_JUMP)  ; LAB_0048ee41
    MOV EAX,EBX                         ; 0048ee22
    POP EBX                             ; 0048ee24
    RET                                 ; 0048ee25
    PUSH 0x59d9f0                       ; 0048ee26 | g_CFlashlightTypeInfo_0059d9f0
        ;   Label: LAB_0048ee26
    PUSH EBX                            ; 0048ee2b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0048ee2c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0048ee31
    PUSH EAX                            ; 0048ee34
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0048ee35
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0048ee3a
    MOV EAX,EBX                         ; 0048ee3d
    POP EBX                             ; 0048ee3f
    RET                                 ; 0048ee40
    PUSH EAX                            ; 0048ee41
        ;   Label: LAB_0048ee41
    CALL crt_unknown.c_FUN_00564494     ; 0048ee42
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 0048ee47
    MOV EAX,EBX                         ; 0048ee4a
    POP EBX                             ; 0048ee4c
    RET                                 ; 0048ee4d

