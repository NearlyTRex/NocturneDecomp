; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00526210(undefined4 param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_0052eb00 at 0052eb14
;   FUN_0052eb50 at 0052eb60
;
; Referenced Globals:
;   undefined4 DAT_02dc1b74
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc1b74]      ; 00526210 | DAT_02dc1b74
        ;   Label: FUN_00526210
    LEA EAX,[EDX*0x4 + 0x0]             ; 00526216
    SUB EAX,EDX                         ; 0052621d
    SHL EAX,0x2                         ; 0052621f
    MOV EDX,EAX                         ; 00526222
    SHL EAX,0x3                         ; 00526224
    ADD EAX,EDX                         ; 00526227
    MOV EDX,dword ptr [ESP + 0x4]       ; 00526229
    MOV dword ptr [EAX + 0x2dc1bc4],EDX ; 0052622d
    MOV EDX,dword ptr [ESP + 0x8]       ; 00526233
    MOV dword ptr [EAX + 0x2dc1bc8],EDX ; 00526237
    RET                                 ; 0052623d

