; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_sound_cpp_assignInt_FUN_0052ee20(int *dest,int *src)
;
; Parameters:
; int *            Stack[0x4]:4   dest
; int *            Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0052ee20
        ;   Label: core_sound.cpp_assignInt_FUN_0052ee20
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052ee24
    MOV EAX,dword ptr [EAX]             ; 0052ee28
    MOV dword ptr [EDX],EAX             ; 0052ee2a
    MOV EAX,EDX                         ; 0052ee2c
    RET                                 ; 0052ee2e

