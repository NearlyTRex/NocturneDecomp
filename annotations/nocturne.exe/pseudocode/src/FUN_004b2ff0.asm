; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b2ff0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059e840
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_00553ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2ff0
        ;   Label: FUN_004b2ff0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b2ff1
    TEST byte ptr [ESP + 0xc],0x4       ; 004b2ff5
    JNZ 0x004b3016                      ; 004b2ffa
        ;   XREF to: 004b3016 (CONDITIONAL_JUMP)  ; LAB_004b3016
    PUSH 0x1                            ; 004b2ffc
    PUSH EBX                            ; 004b2ffe
    CALL core_weapon.cpp_CWeapon_dtor_FUN_00553ea0 ; 004b2fff
        ;   XREF to: 00553ea0 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_CWeapon_dtor_FUN_00553ea0()
    ADD ESP,0x8                         ; 004b3004
    MOV DL,byte ptr [ESP + 0xc]         ; 004b3007
    MOV EBX,EAX                         ; 004b300b
    TEST DL,0x2                         ; 004b300d
    JNZ 0x004b3031                      ; 004b3010
        ;   XREF to: 004b3031 (CONDITIONAL_JUMP)  ; LAB_004b3031
    MOV EAX,EBX                         ; 004b3012
    POP EBX                             ; 004b3014
    RET                                 ; 004b3015
    PUSH 0x59e840                       ; 004b3016 | DAT_0059e840
        ;   Label: LAB_004b3016
    PUSH EBX                            ; 004b301b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004b301c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 004b3021
    PUSH EAX                            ; 004b3024
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004b3025
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 004b302a
    MOV EAX,EBX                         ; 004b302d
    POP EBX                             ; 004b302f
    RET                                 ; 004b3030
    PUSH EAX                            ; 004b3031
        ;   Label: LAB_004b3031
    CALL FUN_00564494                   ; 004b3032
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004b3037
    MOV EAX,EBX                         ; 004b303a
    POP EBX                             ; 004b303c
    RET                                 ; 004b303d

