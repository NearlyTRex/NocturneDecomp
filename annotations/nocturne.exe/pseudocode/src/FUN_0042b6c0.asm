; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0042b6c0(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042b6c0
        ;   Label: FUN_0042b6c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042b6c4
    MOV EAX,dword ptr [EAX]             ; 0042b6c8
    MOV dword ptr [EDX],EAX             ; 0042b6ca
    MOV EAX,EDX                         ; 0042b6cc
    RET                                 ; 0042b6ce

