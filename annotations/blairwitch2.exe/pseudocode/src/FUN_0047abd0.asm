; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047abd0(int param_1)
;
;
; XREF[2]:
;   FUN_0047b1f0 at 0047b5da
;   FUN_0047d270 at 0047d720
;
; Called Functions:
;   FUN_0047aa60
;   FUN_0047ab10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047abd0
        ;   Label: FUN_0047abd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047abd1
    MOV EDX,dword ptr [EBX + 0x134]     ; 0047abd5
    TEST EDX,EDX                        ; 0047abdb
    JG 0x0047abea                       ; 0047abdd
        ;   XREF to: 0047abea (CONDITIONAL_JUMP)  ; LAB_0047abea
    PUSH EBX                            ; 0047abdf
    CALL FUN_0047aa60                   ; 0047abe0
        ;   XREF to: 0047aa60 (UNCONDITIONAL_CALL)  ; undefined FUN_0047aa60()
    ADD ESP,0x4                         ; 0047abe5
    POP EBX                             ; 0047abe8
    RET                                 ; 0047abe9
    MOV EAX,EDX                         ; 0047abea
        ;   Label: LAB_0047abea
    PUSH EAX                            ; 0047abec
    DEC EDX                             ; 0047abed
    PUSH EDX                            ; 0047abee
    PUSH EBX                            ; 0047abef
    MOV dword ptr [EBX + 0x134],EDX     ; 0047abf0
    CALL FUN_0047ab10                   ; 0047abf6
        ;   XREF to: 0047ab10 (UNCONDITIONAL_CALL)  ; undefined FUN_0047ab10()
    ADD ESP,0xc                         ; 0047abfb
    PUSH EBX                            ; 0047abfe
    CALL FUN_0047aa60                   ; 0047abff
        ;   XREF to: 0047aa60 (UNCONDITIONAL_CALL)  ; undefined FUN_0047aa60()
    ADD ESP,0x4                         ; 0047ac04
    POP EBX                             ; 0047ac07
    RET                                 ; 0047ac08

