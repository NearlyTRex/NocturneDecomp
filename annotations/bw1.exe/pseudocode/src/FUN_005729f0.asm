; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005729f0(undefined4 param_1)
;
;
; XREF[4]:
;   FUN_004d8e50 at 004d91c5
;   FUN_0050ba70 at 0050c4ae
;   FUN_0057bef0 at 0057c0f2
;   FUN_0057ce10 at 0057d0f7
;
; Referenced Globals:
;   undefined4 DAT_02c78cec
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c78cec]      ; 005729f0 | DAT_02c78cec
        ;   Label: FUN_005729f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005729f6
    SUB EAX,EDX                         ; 005729fd
    SHL EAX,0x5                         ; 005729ff
    MOV EDX,dword ptr [ESP + 0x4]       ; 00572a02
    MOV dword ptr [EAX + 0x2c78d3c],EDX ; 00572a06
    RET                                 ; 00572a0c

