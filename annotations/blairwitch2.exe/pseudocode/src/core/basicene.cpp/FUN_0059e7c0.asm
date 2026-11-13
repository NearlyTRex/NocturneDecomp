; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_basicene_cpp_FUN_0059e7c0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00522350 at 00527572
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059e7c0
        ;   Label: core_basicene.cpp_FUN_0059e7c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059e7c4
    MOV dword ptr [EDX + 0x11390],EAX   ; 0059e7c8
    RET                                 ; 0059e7ce

