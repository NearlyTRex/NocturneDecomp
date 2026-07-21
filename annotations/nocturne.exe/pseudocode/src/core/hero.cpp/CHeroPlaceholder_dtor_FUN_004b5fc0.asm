; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_hero_cpp_CHeroPlaceholder_dtor_FUN_004b5fc0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined1* PTR_core_actor.cpp_CDemonActor_setup_FUN_00409fc0_0059ec84 = 00409fc0
;   undefined4 DAT_0059ed60
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5fc0
        ;   Label: core_hero.cpp_CHeroPlaceholder_dtor_FUN_004b5fc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b5fc1
    TEST byte ptr [ESP + 0xc],0x4       ; 004b5fc5
    JNZ 0x004b5ff0                      ; 004b5fca
        ;   XREF to: 004b5ff0 (CONDITIONAL_JUMP)  ; LAB_004b5ff0
    PUSH 0x1                            ; 004b5fcc
    PUSH EBX                            ; 004b5fce
    MOV dword ptr [EBX + 0x14c],0x59ec84 ; 004b5fcf | PTR_core_actor.cpp_CDemonActor_setup_FUN_00409fc0_0059ec84
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004b5fd9
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_dtor_FUN_00409ea0()
    ADD ESP,0x8                         ; 004b5fde
    MOV DL,byte ptr [ESP + 0xc]         ; 004b5fe1
    MOV EBX,EAX                         ; 004b5fe5
    TEST DL,0x2                         ; 004b5fe7
    JNZ 0x004b600b                      ; 004b5fea
        ;   XREF to: 004b600b (CONDITIONAL_JUMP)  ; LAB_004b600b
    MOV EAX,EBX                         ; 004b5fec
    POP EBX                             ; 004b5fee
    RET                                 ; 004b5fef
    PUSH 0x59ed60                       ; 004b5ff0 | DAT_0059ed60
        ;   Label: LAB_004b5ff0
    PUSH EBX                            ; 004b5ff5
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004b5ff6
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 004b5ffb
    PUSH EAX                            ; 004b5ffe
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004b5fff
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 004b6004
    MOV EAX,EBX                         ; 004b6007
    POP EBX                             ; 004b6009
    RET                                 ; 004b600a
    PUSH EAX                            ; 004b600b
        ;   Label: LAB_004b600b
    CALL FUN_00564494                   ; 004b600c
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004b6011
    MOV EAX,EBX                         ; 004b6014
    POP EBX                             ; 004b6016
    RET                                 ; 004b6017

