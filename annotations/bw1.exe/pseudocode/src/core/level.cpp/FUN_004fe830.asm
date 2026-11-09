; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_level_cpp_FUN_004fe830(int param_1)
;
;
; XREF[1]:
;   core_level.cpp_staticInit_FUN_004fe800 at 004fe805
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fe830
        ;   Label: core_level.cpp_FUN_004fe830
    MOV dword ptr [EAX + 0xc],0x0       ; 004fe834
    RET                                 ; 004fe83b

