; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b1010(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059e6b0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1010
        ;   Label: FUN_004b1010
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b1011
    TEST byte ptr [ESP + 0xc],0x4       ; 004b1015
    JNZ 0x004b1036                      ; 004b101a
        ;   XREF to: 004b1036 (CONDITIONAL_JUMP)  ; LAB_004b1036
    PUSH 0x1                            ; 004b101c
    PUSH EBX                            ; 004b101e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004b101f
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_dtor_FUN_00409ea0()
    ADD ESP,0x8                         ; 004b1024
    MOV DL,byte ptr [ESP + 0xc]         ; 004b1027
    MOV EBX,EAX                         ; 004b102b
    TEST DL,0x2                         ; 004b102d
    JNZ 0x004b1051                      ; 004b1030
        ;   XREF to: 004b1051 (CONDITIONAL_JUMP)  ; LAB_004b1051
    MOV EAX,EBX                         ; 004b1032
    POP EBX                             ; 004b1034
    RET                                 ; 004b1035
    PUSH 0x59e6b0                       ; 004b1036 | DAT_0059e6b0
        ;   Label: LAB_004b1036
    PUSH EBX                            ; 004b103b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004b103c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 004b1041
    PUSH EAX                            ; 004b1044
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004b1045
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 004b104a
    MOV EAX,EBX                         ; 004b104d
    POP EBX                             ; 004b104f
    RET                                 ; 004b1050
    PUSH EAX                            ; 004b1051
        ;   Label: LAB_004b1051
    CALL FUN_00564494                   ; 004b1052
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004b1057
    MOV EAX,EBX                         ; 004b105a
    POP EBX                             ; 004b105c
    RET                                 ; 004b105d

