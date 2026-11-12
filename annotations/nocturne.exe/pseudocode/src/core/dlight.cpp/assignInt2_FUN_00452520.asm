; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_dlight_cpp_assignInt2_FUN_00452520(int *dest,int *src)
;
; Parameters:
; int *            Stack[0x4]:4   dest
; int *            Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00452520
        ;   Label: core_dlight.cpp_assignInt2_FUN_00452520
    MOV EAX,dword ptr [ESP + 0x8]       ; 00452524
    MOV EAX,dword ptr [EAX]             ; 00452528
    MOV dword ptr [EDX],EAX             ; 0045252a
    MOV EAX,EDX                         ; 0045252c
    RET                                 ; 0045252e

