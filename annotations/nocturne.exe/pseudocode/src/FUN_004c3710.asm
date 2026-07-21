; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c3710(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059f900
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c3710
        ;   Label: FUN_004c3710
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c3711
    TEST byte ptr [ESP + 0xc],0x4       ; 004c3715
    JNZ 0x004c3736                      ; 004c371a
        ;   XREF to: 004c3736 (CONDITIONAL_JUMP)  ; LAB_004c3736
    PUSH 0x1                            ; 004c371c
    PUSH EBX                            ; 004c371e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004c371f
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_dtor_FUN_00409ea0()
    ADD ESP,0x8                         ; 004c3724
    MOV DL,byte ptr [ESP + 0xc]         ; 004c3727
    MOV EBX,EAX                         ; 004c372b
    TEST DL,0x2                         ; 004c372d
    JNZ 0x004c3751                      ; 004c3730
        ;   XREF to: 004c3751 (CONDITIONAL_JUMP)  ; LAB_004c3751
    MOV EAX,EBX                         ; 004c3732
    POP EBX                             ; 004c3734
    RET                                 ; 004c3735
    PUSH 0x59f900                       ; 004c3736 | DAT_0059f900
        ;   Label: LAB_004c3736
    PUSH EBX                            ; 004c373b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004c373c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 004c3741
    PUSH EAX                            ; 004c3744
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004c3745
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 004c374a
    MOV EAX,EBX                         ; 004c374d
    POP EBX                             ; 004c374f
    RET                                 ; 004c3750
    PUSH EAX                            ; 004c3751
        ;   Label: LAB_004c3751
    CALL FUN_00564494                   ; 004c3752
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004c3757
    MOV EAX,EBX                         ; 004c375a
    POP EBX                             ; 004c375c
    RET                                 ; 004c375d

