; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double FUN_005a5fd6(double param_1,double *param_2)
;
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[2]:
;   FUN_004feb90 at 004fedbe
;   FUN_005a3600 at 005a3613
;
; Called Functions:
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005a5fd6
        ;   Label: FUN_005a5fd6
    FLD double ptr [ESP + 0x8]          ; 005a5fd7
    FLD ST0                             ; 005a5fdb
    CALL FUN_005a3120                   ; 005a5fdd
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FSUB ST1,ST0                        ; 005a5fe2
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a5fe4
    FSTP double ptr [EAX]               ; 005a5fe8
    POP EAX                             ; 005a5fea
    SUB ESP,0x8                         ; 005a5feb
    FSTP double ptr [ESP]               ; 005a5fee
    WAIT                                ; 005a5ff1
    POP EAX                             ; 005a5ff2
    POP EDX                             ; 005a5ff3
    WAIT                                ; 005a5ff4
    RET                                 ; 005a5ff5

