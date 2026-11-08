; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00555df0(undefined4 param_1)
;
;
; XREF[5]:
;   FUN_0042e8c0 at 0042ecff
;   FUN_00499eb0 at 00499fc6
;   FUN_004c4a60 at 004c4b35
;   FUN_0055f020 at 0055f23b
;   FUN_0055ff40 at 005606f3
;
; Referenced Globals:
;   undefined4 DAT_02ceb91c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02ceb91c]      ; 00555df0 | DAT_02ceb91c
        ;   Label: FUN_00555df0
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555df6
    SUB EAX,EDX                         ; 00555dfd
    SHL EAX,0x5                         ; 00555dff
    MOV EDX,dword ptr [ESP + 0x4]       ; 00555e02
    MOV dword ptr [EAX + 0x2ceb958],EDX ; 00555e06
    RET                                 ; 00555e0c

