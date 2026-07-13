; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00564a70(undefined4 param_1,undefined4 param_2)
;
;
; XREF[23]:
;   FUN_00415ee0 at 00415f16
;   FUN_004393d0 at 00439403
;   FUN_0046ae40 at 0046ae86
;   FUN_00472c90 at 00472cdc
;   FUN_00472d10 at 00472d9e
;   FUN_00473de0 at 00473e56
;   FUN_00475f80 at 00475fe7
;   FUN_004df2f0 at 004df389
;   FUN_004df460 at 004df4d0
;   FUN_004f47b0 at 004f48d3
;   ... and 13 more
;
; Called Functions:
;   FUN_00564a88
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564a70
        ;   Label: FUN_00564a70
    MOV EDX,dword ptr [ESP + 0xc]       ; 00564a71
    PUSH EDX                            ; 00564a75
    MOV EBX,dword ptr [ESP + 0xc]       ; 00564a76
    PUSH EBX                            ; 00564a7a
    CALL FUN_00564a88                   ; 00564a7b
        ;   XREF to: 00564a88 (UNCONDITIONAL_CALL)  ; undefined FUN_00564a88()
    ADD ESP,0x8                         ; 00564a80
    POP EBX                             ; 00564a83
    RET                                 ; 00564a84

