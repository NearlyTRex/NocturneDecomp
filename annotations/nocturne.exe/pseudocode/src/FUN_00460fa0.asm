; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00460fa0(int param_1,undefined4 param_2)
;
;
; XREF[5]:
;   FUN_0041d050 at 0041d107
;   FUN_0041dcc0 at 0041dd45
;   FUN_00453170 at 00453289
;   FUN_00460fb0 at 00460fe0
;   FUN_004ca790 at 004cab58
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00460fa0
        ;   Label: FUN_00460fa0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00460fa4
    MOV dword ptr [EDX + 0xc],EAX       ; 00460fa8
    RET                                 ; 00460fab

