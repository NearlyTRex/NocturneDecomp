; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00550210(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_00465400 at 00465879
;   FUN_0055a3c0 at 0055ab3d
;   FUN_00584d90 at 00584dae
;
; Referenced Globals:
;   undefined4 DAT_0264161c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264161c]      ; 00550210 | DAT_0264161c
        ;   Label: FUN_00550210
    LEA EAX,[EDX*0x4 + 0x0]             ; 00550216
    SUB EAX,EDX                         ; 0055021d
    SHL EAX,0x5                         ; 0055021f
    MOV dword ptr [EAX + 0x2641654],0x1 ; 00550222
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055022c
    MOV dword ptr [EAX + 0x2641650],EDX ; 00550230
    RET                                 ; 00550236

