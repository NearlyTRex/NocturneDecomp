; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShotgun * __cdecl core_shotgun_cpp_CShotgun_dtor_FUN_00562360(CShotgun *this_ptr,uint flags)
;
; Parameters:
; CShotgun *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CShotgunTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562360
        ;   Label: core_shotgun.cpp_CShotgun_dtor_FUN_00562360
    MOV EBX,dword ptr [ESP + 0x8]       ; 00562361
    TEST byte ptr [ESP + 0xc],0x4       ; 00562365
    JNZ 0x00562386                      ; 0056236a
        ;   XREF to: 00562386 (CONDITIONAL_JUMP)  ; LAB_00562386
    PUSH 0x1                            ; 0056236c
    PUSH EBX                            ; 0056236e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0 ; 0056236f
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00562374
    MOV DL,byte ptr [ESP + 0xc]         ; 00562377
    MOV EBX,EAX                         ; 0056237b
    TEST DL,0x2                         ; 0056237d
    JNZ 0x005623a1                      ; 00562380
        ;   XREF to: 005623a1 (CONDITIONAL_JUMP)  ; LAB_005623a1
    MOV EAX,EBX                         ; 00562382
    POP EBX                             ; 00562384
    RET                                 ; 00562385
    PUSH 0x6055e0                       ; 00562386 | g_CShotgunTypeInfo
        ;   Label: LAB_00562386
    PUSH EBX                            ; 0056238b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0056238c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00562391
    PUSH EAX                            ; 00562394
    CALL crt_unknown.c_FUN_005c0336     ; 00562395
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0056239a
    MOV EAX,EBX                         ; 0056239d
    POP EBX                             ; 0056239f
    RET                                 ; 005623a0
    PUSH EAX                            ; 005623a1
        ;   Label: LAB_005623a1
    CALL crt_unknown.c_FUN_005c0344     ; 005623a2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 005623a7
    MOV EAX,EBX                         ; 005623aa
    POP EBX                             ; 005623ac
    RET                                 ; 005623ad

