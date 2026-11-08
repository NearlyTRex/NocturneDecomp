; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00555d90(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0055ff40 at 005604ec
;
; Referenced Globals:
;   undefined4 DAT_02ceb91c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02ceb91c]      ; 00555d90 | DAT_02ceb91c
        ;   Label: FUN_00555d90
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555d96
    SUB EAX,EDX                         ; 00555d9d
    SHL EAX,0x5                         ; 00555d9f
    MOV dword ptr [EAX + 0x2ceb954],0x1 ; 00555da2
    MOV EDX,dword ptr [ESP + 0x4]       ; 00555dac
    MOV dword ptr [EAX + 0x2ceb950],EDX ; 00555db0
    RET                                 ; 00555db6

