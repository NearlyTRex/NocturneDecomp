; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDynamite * __cdecl core_dynamite_cpp_CDynamite_dtor_FUN_004928d0(CDynamite *this_ptr,uint flags)
;
; Parameters:
; CDynamite *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDynamiteTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004928d0
        ;   Label: core_dynamite.cpp_CDynamite_dtor_FUN_004928d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004928d1
    TEST byte ptr [ESP + 0xc],0x4       ; 004928d5
    JNZ 0x004928f6                      ; 004928da
        ;   XREF to: 004928f6 (CONDITIONAL_JUMP)  ; LAB_004928f6
    PUSH 0x1                            ; 004928dc
    PUSH EBX                            ; 004928de
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0 ; 004928df
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004928e4
    MOV DL,byte ptr [ESP + 0xc]         ; 004928e7
    MOV EBX,EAX                         ; 004928eb
    TEST DL,0x2                         ; 004928ed
    JNZ 0x00492911                      ; 004928f0
        ;   XREF to: 00492911 (CONDITIONAL_JUMP)  ; LAB_00492911
    MOV EAX,EBX                         ; 004928f2
    POP EBX                             ; 004928f4
    RET                                 ; 004928f5
    PUSH 0x5ff7c0                       ; 004928f6 | g_CDynamiteTypeInfo
        ;   Label: LAB_004928f6
    PUSH EBX                            ; 004928fb
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004928fc
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00492901
    PUSH EAX                            ; 00492904
    CALL crt_unknown.c_FUN_005c0336     ; 00492905
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0049290a
    MOV EAX,EBX                         ; 0049290d
    POP EBX                             ; 0049290f
    RET                                 ; 00492910
    PUSH EAX                            ; 00492911
        ;   Label: LAB_00492911
    CALL crt_unknown.c_FUN_005c0344     ; 00492912
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00492917
    MOV EAX,EBX                         ; 0049291a
    POP EBX                             ; 0049291c
    RET                                 ; 0049291d

