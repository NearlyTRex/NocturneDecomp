; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00555e10(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0055f020 at 0055f247
;
; Referenced Globals:
;   undefined4 DAT_02ceb91c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02ceb91c]      ; 00555e10 | DAT_02ceb91c
        ;   Label: FUN_00555e10
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555e16
    SUB EAX,EDX                         ; 00555e1d
    SHL EAX,0x5                         ; 00555e1f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00555e22
    MOV dword ptr [EAX + 0x2ceb95c],EDX ; 00555e26
    RET                                 ; 00555e2c

