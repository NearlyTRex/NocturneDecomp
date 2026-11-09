; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_dtor_FUN_00410730(CBaronWeapon *this_ptr,uint flags)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBaronWeaponTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410730
        ;   Label: core_baron.cpp_CBaronWeapon_dtor_FUN_00410730
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410731
    TEST byte ptr [ESP + 0xc],0x4       ; 00410735
    JNZ 0x00410756                      ; 0041073a
        ;   XREF to: 00410756 (CONDITIONAL_JUMP)  ; LAB_00410756
    PUSH 0x1                            ; 0041073c
    PUSH EBX                            ; 0041073e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0 ; 0041073f
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00410744
    MOV DL,byte ptr [ESP + 0xc]         ; 00410747
    MOV EBX,EAX                         ; 0041074b
    TEST DL,0x2                         ; 0041074d
    JNZ 0x00410771                      ; 00410750
        ;   XREF to: 00410771 (CONDITIONAL_JUMP)  ; LAB_00410771
    MOV EAX,EBX                         ; 00410752
    POP EBX                             ; 00410754
    RET                                 ; 00410755
    PUSH 0x5fbd30                       ; 00410756 | g_CBaronWeaponTypeInfo
        ;   Label: LAB_00410756
    PUSH EBX                            ; 0041075b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0041075c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 00410761
    PUSH EAX                            ; 00410764
    CALL crt_unknown.c_FUN_005c0336     ; 00410765
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0041076a
    MOV EAX,EBX                         ; 0041076d
    POP EBX                             ; 0041076f
    RET                                 ; 00410770
    PUSH EAX                            ; 00410771
        ;   Label: LAB_00410771
    CALL crt_unknown.c_FUN_005c0344     ; 00410772
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00410777
    MOV EAX,EBX                         ; 0041077a
    POP EBX                             ; 0041077c
    RET                                 ; 0041077d

