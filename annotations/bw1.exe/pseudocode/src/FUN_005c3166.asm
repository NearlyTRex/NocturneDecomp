; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double FUN_005c3166(double param_1,double *param_2)
;
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[2]:
;   FUN_00527280 at 005274ae
;   FUN_005c0880 at 005c0893
;
; Called Functions:
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005c3166
        ;   Label: FUN_005c3166
    FLD double ptr [ESP + 0x8]          ; 005c3167
    FLD ST0                             ; 005c316b
    CALL FUN_005c03a0                   ; 005c316d
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FSUB ST1,ST0                        ; 005c3172
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c3174
    FSTP double ptr [EAX]               ; 005c3178
    POP EAX                             ; 005c317a
    SUB ESP,0x8                         ; 005c317b
    FSTP double ptr [ESP]               ; 005c317e
    WAIT                                ; 005c3181
    POP EAX                             ; 005c3182
    POP EDX                             ; 005c3183
    WAIT                                ; 005c3184
    RET                                 ; 005c3185

