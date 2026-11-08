; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00575280(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0050ba70 at 0050c875
;
; Called Functions:
;   FUN_00575120
;   FUN_00575200
;   FUN_00575220
;
; *****************************************************************************

section .text

    CALL FUN_00575220                   ; 00575280
        ;   XREF to: 00575220 (UNCONDITIONAL_CALL)  ; undefined FUN_00575220()
        ;   Label: FUN_00575280
    PUSH EAX                            ; 00575285
    MOV EDX,dword ptr [ESP + 0x8]       ; 00575286
    PUSH EDX                            ; 0057528a
    CALL FUN_00575200                   ; 0057528b
        ;   XREF to: 00575200 (UNCONDITIONAL_CALL)  ; undefined FUN_00575200()
    PUSH EAX                            ; 00575290
    CALL FUN_00575120                   ; 00575291
        ;   XREF to: 00575120 (UNCONDITIONAL_CALL)  ; undefined FUN_00575120()
    ADD ESP,0xc                         ; 00575296
    RET                                 ; 00575299

