; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_setdir_cpp_FUN_00514390(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00514390
        ;   Label: core_setdir.cpp_FUN_00514390
    MOV EAX,dword ptr [ESP + 0x8]       ; 00514394
    MOV EAX,dword ptr [EAX]             ; 00514398
    MOV dword ptr [EDX],EAX             ; 0051439a
    MOV EAX,EDX                         ; 0051439c
    RET                                 ; 0051439e

