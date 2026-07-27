; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ladder_cpp_FUN_004c4360(undefined4 param_1)
;
;
; Called Functions:
;   core_ladder.cpp_FUN_004c45a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c4360
        ;   Label: core_ladder.cpp_FUN_004c4360
    PUSH EDX                            ; 004c4364
    CALL core_ladder.cpp_FUN_004c45a0   ; 004c4365
        ;   XREF to: 004c45a0 (UNCONDITIONAL_CALL)  ; undefined core_ladder.cpp_FUN_004c45a0()
    ADD ESP,0x4                         ; 004c436a
    RET                                 ; 004c436d

