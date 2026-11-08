; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005728e0(undefined4 param_1)
;
;
; XREF[10]:
;   FUN_0042f8e0 at 0042fcb7
;   FUN_00469550 at 0046bd60
;   FUN_0047d920 at 0047dda8
;   FUN_004aee60 at 004aef76
;   FUN_00500d20 at 00500ee3
;   FUN_00502480 at 00502643
;   FUN_005057c0 at 00505885
;   FUN_0057bef0 at 0057c10b
;   FUN_0057ce10 at 0057d5c3
;   FUN_00585b00 at 00588180
;
; Referenced Globals:
;   undefined4 DAT_02c78cec
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c78cec]      ; 005728e0 | DAT_02c78cec
        ;   Label: FUN_005728e0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005728e6
    SUB EAX,EDX                         ; 005728ed
    SHL EAX,0x5                         ; 005728ef
    MOV EDX,dword ptr [ESP + 0x4]       ; 005728f2
    MOV dword ptr [EAX + 0x2c78d28],EDX ; 005728f6
    RET                                 ; 005728fc

