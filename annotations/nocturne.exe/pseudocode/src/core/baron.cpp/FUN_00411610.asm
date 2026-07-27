; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_baron_cpp_FUN_00411610(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CBaronWeaponTypeInfo_00599d10
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_00553ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411610
        ;   Label: core_baron.cpp_FUN_00411610
    MOV EBX,dword ptr [ESP + 0x8]       ; 00411611
    TEST byte ptr [ESP + 0xc],0x4       ; 00411615
    JNZ 0x00411636                      ; 0041161a
        ;   XREF to: 00411636 (CONDITIONAL_JUMP)  ; LAB_00411636
    PUSH 0x1                            ; 0041161c
    PUSH EBX                            ; 0041161e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_00553ea0 ; 0041161f
        ;   XREF to: 00553ea0 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_CWeapon_dtor_FUN_00553ea0()
    ADD ESP,0x8                         ; 00411624
    MOV DL,byte ptr [ESP + 0xc]         ; 00411627
    MOV EBX,EAX                         ; 0041162b
    TEST DL,0x2                         ; 0041162d
    JNZ 0x00411651                      ; 00411630
        ;   XREF to: 00411651 (CONDITIONAL_JUMP)  ; LAB_00411651
    MOV EAX,EBX                         ; 00411632
    POP EBX                             ; 00411634
    RET                                 ; 00411635
    PUSH 0x599d10                       ; 00411636 | g_CBaronWeaponTypeInfo_00599d10
        ;   Label: LAB_00411636
    PUSH EBX                            ; 0041163b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0041163c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 00411641
    PUSH EAX                            ; 00411644
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00411645
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 0041164a
    MOV EAX,EBX                         ; 0041164d
    POP EBX                             ; 0041164f
    RET                                 ; 00411650
    PUSH EAX                            ; 00411651
        ;   Label: LAB_00411651
    CALL crt_unknown.c_FUN_00564494     ; 00411652
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00411657
    MOV EAX,EBX                         ; 0041165a
    POP EBX                             ; 0041165c
    RET                                 ; 0041165d

