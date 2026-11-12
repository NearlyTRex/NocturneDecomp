; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGun * __cdecl core_gun_cpp_CGun_dtor_FUN_004e8f70(CGun *this_ptr,uint flags)
;
; Parameters:
; CGun *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CGunTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e8f70
        ;   Label: core_gun.cpp_CGun_dtor_FUN_004e8f70
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e8f71
    TEST byte ptr [ESP + 0xc],0x4       ; 004e8f75
    JNZ 0x004e8f96                      ; 004e8f7a
        ;   XREF to: 004e8f96 (CONDITIONAL_JUMP)  ; LAB_004e8f96
    PUSH 0x1                            ; 004e8f7c
    PUSH EBX                            ; 004e8f7e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0 ; 004e8f7f
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e8f84
    MOV DL,byte ptr [ESP + 0xc]         ; 004e8f87
    MOV EBX,EAX                         ; 004e8f8b
    TEST DL,0x2                         ; 004e8f8d
    JNZ 0x004e8fb1                      ; 004e8f90
        ;   XREF to: 004e8fb1 (CONDITIONAL_JUMP)  ; LAB_004e8fb1
    MOV EAX,EBX                         ; 004e8f92
    POP EBX                             ; 004e8f94
    RET                                 ; 004e8f95
    PUSH 0x601a20                       ; 004e8f96 | g_CGunTypeInfo
        ;   Label: LAB_004e8f96
    PUSH EBX                            ; 004e8f9b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004e8f9c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004e8fa1
    PUSH EAX                            ; 004e8fa4
    CALL crt_unknown.c_FUN_005c0336     ; 004e8fa5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004e8faa
    MOV EAX,EBX                         ; 004e8fad
    POP EBX                             ; 004e8faf
    RET                                 ; 004e8fb0
    PUSH EAX                            ; 004e8fb1
        ;   Label: LAB_004e8fb1
    CALL crt_unknown.c_FUN_005c0344     ; 004e8fb2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004e8fb7
    MOV EAX,EBX                         ; 004e8fba
    POP EBX                             ; 004e8fbc
    RET                                 ; 004e8fbd

