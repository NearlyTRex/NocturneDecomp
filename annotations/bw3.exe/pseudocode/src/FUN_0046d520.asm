; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046d520(int param_1,undefined4 param_2)
;
;
; XREF[9]:
;   FUN_0045c530 at 0045c6a2
;   FUN_0045c7e0 at 0045c853
;   FUN_0045c8f0 at 0045c9a9
;   FUN_0045c9e0 at 0045ca22
;   FUN_0046b580 at 0046b5d6
;   FUN_004ca940 at 004ca9bd
;   FUN_0053f940 at 0053f9ef
;   FUN_00540cf0 at 00540d13
;   FUN_00591680 at 0059178b
;
; Referenced Globals:
;   undefined4 DAT_007303f4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0046d520
        ;   Label: FUN_0046d520
    MOV EDX,dword ptr [ESP + 0x4]       ; 0046d524
    MOV [0x007303f4],EAX                ; 0046d528 | DAT_007303f4
    MOV dword ptr [EDX + 0x4],EAX       ; 0046d52d
    RET                                 ; 0046d530

