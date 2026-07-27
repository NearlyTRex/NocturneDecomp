; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_setdir_cpp_FUN_005143a0(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005143a0
        ;   Label: core_setdir.cpp_FUN_005143a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005143a4
    MOV EAX,dword ptr [EAX]             ; 005143a8
    MOV dword ptr [EDX],EAX             ; 005143aa
    MOV EAX,EDX                         ; 005143ac
    RET                                 ; 005143ae

