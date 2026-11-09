; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_union_cpp_FUN_005a5440(undefined4 param_1)
;
;
; Called Functions:
;   core_basicnpc.cpp_FUN_005a4920
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a5440
        ;   Label: core_union.cpp_FUN_005a5440
    PUSH EDX                            ; 005a5444
    CALL core_basicnpc.cpp_FUN_005a4920 ; 005a5445
        ;   XREF to: 005a4920 (UNCONDITIONAL_CALL)  ; undefined core_basicnpc.cpp_FUN_005a4920()
    ADD ESP,0x4                         ; 005a544a
    RET                                 ; 005a544d

