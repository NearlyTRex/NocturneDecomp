; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040f4b0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00599650
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f4b0
        ;   Label: FUN_0040f4b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f4b1
    TEST byte ptr [ESP + 0xc],0x4       ; 0040f4b5
    JNZ 0x0040f4d6                      ; 0040f4ba
        ;   XREF to: 0040f4d6 (CONDITIONAL_JUMP)  ; LAB_0040f4d6
    PUSH 0x1                            ; 0040f4bc
    PUSH EBX                            ; 0040f4be
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0040f4bf
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_dtor_FUN_00409ea0()
    ADD ESP,0x8                         ; 0040f4c4
    MOV DL,byte ptr [ESP + 0xc]         ; 0040f4c7
    MOV EBX,EAX                         ; 0040f4cb
    TEST DL,0x2                         ; 0040f4cd
    JNZ 0x0040f4f1                      ; 0040f4d0
        ;   XREF to: 0040f4f1 (CONDITIONAL_JUMP)  ; LAB_0040f4f1
    MOV EAX,EBX                         ; 0040f4d2
    POP EBX                             ; 0040f4d4
    RET                                 ; 0040f4d5
    PUSH 0x599650                       ; 0040f4d6 | DAT_00599650
        ;   Label: LAB_0040f4d6
    PUSH EBX                            ; 0040f4db
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0040f4dc
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 0040f4e1
    PUSH EAX                            ; 0040f4e4
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0040f4e5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 0040f4ea
    MOV EAX,EBX                         ; 0040f4ed
    POP EBX                             ; 0040f4ef
    RET                                 ; 0040f4f0
    PUSH EAX                            ; 0040f4f1
        ;   Label: LAB_0040f4f1
    CALL FUN_00564494                   ; 0040f4f2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 0040f4f7
    MOV EAX,EBX                         ; 0040f4fa
    POP EBX                             ; 0040f4fc
    RET                                 ; 0040f4fd

