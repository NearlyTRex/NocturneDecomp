; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00574e80(int param_1)
;
;
; Called Functions:
;   FUN_00574e00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00574e80
        ;   Label: FUN_00574e80
    PUSH EDX                            ; 00574e84
    CALL FUN_00574e00                   ; 00574e85
        ;   XREF to: 00574e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00574e00()
    ADD ESP,0x4                         ; 00574e8a
    MOV EAX,dword ptr [ESP + 0x4]       ; 00574e8d
    ADD EAX,0x48                        ; 00574e91
    RET                                 ; 00574e94

