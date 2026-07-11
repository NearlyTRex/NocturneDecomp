; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00461070(int param_1,undefined4 param_2)
;
;
; XREF[8]:
;   FUN_0044e470 at 0044e5e2
;   FUN_0044e720 at 0044e793
;   FUN_0044e830 at 0044e8e9
;   FUN_0044e920 at 0044e962
;   FUN_0045f190 at 0045f1e1
;   FUN_004ac7c0 at 004ac82b
;   FUN_005125a0 at 0051264f
;   FUN_00513720 at 00513743
;
; Referenced Globals:
;   undefined4 DAT_006b0278
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00461070
        ;   Label: FUN_00461070
    MOV EDX,dword ptr [ESP + 0x4]       ; 00461074
    MOV [0x006b0278],EAX                ; 00461078 | DAT_006b0278
    MOV dword ptr [EDX + 0x4],EAX       ; 0046107d
    RET                                 ; 00461080

