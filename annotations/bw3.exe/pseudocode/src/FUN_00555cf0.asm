; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00555cf0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0055f020 at 0055f216
;
; Referenced Globals:
;   undefined4 DAT_02ceb91c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02ceb91c]      ; 00555cf0 | DAT_02ceb91c
        ;   Label: FUN_00555cf0
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555cf6
    SUB EAX,EDX                         ; 00555cfd
    SHL EAX,0x5                         ; 00555cff
    MOV dword ptr [EAX + 0x2ceb940],0x1 ; 00555d02
    MOV EDX,dword ptr [ESP + 0x4]       ; 00555d0c
    MOV dword ptr [EAX + 0x2ceb93c],EDX ; 00555d10
    RET                                 ; 00555d16

