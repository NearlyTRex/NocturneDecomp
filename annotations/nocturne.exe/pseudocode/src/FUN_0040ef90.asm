; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040ef90(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00599530
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ef90
        ;   Label: FUN_0040ef90
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040ef91
    TEST byte ptr [ESP + 0xc],0x4       ; 0040ef95
    JNZ 0x0040efb6                      ; 0040ef9a
        ;   XREF to: 0040efb6 (CONDITIONAL_JUMP)  ; LAB_0040efb6
    PUSH 0x1                            ; 0040ef9c
    PUSH EBX                            ; 0040ef9e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0040ef9f
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_dtor_FUN_00409ea0()
    ADD ESP,0x8                         ; 0040efa4
    MOV DL,byte ptr [ESP + 0xc]         ; 0040efa7
    MOV EBX,EAX                         ; 0040efab
    TEST DL,0x2                         ; 0040efad
    JNZ 0x0040efd1                      ; 0040efb0
        ;   XREF to: 0040efd1 (CONDITIONAL_JUMP)  ; LAB_0040efd1
    MOV EAX,EBX                         ; 0040efb2
    POP EBX                             ; 0040efb4
    RET                                 ; 0040efb5
    PUSH 0x599530                       ; 0040efb6 | DAT_00599530
        ;   Label: LAB_0040efb6
    PUSH EBX                            ; 0040efbb
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0040efbc
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 0040efc1
    PUSH EAX                            ; 0040efc4
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0040efc5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 0040efca
    MOV EAX,EBX                         ; 0040efcd
    POP EBX                             ; 0040efcf
    RET                                 ; 0040efd0
    PUSH EAX                            ; 0040efd1
        ;   Label: LAB_0040efd1
    CALL FUN_00564494                   ; 0040efd2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 0040efd7
    MOV EAX,EBX                         ; 0040efda
    POP EBX                             ; 0040efdc
    RET                                 ; 0040efdd

