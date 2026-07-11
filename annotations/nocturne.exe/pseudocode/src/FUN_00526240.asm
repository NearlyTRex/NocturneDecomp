; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00526240(undefined4 param_1)
;
;
; XREF[4]:
;   FUN_004a6e90 at 004a7205
;   FUN_004d12e0 at 004d1cfa
;   FUN_0052d120 at 0052d322
;   FUN_0052dff0 at 0052e3ab
;
; Referenced Globals:
;   undefined4 DAT_02dc1b74
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc1b74]      ; 00526240 | DAT_02dc1b74
        ;   Label: FUN_00526240
    LEA EAX,[EDX*0x4 + 0x0]             ; 00526246
    SUB EAX,EDX                         ; 0052624d
    SHL EAX,0x2                         ; 0052624f
    MOV EDX,EAX                         ; 00526252
    SHL EAX,0x3                         ; 00526254
    ADD EAX,EDX                         ; 00526257
    MOV EDX,dword ptr [ESP + 0x4]       ; 00526259
    MOV dword ptr [EAX + 0x2dc1bd4],EDX ; 0052625d
    RET                                 ; 00526263

