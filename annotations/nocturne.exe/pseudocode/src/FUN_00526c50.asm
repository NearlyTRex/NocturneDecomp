; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00526c50(undefined4 param_1)
;
;
; XREF[11]:
;   FUN_00456650 at 0045665c
;   FUN_0045ab40 at 0045ab8c
;   FUN_0045b020 at 0045b0c8
;   FUN_004a6e90 at 004a70bd
;   FUN_004caef0 at 004caf52
;   FUN_004dc940 at 004dca28
;   FUN_0052dff0 at 0052e3f8
;   FUN_0052eba0 at 0052eba5
;   FUN_00535900 at 005364e4
;   FUN_00554980 at 00554b60
;   ... and 1 more
;
; Called Functions:
;   FUN_005234b0
;   FUN_005284f0
;   FUN_00528890
;
; *****************************************************************************

section .text

    CALL FUN_005284f0                   ; 00526c50
        ;   XREF to: 005284f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005284f0()
        ;   Label: FUN_00526c50
    TEST EAX,EAX                        ; 00526c55
    JZ 0x00526c78                       ; 00526c57
        ;   XREF to: 00526c78 (CONDITIONAL_JUMP)  ; LAB_00526c78
    PUSH 0x1                            ; 00526c59
    MOV ECX,dword ptr [ESP + 0x8]       ; 00526c5b
    PUSH ECX                            ; 00526c5f
    CALL FUN_005234b0                   ; 00526c60
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005234b0()
    ADD ESP,0x8                         ; 00526c65
    TEST EAX,EAX                        ; 00526c68
    JNZ 0x00526c6d                      ; 00526c6a
        ;   XREF to: 00526c6d (CONDITIONAL_JUMP)  ; LAB_00526c6d
    RET                                 ; 00526c6c
    CALL FUN_00528890                   ; 00526c6d
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; undefined FUN_00528890()
        ;   Label: LAB_00526c6d
    MOV EAX,0x1                         ; 00526c72
    RET                                 ; 00526c77
    PUSH EAX                            ; 00526c78
        ;   Label: LAB_00526c78
    MOV EDX,dword ptr [ESP + 0x8]       ; 00526c79
    PUSH EDX                            ; 00526c7d
    CALL FUN_005234b0                   ; 00526c7e
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005234b0()
    ADD ESP,0x8                         ; 00526c83
    TEST EAX,EAX                        ; 00526c86
    SETNZ AL                            ; 00526c88
    AND EAX,0xff                        ; 00526c8b
    RET                                 ; 00526c90

