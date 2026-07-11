; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050e550(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_004ff2c0 at 00501744
;   FUN_0050e580 at 0050e5b7
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0050e550
        ;   Label: FUN_0050e550
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050e554
    SUB EAX,EDX                         ; 0050e55b
    SHL EAX,0x2                         ; 0050e55d
    ADD EAX,EDX                         ; 0050e560
    MOV EDX,dword ptr [ESP + 0x4]       ; 0050e562
    SHL EAX,0x5                         ; 0050e566
    ADD EAX,EDX                         ; 0050e569
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050e56b
    MOV dword ptr [EAX + 0x1a0],EDX     ; 0050e56f
    RET                                 ; 0050e575

