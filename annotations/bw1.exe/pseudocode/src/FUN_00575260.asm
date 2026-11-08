; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00575260(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0050ba70 at 0050c826
;
; Called Functions:
;   FUN_00575120
;   FUN_00575220
;   FUN_00575240
;
; *****************************************************************************

section .text

    CALL FUN_00575220                   ; 00575260
        ;   XREF to: 00575220 (UNCONDITIONAL_CALL)  ; undefined FUN_00575220()
        ;   Label: FUN_00575260
    PUSH EAX                            ; 00575265
    CALL FUN_00575240                   ; 00575266
        ;   XREF to: 00575240 (UNCONDITIONAL_CALL)  ; undefined FUN_00575240()
    PUSH EAX                            ; 0057526b
    MOV EDX,dword ptr [ESP + 0xc]       ; 0057526c
    PUSH EDX                            ; 00575270
    CALL FUN_00575120                   ; 00575271
        ;   XREF to: 00575120 (UNCONDITIONAL_CALL)  ; undefined FUN_00575120()
    ADD ESP,0xc                         ; 00575276
    RET                                 ; 00575279

