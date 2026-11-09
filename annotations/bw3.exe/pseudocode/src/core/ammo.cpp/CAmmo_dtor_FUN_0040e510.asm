; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAmmo * __cdecl core_ammo_cpp_CAmmo_dtor_FUN_0040e510(CAmmo *this_ptr,uint flags)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CAmmoTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e510
        ;   Label: core_ammo.cpp_CAmmo_dtor_FUN_0040e510
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e511
    TEST byte ptr [ESP + 0xc],0x4       ; 0040e515
    JNZ 0x0040e536                      ; 0040e51a
        ;   XREF to: 0040e536 (CONDITIONAL_JUMP)  ; LAB_0040e536
    PUSH 0x1                            ; 0040e51c
    PUSH EBX                            ; 0040e51e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0040e51f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040e524
    MOV DL,byte ptr [ESP + 0xc]         ; 0040e527
    MOV EBX,EAX                         ; 0040e52b
    TEST DL,0x2                         ; 0040e52d
    JNZ 0x0040e551                      ; 0040e530
        ;   XREF to: 0040e551 (CONDITIONAL_JUMP)  ; LAB_0040e551
    MOV EAX,EBX                         ; 0040e532
    POP EBX                             ; 0040e534
    RET                                 ; 0040e535
    PUSH 0x5db510                       ; 0040e536 | g_CAmmoTypeInfo
        ;   Label: LAB_0040e536
    PUSH EBX                            ; 0040e53b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0040e53c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 0040e541
    PUSH EAX                            ; 0040e544
    CALL crt_unknown.c_FUN_005a30b6     ; 0040e545
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0040e54a
    MOV EAX,EBX                         ; 0040e54d
    POP EBX                             ; 0040e54f
    RET                                 ; 0040e550
    PUSH EAX                            ; 0040e551
        ;   Label: LAB_0040e551
    CALL crt_unknown.c_FUN_005a30c4     ; 0040e552
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0040e557
    MOV EAX,EBX                         ; 0040e55a
    POP EBX                             ; 0040e55c
    RET                                 ; 0040e55d

