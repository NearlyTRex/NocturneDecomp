; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042e920(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00544460 at 005499bc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042e920
        ;   Label: core_charactr.cpp_FUN_0042e920
    MOV EDX,dword ptr [ESP + 0x8]       ; 0042e924
    MOV dword ptr [EAX + 0xc18c],EDX    ; 0042e928
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042e92e
    MOV dword ptr [EAX + 0xc198],EDX    ; 0042e932
    RET                                 ; 0042e938

