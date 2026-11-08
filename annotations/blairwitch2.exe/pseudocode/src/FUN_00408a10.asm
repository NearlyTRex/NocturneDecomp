; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408a10(void)
;
;
; XREF[70]:
;   FUN_0040e0f0 at 0040e139
;   FUN_0040e780 at 0040e7c7
;   FUN_0040f3f0 at 0040f45a
;   FUN_00410670 at 0041082c
;   FUN_004113f0 at 00411439
;   FUN_00413c70 at 00413d6b
;   FUN_00415120 at 00415224
;   FUN_00415e10 at 00415e82
;   FUN_00419b80 at 00419c36
;   FUN_0041f450 at 0041f60b
;   ... and 60 more
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   thunk_FUN_004e9810
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0060b280]      ; 00408a10 | DAT_0060b280
        ;   Label: FUN_00408a10
    PUSH EDX                            ; 00408a16 | DAT_01ba5c50
    CALL thunk_FUN_004e9810             ; 00408a17
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e9810()
    ADD ESP,0x4                         ; 00408a1c
    RET                                 ; 00408a1f

