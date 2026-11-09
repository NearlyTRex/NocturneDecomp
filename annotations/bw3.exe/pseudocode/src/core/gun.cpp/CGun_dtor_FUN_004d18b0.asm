; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGun * __cdecl core_gun_cpp_CGun_dtor_FUN_004d18b0(CGun *this_ptr,uint flags)
;
; Parameters:
; CGun *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CGunTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_0057aed0
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d18b0
        ;   Label: core_gun.cpp_CGun_dtor_FUN_004d18b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d18b1
    TEST byte ptr [ESP + 0xc],0x4       ; 004d18b5
    JNZ 0x004d18d6                      ; 004d18ba
        ;   XREF to: 004d18d6 (CONDITIONAL_JUMP)  ; LAB_004d18d6
    PUSH 0x1                            ; 004d18bc
    PUSH EBX                            ; 004d18be
    CALL core_weapon.cpp_CWeapon_dtor_FUN_0057aed0 ; 004d18bf
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_0057aed0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d18c4
    MOV DL,byte ptr [ESP + 0xc]         ; 004d18c7
    MOV EBX,EAX                         ; 004d18cb
    TEST DL,0x2                         ; 004d18cd
    JNZ 0x004d18f1                      ; 004d18d0
        ;   XREF to: 004d18f1 (CONDITIONAL_JUMP)  ; LAB_004d18f1
    MOV EAX,EBX                         ; 004d18d2
    POP EBX                             ; 004d18d4
    RET                                 ; 004d18d5
    PUSH 0x5e1190                       ; 004d18d6 | g_CGunTypeInfo
        ;   Label: LAB_004d18d6
    PUSH EBX                            ; 004d18db
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004d18dc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 004d18e1
    PUSH EAX                            ; 004d18e4
    CALL crt_unknown.c_FUN_005a30b6     ; 004d18e5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004d18ea
    MOV EAX,EBX                         ; 004d18ed
    POP EBX                             ; 004d18ef
    RET                                 ; 004d18f0
    PUSH EAX                            ; 004d18f1
        ;   Label: LAB_004d18f1
    CALL crt_unknown.c_FUN_005a30c4     ; 004d18f2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004d18f7
    MOV EAX,EBX                         ; 004d18fa
    POP EBX                             ; 004d18fc
    RET                                 ; 004d18fd

