; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00550380(undefined4 param_1)
;
;
; XREF[4]:
;   FUN_004be430 at 004be820
;   FUN_004ed260 at 004edcbf
;   FUN_005594c0 at 005596c2
;   FUN_0055a3c0 at 0055a75b
;
; Referenced Globals:
;   undefined4 DAT_0264161c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264161c]      ; 00550380 | DAT_0264161c
        ;   Label: FUN_00550380
    LEA EAX,[EDX*0x4 + 0x0]             ; 00550386
    SUB EAX,EDX                         ; 0055038d
    SHL EAX,0x5                         ; 0055038f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00550392
    MOV dword ptr [EAX + 0x264166c],EDX ; 00550396
    RET                                 ; 0055039c

