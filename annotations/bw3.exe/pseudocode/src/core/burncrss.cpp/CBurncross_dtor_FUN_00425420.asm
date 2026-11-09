; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBurncross * core_burncrss_cpp_CBurncross_dtor_FUN_00425420(CBurncross *this_ptr,uint flags)
;
; Parameters:
; CBurncross *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBurncrossTypeInfo
;
; Called Functions:
;   core_burncrss.cpp_FUN_00425490
;   core_weapon.cpp_CWeapon_dtor_FUN_0057aed0
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425420
        ;   Label: core_burncrss.cpp_CBurncross_dtor_FUN_00425420
    MOV EBX,dword ptr [ESP + 0x8]       ; 00425421
    TEST byte ptr [ESP + 0xc],0x4       ; 00425425
    JNZ 0x0042545d                      ; 0042542a
        ;   XREF to: 0042545d (CONDITIONAL_JUMP)  ; LAB_0042545d
    PUSH 0x0                            ; 0042542c
    ADD EBX,0x5a8                       ; 0042542e
    PUSH EBX                            ; 00425434
    CALL core_burncrss.cpp_FUN_00425490 ; 00425435
        ;   XREF to: 00425490 (UNCONDITIONAL_CALL)  ; undefined core_burncrss.cpp_FUN_00425490()
    ADD ESP,0x8                         ; 0042543a
    PUSH 0x1                            ; 0042543d
    LEA EBX,[EAX + 0xfffffa58]          ; 0042543f
    PUSH EBX                            ; 00425445
    CALL core_weapon.cpp_CWeapon_dtor_FUN_0057aed0 ; 00425446
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_0057aed0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042544b
    MOV DL,byte ptr [ESP + 0xc]         ; 0042544e
    MOV EBX,EAX                         ; 00425452
    TEST DL,0x2                         ; 00425454
    JNZ 0x00425478                      ; 00425457
        ;   XREF to: 00425478 (CONDITIONAL_JUMP)  ; LAB_00425478
    MOV EAX,EBX                         ; 00425459
    POP EBX                             ; 0042545b
    RET                                 ; 0042545c
    PUSH 0x5dceb0                       ; 0042545d | g_CBurncrossTypeInfo
        ;   Label: LAB_0042545d
    PUSH EBX                            ; 00425462
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00425463
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00425468
    PUSH EAX                            ; 0042546b
    CALL crt_unknown.c_FUN_005a30b6     ; 0042546c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00425471
    MOV EAX,EBX                         ; 00425474
    POP EBX                             ; 00425476
    RET                                 ; 00425477
    PUSH EAX                            ; 00425478
        ;   Label: LAB_00425478
    CALL crt_unknown.c_FUN_005a30c4     ; 00425479
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0042547e
    MOV EAX,EBX                         ; 00425481
    POP EBX                             ; 00425483
    RET                                 ; 00425484

