; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0058a640(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0058a610 at 0058a615
;
; Called Functions:
;   FUN_0058b470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058a640
        ;   Label: FUN_0058a640
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058a641
    PUSH 0x0                            ; 0058a645
    PUSH EBX                            ; 0058a647
    CALL FUN_0058b470                   ; 0058a648
        ;   XREF to: 0058b470 (UNCONDITIONAL_CALL)  ; undefined FUN_0058b470()
    ADD ESP,0x8                         ; 0058a64d
    MOV EAX,EBX                         ; 0058a650
    POP EBX                             ; 0058a652
    RET                                 ; 0058a653

