; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_script_cpp_FUN_00567d30(int param_1)
;
; Parameters:
; int              Stack[0x4]:4   param_1
;
; XREF[1]:
;   core_script.cpp_FUN_00559730 at 005597c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00567d30
        ;   Label: core_script.cpp_FUN_00567d30
    ADD EAX,0x8fb0                      ; 00567d34
    RET                                 ; 00567d39

