; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_union_cpp_FUN_005a5450(undefined4 param_1)
;
;
; Called Functions:
;   core_basicnpc.cpp_FUN_005a4930
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a5450
        ;   Label: core_union.cpp_FUN_005a5450
    PUSH EDX                            ; 005a5454
    CALL core_basicnpc.cpp_FUN_005a4930 ; 005a5455
        ;   XREF to: 005a4930 (UNCONDITIONAL_CALL)  ; undefined core_basicnpc.cpp_FUN_005a4930()
    ADD ESP,0x4                         ; 005a545a
    RET                                 ; 005a545d

