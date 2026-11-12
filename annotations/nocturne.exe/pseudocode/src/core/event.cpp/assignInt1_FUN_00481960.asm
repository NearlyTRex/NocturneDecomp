; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_event_cpp_assignInt1_FUN_00481960(int *dest,int *src)
;
; Parameters:
; int *            Stack[0x4]:4   dest
; int *            Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00481960
        ;   Label: core_event.cpp_assignInt1_FUN_00481960
    MOV EAX,dword ptr [ESP + 0x8]       ; 00481964
    MOV EAX,dword ptr [EAX]             ; 00481968
    MOV dword ptr [EDX],EAX             ; 0048196a
    MOV EAX,EDX                         ; 0048196c
    RET                                 ; 0048196e

