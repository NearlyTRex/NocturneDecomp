; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0042b6e0(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042b6e0
        ;   Label: FUN_0042b6e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042b6e4
    MOV EAX,dword ptr [EAX]             ; 0042b6e8
    MOV dword ptr [EDX],EAX             ; 0042b6ea
    MOV EAX,EDX                         ; 0042b6ec
    RET                                 ; 0042b6ee

