; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046cab0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_0043e930 at 0043f00e
;
; Called Functions:
;   FUN_00575070
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 0046cab0
        ;   Label: FUN_0046cab0
    PUSH EDX                            ; 0046cab4
    MOV ECX,dword ptr [ESP + 0xc]       ; 0046cab5
    PUSH ECX                            ; 0046cab9
    CALL FUN_00575070                   ; 0046caba
        ;   XREF to: 00575070 (UNCONDITIONAL_CALL)  ; undefined FUN_00575070()
    ADD ESP,0x8                         ; 0046cabf
    RET                                 ; 0046cac2

