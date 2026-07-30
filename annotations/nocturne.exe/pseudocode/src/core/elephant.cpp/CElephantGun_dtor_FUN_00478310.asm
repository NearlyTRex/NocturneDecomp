; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWeapon * core_elephant_cpp_CElephantGun_dtor_FUN_00478310(CWeapon *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CElephantGunTypeInfo_0059cc30
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_00553ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478310
        ;   Label: core_elephant.cpp_CElephantGun_dtor_FUN_00478310
    MOV EBX,dword ptr [ESP + 0x8]       ; 00478311
    TEST byte ptr [ESP + 0xc],0x4       ; 00478315
    JNZ 0x00478336                      ; 0047831a
        ;   XREF to: 00478336 (CONDITIONAL_JUMP)  ; LAB_00478336
    PUSH 0x1                            ; 0047831c
    PUSH EBX                            ; 0047831e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_00553ea0 ; 0047831f
        ;   XREF to: 00553ea0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_00553ea0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00478324
    MOV DL,byte ptr [ESP + 0xc]         ; 00478327
    MOV EBX,EAX                         ; 0047832b
    TEST DL,0x2                         ; 0047832d
    JNZ 0x00478351                      ; 00478330
        ;   XREF to: 00478351 (CONDITIONAL_JUMP)  ; LAB_00478351
    MOV EAX,EBX                         ; 00478332
    POP EBX                             ; 00478334
    RET                                 ; 00478335
    PUSH 0x59cc30                       ; 00478336 | g_CElephantGunTypeInfo_0059cc30
        ;   Label: LAB_00478336
    PUSH EBX                            ; 0047833b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0047833c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00478341
    PUSH EAX                            ; 00478344
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00478345
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0047834a
    MOV EAX,EBX                         ; 0047834d
    POP EBX                             ; 0047834f
    RET                                 ; 00478350
    PUSH EAX                            ; 00478351
        ;   Label: LAB_00478351
    CALL crt_unknown.c_FUN_00564494     ; 00478352
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00478357
    MOV EAX,EBX                         ; 0047835a
    POP EBX                             ; 0047835c
    RET                                 ; 0047835d

