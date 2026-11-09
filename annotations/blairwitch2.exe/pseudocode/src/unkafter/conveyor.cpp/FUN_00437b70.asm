; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_conveyor_cpp_FUN_00437b70(undefined4 param_1)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_004254b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00437b70
        ;   Label: unkafter_conveyor.cpp_FUN_00437b70
    PUSH EDX                            ; 00437b74
    CALL core_charactr.cpp_FUN_004254b0 ; 00437b75
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004254b0()
    ADD ESP,0x4                         ; 00437b7a
    RET                                 ; 00437b7d

