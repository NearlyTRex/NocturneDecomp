; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 FUN_004fd230(undefined4 param_1,int param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd230
        ;   Label: FUN_004fd230
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fd231
    XOR EAX,EAX                         ; 004fd235
    XOR BL,BL                           ; 004fd237
    MOV AL,byte ptr [EDX + 0x1c50950]   ; 004fd239
    MOV byte ptr [EDX + 0x1c50950],BL   ; 004fd23f
    POP EBX                             ; 004fd245
    RET                                 ; 004fd246

