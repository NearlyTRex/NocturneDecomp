; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00550170(undefined4 param_1)
;
;
; XREF[7]:
;   FUN_00465400 at 0046586d
;   FUN_004aca40 at 004aca72
;   FUN_004e38d0 at 004e3a87
;   FUN_004e7220 at 004e7377
;   FUN_004e73c0 at 004e742d
;   FUN_005594c0 at 005596b6
;   FUN_00584d90 at 00584d9f
;
; Referenced Globals:
;   undefined4 DAT_0264161c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264161c]      ; 00550170 | DAT_0264161c
        ;   Label: FUN_00550170
    LEA EAX,[EDX*0x4 + 0x0]             ; 00550176
    SUB EAX,EDX                         ; 0055017d
    SHL EAX,0x5                         ; 0055017f
    MOV dword ptr [EAX + 0x2641640],0x1 ; 00550182
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055018c
    MOV dword ptr [EAX + 0x264163c],EDX ; 00550190
    RET                                 ; 00550196

