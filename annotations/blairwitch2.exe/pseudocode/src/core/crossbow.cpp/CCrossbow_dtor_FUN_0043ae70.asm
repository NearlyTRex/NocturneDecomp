; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_dtor_FUN_0043ae70(CCrossbow *this_ptr,uint flags)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CCrossbowTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_weapon.cpp_CWeapon_dtor_FUN_00589ae0
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ae70
        ;   Label: core_crossbow.cpp_CCrossbow_dtor_FUN_0043ae70
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043ae71
    TEST byte ptr [ESP + 0xc],0x4       ; 0043ae75
    JNZ 0x0043aead                      ; 0043ae7a
        ;   XREF to: 0043aead (CONDITIONAL_JUMP)  ; LAB_0043aead
    PUSH 0x1                            ; 0043ae7c
    ADD EBX,0x6d8                       ; 0043ae7e
    PUSH EBX                            ; 0043ae84
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 0043ae85
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043ae8a
    PUSH 0x1                            ; 0043ae8d
    LEA EBX,[EAX + 0xfffff928]          ; 0043ae8f
    PUSH EBX                            ; 0043ae95
    CALL core_weapon.cpp_CWeapon_dtor_FUN_00589ae0 ; 0043ae96
        ;   XREF to: 00589ae0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_00589ae0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043ae9b
    MOV DL,byte ptr [ESP + 0xc]         ; 0043ae9e
    MOV EBX,EAX                         ; 0043aea2
    TEST DL,0x2                         ; 0043aea4
    JNZ 0x0043aec8                      ; 0043aea7
        ;   XREF to: 0043aec8 (CONDITIONAL_JUMP)  ; LAB_0043aec8
    MOV EAX,EBX                         ; 0043aea9
    POP EBX                             ; 0043aeab
    RET                                 ; 0043aeac
    PUSH 0x5f4da0                       ; 0043aead | g_CCrossbowTypeInfo
        ;   Label: LAB_0043aead
    PUSH EBX                            ; 0043aeb2
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0043aeb3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 0043aeb8
    PUSH EAX                            ; 0043aebb
    CALL crt_unknown.c_FUN_005b7fce     ; 0043aebc
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0043aec1
    MOV EAX,EBX                         ; 0043aec4
    POP EBX                             ; 0043aec6
    RET                                 ; 0043aec7
    PUSH EAX                            ; 0043aec8
        ;   Label: LAB_0043aec8
    CALL crt_unknown.c_FUN_005b7fdc     ; 0043aec9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0043aece
    MOV EAX,EBX                         ; 0043aed1
    POP EBX                             ; 0043aed3
    RET                                 ; 0043aed4

