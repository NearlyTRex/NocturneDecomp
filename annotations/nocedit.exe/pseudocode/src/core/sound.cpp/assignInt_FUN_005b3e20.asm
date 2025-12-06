; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int * core_sound.cpp_assignInt_FUN_005b3e20(int * dest_ptr, int * src_ptr)
;
; Parameters:
; int *            Stack[0x4]:4   dest_ptr
; int *            Stack[0x8]:4   src_ptr
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b3e20
        ;   Label: core_sound.cpp_assignInt_FUN_005b3e20
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b3e24
    MOV EAX,dword ptr [EAX]             ; 005b3e28
    MOV dword ptr [EDX],EAX             ; 005b3e2a
    MOV EAX,EDX                         ; 005b3e2c
    RET                                 ; 005b3e2e

