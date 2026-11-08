; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00572880(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_0047d920 at 0047dd99
;   FUN_0057ce10 at 0057d3bc
;   FUN_005a89c0 at 005a89de
;
; Referenced Globals:
;   undefined4 DAT_02c78cec
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c78cec]      ; 00572880 | DAT_02c78cec
        ;   Label: FUN_00572880
    LEA EAX,[EDX*0x4 + 0x0]             ; 00572886
    SUB EAX,EDX                         ; 0057288d
    SHL EAX,0x5                         ; 0057288f
    MOV dword ptr [EAX + 0x2c78d24],0x1 ; 00572892
    MOV EDX,dword ptr [ESP + 0x4]       ; 0057289c
    MOV dword ptr [EAX + 0x2c78d20],EDX ; 005728a0
    RET                                 ; 005728a6

