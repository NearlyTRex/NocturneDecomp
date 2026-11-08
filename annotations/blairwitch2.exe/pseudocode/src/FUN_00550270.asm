; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00550270(undefined4 param_1)
;
;
; XREF[9]:
;   FUN_00425fb0 at 00426386
;   FUN_00450c60 at 004531d0
;   FUN_00465400 at 00465888
;   FUN_004964c0 at 004965d6
;   FUN_004e38d0 at 004e3a93
;   FUN_004e6b20 at 004e6be5
;   FUN_005594c0 at 005596db
;   FUN_0055a3c0 at 0055aa1e
;   FUN_00563060 at 005656a8
;
; Referenced Globals:
;   undefined4 DAT_0264161c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264161c]      ; 00550270 | DAT_0264161c
        ;   Label: FUN_00550270
    LEA EAX,[EDX*0x4 + 0x0]             ; 00550276
    SUB EAX,EDX                         ; 0055027d
    SHL EAX,0x5                         ; 0055027f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00550282
    MOV dword ptr [EAX + 0x2641658],EDX ; 00550286
    RET                                 ; 0055028c

