; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 FUN_004df550(undefined4 param_1,int param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df550
        ;   Label: FUN_004df550
    MOV EDX,dword ptr [ESP + 0xc]       ; 004df551
    XOR EAX,EAX                         ; 004df555
    XOR BL,BL                           ; 004df557
    MOV AL,byte ptr [EDX + 0x1c6cef0]   ; 004df559
    MOV byte ptr [EDX + 0x1c6cef0],BL   ; 004df55f
    POP EBX                             ; 004df565
    RET                                 ; 004df566

