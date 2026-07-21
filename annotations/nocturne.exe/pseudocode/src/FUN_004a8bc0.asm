; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a8bc0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059e1c0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8bc0
        ;   Label: FUN_004a8bc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a8bc1
    TEST byte ptr [ESP + 0xc],0x4       ; 004a8bc5
    JNZ 0x004a8be6                      ; 004a8bca
        ;   XREF to: 004a8be6 (CONDITIONAL_JUMP)  ; LAB_004a8be6
    PUSH 0x1                            ; 004a8bcc
    PUSH EBX                            ; 004a8bce
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004a8bcf
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_dtor_FUN_00409ea0()
    ADD ESP,0x8                         ; 004a8bd4
    MOV DL,byte ptr [ESP + 0xc]         ; 004a8bd7
    MOV EBX,EAX                         ; 004a8bdb
    TEST DL,0x2                         ; 004a8bdd
    JNZ 0x004a8c01                      ; 004a8be0
        ;   XREF to: 004a8c01 (CONDITIONAL_JUMP)  ; LAB_004a8c01
    MOV EAX,EBX                         ; 004a8be2
    POP EBX                             ; 004a8be4
    RET                                 ; 004a8be5
    PUSH 0x59e1c0                       ; 004a8be6 | DAT_0059e1c0
        ;   Label: LAB_004a8be6
    PUSH EBX                            ; 004a8beb
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004a8bec
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 004a8bf1
    PUSH EAX                            ; 004a8bf4
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004a8bf5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 004a8bfa
    MOV EAX,EBX                         ; 004a8bfd
    POP EBX                             ; 004a8bff
    RET                                 ; 004a8c00
    PUSH EAX                            ; 004a8c01
        ;   Label: LAB_004a8c01
    CALL FUN_00564494                   ; 004a8c02
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004a8c07
    MOV EAX,EBX                         ; 004a8c0a
    POP EBX                             ; 004a8c0c
    RET                                 ; 004a8c0d

