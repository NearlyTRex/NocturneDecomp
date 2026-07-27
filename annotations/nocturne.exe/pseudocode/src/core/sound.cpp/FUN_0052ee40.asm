; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_sound_cpp_FUN_0052ee40(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0052ee40
        ;   Label: core_sound.cpp_FUN_0052ee40
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052ee44
    MOV EAX,dword ptr [EAX]             ; 0052ee48
    MOV dword ptr [EDX],EAX             ; 0052ee4a
    MOV EAX,EDX                         ; 0052ee4c
    RET                                 ; 0052ee4e

