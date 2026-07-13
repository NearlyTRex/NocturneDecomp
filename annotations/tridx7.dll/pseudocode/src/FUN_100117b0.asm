; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_100117b0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_10011610 at 10011662
;
; Called Functions:
;   FUN_10008830
;   FUN_100118b0
;   FUN_10011930
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 100117b0
        ;   Label: FUN_100117b0
    MOV EBP,ESP                         ; 100117b1
    PUSH EDI                            ; 100117b3
    MOV EDI,dword ptr [EBP + 0x8]       ; 100117b4
    PUSH EDI                            ; 100117b7
    CALL FUN_100118b0                   ; 100117b8
        ;   XREF to: 100118b0 (UNCONDITIONAL_CALL)  ; undefined FUN_100118b0()
    POP EDX                             ; 100117bd
    INC EAX                             ; 100117be
    PUSH EAX                            ; 100117bf
    CALL FUN_10008830                   ; 100117c0
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; undefined FUN_10008830()
    POP EDX                             ; 100117c5
    OR EAX,EAX                          ; 100117c6
    JZ 0x100117d3                       ; 100117c8
        ;   XREF to: 100117d3 (CONDITIONAL_JUMP)  ; LAB_100117d3
    PUSH EDI                            ; 100117ca
    PUSH EAX                            ; 100117cb
    CALL FUN_10011930                   ; 100117cc
        ;   XREF to: 10011930 (UNCONDITIONAL_CALL)  ; undefined FUN_10011930()
    POP EDX                             ; 100117d1
    POP EDX                             ; 100117d2
    POP EDI                             ; 100117d3
        ;   Label: LAB_100117d3
    LEAVE                               ; 100117d4
    RET                                 ; 100117d5

