; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_conveyor.cpp_FUN_004423f0()
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004423f0
        ;   Label: core_conveyor.cpp_FUN_004423f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004423f4
    MOV EAX,dword ptr [EAX]             ; 004423f8
    MOV dword ptr [EDX],EAX             ; 004423fa
    MOV EAX,EDX                         ; 004423fc
    RET                                 ; 004423fe

