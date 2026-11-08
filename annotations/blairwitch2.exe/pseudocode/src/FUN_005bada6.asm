; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double FUN_005bada6(double param_1,double *param_2)
;
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[2]:
;   FUN_005060b0 at 005062de
;   FUN_005b84d0 at 005b84e3
;
; Called Functions:
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005bada6
        ;   Label: FUN_005bada6
    FLD double ptr [ESP + 0x8]          ; 005bada7
    FLD ST0                             ; 005badab
    CALL FUN_005b7ff0                   ; 005badad
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FSUB ST1,ST0                        ; 005badb2
    MOV EAX,dword ptr [ESP + 0x10]      ; 005badb4
    FSTP double ptr [EAX]               ; 005badb8
    POP EAX                             ; 005badba
    SUB ESP,0x8                         ; 005badbb
    FSTP double ptr [ESP]               ; 005badbe
    WAIT                                ; 005badc1
    POP EAX                             ; 005badc2
    POP EDX                             ; 005badc3
    WAIT                                ; 005badc4
    RET                                 ; 005badc5

