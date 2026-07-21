; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00462890(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059c6c0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462890
        ;   Label: FUN_00462890
    MOV EBX,dword ptr [ESP + 0x8]       ; 00462891
    TEST byte ptr [ESP + 0xc],0x4       ; 00462895
    JNZ 0x004628b6                      ; 0046289a
        ;   XREF to: 004628b6 (CONDITIONAL_JUMP)  ; LAB_004628b6
    PUSH 0x1                            ; 0046289c
    PUSH EBX                            ; 0046289e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0046289f
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_dtor_FUN_00409ea0()
    ADD ESP,0x8                         ; 004628a4
    MOV DL,byte ptr [ESP + 0xc]         ; 004628a7
    MOV EBX,EAX                         ; 004628ab
    TEST DL,0x2                         ; 004628ad
    JNZ 0x004628d1                      ; 004628b0
        ;   XREF to: 004628d1 (CONDITIONAL_JUMP)  ; LAB_004628d1
    MOV EAX,EBX                         ; 004628b2
    POP EBX                             ; 004628b4
    RET                                 ; 004628b5
    PUSH 0x59c6c0                       ; 004628b6 | DAT_0059c6c0
        ;   Label: LAB_004628b6
    PUSH EBX                            ; 004628bb
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004628bc
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 004628c1
    PUSH EAX                            ; 004628c4
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004628c5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 004628ca
    MOV EAX,EBX                         ; 004628cd
    POP EBX                             ; 004628cf
    RET                                 ; 004628d0
    PUSH EAX                            ; 004628d1
        ;   Label: LAB_004628d1
    CALL FUN_00564494                   ; 004628d2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004628d7
    MOV EAX,EBX                         ; 004628da
    POP EBX                             ; 004628dc
    RET                                 ; 004628dd

