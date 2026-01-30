; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_bugs_cpp_FUN_00427ad0(void)
;
;
; Referenced Globals:
;   float FLOAT_0065b5b8 = 0.00390625
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427ad0
        ;   Label: core_bugs.cpp_FUN_00427ad0
    MOV EAX,dword ptr [ESP + 0xc]       ; 00427ad1
    MOV EBX,dword ptr [ESP + 0x8]       ; 00427ad5
    FILD dword ptr [EAX]                ; 00427ad9
    FMUL float ptr [0x0065b5b8]         ; 00427adb | FLOAT_0065b5b8
    FSTP float ptr [EBX]                ; 00427ae1
    FILD dword ptr [EAX + 0x4]          ; 00427ae3
    FMUL float ptr [0x0065b5b8]         ; 00427ae6 | FLOAT_0065b5b8
    FSTP float ptr [EBX + 0x4]          ; 00427aec
    FILD dword ptr [EAX + 0x8]          ; 00427aef
    FMUL float ptr [0x0065b5b8]         ; 00427af2 | FLOAT_0065b5b8
    FSTP float ptr [EBX + 0x8]          ; 00427af8
    POP EBX                             ; 00427afb
    RET                                 ; 00427afc

