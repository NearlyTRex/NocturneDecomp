; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_sound_cpp_FUN_0052ee30(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0052ee30
        ;   Label: core_sound.cpp_FUN_0052ee30
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052ee34
    MOV EAX,dword ptr [EAX]             ; 0052ee38
    MOV dword ptr [EDX],EAX             ; 0052ee3a
    MOV EAX,EDX                         ; 0052ee3c
    RET                                 ; 0052ee3e

