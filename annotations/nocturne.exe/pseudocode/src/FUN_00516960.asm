; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00516960(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005a1bf0
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_00553ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516960
        ;   Label: FUN_00516960
    MOV EBX,dword ptr [ESP + 0x8]       ; 00516961
    TEST byte ptr [ESP + 0xc],0x4       ; 00516965
    JNZ 0x00516986                      ; 0051696a
        ;   XREF to: 00516986 (CONDITIONAL_JUMP)  ; LAB_00516986
    PUSH 0x1                            ; 0051696c
    PUSH EBX                            ; 0051696e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_00553ea0 ; 0051696f
        ;   XREF to: 00553ea0 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_CWeapon_dtor_FUN_00553ea0()
    ADD ESP,0x8                         ; 00516974
    MOV DL,byte ptr [ESP + 0xc]         ; 00516977
    MOV EBX,EAX                         ; 0051697b
    TEST DL,0x2                         ; 0051697d
    JNZ 0x005169a1                      ; 00516980
        ;   XREF to: 005169a1 (CONDITIONAL_JUMP)  ; LAB_005169a1
    MOV EAX,EBX                         ; 00516982
    POP EBX                             ; 00516984
    RET                                 ; 00516985
    PUSH 0x5a1bf0                       ; 00516986 | DAT_005a1bf0
        ;   Label: LAB_00516986
    PUSH EBX                            ; 0051698b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0051698c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 00516991
    PUSH EAX                            ; 00516994
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00516995
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 0051699a
    MOV EAX,EBX                         ; 0051699d
    POP EBX                             ; 0051699f
    RET                                 ; 005169a0
    PUSH EAX                            ; 005169a1
        ;   Label: LAB_005169a1
    CALL FUN_00564494                   ; 005169a2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 005169a7
    MOV EAX,EBX                         ; 005169aa
    POP EBX                             ; 005169ac
    RET                                 ; 005169ad

