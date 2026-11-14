; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_event_cpp_assignInt_FUN_00481950(int *dest,int *src)
;
; Parameters:
; int *            Stack[0x4]:4   dest
; int *            Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00481950
        ;   Label: core_event.cpp_assignInt_FUN_00481950
    MOV EAX,dword ptr [ESP + 0x8]       ; 00481954
    MOV EAX,dword ptr [EAX]             ; 00481958
    MOV dword ptr [EDX],EAX             ; 0048195a
    MOV EAX,EDX                         ; 0048195c
    RET                                 ; 0048195e

