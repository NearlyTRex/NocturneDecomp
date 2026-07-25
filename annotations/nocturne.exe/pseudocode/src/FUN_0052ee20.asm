; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0052ee20(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0052ee20
        ;   Label: FUN_0052ee20
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052ee24
    MOV EAX,dword ptr [EAX]             ; 0052ee28
    MOV dword ptr [EDX],EAX             ; 0052ee2a
    MOV EAX,EDX                         ; 0052ee2c
    RET                                 ; 0052ee2e

