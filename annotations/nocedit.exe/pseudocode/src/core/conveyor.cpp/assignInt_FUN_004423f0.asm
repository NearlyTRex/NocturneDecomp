; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_conveyor_cpp_assignInt_FUN_004423f0(int *dest,int *src)
;
; Parameters:
; int *            Stack[0x4]:4   dest
; int *            Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004423f0
        ;   Label: core_conveyor.cpp_assignInt_FUN_004423f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004423f4
    MOV EAX,dword ptr [EAX]             ; 004423f8
    MOV dword ptr [EDX],EAX             ; 004423fa
    MOV EAX,EDX                         ; 004423fc
    RET                                 ; 004423fe

