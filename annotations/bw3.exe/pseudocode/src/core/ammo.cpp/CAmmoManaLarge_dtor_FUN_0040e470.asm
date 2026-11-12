; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAmmoManaLarge * core_ammo_cpp_CAmmoManaLarge_dtor_FUN_0040e470(CAmmoManaLarge *this_ptr,uint flags)
;
; Parameters:
; CAmmoManaLarge * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CAmmoManaLargeTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e470
        ;   Label: core_ammo.cpp_CAmmoManaLarge_dtor_FUN_0040e470
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e471
    TEST byte ptr [ESP + 0xc],0x4       ; 0040e475
    JNZ 0x0040e496                      ; 0040e47a
        ;   XREF to: 0040e496 (CONDITIONAL_JUMP)  ; LAB_0040e496
    PUSH 0x1                            ; 0040e47c
    PUSH EBX                            ; 0040e47e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0040e47f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040e484
    MOV DL,byte ptr [ESP + 0xc]         ; 0040e487
    MOV EBX,EAX                         ; 0040e48b
    TEST DL,0x2                         ; 0040e48d
    JNZ 0x0040e4b1                      ; 0040e490
        ;   XREF to: 0040e4b1 (CONDITIONAL_JUMP)  ; LAB_0040e4b1
    MOV EAX,EBX                         ; 0040e492
    POP EBX                             ; 0040e494
    RET                                 ; 0040e495
    PUSH 0x5db4d0                       ; 0040e496 | g_CAmmoManaLargeTypeInfo
        ;   Label: LAB_0040e496
    PUSH EBX                            ; 0040e49b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0040e49c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0040e4a1
    PUSH EAX                            ; 0040e4a4
    CALL crt_unknown.c_FUN_005a30b6     ; 0040e4a5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0040e4aa
    MOV EAX,EBX                         ; 0040e4ad
    POP EBX                             ; 0040e4af
    RET                                 ; 0040e4b0
    PUSH EAX                            ; 0040e4b1
        ;   Label: LAB_0040e4b1
    CALL crt_unknown.c_FUN_005a30c4     ; 0040e4b2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0040e4b7
    MOV EAX,EBX                         ; 0040e4ba
    POP EBX                             ; 0040e4bc
    RET                                 ; 0040e4bd

