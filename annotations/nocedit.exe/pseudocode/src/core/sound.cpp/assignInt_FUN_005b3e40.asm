; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int * __cdecl core_sound_cpp_assignInt_FUN_005b3e40(int *dest_ptr,int *src_ptr)
;
; Parameters:
; int *            Stack[0x4]:4   dest_ptr
; int *            Stack[0x8]:4   src_ptr
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b3e40
        ;   Label: core_sound.cpp_assignInt_FUN_005b3e40
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b3e44
    MOV EAX,dword ptr [EAX]             ; 005b3e48
    MOV dword ptr [EDX],EAX             ; 005b3e4a
    MOV EAX,EDX                         ; 005b3e4c
    RET                                 ; 005b3e4e

