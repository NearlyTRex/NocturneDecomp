; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055af80(undefined4 param_1,undefined4 param_2)
;
;
; XREF[7]:
;   FUN_0047a1e0 at 0047a26e
;   FUN_0049f2e0 at 0049f6cf
;   FUN_004a0e60 at 004a0f3b
;   FUN_004c1bb0 at 004c382c
;   FUN_005184c0 at 00518a82
;   FUN_0055a3c0 at 0055a95c
;   FUN_0055adc0 at 0055adce
;
; Called Functions:
;   FUN_00551050
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0055af80
        ;   Label: FUN_0055af80
    PUSH EDX                            ; 0055af84
    CALL FUN_00551050                   ; 0055af85
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 0055af8a
    RET                                 ; 0055af8d

