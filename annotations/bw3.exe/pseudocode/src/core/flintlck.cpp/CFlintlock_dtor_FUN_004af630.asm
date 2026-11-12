; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlintlock * core_flintlck_cpp_CFlintlock_dtor_FUN_004af630(CFlintlock *this_ptr,uint flags)
;
; Parameters:
; CFlintlock *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFlintlockTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_0057aed0
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af630
        ;   Label: core_flintlck.cpp_CFlintlock_dtor_FUN_004af630
    MOV EBX,dword ptr [ESP + 0x8]       ; 004af631
    TEST byte ptr [ESP + 0xc],0x4       ; 004af635
    JNZ 0x004af656                      ; 004af63a
        ;   XREF to: 004af656 (CONDITIONAL_JUMP)  ; LAB_004af656
    PUSH 0x1                            ; 004af63c
    PUSH EBX                            ; 004af63e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_0057aed0 ; 004af63f
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_0057aed0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004af644
    MOV DL,byte ptr [ESP + 0xc]         ; 004af647
    MOV EBX,EAX                         ; 004af64b
    TEST DL,0x2                         ; 004af64d
    JNZ 0x004af671                      ; 004af650
        ;   XREF to: 004af671 (CONDITIONAL_JUMP)  ; LAB_004af671
    MOV EAX,EBX                         ; 004af652
    POP EBX                             ; 004af654
    RET                                 ; 004af655
    PUSH 0x5e0660                       ; 004af656 | g_CFlintlockTypeInfo
        ;   Label: LAB_004af656
    PUSH EBX                            ; 004af65b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004af65c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004af661
    PUSH EAX                            ; 004af664
    CALL crt_unknown.c_FUN_005a30b6     ; 004af665
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004af66a
    MOV EAX,EBX                         ; 004af66d
    POP EBX                             ; 004af66f
    RET                                 ; 004af670
    PUSH EAX                            ; 004af671
        ;   Label: LAB_004af671
    CALL crt_unknown.c_FUN_005a30c4     ; 004af672
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004af677
    MOV EAX,EBX                         ; 004af67a
    POP EBX                             ; 004af67c
    RET                                 ; 004af67d

