; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00555f00(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_004e94f0 at 004e9e3a
;   FUN_0055f020 at 0055f222
;   FUN_0055ff40 at 00560227
;
; Referenced Globals:
;   undefined4 DAT_02ceb91c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02ceb91c]      ; 00555f00 | DAT_02ceb91c
        ;   Label: FUN_00555f00
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555f06
    SUB EAX,EDX                         ; 00555f0d
    SHL EAX,0x5                         ; 00555f0f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00555f12
    MOV dword ptr [EAX + 0x2ceb96c],EDX ; 00555f16
    RET                                 ; 00555f1c

