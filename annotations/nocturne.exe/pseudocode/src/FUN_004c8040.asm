; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c8040(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059fe90
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_00553ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8040
        ;   Label: FUN_004c8040
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c8041
    TEST byte ptr [ESP + 0xc],0x4       ; 004c8045
    JNZ 0x004c8066                      ; 004c804a
        ;   XREF to: 004c8066 (CONDITIONAL_JUMP)  ; LAB_004c8066
    PUSH 0x1                            ; 004c804c
    PUSH EBX                            ; 004c804e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_00553ea0 ; 004c804f
        ;   XREF to: 00553ea0 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_CWeapon_dtor_FUN_00553ea0()
    ADD ESP,0x8                         ; 004c8054
    MOV DL,byte ptr [ESP + 0xc]         ; 004c8057
    MOV EBX,EAX                         ; 004c805b
    TEST DL,0x2                         ; 004c805d
    JNZ 0x004c8081                      ; 004c8060
        ;   XREF to: 004c8081 (CONDITIONAL_JUMP)  ; LAB_004c8081
    MOV EAX,EBX                         ; 004c8062
    POP EBX                             ; 004c8064
    RET                                 ; 004c8065
    PUSH 0x59fe90                       ; 004c8066 | DAT_0059fe90
        ;   Label: LAB_004c8066
    PUSH EBX                            ; 004c806b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004c806c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 004c8071
    PUSH EAX                            ; 004c8074
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004c8075
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 004c807a
    MOV EAX,EBX                         ; 004c807d
    POP EBX                             ; 004c807f
    RET                                 ; 004c8080
    PUSH EAX                            ; 004c8081
        ;   Label: LAB_004c8081
    CALL FUN_00564494                   ; 004c8082
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004c8087
    MOV EAX,EBX                         ; 004c808a
    POP EBX                             ; 004c808c
    RET                                 ; 004c808d

