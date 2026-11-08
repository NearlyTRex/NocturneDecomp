; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b920(int param_1,undefined4 param_2)
;
;
; XREF[17]:
;   FUN_004159e0 at 00415aae
;   FUN_0041aa20 at 0041aae8
;   FUN_004468c0 at 004468f7
;   FUN_0044e7d0 at 0044e8ca
;   FUN_0052dc10 at 0052dd20
;   FUN_0052ef80 at 0052f13e
;   FUN_0052fad0 at 0052fcb8
;   FUN_0052fea0 at 00530078
;   FUN_005301d0 at 0053037f
;   FUN_00530410 at 005305aa
;   ... and 7 more
;
; Referenced Globals:
;   undefined4 DAT_006141e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0046b920
        ;   Label: FUN_0046b920
    MOV EDX,dword ptr [ESP + 0x4]       ; 0046b924
    MOV [0x006141e0],EAX                ; 0046b928 | DAT_006141e0
    MOV dword ptr [EDX + 0x10],EAX      ; 0046b92d
    RET                                 ; 0046b930

