; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_00590910(undefined4 param_1)
;
;
; XREF[1]:
;   wincore_winrun.cpp_FUN_005908c0 at 00590904
;
; Called Functions:
;   wincore_winrun.cpp_FUN_005902a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00590910
        ;   Label: wincore_winrun.cpp_FUN_00590910
    PUSH EDX                            ; 00590914
    CALL wincore_winrun.cpp_FUN_005902a0 ; 00590915
        ;   XREF to: 005902a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005902a0()
    ADD ESP,0x4                         ; 0059091a
    RET                                 ; 0059091d

