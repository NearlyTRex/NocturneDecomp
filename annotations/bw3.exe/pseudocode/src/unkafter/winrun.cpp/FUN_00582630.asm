; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_winrun_cpp_FUN_00582630(undefined4 param_1)
;
;
; XREF[1]:
;   unkafter_winrun.cpp_FUN_005825e0 at 00582624
;
; Called Functions:
;   unkafter_winrun.cpp_FUN_00581f50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00582630
        ;   Label: unkafter_winrun.cpp_FUN_00582630
    PUSH EDX                            ; 00582634
    CALL unkafter_winrun.cpp_FUN_00581f50 ; 00582635
        ;   XREF to: 00581f50 (UNCONDITIONAL_CALL)  ; undefined unkafter_winrun.cpp_FUN_00581f50()
    ADD ESP,0x4                         ; 0058263a
    RET                                 ; 0058263d

