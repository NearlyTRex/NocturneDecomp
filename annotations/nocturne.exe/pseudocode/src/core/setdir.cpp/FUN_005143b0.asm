; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_setdir_cpp_FUN_005143b0(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005143b0
        ;   Label: core_setdir.cpp_FUN_005143b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005143b4
    MOV EAX,dword ptr [EAX]             ; 005143b8
    MOV dword ptr [EDX],EAX             ; 005143ba
    MOV EAX,EDX                         ; 005143bc
    RET                                 ; 005143be

